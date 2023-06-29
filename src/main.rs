use std::{
    io::Result,
    marker::PhantomData,
    ops::{Deref, DerefMut},
    path::Path,
};

mod binary_utils;
mod bnd4;
mod dcx;
mod param;
mod game;
mod paramdex_reader;
mod xml_meta;
mod xml_paramdef;

mod test {
    pub trait Paramdef {
        const NAME: &'static str;
    }

    pub trait Param {
        type Def: Paramdef;
        const NAME: &'static str;

        fn def(&self) -> &Self::Def;
        fn def_mut(&mut self) -> &mut Self::Def;
    }

    #[derive(Default)]
    pub struct TestParamdef {
        pub field: i32,
    }
    impl Paramdef for TestParamdef {
        const NAME: &'static str = "TestParamdef";
    }
}

use bnd4::BND4;
use game::{Game, ER};
use test::*;

struct TestParam(TestParamdef);
impl Param for TestParam {
    type Def = TestParamdef;
    const NAME: &'static str = "TestParam";
    fn def(&self) -> &Self::Def {
        &self.0
    }
    fn def_mut(&mut self) -> &mut Self::Def {
        &mut self.0
    }
}
impl Deref for TestParam {
    type Target = TestParamdef;
    fn deref(&self) -> &Self::Target {
        self.def()
    }
}
impl DerefMut for TestParam {
    fn deref_mut(&mut self) -> &mut Self::Target {
        self.def_mut()
    }
}

fn test_fn() {
    let mut test_param = TestParam(TestParamdef::default());
    test_param.field = 5;
}

fn read_regulation<G: Game>(path: impl AsRef<Path>) -> Result<BND4> {
    let bytes = std::fs::read(path.as_ref())?;
    G::decrypt_regulation(bytes.as_slice())
}

fn main() {
    simple_logger::init_with_level(log::Level::Debug).unwrap();
    //let db = paramdex_reader::ParamdexDB::load("paramdex").unwrap();

    let reg = read_regulation::<ER>("regulations/er").unwrap();
    println!("{}", reg.header.file_count);
}
