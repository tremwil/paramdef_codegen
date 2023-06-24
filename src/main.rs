use std::path::PathBuf;

mod param;
mod paramdex_reader;
mod xml_paramdef;

fn main() {
    simple_logger::init_with_level(log::Level::Debug).unwrap();
    let db = paramdex_reader::ParamdexDB::load_from_folder("paramdex").unwrap();
    let def = db.get_latest_def("ActionButtonParam").unwrap();
    for f in def.fields.iter() {
        println!(
            "{}: {}",
            &f.field_def.name,
            f.display_name.as_deref().unwrap_or("(No display name)")
        );
    }
}
