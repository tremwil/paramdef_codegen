use std::ffi::CStr;
use std::io::{Cursor, Error, ErrorKind, Read, Result, Seek, SeekFrom};
use std::mem::transmute;
use utf16string::{WStr, WString};

use byteorder::*;

pub trait ByteOrderExt: ByteOrder {
    const IS_BIG_ENDIAN: bool;
}
impl ByteOrderExt for BE {
    const IS_BIG_ENDIAN: bool = true;
}
impl ByteOrderExt for LE {
    const IS_BIG_ENDIAN: bool = false;
}

pub trait ReadExt {
    fn read_slice<const N: usize>(&mut self) -> Result<[u8; N]>;
    fn read_bits<B: ByteOrder>(&mut self) -> Result<u8>;
    fn read_cstring(&mut self) -> Result<String>;
    fn read_wide_cstring<B: ByteOrder + 'static>(&mut self) -> Result<String>;
}

pub trait ReadSliceExt<'a> {
    fn read_slice_ref(&mut self, size: usize) -> Result<&'a [u8]>;
    fn read_fixed_slice_ref<const N: usize>(&mut self) -> Result<&'a [u8; N]>;

    fn read_fixed_str(&mut self, size: usize) -> Result<&'a str>;
    fn read_fixed_wstr<B: ByteOrder>(&mut self, size: usize) -> Result<&'a WStr<B>>;

    fn read_offset_str(&mut self, offset: SeekFrom) -> Result<&'a str>;
    fn read_offset_wstr<B: ByteOrder>(&mut self, offset: SeekFrom) -> Result<&'a WStr<B>>;
}
impl<'a, T: AsRef<[u8]> + 'a> ReadSliceExt<'a> for Cursor<T> {
    fn read_slice_ref(&mut self, size: usize) -> Result<&'a [u8]> {
        // SAFETY: T has lifetime 'a
        let buf: &'a [u8] = unsafe { transmute(self.get_ref().as_ref()) };
        let pos = self.position() as usize;
        let out_slice = buf
            .get(pos..pos + size)
            .ok_or(Error::new(ErrorKind::UnexpectedEof, "Out of range read"))?;

        self.set_position(pos as u64 + size as u64);
        Ok(out_slice)
    }

    fn read_fixed_slice_ref<const N: usize>(&mut self) -> Result<&'a [u8; N]> {
        let slice = self.read_slice_ref(N)?;
        // Safety: `slice` is a N-byte slice
        unsafe { Ok(std::mem::transmute(slice.as_ptr())) }
    }

    fn read_fixed_str(&mut self, size: usize) -> Result<&'a str> {
        Ok(CStr::from_bytes_until_nul(self.read_slice_ref(size)?)
            .or(Err(Error::new(
                ErrorKind::InvalidData,
                "Non-terminated C string",
            )))?
            .to_str()
            .or(Err(Error::new(ErrorKind::InvalidData, "Non-UTF8 C string")))?)
    }

    fn read_fixed_wstr<B: ByteOrder>(&mut self, size: usize) -> Result<&'a WStr<B>> {
        let bytes = self.read_slice_ref(2 * size)?;
        let null_pos = bytes
            .chunks(2)
            .position(|c| c[0] == 0 && c[1] == 0)
            .ok_or(Error::new(
                ErrorKind::InvalidData,
                "Non-terminated wide C string",
            ))?;
        WStr::from_utf16(bytes.get(..null_pos).unwrap()).or(Err(Error::new(
            ErrorKind::InvalidData,
            "Non-UTF16 wide C read",
        )))
    }

    fn read_offset_str(&mut self, offset: SeekFrom) -> Result<&'a str> {
        self.do_at(offset, |r| {
            let remaining = r.get_ref().as_ref().len() - r.position() as usize;
            r.read_fixed_str(remaining)
        })
    }

    fn read_offset_wstr<B: ByteOrder>(&mut self, offset: SeekFrom) -> Result<&'a WStr<B>> {
        self.do_at(offset, |r| {
            let remaining = r.get_ref().as_ref().len() - r.position() as usize;
            r.read_fixed_wstr(remaining / 2)
        })
    }
}

pub trait SeekExt {
    fn at(&mut self, pos: u64) -> Result<&mut Self>;
    fn my_stream_len(&mut self) -> Result<u64>;

    /// Seeks to the given stream position, performs an action with the stream, and returns to the original position.
    fn do_at<T>(&mut self, pos: SeekFrom, action: impl Fn(&mut Self) -> Result<T>) -> Result<T>;
}

impl<S> SeekExt for S
where
    S: Seek,
{
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

    fn do_at<T>(&mut self, pos: SeekFrom, action: impl Fn(&mut Self) -> Result<T>) -> Result<T> {
        let cpos = self.stream_position()?;
        self.seek(pos)?;
        let out = action(self)?;
        self.seek(SeekFrom::Start(cpos))?;
        Ok(out)
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
    pred.then_some(())
        .ok_or(Error::new(ErrorKind::InvalidData, msg.as_ref()))
}

pub struct StackReader<'a, R: Read + Seek> {
    reader: &'a mut R,
    stack: Vec<u64>,
}
impl<'a, R: Read + Seek> StackReader<'a, R> {
    fn new(reader: &'a mut R) -> Self {
        Self {
            reader,
            stack: Vec::new(),
        }
    }

    fn seek_push(&mut self, pos: SeekFrom) -> Result<u64> {
        self.stack.push(self.reader.stream_position()?);
        self.reader.seek(pos)
    }

    fn seek_pop(&mut self) -> Result<u64> {
        let pos = self.stack.pop().ok_or(Error::new(
            ErrorKind::Other,
            "Cannot pop() a StackReader with no saved positions",
        ))?;
        self.reader.seek(SeekFrom::Start(pos))
    }
}
impl<'a, R: Read + Seek> std::ops::Deref for StackReader<'a, R> {
    type Target = R;
    fn deref(&self) -> &Self::Target {
        &self.reader
    }
}
impl<'a, R: Read + Seek> std::ops::DerefMut for StackReader<'a, R> {
    fn deref_mut(&mut self) -> &mut Self::Target {
        &mut self.reader
    }
}
