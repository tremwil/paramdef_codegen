use lazy_static::lazy_static;
use regex::Regex;
use serde::{de, Deserialize};
use serde_derive::Deserialize;

fn deserialize_bool_caps<'de, D>(deserializer: D) -> Result<bool, D::Error>
where
    D: de::Deserializer<'de>,
{
    let s: String = de::Deserialize::deserialize(deserializer)?;

    match s.as_str() {
        "True" => Ok(true),
        "False" => Ok(false),
        _ => Err(de::Error::unknown_variant(&s, &["True", "False"])),
    }
}

#[derive(Deserialize)]
#[serde(rename = "PARAMDEF")]
#[serde(rename_all = "PascalCase")]
pub struct Paramdef {
    pub param_type: String,
    pub data_version: u32,
    #[serde(deserialize_with = "deserialize_bool_caps")]
    pub big_endian: bool,
    #[serde(deserialize_with = "deserialize_bool_caps")]
    pub unicode: bool,
    pub format_version: u32,
    pub fields: DefFields,
}

#[derive(Deserialize)]
#[serde(rename_all = "PascalCase")]
pub struct DefFields {
    field: Vec<DefField>,
}

impl std::ops::Deref for DefFields {
    type Target = Vec<DefField>;
    fn deref(&self) -> &Self::Target {
        &self.field
    }
}

#[derive(Deserialize)]
#[serde(rename_all = "PascalCase")]
pub struct DefField {
    #[serde(rename = "@Def")]
    pub field_def: DefType,
    pub display_name: Option<String>,
    pub r#enum: Option<String>,
    pub description: Option<String>,
    pub edit_flags: Option<String>,
    pub minimum: Option<f64>,
    pub maximum: Option<f64>,
    pub increment: Option<f32>,
    pub sort_id: Option<i32>,
}

#[derive(Clone, Debug, Copy, PartialEq, Eq)]
pub enum DefBaseRustType {
    U8,
    I8,
    U16,
    I16,
    U32,
    I32,
    F32,
}

#[derive(Clone, Debug, Copy, PartialEq, Eq)]
pub enum DefBaseType {
    Dummy8,
    S8,
    U8,
    S16,
    U16,
    S32,
    U32,
    F32,
    Fixstr,
    FixstrW,
}

impl DefBaseType {
    pub fn rust_type(&self) -> DefBaseRustType {
        match *self {
            Self::Dummy8 => DefBaseRustType::U8,
            Self::S8 => DefBaseRustType::I8,
            Self::U8 => DefBaseRustType::U8,
            Self::S16 => DefBaseRustType::I16,
            Self::U16 => DefBaseRustType::U16,
            Self::S32 => DefBaseRustType::I32,
            Self::U32 => DefBaseRustType::U32,
            Self::F32 => DefBaseRustType::F32,
            Self::Fixstr => DefBaseRustType::I8,
            Self::FixstrW => DefBaseRustType::I16,
        }
    }

    pub fn from_str(s: &str) -> Option<DefBaseType> {
        match s {
            "dummy8" => Some(Self::Dummy8),
            "s8" => Some(Self::S8),
            "u8" => Some(Self::U8),
            "s16" => Some(Self::S16),
            "u16" => Some(Self::U16),
            "s32" => Some(Self::S32),
            "u32" => Some(Self::U32),
            "f32" => Some(Self::F32),
            "fixstr" => Some(Self::Fixstr),
            "fixstrW" => Some(Self::FixstrW),
            _ => None,
        }
    }
}

#[derive(Clone, Debug, Copy, PartialEq, Eq)]
pub enum DefTypeModifier {
    None,
    Array(usize),
    Bitfield(usize),
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct DefType {
    pub name: String,
    pub base_type: DefBaseType,
    pub modifier: DefTypeModifier,
}

impl<'de> Deserialize<'de> for DefType {
    fn deserialize<D>(deserializer: D) -> Result<Self, D::Error>
    where
        D: serde::Deserializer<'de>,
    {
        lazy_static! {
            static ref FIELD_PARSE: Regex = Regex::new(
                r"^(?P<base_type>[\w\d_]+)\s+(?P<name>[\w\d_]+)\s*((\[(?P<array_size>[\w\d]+)\])|(:\s*(?P<bitfield_size>[\w\d]+)))?\s*(=.*)?$"
            ).unwrap();
        }

        let s: String = de::Deserialize::deserialize(deserializer)?;
        let captures = FIELD_PARSE.captures(&s).ok_or(de::Error::invalid_value(
            de::Unexpected::Str(&s),
            &"C struct field",
        ))?;

        Ok(DefType {
            name: captures.name("name").unwrap().as_str().to_owned(),
            base_type: {
                let base_type_str = captures.name("base_type").unwrap().as_str();
                DefBaseType::from_str(base_type_str).ok_or(de::Error::invalid_value(
                    de::Unexpected::Str(base_type_str),
                    &"paramdef field type",
                ))?
            },
            modifier: {
                let parse_int = |s: &str| {
                    parse_int::parse(s).or(Err(de::Error::invalid_value(
                        de::Unexpected::Str(s),
                        &"positive integer",
                    )))
                };

                if let Some(arr_size) = captures.name("array_size") {
                    DefTypeModifier::Array(parse_int(arr_size.as_str())?)
                } else if let Some(bit_size) = captures.name("bitfield_size") {
                    DefTypeModifier::Bitfield(parse_int(bit_size.as_str())?)
                } else {
                    DefTypeModifier::None
                }
            },
        })
    }
}
