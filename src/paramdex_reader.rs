use anyhow::{anyhow, Result};
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
use std::io::{self, BufRead, Cursor, Read};
use std::io::{BufWriter, Write};
use std::path::Path;
use std::path::PathBuf;

use crate::xml_meta::ParamMeta;
use crate::xml_paramdef::Paramdef;

pub struct ParamdexDB {
    paramdefs: HashMap<String, BTreeMap<usize, Paramdef>>,
    param_meta: HashMap<String, ParamMeta>,
    names: HashMap<String, HashMap<u32, String>>,
}

impl ParamdexDB {
    fn stripped_file_name(path: impl AsRef<Path>, ext: &str) -> Result<String> {
        Ok(path
            .as_ref()
            .file_name()
            .ok_or(anyhow!("Paramdef file has no name"))?
            .to_string_lossy()
            .strip_suffix(ext)
            .ok_or(anyhow!("File does not end with {}", ext))?
            .to_owned())
    }

    fn load_data_in_folder<T, E: Error + Sync + Send + 'static>(
        path: impl AsRef<Path>,
        ext: &str,
        parser: impl Fn(&str) -> Result<T, E>,
    ) -> Result<Vec<(String, T)>> {
        debug!(
            "Loading data in folder {}",
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
            debug!("Parsing file {}", file.to_string_lossy());
            let res = parser(&fs::read_to_string(&file)?)?;
            vec.push((Self::stripped_file_name(&file, ext)?.to_owned(), res));
        }
        Ok(vec)
    }

    fn parse_name_file(contents: &str) -> Result<HashMap<u32, String>, std::io::Error> {
        let mut cursor = Cursor::new(contents.as_bytes());
        let mut string = String::new();

        let mut hm = HashMap::new();

        while cursor
            .read_line(&mut string)
            .expect("Impossible program state")
            != 0
        {
            if let Some((mabye_id, mabye_name)) = string.split_once(" ") {
                let id = parse_int::parse(mabye_id).ok().ok_or(std::io::Error::new(
                    io::ErrorKind::InvalidData,
                    "Invalid row ID",
                ))?;

                hm.insert(id, mabye_name.to_owned());
            }
        }

        Ok(hm)
    }

    pub fn load(path: impl AsRef<Path>) -> Result<Self> {
        Ok(ParamdexDB {
            paramdefs: {
                let mut defs: HashMap<_, BTreeMap<_, _>> =
                    Self::load_data_in_folder(path.as_ref().join("Defs"), ".xml", |s| {
                        quick_xml::de::from_str::<Paramdef>(s)
                    })?
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
                            .ok_or(anyhow!("file name cannot be converted to UTF8"))?,
                        10,
                    )?;

                    for (name, def) in Self::load_data_in_folder(dir_entry.path(), ".xml", |s| {
                        quick_xml::de::from_str::<Paramdef>(s)
                    })? {
                        defs.entry(name).or_default().insert(version, def);
                    }
                }

                defs
            },
            param_meta: Self::load_data_in_folder(path.as_ref().join("Meta"), ".xml", |s| {
                quick_xml::de::from_str::<ParamMeta>(s)
            })?
            .into_iter()
            .collect(),
            names: Self::load_data_in_folder(
                path.as_ref().join("Names"),
                ".txt",
                Self::parse_name_file,
            )?
            .into_iter()
            .collect(),
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
