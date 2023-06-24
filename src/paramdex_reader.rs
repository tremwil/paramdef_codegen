use log::debug;
use std::collections::HashSet;
use std::collections::{BTreeMap, HashMap};
use std::env;
use std::error::Error;
use std::ffi::OsString;
use std::fs::File;
use std::fs::{self, FileType};
use std::hash::Hash;
use std::io::ErrorKind::InvalidData;
use std::io::{self, Cursor, Read};
use std::io::{BufWriter, Write};
use std::path::Path;
use std::path::PathBuf;

use crate::xml_paramdef::Paramdef;

pub struct ParamdexDB {
    paramdefs: HashMap<String, BTreeMap<usize, Paramdef>>,
}

impl ParamdexDB {
    fn strip_param_name(path: impl AsRef<Path>) -> Result<String, Box<dyn Error>> {
        Ok(path.as_ref().file_name()
            .ok_or("Paramdef file has no name")?
            .to_string_lossy()
            .strip_suffix(".xml")
            .ok_or("Paramdef file does not end with .xml")?
            .to_owned()
        )
    }

    fn load_defs_in_folder(path: impl AsRef<Path>) -> Result<Vec<(String, Paramdef)>, Box<dyn Error>> {
        debug!(
            "Loading defs in folder {}",
            path.as_ref()
                .canonicalize()
                .unwrap_or("INVALID".into())
                .to_string_lossy()
        );
        let mut vec = Vec::new();
        let files = fs::read_dir(path.as_ref())?.into_iter().filter_map(|de| {
            let dir = de.ok()?;
            dir.file_type().ok()?.is_file().then_some(dir.path())
        });
        for file in files {
            debug!("Parsing def {}", file.to_string_lossy());
            let def: Paramdef = quick_xml::de::from_str(&fs::read_to_string(&file)?)?;
            vec.push((Self::strip_param_name(&file)?.to_owned(), def));
        }
        Ok(vec)
    }

    pub fn load_from_folder(path: impl AsRef<Path>) -> Result<Self, Box<dyn Error>> {
        Ok(ParamdexDB {
            paramdefs: {
                let mut defs: HashMap<_, BTreeMap<_, _>> =
                    Self::load_defs_in_folder(path.as_ref().join("Defs"))?
                        .into_iter()
                        .map(|(name, def)| (name, Some((0, def)).into_iter().collect()))
                        .collect();

                for file in fs::read_dir(path.as_ref().join("DefsPatch"))? {
                    let dir_entry = file?;
                    if !dir_entry.file_type()?.is_dir() {
                        continue;
                    }
                    let version = usize::from_str_radix(
                        dir_entry
                            .file_name()
                            .to_str()
                            .ok_or("file name cannot be converted to UTF8")?,
                        10,
                    )?;

                    for (name, def) in Self::load_defs_in_folder(dir_entry.path())? {
                        defs.entry(name).or_default().insert(version, def);
                    }
                }

                defs
            },
        })
    }

    pub fn get_def(&self, name: &str, version: usize) -> Option<&Paramdef> {
        self.paramdefs
            .get(name)?
            .range(0..=version)
            .last()
            .map(|(_, def)| def)
    }

    pub fn get_defs(&self, version: usize) -> HashMap<&str, &Paramdef> {
        self.paramdefs
            .iter()
            .map(|(ptype, patches)| (ptype.as_str(), patches.range(0..=version).last().unwrap().1))
            .collect()
    }

    pub fn get_latest_def(&self, name: &str) -> Option<&Paramdef> {
        self.get_def(name, usize::MAX)
    }

    pub fn get_latest_defs(&self, name: &str) -> HashMap<&str, &Paramdef> {
        self.get_defs(usize::MAX)
    }

    pub fn get_base_def(&self, name: &str) -> Option<&Paramdef> {
        self.get_def(name, 0)
    }

    pub fn get_base_defs(&self) -> HashMap<&str, &Paramdef> {
        self.get_defs(0)
    }
}
