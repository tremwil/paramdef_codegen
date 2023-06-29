use std::{io::{Seek, Read, Result, SeekFrom::*, Error, ErrorKind}};
use byteorder::{ReadBytesExt, BE};

use flate2::{Decompress, FlushDecompress, Status};

use crate::binary_utils::{ReadExt, assert_read, SeekExt};

#[allow(non_camel_case_types)]
pub enum Kind {
    Unknown,
    DCP_DFLT,
    DCP_EDGE,
    DCX_EDGE,
    DCX_DFLT(u32, u32, u8, u8),
    DCX_KRAK, // Unsupported (requires Oodle)
    Zlib
}

pub struct DCX;
impl DCX {
    pub fn is(bytes: &[u8]) -> bool {
        if bytes.len() < 4 {
            false
        }
        else {
            let b0 = bytes[0];
            let b1 = bytes[1];
            let magic = &bytes[0..4];
            magic == b"DCP\0" || magic == b"DCX\0" || b0 == 0x78 && 
                (b1 == 0x01 || b1 == 0x5E || b1 == 0x9C || b1 == 0xDA)
        }
    }

    pub fn decompress(r: &mut (impl Read + Seek)) -> Result<Vec<u8>> {
        let start = r.stream_position()?;
        
        let mut kind = Kind::Unknown;
        let (mut compressed_size, mut uncompressed_size) = (0, None);
        let magic = r.read_slice()?;
        if &magic == b"DCP\0" {
            kind = match &r.read_slice()? {
                b"DFLT" => Kind::DCP_DFLT,
                b"EDGE" => Kind::DCP_EDGE,
                _ => Kind::Unknown
            };
            uncompressed_size = Some(r.at(0x1C)?.read_u32::<BE>()?);
            compressed_size = r.read_u32::<BE>()?;
        }
        else if &magic == b"DCX\0" {
            r.seek(Start(start + 0x28))?;
            kind = match &r.read_slice()? {
                b"EDGE" => Kind::DCX_EDGE,
                b"KRAK" => Kind::DCX_KRAK,
                b"DFLT" => {
                    let unk04 = r.at(start + 4)?.read_u32::<BE>()?;
                    let unk10 = r.at(start + 0x10)?.read_u32::<BE>()?;
                    let unk30 = r.at(start + 0x30)?.read_u8()?;
                    let unk38 = r.at(start + 0x38)?.read_u8()?;

                    Kind::DCX_DFLT(unk04, unk10, unk30, unk38)
                },
                _ => Kind::Unknown
            };
            uncompressed_size = Some(r.at(0x1C)?.read_u32::<BE>()?);
            compressed_size = r.read_u32::<BE>()?;
        }
        else {
            let b0 = r.at(start)?.read_u8()?;
            let b1 = r.read_u8()?;
            if b0 == 0x78 && (b1 == 0x01 || b1 == 0x5E || b1 == 0x9C || b1 == 0xDA) {
                kind = Kind::Zlib;
            }
            compressed_size = r.my_stream_len()? as u32;
        }

        r.seek(Start(start))?;
        match kind {
            Kind::Zlib => Self::read_zlib(r, compressed_size, uncompressed_size),
            Kind::DCP_DFLT => Self::read_zlib(r.at(start + 0x24)?, compressed_size, uncompressed_size),
            Kind::DCX_DFLT(_, _, _, _) => 
                Self::read_zlib(r.at(start + 0x4C)?, compressed_size, uncompressed_size),
            Kind::DCP_EDGE => {
                let data_start = r.seek(Start(start + 0x28))?;
                r.seek(Current(compressed_size as i64))?;

                assert_read(&r.read_slice()? == b"DCA\0", "DCA0 magic invalid")?;
                let dca_size = r.read_u32::<BE>()?;
                
                assert_read(&r.read_slice()? == b"EgdT", "EgdT magic invalid")?;
                assert_read(r.read_u32::<BE>()? == 0x00010000, "0x00010000")?;
                assert_read(r.read_u32::<BE>()? == 0x20, "0x20")?;
                assert_read(r.read_u32::<BE>()? == 0x10, "0x10")?;
                assert_read(r.read_u32::<BE>()? == 0x10000, "0x10000")?;

                let egdt_size = r.read_u32::<BE>()?;
                let chunk_count = r.read_u32::<BE>()?;
                assert_read(r.read_u32::<BE>()? == 0x100000, "0x100000")?;

                if egdt_size != 0x20 + chunk_count * 0x10 {
                    return Err(Error::new(ErrorKind::InvalidData, "Unexpected EgdT size in EDGE DCX."));
                }

                let mut decompressed = vec![0u8; uncompressed_size.unwrap() as usize];
                let mut pos = 0;
                for i in 0..chunk_count {
                    assert_read(r.read_u32::<BE>()? == 0, "0")?;
                    let offset = r.read_u32::<BE>()?;
                    let size = r.read_u32::<BE>()?;
                    let compressed = r.read_u32::<BE>()? != 0;

                    
                    todo!();
                }

                Ok(decompressed)
            }
            Kind::DCX_EDGE => {
                todo!();
            }
            Kind::DCX_KRAK => {
                Err(Error::new(ErrorKind::InvalidData, "KRAK not supported"))
            }
            Kind::Unknown => Err(Error::new(ErrorKind::InvalidData, "Unknown DCX type"))
        }
    }

    fn read_zlib(r: &mut (impl Read + Seek), compressed_size: u32, uncompressed_size: Option<u32>) -> Result<Vec<u8>> {
        assert_read(r.read_u8()? == 0x78 && match r.read_u8()? {
            0x01 | 0x5E | 0x9C | 0xDA => true, _ => false
        }, "Not a ZLIB block")?;

        let mut compressed = vec![0u8; compressed_size as usize - 2];
        r.read_exact(compressed.as_mut_slice())?;

        let mut out_buf = Vec::with_capacity(uncompressed_size.unwrap_or(0x10000000) as usize);
        let res = Decompress::new(false).decompress_vec(
            compressed.as_slice(), &mut out_buf, FlushDecompress::Finish);

        res.or_else(|err| Err(Error::new(ErrorKind::InvalidData, err)))?;
        Ok(out_buf)
    }
}