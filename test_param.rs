#[repr(u8)]
pub enum ACTION_BUTTON_REGION_TYPE {
Cylinder = 0,
Prism = 1,
Capsule = 2,
}
#[repr(u8)]
pub enum ACTION_BUTTON_CATEGORY {
Category0 = 0,
Category1 = 1,
Category2 = 2,
Category3 = 3,
Category4 = 4,
Category5 = 5,
Category6 = 6,
Category7 = 7,
Category8 = 8,
Category9 = 9,
Category10 = 10,
Category11 = 11,
Category12 = 12,
Category14 = 14,
}
#[repr(u8)]
pub enum ACTION_BUTTON_ANGLE_CHECK_TYPE {
Type0 = 0,
Type1 = 1,
}
#[repr(u8)]
pub enum ACTION_BUTTON_TEXT_BOX_TYPE {
Type0 = 0,
}
#[repr(C)]
pub struct ACTIONBUTTON_PARAM_ST {
/// Range shape (cylinder, prism, capsule)
/// ### Display Name
/// 範囲タイプ
/// ### Description
/// 範囲形状(円柱、角柱、カプセル)
/// ### Maximum
/// 99
pub regionType: u8,
/// category. The number on the left side of the name is the priority when multiple action buttons overlap (the closer it is to 0, the higher the priority is displayed).
/// ### Display Name
/// カテゴリ
/// ### Description
/// カテゴリ。名前の左側の数字は複数のアクションボタンが重なっていた場合の優先度(0に近い程優先表示)。
/// ### Maximum
/// 99
pub category: u8,
/// ### Display Name
/// パディング1
padding1: [u8; 2],
/// Specify the Damipoli ID that is the center of the bottom of the range. If there is no Damipoly or -1 is entered, the center coordinates will be the reference.
/// ### Display Name
/// ダミポリ1
/// ### Description
/// 範囲の底面の中心となるダミポリIDを指定する　ダミポリがない場合 or -1が入力されている場合は、中心座標が基準になる
/// ### Minimum
/// -1
/// ### Maximum
/// 999999999
pub dummyPoly1: i32,
/// Used only when the range type is a capsule. Additional Damipoly (capsule) that creates a line segment with two Damipoly
/// ### Display Name
/// ダミポリ2
/// ### Description
/// 範囲タイプがカプセルの場合のみ使用　ダミポリ2つで線分を作る追加ダミポリ(カプセル)
/// ### Minimum
/// -1
/// ### Maximum
/// 999999999
pub dummyPoly2: i32,
/// Radius (cylinder / capsule)
/// ### Display Name
/// 半径
/// ### Description
/// 半径(円柱・カプセル)
/// ### Minimum
/// 0
/// ### Maximum
/// 1000000000
pub radius: f32,
/// Angle (cylinder)
/// ### Display Name
/// 角度
/// ### Description
/// 角度(円柱)
/// ### Minimum
/// 0
/// ### Maximum
/// 180
pub angle: i32,
/// Depth (prism)
/// ### Display Name
/// 奥行き
/// ### Description
/// 奥行き(角柱)
/// ### Minimum
/// 0
/// ### Maximum
/// 1000000000
pub depth: f32,
/// Width (prism)
/// ### Display Name
/// 幅
/// ### Description
/// 幅(角柱)
/// ### Minimum
/// 0
/// ### Maximum
/// 1000000000
pub width: f32,
/// Height (cylinder / prism)
/// ### Display Name
/// 高さ
/// ### Description
/// 高さ(円柱・角柱)
/// ### Minimum
/// 0
/// ### Maximum
/// 1000000000
pub height: f32,
/// How much to raise or lower the Y coordinate of the bottom (cylinder / prism)
/// ### Display Name
/// 底面高さオフセット
/// ### Description
/// 底面のY座標をどれだけ上下させるか(円柱・角柱)
/// ### Minimum
/// -1000000000
/// ### Maximum
/// 1000000000
pub baseHeightOffset: f32,
/// Angle difference judgment type (cylinder / prism)
/// ### Display Name
/// 角度差判定タイプ
/// ### Description
/// 角度差判定タイプ(円柱・角柱)
/// ### Maximum
/// 99
pub angleCheckType: u8,
/// ### Display Name
/// パディング2
padding2: [u8; 3],
/// Allowable angle difference (cylinder / prism)
/// ### Display Name
/// 許容角度差
/// ### Description
/// 許容角度差(円柱・角柱)
/// ### Minimum
/// 0
/// ### Maximum
/// 180
pub allowAngle: i32,
/// If there is no Damipoli that specifies the Damipoli ID that will be the position of the action spot, or if -1 is entered, the center coordinates will be the reference.
/// ### Display Name
/// アクションスポットダミポリ
/// ### Description
/// アクションスポットの位置となるダミポリIDを指定する ダミポリがない場合 or -1が入力されている場合は、中心座標が基準となる
/// ### Minimum
/// -1
/// ### Maximum
/// 999999999
pub spotDummyPoly: i32,
/// Text box type
/// ### Display Name
/// テキストボックスタイプ
/// ### Description
/// テキストボックスタイプ
/// ### Maximum
/// 99
pub textBoxType: u8,
/// ### Display Name
/// パディング3
padding3: [u8; 2],
_bitfield1: [u8; 1],
/// Text ID to display
/// ### Display Name
/// テキストID
/// ### Description
/// 表示するテキストID
/// ### Minimum
/// -1
/// ### Maximum
/// 999999999
pub textId: i32,
/// If this flag is ON, the action button will not appear and no judgment will be made.
/// ### Display Name
/// 無効フラグ
/// ### Description
/// このフラグがONだとアクションボタンが出ず、判定も行われない
/// ### Maximum
/// -294967297
pub invalidFlag: u32,
/// If this flag is ON, the action button will be grayed out and no judgment will be made.
/// ### Display Name
/// グレーアウトフラグ
/// ### Description
/// このフラグがONだとアクションボタンがグレーアウトし、判定も行われない
/// ### Maximum
/// -294967297
pub grayoutFlag: u32,
/// Replace with this action button ID parameter while riding (-1: No replacement)
/// ### Display Name
/// 騎乗時差し替えアクションボタンID
/// ### Description
/// 騎乗中はこのアクションボタンIDのパラメータに差し替える（-1：差し替え無し）
/// ### Minimum
/// -1
/// ### Maximum
/// 999999999
pub overrideActionButtonIdForRide: i32,
/// Invalid time after execution (-infinite by value)
/// ### Display Name
/// 実行後無効時間
/// ### Description
/// 実行後無効時間(-値で無限)
/// ### Minimum
/// -1
/// ### Maximum
/// 1000000000
pub execInvalidTime: f32,
/// ### Display Name
/// パディング6
padding6: [u8; 28],
}
impl ACTIONBUTTON_PARAM_ST {

