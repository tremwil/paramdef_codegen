use byteorder::*;
use std::io::{Cursor, Error, ErrorKind, Read, Result, Seek, SeekFrom, SeekFrom::*};

use crate::binary_utils::*;
use crate::dcx::DCX;

#[derive(Default)]
pub struct Header {
    pub big_endian: bool,
    pub file_count: u32,
    pub header_size: u64,
    pub version: [u8; 8],
    pub file_headers_size: u64,
    pub file_headers_end: u64,
    pub unicode: bool,
    pub format: u8,
    pub extended: u8,
    pub bucket_offset: u64,
}

impl Header {
    pub fn read(reader: &mut impl Read) -> Result<Header> {
        assert_read(&reader.read_slice()? == b"BND4", "Not a BND4")?;
        assert_read(
            {
                let b = reader.read_u8()?;
                b == 0 || b == 1
            },
            "Unexpected value for unk04",
        )?;
        assert_read(
            {
                let b = reader.read_u8()?;
                b == 0 || b == 1
            },
            "Unexpected value for unk05",
        )?;

        assert_read(reader.read_u8()? == 0, "Unexpected value for unk06")?;
        assert_read(reader.read_u8()? == 0, "Unexpected value for unk07")?;
        assert_read(reader.read_u8()? == 0, "Unexpected value for unk08")?;

        let mut header = Header::default();
        header.big_endian = reader.read_u8()? != 0;

        if header.big_endian {
            header.read_after_endian::<BE>(reader)?;
        } else {
            header.read_after_endian::<LE>(reader)?;
        }
        Ok(header)
    }

    fn read_after_endian<B: ByteOrder>(&mut self, reader: &mut impl Read) -> Result<()> {
        assert_read(
            {
                let b = reader.read_u8()?;
                b == 0 || b == 1
            },
            "Unexpected value for unk0A",
        )?;
        assert_read(reader.read_u8()? == 0, "Unexpected value for unk0B")?;
        self.file_count = reader.read_u32::<B>()?;
        self.header_size = reader.read_u64::<B>()?;
        assert_read(self.header_size == 0x40, "Header size not 0x40")?;
        self.version = reader.read_slice()?;
        self.file_headers_size = reader.read_u64::<B>()?;
        self.file_headers_end = reader.read_u64::<B>()?;
        self.unicode = reader.read_u8()? != 0;
        self.format = reader.read_bits::<B>()?;
        self.extended = reader.read_u8()?;
        assert_read(
            self.extended == 0 || self.extended == 4,
            "Invalid extended flag",
        )?;
        assert_read(reader.read_u8()? == 0, "Unexpected value for unk33")?;
        assert_read(reader.read_u32::<B>()? == 0, "Unexpected value for unk34")?;
        self.bucket_offset = reader.read_u64::<B>()?;

        Ok(())
    }

    pub const FORMAT_COMPRESSED: u8 = 0b00100000;
    pub const FORMAT_HASH: u8 = 0b00000010;
    pub const FORMAT_HAS_ID: u8 = 0b00000110;
    pub const FORMAT_NAMES: u8 = 0b00001100;
    pub const FORMAT_NAME_SPECIAL: u8 = 0b00000100;
}

#[derive(Default, Clone, Eq, PartialEq, Debug)]
pub struct File {
    pub flags: u8,
    pub uncompressed_size: Option<u64>,
    pub id: Option<u32>,
    pub name: Option<String>,
    pub data: Vec<u8>,
}

#[derive(Default, Clone, Eq, PartialEq, Debug)]
pub struct Bucket {
    pub count: u32,
    pub index: u32,
}

#[derive(Default, Clone, Eq, PartialEq, Debug)]
pub struct Hash {
    pub hash: u32,
    pub index: u32,
}

pub struct BND4 {
    pub header: Header,
    pub files: Vec<File>,
    pub buckets: Vec<Bucket>,
    pub hashes: Vec<Hash>,
}

