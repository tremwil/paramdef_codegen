use byteorder::{ByteOrder, ReadBytesExt, BE, LE};
use std::ffi::CStr;
use std::{
    collections::HashMap,
    io::{
        Cursor, Error, ErrorKind, Result, Seek,
        SeekFrom::{self, *},
    },
};

use crate::binary_utils::{ByteOrderExt, ReadExt, ReadSliceExt, SeekExt};

pub struct Header {
    pub strings_offset: u32,
    pub short_data_offset: u16,
    pub unk06: u16,
    pub paramdef_data_version: u16,
    pub row_count: u16,
    pub param_type: String,
    pub big_endian: bool,
    pub format_flags_2d: u8,
    pub is_64bit: bool,
    pub is_unicode: bool,
    pub paramdef_version: u8,
    pub data_offset: Option<u64>,
}
impl Header {
    pub fn new(data: &[u8]) -> Result<Self> {
        let mut r = Cursor::new(data);
        let big_endian = r.do_at(Start(0x2C), |r| r.read_u8())? != 0;
        match big_endian {
            true => Self::new_endian::<BE>(&mut r),
            false => Self::new_endian::<LE>(&mut r),
        }
    }

    fn new_endian<B: ByteOrder>(r: &mut Cursor<&[u8]>) -> Result<Self> {
        let f2d = r.do_at(Start(0x2D), |r| r.read_u8())?;
        Ok(Header {
            strings_offset: r.read_u32::<B>()?,
            short_data_offset: r.read_u16::<B>()?,
            unk06: r.read_u16::<B>()?,
            paramdef_data_version: r.read_u16::<B>()?,
            row_count: r.read_u16::<B>()?,
            param_type: {
                if (f2d & 0x80) != 0 {
                    r.seek(Current(0x4))?; // Skip padding
                    let ofs = r.read_u64::<B>()?;
                    let t = r.do_at(Start(ofs), |r| r.read_cstring())?;
                    r.seek(Current(0x14))?; // Skip more padding
                    t
                } else {
                    r.read_fixed_str(0x20)?.to_owned()
                }
            },
            big_endian: r.read_u8()? != 0,
            format_flags_2d: r.read_u8()?,
            is_64bit: (f2d & 4) != 0,
            is_unicode: (r.read_u8()? & 1) != 0,
            paramdef_version: r.read_u8()?,
            data_offset: {
                if (f2d & 3) == 3 {
                    let d = r.read_u32::<B>()? as u64;
                    r.seek(Current(12))?;
                    Some(d)
                } else if (f2d & 4) != 0 {
                    let d = r.read_u64::<B>()?;
                    r.seek(Current(8))?;
                    Some(d)
                } else {
                    None
                }
            },
        })
    }
}

pub struct Row<'a> {
    pub id: u32,
    pub name: Option<String>,
    pub data: &'a [u8],
}

pub struct ParamFile<'a> {
    pub header: Header,
    pub row_size: Option<u64>,
    pub rows: Vec<Row<'a>>,
    pub data: &'a [u8],
}

impl<'a> ParamFile<'a> {
    pub fn new(data: &'a [u8]) -> Result<Self> {
        let mut r = Cursor::new(data);
        let big_endian = r.do_at(Start(0x2C), |r| r.read_u8())? != 0;
        match big_endian {
            true => Self::new_endian::<BE>(&mut r),
            false => Self::new_endian::<LE>(&mut r),
        }
    }

    fn new_endian<B: ByteOrder + 'static>(r: &mut Cursor<&'a [u8]>) -> Result<Self> {
        let header = Header::new_endian::<B>(r)?;
        let rows_start = r.position();

        let row_size = (header.row_count >= 2).then_some(match header.is_64bit {
            true => {
                let o1 = r.do_at(Start(rows_start + 8), |r| r.read_u64::<B>())?;
                let o2 = r.do_at(Start(rows_start + 8 + 0x18), |r| r.read_u64::<B>())?;
                o2 - o1
            }
            false => {
                let o1 = r.do_at(Start(rows_start + 4), |r| r.read_u32::<B>())?;
                let o2 = r.do_at(Start(rows_start + 8 + 0x18), |r| r.read_u32::<B>())?;
                (o2 - o1) as u64
            }
        });

        let mut rows = Vec::new();
        for _ in 0..header.row_count {
            let id = r.read_u32::<B>()?;
            let (data_ofs, name_ofs) = match header.is_64bit {
                true => {
                    r.seek(Current(4))?;
                    (r.read_u64::<B>()?, r.read_i64::<B>()?)
                }
                false => (r.read_u32::<B>()? as u64, r.read_i32::<B>()? as i64),
            };

            let data = r.do_at(Start(data_ofs), |r| {
                let max_sz = r.get_ref().len() as u64 - r.position();
                r.read_slice_ref(row_size.unwrap_or(max_sz) as usize)
            })?;

            let name = (name_ofs != -1).then_some(r.do_at(Start(name_ofs as u64), |r| {
                match header.is_unicode {
                    true => r.read_wide_cstring::<B>(),
                    false => r.read_cstring(),
                }
            })?);

            rows.push(Row { id, name, data });
        }

        Ok(ParamFile {
            header,
            row_size,
            rows,
            data: r.get_ref(),
        })
    }
}
