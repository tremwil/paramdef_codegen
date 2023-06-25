use crate::xml_paramdef::DefBaseType;
use serde::{
    de::{self, Visitor},
    Deserialize,
};
use serde_derive::Deserialize;
use std::{collections::HashMap, marker::PhantomData};

#[derive(Clone, Debug, Deserialize)]
#[serde(rename = "PARAMMETA", rename_all = "PascalCase")]
pub struct ParamMeta {
    #[serde(rename = "@XmlVersion")]
    pub xml_version: u64,
    #[serde(default)]
    pub enums: ParamMetaEnums,
    #[serde(
        rename = "Field",
        deserialize_with = "deserialize_map::<ParamMetaField, _>"
    )]
    pub fields: HashMap<String, ParamMetaField>,
}

#[derive(Default, Clone, Debug, Deserialize)]
#[serde(rename_all = "PascalCase")]
pub struct ParamMetaEnums {
    #[serde(default)]
    pub r#enum: Vec<ParamMetaEnum>,
}

impl std::ops::Deref for ParamMetaEnums {
    type Target = Vec<ParamMetaEnum>;

    fn deref(&self) -> &Self::Target {
        &self.r#enum
    }
}

#[derive(Clone, Debug, Deserialize)]
pub struct ParamMetaEnum {
    #[serde(rename = "@Name")]
    pub name: String,
    #[serde(rename = "@type")]
    pub base_type: DefBaseType,
    #[serde(default, rename = "Option")]
    pub options: Vec<ParamEnumOption>,
}

#[derive(Clone, Debug, Deserialize)]
pub struct ParamEnumOption {
    #[serde(rename = "@Value")]
    pub value: i64,
    #[serde(rename = "@Name")]
    pub name: String,
}

#[derive(Clone, Debug, Default, Deserialize)]
pub struct ParamMetaField {
    #[serde(rename = "@AltName")]
    pub alt_name: String,
    #[serde(rename = "@Wiki")]
    pub wiki: Option<String>,
    #[serde(rename = "@EnumName")]
    pub enum_name: Option<String>,
    #[serde(default, rename = "@IsBool", deserialize_with = "is_tag_present")]
    pub is_bool: bool,
}

fn is_tag_present<'de, D>(_deserializer: D) -> Result<bool, D::Error>
where
    D: serde::Deserializer<'de>,
{
    Ok(true)
}

fn deserialize_map<'de, T, D>(deserializer: D) -> Result<HashMap<String, T>, D::Error>
where
    T: Deserialize<'de> + 'de,
    D: serde::Deserializer<'de>,
{
    struct MapVisitor<'d, Q: Deserialize<'d>> {
        phantom: PhantomData<fn() -> &'d Q>,
    }

    impl<'d, Q: Deserialize<'d>> Visitor<'d> for MapVisitor<'d, Q> {
        type Value = HashMap<String, Q>;

        fn expecting(&self, formatter: &mut std::fmt::Formatter) -> std::fmt::Result {
            write!(formatter, "Map")
        }

        fn visit_map<A>(self, mut map: A) -> Result<Self::Value, A::Error>
        where
            A: de::MapAccess<'d>,
        {
            let mut hm = HashMap::new();
            while let Some((k, v)) = map.next_entry()? {
                hm.insert(k, v);
            }
            Ok(hm)
        }
    }

    deserializer.deserialize_map(MapVisitor {
        phantom: PhantomData,
    })
}
