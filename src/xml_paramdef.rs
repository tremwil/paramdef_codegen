use lazy_static::lazy_static;
use regex::Regex;
use serde::{de, Deserialize};
use serde_derive::Deserialize;

#[derive(Deserialize, Clone, Debug)]
#[serde(rename = "PARAMDEF", rename_all = "PascalCase")]
pub struct Paramdef {
    pub param_type: String,
    pub data_version: u32,
    pub big_endian: bool,
    pub unicode: bool,
    pub format_version: u32,
    pub fields: DefFields,

    #[serde(skip_serializing, skip_deserializing)] 
    pub size_bytes: Option<usize>,
}

impl Paramdef {
    pub fn compute_field_offsets(mut self) -> Self {
        let mut bit_offset : usize = 0;
        self.fields.first_mut().map(|f| f.bit_offset = Some(0));
        for i in 1..self.fields.len() {
            bit_offset = self.fields[i].field_def.compute_bit_offset(bit_offset, &self.fields[i-1].field_def);
            self.fields[i].bit_offset = Some(bit_offset);
        }
        // Align bit offset to last field's size
        self.fields.last().map(|f| {
            let a = 8 * f.alignment();
            bit_offset = (bit_offset + f.size_bits() + a - 1) & !(a - 1);
        });
        self.size_bytes = Some(bit_offset / 8);
        self
    }
}

#[derive(Deserialize, Clone, Debug)]
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

impl std::ops::DerefMut for DefFields {
    fn deref_mut(&mut self) -> &mut Self::Target {
        &mut self.field
    }
}

#[derive(Deserialize, Clone, Debug)]
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

    #[serde(skip_serializing, skip_deserializing)] 
    pub bit_offset: Option<usize>,
}

impl DefField {
    fn alignment(&self) -> usize {
        self.field_def.alignment()
    }

    fn alignment_bits(&self) -> usize {
        self.field_def.alignment_bits()
    }

    fn size_bytes(&self) -> usize {
        self.field_def.size_bytes()
    }

    fn size_bits(&self) -> usize {
        self.field_def.size_bits()
    }
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

impl DefBaseRustType {
    pub fn size_bytes(&self) -> usize {
        match *self {
            Self::U8 | Self::I8 => 1,
            Self::U16 | Self::I16 => 2,
            Self::U32 | Self::I32 | Self::F32 => 4
        }
    }

    pub fn alignment(&self) -> usize {
        self.size_bytes()
    }
}

#[derive(Clone, Debug, Copy, PartialEq, Eq, Deserialize)]
#[serde(rename_all = "lowercase")]
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

    pub fn size_bytes(&self) -> usize {
        self.rust_type().size_bytes()
    }

    pub fn alignment(&self) -> usize {
        self.rust_type().alignment()
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

impl DefType {
    fn size_bytes(&self) -> usize {
        match self.modifier {
            DefTypeModifier::None | DefTypeModifier::Bitfield(_) => self.base_type.size_bytes(),
            DefTypeModifier::Array(len) => len * self.base_type.size_bytes(),
        }
    }

    fn size_bits(&self) -> usize {
        match self.modifier {
            DefTypeModifier::None => 8 * self.base_type.size_bytes(),
            DefTypeModifier::Array(len) => 8 * len * self.base_type.size_bytes(),
            DefTypeModifier::Bitfield(width) => width
        }
    }

    fn alignment(&self) -> usize {
        self.base_type.alignment()
    }

    fn alignment_bits(&self) -> usize {
        self.alignment() * 8
    }

    fn compute_bit_offset(&self, prev_offset: usize, prev_field: &DefType) -> usize {
        // Handle bitfields
        if let DefTypeModifier::Bitfield(my_bit_width) = self.modifier {
            if let DefTypeModifier::Bitfield(prev_bit_width) = prev_field.modifier {
                if self.base_type.rust_type() == prev_field.base_type.rust_type() {

                    // Ensure there is enough place in the integer type to fit the bitfield
                    let bit_shift = prev_offset & (self.alignment_bits() - 1);
                    if bit_shift + prev_bit_width + my_bit_width <= self.alignment_bits() {
                        return prev_offset + prev_bit_width;
                    }
                }
            }
        }

        // Otherwise, add the size of the previous one, and align
        let next_offset = prev_offset + prev_field.size_bits();
        next_offset + (self.alignment_bits() - 1) & !(self.alignment_bits() - 1)
    }
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

        let s: &str = de::Deserialize::deserialize(deserializer)?;
        let captures = FIELD_PARSE.captures(s).ok_or(de::Error::invalid_value(
            de::Unexpected::Str(s),
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
