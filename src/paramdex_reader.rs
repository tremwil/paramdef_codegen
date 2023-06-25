use crate::xml_meta::ParamMeta;
use crate::xml_paramdef::Paramdef;
use anyhow::{anyhow, Result};
use log::debug;
use quick_xml::DeError;
use std::collections::{BTreeMap, HashMap};
use std::error::Error;
use std::fs::{self};
use std::io::{self, BufRead, Cursor};
use std::path::Path;

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
                    Self::load_data_in_folder(path.as_ref().join("Defs"), ".xml", |s| -> Result<_, DeError> {
                        Ok(quick_xml::de::from_str::<Paramdef>(s)?.compute_field_offsets())
                    })?
                    .into_iter()
                    .map(|(name, def)| (name, BTreeMap::from([(0, def)])))
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

                    for (name, def) in Self::load_data_in_folder(dir_entry.path(), ".xml", |s| -> Result<_, DeError> {
                        Ok(quick_xml::de::from_str::<Paramdef>(s)?.compute_field_offsets())
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

    pub fn def(&self, name: &str, version: usize) -> Option<&Paramdef> {
        self.paramdefs
            .get(name)?
            .range(0..=version)
            .last()
            .map(|(_, def)| def)
    }

    pub fn defs(&self, version: usize) -> HashMap<&str, &Paramdef> {
        self.paramdefs
            .iter()
            .map(|(ptype, patches)| (ptype.as_str(), patches.range(0..=version).last().unwrap().1))
            .collect()
    }

    pub fn latest_def(&self, name: &str) -> Option<&Paramdef> {
        self.def(name, usize::MAX)
    }

    pub fn latest_defs(&self) -> HashMap<&str, &Paramdef> {
        self.defs(usize::MAX)
    }

    pub fn base_def(&self, name: &str) -> Option<&Paramdef> {
        self.def(name, 0)
    }

    pub fn base_defs(&self) -> HashMap<&str, &Paramdef> {
        self.defs(0)
    }

    pub fn def_meta(&self, name: &str) -> Option<&ParamMeta> {
        self.param_meta.get(name)
    }

    pub fn def_metas(&self) -> &HashMap<String, ParamMeta> {
        &self.param_meta
    }

    pub fn param_names(&self) -> impl Iterator<Item = &str> {
        self.names.keys().into_iter().map(String::as_str)
    }

    pub fn row_id_names(&self, param_name: &str) -> Option<&HashMap<u32, String>> {
        self.names.get(param_name)
    }

    pub fn all_row_id_names(&self) -> &HashMap<String, HashMap<u32, String>> {
        &self.names
    }
}
