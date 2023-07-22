use crate::{
    bnd4::BND4,
    param::*,
    paramdex_reader::{self, ParamdexDB},
    xml_meta::{ParamMeta, ParamMetaEnum},
    xml_paramdef::{DefBaseRustType, DefBaseType, DefField, DefType, DefTypeModifier, Paramdef},
};
use std::{
    collections::HashMap,
    fmt::{self, Error, Result, Write},
    io,
    path::PathBuf,
    str::FromStr,
};

pub struct CodegenParams {
    pub docs: bool,
    pub field_enums: bool,
    pub name_enums: bool,
    pub reflection: bool,
    pub private_dummy8: bool,
}
impl Default for CodegenParams {
    fn default() -> Self {
        CodegenParams {
            docs: true,
            field_enums: true,
            name_enums: true,
            reflection: false,
            private_dummy8: true,
        }
    }
}

pub struct RustCodegen<'a> {
    param_types: HashMap<&'a str, &'a Paramdef>,
    game_params: HashMap<&'a str, ParamFile<'a>>,
    def_db: &'a ParamdexDB,
}

impl<'a> RustCodegen<'a> {
    pub fn new(regulation: &'a BND4, def_db: &'a ParamdexDB, tgt_ver: usize) -> io::Result<Self> {
        let mut game_params = HashMap::new();
        for file in &regulation.files {
            if let Some(path) = &file.name {
                if let Some(no_ext) = path.strip_suffix(".param") {
                    let base_name = no_ext
                        .get(path.rfind(|c| c == '\\' || c == '/').unwrap() + 1..)
                        .unwrap();

                    let param_file = ParamFile::new(&file.data)?;
                    game_params.insert(base_name, param_file);
                }
            }
        }

        Ok(RustCodegen {
            param_types: def_db.defs(tgt_ver),
            game_params,
            def_db,
        })
    }

    fn gen_enum(&self, e: &ParamMetaEnum, out: &mut impl Write) -> fmt::Result {
        if e.base_type.rust_type() == DefBaseRustType::F32 {
            return Err(fmt::Error);
        }

        writeln!(
            out,
            "#[repr({})]\npub enum {} {{",
            e.base_type.rust_type(),
            &e.name
        )?;
        for opt in &e.options {
            let fixed_name : String = opt.name.chars().filter(|c| c.is_ascii_alphanumeric()).collect();
            writeln!(out, "{} = {},", fixed_name, opt.value)?;
        }
        writeln!(out, "}}")
    }

    fn gen_doc_comment(&self, doc: impl AsRef<str>, out: &mut impl Write) -> Result {
        for line in doc.as_ref().split('\n') {
            writeln!(out, "/// {}", line)?;
        }
        Ok(())
    }

    fn gen_field_doc(&self, meta: &ParamMeta, field: &DefField, out: &mut impl Write) -> Result {
        if let Some(wiki) = meta
            .fields
            .get(&field.field_def.name)
            .and_then(|f| f.wiki.as_deref())
        {
            self.gen_doc_comment(wiki, out)?;
        }
        if let Some(dname) = &field.display_name {
            self.gen_doc_comment(format!("### Display Name\n{}", dname), out)?;
        }
        if let Some(desc) = &field.description {
            self.gen_doc_comment(format!("### Description\n{}", desc), out)?;
        }
        if let Some(min) = field.minimum {
            self.gen_doc_comment(format!("### Minimum\n{}", min), out)?;
        }
        if let Some(max) = field.maximum {
            self.gen_doc_comment(format!("### Maximum\n{}", max), out)?;
        }

        Ok(())
    }

    fn type_vis(&self, t: DefBaseType, config: &CodegenParams) -> &str {
        if config.private_dummy8 && t == DefBaseType::Dummy8 {
            ""
        } else {
            "pub "
        }
    }