impl BND4 {
    pub fn is(bytes: &[u8]) -> bool {
        bytes.starts_with(b"BND4")
    }

    pub fn read(reader: &mut (impl Read + Seek)) -> Result<BND4> {
        let start = reader.stream_position()?;
        let header = match Header::read(reader) {
            Ok(h) => Ok(h),
            Err(e) => {
                if DCX::is(&reader.at(start)?.read_slice::<4>()?) {
                    reader.seek(Start(start))?;
                    let out = DCX::decompress(reader)?;
                    return Self::read(&mut Cursor::new(out.as_slice()));
                }
                else {
                    Err(e)
                }
            }
        }?;

        if header.big_endian {
            Self::read_endian::<BE>(header, start, reader)
        } else {
            Self::read_endian::<LE>(header, start, reader)
        }
    }

    fn read_endian<B: ByteOrder + 'static>(
        header: Header,
        start: u64,
        r: &mut (impl Read + Seek),
    ) -> Result<BND4> {
        let file_headers_end = start + header.file_headers_end;
        let mut files = Vec::with_capacity(header.file_count as usize);

        for _ in 0..header.file_count {
            let flags = r.read_bits::<B>()?;
            
            assert_read(&r.read_slice()? == b"\0\0\0", "Unexpected file header nonzeros")?;
            assert_read(r.read_i32::<B>()? == -1, "Unexpected file header non -1")?;

            let disk_size = r.read_u64::<B>()?;
            let uncompressed_size = ((header.format & Header::FORMAT_COMPRESSED) != 0)
                .then_some(r.read_u64::<B>()?);
            let data_offset = r.read_u32::<B>()? as u64;

            let mut id =
                ((header.format & Header::FORMAT_HASH) != 0).then_some(r.read_u32::<B>()?);

            let name = ((header.format & Header::FORMAT_NAMES) != 0).then_some({
                let name_offset = r.read_u32::<B>()? as u64;
                let cpos = r.stream_position()?;
                r.seek(Start(start + name_offset))?;

                let name = if header.unicode {
                    r.read_wide_cstring::<B>()?
                } else {
                    r.read_cstring()?
                };

                r.seek(Start(cpos))?;
                name
            });

            if header.format == Header::FORMAT_NAME_SPECIAL {
                id = Some(r.read_u32::<B>()?);
                assert_read(r.read_u32::<B>()? == 0, "Expected zero")?;
            }

            let mut data = Vec::with_capacity(disk_size as usize);
            let cpos = r.stream_position()?;
            r.seek(Start(start + data_offset))?;
            unsafe {
                let slice = std::slice::from_raw_parts_mut(data.as_mut_ptr(), disk_size as usize);
                r.read_exact(slice)?;
                data.set_len(disk_size as usize);
            }
            r.seek(Start(cpos))?;
            files.push(File {
                flags,
                uncompressed_size,
                id,
                name,
                data,
            })
        }

        let mut buckets = Vec::new();
        let mut hashes = Vec::new();

        if header.bucket_offset != 0 {
            r.seek(Start(start + header.bucket_offset))?;

            let hashes_offset = r.read_u64::<B>()?;
            let bucket_count = r.read_u32::<B>()?;

            assert_read(r.read_u8()? == 0x10, "Unsupported bucket header size")?;
            assert_read(r.read_u8()? == 8, "Unsupported bucket header size")?;
            assert_read(r.read_u8()? == 8, "Unsupported bucket header size")?;
            assert_read(r.read_u8()? == 0, "Unsupported bucket unk0F value")?;

            for _ in 0..bucket_count {
                buckets.push(Bucket {
                    count: r.read_u32::<B>()?,
                    index: r.read_u32::<B>()?,
                });
            }

            r.seek(Start(start + hashes_offset))?;
            for _ in 0..header.file_count {
                hashes.push(Hash {
                    hash: r.read_u32::<B>()?,
                    index: r.read_u32::<B>()?,
                });
            }
        }

        Ok(BND4 {
            header,
            files,
            buckets,
            hashes,
        })
    }
}
