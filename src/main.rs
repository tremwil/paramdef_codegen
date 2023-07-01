use std::{
    collections::HashMap,
    io::Result,
    marker::PhantomData,
    ops::{Deref, DerefMut},
    path::Path,
};

mod binary_utils;
mod bnd4;
mod dcx;
mod game;
mod param;
mod paramdex_reader;
mod xml_meta;
mod xml_paramdef;

use crate::{bnd4::*, game::*, param::*};

fn read_regulation<G: Game>(path: impl AsRef<Path>) -> Result<BND4> {
    let bytes = std::fs::read(path.as_ref())?;
    G::decrypt_regulation(bytes.as_slice())
}

fn main() {
    simple_logger::init_with_level(log::Level::Debug).unwrap();
    let db = paramdex_reader::ParamdexDB::load("paramdex").unwrap();

    let type_to_def: HashMap<_, _> = db
        .defs_latest()
        .iter()
        .map(|(&_, &v)| (&v.param_type, v))
        .collect();

    let reg = read_regulation::<ER>("regulations/er").unwrap();
    for file in reg.files {
        if let Some(name) = file.name {
            if !name.ends_with(".param") {
                continue;
            }

            let param = ParamFile::new(&file.data).unwrap();
            println!(
                "{}: {}, size {:?}, {} rows",
                name,
                &param.header.param_type,
                param.row_size,
                param.rows.len()
            );

            if let Some(sz) = param.row_size {
                let expected_sz = type_to_def
                    .get(&param.header.param_type)
                    .unwrap()
                    .size_bytes
                    .unwrap();
                assert!(expected_sz == sz as usize, "Paramdef size mismatch")
            }
        }
    }
}