    /// # Panics
    /// if `name` is not a paramdef found in the paramdex DB passed on construction.
    pub fn gen_paramdef(
        &self,
        name: &str,
        config: &CodegenParams,
        out: &mut impl std::fmt::Write,
    ) -> Result {
        let def = self.param_types[name];
        let meta = self.def_db.def_meta(name).unwrap();

        let enums: HashMap<_, _> = meta.enums.iter().map(|e| (e.name.as_str(), e)).collect();
        if config.field_enums {
            for e in meta.enums.iter() {
                self.gen_enum(e, out)?;
            }
        }

        if config.docs {
            if let Some(wiki) = &meta.self_desc {
                self.gen_doc_comment(wiki, out)?;
            }
        }
        writeln!(out, "#[repr(C)]\npub struct {} {{", &def.param_type)?;

        let mut impl_code = format!("impl {} {{\n", &def.param_type);
        let mut field_doc = String::new();
        let mut last_bitfield_offset = None;
        let mut pad_id = 0;

        for f in def.fields.iter() {
            field_doc.clear();
            self.gen_field_doc(meta, f, &mut field_doc)?;

            if !f.field_def.modifier.is_bitfield() {
                if let Some(ofs) = last_bitfield_offset {
                    last_bitfield_offset = None;
                    let pad_bytes = (f.bit_offset.unwrap() - ofs) / 8;
                    pad_id += 1;
                    writeln!(out, "_bitfield{}: [u8; {}],", pad_id, pad_bytes)?;
                }
            } else if last_bitfield_offset.is_none() {
                last_bitfield_offset = Some(f.bit_offset.unwrap());
            }

            let rust_type = if config.field_enums {
                if let Some((name, _)) = meta
                    .fields
                    .get(&f.field_def.name)
                    .and_then(|m| m.enum_name.as_deref())
                    .and_then(|n| enums.get_key_value(n))
                {
                    name
                } else {
                    f.field_def.base_type.rust_type().to_str()
                }
            } else {
                f.field_def.base_type.rust_type().to_str()
            };

            match f.field_def.modifier {
                DefTypeModifier::None => {
                    writeln!(
                        out,
                        "{}{}{}: {},",
                        &field_doc,
                        self.type_vis(f.field_def.base_type, config),
                        &f.field_def.name,
                        rust_type
                    )?;
                }
                DefTypeModifier::Array(len) => {
                    writeln!(
                        out,
                        "{}{}{}: [{}; {}],",
                        &field_doc,
                        self.type_vis(f.field_def.base_type, config),
                        &f.field_def.name,
                        rust_type,
                        len
                    )?;
                }
                DefTypeModifier::Bitfield(width) => {
                    let field_name = &f.field_def.name;
                    let base_int = f.field_def.base_type.rust_type().to_str();
                    let read_bit_offset = f.bit_offset.unwrap() & !(f.alignment_bits() - 1);
                    let read_offset = read_bit_offset / 8;
                    let shift = f.bit_offset.unwrap() - read_bit_offset;
                    let mask = ((1usize << width) - 1) << shift;

                    writeln!(
                        &mut impl_code,
                        r"
                    {field_doc}pub fn {field_name}_get(&self) -> {rust_type} {{
                        unsafe {{
                            let mem = *((self as *const Self as *const u8 as usize + {read_offset}) as *const {base_int});
                            std::mem::transmute((mem & {mask}{base_int}) >> {shift})
                        }}
                    }}
                    {field_doc}pub fn {field_name}_set(&mut self, value: {rust_type}) {{
                        unsafe {{
                            let bi : {base_int} = std::mem::transmute(value);
                            let mem_ptr = (self as *const Self as *const u8 as usize + {read_offset}) as *mut {base_int};
                            *mem_ptr = *mem_ptr & !{mask}{base_int} | (bi << {shift});
                        }}
                    }}
                    {field_doc}pub fn {field_name}_update(&mut self, f: impl Fn({rust_type}) -> {rust_type}) {{
                        self.{field_name}_set(f(self.{field_name}_get()));
                    }}"
                    )?;
                }
            }
        }

        writeln!(out, "}}")?;
        writeln!(out, "{}}}", &impl_code)
    }
}
