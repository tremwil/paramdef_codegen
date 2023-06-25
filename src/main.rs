mod param;
mod paramdex_reader;
mod xml_meta;
mod xml_paramdef;

fn main() {
    simple_logger::init_with_level(log::Level::Debug).unwrap();
    let db = paramdex_reader::ParamdexDB::load("paramdex").unwrap();
    let def = db.def_latest("ActionButtonParam").unwrap();
    println!("{:?}", def);
}