                    /// ### Display Name
/// パディング5
pub fn padding5_get(&self) -> u8 {
                        unsafe {
                            let mem = *((self as *const Self as *const u8 as usize + 51) as *const u8);
                            std::mem::transmute((mem & 1u8) >> 0)
                        }
                    }
                    /// ### Display Name
/// パディング5
pub fn padding5_set(&mut self, value: u8) {
                        unsafe {
                            let bi : u8 = std::mem::transmute(value);
                            let mem_ptr = (self as *const Self as *const u8 as usize + 51) as *mut u8;
                            *mem_ptr = *mem_ptr & !1u8 | (bi << 0);
                        }
                    }
                    /// ### Display Name
/// パディング5
pub fn padding5_update(&mut self, f: impl Fn(u8) -> u8) {
                        self.padding5_set(f(self.padding5_get()));
                    }

                    /// If this item is YES, the action button will not appear when riding and no judgment will be made.
/// ### Display Name
/// 騎乗時無効か
/// ### Description
/// この項目がYESだと騎乗時にアクションボタンが出なくなり、判定も行われない
/// ### Maximum
/// 1
pub fn isInvalidForRide_get(&self) -> u8 {
                        unsafe {
                            let mem = *((self as *const Self as *const u8 as usize + 51) as *const u8);
                            std::mem::transmute((mem & 2u8) >> 1)
                        }
                    }
                    /// If this item is YES, the action button will not appear when riding and no judgment will be made.
/// ### Display Name
/// 騎乗時無効か
/// ### Description
/// この項目がYESだと騎乗時にアクションボタンが出なくなり、判定も行われない
/// ### Maximum
/// 1
pub fn isInvalidForRide_set(&mut self, value: u8) {
                        unsafe {
                            let bi : u8 = std::mem::transmute(value);
                            let mem_ptr = (self as *const Self as *const u8 as usize + 51) as *mut u8;
                            *mem_ptr = *mem_ptr & !2u8 | (bi << 1);
                        }
                    }
                    /// If this item is YES, the action button will not appear when riding and no judgment will be made.
/// ### Display Name
/// 騎乗時無効か
/// ### Description
/// この項目がYESだと騎乗時にアクションボタンが出なくなり、判定も行われない
/// ### Maximum
/// 1
pub fn isInvalidForRide_update(&mut self, f: impl Fn(u8) -> u8) {
                        self.isInvalidForRide_set(f(self.isInvalidForRide_get()));
                    }

