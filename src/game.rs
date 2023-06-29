use aes::cipher::{BlockDecryptMut, KeyIvInit, StreamCipher};
use std::io::Result;
use std::io::{Cursor, Read};

use crate::bnd4::BND4;

pub trait Game {
    const NAME: &'static str;
    fn decrypt_regulation(encrypted: &[u8]) -> Result<BND4>;
}

static DS2_REGULATION_KEY: &'static [u8; 16] = &[
    0x40, 0x17, 0x81, 0x30, 0xDF, 0x0A, 0x94, 0x54, 0x33, 0x09, 0xE1, 0x71, 0xEC, 0xBF, 0x25, 0x4C,
];

static DS3_REGULATION_KEY: &'static [u8; 32] = b"ds3#jn/8_7(rsY9pg55GFN7VFL#+3n/)";

static ER_REGULATION_KEY: &'static [u8; 32] = &[
    0x99, 0xBF, 0xFC, 0x36, 0x6A, 0x6B, 0xC8, 0xC6, 0xF5, 0x82, 0x7D, 0x09, 0x36, 0x02, 0xD6, 0x76,
    0xC4, 0x28, 0x92, 0xA0, 0x1C, 0x20, 0x7F, 0xB0, 0x24, 0xD3, 0xAF, 0x4E, 0x49, 0x3F, 0xEF, 0x99,
];

pub struct DS2;
impl Game for DS2 {
    const NAME: &'static str = "DS2";
    fn decrypt_regulation(encrypted: &[u8]) -> Result<BND4> {
        let mut c = Cursor::new(encrypted);
        if BND4::is(encrypted) {
            return Ok(BND4::read(&mut c)?);
        }

        let mut iv = [0u8; 16];
        iv[0] = 0x80;
        iv[15] = 1;
        c.read_exact(iv.get_mut(1..=11).unwrap())?;
        c.set_position(32);

        type Aes128Ctr = ctr::Ctr128BE<aes::Aes128>;
        let mut cipher = Aes128Ctr::new(DS2_REGULATION_KEY.into(), &iv.into());
        let mut out_buf = Vec::new();
        c.read_to_end(&mut out_buf)?;
        cipher.apply_keystream(out_buf.as_mut_slice());

        BND4::read(&mut Cursor::new(out_buf))
    }
}

fn decrypt_cbc256_regulation(key: &[u8; 32], encrypted: &[u8]) -> Result<BND4> {
    if BND4::is(encrypted) {
        let mut c = Cursor::new(encrypted);
        return Ok(BND4::read(&mut c)?);
    }

    let (iv, data_blob) = encrypted.split_at(16);

    type Aes256Cbc = cbc::Decryptor<aes::Aes256>;
    let mut cipher = Aes256Cbc::new(key.into(), iv.into());

    let mut out_buf = data_blob.to_vec();

    // Bruh moment (can't do no padding otherwise)
    // SAFETY: same align, total size of `blocks` is smaller than `out_buf`
    unsafe {
        let blocks = std::slice::from_raw_parts_mut(
            out_buf.as_mut_ptr() as *mut aes::Block,
            out_buf.len() / 16,
        );

        cipher.decrypt_blocks_mut(blocks);
    }

    BND4::read(&mut Cursor::new(out_buf))
}

pub struct DS3;
impl Game for DS3 {
    const NAME: &'static str = "DS3";
    fn decrypt_regulation(encrypted: &[u8]) -> Result<BND4> {
        decrypt_cbc256_regulation(DS3_REGULATION_KEY, encrypted)
    }
}

pub struct ER;
impl Game for ER {
    const NAME: &'static str = "ER";
    fn decrypt_regulation(encrypted: &[u8]) -> Result<BND4> {
        decrypt_cbc256_regulation(ER_REGULATION_KEY, encrypted)
    }
}
