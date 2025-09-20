use std::collections::{HashMap, HashSet};
use std::fmt::{Write, Result};
use crate::param::*;
use crate::xml_paramdef::*;
use crate::paramdex_reader::*;
use crate::bnd4::BND4;
use std::io;

pub struct CppCodegen<'a> {
    param_types: HashMap<&'a str, &'a Paramdef>,
    game_params: HashMap<&'a str, ParamFile<'a>>,
    def_db: &'a ParamdexDB
}

impl<'a> CppCodegen<'a> {
    pub fn new(regulation: &'a BND4, def_db: &'a ParamdexDB, tgt_ver: usize) -> io::Result<Self> {
        let mut game_params = HashMap::new();
        for file in &regulation.files {
            if let Some(path) = &file.name {
                if let Some(no_ext) = path.strip_suffix(".param") {
                    let base_name = no_ext
                        .get(path.rfind(|c| c == '\\' || c == '/').unwrap() + 1..)
                        .unwrap();

                    log::debug!("{}", path);
                    std::fs::write("./param_files/".to_owned() + base_name + ".param", &file.data)?;
                    let param_file = ParamFile::new(&file.data)?;
                    game_params.insert(base_name, param_file);
                }
            }
        }

        Ok(CppCodegen {
            param_types: def_db.defs(tgt_ver),
            game_params,
            def_db
        })
    }

    fn gen_indented_text(&self, indent: usize, text: impl AsRef<str>, out: &mut impl Write) -> Result {
        for line in text.as_ref().split('\n') {
            writeln!(out, "{:indent$}{}", "", line, indent = indent)?;
        }
        Ok(())
    }

    fn gen_docs(&self, text: impl AsRef<str>, out: &mut impl Write) -> Result {
        for line in text.as_ref().split('\n') {
            writeln!(out, "/// {}", line)?;
        }
        Ok(())
    }

    fn gen_prelude(&self, out: &mut impl Write) -> Result {
        writeln!(out, r#"/* This file was automatically generated. Do not edit. */

#pragma once
#ifndef _PARAMDEFS_H

namespace params {{

typedef char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef unsigned int b32;
typedef long long s64;
typedef unsigned long long u64;
typedef char fixstr;
typedef wchar_t fixstrW;
typedef float f32;
typedef float angle32;
typedef double f64;
typedef unsigned char dummy8;
"#)
    }

    fn gen_paramdef(&self, def: &Paramdef, out: &mut impl Write) -> Result {
        writeln!(out, r#"struct {} {{
    static constexpr const char* TYPE_NAME = "{}";
    "#, &def.param_type, &def.param_type)?;

        let mut dup_counts : HashMap<_, u32> = HashMap::new();
        for field in def.fields.iter() {
            *dup_counts.entry(&field.field_def.name).or_default() += 1;
        }
        
        let mut dups : HashMap<_, u32> = HashMap::new();
        let patched_names = def.fields.iter().map(move |f| {
            let name = &f.field_def.name;
            if dup_counts[name] == 1 {
                name.to_owned()
            }
            else {
                let suffix = *dups.entry(name).and_modify(|c| *c += 1).or_default();
                format!("{}_{}", name, suffix)
            }
        });

        for (field, patched_name) in def.fields.iter().zip(patched_names) {
            let mut field_text = String::new();
            if let Some(display_name) = &field.display_name {
                if let Some(description) = &field.description {
                    if !description.starts_with(display_name) {
                        self.gen_docs(display_name, &mut field_text)?;
                        self.gen_docs("", &mut field_text)?;
                    }
                    self.gen_docs(description, &mut field_text)?;
                }
                else {
                    self.gen_docs(display_name, &mut field_text)?;
                }
            }
            else if let Some(description) = &field.description {
                self.gen_docs(description, &mut field_text)?;
            }
            match field.field_def.modifier {
                DefTypeModifier::None => {
                    writeln!(&mut field_text, "{} {};", field.field_def.base_type, patched_name)?;
                }
                DefTypeModifier::Array(size) => {
                    writeln!(&mut field_text, "{} {}[{}];", field.field_def.base_type, patched_name, size)?;
                }
                DefTypeModifier::Bitfield(width) => {
                    writeln!(&mut field_text, "{} {} : {};", field.field_def.base_type, patched_name, width)?;
                }
            }

            self.gen_indented_text(4, &field_text, out)?;
        }
        writeln!(out, "}};\n")?;
        
        Ok(())
    }

    fn gen_params(&self, out: &mut impl Write) -> Result {
        for (name, param) in self.game_params.iter() {
            writeln!(out, r#"struct {} : public {} {{
    static constexpr const char* NAME = "{}";
}};
"#, name, param.header.param_type, name)?;
        }

        Ok(())
    }

    pub fn gen_single_header(&self, out: &mut impl Write) -> Result {
        self.gen_prelude(out)?;
        for (_, def) in self.param_types.iter() {
            self.gen_paramdef(def, out)?;
        }
        self.gen_params(out)?;
        write!(out, "}};\n\n#endif")
    }
}