                    /// If this item is YES, the action button will be grayed out when riding and no judgment will be made.
/// ### Display Name
/// 騎乗時グレーアウトか
/// ### Description
/// この項目がYESだと騎乗時にアクションボタンがグレーアウトし、判定も行われない
/// ### Maximum
/// 1
pub fn isGrayoutForRide_get(&self) -> u8 {
                        unsafe {
                            let mem = *((self as *const Self as *const u8 as usize + 51) as *const u8);
                            std::mem::transmute((mem & 4u8) >> 2)
                        }
                    }
                    /// If this item is YES, the action button will be grayed out when riding and no judgment will be made.
/// ### Display Name
/// 騎乗時グレーアウトか
/// ### Description
/// この項目がYESだと騎乗時にアクションボタンがグレーアウトし、判定も行われない
/// ### Maximum
/// 1
pub fn isGrayoutForRide_set(&mut self, value: u8) {
                        unsafe {
                            let bi : u8 = std::mem::transmute(value);
                            let mem_ptr = (self as *const Self as *const u8 as usize + 51) as *mut u8;
                            *mem_ptr = *mem_ptr & !4u8 | (bi << 2);
                        }
                    }
                    /// If this item is YES, the action button will be grayed out when riding and no judgment will be made.
/// ### Display Name
/// 騎乗時グレーアウトか
/// ### Description
/// この項目がYESだと騎乗時にアクションボタンがグレーアウトし、判定も行われない
/// ### Maximum
/// 1
pub fn isGrayoutForRide_update(&mut self, f: impl Fn(u8) -> u8) {
                        self.isGrayoutForRide_set(f(self.isGrayoutForRide_get()));
                    }

                    /// If this item is YES, the action button will not appear when crouching, and no judgment will be made.
/// ### Display Name
/// しゃがみ時無効か
/// ### Description
/// この項目がYESだとしゃがみ時にアクションボタンが出なくなり、判定も行われない
/// ### Maximum
/// 1
pub fn isInvalidForCrouching_get(&self) -> u8 {
                        unsafe {
                            let mem = *((self as *const Self as *const u8 as usize + 51) as *const u8);
                            std::mem::transmute((mem & 8u8) >> 3)
                        }
                    }
                    /// If this item is YES, the action button will not appear when crouching, and no judgment will be made.
/// ### Display Name
/// しゃがみ時無効か
/// ### Description
/// この項目がYESだとしゃがみ時にアクションボタンが出なくなり、判定も行われない
/// ### Maximum
/// 1
pub fn isInvalidForCrouching_set(&mut self, value: u8) {
                        unsafe {
                            let bi : u8 = std::mem::transmute(value);
                            let mem_ptr = (self as *const Self as *const u8 as usize + 51) as *mut u8;
                            *mem_ptr = *mem_ptr & !8u8 | (bi << 3);
                        }
                    }
                    /// If this item is YES, the action button will not appear when crouching, and no judgment will be made.
/// ### Display Name
/// しゃがみ時無効か
/// ### Description
/// この項目がYESだとしゃがみ時にアクションボタンが出なくなり、判定も行われない
/// ### Maximum
/// 1
pub fn isInvalidForCrouching_update(&mut self, f: impl Fn(u8) -> u8) {
                        self.isInvalidForCrouching_set(f(self.isInvalidForCrouching_get()));
                    }

                    /// If this item is YES, the action button will be grayed out when crouching and no judgment will be made.
/// ### Display Name
/// しゃがみ時グレーアウトか
/// ### Description
/// この項目がYESだとしゃがみ時にアクションボタンがグレーアウトし、判定も行われない
/// ### Maximum
/// 1
pub fn isGrayoutForCrouching_get(&self) -> u8 {
                        unsafe {
                            let mem = *((self as *const Self as *const u8 as usize + 51) as *const u8);
                            std::mem::transmute((mem & 16u8) >> 4)
                        }
                    }
                    /// If this item is YES, the action button will be grayed out when crouching and no judgment will be made.
/// ### Display Name
/// しゃがみ時グレーアウトか
/// ### Description
/// この項目がYESだとしゃがみ時にアクションボタンがグレーアウトし、判定も行われない
/// ### Maximum
/// 1
pub fn isGrayoutForCrouching_set(&mut self, value: u8) {
                        unsafe {
                            let bi : u8 = std::mem::transmute(value);
                            let mem_ptr = (self as *const Self as *const u8 as usize + 51) as *mut u8;
                            *mem_ptr = *mem_ptr & !16u8 | (bi << 4);
                        }
                    }
                    /// If this item is YES, the action button will be grayed out when crouching and no judgment will be made.
/// ### Display Name
/// しゃがみ時グレーアウトか
/// ### Description
/// この項目がYESだとしゃがみ時にアクションボタンがグレーアウトし、判定も行われない
/// ### Maximum
/// 1
pub fn isGrayoutForCrouching_update(&mut self, f: impl Fn(u8) -> u8) {
                        self.isGrayoutForCrouching_set(f(self.isGrayoutForCrouching_get()));
                    }

                    /// ### Display Name
/// パディング4
pub fn padding4_get(&self) -> u8 {
                        unsafe {
                            let mem = *((self as *const Self as *const u8 as usize + 51) as *const u8);
                            std::mem::transmute((mem & 224u8) >> 5)
                        }
                    }
                    /// ### Display Name
/// パディング4
pub fn padding4_set(&mut self, value: u8) {
                        unsafe {
                            let bi : u8 = std::mem::transmute(value);
                            let mem_ptr = (self as *const Self as *const u8 as usize + 51) as *mut u8;
                            *mem_ptr = *mem_ptr & !224u8 | (bi << 5);
                        }
                    }
                    /// ### Display Name
/// パディング4
pub fn padding4_update(&mut self, f: impl Fn(u8) -> u8) {
                        self.padding4_set(f(self.padding4_get()));
                    }
}
