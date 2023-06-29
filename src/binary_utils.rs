use std::ffi::CStr;
use std::io::{Cursor, Error, ErrorKind, Read, Result, Seek, SeekFrom};
use utf16string::WString;

use byteorder::*;

pub trait ReadExt {
    fn read_slice<const N: usize>(&mut self) -> Result<[u8; N]>;
    fn read_bits<B: ByteOrder>(&mut self) -> Result<u8>;
    fn read_cstring(&mut self) -> Result<String>;
    fn read_wide_cstring<B: ByteOrder + 'static>(&mut self) -> Result<String>;
}

pub trait SeekExt {
    fn at(&mut self, pos: u64) -> Result<&mut Self>;
    fn my_stream_len(&mut self) -> Result<u64>;
}

impl<S> SeekExt for S where S: Seek {
    fn at(&mut self, pos: u64) -> Result<&mut Self> {
        self.seek(SeekFrom::Start(pos))?;
        Ok(self)
    }

    fn my_stream_len(&mut self) -> Result<u64> {
        let cpos = self.stream_position()?;
        let end = self.seek(SeekFrom::End(0))?;
        self.seek(SeekFrom::Start(cpos))?;
        Ok(cpos - end)
    }
}

impl<R> ReadExt for R
where
    R: Read,
{
    fn read_slice<const N: usize>(&mut self) -> Result<[u8; N]> {
        let mut buf = [0u8; N];
        self.read_exact(&mut buf)?;
        Ok(buf)
    }

    fn read_bits<B: ByteOrder>(&mut self) -> Result<u8> {
        // Cursed, please ignore
        let mut byte = self.read_u8()?;
        #[cfg(target_endian = "little")]
        let val = 0x0001;
        #[cfg(target_endian = "big")]
        let val = 0x0100;
        if B::read_i16(&[1u8, 0u8]) != val {
            byte.reverse_bits();
        }
        Ok(byte)
    }

    fn read_cstring(&mut self) -> Result<String> {
        let mut buf = Vec::new();
        loop {
            let b = self.read_u8()?;
            if b == 0 {
                break;
            }
            buf.push(b);
        }
        String::from_utf8(buf).or(Err(Error::new(
            ErrorKind::InvalidData,
            "Invalid UTF8 string",
        )))
    }

    fn read_wide_cstring<B: ByteOrder + 'static>(&mut self) -> Result<String> {
        let mut buf = Vec::new();
        loop {
            let b = self.read_slice()?;
            if b == [0, 0] {
                break;
            }
            buf.extend(b);
        }
        Ok(WString::<B>::from_utf16(buf)
            .or(Err(Error::new(
                ErrorKind::InvalidData,
                "Invalid UTF8 string",
            )))?
            .to_utf8())
    }
}

pub fn assert_read(pred: bool, msg: impl AsRef<str>) -> Result<()> {
    pred.then_some(()).ok_or(Error::new(ErrorKind::InvalidData, msg.as_ref()))
}
