/* This file was automatically generated. Do not edit. */

#pragma once
#ifndef _PARAMDEFS_H

namespace params {

typedef char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef unsigned int b32;
typedef long long s64;
typedef unsigned long long u64;
typedef char fixstr;
typedef wchar_t fixstrW;
typedef float f32;
typedef float angle32;
typedef double f64;
typedef unsigned char dummy8;

struct CS_TEXTURE_FILTER_QUALITY_DETAIL {
    static constexpr const char* TYPE_NAME = "CS_TEXTURE_FILTER_QUALITY_DETAIL";
    
    /// フィルター
    u8 filter;
    
    dummy8 dmy[3];
    
    /// アニソレベル
    u32 maxAnisoLevel;
    
};

struct EQUIP_MTRL_SET_PARAM_ST {
    static constexpr const char* TYPE_NAME = "EQUIP_MTRL_SET_PARAM_ST";
    
    /// 必要素材アイテムID01
    /// 
    /// 武具強化に必要な素材アイテムIDです。
    s32 materialId01;
    
    /// 必要素材アイテムID02
    /// 
    /// 武具強化に必要な素材アイテムIDです。
    s32 materialId02;
    
    /// 必要素材アイテムID03
    /// 
    /// 武具強化に必要な素材アイテムIDです。
    s32 materialId03;
    
    /// 必要素材アイテムID04
    /// 
    /// 武具強化に必要な素材アイテムIDです。
    s32 materialId04;
    
    /// 必要素材アイテムID05
    /// 
    /// 武具強化に必要な素材アイテムIDです。
    s32 materialId05;
    
    /// 必要個数01
    /// 
    /// 武具強化に必要な素材アイテムの個数です。
    s8 itemNum01;
    
    /// 必要個数02
    /// 
    /// 武具強化に必要な素材アイテムの個数です。
    s8 itemNum02;
    
    /// 必要個数03
    /// 
    /// 武具強化に必要な素材アイテムの個数です。
    s8 itemNum03;
    
    /// 必要個数04
    /// 
    /// 武具強化に必要な素材アイテムの個数です。
    s8 itemNum04;
    
    /// 必要個数05
    /// 
    /// 武具強化に必要な素材アイテムの個数です。
    s8 itemNum05;
    
    /// 必要素材アイテムカテゴリ01
    /// 
    /// 武具強化に必要な素材アイテムのカテゴリです。
    u8 materialCate01;
    
    /// 必要素材アイテムカテゴリ02
    /// 
    /// 武具強化に必要な素材アイテムのカテゴリです。
    u8 materialCate02;
    
    /// 必要素材アイテムカテゴリ03
    /// 
    /// 武具強化に必要な素材アイテムのカテゴリです。
    u8 materialCate03;
    
    /// 必要素材アイテムカテゴリ04
    /// 
    /// 武具強化に必要な素材アイテムのカテゴリです。
    u8 materialCate04;
    
    /// 必要素材アイテムカテゴリ05
    /// 
    /// 武具強化に必要な素材アイテムのカテゴリです。
    u8 materialCate05;
    
    /// 個数表示を無効化01
    /// 
    /// 個数表示を無効化するか(強化ショップ用)
    u8 isDisableDispNum01 : 1;
    
    /// 個数表示を無効化02
    /// 
    /// 個数表示を無効化するか
    u8 isDisableDispNum02 : 1;
    
    /// 個数表示を無効化03
    /// 
    /// 個数表示を無効化するか
    u8 isDisableDispNum03 : 1;
    
    /// 個数表示を無効化04
    /// 
    /// 個数表示を無効化するか
    u8 isDisableDispNum04 : 1;
    
    /// 個数表示を無効化05
    /// 
    /// 個数表示を無効化するか
    u8 isDisableDispNum05 : 1;
    
    /// パディングです。
    dummy8 pad[1];
    
};

struct MODEL_SFX_PARAM_ST {
    static constexpr const char* TYPE_NAME = "MODEL_SFX_PARAM_ST";
    
    /// 0:SfxID
    s32 sfxId_0;
    
    /// 0：ダミポリID
    s32 dmypolyId_0;
    
    /// 0:予約
    dummy8 reserve_0[8];
    
    /// 1:SfxID
    s32 sfxId_1;
    
    /// 1：ダミポリID
    s32 dmypolyId_1;
    
    /// 1:予約
    dummy8 reserve_1[8];
    
    /// 2:SfxID
    s32 sfxId_2;
    
    /// 2：ダミポリID
    s32 dmypolyId_2;
    
    /// 2:予約
    dummy8 reserve_2[8];
    
    /// 3:SfxID
    s32 sfxId_3;
    
    /// 3：ダミポリID
    s32 dmypolyId_3;
    
    /// 3:予約
    dummy8 reserve_3[8];
    
    /// 4:SfxID
    s32 sfxId_4;
    
    /// 4：ダミポリID
    s32 dmypolyId_4;
    
    /// 4:予約
    dummy8 reserve_4[8];
    
    /// 5:SfxID
    s32 sfxId_5;
    
    /// 5：ダミポリID
    s32 dmypolyId_5;
    
    /// 5:予約
    dummy8 reserve_5[8];
    
    /// 6:SfxID
    s32 sfxId_6;
    
    /// 6：ダミポリID
    s32 dmypolyId_6;
    
    /// 6:予約
    dummy8 reserve_6[8];
    
    /// 7:SfxID
    s32 sfxId_7;
    
    /// 7：ダミポリID
    s32 dmypolyId_7;
    
    /// 7:予約
    dummy8 reserve_7[8];
    
};

struct FACE_RANGE_PARAM_ST {
    static constexpr const char* TYPE_NAME = "FACE_RANGE_PARAM_ST";
    
    /// 顔パーツID
    f32 facePartsId;
    
    /// 肌の色(Ｒ)
    f32 skinColor_R;
    
    /// 肌の色(Ｇ)
    f32 skinColor_G;
    
    /// 肌の色(Ｂ)
    f32 skinColor_B;
    
    /// 髪パーツID
    f32 hairPartsId;
    
    /// 髪の色(Ｒ)
    f32 hairColor_R;
    
    /// 髪の色(Ｇ)
    f32 hairColor_G;
    
    /// 髪の色(Ｂ)
    f32 hairColor_B;
    
    /// 左目パーツID
    f32 eyeLPartsId;
    
    /// 左目の色(Ｒ)
    f32 eyeLColor_R;
    
    /// 左目の色(Ｇ)
    f32 eyeLColor_G;
    
    /// 左目の色(Ｂ)
    f32 eyeLColor_B;
    
    /// 右目パーツID
    f32 eyeRPartsId;
    
    /// 右目の色(Ｒ)
    f32 eyeRColor_R;
    
    /// 右目の色(Ｇ)
    f32 eyeRColor_G;
    
    /// 右目の色(Ｂ)
    f32 eyeRColor_B;
    
    /// 眉パーツID
    f32 eyebrowPartsId;
    
    /// 眉の色(Ｒ)
    f32 eyebrowColor_R;
    
    /// 眉の色(Ｇ)
    f32 eyebrowColor_G;
    
    /// 眉の色(Ｂ)
    f32 eyebrowColor_B;
    
    /// まつげパーツID
    f32 eyelashPartsId;
    
    /// まつげの色(Ｒ)
    f32 eyelashColor_R;
    
    /// まつげの色(Ｇ)
    f32 eyelashColor_G;
    
    /// まつげの色(Ｂ)
    f32 eyelashColor_B;
    
    /// 髭パーツID
    f32 beardPartsId;
    
    /// 髭の色(Ｒ)
    f32 beardColor_R;
    
    /// 髭の色(Ｇ)
    f32 beardColor_G;
    
    /// 髭の色(Ｂ)
    f32 beardColor_B;
    
    /// 装飾パーツID
    f32 accessoriesPartsId;
    
    /// 装飾の色(Ｒ)
    f32 accessoriesColor_R;
    
    /// 装飾の色(Ｇ)
    f32 accessoriesColor_G;
    
    /// 装飾の色(Ｂ)
    f32 accessoriesColor_B;
    
    /// デカールパーツID
    f32 decalPartsId;
    
    /// デカールの色(Ｒ)
    f32 decalColor_R;
    
    /// デカールの色(Ｇ)
    f32 decalColor_G;
    
    /// デカールの色(Ｂ)
    f32 decalColor_B;
    
    /// デカール位置(x)
    f32 decalPosX;
    
    /// デカール位置(y)
    f32 decalPosY;
    
    /// デカール角度
    f32 decalAngle;
    
    /// デカールスケール
    f32 decalScale;
    
    /// キャラ体型頭部スケール
    f32 chrBodyScaleHead;
    
    /// キャラ体型胸部スケール
    f32 chrBodyScaleBreast;
    
    /// キャラ体型腹部スケール
    f32 chrBodyScaleAbdomen;
    
    /// キャラ体型腕部スケール
    f32 chrBodyScaleArm;
    
    /// キャラ体型脚部スケール
    f32 chrBodyScaleLeg;
    
    /// 年齢
    f32 age;
    
    /// 性別
    f32 gender;
    
    /// 誇張（モデル）
    f32 caricatureGeometry;
    
    /// 誇張（テクスチャ）
    f32 caricatureTexture;
    
    /// 顔作成ジオメトリデータ00
    f32 faceGeoData00;
    
    /// 顔作成ジオメトリデータ01
    f32 faceGeoData01;
    
    /// 顔作成ジオメトリデータ02
    f32 faceGeoData02;
    
    /// 顔作成ジオメトリデータ03
    f32 faceGeoData03;
    
    /// 顔作成ジオメトリデータ04
    f32 faceGeoData04;
    
    /// 顔作成ジオメトリデータ05
    f32 faceGeoData05;
    
    /// 顔作成ジオメトリデータ06
    f32 faceGeoData06;
    
    /// 顔作成ジオメトリデータ07
    f32 faceGeoData07;
    
    /// 顔作成ジオメトリデータ08
    f32 faceGeoData08;
    
    /// 顔作成ジオメトリデータ09
    f32 faceGeoData09;
    
    /// 顔作成ジオメトリデータ10
    f32 faceGeoData10;
    
    /// 顔作成ジオメトリデータ11
    f32 faceGeoData11;
    
    /// 顔作成ジオメトリデータ12
    f32 faceGeoData12;
    
    /// 顔作成ジオメトリデータ13
    f32 faceGeoData13;
    
    /// 顔作成ジオメトリデータ14
    f32 faceGeoData14;
    
    /// 顔作成ジオメトリデータ15
    f32 faceGeoData15;
    
    /// 顔作成ジオメトリデータ16
    f32 faceGeoData16;
    
    /// 顔作成ジオメトリデータ17
    f32 faceGeoData17;
    
    /// 顔作成ジオメトリデータ18
    f32 faceGeoData18;
    
    /// 顔作成ジオメトリデータ19
    f32 faceGeoData19;
    
    /// 顔作成ジオメトリデータ20
    f32 faceGeoData20;
    
    /// 顔作成ジオメトリデータ21
    f32 faceGeoData21;
    
    /// 顔作成ジオメトリデータ22
    f32 faceGeoData22;
    
    /// 顔作成ジオメトリデータ23
    f32 faceGeoData23;
    
    /// 顔作成ジオメトリデータ24
    f32 faceGeoData24;
    
    /// 顔作成ジオメトリデータ25
    f32 faceGeoData25;
    
    /// 顔作成ジオメトリデータ26
    f32 faceGeoData26;
    
    /// 顔作成ジオメトリデータ27
    f32 faceGeoData27;
    
    /// 顔作成ジオメトリデータ28
    f32 faceGeoData28;
    
    /// 顔作成ジオメトリデータ29
    f32 faceGeoData29;
    
    /// 顔作成ジオメトリデータ30
    f32 faceGeoData30;
    
    /// 顔作成ジオメトリデータ31
    f32 faceGeoData31;
    
    /// 顔作成ジオメトリデータ32
    f32 faceGeoData32;
    
    /// 顔作成ジオメトリデータ33
    f32 faceGeoData33;
    
    /// 顔作成ジオメトリデータ34
    f32 faceGeoData34;
    
    /// 顔作成ジオメトリデータ35
    f32 faceGeoData35;
    
    /// 顔作成ジオメトリデータ36
    f32 faceGeoData36;
    
    /// 顔作成ジオメトリデータ37
    f32 faceGeoData37;
    
    /// 顔作成ジオメトリデータ38
    f32 faceGeoData38;
    
    /// 顔作成ジオメトリデータ39
    f32 faceGeoData39;
    
    /// 顔作成ジオメトリデータ40
    f32 faceGeoData40;
    
    /// 顔作成ジオメトリデータ41
    f32 faceGeoData41;
    
    /// 顔作成ジオメトリデータ42
    f32 faceGeoData42;
    
    /// 顔作成ジオメトリデータ43
    f32 faceGeoData43;
    
    /// 顔作成ジオメトリデータ44
    f32 faceGeoData44;
    
    /// 顔作成ジオメトリデータ45
    f32 faceGeoData45;
    
    /// 顔作成ジオメトリデータ46
    f32 faceGeoData46;
    
    /// 顔作成ジオメトリデータ47
    f32 faceGeoData47;
    
    /// 顔作成ジオメトリデータ48
    f32 faceGeoData48;
    
    /// 顔作成ジオメトリデータ49
    f32 faceGeoData49;
    
    /// 顔作成ジオメトリデータ50
    f32 faceGeoData50;
    
    /// 顔作成ジオメトリデータ51
    f32 faceGeoData51;
    
    /// 顔作成ジオメトリデータ52
    f32 faceGeoData52;
    
    /// 顔作成ジオメトリデータ53
    f32 faceGeoData53;
    
    /// 顔作成ジオメトリデータ54
    f32 faceGeoData54;
    
    /// 顔作成ジオメトリデータ55
    f32 faceGeoData55;
    
    /// 顔作成ジオメトリデータ56
    f32 faceGeoData56;
    
    /// 顔作成ジオメトリデータ57
    f32 faceGeoData57;
    
    /// 顔作成ジオメトリデータ58
    f32 faceGeoData58;
    
    /// 顔作成ジオメトリデータ59
    f32 faceGeoData59;
    
    /// 顔作成ジオメトリデータ60
    f32 faceGeoData60;
    
    /// 顔作成テクスチャデータ00
    f32 faceTexData00;
    
    /// 顔作成テクスチャデータ01
    f32 faceTexData01;
    
    /// 顔作成テクスチャデータ02
    f32 faceTexData02;
    
    /// 顔作成テクスチャデータ03
    f32 faceTexData03;
    
    /// 顔作成テクスチャデータ04
    f32 faceTexData04;
    
    /// 顔作成テクスチャデータ05
    f32 faceTexData05;
    
    /// 顔作成テクスチャデータ06
    f32 faceTexData06;
    
    /// 顔作成テクスチャデータ07
    f32 faceTexData07;
    
    /// 顔作成テクスチャデータ08
    f32 faceTexData08;
    
    /// 顔作成テクスチャデータ09
    f32 faceTexData09;
    
    /// 顔作成テクスチャデータ10
    f32 faceTexData10;
    
    /// 顔作成テクスチャデータ11
    f32 faceTexData11;
    
    /// 顔作成テクスチャデータ12
    f32 faceTexData12;
    
    /// 顔作成テクスチャデータ13
    f32 faceTexData13;
    
    /// 顔作成テクスチャデータ14
    f32 faceTexData14;
    
    /// 顔作成テクスチャデータ15
    f32 faceTexData15;
    
    /// 顔作成テクスチャデータ16
    f32 faceTexData16;
    
    /// 顔作成テクスチャデータ17
    f32 faceTexData17;
    
    /// 顔作成テクスチャデータ18
    f32 faceTexData18;
    
    /// 顔作成テクスチャデータ19
    f32 faceTexData19;
    
    /// 顔作成テクスチャデータ20
    f32 faceTexData20;
    
    /// 顔作成テクスチャデータ21
    f32 faceTexData21;
    
    /// 顔作成テクスチャデータ22
    f32 faceTexData22;
    
    /// 顔作成テクスチャデータ23
    f32 faceTexData23;
    
    /// 顔作成テクスチャデータ24
    f32 faceTexData24;
    
    /// 顔作成テクスチャデータ25
    f32 faceTexData25;
    
    /// 顔作成テクスチャデータ26
    f32 faceTexData26;
    
    /// 顔作成テクスチャデータ27
    f32 faceTexData27;
    
    /// 顔作成テクスチャデータ28
    f32 faceTexData28;
    
    /// 顔作成テクスチャデータ29
    f32 faceTexData29;
    
    /// 顔作成テクスチャデータ30
    f32 faceTexData30;
    
    /// 顔作成テクスチャデータ31
    f32 faceTexData31;
    
    /// 顔作成テクスチャデータ32
    f32 faceTexData32;
    
    /// 顔作成テクスチャデータ33
    f32 faceTexData33;
    
    /// 顔作成テクスチャデータ34
    f32 faceTexData34;
    
    /// 顔作成テクスチャデータ35
    f32 faceTexData35;
    
};

struct MISSILE_PARAM_ST {
    static constexpr const char* TYPE_NAME = "MISSILE_PARAM_ST";
    
    /// ＦＦＸエディタ上のＩＤ
    s32 FFXID;
    
    /// 生存時間[frame]
    /// 
    /// 生存時間。
    u16 LifeTime;
    
    /// 当たり球半径[cm]
    /// 
    /// 当たり球半径。単位cm
    u16 HitSphereRadius;
    
    /// 着弾ダメージ
    /// 
    /// 着弾時のダメージ量
    u16 HitDamage;
    
    /// 予約
    dummy8 reserve0[6];
    
    /// 初速度[m/s]
    f32 InitVelocity;
    
    /// 射程距離
    f32 distance;
    
    /// 射程距離内重力
    f32 gravityInRange;
    
    /// 射程距離外重力
    f32 gravityOutRange;
    
    /// 消費MP
    s32 mp;
    
    /// 射程距離内加速度
    f32 accelInRange;
    
    /// 射程距離外加速度
    f32 accelOutRange;
    
    /// 予約
    dummy8 reserve1[20];
    
    /// 着弾ＩＤ
    u16 HitMissileID;
    
    /// 寿命で死ぬか？
    /// 
    /// 着弾しても、死なずに、寿命を使い切るか？
    u8 DiedNaturaly;
    
    /// 寿命が切れたときに着弾するか
    u8 ExplosionDie;
    
    /// ヒット時行動ID
    /// 
    /// ダメージを与えたとき相手に与える行動ID
    s32 behaviorId;
    
    /// 予約
    dummy8 reserve_last[56];
    
};

struct FOG_BANK {
    static constexpr const char* TYPE_NAME = "FOG_BANK";
    
    /// (廃止) 開始距離[m]
    /// 
    /// フォグの開始距離です
    s16 fogBeginZ;
    
    /// (廃止) 終了距離[m]
    /// 
    /// フォグの終了距離です
    s16 fogEndZ;
    
    /// (廃止) ダミー
    /// 
    /// ダミー
    s16 degRotZ;
    
    /// (廃止) 強度
    /// 
    /// 通常100にしてください(0だとフォグが掛かりません)
    s16 degRotW;
    
    /// (廃止) Ｒ
    /// 
    /// フォグカラー
    s16 colR;
    
    /// (廃止) Ｇ
    /// 
    /// フォグカラー
    s16 colG;
    
    /// (廃止) Ｂ
    /// 
    /// フォグカラー
    s16 colB;
    
    /// (廃止) RGB倍率[％]
    /// 
    /// フォグカラーの倍率(100が標準)
    s16 colA;
    
    /// (廃止) HeightBase
    /// 
    /// HeightBase
    f32 heightBase;
    
    /// (廃止) HeightDensity
    /// 
    /// HeightDensity
    f32 heightDensity;
    
    /// (廃止) IsUpper
    /// 
    /// IsUpper
    s8 isUpper;
    
    /// (廃止) パディング
    dummy8 pad[3];
    
    /// (廃止) Contrast
    /// 
    /// Contrast
    f32 contrast;
    
    /// ColorR
    s32 ColorR;
    
    /// ColorG
    s32 ColorG;
    
    /// ColorB
    s32 ColorB;
    
    /// ColorA
    f32 ColorA;
    
    /// HeightColorR
    s32 HeightColorR;
    
    /// HeightColorG
    s32 HeightColorG;
    
    /// HeightColorB
    s32 HeightColorB;
    
    /// HeightColorA
    f32 HeightColorA;
    
    /// Dist
    f32 Dist;
    
    /// HeightDist
    f32 HeightDist;
    
    /// DistOffset
    f32 DistOffset;
    
    /// HeightOffset
    f32 HeightOffset;
    
    /// HeightDensity
    f32 HeightDensity;
    
    /// IsUpper
    s8 IsUpper;
    
    /// パディング
    dummy8 pad2[3];
    
    /// Alpha
    f32 Alpha;
    
    /// Contrast
    f32 Contrast;
    
    /// パディング
    dummy8 pad3[32];
    
};

struct ATK_PARAM_ST {
    static constexpr const char* TYPE_NAME = "ATK_PARAM_ST";
    
    /// あたり0 半径
    /// 
    /// 球、カプセルの半径
    f32 hit0_Radius;
    
    /// あたり1 半径
    /// 
    /// 球、カプセルの半径
    f32 hit1_Radius;
    
    /// あたり2 半径
    /// 
    /// 球、カプセルの半径
    f32 hit2_Radius;
    
    /// あたり3 半径
    /// 
    /// 球、カプセルの半径
    f32 hit3_Radius;
    
    /// ノックバック距離_直撃した時[m]
    /// 
    /// 攻撃が直撃した時のノックバック距離
    f32 knockbackDist_DirectHit;
    
    /// ノックバック距離_ガードされた時[m]
    /// 
    /// 攻撃がガードされた時のノックバック距離
    f32 knockbackDist_Guard;
    
    /// ノックバック距離_ジャスガされた時[m]
    /// 
    /// 攻撃がジャスガされた時のノックバック距離
    f32 knockbackDist_JustGuard;
    
    /// ヒットストップ時間_攻撃側[s]
    /// 
    /// この攻撃がヒットしたときに、攻撃したキャラがヒットストップする時間[s]
    f32 hitStopTime;
    
    /// 特殊効果0
    /// 
    /// 特殊効果パラメータで作成したＩＤを入れる
    s32 spEffectId0;
    
    /// 特殊効果1
    /// 
    /// 特殊効果パラメータで作成したＩＤを入れる
    s32 spEffectId1;
    
    /// 特殊効果2
    /// 
    /// 特殊効果パラメータで作成したＩＤを入れる
    s32 spEffectId2;
    
    /// 特殊効果3
    /// 
    /// 特殊効果パラメータで作成したＩＤを入れる
    s32 spEffectId3;
    
    /// 特殊効果4
    /// 
    /// 特殊効果パラメータで作成したＩＤを入れる
    s32 spEffectId4;
    
    /// あたり0 ダミポリ1
    /// 
    /// 球、カプセル位置のダミポリ
    s16 hit0_DmyPoly1;
    
    /// あたり1 ダミポリ1
    /// 
    /// 球、カプセル位置のダミポリ
    s16 hit1_DmyPoly1;
    
    /// あたり2 ダミポリ1
    /// 
    /// 球、カプセル位置のダミポリ
    s16 hit2_DmyPoly1;
    
    /// あたり3 ダミポリ1
    /// 
    /// 球、カプセル位置のダミポリ
    s16 hit3_DmyPoly1;
    
    /// あたり0 ダミポリ2
    /// 
    /// カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
    s16 hit0_DmyPoly2;
    
    /// あたり1 ダミポリ2
    /// 
    /// カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
    s16 hit1_DmyPoly2;
    
    /// あたり2 ダミポリ2
    /// 
    /// カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
    s16 hit2_DmyPoly2;
    
    /// あたり3 ダミポリ2
    /// 
    /// カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
    s16 hit3_DmyPoly2;
    
    /// 吹き飛ばし補正値
    /// 
    /// 吹き飛ばす時の補正値
    u16 blowingCorrection;
    
    /// 物理攻撃力補正値
    /// 
    /// PCのみ。物理攻撃力基本値に掛ける倍率
    u16 atkPhysCorrection;
    
    /// 魔法攻撃力補正値
    /// 
    /// PCのみ。魔法攻撃力に掛ける倍率（弓の場合は、飛び道具を補正）
    u16 atkMagCorrection;
    
    /// 炎攻撃力補正値
    /// 
    /// PCのみ。炎攻撃力に掛ける倍率（弓の場合は、飛び道具を補正）
    u16 atkFireCorrection;
    
    /// 電撃攻撃力補正値
    /// 
    /// PCのみ。電撃攻撃力に掛ける倍率（弓の場合は、飛び道具を補正）
    u16 atkThunCorrection;
    
    /// ガード時 スタミナ攻撃力補正値
    /// 
    /// PCのみ。ガード時スタミナ攻撃力に掛ける倍率
    u16 atkStamCorrection;
    
    /// はじき攻撃力補正値
    /// 
    /// PCのみ。1のみ
    u16 guardAtkRateCorrection;
    
    /// はじき防御力補正値
    /// 
    /// PCのみ。攻撃のはじかれ基本値に掛ける倍率
    u16 guardBreakCorrection;
    
    /// 投げ抜け攻撃力補正値
    /// 
    /// 投げ抜け攻撃に対する武器補正値
    u16 atkThrowEscapeCorrection;
    
    /// SA攻撃力補正値
    /// 
    /// PCのみ。武器に設定された【基本値】にかける補正値
    u16 atkSuperArmorCorrection;
    
    /// 物理攻撃力
    /// 
    /// NPCのみ。物理攻撃の基本ダメージ
    u16 atkPhys;
    
    /// 魔法攻撃力
    /// 
    /// NPCのみ。魔法攻撃の追加ダメージ
    u16 atkMag;
    
    /// 炎攻撃力
    /// 
    /// NPCのみ。炎攻撃の追加ダメージ
    u16 atkFire;
    
    /// 電撃攻撃力
    /// 
    /// NPCのみ。電撃攻撃の追加ダメージ
    u16 atkThun;
    
    /// スタミナ攻撃力_攻撃側_弾き負け
    s16 atkStam;
    
    /// はじき攻撃力
    /// 
    /// NPCのみ。はじき値
    u16 guardAtkRate;
    
    /// はじき防御力
    /// 
    /// NPCのみ。攻撃がはじかれるかどうかの判定に利用する値
    u16 guardBreakRate;
    
    /// SA攻撃力
    /// 
    /// NPCのみ。SAブレイク計算式に利用すする値
    u16 atkSuperArmor;
    
    /// 投げ抜け攻撃力
    u16 atkThrowEscape;
    
    /// オブジェ攻撃力
    /// 
    /// ＯＢＪに対する攻撃力
    u16 atkObj;
    
    /// ガード時スタミナカット率補正
    /// 
    /// 武器パラメータ、ＮＰＣパラメータに設定されている【ガード時スタミナカット率】を補正する
    s16 guardStaminaCutRate;
    
    /// ガード倍率
    /// 
    /// ＮＰＣ、武器パラメータで設定してあるガード性能を一律で補正を掛ける0で、1倍／100で、2倍／－100で、0　にパラメータが増減するようにするガード倍率　=　（ガード倍率/100　+　1）
    s16 guardRate;
    
    /// 投げタイプID
    /// 
    /// 投げパラメータと紐付けされているID
    u16 throwTypeId;
    
    /// あたり0 部位
    /// 
    /// あたり部位
    u8 hit0_hitType;
    
    /// あたり1 部位
    /// 
    /// あたり部位
    u8 hit1_hitType;
    
    /// あたり2 部位
    /// 
    /// あたり部位
    u8 hit2_hitType;
    
    /// あたり3 部位
    /// 
    /// あたり部位
    u8 hit3_hitType;
    
    /// あたり0 優先順位
    /// 
    /// 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
    u8 hti0_Priority;
    
    /// あたり1 優先順位
    /// 
    /// 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
    u8 hti1_Priority;
    
    /// あたり2 優先順位
    /// 
    /// 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
    u8 hti2_Priority;
    
    /// あたり3 優先順位
    /// 
    /// 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
    u8 hti3_Priority;
    
    /// ダメージレベル
    /// 
    /// 攻撃したとき、敵にどのダメージモーションを再生するか？を決める.
    u8 dmgLevel;
    
    /// マップあたり参照_先端
    /// 
    /// あたりX部位が先端の球とローヒット・ハイヒットの当たり方を設定
    u8 mapHitType_Normal;
    
    /// ガードカット率無効化倍率（－100～100）　→0のとき通常／－100で完全無効化／100で相手の防御効果倍増 　→－50とすれば、100％カットの盾が、50％カットになります
    s8 guardCutCancelRate;
    
    /// 物理属性
    /// 
    /// 攻撃に設定する物理属性
    u8 atkAttribute;
    
    /// 特殊属性
    /// 
    /// 攻撃に設定する特殊属性
    u8 spAttribute;
    
    /// 攻撃属性[SFX/SE]
    /// 
    /// 攻撃時のSFX/SEを指定(属性、材質、サイズで1セット)
    u8 atkType;
    
    /// 攻撃材質[SFX]
    /// 
    /// 攻撃時のSFXを指定(属性、材質、サイズで1セット)
    u8 atkMaterial_forSfx;
    
    /// 攻撃サイズ[SFX/SE]
    /// 
    /// 攻撃時のSFX/SEを指定（予備だが使用されているので、必ず空欄or小を設定すること）
    u8 atkSize;
    
    /// 防御材質1[SE]
    /// 
    /// ガード時のSEに使用1
    u16 defSeMaterial1;
    
    /// あたり発生源
    /// 
    /// 攻撃あたりのダミポリＩＤをどこから取ってくるか？を指定する
    u8 hitSourceType;
    
    /// 投げ情報に用いるフラグ
    u8 throwFlag;
    
    /// 全方位ガード可能な攻撃か？
    /// 
    /// ○のとき、防御側キャラのガード範囲に関わらず、ガード判定が発生してさえいればガード扱いになります。
    u8 isAllDirGuard : 1;
    
    /// スタミナ減らない
    /// 
    /// スタミナ攻撃力による「崩され判定」は行うが、実際にスタミナは減らさない
    u8 disableStaminaAttack : 1;
    
    /// ヒット時特殊効果無効
    /// 
    /// 攻撃ヒットしたときの特殊効果を無効にします。SCEバグ対策
    u8 disableHitSpEffect : 1;
    
    /// AIに空振り通知しない
    u8 IgnoreNotifyMissSwingForAI : 1;
    
    /// ＨＩＴ時にＳＦＸを何度も出すか
    /// 
    /// 敵専用：壁Hit時のSFXが連続で発生するか
    u8 repeatHitSfx : 1;
    
    /// 矢攻撃か
    /// 
    /// 部位ダメージ判定に使用する。
    u8 isArrowAtk : 1;
    
    /// 霊体攻撃か
    /// 
    /// 霊体ダメージ判定に使用。
    u8 isGhostAtk : 1;
    
    /// 無敵無効か
    /// 
    /// ステップ等の無敵効果を無視します、TAEの完全無敵は無視できません。
    u8 isDisableNoDamage : 1;
    
    /// 攻撃強度[SFX]
    s8 atkPow_forSfx;
    
    /// 攻撃方向[SFX]
    s8 atkDir_forSfx;
    
    /// 対象：●敵対
    u8 opposeTarget : 1;
    
    /// 対象：○味方
    u8 friendlyTarget : 1;
    
    /// 対象：自分
    u8 selfTarget : 1;
    
    /// 扉貫通チェックを行うかどうか。○の場合は扉越しの対象を攻撃できるかどうかの判定を行います。
    u8 isCheckDoorPenetration : 1;
    
    /// ダメージドロップ攻撃か？
    /// 
    /// ○のダメージがヒットしたとき、ダメージを受けたキャラがソウルやアイテムをドロップする
    u8 isDamageDropAttack : 1;
    
    /// 被スタミナダメージで崩れるか
    /// 
    /// 攻撃が弾かれることで体幹が0になった場合に、弾いた側を「弾き崩し」に、弾かれた側を「弾かれ崩れ」に遷移させるかを決定するパラ。弾かれても弾かれ崩れに遷移させたくない攻撃にだけ"×"を設定してください。
    u8 doesBreakRepelStamDamage : 1;
    
    /// パディング
    dummy8 pad : 2;
    
    /// Behavior用識別値1
    /// 
    /// Behavior用識別値：特大ダメージ遷移
    u8 atkBehaviorId;
    
    /// 攻撃強度[SE]
    s8 atkPow_forSe;
    
    /// 剛体への力積
    /// 
    /// 攻撃が当たった剛体へ加える力積
    f32 rigidImpulse;
    
    /// デカールID1（直接指定）
    s32 decalId1;
    
    /// デカールID2（直接指定）
    s32 decalId2;
    
    /// 発生時AI音ID
    /// 
    /// 攻撃発生時に発生させるAI音のID
    s32 AppearAiSoundId;
    
    /// ヒット時AI音ID
    /// 
    /// ヒット時に発生させるAI音のID
    s32 HitAiSoundId;
    
    /// ヒット時振動効果(-1無効)
    /// 
    /// ヒット時の振動ID（-1無効）。次の3つのどれにも当てはまらない時の振動IDとなる
    s32 HitRumbleId;
    
    /// 先端ヒット時振動ID
    /// 
    /// 先端にヒットした時のヒット時振動ID（-1無効）
    s32 HitRumbleIdByNormal;
    
    /// 真ん中ヒット時振動ID
    /// 
    /// 真ん中にヒットした時のヒット時振動ID（-1無効）
    s32 HitRumbleIdByMiddle;
    
    /// 根本ヒット時振動ID
    /// 
    /// 根本にヒットした時のヒット時振動ID（-1無効）
    s32 HitRumbleIdByRoot;
    
    /// 剣閃SfxID_０(-1無効)
    s32 traceSfxId0;
    
    /// 根元剣閃ダミポリID_０
    /// 
    /// 剣閃根元ダミポリID_０(-1無効)
    s32 traceDmyIdHead0;
    
    /// 剣先剣閃ダミポリID_０
    /// 
    /// 剣閃剣先ダミポリID_０
    s32 traceDmyIdTail0;
    
    /// 剣閃SfxID_１(-1無効)
    s32 traceSfxId1;
    
    /// 根元剣閃ダミポリID_１
    /// 
    /// 剣閃根元ダミポリID_１(-1無効)
    s32 traceDmyIdHead1;
    
    /// 剣先剣閃ダミポリID_１
    /// 
    /// 剣閃剣先ダミポリID_１
    s32 traceDmyIdTail1;
    
    /// 剣閃SfxID_２(-1無効)
    s32 traceSfxId2;
    
    /// 根元剣閃ダミポリID_２
    /// 
    /// 剣閃根元ダミポリID_２(-1無効)
    s32 traceDmyIdHead2;
    
    /// 剣先剣閃ダミポリID_２
    /// 
    /// 剣閃剣先ダミポリID_２
    s32 traceDmyIdTail2;
    
    /// 剣閃SfxID_３(-1無効)
    s32 traceSfxId3;
    
    /// 根元剣閃ダミポリID_３
    /// 
    /// 剣閃根元ダミポリID_３(-1無効)
    s32 traceDmyIdHead3;
    
    /// 剣先剣閃ダミポリID_３
    /// 
    /// 剣閃剣先ダミポリID_３
    s32 traceDmyIdTail3;
    
    /// 剣閃SfxID_４(-1無効)
    s32 traceSfxId4;
    
    /// 根元剣閃ダミポリID_４
    /// 
    /// 剣閃根元ダミポリID_４(-1無効)
    s32 traceDmyIdHead4;
    
    /// 剣先剣閃ダミポリID_４
    /// 
    /// 剣閃剣先ダミポリID_４
    s32 traceDmyIdTail4;
    
    /// 剣閃SfxID_５(-1無効)
    s32 traceSfxId5;
    
    /// 根元剣閃ダミポリID_５
    /// 
    /// 剣閃根元ダミポリID_５(-1無効)
    s32 traceDmyIdHead5;
    
    /// 剣先剣閃ダミポリID_５
    /// 
    /// 剣閃剣先ダミポリID_５
    s32 traceDmyIdTail5;
    
    /// 剣閃SfxID_６(-1無効)
    s32 traceSfxId6;
    
    /// 根元剣閃ダミポリID_６
    /// 
    /// 剣閃根元ダミポリID_６(-1無効)
    s32 traceDmyIdHead6;
    
    /// 剣先剣閃ダミポリID_６
    /// 
    /// 剣閃剣先ダミポリID_６
    s32 traceDmyIdTail6;
    
    /// 剣閃SfxID_７(-1無効)
    s32 traceSfxId7;
    
    /// 根元剣閃ダミポリID_７
    /// 
    /// 剣閃根元ダミポリID_７(-1無効)
    s32 traceDmyIdHead7;
    
    /// 剣先剣閃ダミポリID_７
    /// 
    /// 剣閃剣先ダミポリID_７
    s32 traceDmyIdTail7;
    
    /// あたり4 半径
    /// 
    /// 球、カプセルの半径
    f32 hit4_Radius;
    
    /// あたり5 半径
    /// 
    /// 球、カプセルの半径
    f32 hit5_Radius;
    
    /// あたり6 半径
    /// 
    /// 球、カプセルの半径
    f32 hit6_Radius;
    
    /// あたり7 半径
    /// 
    /// 球、カプセルの半径
    f32 hit7_Radius;
    
    /// あたり8 半径
    /// 
    /// 球、カプセルの半径
    f32 hit8_Radius;
    
    /// あたり9 半径
    /// 
    /// 球、カプセルの半径
    f32 hit9_Radius;
    
    /// あたり10 半径
    /// 
    /// 球、カプセルの半径
    f32 hit10_Radius;
    
    /// あたり11 半径
    /// 
    /// 球、カプセルの半径
    f32 hit11_Radius;
    
    /// あたり12 半径
    /// 
    /// 球、カプセルの半径
    f32 hit12_Radius;
    
    /// あたり13 半径
    /// 
    /// 球、カプセルの半径
    f32 hit13_Radius;
    
    /// あたり14 半径
    /// 
    /// 球、カプセルの半径
    f32 hit14_Radius;
    
    /// あたり15 半径
    /// 
    /// 球、カプセルの半径
    f32 hit15_Radius;
    
    /// あたり4 ダミポリ1
    /// 
    /// 球、カプセル位置のダミポリ
    s16 hit4_DmyPoly1;
    
    /// あたり5 ダミポリ1
    /// 
    /// 球、カプセル位置のダミポリ
    s16 hit5_DmyPoly1;
    
    /// あたり6 ダミポリ1
    /// 
    /// 球、カプセル位置のダミポリ
    s16 hit6_DmyPoly1;
    
    /// あたり7 ダミポリ1
    /// 
    /// 球、カプセル位置のダミポリ
    s16 hit7_DmyPoly1;
    
    /// あたり8ダミポリ1
    /// 
    /// 球、カプセル位置のダミポリ
    s16 hit8_DmyPoly1;
    
    /// あたり9 ダミポリ1
    /// 
    /// 球、カプセル位置のダミポリ
    s16 hit9_DmyPoly1;
    
    /// あたり10 ダミポリ1
    /// 
    /// 球、カプセル位置のダミポリ
    s16 hit10_DmyPoly1;
    
    /// あたり11 ダミポリ1
    /// 
    /// 球、カプセル位置のダミポリ
    s16 hit11_DmyPoly1;
    
    /// あたり12 ダミポリ1
    /// 
    /// 球、カプセル位置のダミポリ
    s16 hit12_DmyPoly1;
    
    /// あたり13ダミポリ1
    /// 
    /// 球、カプセル位置のダミポリ
    s16 hit13_DmyPoly1;
    
    /// あたり14 ダミポリ1
    /// 
    /// 球、カプセル位置のダミポリ
    s16 hit14_DmyPoly1;
    
    /// あたり15 ダミポリ1
    /// 
    /// 球、カプセル位置のダミポリ
    s16 hit15_DmyPoly1;
    
    /// あたり4 ダミポリ2
    /// 
    /// カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
    s16 hit4_DmyPoly2;
    
    /// あたり5ダミポリ2
    /// 
    /// カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
    s16 hit5_DmyPoly2;
    
    /// あたり6ダミポリ2
    /// 
    /// カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
    s16 hit6_DmyPoly2;
    
    /// あたり7ダミポリ2
    /// 
    /// カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
    s16 hit7_DmyPoly2;
    
    /// あたり8 ダミポリ2
    /// 
    /// カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
    s16 hit8_DmyPoly2;
    
    /// あたり9ダミポリ2
    /// 
    /// カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
    s16 hit9_DmyPoly2;
    
    /// あたり10 ダミポリ2
    /// 
    /// カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
    s16 hit10_DmyPoly2;
    
    /// あたり11 ダミポリ2
    /// 
    /// カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
    s16 hit11_DmyPoly2;
    
    /// あたり12 ダミポリ2
    /// 
    /// カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
    s16 hit12_DmyPoly2;
    
    /// あたり13 ダミポリ2
    /// 
    /// カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
    s16 hit13_DmyPoly2;
    
    /// あたり14 ダミポリ2
    /// 
    /// カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
    s16 hit14_DmyPoly2;
    
    /// あたり15 ダミポリ2
    /// 
    /// カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
    s16 hit15_DmyPoly2;
    
    /// あたり4 部位
    /// 
    /// あたり部位
    u8 hit4_hitType;
    
    /// あたり5 部位
    /// 
    /// あたり部位
    u8 hit5_hitType;
    
    /// あたり6 部位
    /// 
    /// あたり部位
    u8 hit6_hitType;
    
    /// あたり7 部位
    /// 
    /// あたり部位
    u8 hit7_hitType;
    
    /// あたり8 部位
    /// 
    /// あたり部位
    u8 hit8_hitType;
    
    /// あたり9 部位
    /// 
    /// あたり部位
    u8 hit9_hitType;
    
    /// あたり10 部位
    /// 
    /// あたり部位
    u8 hit10_hitType;
    
    /// あたり11 部位
    /// 
    /// あたり部位
    u8 hit11_hitType;
    
    /// あたり12 部位
    /// 
    /// あたり部位
    u8 hit12_hitType;
    
    /// あたり13 部位
    /// 
    /// あたり部位
    u8 hit13_hitType;
    
    /// あたり14 部位
    /// 
    /// あたり部位
    u8 hit14_hitType;
    
    /// あたり15 部位
    /// 
    /// あたり部位
    u8 hit15_hitType;
    
    /// あたり4 優先順位
    /// 
    /// 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
    u8 hti4_Priority;
    
    /// あたり5 優先順位
    /// 
    /// 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
    u8 hti5_Priority;
    
    /// あたり6 優先順位
    /// 
    /// 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
    u8 hti6_Priority;
    
    /// あたり7 優先順位
    /// 
    /// 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
    u8 hti7_Priority;
    
    /// あたり8 優先順位
    /// 
    /// 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
    u8 hti8_Priority;
    
    /// あたり9 優先順位
    /// 
    /// 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
    u8 hti9_Priority;
    
    /// あたり10 優先順位
    /// 
    /// 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
    u8 hti10_Priority;
    
    /// あたり11 優先順位
    /// 
    /// 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
    u8 hti11_Priority;
    
    /// あたり12 優先順位
    /// 
    /// 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
    u8 hti12_Priority;
    
    /// あたり13 優先順位
    /// 
    /// 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
    u8 hti13_Priority;
    
    /// あたり14 優先順位
    /// 
    /// 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
    u8 hti14_Priority;
    
    /// あたり15 優先順位
    /// 
    /// 優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
    u8 hti15_Priority;
    
    /// 防御材質1[SFX]
    /// 
    /// ガード時のSFXに使用.1
    u16 defSfxMaterial1;
    
    /// 防御材質2[SE]
    /// 
    /// ガード時のSEに使用2
    u16 defSeMaterial2;
    
    /// 防御材質2[SFX]
    /// 
    /// ガード時のSFXに使用.2
    u16 defSfxMaterial2;
    
    /// 闇攻撃力補正値
    /// 
    /// PCのみ。闇攻撃力に掛ける倍率（弓の場合は、飛び道具を補正）
    u16 atkDarkCorrection;
    
    /// 闇攻撃力
    /// 
    /// NPCのみ。闇攻撃の追加ダメージ
    u16 atkDark;
    
    /// 溜め攻撃か?
    /// 
    /// 溜め攻撃か？
    u8 isChargeAtk : 1;
    
    /// 攻撃接触パリィ判定無効
    /// 
    /// 新パリィ制御を無効化するかどうかのフラグです。攻撃側のダメージが、防御側でパリィ状態のキャラに接触した場合にパリィされたと判定する処理。
    u8 isDisableParry : 1;
    
    /// 両手持ち時攻撃力ボーナス無効か
    /// 
    /// 両手時の成長ステータス1.5倍適応を使わないようにする
    u8 isDisableBothHandsAtkBonus : 1;
    
    /// オブジェの追加着弾SFXを出すか
    /// 
    /// オブジェクトに設定した「追加着弾SFX」を出すか
    u8 isObjExtHitSfx : 1;
    
    /// 軌道
    /// 
    /// 攻撃の軌道種類
    u8 trackType;
    
    /// 直撃時 スタミナ攻撃力補正値
    /// 
    /// PCのみ。直撃時スタミナ攻撃力に掛ける倍率
    u16 directAtkStamCorrection;
    
    /// 過剰ダメージ発生時 キープHP
    /// 
    /// 指定したHPより防御側のダメージが超過してもHPを維持する値
    u16 excessDmgKeepHp;
    
    /// ガード弾かれ挙動
    /// 
    /// 攻撃をガードされたときの挙動
    u8 deflectedAction;
    
    /// ジャストガード弾かれ挙動
    /// 
    /// 攻撃をジャストガードされたときの挙動
    u8 justDeflectedAction;
    
    /// 状態異常攻撃力倍率補正
    /// 
    /// 特殊効果の状態異常攻撃力に対して、倍率補正を行う。
    u16 statusAilmentAtkPowerCorrectRate;
    
    /// 特殊効果攻撃力倍率補正（攻撃力ポイント）
    /// 
    /// 特殊効果の～～攻撃力[point]に対して、倍率補正を行う。
    u16 spEffectAtkPowerCorrectRate_byPoint;
    
    /// 特殊効果攻撃力倍率補正（攻撃力倍率）
    /// 
    /// 特殊効果の～～攻撃力倍率に対して、倍率補正を行う。
    u16 spEffectAtkPowerCorrectRate_byRate;
    
    /// 特殊効果攻撃力倍率補正（最終攻撃力倍率）
    /// 
    /// 特殊効果の攻撃側：～～ダメージ倍率に対して、倍率補正を行う。
    u16 spEffectAtkPowerCorrectRate_byDmg;
    
    /// Behavior用識別値2
    /// 
    /// Behavior用識別値：特定の時だけダメージモーションを再生する
    u8 atkBehaviorId_2;
    
    /// 投げダメージ属性
    /// 
    /// 攻撃判定の投げダメージの属性。対応する特殊効果がかかるようになる。攻撃のATK_PATAM_THROWFLAG_TYPEが「2：投げ」の場合にのみ、機能を発揮する
    u8 throwDamageAttribute;
    
    /// 攻撃属性補正ID上書き
    /// 
    /// 攻撃属性を補正するパラメータのID上書き用
    s32 overwriteAttackElementCorrectId;
    
    /// ダメージレベル 対プレイヤー
    /// 
    /// プレイヤーに対するダメージレベル。“0(デフォルト)”であれば使わない。“0(デフォルト)”以外の値域の意味は、《ダメージレベル》と同じ。
    s8 dmgLevel_vsPlayer;
    
    /// スタミナ物理属性
    /// 
    /// 防御者のどのスタミナダメージ倍率を参照するか決める。例) 斬撃に設定すると、防御側の斬撃スタミナダメージ倍率を参照する。
    u8 staminaPhysicsAttribute;
    
    /// スタミナ攻撃力_直撃時
    s16 directAtkStamDamage;
    
    /// スタミナ攻撃力_攻撃側_弾き勝ち
    s16 repelLostStamDamage;
    
    /// 被スタミナダメージ_直撃時
    s16 directAtkStamDamage_Attacker;
    
    /// 被スタミナダメージ_攻撃側_弾き勝ち
    s16 repelVictoryStamDamage_Attacker;
    
    /// 被スタミナダメージ_攻撃側_弾き負け
    s16 repelLostStamDamage_Attacker;
    
    /// デカール識別子1(3桁)
    s16 decalBaseId1;
    
    /// デカール識別子2(3桁)
    s16 decalBaseId2;
    
    /// 攻撃材質[SE]
    /// 
    /// 攻撃時のSEを指定(属性、材質、サイズで1セット)
    u8 atkMaterial_forSe;
    
    /// ガード弾き挙動
    u8 deflectAction;
    
    /// 攻撃接触パリィ時被スタミナダメージ
    /// 
    /// 攻撃接触パリィをされたとき、自分のスタミナから減算する値
    s16 staminaDamageAttackHitParry;
    
    /// ヒット時OBJアニメID
    /// 
    /// この攻撃がOBJにヒットしたとき、OBJとが再生するアニメのID。-1（無効値）のときと、OBJにアニメが存在しない場合は何もしない
    s32 hitObjAnimeId;
    
    /// カウンター特殊効果発動用識別子
    /// 
    /// 被ダメージ者にかかった特殊効果の、カウンター特殊効果発動条件と紐づく
    u8 counterSpEffectCondition;
    
    /// 攻撃方向判定基準点
    /// 
    /// 攻撃方向を求める際に使用する攻撃者の原点
    u8 attackDirectionPoint;
    
    /// 特殊効果状態異常補正（攻撃力ポイント）
    /// 
    /// 特殊効果の「状態異常攻撃力倍率補正を適応するか」に対して、倍率補正を行う。
    u16 statusAilmentAtkPowerCorrectRate_byPoint;
    
    /// ガード属性
    /// 
    /// この攻撃パラメータでガード・ジャスガしたときのガード属性。ガード不可・ジャスガ不可判定に影響する。
    u8 guardAttribute;
    
    /// ガード不可_対ガード属性0
    /// 
    /// この攻撃がガード属性0設定でガードされたとき、○ならガードを無視してダメージレベルを入れる
    u8 disableGuard_vsGuardAttribute0;
    
    /// ジャスガ不可_対ガード属性0
    /// 
    /// この攻撃がガード属性0設定でジャスガされたとき、○ならジャスガを無視してダメージレベルを入れる
    u8 disableJustGuard_vsGuardAttribute0;
    
    /// ガード不可_対ガード属性1
    /// 
    /// この攻撃がガード属性1設定でガードされたとき、○ならガードを無視してダメージレベルを入れる
    u8 disableGuard_vsGuardAttribute1;
    
    /// ジャスガ不可_対ガード属性1
    /// 
    /// この攻撃がガード属性1設定でジャスガされたとき、○ならジャスガを無視してダメージレベルを入れる
    u8 disableJustGuard_vsGuardAttribute1;
    
    /// マップあたり参照_真中
    /// 
    /// あたりX部位が真中の球とローヒット・ハイヒットの当たり方を設定
    u8 mapHitType_Middle;
    
    /// マップあたり参照_根本
    /// 
    /// あたりX部位が根本の球とローヒット・ハイヒットの当たり方を設定
    u8 mapHitType_Root;
    
    /// ジャストガード弾き挙動
    u8 justDeflectAction;
    
    /// ヒットストップ時間_防御側[s]
    /// 
    /// この攻撃がヒットしたときに、被弾したキャラがヒットストップする時間[s]
    f32 hitStopTime_Defencer;
    
};

struct CAMERA_SET_PARAM_ST {
    static constexpr const char* TYPE_NAME = "CAMERA_SET_PARAM_ST";
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子１：ロックカメラParamのデータID
    u32 lockParamId0;
    
    /// カメラパラメータID
    /// 
    /// 識別子１：カメラParamのデータID
    u32 camParamId0;
    
    /// 予約１
    f32 beginTime0;
    
    /// 予約２
    f32 endTime0;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子２：ロックオンParamのデータID
    u32 lockParamId1;
    
    /// カメラパラメータID
    /// 
    /// 識別子２：カメラParamのデータID
    u32 camParamId1;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子２：このカメラセットを開始する際の補間時間
    f32 beginTime1;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子２：このカメラセットを終了する際の補間時間
    f32 endTime1;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子３：ロックオンParamのデータID
    u32 lockParamId2;
    
    /// カメラパラメータID
    /// 
    /// 識別子３：カメラParamのデータID
    u32 camParamId2;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子３：このカメラセットを開始する際の補間時間
    f32 beginTime2;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子３：このカメラセットを終了する際の補間時間
    f32 endTime2;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子４：ロックオンParamのデータID
    u32 lockParamId3;
    
    /// カメラパラメータID
    /// 
    /// 識別子４：カメラParamのデータID
    u32 camParamId3;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子４：このカメラセットを開始する際の補間時間
    f32 beginTime3;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子４：このカメラセットを終了する際の補間時間
    f32 endTime3;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子５：ロックオンParamのデータID
    u32 lockParamId4;
    
    /// カメラパラメータID
    /// 
    /// 識別子５：カメラParamのデータID
    u32 camParamId4;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子５：このカメラセットを開始する際の補間時間
    f32 beginTime4;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子５：このカメラセットを終了する際の補間時間
    f32 endTime4;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子６：ロックオンParamのデータID
    u32 lockParamId5;
    
    /// カメラパラメータID
    /// 
    /// 識別子６：カメラParamのデータID
    u32 camParamId5;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子６：このカメラセットを開始する際の補間時間
    f32 beginTime5;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子６：このカメラセットを終了する際の補間時間
    f32 endTime5;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子７：ロックオンParamのデータID
    u32 lockParamId6;
    
    /// カメラパラメータID
    /// 
    /// 識別子７：カメラParamのデータID
    u32 camParamId6;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子７：このカメラセットを開始する際の補間時間
    f32 beginTime6;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子７：このカメラセットを終了する際の補間時間
    f32 endTime6;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子８：ロックオンParamのデータID
    u32 lockParamId7;
    
    /// カメラパラメータID
    /// 
    /// 識別子８：カメラParamのデータID
    u32 camParamId7;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子８：このカメラセットを開始する際の補間時間
    f32 beginTime7;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子８：このカメラセットを終了する際の補間時間
    f32 endTime7;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子９：ロックオンParamのデータID
    u32 lockParamId8;
    
    /// カメラパラメータID
    /// 
    /// 識別子９：カメラParamのデータID
    u32 camParamId8;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子９：このカメラセットを開始する際の補間時間
    f32 beginTime8;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子９：このカメラセットを終了する際の補間時間
    f32 endTime8;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子１０：ロックオンParamのデータID
    u32 lockParamId9;
    
    /// カメラパラメータID
    /// 
    /// 識別子１０：カメラParamのデータID
    u32 camParamId9;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子１０：このカメラセットを開始する際の補間時間
    f32 beginTime9;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子１０：このカメラセットを終了する際の補間時間
    f32 endTime9;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子１１：ロックオンParamのデータID
    u32 lockParamId10;
    
    /// カメラパラメータID
    /// 
    /// 識別子１１：カメラParamのデータID
    u32 camParamId10;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子１１：このカメラセットを開始する際の補間時間
    f32 beginTime10;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子１１：このカメラセットを終了する際の補間時間
    f32 endTime10;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子１２：ロックオンParamのデータID
    u32 lockParamId11;
    
    /// カメラパラメータID
    /// 
    /// 識別子１２：カメラParamのデータID
    u32 camParamId11;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子１２：このカメラセットを開始する際の補間時間
    f32 beginTime11;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子１２：このカメラセットを終了する際の補間時間
    f32 endTime11;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子１３：ロックオンParamのデータID
    u32 lockParamId12;
    
    /// カメラパラメータID
    /// 
    /// 識別子１３：カメラParamのデータID
    u32 camParamId12;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子１３：このカメラセットを開始する際の補間時間
    f32 beginTime12;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子１３：このカメラセットを終了する際の補間時間
    f32 endTime12;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子１４：ロックオンParamのデータID
    u32 lockParamId13;
    
    /// カメラパラメータID
    /// 
    /// 識別子１４：カメラParamのデータID
    u32 camParamId13;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子１４：このカメラセットを開始する際の補間時間
    f32 beginTime13;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子１４：このカメラセットを終了する際の補間時間
    f32 endTime13;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子１５：ロックオンParamのデータID
    u32 lockParamId14;
    
    /// カメラパラメータID
    /// 
    /// 識別子１５：カメラParamのデータID
    u32 camParamId14;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子１５：このカメラセットを開始する際の補間時間
    f32 beginTime14;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子１５：このカメラセットを終了する際の補間時間
    f32 endTime14;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子１６：ロックオンParamのデータID
    u32 lockParamId15;
    
    /// カメラパラメータID
    /// 
    /// 識別子１６：カメラParamのデータID
    u32 camParamId15;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子１６：このカメラセットを開始する際の補間時間
    f32 beginTime15;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子１６：このカメラセットを終了する際の補間時間
    f32 endTime15;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子１７：ロックオンParamのデータID
    u32 lockParamId16;
    
    /// カメラパラメータID
    /// 
    /// 識別子１７：カメラParamのデータID
    u32 camParamId16;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子１７：このカメラセットを開始する際の補間時間
    f32 beginTime16;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子１７：このカメラセットを終了する際の補間時間
    f32 endTime16;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子１８：ロックオンParamのデータID
    u32 lockParamId17;
    
    /// カメラパラメータID
    /// 
    /// 識別子１８：カメラParamのデータID
    u32 camParamId17;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子１８：このカメラセットを開始する際の補間時間
    f32 beginTime17;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子１８：このカメラセットを終了する際の補間時間
    f32 endTime17;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子１９：ロックオンParamのデータID
    u32 lockParamId18;
    
    /// カメラパラメータID
    /// 
    /// 識別子１９：カメラParamのデータID
    u32 camParamId18;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子１９：このカメラセットを開始する際の補間時間
    f32 beginTime18;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子１９：このカメラセットを終了する際の補間時間
    f32 endTime18;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子２０：ロックオンParamのデータID
    u32 lockParamId19;
    
    /// カメラパラメータID
    /// 
    /// 識別子２０：カメラParamのデータID
    u32 camParamId19;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子２０：このカメラセットを開始する際の補間時間
    f32 beginTime19;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子２０：このカメラセットを終了する際の補間時間
    f32 endTime19;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子２１：ロックカメラParamのデータID
    u32 lockParamId20;
    
    /// カメラパラメータID
    /// 
    /// 識別子２１：カメラParamのデータID
    u32 camParamId20;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子２１：このカメラセットを開始する際の補間時間
    f32 beginTime20;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子２１：このカメラセットを終了する際の補間時間
    f32 endTime20;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子２２：ロックオンParamのデータID
    u32 lockParamId21;
    
    /// カメラパラメータID
    /// 
    /// 識別子２２：カメラParamのデータID
    u32 camParamId21;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子２２：このカメラセットを開始する際の補間時間
    f32 beginTime21;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子２２：このカメラセットを終了する際の補間時間
    f32 endTime21;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子２３：ロックオンParamのデータID
    u32 lockParamId22;
    
    /// カメラパラメータID
    /// 
    /// 識別子２３：カメラParamのデータID
    u32 camParamId22;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子２３：このカメラセットを開始する際の補間時間
    f32 beginTime22;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子２３：このカメラセットを終了する際の補間時間
    f32 endTime22;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子２４：ロックオンParamのデータID
    u32 lockParamId23;
    
    /// カメラパラメータID
    /// 
    /// 識別子２４：カメラParamのデータID
    u32 camParamId23;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子２４：このカメラセットを開始する際の補間時間
    f32 beginTime23;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子２４：このカメラセットを終了する際の補間時間
    f32 endTime23;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子２５：ロックオンParamのデータID
    u32 lockParamId24;
    
    /// カメラパラメータID
    /// 
    /// 識別子２５：カメラParamのデータID
    u32 camParamId24;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子２５：このカメラセットを開始する際の補間時間
    f32 beginTime24;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子２５：このカメラセットを終了する際の補間時間
    f32 endTime24;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子２６：ロックオンParamのデータID
    u32 lockParamId25;
    
    /// カメラパラメータID
    /// 
    /// 識別子２６：カメラParamのデータID
    u32 camParamId25;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子２６：このカメラセットを開始する際の補間時間
    f32 beginTime25;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子２６：このカメラセットを終了する際の補間時間
    f32 endTime25;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子２７：ロックオンParamのデータID
    u32 lockParamId26;
    
    /// カメラパラメータID
    /// 
    /// 識別子２７：カメラParamのデータID
    u32 camParamId26;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子２７：このカメラセットを開始する際の補間時間
    f32 beginTime26;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子２７：このカメラセットを終了する際の補間時間
    f32 endTime26;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子２８：ロックオンParamのデータID
    u32 lockParamId27;
    
    /// カメラパラメータID
    /// 
    /// 識別子２８：カメラParamのデータID
    u32 camParamId27;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子２８：このカメラセットを開始する際の補間時間
    f32 beginTime27;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子２８：このカメラセットを終了する際の補間時間
    f32 endTime27;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子２９：ロックオンParamのデータID
    u32 lockParamId28;
    
    /// カメラパラメータID
    /// 
    /// 識別子２９：カメラParamのデータID
    u32 camParamId28;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子２９：このカメラセットを開始する際の補間時間
    f32 beginTime28;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子２９：このカメラセットを終了する際の補間時間
    f32 endTime28;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子３０：ロックオンParamのデータID
    u32 lockParamId29;
    
    /// カメラパラメータID
    /// 
    /// 識別子３０：カメラParamのデータID
    u32 camParamId29;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子３０：このカメラセットを開始する際の補間時間
    f32 beginTime29;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子３０：このカメラセットを終了する際の補間時間
    f32 endTime29;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子３１：ロックカメラParamのデータID
    u32 lockParamId30;
    
    /// カメラパラメータID
    /// 
    /// 識別子３１：カメラParamのデータID
    u32 camParamId30;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子３１：このカメラセットを開始する際の補間時間
    f32 beginTime30;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子３１：このカメラセットを終了する際の補間時間
    f32 endTime30;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子３２：ロックオンParamのデータID
    u32 lockParamId31;
    
    /// カメラパラメータID
    /// 
    /// 識別子３２：カメラParamのデータID
    u32 camParamId31;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子３２：このカメラセットを開始する際の補間時間
    f32 beginTime31;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子３２：このカメラセットを終了する際の補間時間
    f32 endTime31;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子３３：ロックオンParamのデータID
    u32 lockParamId32;
    
    /// カメラパラメータID
    /// 
    /// 識別子３３：カメラParamのデータID
    u32 camParamId32;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子３３：このカメラセットを開始する際の補間時間
    f32 beginTime32;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子３３：このカメラセットを終了する際の補間時間
    f32 endTime32;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子３４：ロックオンParamのデータID
    u32 lockParamId33;
    
    /// カメラパラメータID
    /// 
    /// 識別子３４：カメラParamのデータID
    u32 camParamId33;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子３４：このカメラセットを開始する際の補間時間
    f32 beginTime33;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子３４：このカメラセットを終了する際の補間時間
    f32 endTime33;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子３５：ロックオンParamのデータID
    u32 lockParamId34;
    
    /// カメラパラメータID
    /// 
    /// 識別子３５：カメラParamのデータID
    u32 camParamId34;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子３５：このカメラセットを開始する際の補間時間
    f32 beginTime34;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子３５：このカメラセットを終了する際の補間時間
    f32 endTime34;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子３６：ロックオンParamのデータID
    u32 lockParamId35;
    
    /// カメラパラメータID
    /// 
    /// 識別子３６：カメラParamのデータID
    u32 camParamId35;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子３６：このカメラセットを開始する際の補間時間
    f32 beginTime35;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子３６：このカメラセットを終了する際の補間時間
    f32 endTime35;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子３７：ロックオンParamのデータID
    u32 lockParamId36;
    
    /// カメラパラメータID
    /// 
    /// 識別子３７：カメラParamのデータID
    u32 camParamId36;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子３７：このカメラセットを開始する際の補間時間
    f32 beginTime36;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子３７：このカメラセットを終了する際の補間時間
    f32 endTime36;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子３８：ロックオンParamのデータID
    u32 lockParamId37;
    
    /// カメラパラメータID
    /// 
    /// 識別子３８：カメラParamのデータID
    u32 camParamId37;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子３８：このカメラセットを開始する際の補間時間
    f32 beginTime37;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子３８：このカメラセットを終了する際の補間時間
    f32 endTime37;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子３９：ロックオンParamのデータID
    u32 lockParamId38;
    
    /// カメラパラメータID
    /// 
    /// 識別子３９：カメラParamのデータID
    u32 camParamId38;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子３９：このカメラセットを開始する際の補間時間
    f32 beginTime38;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子３９：このカメラセットを終了する際の補間時間
    f32 endTime38;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子４０：ロックオンParamのデータID
    u32 lockParamId39;
    
    /// カメラパラメータID
    /// 
    /// 識別子４０：カメラParamのデータID
    u32 camParamId39;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子４０：このカメラセットを開始する際の補間時間
    f32 beginTime39;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子４０：このカメラセットを終了する際の補間時間
    f32 endTime39;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子４１：ロックカメラParamのデータID
    u32 lockParamId40;
    
    /// カメラパラメータID
    /// 
    /// 識別子４１：カメラParamのデータID
    u32 camParamId40;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子４１：このカメラセットを開始する際の補間時間
    f32 beginTime40;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子４１：このカメラセットを終了する際の補間時間
    f32 endTime40;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子４２：ロックオンParamのデータID
    u32 lockParamId41;
    
    /// カメラパラメータID
    /// 
    /// 識別子４２：カメラParamのデータID
    u32 camParamId41;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子４２：このカメラセットを開始する際の補間時間
    f32 beginTime41;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子４２：このカメラセットを終了する際の補間時間
    f32 endTime41;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子４３：ロックオンParamのデータID
    u32 lockParamId42;
    
    /// カメラパラメータID
    /// 
    /// 識別子４３：カメラParamのデータID
    u32 camParamId42;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子４３：このカメラセットを開始する際の補間時間
    f32 beginTime42;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子４３：このカメラセットを終了する際の補間時間
    f32 endTime42;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子４４：ロックオンParamのデータID
    u32 lockParamId43;
    
    /// カメラパラメータID
    /// 
    /// 識別子４４：カメラParamのデータID
    u32 camParamId43;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子４４：このカメラセットを開始する際の補間時間
    f32 beginTime43;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子４４：このカメラセットを終了する際の補間時間
    f32 endTime43;
    
    /// ロックカメラパラメータID
    /// 
    /// 識別子４５：ロックオンParamのデータID
    u32 lockParamId44;
    
    /// カメラパラメータID
    /// 
    /// 識別子４５：カメラParamのデータID
    u32 camParamId44;
    
    /// 開始時補間時間[sec]
    /// 
    /// 識別子４５：このカメラセットを開始する際の補間時間
    f32 beginTime44;
    
    /// 終了時補間時間[sec]
    /// 
    /// 識別子４５：このカメラセットを終了する際の補間時間
    f32 endTime44;
    
};

struct NETWORK_PARAM_ST {
    static constexpr const char* TYPE_NAME = "NETWORK_PARAM_ST";
    
    /// サイン高さオフセット[m]
    f32 signVerticalOffset;
    
    /// サイン位置補正最大距離[m]
    f32 maxSignPosCorrectionRange;
    
    /// 召喚希望タイムアウト時間[秒]
    f32 summonTimeoutTime;
    
    /// 予約
    dummy8 pad_0[4];
    
    /// キーガイド水平範囲[m]
    f32 keyGuideRange_0;
    
    /// キーガイド垂直範囲[m]
    f32 keyGuideHeight_0;
    
    /// 召喚サイン再取得待機時間(過疎時)[秒]
    f32 reloadSignIntervalTime1;
    
    /// 召喚サイン再取得待機時間[秒]
    f32 reloadSignIntervalTime2;
    
    /// 召喚サイン所持可能数上限(全体)
    /// 
    /// 本当はu8くらいで十分
    u32 reloadSignTotalCount_0;
    
    /// 召喚サイン所持可能数上限(セル)
    /// 
    /// 本当はu8くらいで十分
    u32 reloadSignCellCount_0;
    
    /// 召喚サイン更新待機時間[秒]
    f32 updateSignIntervalTime;
    
    /// 召喚サイン間描画排他水平範囲[m]
    f32 basicExclusiveRange_0;
    
    /// 召喚サイン間描画排他垂直範囲[m]
    f32 basicExclusiveHeight_0;
    
    /// 召喚サインキャラモデル描画待機時間[秒]
    f32 previewChrWaitingTime;
    
    /// 召喚サインPC間描画距離[m]
    f32 signVisibleRange_0;
    
    /// 召喚サイン取得セル範囲(水平)
    /// 
    /// 本当はu8くらいで十分
    u32 cellGroupHorizontalRange_0;
    
    /// 召喚サイン取得セル範囲(上方向)
    /// 
    /// 本当はu8くらいで十分
    u32 cellGroupTopRange_0;
    
    /// 召喚サイン取得セル範囲(下方向)
    /// 
    /// 本当はu8くらいで十分
    u32 cellGroupBottomRange_0;
    
    /// 白霊サイン表示制限時間下限倍率
    f32 minWhitePhantomLimitTimeScale;
    
    /// 小霊サイン表示制限時間下限倍率
    f32 minSmallPhantomLimitTimeScale;
    
    /// 白霊サインキーワード延長倍率
    f32 whiteKeywordLimitTimeScale;
    
    /// 小霊サインキーワード延長倍率
    f32 smallKeywordLimitTimeScale;
    
    /// 闇霊サインキーワード延長倍率
    f32 blackKeywordLimitTimeScale;
    
    /// 竜霊サインキーワード延長倍率
    f32 dragonKeywordLimitTimeScale;
    
    /// サイン取得上限
    /// 
    /// 本当はu8くらいで十分
    u32 singGetMax;
    
    /// サインダウンロードスパン
    f32 signDownloadSpan;
    
    /// サインアップロードスパン
    f32 signUpdateSpan;
    
    /// 予約
    dummy8 signPad[4];
    
    /// 乱入先取得数
    u32 maxBreakInTargetListCount;
    
    /// 乱入リクエスト間隔[秒]
    f32 breakInRequestIntervalTimeSec;
    
    /// 乱入リクエストタイムアウト時間[秒]
    f32 breakInRequestTimeOutSec;
    
    /// 予約
    dummy8 pad_1[4];
    
    /// キーガイド水平範囲[m]
    f32 keyGuideRange_1;
    
    /// キーガイド垂直範囲[m]
    f32 keyGuideHeight_1;
    
    /// 血文字取得数(全体)
    /// 
    /// 本当はu8くらいで十分
    u32 reloadSignTotalCount_1;
    
    /// 血文字取得数(セル、新順)
    /// 
    /// 本当はu8くらいで十分
    u32 reloadNewSignCellCount;
    
    /// 血文字取得数(セル、ランダム )
    /// 
    /// 本当はu8くらいで十分
    u32 reloadRandomSignCellCount;
    
    /// 血文字所持可能数上限(全体)
    /// 
    /// 本当はu16くらいで十分
    u32 maxSignTotalCount_0;
    
    /// 血文字所持可能数上限(セル)
    /// 
    /// 本当はu8くらいで十分
    u32 maxSignCellCount_0;
    
    /// 血文字間描画排他水平範囲[m]
    f32 basicExclusiveRange_1;
    
    /// 血文字間描画排他垂直範囲[m]
    f32 basicExclusiveHeight_1;
    
    /// 血文字PC間描画距離[m]
    f32 signVisibleRange_1;
    
    /// 書いた血文字履歴件数上限
    /// 
    /// 本当はu8くらいで十分
    u32 maxWriteSignCount;
    
    /// 読んだ血文字履歴件数上限
    /// 
    /// 本当はu8くらいで十分
    u32 maxReadSignCount;
    
    /// 血文字再取得待機時間[秒]
    f32 reloadSignIntervalTime_0;
    
    /// 血文字取得セル範囲(水平)
    /// 
    /// 本当はu8くらいで十分
    u32 cellGroupHorizontalRange_1;
    
    /// 血文字取得セル範囲(上方向)
    /// 
    /// 本当はu8くらいで十分
    u32 cellGroupTopRange_1;
    
    /// 血文字取得セル範囲(下方向)
    /// 
    /// 本当はu8くらいで十分
    u32 cellGroupBottomRange_1;
    
    /// 血文字データ保持期間上限[秒]
    /// 
    /// 本当はu16くらいで十分
    u32 lifeTime_0;
    
    /// 血文字ダウンロード間隔
    f32 downloadSpan_0;
    
    /// 血文字評価数ダウンロード間隔
    f32 downloadEvaluationSpan;
    
    /// 予約
    dummy8 pad_2[4];
    
    /// キーガイド水平範囲[m]
    f32 keyGuideRange_2;
    
    /// キーガイド垂直範囲[m]
    f32 keyGuideHeight_2;
    
    /// プレイヤー血痕キーガイド水平範囲[m]
    f32 keyGuideRangePlayer;
    
    /// プレイヤー血痕キーガイド垂直範囲[m]
    f32 keyGuideHeightPlayer;
    
    /// 血痕取得数(全体)
    /// 
    /// 本当はu8くらいで十分
    u32 reloadSignTotalCount_2;
    
    /// 血痕取得数(セル)
    /// 
    /// 本当はu8くらいで十分
    u32 reloadSignCellCount_1;
    
    /// 血痕所持可能数上限(全体)
    /// 
    /// 本当はu16くらいで十分
    u32 maxSignTotalCount_1;
    
    /// 血痕所持可能数上限(セル)
    /// 
    /// 本当はu8くらいで十分
    u32 maxSignCellCount_1;
    
    /// 血痕再取得待機時間[秒]
    f32 reloadSignIntervalTime_1;
    
    /// 血痕PC間描画距離[m]
    f32 signVisibleRange_2;
    
    /// 血痕間描画排他水平範囲[m]
    f32 basicExclusiveRange_2;
    
    /// 血痕間描画排他垂直範囲[m]
    f32 basicExclusiveHeight_2;
    
    /// 血痕取得セル範囲(水平)
    /// 
    /// 本当はu8くらいで十分
    u32 cellGroupHorizontalRange_2;
    
    /// 血痕取得セル範囲(上方向)
    /// 
    /// 本当はu8くらいで十分
    u32 cellGroupTopRange_2;
    
    /// 血痕取得セル範囲(下方向)
    /// 
    /// 本当はu8くらいで十分
    u32 cellGroupBottomRange_2;
    
    /// 血痕データ保持期間上限[秒]
    /// 
    /// 本当はu16くらいで十分
    u32 lifeTime_1;
    
    /// 死亡幻影記録合計時間[秒]
    f32 recordDeadingGhostTotalTime;
    
    /// 死亡幻影記録延長時間[秒]
    f32 recordDeadingGhostExtensionTime;
    
    /// 血痕ダウンロード間隔
    f32 downloadSpan_1;
    
    /// 予約
    dummy8 pad_3[4];
    
    /// 幻影取得数(全体)
    /// 
    /// 本当はu8くらいで十分
    u32 reloadGhostTotalCount;
    
    /// 幻影取得数(セル)
    /// 
    /// 本当はu8くらいで十分
    u32 reloadGhostCellCount;
    
    /// 幻影所持可能数上限(全体)
    /// 
    /// 本当はu16くらいで十分
    u32 maxGhostTotalCount;
    
    /// 敵対PCリプレイ記録開始距離[m]
    f32 distanceOfBeginRecordVersus;
    
    /// 敵対PCリプレイ記録終了距離[m]
    f32 distanceOfEndRecordVersus;
    
    /// 徘徊幻影アップロード間隔[秒]
    f32 updateWanderGhostIntervalTime;
    
    /// 対戦幻影アップロード間隔[秒]
    f32 updateVersusGhostIntervalTime;
    
    /// 徘徊幻影記録時間[秒]
    f32 recordWanderingGhostTime;
    
    /// 対戦幻影記録時間[秒]
    f32 recordVersusGhostTime;
    
    /// 篝火幻影アップロード間隔[秒]
    f32 updateBonfireGhostIntervalTime;
    
    /// 幻影再生距離（視野内）[秒]
    f32 replayGhostRangeOnView;
    
    /// 幻影再生距離（視野外）[秒]
    f32 replayGhostRangeOutView;
    
    /// 篝火幻影再生時間[秒]
    f32 replayBonfireGhostTime;
    
    /// 篝火幻影配置最小距離[秒]
    /// 
    /// 篝火からこの距離未満の場所には篝火幻影を配置しない
    f32 minBonfireGhostValidRange;
    
    /// 篝火幻影配置最大距離[秒]
    /// 
    /// 篝火からこの距離以上の場所には篝火幻影を配置しない
    f32 maxBonfireGhostValidRange;
    
    /// 幻影再生間隔下限[秒]
    f32 minReplayIntervalTime;
    
    /// 幻影再生間隔上限[秒]
    f32 maxReplayIntervalTime;
    
    /// 幻影定期取得間隔[秒]
    f32 reloadGhostIntervalTime;
    
    /// 幻影取得セル範囲(水平)
    /// 
    /// 本当はu8くらいで十分
    u32 cellGroupHorizontalRange_3;
    
    /// 幻影取得セル範囲(上方向)
    /// 
    /// 本当はu8くらいで十分
    u32 cellGroupTopRange_3;
    
    /// 幻影取得セル範囲(下方向)
    /// 
    /// 本当はu8くらいで十分
    u32 cellGroupBottomRange_3;
    
    /// 幻影篝火モード再生適用距離
    f32 replayBonfireModeRange;
    
    /// 幻影篝火モード停止距離（視野内）[秒]
    f32 stopBonfireModeRangeOnView;
    
    /// 幻影篝火モード停止距離（視野外）[秒]
    f32 stopBonfireModeRangeOutView;
    
    /// 指輪検索間隔[秒]
    f32 reloadVisitListCoolTime;
    
    /// 救援青霊出現数上限
    /// 
    /// 本当はu8くらいで十分
    u32 maxCoopBlueSummonCount;
    
    /// 鐘守灰霊出現数上限
    /// 
    /// 本当はu8くらいで十分
    u32 maxBellGuardSummonCount;
    
    /// 指輪検索先取得数
    u32 maxVisitListCount;
    
    /// 救援青霊リロード時間　最小[sec]
    f32 reloadSearch_CoopBlue_Min;
    
    /// 救援青霊リロード時間　最大[sec]
    f32 reloadSearch_CoopBlue_Max;
    
    /// 鐘守リロード時間　最小[sec]
    f32 reloadSearch_BellGuard_Min;
    
    /// 鐘守リロード時間　最大[sec]
    f32 reloadSearch_BellGuard_Max;
    
    /// ネズミの王リロード時間　最小[sec]
    f32 reloadSearch_RatKing_Min;
    
    /// ネズミの王リロード時間　最大[sec]
    f32 reloadSearch_RatKing_Max;
    
    /// 予約
    dummy8 visitpad00[8];
    
    /// SRTT上限[ミリ秒]
    f32 srttMaxLimit;
    
    /// SRTT上限(安定時)[ミリ秒]
    f32 srttMeanLimit;
    
    /// RTT平均偏差上限[ミリ秒]
    f32 srttMeanDeviationLimit;
    
    /// 闇霊制限時間加速時間[秒]
    f32 darkPhantomLimitBoostTime;
    
    /// 闇霊制限時間加速時倍率
    f32 darkPhantomLimitBoostScale;
    
    /// マルチプレイ無効化寿命
    f32 multiplayDisableLifeTime;
    
    /// 深淵霊マルチプレイ回数
    /// 
    /// 深淵エリアで、深淵霊がホストに入ってこれる回数
    u8 abyssMultiplayLimit;
    
    /// 霊体がワープするまでの最低時間[秒]
    u8 phantomWarpMinimumTime;
    
    /// 黒水晶使用後に帰還するまでのディレイ時間[秒]
    u8 phantomReturnDelayTime;
    
    /// 切断待ちのタイムアウト時間
    u8 terminateTimeoutTime;
    
    /// LAN抜きによるペナルティ加算値
    u16 penaltyPointLanDisconnect;
    
    /// サインアウトによるペナルティ加算値
    u16 penaltyPointSignout;
    
    /// 電源断によるペナルティ加算値
    u16 penaltyPointReboot;
    
    /// ペナルティが発動するペナルティ値
    u16 penaltyPointBeginPenalize;
    
    /// 「線の理」の販売制限時間[秒]
    f32 penaltyForgiveItemLimitTime;
    
    /// 全域検索率：救援青霊[0-100]
    /// 
    /// 全域から侵入対象を検索する割合（％）
    u8 allAreaSearchRate_CoopBlue;
    
    /// 全域検索率：報復青霊[0-100]
    /// 
    /// 全域から侵入対象を検索する割合（％）
    u8 allAreaSearchRate_VsBlue;
    
    /// 全域検索率：鐘守灰霊[0-100]
    /// 
    /// 全域から侵入対象を検索する割合（％）
    u8 allAreaSearchRate_BellGuard;
    
    /// 血文字評価時のHP回復割合[0-100]
    u8 bloodMessageEvalHealRate;
    
    /// 小金霊成功帰還ホスト報酬ID
    u32 smallGoldSuccessHostRewardId;
    
    /// ドア付近プレイ領域無効化距離[m]
    /// 
    /// マルチプレイ領域を区切る黒扉の周辺を、システム的に無効なプレイ領域（-1）にします。その際、無効領域を黒扉のOBJのバウンディングボックスの薄い方を、このパラメータで太らせます。
    f32 doorInvalidPlayAreaExtents;
    
    /// サイン最大同時表示数
    u8 signDisplayMax;
    
    /// 血痕最大同時表示数
    u8 bloodStainDisplayMax;
    
    /// 血文字最大同時表示数
    u8 bloodMessageDisplayMax;
    
    /// 予約
    dummy8 pad00[1];
    
    /// RequestGetRightMatchingAreaの更新間隔
    f32 ReqGetRightMatchAreaInterval;
    
    /// 予約
    dummy8 pad01[4];
    
    /// ミラーナイトサイン変換割合[0-100]
    /// 
    /// ミラーナイトエリアに書いた闇霊サインが、ミラーナイトサインに変換される割合。０～１００を設定。
    u8 mirrorKnightSignConvertRate;
    
    /// 予約
    dummy8 reserveMK[3];
    
    /// ミラーナイトサイン再取得待機時間[秒]
    f32 reloadMKSignIntervalTime2;
    
    /// ミラーナイトサイン寿命[秒]
    /// 
    /// ミラーナイトから通常の闇霊サインに変わるまでの時間[sec]
    f32 mirrorKnightSignLifetime;
    
    /// ミラーナイトサインサイン所持可能数上限
    u32 reloadMKSignTotalCount;
    
    /// 予約
    dummy8 pad10[16];
    
    /// 召喚メッセージが表示間隔[秒]
    f32 summonMessageInterval;
    
    /// ホスト定期更新リクエスト間隔[秒]
    f32 hostRegisterUpdateTime;
    
    /// ホストのゲスト参加待ちタイムアウト時間[秒]
    f32 hostTimeOutTime;
    
    /// ゲストのホストからの認証待ちタイムアウト時間[秒]
    f32 guestUpdateTime;
    
    /// ゲストPlayNo同期待ちタイムアウト時間[秒]
    f32 guestPlayerNoTimeOutTime;
    
    /// ホストPlayNo同期待ちタイムアウト時間[秒]
    f32 hostPlayerNoTimeOutTime;
    
    /// RequestSearchQuickMatchのlimit値
    u32 requestSearchQuickMatchLimit;
    
    /// 合言葉vs合言葉で自チームを待つタイムアウト時間[秒]
    f32 myTeamInviteTimeoutTime;
    
    /// バトルロイヤル戦検索時の最少人数(未使用)
    u32 BattleRoyalMatchSearchMin;
    
    /// バトルロイヤル戦検索時の最大人数(未使用)
    u32 BattleRoyalMatchSearchMax;
    
    /// 予約
    dummy8 pad11[8];
    
    /// 訪問対象者リスト取得最大値
    /// 
    /// 本当はu8くらいで十分
    u32 VisitorListMax;
    
    /// 訪問待ちタイムアウト
    f32 VisitorTimeOutTime;
    
    /// 訪問者リストダウンロード間隔
    f32 DownloadSpan;
    
    /// 予約
    dummy8 pad12[4];
    
    /// 徘徊幻影寿命
    f32 wanderGhostIntervalLifeTime;
    
    /// 予約
    dummy8 pad13[12];
    
    /// 黄衣の翁待ちタイムアウト
    f32 YellowMonkTimeOutTime;
    
    /// 黄衣の翁リストダウンロード間隔
    f32 YellowMonkDownloadSpan;
    
    /// 黄衣の翁全体フロータイムアウト
    f32 YellowMonkOverallFlowTimeOutTime;
    
    /// 予約
    dummy8 pad14[4];
    
    /// 予約
    dummy8 pad15[8];
    
};

struct SE_MATERIAL_CONVERT_PARAM_ST {
    static constexpr const char* TYPE_NAME = "SE_MATERIAL_CONVERT_PARAM_ST";
    
    /// SE材質ID
    /// 
    /// SFX材質ID（３桁）からSE材質ID（２桁）への変換
    u8 seMaterialId;
    
    /// パディング
    dummy8 pad[3];
    
};

struct CS_DECAL_QUALITY_DETAIL {
    static constexpr const char* TYPE_NAME = "CS_DECAL_QUALITY_DETAIL";
    
    /// デカール有効
    u8 enabled;
    
    dummy8 dmy[3];
    
};

struct EQUIP_PARAM_PROTECTOR_ST {
    static constexpr const char* TYPE_NAME = "EQUIP_PARAM_PROTECTOR_ST";
    
    /// ソートID(プログラム内で強化レベルを加味しているので s32 では７桁が限界)
    s32 sortId;
    
    /// 徘徊装備ID
    /// 
    /// 徘徊ゴースト用の差し替え装備ID.
    u32 wanderingEquipId;
    
    /// ベイグラント時アイテム抽選ID
    /// 
    /// -1：ベイグラントなし 0：抽選なし 1～：抽選あり
    s32 vagrantItemLotId;
    
    /// ベイグラントボーナス敵ドロップアイテム抽選ID
    /// 
    /// -1：ドロップなし 0：抽選なし 1～：抽選あり
    s32 vagrantBonusEneDropItemLotId;
    
    /// ベイグラントアイテム敵ドロップアイテム抽選ID
    /// 
    /// -1：ドロップなし 0：抽選なし 1～：抽選あり
    s32 vagrantItemEneDropItemLotId;
    
    /// 修理価格
    /// 
    /// 修理基本価格
    s32 fixPrice;
    
    /// 基本価格
    s32 basicPrice;
    
    /// 売却価格
    /// 
    /// 販売価格
    s32 sellValue;
    
    /// 重量[kg].
    f32 weight;
    
    /// 常駐特殊効果ID1
    s32 residentSpEffectId;
    
    /// 常駐特殊効果ID2
    s32 residentSpEffectId2;
    
    /// 常駐特殊効果ID3
    s32 residentSpEffectId3;
    
    /// 素材ID
    /// 
    /// 武器強化に必要な素材パラメータID
    s32 materialSetId;
    
    /// 部位ダメージ率
    f32 partsDamageRate;
    
    /// SA回復時間補正値
    /// 
    /// スーパーアーマー回復時間の補正値
    f32 corectSARecover;
    
    /// 派生元
    /// 
    /// この防具の強化元防具ID
    s32 originEquipPro;
    
    /// 派生元 強化+1
    /// 
    /// この防具の強化元防具ID1
    s32 originEquipPro1;
    
    /// 派生元 強化+2
    /// 
    /// この防具の強化元防具ID2
    s32 originEquipPro2;
    
    /// 派生元 強化+3
    /// 
    /// この防具の強化元防具ID3
    s32 originEquipPro3;
    
    /// 派生元 強化+4
    /// 
    /// この防具の強化元防具ID4
    s32 originEquipPro4;
    
    /// 派生元 強化+5
    /// 
    /// この防具の強化元防具ID5
    s32 originEquipPro5;
    
    /// 派生元 強化+6
    /// 
    /// この防具の強化元防具ID6
    s32 originEquipPro6;
    
    /// 派生元 強化+7
    /// 
    /// この防具の強化元防具ID7
    s32 originEquipPro7;
    
    /// 派生元 強化+8
    /// 
    /// この防具の強化元防具ID8
    s32 originEquipPro8;
    
    /// 派生元 強化+9
    /// 
    /// この防具の強化元防具ID9
    s32 originEquipPro9;
    
    /// 派生元 強化+10
    /// 
    /// この防具の強化元防具ID10
    s32 originEquipPro10;
    
    /// 派生元 強化+11
    /// 
    /// この防具の強化元防具ID11
    s32 originEquipPro11;
    
    /// 派生元 強化+12
    /// 
    /// この防具の強化元防具ID12
    s32 originEquipPro12;
    
    /// 派生元 強化+13
    /// 
    /// この防具の強化元防具ID13
    s32 originEquipPro13;
    
    /// 派生元 強化+14
    /// 
    /// この防具の強化元防具ID14
    s32 originEquipPro14;
    
    /// 派生元 強化+15
    /// 
    /// この防具の強化元防具ID15
    s32 originEquipPro15;
    
    /// 男横顔拡大スケール
    f32 faceScaleM_ScaleX;
    
    /// 男前顔拡大スケール
    f32 faceScaleM_ScaleZ;
    
    /// 男横顔拡大最大倍率
    f32 faceScaleM_MaxX;
    
    /// 男前顔拡大最大倍率
    f32 faceScaleM_MaxZ;
    
    /// 女横顔拡大スケール
    f32 faceScaleF_ScaleX;
    
    /// 女前顔拡大スケール
    f32 faceScaleF_ScaleZ;
    
    /// 女横顔拡大最大倍率
    f32 faceScaleF_MaxX;
    
    /// 女前顔拡大最大倍率
    f32 faceScaleF_MaxZ;
    
    /// QWCID
    /// 
    /// QWCのパラメタID
    s32 qwcId;
    
    /// 装備モデル番号
    /// 
    /// 装備モデルの番号.
    u16 equipModelId;
    
    /// 男用アイコンID
    /// 
    /// 男用メニューアイコンID.
    u16 iconIdM;
    
    /// 女用アイコンID
    /// 
    /// 女用メニューアイコンID.
    u16 iconIdF;
    
    /// ノックバックカット率_対プレイヤー_直撃時[％]
    /// 
    /// プレイヤーの攻撃が直撃した時のノックバックカット率
    u8 knockBackCutRate_vsPlayer_DirectHit;
    
    /// ノックバックカット率_対エネミー_直撃時[％]
    /// 
    /// エネミーの攻撃が直撃した時のノックバックカット率
    u8 knockBackCutRate_vsEnemy_DirectHit;
    
    /// ノックバック反発率
    /// 
    /// ノックバックの反発率.
    u16 knockbackBounceRate;
    
    /// 耐久度
    /// 
    /// 初期耐久度.
    u16 durability;
    
    /// 耐久度最大値
    /// 
    /// 新品耐久度.
    u16 durabilityMax;
    
    /// SA耐久値
    /// 
    /// スーパーアーマー耐久力
    s16 saDurability;
    
    /// はじき防御力
    /// 
    /// 敵の攻撃のはじき返し判定に利用.
    u16 defFlickPower;
    
    /// 物理防御力
    /// 
    /// 物理攻撃のダメージ防御.
    u16 defensePhysics;
    
    /// 魔法防御力
    /// 
    /// 魔法攻撃のダメージ防御.
    u16 defenseMagic;
    
    /// 炎防御力
    /// 
    /// 炎攻撃のダメージ防御.
    u16 defenseFire;
    
    /// 電撃防御力
    /// 
    /// 電撃攻撃のダメージ防御.
    u16 defenseThunder;
    
    /// 斬撃防御力
    /// 
    /// 攻撃タイプを見て、斬撃属性のときは、防御力を減少させる
    s16 defenseSlash;
    
    /// 軽打防御力
    /// 
    /// 攻撃属性を見て、軽打属性のときは、防御力を減少させる.
    s16 defenseLightHit;
    
    /// 刺突防御力
    /// 
    /// 攻撃属性を見て、刺突属性のときは、防御力を減少させる.
    s16 defenseThrust;
    
    /// 毒耐性
    /// 
    /// 毒状態異常へのかかりにくさ
    u16 resistPoison;
    
    /// 疫病耐性
    /// 
    /// 疫病状態異常へのかかりにくさ
    u16 resistDisease;
    
    /// 出血耐性
    /// 
    /// 出血状態異常へのかかりにくさ
    u16 resistBlood;
    
    /// 呪耐性
    /// 
    /// 呪い状態異常へのかかりにくさ
    u16 resistCurse;
    
    /// 強化タイプID
    s16 reinforceTypeId;
    
    /// トロフィーシステムに関係あるか？
    s16 trophySGradeId;
    
    /// ショップレベル
    /// 
    /// お店で販売できるレベル
    s16 shopLv;
    
    /// ノックバックパラメータID
    /// 
    /// ノックバックで使用するパラメータのID
    u8 knockbackParamId;
    
    /// はじき時ダメージ減衰率[%]
    /// 
    /// はじき時のダメージ減衰率に使用
    u8 flickDamageCutRate;
    
    /// 装備モデル種別
    /// 
    /// 装備モデルの種別.
    u8 equipModelCategory;
    
    /// 装備モデル性別
    /// 
    /// 装備モデルの性別.
    u8 equipModelGender;
    
    /// 防具カテゴリ
    /// 
    /// 防具のカテゴリ.
    u8 protectorCategory;
    
    /// パディング
    /// 
    /// アライメントを跨ぐので注意。
    dummy8 pad02[1];
    
    /// パディング
    dummy8 pad03[1];
    
    /// 部位ダメージ適用攻撃
    /// 
    /// 部位ダメージ判定を行う攻撃タイプを設定
    u8 partsDmgType;
    
    /// パディング
    dummy8 pad04[2];
    
    /// 預けれるか
    /// 
    /// 倉庫に預けれるか
    u8 isDeposit : 1;
    
    /// 頭装備か.
    u8 headEquip : 1;
    
    /// 胴装備か.
    u8 bodyEquip : 1;
    
    /// 腕装備か.
    u8 armEquip : 1;
    
    /// 脚装備か.
    u8 legEquip : 1;
    
    /// 顔スケールを使用するか
    u8 useFaceScale : 1;
    
    /// PAD_元_#00#非表示
    /// 
    /// 元_#00#非表示
    dummy8 invisibleFlag00 : 1;
    
    /// PAD_元_#01#非表示
    /// 
    /// 元_#01#非表示
    dummy8 invisibleFlag01 : 1;
    
    /// PAD_元_#02#非表示
    /// 
    /// 元_#02#非表示
    dummy8 invisibleFlag02 : 1;
    
    /// PAD_元_#03#非表示
    /// 
    /// 元_#03#非表示
    dummy8 invisibleFlag03 : 1;
    
    /// PAD_元_#04#非表示
    /// 
    /// 元_#04#非表示
    dummy8 invisibleFlag04 : 1;
    
    /// PAD_元_#05#非表示
    /// 
    /// 元_#05#非表示
    dummy8 invisibleFlag05 : 1;
    
    /// PAD_元_#06#非表示
    /// 
    /// 元_#06#非表示
    dummy8 invisibleFlag06 : 1;
    
    /// PAD_元_#07#非表示
    /// 
    /// 元_#07#非表示
    dummy8 invisibleFlag07 : 1;
    
    /// PAD_元_#08#非表示
    /// 
    /// 元_#08#非表示
    dummy8 invisibleFlag08 : 1;
    
    /// PAD_元_#09#非表示
    /// 
    /// 元_#09#非表示
    dummy8 invisibleFlag09 : 1;
    
    /// PAD_元_#10#非表示
    /// 
    /// 元_#10#非表示
    dummy8 invisibleFlag10 : 1;
    
    /// PAD_元_#11#非表示
    /// 
    /// 元_#11#非表示
    dummy8 invisibleFlag11 : 1;
    
    /// PAD_元_#12#非表示
    /// 
    /// 元_#12#非表示
    dummy8 invisibleFlag12 : 1;
    
    /// PAD_元_#13#非表示
    /// 
    /// 元_#13#非表示
    dummy8 invisibleFlag13 : 1;
    
    /// PAD_元_#14#非表示
    /// 
    /// 元_#14#非表示
    dummy8 invisibleFlag14 : 1;
    
    /// PAD_元_#15#非表示
    /// 
    /// 元_#15#非表示
    dummy8 invisibleFlag15 : 1;
    
    /// PAD_元_#16#非表示
    /// 
    /// 元_#16#非表示
    dummy8 invisibleFlag16 : 1;
    
    /// PAD_元_#17#非表示
    /// 
    /// 元_#17#非表示
    dummy8 invisibleFlag17 : 1;
    
    /// PAD_元_#18#非表示
    /// 
    /// 元_#18#非表示
    dummy8 invisibleFlag18 : 1;
    
    /// PAD_元_#19#非表示
    /// 
    /// 元_#19#非表示
    dummy8 invisibleFlag19 : 1;
    
    /// PAD_元_#20#非表示
    /// 
    /// 元_#20#非表示
    dummy8 invisibleFlag20 : 1;
    
    /// PAD_元_#21#非表示
    /// 
    /// 元_#21#非表示
    dummy8 invisibleFlag21 : 1;
    
    /// PAD_元_#22#非表示
    /// 
    /// 元_#22#非表示
    dummy8 invisibleFlag22 : 1;
    
    /// PAD_元_#23#非表示
    /// 
    /// 元_#23#非表示
    dummy8 invisibleFlag23 : 1;
    
    /// PAD_元_#24#非表示
    /// 
    /// 元_#24#非表示
    dummy8 invisibleFlag24 : 1;
    
    /// PAD_元_#25#非表示
    /// 
    /// 元_#25#非表示
    dummy8 invisibleFlag25 : 1;
    
    /// PAD_元_#26#非表示
    /// 
    /// 元_#26#非表示
    dummy8 invisibleFlag26 : 1;
    
    /// PAD_元_#27#非表示
    /// 
    /// 元_#27#非表示
    dummy8 invisibleFlag27 : 1;
    
    /// PAD_元_#28#非表示
    /// 
    /// 元_#28#非表示
    dummy8 invisibleFlag28 : 1;
    
    /// PAD_元_#29#非表示
    /// 
    /// 元_#29#非表示
    dummy8 invisibleFlag29 : 1;
    
    /// PAD_元_#30#非表示
    /// 
    /// 元_#30#非表示
    dummy8 invisibleFlag30 : 1;
    
    /// PAD_元_#31#非表示
    /// 
    /// 元_#31#非表示
    dummy8 invisibleFlag31 : 1;
    
    /// PAD_元_#32#非表示
    /// 
    /// 元_#32#非表示
    dummy8 invisibleFlag32 : 1;
    
    /// PAD_元_#33#非表示
    /// 
    /// 元_#33#非表示
    dummy8 invisibleFlag33 : 1;
    
    /// PAD_元_#34#非表示
    /// 
    /// 元_#34#非表示
    dummy8 invisibleFlag34 : 1;
    
    /// PAD_元_#35#非表示
    /// 
    /// 元_#35#非表示
    dummy8 invisibleFlag35 : 1;
    
    /// PAD_元_#36#非表示
    /// 
    /// 元_#36#非表示
    dummy8 invisibleFlag36 : 1;
    
    /// PAD_元_#37#非表示
    /// 
    /// 元_#37#非表示
    dummy8 invisibleFlag37 : 1;
    
    /// PAD_元_#38#非表示
    /// 
    /// 元_#38#非表示
    dummy8 invisibleFlag38 : 1;
    
    /// PAD_元_#39#非表示
    /// 
    /// 元_#39#非表示
    dummy8 invisibleFlag39 : 1;
    
    /// PAD_元_#40#非表示
    /// 
    /// 元_#40#非表示
    dummy8 invisibleFlag40 : 1;
    
    /// PAD_元_#41#非表示
    /// 
    /// 元_#41#非表示
    dummy8 invisibleFlag41 : 1;
    
    /// PAD_元_#42#非表示
    /// 
    /// 元_#42#非表示
    dummy8 invisibleFlag42 : 1;
    
    /// PAD_元_#43#非表示
    /// 
    /// 元_#43#非表示
    dummy8 invisibleFlag43 : 1;
    
    /// PAD_元_#44#非表示
    /// 
    /// 元_#44#非表示
    dummy8 invisibleFlag44 : 1;
    
    /// PAD_元_#45#非表示
    /// 
    /// 元_#45#非表示
    dummy8 invisibleFlag45 : 1;
    
    /// PAD_元_#46#非表示
    /// 
    /// _元_#46#非表示
    dummy8 invisibleFlag46 : 1;
    
    /// PAD_元_#47#非表示
    /// 
    /// 元_#47#非表示
    dummy8 invisibleFlag47 : 1;
    
    /// マルチドロップ共有禁止か
    u8 disableMultiDropShare : 1;
    
    /// DLC用シンプルモデルありか
    /// 
    /// ＤＬＣ用シンプルモデルが存在しているか
    u8 simpleModelForDlc : 1;
    
    /// 捨てれるか
    /// 
    /// アイテムを捨てれるか？TRUE=捨てれる
    u8 isDiscard : 1;
    
    /// その場に置けるか
    /// 
    /// アイテムをその場に置けるか？TRUE=置ける
    u8 isDrop : 1;
    
    /// 入手時ログ表示するか
    /// 
    /// アイテムの入手時にアイテム取得ログへ表示するか(○=アイテム取得ログへ表示する）
    u8 isNoticeLog : 1;
    
    /// 入手時ダイアログ表示するか
    /// 
    /// 取得時に時止めダイアログを表示するか
    u8 isNoticeDialog : 1;
    
    /// パディング
    dummy8 pad : 4;
    
    /// 無属性ダメージ倍率
    f32 neutralDamageCutRate;
    
    /// 斬撃ダメージ倍率
    f32 slashDamageCutRate;
    
    /// 軽打ダメージ倍率
    f32 lightHitDamageCutRate;
    
    /// 刺突ダメージ倍率
    f32 thrustDamageCutRate;
    
    /// 魔法ダメージ倍率
    f32 magicDamageCutRate;
    
    /// 火炎ダメージ倍率
    f32 fireDamageCutRate;
    
    /// 電撃ダメージ倍率
    f32 thunderDamageCutRate;
    
    /// 防御材質1【SFX】
    /// 
    /// 移動/防御時のSFX用.1
    u16 defenseMaterialSfx1;
    
    /// 弱点防御材質1【SFX】
    /// 
    /// 弱点部位ダメージ時のSFX用1
    u16 defenseMaterialSfx_Weak1;
    
    /// 防御材質1【SE】
    /// 
    /// 移動/防御時のSE用.1
    u16 defenseMaterial1;
    
    /// 弱点防御材質1【SE】
    /// 
    /// 弱点部位ダメージ時のSE用1
    u16 defenseMaterial_Weak1;
    
    /// 防御材質2【SFX】
    /// 
    /// 移動/防御時のSFX用.2
    u16 defenseMaterialSfx2;
    
    /// 弱点防御材質2【SFX】
    /// 
    /// 弱点部位ダメージ時のSFX用2
    u16 defenseMaterialSfx_Weak2;
    
    /// 防御材質2【SE】
    /// 
    /// 移動/防御時のSE用.2
    u16 defenseMaterial2;
    
    /// 弱点防御材質2【SE】
    /// 
    /// 弱点部位ダメージ時のSE用2
    u16 defenseMaterial_Weak2;
    
    /// フットデカール識別子1
    /// 
    /// フットエフェクトのデカールID。床材質も考慮される。防具カテゴリ」が「脚」のときのみ利用される。
    s32 footEffectDecalBaseId1;
    
    /// 強靭度 被ダメージ倍率
    /// 
    /// 強靭度版カット率
    f32 toughnessDamageCutRate;
    
    /// 強靭度 回復時間補正値
    /// 
    /// 強靭度の回復時間用の補正値
    f32 toughnessRecoverCorrection;
    
    /// 闇ダメージ倍率
    f32 darkDamageCutRate;
    
    /// 闇防御力
    /// 
    /// 闇攻撃のダメージ防御.
    u16 defenseDark;
    
    /// PAD_元_#48#非表示
    /// 
    /// 元_#48#非表示
    dummy8 invisibleFlag48 : 1;
    
    /// PAD_元_#49#非表示
    /// 
    /// 元_#49#非表示
    dummy8 invisibleFlag49 : 1;
    
    /// PAD_元_#50#非表示
    /// 
    /// 元_#50#非表示
    dummy8 invisibleFlag50 : 1;
    
    /// PAD_元_#51#非表示
    /// 
    /// 元_#51#非表示
    dummy8 invisibleFlag51 : 1;
    
    /// PAD_元_#52#非表示
    /// 
    /// 元_#52#非表示
    dummy8 invisibleFlag52 : 1;
    
    /// PAD_元_#53#非表示
    /// 
    /// 元_#53#非表示
    dummy8 invisibleFlag53 : 1;
    
    /// PAD_元_#54#非表示
    /// 
    /// 元_#54#非表示
    dummy8 invisibleFlag54 : 1;
    
    /// PAD_元_#55#非表示
    /// 
    /// 元_#55#非表示
    dummy8 invisibleFlag55 : 1;
    
    /// PAD_元_#56#非表示
    /// 
    /// 元_#56#非表示
    dummy8 invisibleFlag56 : 1;
    
    /// PAD_元_#57#非表示
    /// 
    /// 元_#57#非表示
    dummy8 invisibleFlag57 : 1;
    
    /// PAD_元_#58#非表示
    /// 
    /// 元_#58#非表示
    dummy8 invisibleFlag58 : 1;
    
    /// PAD_元_#59#非表示
    /// 
    /// 元_#59#非表示
    dummy8 invisibleFlag59 : 1;
    
    /// PAD_元_#60#非表示
    /// 
    /// 元_#60#非表示
    dummy8 invisibleFlag60 : 1;
    
    /// PAD_元_#61#非表示
    /// 
    /// 元_#61#非表示
    dummy8 invisibleFlag61 : 1;
    
    /// PAD_元_#62#非表示
    /// 
    /// 元_#62#非表示
    dummy8 invisibleFlag62 : 1;
    
    /// PAD_元_#63#非表示
    /// 
    /// 元_#63#非表示
    dummy8 invisibleFlag63 : 1;
    
    /// PAD_元_#64#非表示
    /// 
    /// 元_#64#非表示
    dummy8 invisibleFlag64 : 1;
    
    /// PAD_元_#65#非表示
    /// 
    /// 元_#65#非表示
    dummy8 invisibleFlag65 : 1;
    
    /// PAD_元_#66#非表示
    /// 
    /// 元_#66#非表示
    dummy8 invisibleFlag66 : 1;
    
    /// PAD_元_#67#非表示
    /// 
    /// 元_#67#非表示
    dummy8 invisibleFlag67 : 1;
    
    /// PAD_元_#68#非表示
    /// 
    /// 元_#68#非表示
    dummy8 invisibleFlag68 : 1;
    
    /// PAD_元_#69#非表示
    /// 
    /// 元_#69#非表示
    dummy8 invisibleFlag69 : 1;
    
    /// PAD_元_#70#非表示
    /// 
    /// 元_#70#非表示
    dummy8 invisibleFlag70 : 1;
    
    /// PAD_元_#71#非表示
    /// 
    /// 元_#71#非表示
    dummy8 invisibleFlag71 : 1;
    
    /// PAD_元_#72#非表示
    /// 
    /// 元_#72#非表示
    dummy8 invisibleFlag72 : 1;
    
    /// PAD_元_#73#非表示
    /// 
    /// 元_#73#非表示
    dummy8 invisibleFlag73 : 1;
    
    /// PAD_元_#74#非表示
    /// 
    /// 元_#74#非表示
    dummy8 invisibleFlag74 : 1;
    
    /// PAD_元_#75#非表示
    /// 
    /// 元_#75#非表示
    dummy8 invisibleFlag75 : 1;
    
    /// PAD_元_#76#非表示
    /// 
    /// 元_#76#非表示
    dummy8 invisibleFlag76 : 1;
    
    /// PAD_元_#77#非表示
    /// 
    /// 元_#77#非表示
    dummy8 invisibleFlag77 : 1;
    
    /// PAD_元_#78#非表示
    /// 
    /// 元_#78#非表示
    dummy8 invisibleFlag78 : 1;
    
    /// PAD_元_#79#非表示
    /// 
    /// 元_#79#非表示
    dummy8 invisibleFlag79 : 1;
    
    /// PAD_元_#80#非表示
    /// 
    /// 元_#80#非表示
    dummy8 invisibleFlag80 : 1;
    
    /// パディング
    dummy8 padbit : 7;
    
    /// パディング
    dummy8 pad05[1];
    
    /// 上腕パラメータID番号番号
    /// 
    /// デブ装備時に腕を上げる具合のパラメータ
    s32 upperArmParamId;
    
    /// 販売価格
    s32 saleValue;
    
    /// 冷機耐性
    /// 
    /// 冷気状態異常へのかかりにくさ
    u16 resistFreeze;
    
    /// #00#非表示(男女指定)
    /// 
    /// 前髪の先
    u8 invisibleFlag_SexVer00;
    
    /// #01#非表示(男女指定)
    /// 
    /// 前髪の根元
    u8 invisibleFlag_SexVer01;
    
    /// #02#非表示(男女指定)
    /// 
    /// もみあげ
    u8 invisibleFlag_SexVer02;
    
    /// #03#非表示(男女指定)
    /// 
    /// 頭頂部
    u8 invisibleFlag_SexVer03;
    
    /// #04#非表示(男女指定)
    /// 
    /// 頭頂部
    u8 invisibleFlag_SexVer04;
    
    /// #05#非表示(男女指定)
    /// 
    /// 後ろ髪
    u8 invisibleFlag_SexVer05;
    
    /// #06#非表示(男女指定)
    /// 
    /// 後ろ髪の先
    u8 invisibleFlag_SexVer06;
    
    /// #07#非表示(男女指定)
    u8 invisibleFlag_SexVer07;
    
    /// #08#非表示(男女指定)
    u8 invisibleFlag_SexVer08;
    
    /// #09#非表示(男女指定)
    u8 invisibleFlag_SexVer09;
    
    /// #10#非表示(男女指定)
    /// 
    /// 襟
    u8 invisibleFlag_SexVer10;
    
    /// #11#非表示(男女指定)
    /// 
    /// 襟回り
    u8 invisibleFlag_SexVer11;
    
    /// #12#非表示(男女指定)
    u8 invisibleFlag_SexVer12;
    
    /// #13#非表示(男女指定)
    u8 invisibleFlag_SexVer13;
    
    /// #14#非表示(男女指定)
    u8 invisibleFlag_SexVer14;
    
    /// #15#非表示(男女指定)
    /// 
    /// 頭巾の裾
    u8 invisibleFlag_SexVer15;
    
    /// #16#非表示(男女指定)
    u8 invisibleFlag_SexVer16;
    
    /// #17#非表示(男女指定)
    u8 invisibleFlag_SexVer17;
    
    /// #18#非表示(男女指定)
    u8 invisibleFlag_SexVer18;
    
    /// #19#非表示(男女指定)
    u8 invisibleFlag_SexVer19;
    
    /// #20#非表示(男女指定)
    /// 
    /// 袖A
    u8 invisibleFlag_SexVer20;
    
    /// #21#非表示(男女指定)
    /// 
    /// 袖B
    u8 invisibleFlag_SexVer21;
    
    /// #22#非表示(男女指定)
    u8 invisibleFlag_SexVer22;
    
    /// #23#非表示(男女指定)
    u8 invisibleFlag_SexVer23;
    
    /// #24#非表示(男女指定)
    u8 invisibleFlag_SexVer24;
    
    /// #25#非表示(男女指定)
    /// 
    /// 腕
    u8 invisibleFlag_SexVer25;
    
    /// #26#非表示(男女指定)
    u8 invisibleFlag_SexVer26;
    
    /// #27#非表示(男女指定)
    u8 invisibleFlag_SexVer27;
    
    /// #28#非表示(男女指定)
    u8 invisibleFlag_SexVer28;
    
    /// #29#非表示(男女指定)
    u8 invisibleFlag_SexVer29;
    
    /// #30#非表示(男女指定)
    /// 
    /// ベルト
    u8 invisibleFlag_SexVer30;
    
    /// #31#非表示(男女指定)
    u8 invisibleFlag_SexVer31;
    
    /// #32#非表示(男女指定)
    u8 invisibleFlag_SexVer32;
    
    /// #33#非表示(男女指定)
    u8 invisibleFlag_SexVer33;
    
    /// #34#非表示(男女指定)
    u8 invisibleFlag_SexVer34;
    
    /// #35#非表示(男女指定)
    u8 invisibleFlag_SexVer35;
    
    /// #36#非表示(男女指定)
    u8 invisibleFlag_SexVer36;
    
    /// #37#非表示(男女指定)
    u8 invisibleFlag_SexVer37;
    
    /// #38#非表示(男女指定)
    u8 invisibleFlag_SexVer38;
    
    /// #39#非表示(男女指定)
    u8 invisibleFlag_SexVer39;
    
    /// #40#非表示(男女指定)
    u8 invisibleFlag_SexVer40;
    
    /// #41#非表示(男女指定)
    u8 invisibleFlag_SexVer41;
    
    /// #42#非表示(男女指定)
    u8 invisibleFlag_SexVer42;
    
    /// #43#非表示(男女指定)
    u8 invisibleFlag_SexVer43;
    
    /// #44#非表示(男女指定)
    u8 invisibleFlag_SexVer44;
    
    /// #45#非表示(男女指定)
    u8 invisibleFlag_SexVer45;
    
    /// #46#非表示(男女指定)
    u8 invisibleFlag_SexVer46;
    
    /// #47#非表示(男女指定)
    u8 invisibleFlag_SexVer47;
    
    /// #48#非表示(男女指定)
    u8 invisibleFlag_SexVer48;
    
    /// #49#非表示(男女指定)
    u8 invisibleFlag_SexVer49;
    
    /// #50#非表示(男女指定)
    u8 invisibleFlag_SexVer50;
    
    /// #51#非表示(男女指定)
    u8 invisibleFlag_SexVer51;
    
    /// #52#非表示(男女指定)
    u8 invisibleFlag_SexVer52;
    
    /// #53#非表示(男女指定)
    u8 invisibleFlag_SexVer53;
    
    /// #54#非表示(男女指定)
    u8 invisibleFlag_SexVer54;
    
    /// #55#非表示(男女指定)
    u8 invisibleFlag_SexVer55;
    
    /// #56#非表示(男女指定)
    u8 invisibleFlag_SexVer56;
    
    /// #57#非表示(男女指定)
    u8 invisibleFlag_SexVer57;
    
    /// #58#非表示(男女指定)
    u8 invisibleFlag_SexVer58;
    
    /// #59#非表示(男女指定)
    u8 invisibleFlag_SexVer59;
    
    /// #60#非表示(男女指定)
    u8 invisibleFlag_SexVer60;
    
    /// #61#非表示(男女指定)
    u8 invisibleFlag_SexVer61;
    
    /// #62#非表示(男女指定)
    u8 invisibleFlag_SexVer62;
    
    /// #63#非表示(男女指定)
    u8 invisibleFlag_SexVer63;
    
    /// #64#非表示(男女指定)
    u8 invisibleFlag_SexVer64;
    
    /// #65#非表示(男女指定)
    u8 invisibleFlag_SexVer65;
    
    /// #66#非表示(男女指定)
    u8 invisibleFlag_SexVer66;
    
    /// #67#非表示(男女指定)
    u8 invisibleFlag_SexVer67;
    
    /// #68#非表示(男女指定)
    u8 invisibleFlag_SexVer68;
    
    /// #69#非表示(男女指定)
    u8 invisibleFlag_SexVer69;
    
    /// #70#非表示(男女指定)
    u8 invisibleFlag_SexVer70;
    
    /// #71#非表示(男女指定)
    u8 invisibleFlag_SexVer71;
    
    /// #72#非表示(男女指定)
    u8 invisibleFlag_SexVer72;
    
    /// #73#非表示(男女指定)
    u8 invisibleFlag_SexVer73;
    
    /// #74#非表示(男女指定)
    u8 invisibleFlag_SexVer74;
    
    /// #75#非表示(男女指定)
    u8 invisibleFlag_SexVer75;
    
    /// #76#非表示(男女指定)
    u8 invisibleFlag_SexVer76;
    
    /// #77#非表示(男女指定)
    u8 invisibleFlag_SexVer77;
    
    /// #78#非表示(男女指定)
    u8 invisibleFlag_SexVer78;
    
    /// #79#非表示(男女指定)
    u8 invisibleFlag_SexVer79;
    
    /// #80#非表示(男女指定)
    u8 invisibleFlag_SexVer80;
    
    /// #81#非表示(男女指定)
    u8 invisibleFlag_SexVer81;
    
    /// #82#非表示(男女指定)
    u8 invisibleFlag_SexVer82;
    
    /// #83#非表示(男女指定)
    u8 invisibleFlag_SexVer83;
    
    /// #84#非表示(男女指定)
    u8 invisibleFlag_SexVer84;
    
    /// #85#非表示(男女指定)
    u8 invisibleFlag_SexVer85;
    
    /// #86#非表示(男女指定)
    u8 invisibleFlag_SexVer86;
    
    /// #87#非表示(男女指定)
    u8 invisibleFlag_SexVer87;
    
    /// #88#非表示(男女指定)
    u8 invisibleFlag_SexVer88;
    
    /// #89#非表示(男女指定)
    u8 invisibleFlag_SexVer89;
    
    /// #90#非表示(男女指定)
    u8 invisibleFlag_SexVer90;
    
    /// #91#非表示(男女指定)
    u8 invisibleFlag_SexVer91;
    
    /// #92#非表示(男女指定)
    u8 invisibleFlag_SexVer92;
    
    /// #93#非表示(男女指定)
    u8 invisibleFlag_SexVer93;
    
    /// #94#非表示(男女指定)
    u8 invisibleFlag_SexVer94;
    
    /// #95#非表示(男女指定)
    u8 invisibleFlag_SexVer95;
    
    /// パディング
    dummy8 pad01[2];
    
    /// フットデカール識別子2
    /// 
    /// フットエフェクトのデカールID。床材質も考慮される。防具カテゴリ」が「脚」のときのみ利用される。
    s16 footEffectDecalBaseId2;
    
    /// フットデカール識別子3
    /// 
    /// フットエフェクトのデカールID。床材質も考慮される。防具カテゴリ」が「脚」のときのみ利用される。
    s16 footEffectDecalBaseId3;
    
    /// 斬撃スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が斬撃のときにスタミナダメージに乗算する
    f32 slashStaminaDmgRate;
    
    /// 軽打スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が軽打のときにスタミナダメージに乗算する
    f32 lightHitStaminaDmgRate;
    
    /// 刺突スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が刺突のときにスタミナダメージに乗算する
    f32 thrustStaminaDmgRate;
    
    /// 無属性スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が無属性のときにスタミナダメージに乗算する
    f32 neutralStaminaDmgRate;
    
    /// 忍殺スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が忍殺のときにスタミナダメージに乗算する
    f32 ninsatuStaminaDmgRate;
    
    /// 重打スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が重打のときにスタミナダメージに乗算する
    f32 heavyHitStaminaDmgRate;
    
    /// 対地スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が対地のときにスタミナダメージに乗算する
    f32 antiGroundStaminaDmgRate;
    
    /// 対空スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が対空のときにスタミナダメージに乗算する
    f32 antiAirStaminaDmgRate;
    
    /// 軽射スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が軽射のときにスタミナダメージに乗算する
    f32 lightShootStaminaDmgRate;
    
    /// 無属性防御力
    /// 
    /// 攻撃属性を見て、無属性のときは、防御力を減少させる.
    s16 defenseNeutral;
    
    /// 忍殺防御力
    /// 
    /// 攻撃属性を見て、忍殺のときは、防御力を減少させる.
    s16 defenseNinsatsu;
    
    /// 重打防御力
    /// 
    /// 攻撃属性を見て、重打のときは、防御力を減少させる.
    s16 defenseHeavyHit;
    
    /// 対地防御力
    /// 
    /// 攻撃属性を見て、対地のときは、防御力を減少させる.
    s16 defenseAntiGround;
    
    /// 対空防御力
    /// 
    /// 攻撃属性を見て、対空のときは、防御力を減少させる.
    s16 defenseAntiAir;
    
    /// 軽射防御力
    /// 
    /// 攻撃属性を見て、軽射のときは、防御力を減少させる.
    s16 defenseLightShoot;
    
    /// 忍殺ダメージ倍率
    f32 ninsatsuDmgRate;
    
    /// 重打ダメージ倍率
    f32 heavyHitDmgRate;
    
    /// 対地ダメージ倍率
    f32 antiGroundDmgRate;
    
    /// 対空ダメージ倍率
    f32 antiAirDmgRate;
    
    /// 軽射ダメージ倍率
    f32 lightShootDmgRate;
    
    /// 初回入手イベントフラグID
    /// 
    /// 防具を入手したときに立てるイベントフラグを設定します（-1なら何もしない）
    s32 firstGetEventFlagId;
    
    /// 属性Aスタミナダメージ倍率
    /// 
    /// スタミナ物理属性が属性Aのときにスタミナダメージに乗算する
    f32 attriAStaminaDmgRate;
    
    /// 属性Bスタミナダメージ倍率
    /// 
    /// スタミナ物理属性が属性Bのときにスタミナダメージに乗算する
    f32 attriBStaminaDmgRate;
    
    /// 属性Cスタミナダメージ倍率
    /// 
    /// スタミナ物理属性が属性Cのときにスタミナダメージに乗算する
    f32 attriCStaminaDmgRate;
    
    /// 属性A防御力
    /// 
    /// 攻撃タイプを見て、属性A属性のときは、防御力を減少させる
    s16 defenseAttriA;
    
    /// 属性B防御力
    /// 
    /// 攻撃タイプを見て、属性B属性のときは、防御力を減少させる
    s16 defenseAttriB;
    
    /// 属性C防御力
    /// 
    /// 攻撃タイプを見て、属性C属性のときは、防御力を減少させる
    s16 defenseAttriC;
    
    /// アイテム取得UIの表示タイプ
    /// 
    /// アイテム取得ダイアログとアイテム取得ログの表示タイプ
    u8 itemUIDisplayType;
    
    /// パディング
    dummy8 pad06[1];
    
    /// 属性Aダメージ倍率
    f32 attriADamageCutRate;
    
    /// 属性Bダメージ倍率
    f32 attriBDamageCutRate;
    
    /// 属性Cダメージ倍率
    f32 attriCDamageCutRate;
    
};

struct CULT_SETTING_PARAM_ST {
    static constexpr const char* TYPE_NAME = "CULT_SETTING_PARAM_ST";
    
    /// 運び受付距離
    /// 
    /// 掴みおよび儀式を開始できる距離
    f32 carryGrabLength;
    
    /// 運び受付角度
    /// 
    /// 掴みおよび儀式を開始できる角度
    f32 carryGrabAngle;
    
    /// 儀式死体化 初回
    /// 
    /// 初回の儀式判定に使うグローバルフラグID。“-1”はフラグなしとして扱う
    s32 cultDead_GlobalFlagId;
    
    /// 儀式死体化 確率
    /// 
    /// 初回以降の「儀式死体化 確率タイプ」の発生率。分子を指定、分母は　1000　とする
    u16 cultDead_Probability;
    
    /// 儀式死体化 初回タイプ
    /// 
    /// 初回倒した時の必ず発生する儀式タイプ
    s8 cultDeadType_First;
    
    /// 儀式死体化 確率タイプ
    /// 
    /// 初回以降倒した時に確率で発生する儀式タイプ
    s8 cultDeadType_Probability;
    
    dummy8 pad[16];
    
};

struct ENEMY_STANDARD_INFO_BANK {
    static constexpr const char* TYPE_NAME = "ENEMY_STANDARD_INFO_BANK";
    
    /// 挙動ｉｄ
    /// 
    /// 敵の挙動ＩＤ
    s32 EnemyBehaviorID;
    
    /// ヒットポイント
    u16 HP;
    
    /// 攻撃力（プロト専用）
    u16 AttackPower;
    
    /// キャラタイプ
    s32 ChrType;
    
    /// あたりの高さ[m]
    /// 
    /// あたりの高さ（直径以上のサイズを指定してください）
    f32 HitHeight;
    
    /// あたりの半径[m]
    /// 
    /// あたりの半径
    f32 HitRadius;
    
    /// 重さ[kg]
    /// 
    /// キャラの重さ
    f32 Weight;
    
    /// 動摩擦力
    f32 DynamicFriction;
    
    /// 静摩擦力
    /// 
    /// 静止摩擦力
    f32 StaticFriction;
    
    /// 上半身初期状態（PG入力）
    s32 UpperDefState;
    
    /// アクション初期状態（PG入力）
    s32 ActionDefState;
    
    /// 単位時間当たり旋回できる角度[deg/s]
    /// 
    /// 単位時間当たりのＹ軸旋回角度[deg/s]
    f32 RotY_per_Second;
    
    /// 予約
    dummy8 reserve0[20];
    
    /// 未使用
    u8 RotY_per_Second_old;
    
    /// 左右移動できるか
    u8 EnableSideStep;
    
    /// キャラあたりにラグドールを使用するか
    u8 UseRagdollHit;
    
    /// 予約
    dummy8 reserve_last[5];
    
    /// スタミナ量
    /// 
    /// スタミナ総量
    u16 stamina;
    
    /// スタミナ回復
    /// 
    /// 1秒間あたりのスタミナ回復量
    u16 staminaRecover;
    
    /// スタミナ基本消費
    /// 
    /// 攻撃、ガード時に使用するスタミナ消費の基本値
    u16 staminaConsumption;
    
    /// 物理防御力
    /// 
    /// 物理攻撃に対するダメージ減少基本値
    u16 deffenct_Phys;
    
    /// 予約1
    dummy8 reserve_last2[48];
    
};

struct CUTSCENE_PARAM_ST {
    static constexpr const char* TYPE_NAME = "CUTSCENE_PARAM_ST";
    
    /// カットシーン前のBGMを一時停止するか
    /// 
    /// 一時停止するか
    u8 doPausePrevCutsceneBgm;
    
    /// パディング
    dummy8 pad0[3];
    
    /// BGMフェードアウト時間[sec]
    /// 
    /// BGMフェードアウト時間
    f32 bgmFadeoutTime;
    
    /// BGMフェードイン時間[sec]
    /// 
    /// BGMフェードイン時間
    f32 bgmFadeinTime;
    
};

struct TOUGHNESS_PARAM_ST {
    static constexpr const char* TYPE_NAME = "TOUGHNESS_PARAM_ST";
    
    /// 強靭度 補正倍率
    /// 
    /// 強靭度を求める際の補正倍率です
    f32 correctionRate;
    
    /// 最低 強靭度
    /// 
    /// 強靭度期間開始時に適用される現在強靭度の下限値です。強靭度開始時に強靭度がこの値を下回る場合は、この値まで回復します。
    u16 minToughness;
    
    /// 最低強靭値が強靭度倍率の影響を受けない
    /// 
    /// 強靭度 補正倍率を、最低 強靭度に、適用しなくなります
    u8 isNonEffectiveCorrectionForMin;
    
    /// パッド
    /// 
    /// pad
    dummy8 pad2[1];
    
    /// 特殊効果ID
    /// 
    /// 強靭度期間中にかかる差換え特殊効果Idです。-1の場合は通常の差換えルールが適用されます。プレイヤーキャラでしか使われません
    s32 spEffectId;
    
    /// パッド
    /// 
    /// pad
    dummy8 pad1[20];
    
};

struct THROW_DIRECTION_DECAL_PARAM_ST {
    static constexpr const char* TYPE_NAME = "THROW_DIRECTION_DECAL_PARAM_ST";
    
    /// 0
    /// 
    /// 使用するデカルのID
    s32 decalId_00;
    
    /// 1
    /// 
    /// 使用するデカルのID
    s32 decalId_01;
    
    /// 2
    /// 
    /// 使用するデカルのID
    s32 decalId_02;
    
    /// 3
    /// 
    /// 使用するデカルのID
    s32 decalId_03;
    
    /// 4
    /// 
    /// 使用するデカルのID
    s32 decalId_04;
    
    /// 5
    /// 
    /// 使用するデカルのID
    s32 decalId_05;
    
    /// 6
    /// 
    /// 使用するデカルのID
    s32 decalId_06;
    
    /// 7
    /// 
    /// 使用するデカルのID
    s32 decalId_07;
    
    /// 8
    /// 
    /// 使用するデカルのID
    s32 decalId_08;
    
    /// 9
    /// 
    /// 使用するデカルのID
    s32 decalId_09;
    
    /// 10
    /// 
    /// 使用するデカルのID
    s32 decalId_10;
    
    /// 11
    /// 
    /// 使用するデカルのID
    s32 decalId_11;
    
    /// 12
    /// 
    /// 使用するデカルのID
    s32 decalId_12;
    
    /// 13
    /// 
    /// 使用するデカルのID
    s32 decalId_13;
    
    /// 14
    /// 
    /// 使用するデカルのID
    s32 decalId_14;
    
    /// 15
    /// 
    /// 使用するデカルのID
    s32 decalId_15;
    
    /// 16
    /// 
    /// 使用するデカルのID
    s32 decalId_16;
    
    /// 17
    /// 
    /// 使用するデカルのID
    s32 decalId_17;
    
    /// 18
    /// 
    /// 使用するデカルのID
    s32 decalId_18;
    
    /// 19
    /// 
    /// 使用するデカルのID
    s32 decalId_19;
    
    /// 20
    /// 
    /// 使用するデカルのID
    s32 decalId_20;
    
    /// 21
    /// 
    /// 使用するデカルのID
    s32 decalId_21;
    
    /// 22
    /// 
    /// 使用するデカルのID
    s32 decalId_22;
    
    /// 23
    /// 
    /// 使用するデカルのID
    s32 decalId_23;
    
    /// 24
    /// 
    /// 使用するデカルのID
    s32 decalId_24;
    
    /// 25
    /// 
    /// 使用するデカルのID
    s32 decalId_25;
    
    /// 26
    /// 
    /// 使用するデカルのID
    s32 decalId_26;
    
    /// 27
    /// 
    /// 使用するデカルのID
    s32 decalId_27;
    
    /// 28
    /// 
    /// 使用するデカルのID
    s32 decalId_28;
    
    /// 29
    /// 
    /// 使用するデカルのID
    s32 decalId_29;
    
    /// 30
    /// 
    /// 使用するデカルのID
    s32 decalId_30;
    
    /// 31
    /// 
    /// 使用するデカルのID
    s32 decalId_31;
    
    /// 32
    /// 
    /// 使用するデカルのID
    s32 decalId_32;
    
    /// 33
    /// 
    /// 使用するデカルのID
    s32 decalId_33;
    
    /// 34
    /// 
    /// 使用するデカルのID
    s32 decalId_34;
    
    /// 35
    /// 
    /// 使用するデカルのID
    s32 decalId_35;
    
    /// 36
    /// 
    /// 使用するデカルのID
    s32 decalId_36;
    
    /// 37
    /// 
    /// 使用するデカルのID
    s32 decalId_37;
    
    /// 38
    /// 
    /// 使用するデカルのID
    s32 decalId_38;
    
    /// 39
    /// 
    /// 使用するデカルのID
    s32 decalId_39;
    
    /// 40
    /// 
    /// 使用するデカルのID
    s32 decalId_40;
    
    /// 41
    /// 
    /// 使用するデカルのID
    s32 decalId_41;
    
    /// 42
    /// 
    /// 使用するデカルのID
    s32 decalId_42;
    
    /// 43
    /// 
    /// 使用するデカルのID
    s32 decalId_43;
    
    /// 44
    /// 
    /// 使用するデカルのID
    s32 decalId_44;
    
    /// 45
    /// 
    /// 使用するデカルのID
    s32 decalId_45;
    
    /// 46
    /// 
    /// 使用するデカルのID
    s32 decalId_46;
    
    /// 47
    /// 
    /// 使用するデカルのID
    s32 decalId_47;
    
    /// 48
    /// 
    /// 使用するデカルのID
    s32 decalId_48;
    
    /// 49
    /// 
    /// 使用するデカルのID
    s32 decalId_49;
    
    /// 50
    /// 
    /// 使用するデカルのID
    s32 decalId_50;
    
    /// 51
    /// 
    /// 使用するデカルのID
    s32 decalId_51;
    
    /// 52
    /// 
    /// 使用するデカルのID
    s32 decalId_52;
    
    /// 53
    /// 
    /// 使用するデカルのID
    s32 decalId_53;
    
    /// 54
    /// 
    /// 使用するデカルのID
    s32 decalId_54;
    
    /// 55
    /// 
    /// 使用するデカルのID
    s32 decalId_55;
    
    /// 56
    /// 
    /// 使用するデカルのID
    s32 decalId_56;
    
    /// 57
    /// 
    /// 使用するデカルのID
    s32 decalId_57;
    
    /// 58
    /// 
    /// 使用するデカルのID
    s32 decalId_58;
    
    /// 59
    /// 
    /// 使用するデカルのID
    s32 decalId_59;
    
    /// 60
    /// 
    /// 使用するデカルのID
    s32 decalId_60;
    
    /// 61
    /// 
    /// 使用するデカルのID
    s32 decalId_61;
    
    /// 62
    /// 
    /// 使用するデカルのID
    s32 decalId_62;
    
    /// 63
    /// 
    /// 使用するデカルのID
    s32 decalId_63;
    
    /// 64
    /// 
    /// 使用するデカルのID
    s32 decalId_64;
    
    /// 65
    /// 
    /// 使用するデカルのID
    s32 decalId_65;
    
    /// 66
    /// 
    /// 使用するデカルのID
    s32 decalId_66;
    
    /// 67
    /// 
    /// 使用するデカルのID
    s32 decalId_67;
    
    /// 68
    /// 
    /// 使用するデカルのID
    s32 decalId_68;
    
    /// 69
    /// 
    /// 使用するデカルのID
    s32 decalId_69;
    
    /// 70
    /// 
    /// 使用するデカルのID
    s32 decalId_70;
    
    /// 71
    /// 
    /// 使用するデカルのID
    s32 decalId_71;
    
    /// 72
    /// 
    /// 使用するデカルのID
    s32 decalId_72;
    
    /// 73
    /// 
    /// 使用するデカルのID
    s32 decalId_73;
    
    /// 74
    /// 
    /// 使用するデカルのID
    s32 decalId_74;
    
    /// 75
    /// 
    /// 使用するデカルのID
    s32 decalId_75;
    
    /// 76
    /// 
    /// 使用するデカルのID
    s32 decalId_76;
    
    /// 77
    /// 
    /// 使用するデカルのID
    s32 decalId_77;
    
    /// 78
    /// 
    /// 使用するデカルのID
    s32 decalId_78;
    
    /// 79
    /// 
    /// 使用するデカルのID
    s32 decalId_79;
    
    /// 80
    /// 
    /// 使用するデカルのID
    s32 decalId_80;
    
    /// 81
    /// 
    /// 使用するデカルのID
    s32 decalId_81;
    
    /// 82
    /// 
    /// 使用するデカルのID
    s32 decalId_82;
    
    /// 83
    /// 
    /// 使用するデカルのID
    s32 decalId_83;
    
    /// 84
    /// 
    /// 使用するデカルのID
    s32 decalId_84;
    
    /// 85
    /// 
    /// 使用するデカルのID
    s32 decalId_85;
    
    /// 86
    /// 
    /// 使用するデカルのID
    s32 decalId_86;
    
    /// 87
    /// 
    /// 使用するデカルのID
    s32 decalId_87;
    
    /// 88
    /// 
    /// 使用するデカルのID
    s32 decalId_88;
    
    /// 89
    /// 
    /// 使用するデカルのID
    s32 decalId_89;
    
};

struct BULLET_CREATE_LIMIT_PARAM_ST {
    static constexpr const char* TYPE_NAME = "BULLET_CREATE_LIMIT_PARAM_ST";
    
    /// グループ内上限弾数
    /// 
    /// 同一グループ内での作成上限数
    u8 limitNum_byGroup;
    
    /// パディング
    /// 
    /// pad3
    dummy8 pad[31];
    
};

struct LIGHT_SCATTERING_BANK {
    static constexpr const char* TYPE_NAME = "LIGHT_SCATTERING_BANK";
    
    /// X角度
    /// 
    /// 光源
    s16 sunRotX;
    
    /// Ｙ角度
    /// 
    /// 光源
    s16 sunRotY;
    
    /// 距離倍率[％]
    /// 
    /// 距離倍率[%](0～1000)
    s16 distanceMul;
    
    /// Ｒ
    /// 
    /// 光源
    s16 sunR;
    
    /// Ｇ
    /// 
    /// 光源
    s16 sunG;
    
    /// Ｂ
    /// 
    /// 光源
    s16 sunB;
    
    /// RGB倍率[％]
    /// 
    /// 光源
    s16 sunA;
    
    /// パディング
    dummy8 pad_0[2];
    
    /// 散乱方向係数（-1:後方 1:前方）
    f32 lsHGg;
    
    /// レイリー散乱係数（空気の分子）
    f32 lsBetaRay;
    
    /// ミー散乱係数（微粒子）
    f32 lsBetaMie;
    
    /// ブレンド係数[％]
    /// 
    /// スキャッタリングの係具合(100で最大)
    s16 blendCoef;
    
    /// Ｒ
    /// 
    /// 地上の乱反射光色
    s16 reflectanceR;
    
    /// Ｇ
    /// 
    /// 地上の乱反射光色
    s16 reflectanceG;
    
    /// Ｂ
    /// 
    /// 地上の乱反射光色
    s16 reflectanceB;
    
    /// RGB倍率[％]
    /// 
    /// 地上の乱反射光色
    s16 reflectanceA;
    
    /// パディング
    dummy8 pad_1[2];
    
};

struct BEHAVIOR_PARAM_ST {
    static constexpr const char* TYPE_NAME = "BEHAVIOR_PARAM_ST";
    
    /// 行動バリエーションID
    /// 
    /// 攻撃パラメータ用のIDを算出する際に使用します。実機上では直接使用しません。
    s32 variationId;
    
    /// 行動判定ID
    /// 
    /// 攻撃パラメータ用のIDを算出する際に使用します。このIDはTimeActEditorで入力される行動判定IDと一致させます。実機上では直接使用しません。
    s32 behaviorJudgeId;
    
    /// IDルール用
    /// 
    /// ID算出ルール用
    u8 ezStateBehaviorType_old;
    
    /// 参照IDタイプ
    /// 
    /// 参照IDを間違わないように指定.
    u8 refType;
    
    /// 武器消費コスト
    /// 
    /// 行動時に武器ごとに設定されたコストを消費するかを設定。
    u8 wepCost;
    
    /// パディング0.
    dummy8 pad0[1];
    
    /// 参照ID
    /// 
    /// 攻撃力、飛び道具、特殊効果パラメータのID、refTypeによって使い分けられる。
    s32 refId;
    
    /// SFX バリエーションID
    /// 
    /// ＳＦＸのバリエーションを指定（TimeActEditorのＩＤと組み合わせて、ＳＦＸを特定するのに使用する）
    s32 sfxVariationId;
    
    /// 消費スタミナ
    /// 
    /// 行動時の消費スタミナ量を設定.
    s32 stamina;
    
    /// 消費MP
    /// 
    /// 行動時の消費MP量を設定.
    s32 mp;
    
    /// カテゴリ
    /// 
    /// スキルや、魔法、アイテムなどで、パラメータが変動する効果（エンチャントウェポンなど）があるので、│定した効果が、「武器攻撃のみをパワーアップする」といった効果に対応できるように行動ごとに設定するバリスタなど、設定の必要のないものは「なし」を設定する
    u8 category;
    
    /// 消費人間性
    /// 
    /// 行動時の消費人間性量を設定
    u8 heroPoint;
    
    /// パディング1.
    dummy8 pad1[2];
    
};

struct GEM_CATEGORY_PARAM_ST {
    static constexpr const char* TYPE_NAME = "GEM_CATEGORY_PARAM_ST";
    
    /// ソート番号
    /// 
    /// 表示ソート番号
    s32 sortNo;
    
    /// カテゴリ別出現率
    f32 manifestRate;
    
    /// 方向性ID
    s32 directionalId;
    
    /// カテゴリグループID
    s32 cateGroupId;
    
    /// 排他グループID
    s32 excludeGroupId;
    
    /// マイナス効果か
    u32 isNegative : 1;
    
    /// スロットタイプＡ出現可能
    u32 enableSlotTypeA : 1;
    
    /// スロットタイプＢ出現可能
    u32 enableSlotTypeB : 1;
    
    /// スロットタイプＣ出現可能
    u32 enableSlotTypeC : 1;
    
    /// スロットタイプＤ出現可能
    u32 enableSlotTypeD : 1;
    
    /// スロットタイプＥ出現可能
    u32 enableSlotTypeE : 1;
    
    /// スロットタイプＦ出現可能
    u32 enableSlotTypeF : 1;
    
    /// ０：相性カテゴリID(-1:無視)
    s32 affinityCateId_0;
    
    /// ０：相性補正倍率
    f32 affinityModifyRate_0;
    
    /// １：相性カテゴリID(-1:無視)
    s32 affinityCateId_1;
    
    /// １：相性補正倍率
    f32 affinityModifyRate_1;
    
    /// ２：相性カテゴリID(-1:無視)
    s32 affinityCateId_2;
    
    /// ２：相性補正倍率
    f32 affinityModifyRate_2;
    
    /// ３：相性カテゴリID(-1:無視)
    s32 affinityCateId_3;
    
    /// ３：相性補正倍率
    f32 affinityModifyRate_3;
    
};

struct CS_GRAPHICS_CONFIG_PARAM_ST {
    static constexpr const char* TYPE_NAME = "CS_GRAPHICS_CONFIG_PARAM_ST";
    
    /// テクスチャフィルタ品質(デフォルトMidele)
    u8 m_textureFilterQuality;
    
    /// AA品質(デフォルトHigh)
    u8 m_aaQuality;
    
    /// SSAO品質(デフォルトHigh)
    u8 m_ssaoQuality;
    
    /// 被写界深度品質(デフォルトHigh)
    u8 m_dofQuality;
    
    /// モーションブラー品質(デフォルトHigh)
    u8 m_motionBlurQuality;
    
    /// シャドウ品質(デフォルトHigh)
    u8 m_shadowQuality;
    
    /// ライティング品質(デフォルトHigh)
    u8 m_lightingQuality;
    
    /// エフェクト品質(デフォルトHigh)
    u8 m_effectQuality;
    
    /// デカール品質(デフォルトHigh)
    u8 m_decalQuality;
    
    /// 反射品質(デフォルトHigh)
    u8 m_reflectionQuality;
    
    /// ウォーター品質(デフォルトHigh)
    u8 m_waterQuality;
    
    /// シェーダー品質(デフォルトHigh)
    u8 m_shaderQuality;
    
    /// ボリューメトリック効果品質(デフォルトHigh)
    u8 m_volumetricEffectQuality;
    
    /// dmy
    dummy8 m_dummy[3];
    
};

struct MOVE_PARAM_ST {
    static constexpr const char* TYPE_NAME = "MOVE_PARAM_ST";
    
    /// 待機
    s32 stayId;
    
    /// 歩行 前
    s32 walkF;
    
    /// 歩行 後
    s32 walkB;
    
    /// 歩行 左
    s32 walkL;
    
    /// 歩行 右
    s32 walkR;
    
    /// 走行 前
    s32 dashF;
    
    /// 走行 後
    s32 dashB;
    
    /// 走行 左
    s32 dashL;
    
    /// 走行 右
    s32 dashR;
    
    /// ダッシュ移動
    s32 superDash;
    
    /// 緊急回避 前
    s32 escapeF;
    
    /// 緊急回避 後
    s32 escapeB;
    
    /// 緊急回避 左
    s32 escapeL;
    
    /// 緊急回避 右
    s32 escapeR;
    
    /// 90度旋回 左
    s32 turnL;
    
    /// 90度旋回 右
    s32 trunR;
    
    /// 180度旋回 左
    s32 largeTurnL;
    
    /// 180度旋回 右
    s32 largeTurnR;
    
    /// ステップ移動
    /// 
    /// 180度旋回 右
    s32 stepMove;
    
    /// 飛行待機
    s32 flyStay;
    
    /// 飛行前進
    s32 flyWalkF;
    
    /// 飛行左前進。低回転
    s32 flyWalkFL;
    
    /// 飛行右前進。低回転
    s32 flyWalkFR;
    
    /// 飛行左前進2。高回転
    s32 flyWalkFL2;
    
    /// 飛行右前進2。高回転
    s32 flyWalkFR2;
    
    /// 高速飛行前進
    s32 flyDashF;
    
    /// 高速飛行左前進。低回転
    s32 flyDashFL;
    
    /// 高速飛行右前進。低回転
    s32 flyDashFR;
    
    /// 高速飛行左前進2。高回転
    s32 flyDashFL2;
    
    /// 高速飛行右前進2。高回転
    s32 flyDashFR2;
    
    /// ダッシュ緊急回避前
    s32 dashEscapeF;
    
    /// ダッシュ緊急回避後
    s32 dashEscapeB;
    
    /// ダッシュ緊急回避左
    s32 dashEscapeL;
    
    /// ダッシュ緊急回避右
    s32 dashEscapeR;
    
    /// アナログ移動パラＩＤ
    /// 
    /// 移動アニメブレンドで使用される移動アニメパラメータＩＤ
    s32 analogMoveParamId;
    
    /// アニメなし旋回角度[deg]
    /// 
    /// 旋回角度がこの値以下だと旋回アニメを再生しません（敵旋回制御のみ有効）
    u8 turnNoAnimAngle;
    
    /// 45度旋回アニメ角度[deg]
    /// 
    /// 旋回角度がこの値以下だと45度旋回アニメを再生します（ボス2足のみ有効）
    u8 turn45Angle;
    
    /// 90度旋回アニメ角度[deg]
    /// 
    /// 旋回角度がこの値以下だと90度旋回アニメを再生します（敵旋回制御のみ有効）
    u8 turn90Angle;
    
    /// 停止時アニメなし旋回角度[deg]
    /// 
    /// 旋回角度がこの値以下だと旋回アニメを再生しません[停止時]（ボス2足のみ有効）
    u8 turnWaitNoAnimAngle;
    
};

struct NETWORK_MSG_PARAM_ST {
    static constexpr const char* TYPE_NAME = "NETWORK_MSG_PARAM_ST";
    
    /// 優先度
    u16 priority;
    
    /// 強制割り込み
    u8 forcePlay;
    
    /// 予約
    dummy8 pad1[1];
    
    /// 白霊（白サイン）
    s32 normalWhite;
    
    /// 太陽霊（白サイン）
    s32 umbasaWhite;
    
    /// バーサーカー霊（白サイン）
    s32 berserkerWhite;
    
    /// 罪人英雄霊（白サイン ）
    s32 sinnerHeroWhite;
    
    /// 闇霊（赤サイン）
    s32 normalBlack;
    
    /// 太陽霊（赤サイン）
    s32 umbasaBlack;
    
    /// バーサーカー霊（赤サイン）
    s32 berserkerBlack;
    
    /// 闇霊（乱入）
    s32 forceJoinBlack;
    
    /// 太陽霊（乱入）
    s32 forceJoinUmbasaBlack;
    
    /// バーサーカー霊（乱入）
    s32 forceJoinBerserkerBlack;
    
    /// 罪人狩り霊（訪問）
    s32 sinnerHunterVisitor;
    
    /// 赤狩り霊（訪問）
    s32 redHunterVisitor;
    
    /// ボス守護霊（訪問）
    s32 guardianOfBossVisitor;
    
    /// マップ守護霊_森（訪問）
    s32 guardianOfForestMapVisitor;
    
    /// マップ守護霊_アノール（訪問）
    s32 guardianOfAnolisVisitor;
    
    /// ロザリア霊（赤サイン）
    s32 rosaliaBlack;
    
    /// ロザリア霊（乱入）
    s32 forceJoinRosaliaBlack;
    
    /// 赤狩り霊2（訪問）
    s32 redHunterVisitor2;
    
    /// NPC擬似マルチ1
    s32 npc1;
    
    /// NPC擬似マルチ2
    s32 npc2;
    
    /// NPC擬似マルチ3
    s32 npc3;
    
    /// NPC擬似マルチ4
    s32 npc4;
    
    /// 予約
    dummy8 pad2[52];
    
};

struct REINFORCE_PARAM_PROTECTOR_ST {
    static constexpr const char* TYPE_NAME = "REINFORCE_PARAM_PROTECTOR_ST";
    
    /// 物理防御力の補正値
    f32 physicsDefRate;
    
    /// 魔法防御力の補正値
    f32 magicDefRate;
    
    /// 炎防御力の補正値
    f32 fireDefRate;
    
    /// 電撃防御力の補正値
    f32 thunderDefRate;
    
    /// 斬撃防御力の補正値
    f32 slashDefRate;
    
    /// 打撃防御力の補正値
    f32 blowDefRate;
    
    /// 刺突防御力の補正値
    f32 thrustDefRate;
    
    /// 毒耐性の補正値
    f32 resistPoisonRate;
    
    /// 疫病耐性の補正値
    f32 resistDiseaseRate;
    
    /// 出血耐性の補正値
    f32 resistBloodRate;
    
    /// 呪耐性の補正値
    f32 resistCurseRate;
    
    /// 常駐特殊効果ID1の加算補正値
    u8 residentSpEffectId1;
    
    /// 常駐特殊効果ID2の加算補正値
    u8 residentSpEffectId2;
    
    /// 常駐特殊効果ID3の加算補正値
    u8 residentSpEffectId3;
    
    /// 素材ID加算値
    /// 
    /// 素材パラメータIDの加算補正値
    u8 materialSetId;
    
    /// 闇防御力の補正値
    f32 darkDefRate;
    
    /// 冷気耐性の補正値
    f32 resistFreezeRate;
    
    /// pading
    dummy8 pad[8];
    
};

struct LOD_PLATFORM_ST {
    static constexpr const char* TYPE_NAME = "LOD_PLATFORM_ST";
    
    /// LODレベル0-1境界距離_倍率
    /// 
    /// LODパラメータの「LODレベル0-1境界距離」に対して倍率を掛けた結果を反映します。
    f32 lv01_BorderDist_Scale;
    
    /// LODレベル1-2境界距離_倍率
    /// 
    /// LODパラメータの「LODレベル1-2境界距離」に対して倍率を掛けた結果を反映します。
    f32 lv12_BorderDist_Scale;
    
    /// テクスチャLOD_上書き
    /// 
    /// LODパラメータの「テクスチャLOD」の内容を上書きした結果を反映します。
    u8 textureLod_Overwrite;
    
    /// 予約
    dummy8 dummy1[3];
    
    /// 描画境界距離_倍率
    /// 
    /// LODパラメータの「描画境界距離」に対して倍率を掛けた結果を反映します。
    f32 draw_BorderDist_Scale;
    
    /// 影描画境界距離_倍率
    /// 
    /// LODパラメータの「影描画境界距離」に対して倍率を掛けた結果を反映します。
    f32 shadowDraw_BorderDist_Scale;
    
    /// モーションブラー描画境界距離_倍率
    /// 
    /// LODパラメータの「モーションブラー描画境界距離」に対して倍率を掛けた結果を反映します。
    f32 motionBlur_BorderDist_Scale;
    
    /// 予約
    dummy8 dummy2[8];
    
};

struct GAME_AREA_PARAM_ST {
    static constexpr const char* TYPE_NAME = "GAME_AREA_PARAM_ST";
    
    /// シングル時クリアボーナスソウル量
    /// 
    /// エリアボスを倒したときに取得できるソウル量(シングルプレイ時)
    u32 bonusSoul_single;
    
    /// マルチプレイ時クリアボーナスソウル量
    /// 
    /// エリアボスを倒したときに取得できるソウル量(マルチプレイ時)
    u32 bonusSoul_multi;
    
    /// 人間性ドロップポイントカウント先頭フラグID
    /// 
    /// 人間性ドロップポイントを管理する為の先頭フラグID(20Bit使用)
    s32 humanityPointCountFlagIdTop;
    
    /// 人間性ドロップ必要ポイント1
    /// 
    /// 人間性を取得する為の閾値1
    u16 humanityDropPoint1;
    
    /// 人間性ドロップ必要ポイント2
    /// 
    /// 人間性を取得する為の閾値2
    u16 humanityDropPoint2;
    
    /// 人間性ドロップ必要ポイント3
    /// 
    /// 人間性を取得する為の閾値3
    u16 humanityDropPoint3;
    
    /// 人間性ドロップ必要ポイント4
    /// 
    /// 人間性を取得する為の閾値4
    u16 humanityDropPoint4;
    
    /// 人間性ドロップ必要ポイント5
    /// 
    /// 人間性を取得する為の閾値5
    u16 humanityDropPoint5;
    
    /// 人間性ドロップ必要ポイント6
    /// 
    /// 人間性を取得する為の閾値6
    u16 humanityDropPoint6;
    
    /// 人間性ドロップ必要ポイント7
    /// 
    /// 人間性を取得する為の閾値7
    u16 humanityDropPoint7;
    
    /// 人間性ドロップ必要ポイント8
    /// 
    /// 人間性を取得する為の閾値8
    u16 humanityDropPoint8;
    
    /// 人間性ドロップ必要ポイント9
    /// 
    /// 人間性を取得する為の閾値9
    u16 humanityDropPoint9;
    
    /// 人間性ドロップ必要ポイント10
    /// 
    /// 人間性を取得する為の閾値10
    u16 humanityDropPoint10;
    
    /// ソロ侵入ポイント加算値下限
    /// 
    /// エリアボスを倒したときに加算するソロ侵入ポイントの最小値。
    u32 soloBreakInPoint_Min;
    
    /// ソロ侵入ポイント加算値上限
    /// 
    /// エリアボスを倒したときに加算するソロ侵入ポイントの最大値。
    u32 soloBreakInPoint_Max;
    
    /// クリアボーナススキル経験値
    /// 
    /// エリアボスを倒したときに取得できるスキル経験値
    u32 bonusSkillPoint;
    
    /// 予約領域
    dummy8 reserve[4];
    
};

struct MENUPROPERTY_LAYOUT {
    static constexpr const char* TYPE_NAME = "MENUPROPERTY_LAYOUT";
    
    /// レイアウトパス
    fixstr LayoutPath[16];
    
    /// プロパティID
    s32 PropertyID;
    
    /// 項目名テキストID
    /// 
    /// 有効なテキストIDが設定されている場合、プロパティ名よりもこちらを優先して表示します。
    s32 CaptionTextID;
    
    /// ヘルプテキストID
    /// 
    /// ここが有効なテキストIDの場合のみ、項目ヘルプで選択できるようになります。
    s32 HelpTextID;
    
    /// 予約
    dummy8 reserved[4];
    
};

struct MAGIC_PARAM_ST {
    static constexpr const char* TYPE_NAME = "MAGIC_PARAM_ST";
    
    /// Yes/NoダイアログメッセージID
    /// 
    /// 魔法使用時に出すYes/NoダイアログのメッセージID
    s32 yesNoDialogMessageId;
    
    /// 使用制限から外れる特殊効果ID
    /// 
    /// 指定した特殊効果IDが発動している時は使用制限を無視できる
    s32 limitCancelSpEffectId;
    
    /// SortID
    /// 
    /// ソートID(-1:集めない)
    s16 sortId;
    
    /// パッド1
    /// 
    /// PAD1
    dummy8 pad1[2];
    
    /// 消費MP[スロット1]
    /// 
    /// 消費MP
    s16 mp;
    
    /// 消費スタミナ[スロット1]
    /// 
    /// 消費スタミナ
    s16 stamina;
    
    /// アイコンID
    /// 
    /// アイコンを指定　＞メニュー用
    s16 iconId;
    
    /// 行動IDを設定する
    s16 behaviorId;
    
    /// 必要アイテムID
    /// 
    /// 購入に必要なアイテムID
    s16 mtrlItemId;
    
    /// 差し替える魔法ID
    /// 
    /// 状態変化一致時に差し替えるID(-1:無効)
    s16 replaceMagicId;
    
    /// 最大個数
    /// 
    /// １個当たりの個数(-1:無限)
    s16 maxQuantity;
    
    /// 消費人間性[スロット1]
    /// 
    /// 消費人間性
    u8 heroPoint;
    
    /// 技量オーバー開始値
    u8 overDexterity;
    
    /// バリエーションID
    /// 
    /// ＳＦＸのバリエーションを指定（TimeActEditorのＩＤと組み合わせて、ＳＦＸを特定するのに使用する）
    s8 sfxVariationId;
    
    /// 必要スロット
    /// 
    /// 装備に必要なスロット数 ＞メニュー用
    u8 slotLength;
    
    /// 装備条件【知力】
    /// 
    /// PCの知力がこれ以上無いと装備できない
    u8 requirementIntellect;
    
    /// 装備条件【理力】
    /// 
    /// PCの理力がこれ以上無いと装備できない
    u8 requirementFaith;
    
    /// アナログ最低技量
    /// 
    /// モーションキャンセルアナログ化：最低技量値
    u8 analogDexterityMin;
    
    /// アナログ最大技量
    /// 
    /// モーションキャンセルアナログ化：最高技量値
    u8 analogDexterityMax;
    
    /// カテゴリ
    /// 
    /// 並べ替えに使用　＞メニュー用
    u8 ezStateBehaviorType;
    
    /// IDカテゴリ[スロット1]
    /// 
    /// ↓のIDのカテゴリ[攻撃、飛び道具、特殊]
    u8 refCategory;
    
    /// 特殊効果カテゴリ
    /// 
    /// スキルや、魔法、アイテムなどで、パラメータが変動する効果（エンチャントウェポンなど）があるので、│定した効果が、「武器攻撃のみをパワーアップする」といった効果に対応できるように行動ごとに設定するバリスタなど、設定の必要のないものは「なし」を設定する
    u8 spEffectCategory;
    
    /// モーションカテゴリ
    /// 
    /// モーションを指定　＞EzState用
    u8 refType;
    
    /// 使用時メニュータイプ
    /// 
    /// 魔法使用時に出すメニュータイプ
    u8 opmeMenuType;
    
    /// pading
    /// 
    /// pad
    dummy8 pad2[1];
    
    /// どの常態か？
    /// 
    /// 魔法IDを差し替える必要がある状態変化を指定
    u16 hasSpEffectType;
    
    /// 差し替えカテゴリ
    /// 
    /// 魔法IDを差し替える時の追加条件
    u8 replaceCategory;
    
    /// 特殊効果カテゴリによる使用制限
    /// 
    /// 特殊効果によって使用可能かどうかを制御する為に指定
    u8 useLimitCategory;
    
    /// 誓約0
    u8 vowType0 : 1;
    
    /// 誓約1
    u8 vowType1 : 1;
    
    /// 誓約2
    u8 vowType2 : 1;
    
    /// 誓約3
    u8 vowType3 : 1;
    
    /// 誓約4
    u8 vowType4 : 1;
    
    /// 誓約5
    u8 vowType5 : 1;
    
    /// 誓約6
    u8 vowType6 : 1;
    
    /// 誓約7
    u8 vowType7 : 1;
    
    /// マルチでも使用可能か
    /// 
    /// マルチでも使用できるか。シングル、マルチ両方で使える
    u8 enable_multi : 1;
    
    /// マルチ専用か。シングルのときには使えない。マルチのときは使える。
    u8 enable_multi_only : 1;
    
    /// エンチャントか
    /// 
    /// エンチャントする魔法か
    u8 isEnchant : 1;
    
    /// 盾エンチャントか
    /// 
    /// ガード・盾エンチャントする魔法か
    u8 isShieldEnchant : 1;
    
    /// 生存使用可
    /// 
    /// 生存キャラが使用可能か
    u8 enable_live : 1;
    
    /// グレイ使用可
    /// 
    /// グレイキャラが使用可能か
    u8 enable_gray : 1;
    
    /// 白使用可
    /// 
    /// 白ゴーストキャラが使用可能か
    u8 enable_white : 1;
    
    /// 黒使用可
    /// 
    /// 黒ゴーストキャラが使用可能か
    u8 enable_black : 1;
    
    /// オフラインで使用不可か
    u8 disableOffline : 1;
    
    /// 共鳴魔法配信するか
    u8 castResonanceMagic : 1;
    
    /// 防具SAダメージ倍率が初期値でも有効か？
    /// 
    /// 防具SAが初期値でも強靭度計算が行われるかどうか。詳細は強靭度仕様書.xlsxを確認してください
    u8 isValidTough_ProtSADmg : 1;
    
    /// ワープ魔法か
    /// 
    /// ワープする魔法か。ここにチェックが入っている魔法は特殊効果「ワープ禁止」により使用が禁止されます
    u8 isWarpMagic : 1;
    
    /// pading
    dummy8 pad_1 : 4;
    
    /// 誓約8
    u8 vowType8 : 1;
    
    /// 誓約9
    u8 vowType9 : 1;
    
    /// 誓約10
    u8 vowType10 : 1;
    
    /// 誓約11
    u8 vowType11 : 1;
    
    /// 誓約12
    u8 vowType12 : 1;
    
    /// 誓約13
    u8 vowType13 : 1;
    
    /// 誓約14
    u8 vowType14 : 1;
    
    /// 誓約15
    u8 vowType15 : 1;
    
    /// 詠唱SFXID
    /// 
    /// 魔法詠唱中のSFXID
    s32 castSfxId;
    
    /// 発動SFXID
    /// 
    /// 魔法発動時のSFXID
    s32 fireSfxId;
    
    /// 効果SFXID
    /// 
    /// 魔法効果中のSFXID
    s32 effectSfxId;
    
    /// 強靭度 補正倍率
    /// 
    /// 強靭度の基本値を補正する倍率です
    f32 toughnessCorrectRate;
    
    /// 差し替えステータスタイプ
    u8 ReplacementStatusType;
    
    /// 差し替えステータス値1
    s8 ReplacementStatus1;
    
    /// 差し替えステータス値2
    s8 ReplacementStatus2;
    
    /// 差し替えステータス値3
    s8 ReplacementStatus3;
    
    /// 差し替えステータス値4
    s8 ReplacementStatus4;
    
    /// IDカテゴリ[スロット2]
    /// 
    /// 特殊効果カテゴリのカテゴリ[攻撃、飛び道具、特殊][スロット2]
    u8 refCategory_slot2;
    
    /// PAD10
    dummy8 pad10[2];
    
    /// 差し替えID1
    s32 ReplacementMagic1;
    
    /// 差し替えID2
    s32 ReplacementMagic2;
    
    /// 差し替えID3
    s32 ReplacementMagic3;
    
    /// 差し替えID4
    s32 ReplacementMagic4;
    
    /// 消費MP[スロット2]
    s16 mp_slot2;
    
    /// 消費スタミナ[スロット2]
    s16 stamina_slot2;
    
    /// 作成制限グループId
    /// 
    /// 0なら未使用。指定したグループIdの弾丸作成数を確認し、上限に達していたら魔法の使用をできなくする。
    u8 createLimitGroupId;
    
    /// IDカテゴリ[スロット3]
    /// 
    /// 特殊効果カテゴリのカテゴリ[攻撃、飛び道具、特殊][スロット3]
    u8 refCategory_slot3;
    
    /// PAD11
    dummy8 pad11[2];
    
    /// 消費MP[スロット3]
    s16 mp_slot3;
    
    /// 消費スタミナ[スロット3]
    s16 stamina_slot3;
    
    /// 呼び出しID[スロット1]
    /// 
    /// 魔法から呼び出すID
    s32 refId;
    
    /// 呼び出しID[スロット2]
    /// 
    /// 魔法から呼び出すID[スロット2]
    s32 refId_slot2;
    
    /// 呼び出しID[スロット3]
    /// 
    /// 魔法から呼び出すID[スロット3]
    s32 refId_slot3;
    
};

struct LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST {
    static constexpr const char* TYPE_NAME = "LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST";
    
    /// Lv00 描画距離スケール
    f32 Lv00;
    
    /// Lv01 描画距離スケール
    f32 Lv01;
    
    /// Lv02 描画距離スケール
    f32 Lv02;
    
    /// Lv03 描画距離スケール
    f32 Lv03;
    
    /// Lv04 描画距離スケール
    f32 Lv04;
    
    /// Lv05 描画距離スケール
    f32 Lv05;
    
    /// Lv06 描画距離スケール
    f32 Lv06;
    
    /// Lv07 描画距離スケール
    f32 Lv07;
    
    /// Lv08 描画距離スケール
    f32 Lv08;
    
    /// Lv09 描画距離スケール
    f32 Lv09;
    
    /// Lv10 描画距離スケール
    f32 Lv10;
    
    /// Lv11 描画距離スケール
    f32 Lv11;
    
    /// Lv12 描画距離スケール
    f32 Lv12;
    
    /// Lv13 描画距離スケール
    f32 Lv13;
    
    /// Lv14 描画距離スケール
    f32 Lv14;
    
    /// Lv15 描画距離スケール
    f32 Lv15;
    
    /// Lv16 描画距離スケール
    f32 Lv16;
    
    /// Lv17 描画距離スケール
    f32 Lv17;
    
    /// Lv18 描画距離スケール
    f32 Lv18;
    
    /// Lv19 描画距離スケール
    f32 Lv19;
    
    /// Lv20 描画距離スケール
    f32 Lv20;
    
    /// 予備
    dummy8 reserve[44];
    
};

struct MENU_OFFSCR_REND_PARAM_ST {
    static constexpr const char* TYPE_NAME = "MENU_OFFSCR_REND_PARAM_ST";
    
    /// カメラ注視点X
    f32 camAtPosX;
    
    /// カメラ注視点Y
    f32 camAtPosY;
    
    /// カメラ注視点Z
    f32 camAtPosZ;
    
    /// カメラ距離
    f32 camDist;
    
    /// カメラ向きX
    f32 camRotX;
    
    /// カメラ向きY
    f32 camRotY;
    
    /// カメラ画角
    f32 camFov;
    
    /// カメラ操作時最短距離
    f32 camDistMin;
    
    /// カメラ操作時最長距離
    f32 camDistMax;
    
    /// カメラ操作時最小向き
    f32 camRotXMin;
    
    /// カメラ操作時最大向き
    f32 camRotXMax;
    
    /// GparamID
    u32 GparamID;
    
    /// 予約
    dummy8 pad[16];
    
};

struct FOOT_SFX_PARAM_ST {
    static constexpr const char* TYPE_NAME = "FOOT_SFX_PARAM_ST";
    
    /// SFX識別子：00
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_00;
    
    /// SFX識別子：01
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_01;
    
    /// SFX識別子：02
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_02;
    
    /// SFX識別子：03
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_03;
    
    /// SFX識別子：04
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_04;
    
    /// SFX識別子：05
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_05;
    
    /// SFX識別子：06
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_06;
    
    /// SFX識別子：07
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_07;
    
    /// SFX識別子：08
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_08;
    
    /// SFX識別子：09
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_09;
    
    /// SFX識別子：10
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_10;
    
    /// SFX識別子：11
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_11;
    
    /// SFX識別子：12
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_12;
    
    /// SFX識別子：13
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_13;
    
    /// SFX識別子：14
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_14;
    
    /// SFX識別子：15
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_15;
    
    /// SFX識別子：16
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_16;
    
    /// SFX識別子：17
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_17;
    
    /// SFX識別子：18
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_18;
    
    /// SFX識別子：19
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_19;
    
    /// SFX識別子：20
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_20;
    
    /// SFX識別子：21
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_21;
    
    /// SFX識別子：22
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_22;
    
    /// SFX識別子：23
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_23;
    
    /// SFX識別子：24
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_24;
    
    /// SFX識別子：25
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_25;
    
    /// SFX識別子：26
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_26;
    
    /// SFX識別子：27
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_27;
    
    /// SFX識別子：28
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_28;
    
    /// SFX識別子：29
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_29;
    
    /// SFX識別子：30
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_30;
    
    /// SFX識別子：31
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_31;
    
    /// SFX識別子：32
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_32;
    
    /// SFX識別子：33
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_33;
    
    /// SFX識別子：34
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_34;
    
    /// SFX識別子：35
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_35;
    
    /// SFX識別子：36
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_36;
    
    /// SFX識別子：37
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_37;
    
    /// SFX識別子：38
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_38;
    
    /// SFX識別子：39
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_39;
    
    /// SFX識別子：40
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_40;
    
    /// SFX識別子：41
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_41;
    
    /// SFX識別子：42
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_42;
    
    /// SFX識別子：43
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_43;
    
    /// SFX識別子：44
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_44;
    
    /// SFX識別子：45
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_45;
    
    /// SFX識別子：46
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_46;
    
    /// SFX識別子：47
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_47;
    
    /// SFX識別子：48
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_48;
    
    /// SFX識別子：49
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_49;
    
    /// SFX識別子：50
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_50;
    
    /// SFX識別子：51
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_51;
    
    /// SFX識別子：52
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_52;
    
    /// SFX識別子：53
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_53;
    
    /// SFX識別子：54
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_54;
    
    /// SFX識別子：55
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_55;
    
    /// SFX識別子：56
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_56;
    
    /// SFX識別子：57
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_57;
    
    /// SFX識別子：58
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_58;
    
    /// SFX識別子：59
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_59;
    
    /// SFX識別子：60
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_60;
    
    /// SFX識別子：61
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_61;
    
    /// SFX識別子：62
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_62;
    
    /// SFX識別子：63
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_63;
    
    /// SFX識別子：64
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_64;
    
    /// SFX識別子：65
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_65;
    
    /// SFX識別子：66
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_66;
    
    /// SFX識別子：67
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_67;
    
    /// SFX識別子：68
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_68;
    
    /// SFX識別子：69
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_69;
    
    /// SFX識別子：70
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_70;
    
    /// SFX識別子：71
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_71;
    
    /// SFX識別子：72
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_72;
    
    /// SFX識別子：73
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_73;
    
    /// SFX識別子：74
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_74;
    
    /// SFX識別子：75
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_75;
    
    /// SFX識別子：76
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_76;
    
    /// SFX識別子：77
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_77;
    
    /// SFX識別子：78
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_78;
    
    /// SFX識別子：79
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_79;
    
    /// SFX識別子：80
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_80;
    
    /// SFX識別子：81
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_81;
    
    /// SFX識別子：82
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_82;
    
    /// SFX識別子：83
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_83;
    
    /// SFX識別子：84
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_84;
    
    /// SFX識別子：85
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_85;
    
    /// SFX識別子：86
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_86;
    
    /// SFX識別子：87
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_87;
    
    /// SFX識別子：88
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_88;
    
    /// SFX識別子：89
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_89;
    
    /// SFX識別子：90
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_90;
    
    /// SFX識別子：91
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_91;
    
    /// SFX識別子：92
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_92;
    
    /// SFX識別子：93
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_93;
    
    /// SFX識別子：94
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_94;
    
    /// SFX識別子：95
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_95;
    
    /// SFX識別子：96
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_96;
    
    /// SFX識別子：97
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_97;
    
    /// SFX識別子：98
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_98;
    
    /// SFX識別子：99
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_99;
    
    /// SFX識別子：100
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_100;
    
    /// SFX識別子：101
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_101;
    
    /// SFX識別子：102
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_102;
    
    /// SFX識別子：103
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_103;
    
    /// SFX識別子：104
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_104;
    
    /// SFX識別子：105
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_105;
    
    /// SFX識別子：106
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_106;
    
    /// SFX識別子：107
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_107;
    
    /// SFX識別子：108
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_108;
    
    /// SFX識別子：109
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_109;
    
    /// SFX識別子：110
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_110;
    
    /// SFX識別子：111
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_111;
    
    /// SFX識別子：112
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_112;
    
    /// SFX識別子：113
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_113;
    
    /// SFX識別子：114
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_114;
    
    /// SFX識別子：115
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_115;
    
    /// SFX識別子：116
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_116;
    
    /// SFX識別子：117
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_117;
    
    /// SFX識別子：118
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_118;
    
    /// SFX識別子：119
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_119;
    
    /// SFX識別子：120
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_120;
    
    /// SFX識別子：121
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_121;
    
    /// SFX識別子：122
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_122;
    
    /// SFX識別子：123
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_123;
    
    /// SFX識別子：124
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_124;
    
    /// SFX識別子：125
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_125;
    
    /// SFX識別子：126
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_126;
    
    /// SFX識別子：127
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_127;
    
    /// SFX識別子：128
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_128;
    
    /// SFX識別子：129
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_129;
    
    /// SFX識別子：130
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_130;
    
    /// SFX識別子：131
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_131;
    
    /// SFX識別子：132
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_132;
    
    /// SFX識別子：133
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_133;
    
    /// SFX識別子：134
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_134;
    
    /// SFX識別子：135
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_135;
    
    /// SFX識別子：136
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_136;
    
    /// SFX識別子：137
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_137;
    
    /// SFX識別子：138
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_138;
    
    /// SFX識別子：139
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_139;
    
    /// SFX識別子：140
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_140;
    
    /// SFX識別子：141
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_141;
    
    /// SFX識別子：142
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_142;
    
    /// SFX識別子：143
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_143;
    
    /// SFX識別子：144
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_144;
    
    /// SFX識別子：145
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_145;
    
    /// SFX識別子：146
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_146;
    
    /// SFX識別子：147
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_147;
    
    /// SFX識別子：148
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_148;
    
    /// SFX識別子：149
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_149;
    
    /// SFX識別子：150
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_150;
    
    /// SFX識別子：151
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_151;
    
    /// SFX識別子：152
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_152;
    
    /// SFX識別子：153
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_153;
    
    /// SFX識別子：154
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_154;
    
    /// SFX識別子：155
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_155;
    
    /// SFX識別子：156
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_156;
    
    /// SFX識別子：157
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_157;
    
    /// SFX識別子：158
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_158;
    
    /// SFX識別子：159
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_159;
    
    /// SFX識別子：160
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_160;
    
    /// SFX識別子：161
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_161;
    
    /// SFX識別子：162
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_162;
    
    /// SFX識別子：163
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_163;
    
    /// SFX識別子：164
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_164;
    
    /// SFX識別子：165
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_165;
    
    /// SFX識別子：166
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_166;
    
    /// SFX識別子：167
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_167;
    
    /// SFX識別子：168
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_168;
    
    /// SFX識別子：169
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_169;
    
    /// SFX識別子：170
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_170;
    
    /// SFX識別子：171
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_171;
    
    /// SFX識別子：172
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_172;
    
    /// SFX識別子：173
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_173;
    
    /// SFX識別子：174
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_174;
    
    /// SFX識別子：175
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_175;
    
    /// SFX識別子：176
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_176;
    
    /// SFX識別子：177
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_177;
    
    /// SFX識別子：178
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_178;
    
    /// SFX識別子：179
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_179;
    
    /// SFX識別子：180
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_180;
    
    /// SFX識別子：181
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_181;
    
    /// SFX識別子：182
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_182;
    
    /// SFX識別子：183
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_183;
    
    /// SFX識別子：184
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_184;
    
    /// SFX識別子：185
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_185;
    
    /// SFX識別子：186
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_186;
    
    /// SFX識別子：187
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_187;
    
    /// SFX識別子：188
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_188;
    
    /// SFX識別子：189
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_189;
    
    /// SFX識別子：190
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_190;
    
    /// SFX識別子：191
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_191;
    
    /// SFX識別子：192
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_192;
    
    /// SFX識別子：193
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_193;
    
    /// SFX識別子：194
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_194;
    
    /// SFX識別子：195
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_195;
    
    /// SFX識別子：196
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_196;
    
    /// SFX識別子：197
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_197;
    
    /// SFX識別子：198
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_198;
    
    /// SFX識別子：199
    /// 
    /// NPCパラメータの「フットエフェクト識別子」項目に入力された数値、特殊効果パラメータの「追加フットエフェクト識別子」項目に入力された数値、TAEアクション「フットエフェクト」に設定する、SFX識別子
    u32 sfxId_199;
    
};

struct CS_AA_QUALITY_DETAIL {
    static constexpr const char* TYPE_NAME = "CS_AA_QUALITY_DETAIL";
    
    /// AA有効
    u8 enabled;
    
    dummy8 dmy[3];
    
};

struct SHADOW_BANK {
    static constexpr const char* TYPE_NAME = "SHADOW_BANK";
    
    /// 光源X角度[deg]
    /// 
    /// マップに影を落とす光源のX角度
    s16 lightDegRotX;
    
    /// 光源Y角度[deg]
    /// 
    /// マップに影を落とす光源のY角度
    s16 lightDegRotY;
    
    /// Ratio
    /// 
    /// 0～100
    s16 densityRatio;
    
    /// Color R
    /// 
    /// 0～255
    s16 colR;
    
    /// Color G
    /// 
    /// 0～255
    s16 colG;
    
    /// Color B
    /// 
    /// 0～255
    s16 colB;
    
    /// Near
    /// 
    /// これより近いのは描画しない
    f32 fNear;
    
    /// Far Fade Start
    /// 
    /// フェードアウト開始距離
    f32 fFarFadeStart;
    
    /// Far Fade Dist
    /// 
    /// フェードアウト距離(フェードアウト終了距離はfFadeStart+fFadeDist)
    f32 fFarFadeDist;
    
    /// Cascade Dist 0->1
    /// 
    /// カスケード切り替え距離 0->1
    f32 fCascadeSwitchDist_0_1;
    
    /// Cascade Dist 1->2
    /// 
    /// カスケード切り替え距離 1->2
    f32 fCascadeSwitchDist_1_2;
    
    /// Cascade Dist 2->3
    /// 
    /// カスケード切り替え距離 2->3
    f32 fCascadeSwitchDist_2_3;
    
    /// Shadow Map Mode
    /// 
    /// シャドウマップモード(0：ﾕﾆﾌｫｰﾑ 1：ﾊﾟｰｽﾍﾟｸﾃｨﾌﾞ)
    s8 Mode;
    
    /// Shadow Model Cull Flip
    /// 
    /// 影マップ生成時フリップ(0：off 1：ON)
    s8 bShadowModelCullFlip;
    
    /// 予約
    dummy8 Reserved_0[2];
    
    /// Depth Offset
    /// 
    /// Zオフセット
    f32 fDepthOffset;
    
    /// Depth Offset(forPSM)
    /// 
    /// Zオフセット(PSM用)
    f32 fPersedDepthOffset;
    
    /// CaliburateFarRate(forPSM)
    /// 
    /// ﾌｧｰｸﾘｯﾌﾟ自動調整距離ﾚｰﾄ(PSM用)
    f32 fCalibulateFarRate;
    
    /// Grad Factor(forPSM)
    /// 
    /// ﾊﾟｰｽ調整ﾊﾟﾗﾒｰﾀ(PSM用)
    f32 fGradFactor;
    
    /// Volume Depth
    /// 
    /// ｼｬﾄﾞｳﾋﾞｭｰﾎﾞﾘｭｰﾑの引き伸ばしｻｲｽﾞ
    f32 fVolumeDepth;
    
    /// Depth Smooth Compare
    /// 
    /// 深度比較スムージング
    f32 fDepthSmoothCompare;
    
    /// Slope Scaled Depth Bias
    /// 
    /// 影マップ生成時の深度バイアス
    f32 fSlopeScaledDepthBias;
    
    /// 予約
    dummy8 Reserved_1[60];
    
};

struct AI_ANIM_TBL_PARAM {
    static constexpr const char* TYPE_NAME = "AI_ANIM_TBL_PARAM";
    
    /// 攻撃1のEzStateアニメ番号
    u16 atk0_EzStateId;
    
    /// 攻撃2のEzStateアニメ番号
    u16 atk1_EzStateId;
    
    /// 攻撃3のEzStateアニメ番号
    u16 atk2_EzStateId;
    
    /// 攻撃4のEzStateアニメ番号
    u16 atk3_EzStateId;
    
    /// 攻撃5のEzStateアニメ番号
    u16 atk4_EzStateId;
    
    /// 攻撃6のEzStateアニメ番号
    u16 atk5_EzStateId;
    
    /// 攻撃7のEzStateアニメ番号
    u16 atk6_EzStateId;
    
    /// 攻撃8のEzStateアニメ番号
    u16 atk7_EzStateId;
    
    /// 攻撃9のEzStateアニメ番号
    u16 atk8_EzStateId;
    
    /// 攻撃10のEzStateアニメ番号
    u16 atk9_EzStateId;
    
    /// 攻撃11のEzStateアニメ番号
    u16 atk10_EzStateId;
    
    /// 攻撃12のEzStateアニメ番号
    u16 atk11_EzStateId;
    
    /// 攻撃13のEzStateアニメ番号
    u16 atk12_EzStateId;
    
    /// 攻撃14のEzStateアニメ番号
    u16 atk13_EzStateId;
    
    /// 攻撃15のEzStateアニメ番号
    u16 atk14_EzStateId;
    
    /// 攻撃16のEzStateアニメ番号
    u16 atk15_EzStateId;
    
    /// 攻撃17のEzStateアニメ番号
    u16 atk16_EzStateId;
    
    /// 攻撃18のEzStateアニメ番号
    u16 atk17_EzStateId;
    
    /// 攻撃19のEzStateアニメ番号
    u16 atk18_EzStateId;
    
    /// 攻撃20のEzStateアニメ番号
    u16 atk19_EzStateId;
    
    /// 攻撃21のEzStateアニメ番号
    u16 atk20_EzStateId;
    
    /// 攻撃22のEzStateアニメ番号
    u16 atk21_EzStateId;
    
    /// 攻撃23のEzStateアニメ番号
    u16 atk22_EzStateId;
    
    /// 攻撃24のEzStateアニメ番号
    u16 atk23_EzStateId;
    
    /// 攻撃25のEzStateアニメ番号
    u16 atk24_EzStateId;
    
    /// 攻撃26のEzStateアニメ番号
    u16 atk25_EzStateId;
    
    /// 攻撃27のEzStateアニメ番号
    u16 atk26_EzStateId;
    
    /// 攻撃28のEzStateアニメ番号
    u16 atk27_EzStateId;
    
    /// 攻撃29のEzStateアニメ番号
    u16 atk28_EzStateId;
    
    /// 攻撃30のEzStateアニメ番号
    u16 atk29_EzStateId;
    
    /// 攻撃1の最小間合距離[cm]
    u16 atk0_MinDist;
    
    /// 攻撃2の最小間合距離[cm]
    u16 atk1_MinDist;
    
    /// 攻撃3の最小間合距離[cm]
    u16 atk2_MinDist;
    
    /// 攻撃4の最小間合距離[cm]
    u16 atk3_MinDist;
    
    /// 攻撃5の最小間合距離[cm]
    u16 atk4_MinDist;
    
    /// 攻撃6の最小間合距離[cm]
    u16 atk5_MinDist;
    
    /// 攻撃7の最小間合距離[cm]
    u16 atk6_MinDist;
    
    /// 攻撃8の最小間合距離[cm]
    u16 atk7_MinDist;
    
    /// 攻撃9の最小間合距離[cm]
    u16 atk8_MinDist;
    
    /// 攻撃10の最小間合距離[cm]
    u16 atk9_MinDist;
    
    /// 攻撃11の最小間合距離[cm]
    u16 atk10_MinDist;
    
    /// 攻撃12の最小間合距離[cm]
    u16 atk11_MinDist;
    
    /// 攻撃13の最小間合距離[cm]
    u16 atk12_MinDist;
    
    /// 攻撃14の最小間合距離[cm]
    u16 atk13_MinDist;
    
    /// 攻撃15の最小間合距離[cm]
    u16 atk14_MinDist;
    
    /// 攻撃16の最小間合距離[cm]
    u16 atk15_MinDist;
    
    /// 攻撃17の最小間合距離[cm]
    u16 atk16_MinDist;
    
    /// 攻撃18の最小間合距離[cm]
    u16 atk17_MinDist;
    
    /// 攻撃19の最小間合距離[cm]
    u16 atk18_MinDist;
    
    /// 攻撃20の最小間合距離[cm]
    u16 atk19_MinDist;
    
    /// 攻撃21の最小間合距離[cm]
    u16 atk20_MinDist;
    
    /// 攻撃22の最小間合距離[cm]
    u16 atk21_MinDist;
    
    /// 攻撃23の最小間合距離[cm]
    u16 atk22_MinDist;
    
    /// 攻撃24の最小間合距離[cm]
    u16 atk23_MinDist;
    
    /// 攻撃25の最小間合距離[cm]
    u16 atk24_MinDist;
    
    /// 攻撃26の最小間合距離[cm]
    u16 atk25_MinDist;
    
    /// 攻撃27の最小間合距離[cm]
    u16 atk26_MinDist;
    
    /// 攻撃28の最小間合距離[cm]
    u16 atk27_MinDist;
    
    /// 攻撃29の最小間合距離[cm]
    u16 atk28_MinDist;
    
    /// 攻撃30の最小間合距離[cm]
    u16 atk29_MinDist;
    
    /// 攻撃1の最大間合い距離[cm]
    u16 atk0_MaxDist;
    
    /// 攻撃2の最大間合距離[cm]
    u16 atk1_MaxDist;
    
    /// 攻撃3の最大間合距離[cm]
    u16 atk2_MaxDist;
    
    /// 攻撃4の最大間合距離[cm]
    u16 atk3_MaxDist;
    
    /// 攻撃5の最大間合距離[cm]
    u16 atk4_MaxDist;
    
    /// 攻撃6の最大間合距離[cm]
    u16 atk5_MaxDist;
    
    /// 攻撃7の最大間合距離[cm]
    u16 atk6_MaxDist;
    
    /// 攻撃8の最大間合距離[cm]
    u16 atk7_MaxDist;
    
    /// 攻撃9の最大間合距離[cm]
    u16 atk8_MaxDist;
    
    /// 攻撃10の最大間合距離[cm]
    u16 atk9_MaxDist;
    
    /// 攻撃11の最大間合距離[cm]
    u16 atk10_MaxDist;
    
    /// 攻撃12の最大間合距離[cm]
    u16 atk11_MaxDist;
    
    /// 攻撃13の最大間合距離[cm]
    u16 atk12_MaxDist;
    
    /// 攻撃14の最大間合距離[cm]
    u16 atk13_MaxDist;
    
    /// 攻撃15の最大間合距離[cm]
    u16 atk14_MaxDist;
    
    /// 攻撃16の最大間合距離[cm]
    u16 atk15_MaxDist;
    
    /// 攻撃17の最大間合距離[cm]
    u16 atk16_MaxDist;
    
    /// 攻撃18の最大間合距離[cm]
    u16 atk17_MaxDist;
    
    /// 攻撃19の最大間合距離[cm]
    u16 atk18_MaxDist;
    
    /// 攻撃20の最大間合距離[cm]
    u16 atk19_MaxDist;
    
    /// 攻撃21の最大間合距離[cm]
    u16 atk20_MaxDist;
    
    /// 攻撃22の最大間合距離[cm]
    u16 atk21_MaxDist;
    
    /// 攻撃23の最大間合距離[cm]
    u16 atk22_MaxDist;
    
    /// 攻撃24の最大間合距離[cm]
    u16 atk23_MaxDist;
    
    /// 攻撃25の最大間合距離[cm]
    u16 atk24_MaxDist;
    
    /// 攻撃26の最大間合距離[cm]
    u16 atk25_MaxDist;
    
    /// 攻撃27の最大間合距離[cm]
    u16 atk26_MaxDist;
    
    /// 攻撃28の最大間合距離[cm]
    u16 atk27_MaxDist;
    
    /// 攻撃29の最大間合距離[cm]
    u16 atk28_MaxDist;
    
    /// 攻撃30の最大間合距離[cm]
    u16 atk29_MaxDist;
    
    /// 攻撃1の攻撃成功距離タイプ
    u8 atk0_AtkDistType : 4;
    
    /// 攻撃2の攻撃成功距離タイプ
    u8 atk1_AtkDistType : 4;
    
    /// 攻撃3の攻撃成功距離タイプ
    u8 atk2_AtkDistType : 4;
    
    /// 攻撃4の攻撃成功距離タイプ
    u8 atk3_AtkDistType : 4;
    
    /// 攻撃5の攻撃成功距離タイプ
    u8 atk4_AtkDistType : 4;
    
    /// 攻撃6の攻撃成功距離タイプ
    u8 atk5_AtkDistType : 4;
    
    /// 攻撃7の攻撃成功距離タイプ
    u8 atk6_AtkDistType : 4;
    
    /// 攻撃8の攻撃成功距離タイプ
    u8 atk7_AtkDistType : 4;
    
    /// 攻撃9の攻撃成功距離タイプ
    u8 atk8_AtkDistType : 4;
    
    /// 攻撃10の攻撃成功距離タイプ
    u8 atk9_AtkDistType : 4;
    
    /// 攻撃11の攻撃成功距離タイプ
    u8 atk10_AtkDistType : 4;
    
    /// 攻撃12の攻撃成功距離タイプ
    u8 atk11_AtkDistType : 4;
    
    /// 攻撃13の攻撃成功距離タイプ
    u8 atk12_AtkDistType : 4;
    
    /// 攻撃14の攻撃成功距離タイプ
    u8 atk13_AtkDistType : 4;
    
    /// 攻撃15の攻撃成功距離タイプ
    u8 atk14_AtkDistType : 4;
    
    /// 攻撃16の攻撃成功距離タイプ
    u8 atk15_AtkDistType : 4;
    
    /// 攻撃17の攻撃成功距離タイプ
    u8 atk16_AtkDistType : 4;
    
    /// 攻撃18の攻撃成功距離タイプ
    u8 atk17_AtkDistType : 4;
    
    /// 攻撃19の攻撃成功距離タイプ
    u8 atk18_AtkDistType : 4;
    
    /// 攻撃20の攻撃成功距離タイプ
    u8 atk19_AtkDistType : 4;
    
    /// 攻撃21の攻撃成功距離タイプ
    u8 atk20_AtkDistType : 4;
    
    /// 攻撃22の攻撃成功距離タイプ
    u8 atk21_AtkDistType : 4;
    
    /// 攻撃23の攻撃成功距離タイプ
    u8 atk22_AtkDistType : 4;
    
    /// 攻撃24の攻撃成功距離タイプ
    u8 atk23_AtkDistType : 4;
    
    /// 攻撃25の攻撃成功距離タイプ
    u8 atk24_AtkDistType : 4;
    
    /// 攻撃26の攻撃成功距離タイプ
    u8 atk25_AtkDistType : 4;
    
    /// 攻撃27の攻撃成功距離タイプ
    u8 atk26_AtkDistType : 4;
    
    /// 攻撃28の攻撃成功距離タイプ
    u8 atk27_AtkDistType : 4;
    
    /// 攻撃29の攻撃成功距離タイプ
    u8 atk28_AtkDistType : 4;
    
    /// 攻撃30の攻撃成功距離タイプ
    u8 atk29_AtkDistType : 4;
    
    /// pad
    dummy8 pad0[13];
    
};

struct DEFAULT_KEY_ASSIGN_PARAM_ST {
    static constexpr const char* TYPE_NAME = "DEFAULT_KEY_ASSIGN_PARAM_ST";
    
    /// ゲーム機能
    s32 gameAction;
    
    /// パッド（物理キー）
    s32 padKeyId;
    
    /// キーボード（物理キー）
    s32 keyboardKeyId;
    
    /// キーボード修飾キー
    s32 keyboardModifyKey;
    
    /// マウス（物理キー）
    s32 mouseKeyId;
    
    /// マウス修飾キー
    s32 mouseModifyKey;
    
};

struct FACE_GEN_PARAM_ST {
    static constexpr const char* TYPE_NAME = "FACE_GEN_PARAM_ST";
    
    /// 顔作成ジオメトリデータ00
    u8 faceGeoData00;
    
    /// 顔作成ジオメトリデータ01
    u8 faceGeoData01;
    
    /// 顔作成ジオメトリデータ02
    u8 faceGeoData02;
    
    /// 顔作成ジオメトリデータ03
    u8 faceGeoData03;
    
    /// 顔作成ジオメトリデータ04
    u8 faceGeoData04;
    
    /// 顔作成ジオメトリデータ05
    u8 faceGeoData05;
    
    /// 顔作成ジオメトリデータ06
    u8 faceGeoData06;
    
    /// 顔作成ジオメトリデータ07
    u8 faceGeoData07;
    
    /// 顔作成ジオメトリデータ08
    u8 faceGeoData08;
    
    /// 顔作成ジオメトリデータ09
    u8 faceGeoData09;
    
    /// 顔作成ジオメトリデータ10
    u8 faceGeoData10;
    
    /// 顔作成ジオメトリデータ11
    u8 faceGeoData11;
    
    /// 顔作成ジオメトリデータ12
    u8 faceGeoData12;
    
    /// 顔作成ジオメトリデータ13
    u8 faceGeoData13;
    
    /// 顔作成ジオメトリデータ14
    u8 faceGeoData14;
    
    /// 顔作成ジオメトリデータ15
    u8 faceGeoData15;
    
    /// 顔作成ジオメトリデータ16
    u8 faceGeoData16;
    
    /// 顔作成ジオメトリデータ17
    u8 faceGeoData17;
    
    /// 顔作成ジオメトリデータ18
    u8 faceGeoData18;
    
    /// 顔作成ジオメトリデータ19
    u8 faceGeoData19;
    
    /// 顔作成ジオメトリデータ20
    u8 faceGeoData20;
    
    /// 顔作成ジオメトリデータ21
    u8 faceGeoData21;
    
    /// 顔作成ジオメトリデータ22
    u8 faceGeoData22;
    
    /// 顔作成ジオメトリデータ23
    u8 faceGeoData23;
    
    /// 顔作成ジオメトリデータ24
    u8 faceGeoData24;
    
    /// 顔作成ジオメトリデータ25
    u8 faceGeoData25;
    
    /// 顔作成ジオメトリデータ26
    u8 faceGeoData26;
    
    /// 顔作成ジオメトリデータ27
    u8 faceGeoData27;
    
    /// 顔作成ジオメトリデータ28
    u8 faceGeoData28;
    
    /// 顔作成ジオメトリデータ29
    u8 faceGeoData29;
    
    /// 顔作成ジオメトリデータ30
    u8 faceGeoData30;
    
    /// 顔作成ジオメトリデータ31
    u8 faceGeoData31;
    
    /// 顔作成ジオメトリデータ32
    u8 faceGeoData32;
    
    /// 顔作成ジオメトリデータ33
    u8 faceGeoData33;
    
    /// 顔作成ジオメトリデータ34
    u8 faceGeoData34;
    
    /// 顔作成ジオメトリデータ35
    u8 faceGeoData35;
    
    /// 顔作成ジオメトリデータ36
    u8 faceGeoData36;
    
    /// 顔作成ジオメトリデータ37
    u8 faceGeoData37;
    
    /// 顔作成ジオメトリデータ38
    u8 faceGeoData38;
    
    /// 顔作成ジオメトリデータ39
    u8 faceGeoData39;
    
    /// 顔作成ジオメトリデータ40
    u8 faceGeoData40;
    
    /// 顔作成ジオメトリデータ41
    u8 faceGeoData41;
    
    /// 顔作成ジオメトリデータ42
    u8 faceGeoData42;
    
    /// 顔作成ジオメトリデータ43
    u8 faceGeoData43;
    
    /// 顔作成ジオメトリデータ44
    u8 faceGeoData44;
    
    /// 顔作成ジオメトリデータ45
    u8 faceGeoData45;
    
    /// 顔作成ジオメトリデータ46
    u8 faceGeoData46;
    
    /// 顔作成ジオメトリデータ47
    u8 faceGeoData47;
    
    /// 顔作成ジオメトリデータ48
    u8 faceGeoData48;
    
    /// 顔作成ジオメトリデータ49
    u8 faceGeoData49;
    
    /// 顔作成テクスチャデータ00
    u8 faceTexData00;
    
    /// 顔作成テクスチャデータ01
    u8 faceTexData01;
    
    /// 顔作成テクスチャデータ02
    u8 faceTexData02;
    
    /// 顔作成テクスチャデータ03
    u8 faceTexData03;
    
    /// 顔作成テクスチャデータ04
    u8 faceTexData04;
    
    /// 顔作成テクスチャデータ05
    u8 faceTexData05;
    
    /// 顔作成テクスチャデータ06
    u8 faceTexData06;
    
    /// 顔作成テクスチャデータ07
    u8 faceTexData07;
    
    /// 顔作成テクスチャデータ08
    u8 faceTexData08;
    
    /// 顔作成テクスチャデータ09
    u8 faceTexData09;
    
    /// 顔作成テクスチャデータ10
    u8 faceTexData10;
    
    /// 顔作成テクスチャデータ11
    u8 faceTexData11;
    
    /// 顔作成テクスチャデータ12
    u8 faceTexData12;
    
    /// 顔作成テクスチャデータ13
    u8 faceTexData13;
    
    /// 顔作成テクスチャデータ14
    u8 faceTexData14;
    
    /// 顔作成テクスチャデータ15
    u8 faceTexData15;
    
    /// 顔作成テクスチャデータ16
    u8 faceTexData16;
    
    /// 顔作成テクスチャデータ17
    u8 faceTexData17;
    
    /// 顔作成テクスチャデータ18
    u8 faceTexData18;
    
    /// 顔作成テクスチャデータ19
    u8 faceTexData19;
    
    /// 顔作成テクスチャデータ20
    u8 faceTexData20;
    
    /// 顔作成テクスチャデータ21
    u8 faceTexData21;
    
    /// 顔作成テクスチャデータ22
    u8 faceTexData22;
    
    /// 顔作成テクスチャデータ23
    u8 faceTexData23;
    
    /// 顔作成テクスチャデータ24
    u8 faceTexData24;
    
    /// 顔作成テクスチャデータ25
    u8 faceTexData25;
    
    /// 顔作成テクスチャデータ26
    u8 faceTexData26;
    
    /// 顔作成テクスチャデータ27
    u8 faceTexData27;
    
    /// 顔作成テクスチャデータ28
    u8 faceTexData28;
    
    /// 顔作成テクスチャデータ29
    u8 faceTexData29;
    
    /// 顔作成テクスチャデータ30
    u8 faceTexData30;
    
    /// 顔作成テクスチャデータ31
    u8 faceTexData31;
    
    /// 顔作成テクスチャデータ32
    u8 faceTexData32;
    
    /// 顔作成テクスチャデータ33
    u8 faceTexData33;
    
    /// 顔作成テクスチャデータ34
    u8 faceTexData34;
    
    /// 顔作成テクスチャデータ35
    u8 faceTexData35;
    
    /// 顔作成テクスチャデータ36
    u8 faceTexData36;
    
    /// 顔作成テクスチャデータ37
    u8 faceTexData37;
    
    /// 顔作成テクスチャデータ38
    u8 faceTexData38;
    
    /// 顔作成テクスチャデータ39
    u8 faceTexData39;
    
    /// 顔作成テクスチャデータ40
    u8 faceTexData40;
    
    /// 顔作成テクスチャデータ41
    u8 faceTexData41;
    
    /// 顔作成テクスチャデータ42
    u8 faceTexData42;
    
    /// 顔作成テクスチャデータ43
    u8 faceTexData43;
    
    /// 顔作成テクスチャデータ44
    u8 faceTexData44;
    
    /// 顔作成テクスチャデータ45
    u8 faceTexData45;
    
    /// 顔作成テクスチャデータ46
    u8 faceTexData46;
    
    /// 顔作成テクスチャデータ47
    u8 faceTexData47;
    
    /// 顔作成テクスチャデータ48
    u8 faceTexData48;
    
    /// 顔作成テクスチャデータ49
    u8 faceTexData49;
    
    /// 顔パーツID
    u8 facePartsId;
    
    /// 肌の色(Ｒ)
    u8 skinColor_R;
    
    /// 肌の色(Ｇ)
    u8 skinColor_G;
    
    /// 肌の色(Ｂ)
    u8 skinColor_B;
    
    /// 髪パーツID
    u8 hairPartsId;
    
    /// 髪の色(Ｒ)
    u8 hairColor_R;
    
    /// 髪の色(Ｇ)
    u8 hairColor_G;
    
    /// 髪の色(Ｂ)
    u8 hairColor_B;
    
    /// 左目パーツID
    u8 eyeLPartsId;
    
    /// 左目の色(Ｒ)
    u8 eyeLColor_R;
    
    /// 左目の色(Ｇ)
    u8 eyeLColor_G;
    
    /// 左目の色(Ｂ)
    u8 eyeLColor_B;
    
    /// 右目パーツID
    u8 eyeRPartsId;
    
    /// 右目の色(Ｒ)
    u8 eyeRColor_R;
    
    /// 右目の色(Ｇ)
    u8 eyeRColor_G;
    
    /// 右目の色(Ｂ)
    u8 eyeRColor_B;
    
    /// 眉パーツID
    u8 eyebrowPartsId;
    
    /// 眉の色(Ｒ)
    u8 eyebrowColor_R;
    
    /// 眉の色(Ｇ)
    u8 eyebrowColor_G;
    
    /// 眉の色(Ｂ)
    u8 eyebrowColor_B;
    
    /// 髭パーツID
    u8 beardPartsId;
    
    /// 髭の色(Ｒ)
    u8 beardColor_R;
    
    /// 髭の色(Ｇ)
    u8 beardColor_G;
    
    /// 髭の色(Ｂ)
    u8 beardColor_B;
    
    /// 装飾パーツID
    u8 accessoriesPartsId;
    
    /// 装飾の色(Ｒ)
    u8 accessoriesColor_R;
    
    /// 装飾の色(Ｇ)
    u8 accessoriesColor_G;
    
    /// 装飾の色(Ｂ)
    u8 accessoriesColor_B;
    
    /// デカールパーツID
    u8 decalPartsId;
    
    /// デカールの色(Ｒ)
    u8 decalColor_R;
    
    /// デカールの色(Ｇ)
    u8 decalColor_G;
    
    /// デカールの色(Ｂ)
    u8 decalColor_B;
    
    /// デカール位置(x)
    u8 decalPosX;
    
    /// デカール位置(y)
    u8 decalPosY;
    
    /// デカール角度
    u8 decalAngle;
    
    /// デカールスケール
    u8 decalScale;
    
};

struct GEM_GEN_PARAM_ST {
    static constexpr const char* TYPE_NAME = "GEM_GEN_PARAM_ST";
    
    /// ユニーク魔石か
    u32 isUnique : 1;
    
    /// アイコンID
    s32 iconId;
    
    /// 名称ID
    u32 nameId;
    
    /// スロット出現率補正無効化
    /// 
    /// スロットタイプ出現率補正を無効化するか(1:する, 0:しない)
    u32 disableSlotRateModify : 1;
    
    /// スロットタイプＡ出現率(-1:除外)
    f32 slotTypeRateA;
    
    /// スロットタイプＢ出現率
    f32 slotTypeRateB;
    
    /// スロットタイプＣ出現率
    f32 slotTypeRateC;
    
    /// スロットタイプＤ出現率
    f32 slotTypeRateD;
    
    /// スロットタイプＥ出現率
    f32 slotTypeRateE;
    
    /// スロットタイプＦ出現率
    f32 slotTypeRateF;
    
    /// ランク平均値補正(-100:最低, 100:最高)
    f32 rankAveModifyRate;
    
    /// ０：魔石効果生成パラムタイプ
    u32 gemeffectGenParamType_0;
    
    /// ０：魔石効果生成パラム
    s32 gemeffectGenParam_0;
    
    /// ０：出現率
    f32 manifestRate_0;
    
    /// ０：マイナス効果化率
    f32 negativizeRate_0;
    
    /// １：魔石効果生成パラムタイプ
    u32 gemeffectGenParamType_1;
    
    /// １：魔石効果生成パラム
    s32 gemeffectGenParam_1;
    
    /// １：出現率
    f32 manifestRate_1;
    
    /// １：マイナス効果化率
    f32 negativizeRate_1;
    
    /// ２：魔石効果生成パラムタイプ
    u32 gemeffectGenParamType_2;
    
    /// ２：魔石効果生成パラム
    s32 gemeffectGenParam_2;
    
    /// ２：出現率
    f32 manifestRate_2;
    
    /// ２：マイナス効果化率
    f32 negativizeRate_2;
    
    /// ３：魔石効果生成パラムタイプ
    u32 gemeffectGenParamType_3;
    
    /// ３：魔石効果生成パラム
    s32 gemeffectGenParam_3;
    
    /// ３：出現率
    f32 manifestRate_3;
    
    /// ３：マイナス効果化率
    f32 negativizeRate_3;
    
    /// ４：魔石効果生成パラムタイプ
    u32 gemeffectGenParamType_4;
    
    /// ４：魔石効果生成パラム
    s32 gemeffectGenParam_4;
    
    /// ４：出現率
    f32 manifestRate_4;
    
    /// ４：マイナス効果化率
    f32 negativizeRate_4;
    
    /// ５：魔石効果生成パラムタイプ
    u32 gemeffectGenParamType_5;
    
    /// ５：魔石効果生成パラム
    s32 gemeffectGenParam_5;
    
    /// ５：出現率
    f32 manifestRate_5;
    
    /// ５：マイナス効果化率
    f32 negativizeRate_5;
    
};

struct CS_MOTION_BLUR_QUALITY_DETAIL {
    static constexpr const char* TYPE_NAME = "CS_MOTION_BLUR_QUALITY_DETAIL";
    
    /// モーションブラー有効
    u8 enabled;
    
    /// OMB(オブジェクトモーションブラー)有効
    u8 ombEnabled;
    
    /// 内部で使用するベロシティバッファの解像度を下げる。高精度ベロシティバッファを使っていない場合は効果ない
    u8 forceScaleVelocityBuffer;
    
    /// 通常、Reconstructionフィルタで処理されるが、軽い処理にダウングレードする
    u8 cheapFilterMode;
    
    /// サンプルカウントにオフセットを与える※2の倍数に設定して下さい
    s32 sampleCountBias;
    
    /// 再帰ブラー回数にオフセットを与える
    s32 recurrenceCountBias;
    
    /// ブラー最大長さパラメータに対するスケール値
    f32 blurMaxLengthScale;
    
};

struct FACE_PARAM_ST {
    static constexpr const char* TYPE_NAME = "FACE_PARAM_ST";
    
    /// 顔パーツID
    u8 facePartsId;
    
    /// 肌の色(Ｒ)
    u8 skinColor_R;
    
    /// 肌の色(Ｇ)
    u8 skinColor_G;
    
    /// 肌の色(Ｂ)
    u8 skinColor_B;
    
    /// 髪パーツID
    u8 hairPartsId;
    
    /// 髪の色(Ｒ)
    u8 hairColor_R;
    
    /// 髪の色(Ｇ)
    u8 hairColor_G;
    
    /// 髪の色(Ｂ)
    u8 hairColor_B;
    
    /// 左目パーツID
    u8 eyeLPartsId;
    
    /// 左目の色(Ｒ)
    u8 eyeLColor_R;
    
    /// 左目の色(Ｇ)
    u8 eyeLColor_G;
    
    /// 左目の色(Ｂ)
    u8 eyeLColor_B;
    
    /// 右目パーツID
    u8 eyeRPartsId;
    
    /// 右目の色(Ｒ)
    u8 eyeRColor_R;
    
    /// 右目の色(Ｇ)
    u8 eyeRColor_G;
    
    /// 右目の色(Ｂ)
    u8 eyeRColor_B;
    
    /// 眉パーツID
    u8 eyebrowPartsId;
    
    /// 眉の色(Ｒ)
    u8 eyebrowColor_R;
    
    /// 眉の色(Ｇ)
    u8 eyebrowColor_G;
    
    /// 眉の色(Ｂ)
    u8 eyebrowColor_B;
    
    /// まつげパーツID
    u8 eyelashPartsId;
    
    /// まつげの色(Ｒ)
    u8 eyelashColor_R;
    
    /// まつげの色(Ｇ)
    u8 eyelashColor_G;
    
    /// まつげの色(Ｂ)
    u8 eyelashColor_B;
    
    /// 髭パーツID
    u8 beardPartsId;
    
    /// 髭の色(Ｒ)
    u8 beardColor_R;
    
    /// 髭の色(Ｇ)
    u8 beardColor_G;
    
    /// 髭の色(Ｂ)
    u8 beardColor_B;
    
    /// 装飾パーツID
    u8 accessoriesPartsId;
    
    /// 装飾の色(Ｒ)
    u8 accessoriesColor_R;
    
    /// 装飾の色(Ｇ)
    u8 accessoriesColor_G;
    
    /// 装飾の色(Ｂ)
    u8 accessoriesColor_B;
    
    /// デカールパーツID
    u8 decalPartsId;
    
    /// デカールの色(Ｒ)
    u8 decalColor_R;
    
    /// デカールの色(Ｇ)
    u8 decalColor_G;
    
    /// デカールの色(Ｂ)
    u8 decalColor_B;
    
    /// デカール位置(x)
    u8 decalPosX;
    
    /// デカール位置(y)
    u8 decalPosY;
    
    /// デカール角度
    u8 decalAngle;
    
    /// デカールスケール
    u8 decalScale;
    
    /// キャラ体型頭部スケール
    u8 chrBodyScaleHead;
    
    /// キャラ体型胸部スケール
    u8 chrBodyScaleBreast;
    
    /// キャラ体型腹部スケール
    u8 chrBodyScaleAbdomen;
    
    /// キャラ体型右腕部スケール
    u8 chrBodyScaleRArm;
    
    /// キャラ体型右脚部スケール
    u8 chrBodyScaleRLeg;
    
    /// キャラ体型左腕部スケール
    u8 chrBodyScaleLArm;
    
    /// キャラ体型左脚部スケール
    u8 chrBodyScaleLLeg;
    
    /// 年齢
    u8 age;
    
    /// 性別
    u8 gender;
    
    /// 誇張（モデル）
    u8 caricatureGeometry;
    
    /// 誇張（テクスチャ）
    u8 caricatureTexture;
    
    /// 顔作成ジオメトリデータ00
    u8 faceGeoData00;
    
    /// 顔作成ジオメトリデータ01
    u8 faceGeoData01;
    
    /// 顔作成ジオメトリデータ02
    u8 faceGeoData02;
    
    /// 顔作成ジオメトリデータ03
    u8 faceGeoData03;
    
    /// 顔作成ジオメトリデータ04
    u8 faceGeoData04;
    
    /// 顔作成ジオメトリデータ05
    u8 faceGeoData05;
    
    /// 顔作成ジオメトリデータ06
    u8 faceGeoData06;
    
    /// 顔作成ジオメトリデータ07
    u8 faceGeoData07;
    
    /// 顔作成ジオメトリデータ08
    u8 faceGeoData08;
    
    /// 顔作成ジオメトリデータ09
    u8 faceGeoData09;
    
    /// 顔作成ジオメトリデータ10
    u8 faceGeoData10;
    
    /// 顔作成ジオメトリデータ11
    u8 faceGeoData11;
    
    /// 顔作成ジオメトリデータ12
    u8 faceGeoData12;
    
    /// 顔作成ジオメトリデータ13
    u8 faceGeoData13;
    
    /// 顔作成ジオメトリデータ14
    u8 faceGeoData14;
    
    /// 顔作成ジオメトリデータ15
    u8 faceGeoData15;
    
    /// 顔作成ジオメトリデータ16
    u8 faceGeoData16;
    
    /// 顔作成ジオメトリデータ17
    u8 faceGeoData17;
    
    /// 顔作成ジオメトリデータ18
    u8 faceGeoData18;
    
    /// 顔作成ジオメトリデータ19
    u8 faceGeoData19;
    
    /// 顔作成ジオメトリデータ20
    u8 faceGeoData20;
    
    /// 顔作成ジオメトリデータ21
    u8 faceGeoData21;
    
    /// 顔作成ジオメトリデータ22
    u8 faceGeoData22;
    
    /// 顔作成ジオメトリデータ23
    u8 faceGeoData23;
    
    /// 顔作成ジオメトリデータ24
    u8 faceGeoData24;
    
    /// 顔作成ジオメトリデータ25
    u8 faceGeoData25;
    
    /// 顔作成ジオメトリデータ26
    u8 faceGeoData26;
    
    /// 顔作成ジオメトリデータ27
    u8 faceGeoData27;
    
    /// 顔作成ジオメトリデータ28
    u8 faceGeoData28;
    
    /// 顔作成ジオメトリデータ29
    u8 faceGeoData29;
    
    /// 顔作成ジオメトリデータ30
    u8 faceGeoData30;
    
    /// 顔作成ジオメトリデータ31
    u8 faceGeoData31;
    
    /// 顔作成ジオメトリデータ32
    u8 faceGeoData32;
    
    /// 顔作成ジオメトリデータ33
    u8 faceGeoData33;
    
    /// 顔作成ジオメトリデータ34
    u8 faceGeoData34;
    
    /// 顔作成ジオメトリデータ35
    u8 faceGeoData35;
    
    /// 顔作成ジオメトリデータ36
    u8 faceGeoData36;
    
    /// 顔作成ジオメトリデータ37
    u8 faceGeoData37;
    
    /// 顔作成ジオメトリデータ38
    u8 faceGeoData38;
    
    /// 顔作成ジオメトリデータ39
    u8 faceGeoData39;
    
    /// 顔作成ジオメトリデータ40
    u8 faceGeoData40;
    
    /// 顔作成ジオメトリデータ41
    u8 faceGeoData41;
    
    /// 顔作成ジオメトリデータ42
    u8 faceGeoData42;
    
    /// 顔作成ジオメトリデータ43
    u8 faceGeoData43;
    
    /// 顔作成ジオメトリデータ44
    u8 faceGeoData44;
    
    /// 顔作成ジオメトリデータ45
    u8 faceGeoData45;
    
    /// 顔作成ジオメトリデータ46
    u8 faceGeoData46;
    
    /// 顔作成ジオメトリデータ47
    u8 faceGeoData47;
    
    /// 顔作成ジオメトリデータ48
    u8 faceGeoData48;
    
    /// 顔作成ジオメトリデータ49
    u8 faceGeoData49;
    
    /// 顔作成ジオメトリデータ50
    u8 faceGeoData50;
    
    /// 顔作成ジオメトリデータ51
    u8 faceGeoData51;
    
    /// 顔作成ジオメトリデータ52
    u8 faceGeoData52;
    
    /// 顔作成ジオメトリデータ53
    u8 faceGeoData53;
    
    /// 顔作成ジオメトリデータ54
    u8 faceGeoData54;
    
    /// 顔作成ジオメトリデータ55
    u8 faceGeoData55;
    
    /// 顔作成ジオメトリデータ56
    u8 faceGeoData56;
    
    /// 顔作成ジオメトリデータ57
    u8 faceGeoData57;
    
    /// 顔作成ジオメトリデータ58
    u8 faceGeoData58;
    
    /// 顔作成ジオメトリデータ59
    u8 faceGeoData59;
    
    /// 顔作成ジオメトリデータ60
    u8 faceGeoData60;
    
    /// 顔作成テクスチャデータ00
    u8 faceTexData00;
    
    /// 顔作成テクスチャデータ01
    u8 faceTexData01;
    
    /// 顔作成テクスチャデータ02
    u8 faceTexData02;
    
    /// 顔作成テクスチャデータ03
    u8 faceTexData03;
    
    /// 顔作成テクスチャデータ04
    u8 faceTexData04;
    
    /// 顔作成テクスチャデータ05
    u8 faceTexData05;
    
    /// 顔作成テクスチャデータ06
    u8 faceTexData06;
    
    /// 顔作成テクスチャデータ07
    u8 faceTexData07;
    
    /// 顔作成テクスチャデータ08
    u8 faceTexData08;
    
    /// 顔作成テクスチャデータ09
    u8 faceTexData09;
    
    /// 顔作成テクスチャデータ10
    u8 faceTexData10;
    
    /// 顔作成テクスチャデータ11
    u8 faceTexData11;
    
    /// 顔作成テクスチャデータ12
    u8 faceTexData12;
    
    /// 顔作成テクスチャデータ13
    u8 faceTexData13;
    
    /// 顔作成テクスチャデータ14
    u8 faceTexData14;
    
    /// 顔作成テクスチャデータ15
    u8 faceTexData15;
    
    /// 顔作成テクスチャデータ16
    u8 faceTexData16;
    
    /// 顔作成テクスチャデータ17
    u8 faceTexData17;
    
    /// 顔作成テクスチャデータ18
    u8 faceTexData18;
    
    /// 顔作成テクスチャデータ19
    u8 faceTexData19;
    
    /// 顔作成テクスチャデータ20
    u8 faceTexData20;
    
    /// 顔作成テクスチャデータ21
    u8 faceTexData21;
    
    /// 顔作成テクスチャデータ22
    u8 faceTexData22;
    
    /// 顔作成テクスチャデータ23
    u8 faceTexData23;
    
    /// 顔作成テクスチャデータ24
    u8 faceTexData24;
    
    /// 顔作成テクスチャデータ25
    u8 faceTexData25;
    
    /// 顔作成テクスチャデータ26
    u8 faceTexData26;
    
    /// 顔作成テクスチャデータ27
    u8 faceTexData27;
    
    /// 顔作成テクスチャデータ28
    u8 faceTexData28;
    
    /// 顔作成テクスチャデータ29
    u8 faceTexData29;
    
    /// 顔作成テクスチャデータ30
    u8 faceTexData30;
    
    /// 顔作成テクスチャデータ31
    u8 faceTexData31;
    
    /// 顔作成テクスチャデータ32
    u8 faceTexData32;
    
    /// 顔作成テクスチャデータ33
    u8 faceTexData33;
    
    /// 顔作成テクスチャデータ34
    u8 faceTexData34;
    
    /// 顔作成テクスチャデータ35
    u8 faceTexData35;
    
    /// 顔作成ジオメトリ非対称データ00
    u8 faceGeoAsymData00;
    
    /// 顔作成ジオメトリ非対称データ01
    u8 faceGeoAsymData01;
    
    /// 顔作成ジオメトリ非対称データ02
    u8 faceGeoAsymData02;
    
    /// 顔作成ジオメトリ非対称データ03
    u8 faceGeoAsymData03;
    
    /// 顔作成ジオメトリ非対称データ04
    u8 faceGeoAsymData04;
    
    /// 顔作成ジオメトリ非対称データ05
    u8 faceGeoAsymData05;
    
    /// 顔作成ジオメトリ非対称データ06
    u8 faceGeoAsymData06;
    
    /// 顔作成ジオメトリ非対称データ07
    u8 faceGeoAsymData07;
    
    /// 顔作成ジオメトリ非対称データ08
    u8 faceGeoAsymData08;
    
    /// 顔作成ジオメトリ非対称データ09
    u8 faceGeoAsymData09;
    
    /// 顔作成ジオメトリ非対称データ10
    u8 faceGeoAsymData10;
    
    /// 顔作成ジオメトリ非対称データ11
    u8 faceGeoAsymData11;
    
    /// 顔作成ジオメトリ非対称データ12
    u8 faceGeoAsymData12;
    
    /// 顔作成ジオメトリ非対称データ13
    u8 faceGeoAsymData13;
    
    /// 顔作成ジオメトリ非対称データ14
    u8 faceGeoAsymData14;
    
    /// 顔作成ジオメトリ非対称データ15
    u8 faceGeoAsymData15;
    
    /// 顔作成ジオメトリ非対称データ16
    u8 faceGeoAsymData16;
    
    /// 顔作成ジオメトリ非対称データ17
    u8 faceGeoAsymData17;
    
    /// 顔作成ジオメトリ非対称データ18
    u8 faceGeoAsymData18;
    
    /// 顔作成ジオメトリ非対称データ19
    u8 faceGeoAsymData19;
    
    /// 顔作成ジオメトリ非対称データ20
    u8 faceGeoAsymData20;
    
    /// 顔作成ジオメトリ非対称データ21
    u8 faceGeoAsymData21;
    
    /// 顔作成ジオメトリ非対称データ22
    u8 faceGeoAsymData22;
    
    /// 顔作成ジオメトリ非対称データ23
    u8 faceGeoAsymData23;
    
    /// 顔作成ジオメトリ非対称データ24
    u8 faceGeoAsymData24;
    
    /// 顔作成ジオメトリ非対称データ25
    u8 faceGeoAsymData25;
    
    /// 予約領域
    dummy8 reserve[18];
    
};

struct RESOURCEITEM_PARAM_ST {
    static constexpr const char* TYPE_NAME = "RESOURCEITEM_PARAM_ST";
    
    /// SFXID(マップ配置)
    s32 SfxIdOnMap;
    
    /// SFXID(キャラに飛んでくる)
    s32 SfxIdFlying;
    
    /// SFXID(キャラに着弾)
    s32 SfxIdOnHit;
    
    /// アイテムID
    u32 ItemID;
    
    /// アクション解禁状況判定
    /// 
    /// 指定したアクションが解禁されている（1つでも解禁できるアイテムを持っている）なら取得できる
    s8 ActionUnlockType;
    
    /// パディング
    dummy8 pad1[3];
    
    /// 取得時初速度_最小[m/s]
    /// 
    /// 飛んでくる初速の最小速度を設定する。最小初速と最大初速の間からランダムで初速が決まる
    f32 GetVelocityMin;
    
    /// 取得時初速度_最大[m/s]
    /// 
    /// 飛んでくる初速の最大速度を設定する。最小初速と最大初速の間からランダムで初速が決まる
    f32 GetVelocityMax;
    
    /// 取得時加速度[m/s]
    /// 
    /// 飛んでくる時の加速度を設定する
    f32 GetVelocity;
    
    /// 取得時最高速度[m/s]
    /// 
    /// 飛んでくる時の最高速度を設定する。加速してもこの速度以上にはならない。
    f32 GetMaxSpeed;
    
    /// 取得タイムアウト時間[s]
    /// 
    /// 飛んでくるアイテムがプレイヤーにたどり着かなくても、この時間を経過すると強制的に取得する
    f32 GetTimeoutTime;
    
    /// パディング
    dummy8 pad[12];
    
};

struct FAR_MODEL_PARAM_ST {
    static constexpr const char* TYPE_NAME = "FAR_MODEL_PARAM_ST";
    
    /// 遠景パーツ名。空欄だと上の行と同じ
    fixstrW farPartsName[13];
    
    /// 通常パーツ所属マップ_Area。空欄だと上の行と同じ。一番上の空欄は遠景パーツと同じマップとみなされます
    s8 nearParsMapID_Area;
    
    /// 通常パーツ所属マップ_Block。空欄だと上の行と同じ。一番上の空欄は遠景パーツと同じマップとみなされます
    s8 nearParsMapID_Block;
    
    /// 通常パーツ所属マップ_Map。空欄だと上の行と同じ。一番上の空欄は遠景パーツと同じマップとみなされます
    s8 nearParsMapID_Map;
    
    /// 通常パーツ所属マップ_Alt。空欄だと上の行と同じ。一番上の空欄は遠景パーツと同じマップとみなされます
    s8 nearParsMapID_Alt;
    
    /// 通常パーツ追加削除タイプ
    /// 
    /// パーツ追加なのかグループ追加なのか除外なのか
    u8 nearPartsItemType;
    
    /// ダミー
    dummy8 dmy0[1];
    
    /// 通常パーツ名・もしくはグループイベント名・もしくは除外モデル名
    fixstrW nearPartsName[32];
    
};

struct RESOURCEITEMLOT_PARAM_ST {
    static constexpr const char* TYPE_NAME = "RESOURCEITEMLOT_PARAM_ST";
    
    /// 取得済みフラグ
    /// 
    /// 取得済みかどうかを管理するフラグのID。-1は無効。
    s32 alreadyGotFlagId;
    
    /// １：リソースアイテムカテゴリ
    /// 
    /// このパラメータに紐付いて、取得するアイテムIDと取得時に発生するSFXが切り替わる。
    u32 resourceItemCategory01;
    
    /// ２：リソースアイテムカテゴリ
    /// 
    /// このパラメータに紐付いて、取得するアイテムIDと取得時に発生するSFXが切り替わる。
    u32 resourceItemCategory02;
    
    /// ３：リソースアイテムカテゴリ
    /// 
    /// このパラメータに紐付いて、取得するアイテムIDと取得時に発生するSFXが切り替わる。
    u32 resourceItemCategory03;
    
    /// ４：リソースアイテムカテゴリ
    /// 
    /// このパラメータに紐付いて、取得するアイテムIDと取得時に発生するSFXが切り替わる。
    u32 resourceItemCategory04;
    
    /// ５：リソースアイテムカテゴリ
    /// 
    /// このパラメータに紐付いて、取得するアイテムIDと取得時に発生するSFXが切り替わる。
    u32 resourceItemCategory05;
    
    /// ６：リソースアイテムカテゴリ
    /// 
    /// このパラメータに紐付いて、取得するアイテムIDと取得時に発生するSFXが切り替わる。
    u32 resourceItemCategory06;
    
    /// ７：リソースアイテムカテゴリ
    /// 
    /// このパラメータに紐付いて、取得するアイテムIDと取得時に発生するSFXが切り替わる。
    u32 resourceItemCategory07;
    
    /// ８：リソースアイテムカテゴリ
    /// 
    /// このパラメータに紐付いて、取得するアイテムIDと取得時に発生するSFXが切り替わる。
    u32 resourceItemCategory08;
    
    /// 追加抽選か？
    /// 
    /// ○ならば、追加抽選特殊効果がPCにかかっている場合に限りこの抽選を実行する。
    u8 isAddLottery;
    
    /// パディング
    dummy8 pad1[7];
    
    /// １：基本出現ポイント
    /// 
    /// [基本出現ポイント/基本出現ポイントの合計]が抽選される確率になる
    u16 lotBasePoint01;
    
    /// ２：基本出現ポイント
    /// 
    /// [基本出現ポイント/基本出現ポイントの合計]が抽選される確率になる
    u16 lotBasePoint02;
    
    /// ３：基本出現ポイント
    /// 
    /// [基本出現ポイント/基本出現ポイントの合計]が抽選される確率になる
    u16 lotBasePoint03;
    
    /// ４：基本出現ポイント
    /// 
    /// [基本出現ポイント/基本出現ポイントの合計]が抽選される確率になる
    u16 lotBasePoint04;
    
    /// ５：基本出現ポイント
    /// 
    /// [基本出現ポイント/基本出現ポイントの合計]が抽選される確率になる
    u16 lotBasePoint05;
    
    /// ６：基本出現ポイント
    /// 
    /// [基本出現ポイント/基本出現ポイントの合計]が抽選される確率になる
    u16 lotBasePoint06;
    
    /// ７：基本出現ポイント
    /// 
    /// [基本出現ポイント/基本出現ポイントの合計]が抽選される確率になる
    u16 lotBasePoint07;
    
    /// ８：基本出現ポイント
    /// 
    /// [基本出現ポイント/基本出現ポイントの合計]が抽選される確率になる
    u16 lotBasePoint08;
    
    /// １：個数
    /// 
    /// 取得できるアイテムの個数
    u16 itemNum01;
    
    /// ２：個数
    /// 
    /// 取得できるアイテムの個数
    u16 itemNum02;
    
    /// ３：個数
    /// 
    /// 取得できるアイテムの個数
    u16 itemNum03;
    
    /// ４：個数
    /// 
    /// 取得できるアイテムの個数
    u16 itemNum04;
    
    /// ５：個数
    /// 
    /// 取得できるアイテムの個数
    u16 itemNum05;
    
    /// ６：個数
    /// 
    /// 取得できるアイテムの個数
    u16 itemNum06;
    
    /// ７：個数
    /// 
    /// 取得できるアイテムの個数
    u16 itemNum07;
    
    /// ８：個数
    /// 
    /// 取得できるアイテムの個数
    u16 itemNum08;
    
    /// １：特殊効果による出現ポイント補正
    /// 
    /// 基本出現ポイントに対する特殊効果からの乗算補正を行うかどうか
    u8 spLotPointRate01;
    
    /// ２：特殊効果による出現ポイント補正
    /// 
    /// 基本出現ポイントに対する特殊効果からの乗算補正を行うかどうか
    u8 spLotPointRate02;
    
    /// ３：特殊効果による出現ポイント補正
    /// 
    /// 基本出現ポイントに対する特殊効果からの乗算補正を行うかどうか
    u8 spLotPointRate03;
    
    /// ４：特殊効果による出現ポイント補正
    /// 
    /// 基本出現ポイントに対する特殊効果からの乗算補正を行うかどうか
    u8 spLotPointRate04;
    
    /// ５：特殊効果による出現ポイント補正
    /// 
    /// 基本出現ポイントに対する特殊効果からの乗算補正を行うかどうか
    u8 spLotPointRate05;
    
    /// ６：特殊効果による出現ポイント補正
    /// 
    /// 基本出現ポイントに対する特殊効果からの乗算補正を行うかどうか
    u8 spLotPointRate06;
    
    /// ７：特殊効果による出現ポイント補正
    /// 
    /// 基本出現ポイントに対する特殊効果からの乗算補正を行うかどうか
    u8 spLotPointRate07;
    
    /// ８：特殊効果による出現ポイント補正
    /// 
    /// 基本出現ポイントに対する特殊効果からの乗算補正を行うかどうか
    u8 spLotPointRate08;
    
};

struct GRAPHICS_PARAM_ST {
    static constexpr const char* TYPE_NAME = "GRAPHICS_PARAM_ST";
    
    /// HIT INSに弾丸が当たった時のデカール発生位置オフセット
    /// 
    /// HIT INSに当たった時に発生するデカールの発生位置を法線方向にこの値だけオフセットする
    f32 HitBulletDecalOffset_HitIns;
    
    /// 松明エミッシブ強度
    /// 
    /// 松明のエミッシブ強度の最大値。指定フレームかけてこの値になる。
    f32 TorchEmissiveIntensity;
    
    /// 松明エミッシブ強度フェードフレーム
    /// 
    /// 松明のエミッシブ強度が変更されるときのフェード時間。60フレームで１秒換算。
    u16 TorchEmissiveFadeFrame;
    
    /// 予約
    s16 Reserved02;
    
    /// キャラが濡れた時のデカールフェード範囲
    /// 
    /// キャラが濡れた時にデカールを消すフェード範囲
    f32 CharaWetDecalFadeRange;
    
    /// 水中時のクロス重力（Y軸）。現実世界の重力の場合は、-9.8になります。
    f32 ClothGravityYInWater;
    
    /// 水中時のクロスダンピング
    f32 ClothDampingInWater;
    
    /// 予約
    s32 Reserved06;
    
    /// 予約
    s32 Reserved07;
    
    /// 予約
    s32 Reserved08;
    
    /// 予約
    s32 Reserved09;
    
    /// 予約
    s32 Reserved10;
    
    /// 予約
    s32 Reserved11;
    
    /// 予約
    s32 Reserved12;
    
    /// 予約
    s32 Reserved13;
    
    /// 予約
    s32 Reserved14;
    
    /// 予約
    s32 Reserved15;
    
    /// 予約
    s32 Reserved16;
    
    /// 予約
    s32 Reserved17;
    
    /// 予約
    s32 Reserved18;
    
    /// 予約
    s32 Reserved19;
    
    /// 予約
    s32 Reserved20;
    
    /// 予約
    s32 Reserved21;
    
    /// 予約
    s32 Reserved22;
    
    /// 予約
    s32 Reserved23;
    
    /// 予約
    s32 Reserved24;
    
    /// 予約
    s32 Reserved25;
    
    /// 予約
    s32 Reserved26;
    
    /// 予約
    s32 Reserved27;
    
    /// 予約
    s32 Reserved28;
    
    /// 予約
    s32 Reserved29;
    
    /// 予約
    s32 Reserved30;
    
    /// 予約
    s32 Reserved31;
    
    /// 予約
    s32 Reserved32;
    
    /// 予約
    s32 Reserved33;
    
    /// 予約
    s32 Reserved34;
    
    /// 予約
    s32 Reserved35;
    
    /// 予約
    s32 Reserved36;
    
    /// 予約
    s32 Reserved37;
    
    /// 予約
    s32 Reserved38;
    
    /// 予約
    s32 Reserved39;
    
    /// 予約
    s32 Reserved40;
    
    /// 予約
    s32 Reserved41;
    
    /// 予約
    s32 Reserved42;
    
    /// 予約
    s32 Reserved43;
    
    /// 予約
    s32 Reserved44;
    
    /// 予約
    s32 Reserved45;
    
    /// 予約
    s32 Reserved46;
    
    /// 予約
    s32 Reserved47;
    
    /// 予約
    s32 Reserved48;
    
    /// 予約
    s32 Reserved49;
    
    /// 予約
    s32 Reserved50;
    
    /// 予約
    s32 Reserved51;
    
    /// 予約
    s32 Reserved52;
    
    /// 予約
    s32 Reserved53;
    
    /// 予約
    s32 Reserved54;
    
    /// 予約
    s32 Reserved55;
    
    /// 予約
    s32 Reserved56;
    
    /// 予約
    s32 Reserved57;
    
    /// 予約
    s32 Reserved58;
    
    /// 予約
    s32 Reserved59;
    
    /// 予約
    s32 Reserved60;
    
    /// 予約
    s32 Reserved61;
    
    /// 予約
    s32 Reserved62;
    
    /// 予約
    s32 Reserved63;
    
};

struct POINT_LIGHT_BANK {
    static constexpr const char* TYPE_NAME = "POINT_LIGHT_BANK";
    
    /// 減衰開始距離[m]
    /// 
    /// 点光源
    f32 dwindleBegin;
    
    /// 減衰終了距離[m]
    /// 
    /// 点光源
    f32 dwindleEnd;
    
    /// Ｒ
    /// 
    /// 点光源
    s16 colR;
    
    /// Ｇ
    /// 
    /// 点光源
    s16 colG;
    
    /// Ｂ
    /// 
    /// 点光源
    s16 colB;
    
    /// RGB倍率[％]
    /// 
    /// 点光源
    s16 colA;
    
    /// 影の濃さ(0.0:影なし～1.0:最大濃)
    f32 shadowIntensity;
    
};

struct DECAL_PARAM_ST {
    static constexpr const char* TYPE_NAME = "DECAL_PARAM_ST";
    
    /// テクスチャID
    s32 textureId;
    
    /// ダミポリID
    /// 
    /// デカール発生基準のダミポリID
    /// TAEで指定している場合はTAEの値になる
    s32 dmypolyId;
    
    /// 基準角度オフセット_上下[deg]
    f32 pitchAngle;
    
    /// 基準角度オフセット_左右[deg]
    f32 yawAngle;
    
    /// 貼り付け開始距離[m]
    f32 nearDistance;
    
    /// 貼り付け終了距離[m]
    f32 farDistance;
    
    /// 開始距離での大きさ[m]
    f32 nearSize;
    
    /// 終了距離での大きさ[m]
    f32 farSize;
    
    /// 監視特殊効果ID
    s32 maskSpeffectId;
    
    /// パディング
    u32 pad_10 : 4;
    
    /// 材質によるテクスチャ差し替え
    /// 
    /// 攻撃のヒットで発生させるときに1で防御材質によってテクスチャを変える
    /// 新しいテクスチャID=血材質ID*10000000+元のテクスチャID
    u32 replaceTextureId_byMaterial : 1;
    
    /// ダミポリ検索場所
    /// 0:本体
    /// 1:左手武器
    /// 2:右手武器
    u32 dmypolyCategory : 2;
    
    /// パディング
    u32 pad_05 : 4;
    
    /// デファード
    /// 
    /// 1でデファードデカールとして機能する
    u32 useDeferredDecal : 1;
    
    /// ペイント
    /// 
    /// 1でペイントデカールとして機能する
    u32 usePaintDecal : 1;
    
    /// 流血表現
    /// 
    /// オプションの流血表現の影響を受けるか、マイルドでIDが+1000される、非表示だと貼り付けない
    u32 bloodTypeEnable : 1;
    
    /// ノーマル成分を使用するか
    /// 
    /// ノーマル成分を使用するなら1（ノーマルとシャイニネスのテクスチャ統合対応）
    u32 bUseNormal : 1;
    
    /// パディング
    u32 pad_08 : 1;
    
    /// パディング
    u32 pad_09 : 1;
    
    /// POMを有効にするか
    u32 usePom : 1;
    
    /// エミッシブを更新するか
    u32 useEmissive : 1;
    
    /// 垂直に貼り付けるか
    u32 putVertical : 1;
    
    /// ランダムスケール最小値[％]
    s16 randomSizeMin;
    
    /// ランダムスケール最大値[％]
    s16 randomSizeMax;
    
    /// ランダム角度_ひねり最小値[deg]
    f32 randomRollMin;
    
    /// ランダム角度_ひねり最大値[deg]
    f32 randomRollMax;
    
    /// ランダム角度_上下最小値[deg]
    f32 randomPitchMin;
    
    /// ランダム角度_上下最大値[deg]
    f32 randomPitchMax;
    
    /// ランダム角度_左右最小値[deg]
    f32 randomYawMin;
    
    /// ランダム角度_左右最大値[deg]
    f32 randomYawMax;
    
    /// POM高さスケール
    f32 pomHightScale;
    
    /// POM最小サンプル数
    u8 pomSampleMin;
    
    /// POM最大サンプル数
    u8 pomSampleMax;
    
    /// ブレンドモード
    s8 blendMode;
    
    /// デカールを飛ばす基準座標
    /// 
    /// デカールを飛ばす方向を決定する基準座標
    s8 appearDirType;
    
    /// エミッシブ 開始値
    f32 emissiveValueBegin;
    
    /// エミッシブ 終了値
    f32 emissiveValueEnd;
    
    /// エミッシブ 更新時間(秒)
    /// 
    /// 開始値～終了値の補間時間
    f32 emissiveTime;
    
    /// 補間するか？
    /// 
    /// TAEのデカル発生でバーを伸ばしてる時間発生させるか？
    u8 bIntpEnable;
    
    /// パディング
    dummy8 pad_01[3];
    
    /// 補間間隔[m]
    /// 
    /// 補間有効時にTAEのバーの間で発生したデカルを補間する距離
    f32 intpIntervalDist;
    
    /// 補間開始時のテクスチャID（-1でテクスチャIDと同じ値を使う）
    s32 beginIntpTextureId;
    
    /// 補間終了時のテクスチャID
    /// 
    /// 補間終了時のテクスチャテクスチャID（-1でテクスチャIDと同じ値を使う）
    s32 endIntpTextureId;
    
    /// デカールが貼られた時に出すSFXID（-1で何も出さない）
    s32 appearSfxId;
    
    /// SFXのオフセット位置
    /// 
    /// SFX発生位置のオフセット距離
    f32 appearSfxOffsetPos;
    
    /// マスクテクスチャID（-1でテクスチャIDを見る）
    s32 maskTextureId;
    
    /// アルベドテクスチャID（-1でテクスチャIDを見る）
    s32 diffuseTextureId;
    
    /// リフレクテクスチャID
    /// 
    /// リフレクタンステクスチャID（-1でテクスチャIDを見る）
    s32 reflecTextureId;
    
    /// マスクの強さ（現状、デファードデカールでのみ有効）
    f32 maskScale;
    
    /// ノーマルテクスチャID（-1でテクスチャIDを見る）
    s32 normalTextureId;
    
    /// ハイトテクスチャID（-1でテクスチャIDを見る）
    s32 heightTextureId;
    
    /// エミッシブテクスチャID（-1でテクスチャIDを見る）
    s32 emissiveTextureId;
    
    /// アルベドカラー：R
    /// 
    /// アルベドの色：R
    u8 diffuseColorR;
    
    /// アルベドカラー：G
    /// 
    /// アルベドの色：G
    u8 diffuseColorG;
    
    /// アルベドカラー：B
    /// 
    /// アルベドの色：B
    u8 diffuseColorB;
    
    /// パディング
    dummy8 pad_03[1];
    
    /// リフレクカラー：R
    /// 
    /// リフレクの色：R
    u8 reflecColorR;
    
    /// リフレクカラー：G
    /// 
    /// リフレクの色：G
    u8 reflecColorG;
    
    /// リフレクカラー：B
    /// 
    /// リフレクの色：B
    u8 reflecColorB;
    
    /// 寿命が有効か
    u8 bLifeEnable;
    
    /// シャイニネスの強さ
    f32 siniScale;
    
    /// 寿命[秒]（デカールが貼られてからの時間、フェードイン時間は関係ない）
    f32 lifeTimeSec;
    
    /// フェードアウト時間[秒]
    f32 fadeOutTimeSec;
    
    /// 優先度
    /// 
    /// この値が大きいほど残りやすい（-1は消滅しない）
    s16 priority;
    
    /// 近くにデカールがあれば間引くかどうか
    u8 bDistThinOutEnable;
    
    /// ランダムパターンを固定化する
    /// 
    /// 「はい」にすると、各バリエーション数が0以外のテクスチャについてランダムに決めた一つのバリエーション番号が適用されるようになります。0以外の各バリエーション数は同じ値に揃える必要があります。
    u8 bAlignedTexRandomVariationEnable;
    
    /// この距離以内なら間引き候補
    /// 
    /// この距離以内にデカールがあれば間引き候補
    f32 distThinOutCheckDist;
    
    /// 方向の差がこの角度[度]以内なら間引き候補
    /// 
    /// デカールの方向の差がこの角度以内なら間引き候補
    f32 distThinOutCheckAngleDeg;
    
    /// 条件を満たした数がこの数以上なら間引く
    /// 
    /// 距離、角度がこの数以上なら間引く
    u8 distThinOutMaxNum;
    
    /// 直近何個まで間引きチェックするか
    /// 
    /// 間引き候補を直近何個まで調べるか
    u8 distThinOutCheckNum;
    
    /// 発生するまでの遅延フレーム[フレーム（30FPS換算）]
    /// 
    /// デカールを貼り付けようとしてからこのフレーム後に実際に貼り付けられる
    s16 delayAppearFrame;
    
    /// アルベド・バリエーション数
    /// 
    /// アルベドテクスチャのランダムバリエーション数（0番目を含む、2でテクスチャ2枚分）
    u32 randVaria_Diffuse : 4;
    
    /// マスク・バリエーション数
    /// 
    /// マスクテクスチャのランダムバリエーション数（0番目を含む、2でテクスチャ2枚分）
    u32 randVaria_Mask : 4;
    
    /// リフレク・バリエーション数
    /// 
    /// リフレクテクスチャのランダムバリエーション数（0番目を含む、2でテクスチャ2枚分）
    u32 randVaria_Reflec : 4;
    
    /// パディング
    u32 pad_12 : 4;
    
    /// ノーマル・バリエーション数
    /// 
    /// ノーマルテクスチャのランダムバリエーション数（0番目を含む、2でテクスチャ2枚分）
    u32 randVaria_Normal : 4;
    
    /// ハイト・バリエーション数
    /// 
    /// ハイトテクスチャのランダムバリエーション数（0番目を含む、2でテクスチャ2枚分）
    u32 randVaria_Height : 4;
    
    /// エミッシブ・バリエーション数
    /// 
    /// エミッシブテクスチャのランダムバリエーション数（0番目を含む、2でテクスチャ2枚分）
    u32 randVaria_Emissive : 4;
    
    /// パディング
    u32 pad_11 : 4;
    
    /// フェードイン時間[秒]
    f32 fadeInTimeSec;
    
    /// SFX発生上限角度
    f32 maxDecalSfxCreatableSlopeAngleDeg;
    
    /// パディング
    dummy8 pad_02[4];
    
};

struct CS_VOLUMETRIC_EFFECT_QUALITY_DETAIL {
    static constexpr const char* TYPE_NAME = "CS_VOLUMETRIC_EFFECT_QUALITY_DETAIL";
    
    /// フォグ有効
    u8 fogEnabled;
    
    /// フォグシャドウ許可
    u8 fogShadowEnabled;
    
    /// dmy
    dummy8 dmy[2];
    
    /// シャドウのサンプルカウントオフセット。
    s32 fogShadowSampleCountBias;
    
    /// ローカルライト計算距離スケール (0にするとローカルライト計算をしない)
    f32 fogLocalLightDistScale;
    
    /// フォグボリュームサイズスケーラ
    u32 fogVolueSizeScaler;
    
    /// フォグボリュームサイズ除算
    u32 fogVolueSizeDivider;
    
};

struct AI_ODDS_PARAM {
    static constexpr const char* TYPE_NAME = "AI_ODDS_PARAM";
    
    /// アクション0の比率
    u8 act0;
    
    /// アクション1の比率
    u8 act1;
    
    /// アクション2の比率
    u8 act2;
    
    /// アクション3の比率
    u8 act3;
    
    /// アクション4の比率
    u8 act4;
    
    /// アクション5の比率
    u8 act5;
    
    /// アクション6の比率
    u8 act6;
    
    /// アクション7の比率
    u8 act7;
    
    /// アクション8の比率
    u8 act8;
    
    /// アクション9の比率
    u8 act9;
    
    /// アクション10の比率
    u8 act10;
    
    /// アクション11の比率
    u8 act11;
    
    /// アクション12の比率
    u8 act12;
    
    /// アクション13の比率
    u8 act13;
    
    /// アクション14の比率
    u8 act14;
    
    /// アクション15の比率
    u8 act15;
    
    /// アクション16の比率
    u8 act16;
    
    /// アクション17の比率
    u8 act17;
    
    /// アクション18の比率
    u8 act18;
    
    /// アクション19の比率
    u8 act19;
    
    /// アクション20の比率
    u8 act20;
    
    /// アクション21の比率
    u8 act21;
    
    /// アクション22の比率
    u8 act22;
    
    /// アクション23の比率
    u8 act23;
    
    /// アクション24の比率
    u8 act24;
    
    /// アクション25の比率
    u8 act25;
    
    /// アクション26の比率
    u8 act26;
    
    /// アクション27の比率
    u8 act27;
    
    /// アクション28の比率
    u8 act28;
    
    /// アクション29の比率
    u8 act29;
    
    /// アクション30の比率
    u8 act30;
    
    /// アクション31の比率
    u8 act31;
    
    /// アクション32の比率
    u8 act32;
    
    /// アクション33の比率
    u8 act33;
    
    /// アクション34の比率
    u8 act34;
    
    /// アクション35の比率
    u8 act35;
    
    /// アクション36の比率
    u8 act36;
    
    /// アクション37の比率
    u8 act37;
    
    /// アクション38の比率
    u8 act38;
    
    /// アクション39の比率
    u8 act39;
    
    /// アクション40の比率
    u8 act40;
    
    /// アクション41の比率
    u8 act41;
    
    /// アクション42の比率
    u8 act42;
    
    /// アクション43の比率
    u8 act43;
    
    /// アクション44の比率
    u8 act44;
    
    /// アクション45の比率
    u8 act45;
    
    /// アクション46の比率
    u8 act46;
    
    /// アクション47の比率
    u8 act47;
    
    /// アクション48の比率
    u8 act48;
    
    /// アクション49の比率
    u8 act49;
    
    /// アクション50の比率
    u8 act50;
    
    /// アクション51の比率
    u8 act51;
    
    /// アクション52の比率
    u8 act52;
    
    /// アクション53の比率
    u8 act53;
    
    /// アクション54の比率
    u8 act54;
    
    /// アクション55の比率
    u8 act55;
    
    /// アクション56の比率
    u8 act56;
    
    /// アクション57の比率
    u8 act57;
    
    /// アクション58の比率
    u8 act58;
    
    /// アクション59の比率
    u8 act59;
    
    /// アクション60の比率
    u8 act60;
    
    /// アクション61の比率
    u8 act61;
    
    /// アクション62の比率
    u8 act62;
    
    /// アクション63の比率
    u8 act63;
    
    /// アクション64の比率
    u8 act64;
    
    /// アクション65の比率
    u8 act65;
    
    /// アクション66の比率
    u8 act66;
    
    /// アクション67の比率
    u8 act67;
    
    /// アクション68の比率
    u8 act68;
    
    /// アクション69の比率
    u8 act69;
    
    /// アクション70の比率
    u8 act70;
    
    /// アクション71の比率
    u8 act71;
    
    /// アクション72の比率
    u8 act72;
    
    /// アクション73の比率
    u8 act73;
    
    /// アクション74の比率
    u8 act74;
    
    /// アクション75の比率
    u8 act75;
    
    /// アクション76の比率
    u8 act76;
    
    /// アクション77の比率
    u8 act77;
    
    /// アクション78の比率
    u8 act78;
    
    /// アクション79の比率
    u8 act79;
    
    /// アクション80の比率
    u8 act80;
    
    /// アクション81の比率
    u8 act81;
    
    /// アクション82の比率
    u8 act82;
    
    /// アクション83の比率
    u8 act83;
    
    /// アクション84の比率
    u8 act84;
    
    /// アクション85の比率
    u8 act85;
    
    /// アクション86の比率
    u8 act86;
    
    /// アクション87の比率
    u8 act87;
    
    /// アクション88の比率
    u8 act88;
    
    /// アクション89の比率
    u8 act89;
    
    /// アクション90の比率
    u8 act90;
    
    /// アクション91の比率
    u8 act91;
    
    /// アクション92の比率
    u8 act92;
    
    /// アクション93の比率
    u8 act93;
    
    /// アクション94の比率
    u8 act94;
    
    /// アクション95の比率
    u8 act95;
    
    /// アクション96の比率
    u8 act96;
    
    /// アクション97の比率
    u8 act97;
    
    /// アクション98の比率
    u8 act98;
    
    /// アクション99の比率
    u8 act99;
    
    /// pad
    dummy8 pad0[12];
    
};

struct AI_ATTACK_PARAM_ST {
    static constexpr const char* TYPE_NAME = "AI_ATTACK_PARAM_ST";
    
    /// 参照ID
    /// 
    /// NPC思考パラメータで指定するID
    s32 attackTableId;
    
    /// 攻撃ID
    /// 
    /// 攻撃の番号
    s32 attackId;
    
    /// 成功判定距離
    /// 
    /// Common_Attack系のサブゴールの引数用
    f32 successDistance;
    
    /// 攻撃前旋回時間
    /// 
    /// Common_Attack系のサブゴールの引数用
    f32 turnTimeBeforeAttack;
    
    /// 正面判定角度
    /// 
    /// Common_Attack系のサブゴールの引数用
    s16 frontAngleRange;
    
    /// 上方実行閾値
    /// 
    /// Common_Attack系のサブゴールの引数用
    s16 upAngleThreshold;
    
    /// 下方実行閾値
    /// 
    /// Common_Attack系のサブゴールの引数用
    s16 downAngleThershold;
    
    /// 始動技か
    /// 
    /// コンボの2段目以降の攻撃は×
    u8 isFirstAttack;
    
    /// 適正距離外で選択するか
    /// 
    /// 適正距離外の時に選択対象にするかどうか
    u8 doesSelectOnOutRange;
    
    /// 最小適正距離
    /// 
    /// 攻撃の適正距離の最小値
    f32 minOptimalDistance;
    
    /// 最大適正距離
    /// 
    /// 攻撃の適性距離の最大値
    f32 maxOptimalDistance;
    
    /// 適正角度基準方向1
    /// 
    /// 攻撃の適正角度の基準となる方向（XZ平面）
    s16 baseDirectionForOptimalAngle1;
    
    /// 適正角度基準範囲1
    /// 
    /// 攻撃の適性角度の範囲
    s16 optimalAttackAngleRange1;
    
    /// 適正角度基準方向2
    /// 
    /// 攻撃の適性確度の基準となる方向（XZ平面）
    s16 baseDirectionForOptimalAngle2;
    
    /// 適正角度基準範囲2
    /// 
    /// 攻撃の適性角度の範囲
    s16 optimalAttackAngleRange2;
    
    /// 実行可能インターバル
    /// 
    /// 一度攻撃を行ってから再度使うために必要な時間
    f32 intervalForExec;
    
    /// 選択レート
    /// 
    /// 選択されやすさを倍率で指定する
    f32 selectionTendency;
    
    /// 近距離選択レート
    /// 
    /// 近距離での選択レート
    f32 shortRangeTendency;
    
    /// 中距離選択レート
    /// 
    /// 中距離での選択レート
    f32 middleRangeTendency;
    
    /// 遠距離選択レート
    /// 
    /// 遠距離での選択レート
    f32 farRangeTendency;
    
    /// 範囲外レート
    /// 
    /// 範囲外での選択レート
    f32 outRangeTendency;
    
    /// 派生攻撃1
    /// 
    /// 派生可能な攻撃の番号
    s32 deriveAttackId1;
    
    /// 派生攻撃2
    /// 
    /// 派生可能な攻撃の番号
    s32 deriveAttackId2;
    
    /// 派生攻撃3
    /// 
    /// 派生可能な攻撃の番号
    s32 deriveAttackId3;
    
    /// 派生攻撃4
    /// 
    /// 派生可能な攻撃の番号
    s32 deriveAttackId4;
    
    /// 派生攻撃5
    /// 
    /// 派生可能な攻撃の番号
    s32 deriveAttackId5;
    
    /// 派生攻撃6
    /// 
    /// 派生可能な攻撃の番号
    s32 deriveAttackId6;
    
    /// 派生攻撃7
    /// 
    /// 派生可能な攻撃の番号
    s32 deriveAttackId7;
    
    /// 派生攻撃8
    /// 
    /// 派生可能な攻撃の番号
    s32 deriveAttackId8;
    
    /// 派生攻撃9
    /// 
    /// 派生可能な攻撃の番号
    s32 deriveAttackId9;
    
    /// 派生攻撃10
    /// 
    /// 派生可能な攻撃の番号
    s32 deriveAttackId10;
    
    /// 派生攻撃11
    /// 
    /// 派生可能な攻撃の番号
    s32 deriveAttackId11;
    
    /// 派生攻撃12
    /// 
    /// 派生可能な攻撃の番号
    s32 deriveAttackId12;
    
    /// 派生攻撃13
    /// 
    /// 派生可能な攻撃の番号
    s32 deriveAttackId13;
    
    /// 派生攻撃14
    /// 
    /// 派生可能な攻撃の番号
    s32 deriveAttackId14;
    
    /// 派生攻撃15
    /// 
    /// 派生可能な攻撃の番号
    s32 deriveAttackId15;
    
    /// 派生攻撃16
    /// 
    /// 派生可能な攻撃の番号
    s32 deriveAttackId16;
    
    /// ゴールの最小寿命
    f32 goalLifeMin;
    
    /// ゴールの最大寿命
    f32 goalLifeMax;
    
    /// 適正距離内で選択するか
    /// 
    /// 適正距離内の時に選択対象にするかどうか
    u8 doesSelectOnInnerRange;
    
    /// 初撃として使用するか
    u8 enableAttackOnBattleStart;
    
    /// ターゲットダウン時選択するか
    u8 doesSelectOnTargetDown;
    
    /// pad
    dummy8 pad1[1];
    
    /// 最小到達判定距離
    f32 minArriveDistance;
    
    /// 最大到達判定距離
    f32 maxArriveDistance;
    
    /// 連続攻撃実行距離
    /// 
    /// 二段目以降の攻撃の実行判定に使用する距離
    f32 comboExecDistance;
    
    /// 連続攻撃実行角度
    /// 
    /// 二段目以降の攻撃の実行判定に使用する距離
    f32 comboExecRange;
    
};

struct OBJECT_PARAM_ST {
    static constexpr const char* TYPE_NAME = "OBJECT_PARAM_ST";
    
    /// HP
    /// 
    /// 破壊までの耐久力(-1:破壊不可)
    s16 hp;
    
    /// 防御力
    /// 
    /// この値以下の攻撃力はダメージなし
    u16 defense;
    
    /// 外部参照テクスチャID
    /// 
    /// mAA/mAA_????.tpf(-1:なし)(AA:エリア番号)
    s16 extRefTexId;
    
    /// 材質ID
    /// 
    /// マテリアルID。床材質と同じ扱い。-1のときは今までと同じ挙動
    s16 materialId;
    
    /// アニメ破壊ID最大値
    /// 
    /// アニメ破壊IDが0番から何番までか
    u8 animBreakIdMax;
    
    /// 破壊状態をセーブデータに保存するか(0:保存しない, 1:保存する)
    u8 isSaveBreakState : 1;
    
    /// プレイヤ衝突で壊れるか
    /// 
    /// プレイヤが接触したときに壊れ(0:ない, 1:る)
    u8 isBreakByPlayerCollide : 1;
    
    /// アニメ破壊か(0:物理破壊, 1:アニメ破壊)
    u8 isAnimBreak : 1;
    
    /// 貫通弾丸が当たるか(0:当たらない, 1:当たる)
    u8 isPenetrationBulletHit : 1;
    
    /// パディング
    dummy8 pad8 : 1;
    
    /// 攻撃を弾くか(0:弾かない, 1:弾く)
    u8 isAttackBacklash : 1;
    
    /// 初期出現用破壊禁止
    /// 
    /// プレイヤの初期出現で壊れ(0:る, 1:ない)
    u8 isDisableBreakForFirstAppear : 1;
    
    /// ハシゴか(0:ちがう, 1:そう)
    u8 isLadder : 1;
    
    /// ポリ劇中アニメを停止するか(0:しない, 1:する)
    u8 isAnimPauseOnRemoPlay : 1;
    
    /// パディング
    dummy8 pad9 : 1;
    
    /// 移動オブジェか(0:ちがう, 1:そう)
    u8 isMoveObj : 1;
    
    /// 吊り橋オブジェクトか(0:ちがう, 1:そう)
    u8 isRopeBridge : 1;
    
    /// ダメージによって剛体が吹き飛ぶか(0:吹き飛ばない, 1:吹き飛ぶ)
    u8 isAddRigidImpulse_ByDamage : 1;
    
    /// キャラが乗ったら壊れるか(0:壊れるない 1:壊れる)
    u8 isBreak_ByChrRide : 1;
    
    /// 燃焼するか(0:しない, 1:する)
    u8 isBurn : 1;
    
    /// 敵キャラ衝突で壊れるか
    /// 
    /// 敵キャラが接触したときに壊れ(0:ない, 1:る)
    u8 isBreakByEnemyCollide : 1;
    
    /// デフォルトLODパラムID(-1：なし)
    s8 defaultLodParamId;
    
    /// 破壊時SFXID
    /// 
    /// オブジェ破壊時のSFXID(-1:デフォルト(810030))
    s32 breakSfxId;
    
    /// 破壊時SFXダミポリID
    /// 
    /// オブジェ破壊時SFXの発生位置ダミポリID(-1：モデル中心, -2：配置位置）
    s32 breakSfxCpId;
    
    /// 破壊時 弾発生 行動パラメータID
    /// 
    /// 破壊時[弾]の行動パラメータ(-1:発生しない)
    s32 breakBulletBehaviorId;
    
    /// 破壊時 弾発生 ダミポリID
    /// 
    /// 破壊時[弾]の発生位置ダミポリID(-1:配置位置)
    s32 breakBulletCpId;
    
    /// 落下破壊高さ(m)
    /// 
    /// 落下時にオブジェクトが壊れる高さ（0：落下では壊れない)
    u8 breakFallHeight;
    
    /// 風影響タイプ(破壊前)
    u8 windEffectType_0;
    
    /// 風影響タイプ(破壊後)
    u8 windEffectType_1;
    
    /// カメラ回避設定
    /// 
    /// オブジェクトがカメラ・プレイヤー間を遮蔽した場合の対処方法
    u8 camAvoidType;
    
    /// 風係数(破壊前)
    f32 windEffectRate_0;
    
    /// 風係数(破壊後)
    f32 windEffectRate_1;
    
    /// 破壊後強制停止時間
    /// 
    /// 破壊されてから剛体を強制的に停止するまでの時間（0で強制停止しない）
    f32 breakStopTime;
    
    /// 燃焼時間(秒)(0で燃え続ける)
    f32 burnTime;
    
    /// 燃焼 破壊判定進行度
    /// 
    /// 破壊状態に切り替わる燃焼度の閾値
    f32 burnBraekRate;
    
    /// 燃焼 SFXID：0
    /// 
    /// 燃焼時のSFXID：0 (-1：SFXなし)
    s32 burnSfxId;
    
    /// 燃焼 SFXID：1
    /// 
    /// 燃焼時のSFXID：1 (-1：SFXなし)
    s32 burnSfxId_1;
    
    /// 燃焼 SFXID：2
    /// 
    /// 燃焼時のSFXID：2 (-1：SFXなし)
    s32 burnSfxId_2;
    
    /// 燃焼 SFXID：3
    /// 
    /// 燃焼時のSFXID：3 (-1：SFXなし)
    s32 burnSfxId_3;
    
    /// 燃焼 弾発生 行動パラメータ：0
    /// 
    /// 燃焼時の弾発生行動パラメータ：0(-1:発生しない)
    s32 burnBulletBehaviorId;
    
    /// 燃焼 弾発生 行動パラメータ：1
    /// 
    /// 燃焼時の弾発生行動パラメータ：1(-1:発生しない)
    s32 burnBulletBehaviorId_1;
    
    /// 燃焼 弾発生 行動パラメータ：2
    /// 
    /// 燃焼時の弾発生行動パラメータ：2(-1:発生しない)
    s32 burnBulletBehaviorId_2;
    
    /// 燃焼 弾発生 行動パラメータ：3
    /// 
    /// 燃焼時の弾発生行動パラメータ：3(-1:発生しない)
    s32 burnBulletBehaviorId_3;
    
    /// 燃焼 弾発生間隔(フレーム)
    /// 
    /// 延焼用の弾を発生する間隔(フレーム)
    u16 burnBulletInterval;
    
    /// ナビメッシュフラグ
    /// 
    /// オブジェから設定されるナビメッシュフラグ
    u8 navimeshFlag;
    
    /// 衝突判定タイプ
    u8 collisionType;
    
    /// 燃焼 弾発生遅延時間(秒)
    /// 
    /// 延焼用の弾発生を遅らせる時間(秒)
    f32 burnBulletDelayTime;
    
    /// 燃焼 SFX発生遅延 開始時間(秒)：0
    /// 
    /// 燃焼時のSFX発生遅延時間 開始～終了時間の間でランダムに決まる
    f32 burnSfxDelayTimeMin;
    
    /// 燃焼 SFX発生遅延 開始時間(秒)：1
    /// 
    /// 燃焼時のSFX発生遅延時間 開始～終了時間の間でランダムに決まる
    f32 burnSfxDelayTimeMin_1;
    
    /// 燃焼 SFX発生遅延 開始時間(秒)：2
    /// 
    /// 燃焼時のSFX発生遅延時間 開始～終了時間の間でランダムに決まる
    f32 burnSfxDelayTimeMin_2;
    
    /// 燃焼 SFX発生遅延 開始時間(秒)：3
    /// 
    /// 燃焼時のSFX発生遅延時間 開始～終了時間の間でランダムに決まる
    f32 burnSfxDelayTimeMin_3;
    
    /// 燃焼 SFX発生遅延 終了時間(秒)：0
    /// 
    /// 燃焼時のSFX発生遅延時間 開始～終了時間の間でランダムに決まる
    f32 burnSfxDelayTimeMax;
    
    /// 燃焼 SFX発生遅延 終了時間(秒)：1
    /// 
    /// 燃焼時のSFX発生遅延時間 開始～終了時間の間でランダムに決まる
    f32 burnSfxDelayTimeMax_1;
    
    /// 燃焼 SFX発生遅延 終了時間(秒)：2
    /// 
    /// 燃焼時のSFX発生遅延時間 開始～終了時間の間でランダムに決まる
    f32 burnSfxDelayTimeMax_2;
    
    /// 燃焼 SFX発生遅延 終了時間(秒)：3
    /// 
    /// 燃焼時のSFX発生遅延時間 開始～終了時間の間でランダムに決まる
    f32 burnSfxDelayTimeMax_3;
    
    /// 破壊時発生AI音ID
    /// 
    /// 破壊時に発生させるAI音ID
    s32 BreakAiSoundID;
    
    /// 破片非表示 待機時間(秒)
    /// 
    /// 破片のマテリアルID(-1：非表示処理を行なわない)
    f32 FragmentInvisibleWaitTime;
    
    /// 破片非表示 時間(秒)
    /// 
    /// 破片を非表示にさせる時間(秒)
    f32 FragmentInvisibleTime;
    
    /// パディング
    /// 
    /// 破片のマテリアルID(-1：非表示処理を行なわない)
    dummy8 pad_3[16];
    
    /// 剛体 衝突点距離係数 [柔らかい]
    /// 
    /// 剛体ソフトコンタクト設定 衝突点距離係数 [柔らかい]
    f32 RigidPenetrationScale_Soft;
    
    /// 剛体 衝突点距離係数 [通常]
    /// 
    /// 剛体ソフトコンタクト設定 衝突点距離係数 [通常]
    f32 RigidPenetrationScale_Normal;
    
    /// 剛体 衝突点距離係数 [固い]
    /// 
    /// 剛体ソフトコンタクト設定 衝突点距離係数 [固い]
    f32 RigidPenetrationScale_Hard;
    
    /// 地形接触時のSFXID(-1:地形のマテリアルによりオフセット)
    s32 LandTouchSfxId;
    
    /// ダメージを遮蔽するか
    /// 
    /// ダメージを受けたときに、そのダメージを反対側に通さないかどうか　(0:通す, 1:通さない)
    u8 isDamageCover : 1;
    
    /// 衝突破壊後、そのままの形状でHavok処理を行い、再破壊可能か
    u8 isUserPhysicForChrCollide;
    
    /// ペイントデカールターゲットサイズ(0～4096 ２のべき乗のみ許可)
    u16 paintDecalTargetTextureSize;
    
    /// 動的生成Objの寿命(秒)
    /// 
    /// 動的生成Objが生成後に消滅するまでの時間 (0:消滅しない)
    f32 lifeTime_forDC;
    
    /// クロス更新距離(m)
    /// 
    /// havokClothの更新を行なうカメラからの距離(0:必ず更新する)
    f32 clothUpdateDist;
    
    /// プレイヤー接触時SE ID
    /// 
    /// 自分が操作するローカルプレイヤーが触れた際に再生するSEのID(-1:再生しない)
    s32 contactSeId;
    
    /// 破壊後着地時SFX識別子
    /// 
    /// 破壊された後、最初に着地した際に再生するオブジェ材質依存SFXの識別子(-1:発生しない)
    s32 breakLandingSfxId;
    
    /// 追加着弾SFXID：攻撃強度小
    /// 
    /// 着弾SFXと同時出すSFXのID。攻撃強度[SFX]以外の情報（材質など）は考慮しない。 (-1：SFXなし)
    s32 extHitSfx_S;
    
    /// 追加着弾SFXID：攻撃強度中
    /// 
    /// 着弾SFXと同時出すSFXのID。攻撃強度[SFX]以外の情報（材質など）は考慮しない。 (-1：SFXなし)
    s32 extHitSfx_M;
    
    /// 追加着弾SFXID：攻撃強度大
    /// 
    /// 着弾SFXと同時出すSFXのID。攻撃強度[SFX]以外の情報（材質など）は考慮しない。 (-1：SFXなし)
    s32 extHitSfx_L;
    
    /// 追加着弾SFXID：攻撃強度特大
    /// 
    /// 着弾SFXと同時出すSFXのID。攻撃強度[SFX]以外の情報（材質など）は考慮しない。 (-1：SFXなし)
    s32 extHitSfx_LL;
    
    /// 追加着弾SFXID：攻撃強度特特大
    /// 
    /// 着弾SFXと同時出すSFXのID。攻撃強度[SFX]以外の情報（材質など）は考慮しない。 (-1：SFXなし)
    s32 extHitSfx_LLL;
    
    /// 破壊時SFXオフセット座標X
    /// 
    /// 「破壊時SFXダミポリID」に対してオフセットする座標
    f32 breakSfxOffsetX;
    
    /// 破壊時SFXオフセット座標Y
    /// 
    /// 「破壊時SFXダミポリID」に対してオフセットする座標
    f32 breakSfxOffsetY;
    
    /// 破壊時SFXオフセット座標Z
    /// 
    /// 「破壊時SFXダミポリID」に対してオフセットする座標
    f32 breakSfxOffsetZ;
    
    /// 壁ジャンプ可能か
    /// 
    /// Bhavior等での判定に使用（○：壁ジャンプ可能、×：壁ジャンプ不可能。）
    u8 isEnableWallJump : 1;
    
    /// プレイヤー接触でドッキング移動停止するか
    /// 
    /// ドッキング移動中のPCと接触したときに停止させるか（○：停止させる、×：停止させない）
    u8 doesStopPlayerDockedMove : 1;
    
    /// 環境マップ撮影時に撮影しない
    u8 isDisableEnvMapCapture : 1;
    
    /// パディング
    dummy8 pad_5[1];
    
    /// 自動描画グループ合格ピクセル
    /// 
    /// 自動描画グループ生成時に、このピクセル数 超 見えていたら、描画グループのフラグを立てます。（-1：デフォルト値。game.properties　Draw.AutoDrawGroup.PassPixelNumで定義）
    s16 autoDrawGroupPassPixel;
    
    /// 自動描画グループ作成で遮蔽しない
    /// 
    /// 扉などに設定します
    u8 autoDrawGroupDisableDepthWrite;
    
    /// 自動描画グループ 拡張バウンディングBOX使用
    /// 
    /// 自動描画グループで、可視判定を広げたい時に使います。「見えている判定」を広げつつも、このモデルによる遮蔽はそのままになります
    u8 useExpandVolume;
    
    /// パディング
    dummy8 pad_6[2];
    
    /// ヒット内にいるキャラにかける特殊効果ID。衝突判定タイプが「カメラ、ロック、ダメージが当たらない」「ダメージのみ当たる」「ダメージのみ当たるが弾丸は当たらない」の何れかの場合のみ有効です。
    s32 SpecialEffectId_InsideHit;
    
    /// 自動描画グループ 判定拡張BOX +X
    /// 
    /// 自動描画グループで、可視判定の領域をモデルバウンディングBOXから拡張します。+X方向の拡張距離と、-X方向の拡張距離を別々に指定します
    f32 expandVolumeX_plus;
    
    /// 自動描画グループ 判定拡張BOX -X
    /// 
    /// 自動描画グループで、可視判定の領域をモデルバウンディングBOXから拡張します。+X方向の拡張距離と、-X方向の拡張距離を別々に指定します
    f32 expandVolumeX_minus;
    
    /// 自動描画グループ 判定拡張BOX +Y
    /// 
    /// 自動描画グループで、可視判定の領域をモデルバウンディングBOXから拡張します。上方向の拡張距離と、下方向の拡張距離を別々に指定します
    f32 expandVolumeY_plus;
    
    /// 自動描画グループ 判定拡張BOX -Y
    /// 
    /// 自動描画グループで、可視判定の領域をモデルバウンディングBOXから拡張します。上方向の拡張距離と、下方向の拡張距離を別々に指定します
    f32 expandVolumeY_minus;
    
    /// 自動描画グループ 判定拡張BOX +Z
    /// 
    /// 自動描画グループで、可視判定の領域をモデルバウンディングBOXから拡張します。+Z方向の拡張距離と、-Z方向の拡張距離を別々に指定します
    f32 expandVolumeZ_plus;
    
    /// 自動描画グループ 判定拡張BOX -Z
    /// 
    /// 自動描画グループで、可視判定の領域をモデルバウンディングBOXから拡張します。+Z方向の拡張距離と、-Z方向の拡張距離を別々に指定します
    f32 expandVolumeZ_minus;
    
    /// カメラディザフェード最小距離(m)
    /// 
    /// カメラディザフェード最小距離。「カメラディザフェード最小距離」、「カメラディザフェード最大距離」の両方に「0.0」を設定するとカメラディザフェードが無効になります。
    f32 camDitherFadeMinDist;
    
    /// カメラディザフェード最大距離(m)
    /// 
    /// カメラディザフェード最大距離。「カメラディザフェード最小距離」、「カメラディザフェード最大距離」の両方に「0.0」を設定するとカメラディザフェードが無効になります。
    f32 camDitherFadeMaxDist;
    
    /// パディング
    dummy8 pad_7[16];
    
};

struct YEBIS_BANK {
    static constexpr const char* TYPE_NAME = "YEBIS_BANK";
    
    /// フィルタ有効化
    u32 enableFilter;
    
    /// 背景のクリアするときの色:R
    f32 clearBgColorR;
    
    /// 背景のクリアするときの色:G
    f32 clearBgColorG;
    
    /// 背景のクリアするときの色:B
    f32 clearBgColorB;
    
    /// 背景のクリアするときの色:A
    f32 clearBgColorA;
    
    /// 回転速度(スケール)または回転角度[rad]
    f32 rotateScale;
    
    /// 回転角度の全体のオフセット[deg]
    f32 rotateOffsetInDeg;
    
    /// 回転制御の種類
    s32 diarotType;
    
    /// グレアクオリティ
    u32 glareQuality;
    
    /// 被写界深度クオリティ
    u32 depthOfFieldQuality;
    
    /// トーンマップの露出設定
    f32 exposure;
    
    /// トーンマップのガンマ設定
    f32 gammma;
    
    /// トーンマップのタイプ設定
    s32 toneType;
    
    /// トーンマップの出力係数設定(HDR空間でどの程度の輝度までが最終LDR空間に有意に影響するか)
    f32 toneMapFactor;
    
    /// 簡易感光シミュレーション特性設定
    /// 
    /// 簡易敢行シミュレーション特性設定(全体的なコントラスト設定でSetToneMapType==GX_POST_PROCESS_TONE_TYPE_SENSITOMETRICのときに有効)
    f32 filmicContrast;
    
    /// 色調補正の色相(Hue)(0.0f～360.0f)[deg]
    f32 colorCorrectH;
    
    /// 色調補正の彩度(0.0f:彩度最低～1.0f:変化なし～>1.0f:彩度高)
    f32 colorCorrectS;
    
    /// 色調補正の明度(0.0f:暗～1.0f:変化なし～>1.0f:明)
    f32 colorCorrectV;
    
    /// 自動露出調整有効化
    u32 enableAutoExposure;
    
    /// 自動露出調整の遅延フレーム[frame]
    f32 exposureDelayFrame;
    
    /// 最小露出スケール(この値未満の露出にならないようにする)
    f32 toneExposureMin;
    
    /// 最大露出スケール(この値より大きい露出にならないようにする)
    f32 toneExposureMax;
    
    /// (明順応)調整の感度
    f32 adaptationSensitivity;
    
    /// (基準より露出を下げる方向への)調整の度合
    f32 adaptationScale;
    
    /// (明順応)調整速度の最大値(秒速2のべき乗単位)
    f32 adaptationSpeedLimit;
    
    /// (暗順応)調整の感度
    f32 darkAdaptationSensitivity;
    
    /// (基準より露出を上げる方向への)調整の度合
    f32 darkAdaptationScale;
    
    /// 暗順応調整速度の最大値(秒速 2 のべき乗単位)
    f32 darkAdaptationSpeedLimit;
    
    /// adaptationScaleおよびdarkAdaptationScaleの基準となる露出
    f32 lightDarkExposureBorder;
    
    /// 測光領域のサイズ(幅)をスクリーン幅を1.0とする比率で指定
    f32 meteringAreaWidth;
    
    /// 測光領域のサイズ(高さ)をスクリーン高を1.0とする比率で指定
    f32 meteringAreaHeight;
    
    /// 測光領域の開始位置(左端)をスクリーン幅を1.0とする正規化座標単位で指定
    f32 meteringAreaOffsetX;
    
    /// 測光領域の開始位置(上端)をスクリーン高を1.0とする正規化座標単位で指定
    f32 meteringAreaOffsetY;
    
    /// 自動露出調整の目標とする適正な画面の明るさ設定(0.0f<middleGray<=1.0f)
    f32 middleGray;
    
    /// 色収差有効化
    u32 enableChromaticAberration;
    
    /// 波長のサンプリング数
    s32 sampleNum;
    
    /// 倍率色収差の分散X
    f32 lateralDispersionX;
    
    /// 倍率色収差の分散Y
    f32 lateralDispersionY;
    
    /// 固定の色収差の分散X
    f32 uniformDispersionX;
    
    /// 固定の色収差の分散Y
    f32 uniformDispersionY;
    
    /// 周辺光量低下の強度
    f32 vignettePower;
    
    /// 画角による周辺光量低下への影響の強さ
    f32 vignetteFovDependence;
    
    /// グレアの形状
    s32 glareShape;
    
    /// グレアエフェクト全体の輝度
    f32 glareLuminance;
    
    /// 高輝度抽出の閾値
    f32 glareThreshold;
    
    /// 高輝度抽出後の非線形マッピングファクタ
    f32 glareRemapFactor;
    
    /// ブルームのガウスブラー画像のレベル数(-1～16)
    s32 bloomNumLevels;
    
    /// デフォルトのレンジに対するスケーリング
    f32 generationRangeScale;
    
    /// 光芒フィルタのサンプリング閾値
    f32 starFilterThreshold;
    
    /// 光芒の長さに対する画角の影響度
    f32 starLengthFovDependence;
    
    /// 光芒の柔らかさの度合い
    f32 starSoftness;
    
    /// ガウス半径のデフォルト値からのスケール
    f32 bloomGaussianRadiusScale;
    
    /// ブルーム結果の輝度に対して適用するガンマ値
    f32 bloomLuminanceGamma;
    
    /// 補間値 0.0でゆがみなし　1.0でゆがみあり
    f32 ghostConcentricDistortion;
    
    /// アナモルフィックレンズの有効、無効の設定
    u32 anamorphicLensFlareEnable;
    
    /// ゴーストではない部分の輝度スケールの設定
    f32 anamorphicFlareLuminance;
    
    /// ゴースト部分の輝度スケールの設定
    f32 anamorphicGhostScale;
    
    /// アナモルフィックレンズのグレア部分の色設定R
    f32 grareColorR;
    
    /// アナモルフィックレンズのグレア部分の色設定G
    f32 grareColorG;
    
    /// アナモルフィックレンズのグレア部分の色設定B
    f32 grareColorB;
    
    /// アナモルフィックレンズのゴースト部分の色設定R
    f32 ghostColorR;
    
    /// アナモルフィックレンズのゴースト部分の色設定G
    f32 ghostColorG;
    
    /// アナモルフィックレンズのゴースト部分の色設定B
    f32 ghostColorB;
    
    /// ライトシャフト有効化
    u32 enableLightShaft;
    
    /// ライトシャフト全体の色スケールR
    f32 lightShaftColorR;
    
    /// ライトシャフト全体の色スケールG
    f32 lightShaftColorG;
    
    /// ライトシャフト全体の色スケールB
    f32 lightShaftColorB;
    
    /// ライトシャフトを形作る光芒の長さスケール
    f32 lightShaftLength;
    
    /// ライトシャフトの種にグレアソースを含める強さ
    f32 lightShaftGlareRatio;
    
    /// ライトシャフトの種となる遮蔽マスクの最大距離(あるいは光源の距離)
    f32 lightShaftMaskDepthThereshold;
    
    /// 光源からの角度に従う減衰率
    f32 lightShaftAngleAttenuation;
    
    /// 遮蔽されていない部分にも光芒を発生させるための乱数マスクの強さ
    f32 lightShaftNoiseMask;
    
    /// 乱数マスクの細かさ
    f32 lightShaftNoiseFrequency;
    
    /// 光源の位置(横方向)をスクリーン座標系で指定
    f32 lightScreenPositionX;
    
    /// 光源の位置(縦方向)をスクリーン座標系で指定
    f32 lightScreenPositionY;
    
    /// スペクトル分散(着色)の強さ
    f32 diffractionRing;
    
    /// 内側の回折リング(主虹)の半径角度[rad]
    f32 diffractionRingRadius;
    
    /// 二番目以降のリングの減衰率
    f32 diffractionRingAttenuation;
    
    /// 波長による着色の方向を制御するパラメタ
    f32 diffractionRingSpectrumOrder;
    
    /// 回折リング(着色部分)以外のライトシャフトの色と輝度スケールR
    f32 diffractionRingOuterColorR;
    
    /// 回折リング(着色部分)以外のライトシャフトの色と輝度スケールG
    f32 diffractionRingOuterColorG;
    
    /// 回折リング(着色部分)以外のライトシャフトの色と輝度スケールB
    f32 diffractionRingOuterColorB;
    
    /// 被写界深度有効化
    u32 enableDepthOfField;
    
    /// 前景方向へのボケ画像レベル最大数
    s32 frontApertureNumLevels;
    
    /// 背景方向へのボケ画像レベル最大数
    s32 backApertureNumLevels;
    
    /// フォーカス(ピントの合う)距離
    f32 focusDistance;
    
    /// 絞りサイズ。Ｆ値を設定
    f32 aperture;
    
    /// 画角によって絞りを自動調整する場合の調整ファクタ
    f32 adaptiveApertureFactor;
    
    /// 画角によって絞りを自動調整する場合の基準となる画角
    f32 adaptiveApertureBaseFov;
    
    /// イメージセンサ(フィルムや CCD など)の物理的なサイズ(高さ)
    f32 imageSensorHeight;
    
    /// 被写界深度のエッジボケのタイプ
    s32 edgeQuarity;
    
    /// オートフォーカス有効化
    u32 enableAutoFocus;
    
    /// 目標の通り過ぎ現象の抑制
    u32 donotPassOverFocus;
    
    /// フォーカシングの感度
    f32 sensitivity;
    
    /// フォーカシング速度の最大値(秒速の焦点距離単位)
    f32 speedLimit;
    
    /// 遅延時間を指定する
    f32 focusDelayFrame;
    
    /// オートフォーカスされる最近距離(最も近いピント位置)
    f32 distanceRangeMin;
    
    /// オートフォーカスされる最遠距離(最も遠いピント位置)
    f32 distanceRangeMax;
    
    /// 測距点の位置(横方向)
    f32 focusScreenPositionX;
    
    /// 測距点の位置(縦方向)
    f32 focusScreenPositionY;
    
    /// フィードバックブラー有効化
    u32 enableFeedbackBlur;
    
    /// フィードバック画像(前フレームまでの残像)の重み(減衰率)
    f32 feedbackWeight;
    
    /// 特定の時間を基準に重みを指定する場合の単位時間
    f32 unitTimeInSeconds;
    
    /// アスペクト比を幅／縦で指定する
    f32 aspectRatio;
    
    /// ポストプロセスアンチエイリアス有効化
    u32 enablePostAntialias;
    
    /// モーションブラー有効化
    u32 enableMotionBlur;
    
    /// モーションブラーのタイプ設定
    s32 motionBlurCameraMode;
    
    /// ブラーの 1 フレームに対する時間比
    f32 blurTimeRatio;
    
    /// ブラーの最大の長さ
    f32 maxBlurLength;
    
    /// ブラーの 1 パス毎の基準サンプル数
    s32 numBaseSamples;
    
    /// ブラーの最大再帰回数
    s32 maxRecurrences;
    
    /// 基準となるサンプルピクセル間隔
    f32 sampleInterleaved;
    
    /// カメラの回転／透視移動の閾値(スクリーン座標系単位)
    f32 cameraRotationThreshold;
    
    /// カメラの平行移動の閾値(ワールド座標系単位)
    f32 cameraTranslationThreshold;
    
    /// カメラだけが動作していることを保障する
    u32 cameraOnlyMoved;
    
};

struct GEM_DROP_DOPING_PARAM_ST {
    static constexpr const char* TYPE_NAME = "GEM_DROP_DOPING_PARAM_ST";
    
    /// ランク_下限
    s32 rankMin;
    
    /// ランク_上限
    s32 rankMax;
    
    /// 正規分布平均値
    s32 normalDistributionAve;
    
    /// 正規分布標準偏差
    s32 normalDistributionSigma;
    
    /// スロットタイプＡ出現率
    f32 slotTypeRateA;
    
    /// スロットタイプＢ出現率
    f32 slotTypeRateB;
    
    /// スロットタイプＣ出現率
    f32 slotTypeRateC;
    
    /// スロットタイプＤ出現率
    f32 slotTypeRateD;
    
    /// スロットタイプＥ出現率
    f32 slotTypeRateE;
    
    /// スロットタイプＦ出現率
    f32 slotTypeRateF;
    
    /// ０：方向性出現率
    f32 directionalIdRate_0;
    
    /// １：方向性出現率
    f32 directionalIdRate_1;
    
    /// ２：方向性出現率
    f32 directionalIdRate_2;
    
    /// ３：方向性出現率
    f32 directionalIdRate_3;
    
    /// ４：方向性出現率
    f32 directionalIdRate_4;
    
    /// ５：方向性出現率
    f32 directionalIdRate_5;
    
    /// ６：方向性出現率
    f32 directionalIdRate_6;
    
    /// ７：方向性出現率
    f32 directionalIdRate_7;
    
};

struct CHARMAKEMENUTOP_PARAM_ST {
    static constexpr const char* TYPE_NAME = "CHARMAKEMENUTOP_PARAM_ST";
    
    /// 項目タイプ
    s32 CommandID;
    
    /// 項目テキストID
    s32 CaptionID;
    
    /// 顔パラムID
    s32 FaceParamID;
    
    /// テーブルID
    /// 
    /// タイプが「グリッド」の時は先頭リストアイテムのID、「カラー」の時はカラーパレット先頭のID
    s32 TableID;
    
    /// 表示条件
    s32 ViewCondition;
    
    /// プレビューモード
    s8 PreviewMode;
    
    /// 予約
    dummy8 reserved[11];
    
};

struct CLEAR_COUNT_CORRECT_PARAM_ST {
    static constexpr const char* TYPE_NAME = "CLEAR_COUNT_CORRECT_PARAM_ST";
    
    /// 《最大HP倍率[%]》
    /// 
    /// 最大HP倍率[%]
    f32 MaxHpRate;
    
    /// 《最大MP倍率[%]》
    /// 
    /// 最大MP倍率[%]
    f32 MaxMpRate;
    
    /// 《最大スタミナ倍率[%]》
    /// 
    /// 最大スタミナ倍率[%]
    f32 MaxStaminaRate;
    
    /// 《物理攻撃力倍率》
    /// 
    /// 物理攻撃力倍率
    f32 PhysicsAttackRate;
    
    /// 《斬撃攻撃力倍率》
    /// 
    /// 斬撃攻撃力倍率
    f32 SlashAttackRate;
    
    /// 《軽打攻撃力倍率》
    /// 
    /// 軽打攻撃力倍率
    f32 LightHitAttackRate;
    
    /// 《刺突攻撃力倍率》
    /// 
    /// 刺突攻撃力倍率
    f32 ThrustAttackRate;
    
    /// 《無属性攻撃力倍率》
    /// 
    /// 無属性攻撃力倍率
    f32 NeturalAttackRate;
    
    /// 《魔法攻撃力倍率》
    /// 
    /// 魔法攻撃力倍率
    f32 MagicAttackRate;
    
    /// 《炎攻撃力倍率》
    /// 
    /// 炎攻撃力倍率
    f32 FireAttackRate;
    
    /// 《電撃攻撃力倍率》
    /// 
    /// 電撃攻撃力倍率
    f32 ThunderAttackRate;
    
    /// 《闇攻撃力倍率》
    /// 
    /// 闇攻撃力倍率
    f32 DarkAttackRate;
    
    /// 《物理防御力倍率》
    /// 
    /// 物理防御力倍率
    f32 PhysicsDefenseRate;
    
    /// 《魔法防御力倍率》
    /// 
    /// 魔法防御力倍率
    f32 MagicDefenseRate;
    
    /// 《炎防御力倍率》
    /// 
    /// 炎防御力倍率
    f32 FireDefenseRate;
    
    /// 《電撃防御力倍率》
    /// 
    /// 電撃防御力倍率
    f32 ThunderDefenseRate;
    
    /// 《闇防御力倍率》
    /// 
    /// 闇防御力倍率
    f32 DarkDefenseRate;
    
    /// 《スタミナ攻撃力倍率》
    /// 
    /// スタミナ攻撃力倍率
    f32 StaminaAttackRate;
    
    /// 《所持ソウル率》
    /// 
    /// 所持ソウル率
    f32 SoulRate;
    
    /// 《毒耐性変化倍率》
    /// 
    /// 毒耐性変化倍率
    f32 PoisionResistRate;
    
    /// 《疫病耐性変化倍率》
    /// 
    /// 疫病耐性変化倍率
    f32 DeseaseResistRate;
    
    /// 《出血耐性変化倍率》
    /// 
    /// 出血耐性変化倍率
    f32 BloodResistRate;
    
    /// 《呪耐性変化倍率》
    /// 
    /// 呪耐性変化倍率
    f32 CurseResistRate;
    
    /// 《冷気耐性変化倍率》
    /// 
    /// 冷気耐性変化倍率
    f32 FreezeResistRate;
    
    /// 《出血ダメージ補正倍率》
    /// 
    /// 出血ダメージ補正倍率
    f32 BloodDamageRate;
    
    /// 《SAダメージ補正倍率》
    /// 
    /// SAダメージ補正倍率
    f32 SuperArmorDamageRate;
    
    /// 《冷気ダメージ補正倍率》
    /// 
    /// 冷気ダメージ補正倍率
    f32 FreezeDamageRate;
    
    /// 《忍殺攻撃力倍率》
    /// 
    /// 忍殺攻撃力倍率
    f32 NinsatsuAttackRate;
    
    /// 《重打攻撃力倍率》
    /// 
    /// 重打攻撃力倍率
    f32 HeavyHitAttackRate;
    
    /// 《対地攻撃力倍率》
    /// 
    /// 対地攻撃力倍率
    f32 AntiGroundAttackRate;
    
    /// 《対空攻撃力倍率》
    /// 
    /// 対空攻撃力倍率
    f32 AntiAirAttackRate;
    
    /// 《軽射攻撃力倍率》
    /// 
    /// 軽射攻撃力倍率
    f32 LightShootAttackRate;
    
    /// 《属性A攻撃力倍率》
    /// 
    /// 属性A攻撃力倍率
    f32 AttriAAttackRate;
    
    /// 《属性B攻撃力倍率》
    /// 
    /// 属性B攻撃力倍率
    f32 AttriBAttackRate;
    
    /// 《属性C攻撃力倍率》
    /// 
    /// 属性C攻撃力倍率
    f32 AttriCAttackRate;
    
    /// 《所持スキル経験値率》
    /// 
    /// 所持スキル経験値率
    f32 SkillPointRate;
    
    /// 《スタミナ回復速度変化倍率》
    /// 
    /// スタミナ回復速度倍率
    f32 StaminaRevoverSpeedRate;
    
    /// pad
    /// 
    /// パディング
    dummy8 pad1[12];
    
};

struct NETWORK_AREA_PARAM_ST {
    static constexpr const char* TYPE_NAME = "NETWORK_AREA_PARAM_ST";
    
    /// セルサイズX
    f32 cellSizeX;
    
    /// セルサイズY
    f32 cellSizeY;
    
    /// セルサイズZ
    f32 cellSizeZ;
    
    /// セルオフセットX
    f32 cellOffsetX;
    
    /// セルオフセットY
    f32 cellOffsetY;
    
    /// セルオフセットZ
    f32 cellOffsetZ;
    
    /// 血痕・死亡幻影有効
    u8 enableBloodstain : 1;
    
    /// 血文字有効
    u8 enableBloodMessage : 1;
    
    /// 幻影有効
    u8 enableGhost : 1;
    
    /// マルチプレイ有効
    u8 enableMultiPlay : 1;
    
    /// 指輪検索有効
    /// 
    /// 指輪検索の検索対象か？（鐘守灰霊・救援青霊として呼ばれるエリア）
    u8 enableRingSearch : 1;
    
    /// 乱入検索有効
    /// 
    /// 乱入検索の対象か？
    u8 enableBreakInSearch : 1;
    
    /// ダミー
    dummy8 dummy[3];
    
};

struct OBJ_ACT_PARAM_ST {
    static constexpr const char* TYPE_NAME = "OBJ_ACT_PARAM_ST";
    
    /// アクション有効時のMsgID
    /// 
    /// アクションが有効時に表示するメニューのMsgIDです。
    s32 actionEnableMsgId;
    
    /// アクション失敗時のMsgID
    /// 
    /// アクションが失敗時に表示するメニューのMsgIDです。
    s32 actionFailedMsgId;
    
    /// 特殊条件パス用イベントフラグ
    /// 
    /// 特殊条件を無条件パスするためのイベントフラグ.
    s32 spQualifiedPassEventFlag;
    
    /// プレイヤのアニメID0
    /// 
    /// プレイヤーキャラのアクション時のアニメIDです。
    u32 playerAnimId;
    
    /// キャラのアニメID0
    /// 
    /// 敵などのアクション時のアニメID
    u32 chrAnimId;
    
    /// アクションの有効距離[cm]
    /// 
    /// アクションの有効距離です。
    u16 validDist;
    
    /// 特殊条件のID
    u16 spQualifiedId;
    
    /// 特殊条件のID 2
    /// 
    /// 特殊条件のIDその2
    u16 spQualifiedId2;
    
    /// オブジェのダミポリID0
    /// 
    /// オブジェクトのアクション位置となるダミポリIDです
    u8 objDummyId;
    
    /// イベントキックを同期させるか
    /// 
    /// ObjAct実行判定で使用されるイベントを同期させるか。基本×に設定する。アクターが重要ではない場合のみ○に設定しても良い。
    u8 isEventKickSync;
    
    /// オブジェのアニメID0
    /// 
    /// オブジェクトのアクション時のアニメＩＤです。
    u32 objAnimId;
    
    /// プレイヤのアクション有効角度
    /// 
    /// プレイヤのアクションの有効角度です。プレイヤの向きベクトルとオブジェへの方向ベクトルの有効角度差
    u8 validPlayerAngle;
    
    /// 特殊条件のタイプ
    /// 
    /// 特殊条件の種類
    u8 spQualifiedType;
    
    /// 特殊条件のタイプ2
    /// 
    /// 特殊条件の種類2
    u8 spQualifiedType2;
    
    /// オブジェのアクション有効角度です。オブジェのアクションベクトルとキャラベクトルの有効角度差
    u8 validObjAngle;
    
    /// キャラの吸着タイプ
    /// 
    /// オブジェアクション時のキャラの吸着方法です
    u8 chrSorbType;
    
    /// イベント発動タイミング
    /// 
    /// イベントの実行タイミング
    u8 eventKickTiming;
    
    /// pad0
    dummy8 pad1[2];
    
    /// アクションボタンパラメータID
    s32 actionButtonParamId;
    
    /// pad0
    dummy8 pad2[4];
    
};

struct LENS_FLARE_EX_BANK {
    static constexpr const char* TYPE_NAME = "LENS_FLARE_EX_BANK";
    
    /// 光源X角度[deg]
    /// 
    /// 光源のX角度
    s16 lightDegRotX;
    
    /// 光源Y角度[deg]
    /// 
    /// 光源のY角度
    s16 lightDegRotY;
    
    /// 色R
    /// 
    /// レンズフレア乗算色
    s16 colR;
    
    /// 色G
    /// 
    /// レンズフレア乗算色
    s16 colG;
    
    /// 色B
    /// 
    /// レンズフレア乗算色
    s16 colB;
    
    /// 色RGB倍率[％]
    /// 
    /// レンズフレア乗算色
    s16 colA;
    
    /// 光源距離[m]
    /// 
    /// 光源距離
    f32 lightDist;
    
};

struct CS_REFLECTION_QUALITY_DETAIL {
    static constexpr const char* TYPE_NAME = "CS_REFLECTION_QUALITY_DETAIL";
    
    /// 反射有効
    u8 enabled;
    
    /// ローカルライト有効
    u8 localLightEnabled;
    
    /// ローカルライト強制有効
    u8 localLightForceEnabled;
    
    dummy8 dmy[1];
    
    /// 解像度スケール
    u32 resolutionDivider;
    
    /// SSR有効
    u8 ssrEnabled;
    
    /// ガウスぼかしの許可
    u8 ssrGaussianBlurEnabled;
    
    /// dmy
    dummy8 dmy2[2];
    
    /// 計算距離スケール
    f32 ssrDepthRejectThresholdScale;
    
    /// レイトレースステップ係数（SSRパラメータに乗算）
    f32 ssrRayTraceStepScale;
    
    /// フェード角度バイアス。小さくすると高品質
    f32 ssrFadeToViewerBias;
    
    /// フレネルリジェクトバイアス。小さくすると高品質
    f32 ssrFresnelRejectBias;
    
};

struct COOL_TIME_PARAM_ST {
    static constexpr const char* TYPE_NAME = "COOL_TIME_PARAM_ST";
    
    /// 制限時間（協力霊数0）
    /// 
    /// 制限時間[sec]（協力霊数0）
    f32 limitationTime_0;
    
    /// 監視時間（協力霊数0）
    /// 
    /// 監視時間[sec]（協力霊数0）
    f32 observeTime_0;
    
    /// 制限時間（協力霊数1）
    /// 
    /// 制限時間[sec]（協力霊数1）
    f32 limitationTime_1;
    
    /// 監視時間（協力霊数1）
    /// 
    /// 監視時間[sec]（協力霊数1）
    f32 observeTime_1;
    
    /// 制限時間（協力霊数2）
    /// 
    /// 制限時間[sec]（協力霊数2）
    f32 limitationTime_2;
    
    /// 監視時間（協力霊数2）
    /// 
    /// 監視時間[sec]（協力霊数2）
    f32 observeTime_2;
    
    /// 制限時間（協力霊数3）
    /// 
    /// 制限時間[sec]（協力霊数3）
    f32 limitationTime_3;
    
    /// 監視時間（協力霊数3）
    /// 
    /// 監視時間[sec]（協力霊数3）
    f32 observeTime_3;
    
};

struct LIGHT_BANK {
    static constexpr const char* TYPE_NAME = "LIGHT_BANK";
    
    /// X角度
    /// 
    /// 平行光源：０
    s16 degRotX_0;
    
    /// Ｙ角度
    /// 
    /// 平行光源：０
    s16 degRotY_0;
    
    /// Ｒ
    /// 
    /// 平行光源：０
    s16 colR_0;
    
    /// Ｇ
    /// 
    /// 平行光源：０
    s16 colG_0;
    
    /// Ｂ
    /// 
    /// 平行光源：０
    s16 colB_0;
    
    /// RGB倍率[％]
    /// 
    /// 平行光源：０
    s16 colA_0;
    
    /// X角度
    /// 
    /// 平行光源：１
    s16 degRotX_1;
    
    /// Ｙ角度
    /// 
    /// 平行光源：１
    s16 degRotY_1;
    
    /// Ｒ
    /// 
    /// 平行光源：１
    s16 colR_1;
    
    /// Ｇ
    /// 
    /// 平行光源：１
    s16 colG_1;
    
    /// Ｂ
    /// 
    /// 平行光源：１
    s16 colB_1;
    
    /// RGB倍率[％]
    /// 
    /// 平行光源：１
    s16 colA_1;
    
    /// X角度
    /// 
    /// 平行光源：２
    s16 degRotX_2;
    
    /// Ｙ角度
    /// 
    /// 平行光源：２
    s16 degRotY_2;
    
    /// Ｒ
    /// 
    /// 平行光源：２
    s16 colR_2;
    
    /// Ｇ
    /// 
    /// 平行光源：２
    s16 colG_2;
    
    /// Ｂ
    /// 
    /// 平行光源：２
    s16 colB_2;
    
    /// RGB倍率[％]
    /// 
    /// 平行光源：２
    s16 colA_2;
    
    /// Ｒ
    /// 
    /// アンビエント上半球
    s16 colR_u;
    
    /// Ｇ
    /// 
    /// アンビエント上半球
    s16 colG_u;
    
    /// Ｂ
    /// 
    /// アンビエント上半球
    s16 colB_u;
    
    /// RGB倍率[％]
    /// 
    /// アンビエント上半球
    s16 colA_u;
    
    /// Ｒ
    /// 
    /// アンビエント下半球
    s16 colR_d;
    
    /// Ｇ
    /// 
    /// アンビエント下半球
    s16 colG_d;
    
    /// Ｂ
    /// 
    /// アンビエント下半球
    s16 colB_d;
    
    /// RGB倍率[％]
    /// 
    /// アンビエント下半球
    s16 colA_d;
    
    /// X角度
    /// 
    /// 平行光源：スペキュラ
    s16 degRotX_s;
    
    /// Ｙ角度
    /// 
    /// 平行光源：スペキュラ
    s16 degRotY_s;
    
    /// Ｒ
    /// 
    /// 平行光源：スペキュラ
    s16 colR_s;
    
    /// Ｇ
    /// 
    /// 平行光源：スペキュラ
    s16 colG_s;
    
    /// Ｂ
    /// 
    /// 平行光源：スペキュラ
    s16 colB_s;
    
    /// RGB倍率[％]
    /// 
    /// 平行光源：スペキュラ
    s16 colA_s;
    
    /// Ｒ
    /// 
    /// 環境光源：ディフューズ乗算色
    s16 envDif_colR;
    
    /// Ｇ
    /// 
    /// 環境光源：ディフューズ乗算色
    s16 envDif_colG;
    
    /// Ｂ
    /// 
    /// 環境光源：ディフューズ乗算色
    s16 envDif_colB;
    
    /// RGB倍率[％]
    /// 
    /// 環境光源：ディフューズ乗算色
    s16 envDif_colA;
    
    /// Ｒ
    /// 
    /// 環境光源：スペキュラ乗算色
    s16 envSpc_colR;
    
    /// Ｇ
    /// 
    /// 環境光源：スペキュラ乗算色
    s16 envSpc_colG;
    
    /// Ｂ
    /// 
    /// 環境光源：スペキュラ乗算色
    s16 envSpc_colB;
    
    /// RGB倍率[％]
    /// 
    /// 環境光源：スペキュラ乗算色
    s16 envSpc_colA;
    
    /// 環境ディフューズ
    /// 
    /// 環境光源：ディフューズテクスチャID
    s16 envDif;
    
    /// 環境スペキュラ０
    /// 
    /// 環境光源：スペキュラ０テクスチャID
    s16 envSpc_0;
    
    /// 環境スペキュラ１
    /// 
    /// 環境光源：スペキュラ１テクスチャID
    s16 envSpc_1;
    
    /// 環境スペキュラ２
    /// 
    /// 環境光源：スペキュラ２テクスチャID
    s16 envSpc_2;
    
    /// 環境スペキュラ３
    /// 
    /// 環境光源：スペキュラ３テクスチャID
    s16 envSpc_3;
    
    /// パディング
    dummy8 pad[2];
    
};

struct PHANTOM_PARAM_ST {
    static constexpr const char* TYPE_NAME = "PHANTOM_PARAM_ST";
    
    /// A
    /// 
    /// エッジ色Aです。
    f32 edgeColorA;
    
    /// A
    /// 
    /// 正面色Aです。
    f32 frontColorA;
    
    /// A
    /// 
    /// ディフューズ乗算色Aです。
    f32 diffMulColorA;
    
    /// A
    /// 
    /// スペキュラ乗算色Aです。
    f32 specMulColorA;
    
    /// A
    /// 
    /// ライト色Aです。
    f32 lightColorA;
    
    /// R
    /// 
    /// エッジ色Rです。
    u8 edgeColorR;
    
    /// G
    /// 
    /// エッジ色Gです。
    u8 edgeColorG;
    
    /// B
    /// 
    /// エッジ色Bです。
    u8 edgeColorB;
    
    /// R
    /// 
    /// 正面色Rです。
    u8 frontColorR;
    
    /// G
    /// 
    /// 正面色Gです。
    u8 frontColorG;
    
    /// B
    /// 
    /// 正面色Bです。
    u8 frontColorB;
    
    /// R
    /// 
    /// ディフューズ乗算色Rです。
    u8 diffMulColorR;
    
    /// G
    /// 
    /// ディフューズ乗算色Gです。
    u8 diffMulColorG;
    
    /// B
    /// 
    /// ディフューズ乗算色Bです。
    u8 diffMulColorB;
    
    /// R
    /// 
    /// スペキュラ乗算色Rです。
    u8 specMulColorR;
    
    /// G
    /// 
    /// スペキュラ乗算色Gです。
    u8 specMulColorG;
    
    /// B
    /// 
    /// スペキュラ乗算色Bです。
    u8 specMulColorB;
    
    /// R
    /// 
    /// ライト色Rです。
    u8 lightColorR;
    
    /// G
    /// 
    /// ライト色Gです。
    u8 lightColorG;
    
    /// B
    /// 
    /// ライト色Bです。
    u8 lightColorB;
    
    /// 予備
    dummy8 reserve[1];
    
    /// α
    /// 
    /// 全体の透過度です。
    f32 alpha;
    
    /// ブレンド率です。
    f32 blendRate;
    
    /// α種類
    /// 
    /// αブレンドの種類です。
    u8 blendType;
    
    /// エッジ色減算を行うかです。
    u8 isEdgeSubtract;
    
    /// 正面色減算を行うかです。
    u8 isFrontSubtract;
    
    /// 2passを行わないかです。
    u8 isNo2Pass;
    
};

struct RAGDOLL_PARAM_ST {
    static constexpr const char* TYPE_NAME = "RAGDOLL_PARAM_ST";
    
    /// ヒエラルキーゲイン
    /// 
    /// 低くすると元のポーズに近づき、大きくするとぐにゃぐにゃになる。
    f32 hierarchyGain;
    
    /// 速度減衰
    /// 
    /// ラグドールの移動スピードの減速率。0に近づくとゆっくり戻り、1に近づくとぱっと戻る
    f32 velocityDamping;
    
    /// 加速度ゲイン
    /// 
    /// リジッドの加速度の調整パラメータ。低くすると動きが柔らかくなり、高くすると硬くなる。加速度ゲインよりも低い値にするらしい。
    f32 accelGain;
    
    /// 速度ゲイン
    /// 
    /// リジッドの速度の調整パラメータ。低くすると動きが柔らかくなり、高くすると硬くなる。速度ゲインよりも低い値にするらしい。
    f32 velocityGain;
    
    /// 位置ゲイン
    /// 
    /// リジッドの移動位置の調整パラメータ。低くすると動きが柔らかくなり、高くすると硬くなる。
    f32 positionGain;
    
    /// 最大速度
    /// 
    /// リジッドの最大移動速度
    f32 maxLinerVelocity;
    
    /// 最大角速度
    /// 
    /// リジッドの最大角速度
    f32 maxAngularVelocity;
    
    /// スナップゲイン
    /// 
    /// 元のポーズに近づけるための調整値。位置ゲインと似た効果
    f32 snapGain;
    
    /// 動くか
    /// 
    /// ダメージラグドール時に動くか
    u8 enable;
    
    /// 部位あたりマスク番号。-1:マスク無効
    s8 partsHitMaskNo;
    
    /// パディング
    dummy8 pad[14];
    
};

struct CS_SHADOW_QUALITY_DETAIL {
    static constexpr const char* TYPE_NAME = "CS_SHADOW_QUALITY_DETAIL";
    
    /// シャドウが有効
    u8 enabled;
    
    /// 許可される最大のフィルタ品質
    u8 maxFilterLevel;
    
    dummy8 dmy[2];
    
    /// 設定されたシャドウマップ解像度のスケーラ
    u32 textureSizeScaler;
    
    /// 設定されたシャドウマップ解像度を除算
    u32 textureSizeDivider;
    
    /// 解像度最小
    /// 
    /// 解像度をクランプ
    u32 textureMinSize;
    
    /// 解像度最大
    /// 
    /// 解像度をクランプ。カスケード毎の解像度判定になります
    u32 textureMaxSize;
    
    /// ブラーカウントバイアス(設定されたカウントのバイアス。0で変更なし)
    s32 blurCountBias;
    
};

struct CS_HIT_MATERIAL_SPECIAL_SETTING_PARAM_ST {
    static constexpr const char* TYPE_NAME = "CS_HIT_MATERIAL_SPECIAL_SETTING_PARAM_ST";
    
    u8 GroundMaterialType;
    
    u8 Unk1;
    
    dummy8 pad1[2];
    
    s32 SpEffectId;
    
};

struct AI_SOUND_PARAM_ST {
    static constexpr const char* TYPE_NAME = "AI_SOUND_PARAM_ST";
    
    /// 音半径[m]
    /// 
    /// AI音の半径
    f32 radius;
    
    /// 消滅時間[秒]
    /// 
    /// AI音が残る時間
    f32 lifeFrame;
    
    /// 特殊効果からの影響を受けるか
    /// 
    /// 特殊効果の”音半径倍率”の影響を受けるかどうか
    u8 bSpEffectEnable;
    
    /// 種別
    /// 
    /// AI音の種別
    u8 type;
    
    /// 対象：●敵対
    u8 opposeTarget : 1;
    
    /// 対象：○味方
    u8 friendlyTarget : 1;
    
    /// 対象：自分
    u8 selfTarget : 1;
    
    /// 同じ敵配置グループでだけ聞こえるか
    u8 bRestrictSamePlacementGroup : 1;
    
    /// 仲間呼びか
    /// 
    /// 仲間を呼ぶための音か。自分が敵ターゲットを持っている状態でのみ発生します。
    u8 bCallFriend : 1;
    
    /// 音タイプ
    u8 rank;
    
    /// パッド
    /// 
    /// pad
    dummy8 pad1[20];
    
};

struct KNOCKBACK_PARAM_ST {
    static constexpr const char* TYPE_NAME = "KNOCKBACK_PARAM_ST";
    
    /// 極小ダメージ_速度維持時間[s]
    /// 
    /// 極小ダメージアニメの時に使用される維持時間を設定
    f32 damage_Min_ContTime;
    
    /// 小ダメージ_速度維持時間[s]
    /// 
    /// 小ダメージアニメの時に使用される維持時間を設定
    f32 damage_S_ContTime;
    
    /// 中ダメージ_速度維持時間[s]
    /// 
    /// 中ダメージアニメの時に使用される維持時間を設定
    f32 damage_M_ContTime;
    
    /// 大ダメージ_速度維持時間[s]
    /// 
    /// 大ダメージアニメの時に使用される維持時間を設定
    f32 damage_L_ContTime;
    
    /// 小吹っ飛び_速度維持時間[s]
    /// 
    /// 小吹っ飛びダメージアニメの時に使用される維持時間を設定
    f32 damage_BlowS_ContTime;
    
    /// 大吹っ飛び_速度維持時間[s]
    /// 
    /// 大吹っ飛びダメージアニメの時に使用される維持時間を設定
    f32 damage_BlowM_ContTime;
    
    /// 叩きつけ_速度維持時間[s]
    /// 
    /// 叩きつけダメージアニメの時に使用される維持時間を設定
    f32 damage_Strike_ContTime;
    
    /// 打ち上げ_速度維持時間[s]
    /// 
    /// 打ち上げダメージアニメの時に使用される維持時間を設定
    f32 damage_Uppercut_ContTime;
    
    /// プッシュ_速度維持時間[s]
    /// 
    /// プッシュダメージアニメの時に使用される維持時間を設定
    f32 damage_Push_ContTime;
    
    /// ブレス_速度維持時間[s]
    /// 
    /// ブレスダメージアニメの時に使用される維持時間を設定
    f32 damage_Breath_ContTime;
    
    /// ヘッドショット_速度維持時間[s]
    /// 
    /// ヘッドショットダメージアニメの時に使用される維持時間を設定
    f32 damage_HeadShot_ContTime;
    
    /// ガード受け小_速度維持時間[s]
    /// 
    /// ガード受け小アニメの時に使用される維持時間を設定
    f32 guard_S_ContTime;
    
    /// ガード受け大_速度維持時間[s]
    /// 
    /// ガード受け大アニメの時に使用される維持時間を設定
    f32 guard_L_ContTime;
    
    /// ガード受け特大_速度維持時間[s]
    /// 
    /// ガード受け特大アニメの時に使用される維持時間を設定
    f32 guard_LL_ContTime;
    
    /// ガードくずされ_速度維持時間[s]
    /// 
    /// ガードくずされアニメの時に仕様される維持時間を設定
    f32 guardBrake_ContTime;
    
    /// 極小ダメージ_減速時間[s]
    /// 
    /// 極小ダメージアニメの時に使用される減速時間を設定
    f32 damage_Min_DecTime;
    
    /// 小ダメージ_減速時間[s]
    /// 
    /// 小ダメージアニメの時に使用される減速時間を設定
    f32 damage_S_DecTime;
    
    /// 中ダメージ_減速時間[s]
    /// 
    /// 中ダメージアニメの時に使用される減速時間を設定
    f32 damage_M_DecTime;
    
    /// 大ダメージ_減速時間[s]
    /// 
    /// 大ダメージアニメの時に使用される減速時間を設定
    f32 damage_L_DecTime;
    
    /// 小吹っ飛び_減速時間[s]
    /// 
    /// 小吹っ飛びダメージアニメの時に使用される減速時間を設定
    f32 damage_BlowS_DecTime;
    
    /// 大吹っ飛び_減速時間[s]
    /// 
    /// 大吹っ飛びダメージアニメの時に使用される減速時間を設定
    f32 damage_BlowM_DecTime;
    
    /// 叩きつけ_減速時間[s]
    /// 
    /// 叩きつけダメージアニメの時に使用される減速時間を設定
    f32 damage_Strike_DecTime;
    
    /// 打ち上げ_減速時間[s]
    /// 
    /// 打ち上げダメージアニメの時に使用される減速時間を設定
    f32 damage_Uppercut_DecTime;
    
    /// プッシュ_減速時間[s]
    /// 
    /// プッシュダメージアニメの時に使用される減速時間を設定
    f32 damage_Push_DecTime;
    
    /// ブレス_減速時間[s]
    /// 
    /// ブレスダメージアニメの時に使用される減速時間を設定
    f32 damage_Breath_DecTime;
    
    /// ヘッドショット_減速時間[s]
    /// 
    /// ヘッドショットダメージアニメの時に使用される減速時間を設定
    f32 damage_HeadShot_DecTime;
    
    /// ガード受け小_減速時間[s]
    /// 
    /// ガード受け小アニメの時に使用される減速時間を設定
    f32 guard_S_DecTime;
    
    /// ガード受け大_減速時間[s]
    /// 
    /// ガード受け大アニメの時に使用される減速時間を設定
    f32 guard_L_DecTime;
    
    /// ガード受け特大_減速時間[s]
    /// 
    /// ガード受け特大アニメの時に使用される減速時間を設定
    f32 guard_LL_DecTime;
    
    /// ガードくずされ_減速時間[s]
    /// 
    /// ガードくずされアニメの時に仕様される減速時間を設定
    f32 guardBrake_DecTime;
    
    /// pading
    dummy8 pad[8];
    
};

struct GRASS_LOD_RANGE_PARAM_ST {
    static constexpr const char* TYPE_NAME = "GRASS_LOD_RANGE_PARAM_ST";
    
    /// LOD0 - 距離
    f32 LOD0_range;
    
    /// LOD0 - 遊び
    f32 LOD0_play;
    
    /// LOD１ - 距離
    f32 LOD1_range;
    
    /// LOD１ - 遊び
    f32 LOD1_play;
    
    /// LOD２ - 距離
    f32 LOD2_range;
    
    /// LOD２ - 遊び
    f32 LOD2_play;
    
    /// 影描画距離
    f32 shadow_range;
    
};

struct NPC_THINK_PARAM_ST {
    static constexpr const char* TYPE_NAME = "NPC_THINK_PARAM_ST";
    
    /// ロジックスクリプトID
    /// 
    /// スクリプトで作成したロジックのIDを設定します。
    s32 logicId;
    
    /// 戦闘ゴールID
    s32 battleGoalID;
    
    /// 視覚_距離[m] （認識）
    /// 
    /// 視覚による索敵範囲.（認識）
    u16 eye_dist_perceive;
    
    /// 視覚_上方向[deg] （認識）
    /// 
    /// 視野範囲の上方向角度（deg）（認識）
    u8 eye_ang_upper_perceive;
    
    /// 視覚_下方向[deg] （認識）
    /// 
    /// 視野範囲の下方向角度（deg）（認識）
    u8 eye_ang_bottom_perceive;
    
    /// 視覚_左方向[deg] （認識）
    /// 
    /// 視野範囲の左方向角度（deg）（認識）
    u8 eye_ang_left_perceive;
    
    /// 視覚_右方向[deg] （認識）
    /// 
    /// 視野範囲の右方向角度（deg）（認識）
    u8 eye_ang_right_perceive;
    
    /// 視覚_発生距離[m] （認識）
    /// 
    /// キャラの中心からこの距離後ろが視角開始位置になる（認識）
    u16 eye_BackOffsetDist_perceive;
    
    /// 視覚_カット距離[m] （認識）
    /// 
    /// 視角発生位置からこの距離は認識しない（認識）
    u16 eye_BeginDist_perceive;
    
    /// 視覚_死体視覚倍率[%]
    /// 
    /// 死体索敵時の索敵範囲　"視覚_距離[m] （通常）"に対する倍率
    u16 corpse_eye_dist_rate;
    
    /// 死体ターゲット忘れる時間[sec]
    /// 
    /// 死体ターゲット忘れる時間。
    f32 CorpseTargetForgetTime;
    
    /// 敵壁接触時のBackHome時間[sec]
    /// 
    /// ブロックをさえぎる敵壁に接触したとき、BackToHomeゴールの寿命
    f32 BackHomeLife_OnHitEneWal;
    
    /// 視覚ターゲット忘れる時間[sec]
    /// 
    /// 視覚ターゲット忘れる時間。
    f32 SightTargetForgetTime;
    
    /// 動けなくなったときに行うEzState番号
    /// 
    /// 破壊可能なオブジェクトによって動きが止まっている場合、自動的に実行する行動。
    s32 idAttackCannotMove;
    
    /// 聴覚_距離[m]
    /// 
    /// 聴覚による索敵範囲.。
    f32 ear_dist;
    
    /// 仲間呼び 応答アクションアニメID
    /// 
    /// 応答する時のアニメID(EzStateAnimID)
    s32 callHelp_ActionAnimId;
    
    /// 仲間呼び_仲間呼びアクションID
    /// 
    /// 仲間呼ぶときのアクションID(EzStateAnimID)
    s32 callHelp_CallActionId;
    
    /// 視覚_距離[m] （通常）
    /// 
    /// 視覚による索敵範囲.（通常）
    u16 eye_dist_normal;
    
    /// 帰宅時：ガードアクションID
    /// 
    /// 帰宅時、ターゲットの方を見ている時に行うアクション番号（ガードで使う想定、0で無効）
    u16 BackHome_GuardActId;
    
    /// 聴覚　影響カット距離[m]
    /// 
    /// 音源のサイズを小さくする距離。この距離未満の音が聞こえなくなります。
    u16 ear_soundcut_dist;
    
    /// 嗅覚_距離[m]
    /// 
    /// 嗅覚による索敵範囲.
    u16 nose_dist;
    
    /// 何があっても帰宅する距離[m]
    /// 
    /// COMMON_SetBattleActLogicの引き数
    u16 maxBackhomeDist;
    
    /// 戦闘しつつ帰宅する距離[m]
    /// 
    /// COMMON_SetBattleActLogicの引き数
    u16 backhomeDist;
    
    /// 巣に帰るのをあきらめて戦闘する距離[m]
    /// 
    /// COMMON_SetBattleActLogicの引き数
    u16 backhomeBattleDist;
    
    /// 敵を意識しているときの非戦闘行動時間[sec]
    /// 
    /// COMMON_SetBattleActLogicの引き数
    u16 nonBattleActLife;
    
    /// 帰宅時：ターゲットを見ている時間[sec]
    u16 BackHome_LookTargetTime;
    
    /// 帰宅時：ターゲットを見ている距離[m]
    u16 BackHome_LookTargetDist;
    
    /// 音ターゲット忘れる時間[sec]
    /// 
    /// 音ターゲット忘れる時間。
    f32 SoundTargetForgetTime;
    
    /// 戦闘開始距離[m]
    u16 BattleStartDist;
    
    /// 仲間呼び 自分の仲間グループID
    /// 
    /// 自分の仲間グループID
    u16 callHelp_MyPeerId;
    
    /// 仲間呼び 呼ぶ仲間グループID
    /// 
    /// 仲間を呼ぶ対象となる仲間グループID
    u16 callHelp_CallPeerId;
    
    /// ダメージ影響率[％]
    /// 
    /// ダメージ影響率取得(ターゲットシステム評価情報)
    u16 targetSys_DmgEffectRate;
    
    /// チーム攻撃影響力[0-100]
    /// 
    /// チーム内の同時攻撃人数を決めるための値。値を大きくすると、同時に攻撃参加できる人数が少なくなる。
    u8 TeamAttackEffectivity;
    
    /// パスから外れ続けている割り込みを使用するか
    /// 
    /// 一定時間にパスから外れてリパスした回数が規定値を超えるとAIScriptに割り込みを発生させるか
    u8 useWanderedOffPathInterrupt;
    
    /// パディング
    dummy8 pad8[1];
    
    /// 暗闇影響しない
    /// 
    /// 視覚_距離、戦闘開始距離が暗闇による影響を受けないようにするか
    u8 disableDark;
    
    /// ゴールアクション：警戒状態/気配位置
    /// 
    /// ゴールアクション：ターゲットが気配位置の感知により警戒状態になった
    u8 goalAction_ToCautionIndicationTarget;
    
    /// 仲間呼び_ターゲットとの最低距離[m]
    /// 
    /// この値より近い場合は仲間呼びできない.
    u8 callHelp_CallValidMinDistTarget;
    
    /// 仲間呼び_仲間を呼ぶ有効距離[m]
    /// 
    /// この値より仲間が遠い場合は呼ばない。
    u8 callHelp_CallValidRange;
    
    /// 仲間呼び 応答してから忘れる時間[sec]
    /// 
    /// 応答する時間
    u8 callHelp_ForgetTimeByArrival;
    
    /// 応答時の待機最小時間[ssm=>ss．mSec]
    /// 
    /// 応答ゴールの最初の待機ゴールでの最小時間[101=>10．1sec]
    u8 callHelp_MinWaitTime;
    
    /// 応答時の待機最大時間[ssm=>ss．mSec]
    /// 
    /// 応答ゴールの最初の待機ゴールでの最大時間[101=>10．1sec]
    u8 callHelp_MaxWaitTime;
    
    /// ゴールアクション：警戒状態/通常音
    /// 
    /// ゴールアクション：ターゲットが通常音の感知により警戒状態になった
    u8 goalAction_ToCaution;
    
    /// ゴールアクション：発見状態
    /// 
    /// ゴールアクション：ターゲットが発見状態になった
    u8 goalAction_ToFind;
    
    /// 仲間呼び 応答後の行動タイプ
    /// 
    /// 応答後、目標位置までの行動タイプ
    u8 callHelp_ReplyBehaviorType;
    
    /// パス移動しない
    /// 
    /// パス移動命令が来てもパスを辿らずに直接移動するか
    u8 disablePathMove;
    
    /// 視線による到着判定をスキップするか？Onにすると、視線が通っていなくても、到着判定を行う。
    u8 skipArrivalVisibleCheck;
    
    /// 取巻き役になるか？
    /// 
    /// 思考属性：ＯＮにすると取巻き役を演じます。
    u8 thinkAttr_doAdmirer;
    
    /// フラグ「崖」通れるか？
    /// 
    /// ノード「崖」を通過できるか？(def:1)
    u8 enableNaviFlg_Edge : 1;
    
    /// フラグ「広い」通れるか？
    /// 
    /// ノード「広い」を通過できるか？(def:1)
    u8 enableNaviFlg_LargeSpace : 1;
    
    /// フラグ「梯子」通れるか？
    /// 
    /// ノード「梯子」を通過できるか？(def:0)
    u8 enableNaviFlg_Ladder : 1;
    
    /// フラグ「穴」通れるか？
    /// 
    /// ノード「穴」を通過できるか？(def:0)
    u8 enableNaviFlg_Hole : 1;
    
    /// フラグ「扉」通れるか？
    /// 
    /// ノード「扉」を通過できるか？(def:0)
    u8 enableNaviFlg_Door : 1;
    
    /// フラグ「壁中」通れるか？
    /// 
    /// ノード「壁中」を通過できるか？(def:0)
    u8 enableNaviFlg_InSideWall : 1;
    
    /// フラグ「床下」通れるか？
    /// 
    /// ノード「床下」を通過出来るか？（def:0）
    u8 enableNaviFlg_Underfloor : 1;
    
    /// フラグ「崖」通れるか？（通常／警戒状態）
    /// 
    /// 通常／警戒状態でノード「崖」を通過できるか？(def:1)
    u8 enableNaviFlg_Edge_Ordinary : 1;
    
    /// フラグ「ジャンプ」通れるか？
    /// 
    /// ノード「ジャンプ」通れるか？（def:0）
    u8 enableNaviFlg_Jump : 1;
    
    /// パディング
    u8 enableNaviFlg_pad : 7;
    
    /// ほんとに予約
    /// 
    /// フラグが新しく必要になったらここにいれます（NotPadding)
    dummy8 enableNaviFlg_reserve1[2];
    
    /// 視覚_上方向[deg] （通常）
    /// 
    /// 視野範囲の上方向角度（deg）（通常）
    u8 eye_ang_upper_normal;
    
    /// 視覚_下方向[deg] （通常）
    /// 
    /// 視野範囲の下方向角度（deg）（通常）
    u8 eye_ang_bottom_normal;
    
    /// 視覚_左方向[deg] （通常）
    /// 
    /// 視野範囲の左方向角度（deg）（通常）
    u8 eye_ang_left_normal;
    
    /// 視覚_右方向[deg] （通常）
    /// 
    /// 視野範囲の右方向角度（deg）（通常）
    u8 eye_ang_right_normal;
    
    /// 1秒間に増加する発見ポイント[point/s]
    f32 aroundTargetIncrementPoint;
    
    /// 小隊反応遅延時間[sec]
    f32 platoonReplyTime;
    
    /// 小隊反応追加ランダム時間[sec]
    f32 platoonReplyAddRandomTime;
    
    /// 視覚_距離[m] （周辺）
    /// 
    /// 視覚による索敵範囲.（周辺）
    u16 eye_dist_around;
    
    /// 視覚_上方向[deg] （周辺）
    /// 
    /// 視野範囲の上方向角度（deg）（周辺）
    u8 eye_ang_upper_around;
    
    /// 視覚_下方向[deg] （周辺）
    /// 
    /// 視野範囲の下方向角度（deg）（周辺）
    u8 eye_ang_bottom_around;
    
    /// 視覚_左方向[deg] （周辺）
    /// 
    /// 視野範囲の左方向角度（deg）（周辺）
    u8 eye_ang_left_around;
    
    /// 視覚_右方向[deg] （周辺）
    /// 
    /// 視野範囲の右方向角度（deg）（周辺）
    u8 eye_ang_right_around;
    
    /// 視覚_発生距離[m] （周辺）
    /// 
    /// キャラの中心からこの距離後ろが視角開始位置になる（周辺）
    u16 eye_BackOffsetDist_around;
    
    /// 視覚_カット距離[m] （周辺）
    /// 
    /// 視角発生位置からこの距離は認識しない（周辺）
    u16 eye_BeginDist_around;
    
    /// 視界による戦闘ターゲットの強制認識時間[sec]
    /// 
    /// 設定している時間続けて敵を見失うまで対象のステルス機能（視線レイキャストチェック、視覚カット）を無効化する。[sec]
    u16 ignoreStealthTime;
    
    /// 気配位置ターゲット忘れる時間[sec]
    /// 
    /// 気配位置を忘れる時間
    f32 IndicationTargetForgetTime;
    
    /// 1秒間に増加する発見ポイント[point/s]（気配位置）
    f32 IndicationTargetIncrementPoint;
    
    /// パディング
    dummy8 pad4[2];
    
    /// 視覚_発生距離[m] （通常）
    /// 
    /// キャラの中心からこの距離後ろが視角開始位置になる（通常）
    u16 eye_BackOffsetDist_normal;
    
    /// 視覚_カット距離[m] （通常）
    /// 
    /// 視角発生位置からこの距離は認識しない（通常）
    u16 eye_BeginDist_normal;
    
    /// パス検索失敗時の行動種別
    /// 
    /// パス検索失敗時、代替パスの終点に到達した際に行うデフォルトの行動種別
    u8 actTypeOnFailedPath;
    
    /// ゴールアクション：警戒状態/重要音
    /// 
    /// ゴールアクション：ターゲットが重要音の感知により警戒状態になった
    u8 goalAction_ToCautionImportant;
    
    /// パディング
    dummy8 pad1[4];
    
    /// パス検索失敗時の挙動（非戦闘中）
    /// 
    /// ターゲット【なし】時に、現在地点を巣に書き換えた後に取る行動
    u8 actTypeOnNonBtlFailedPath;
    
    /// 周辺視野でレイキャスト判定しない
    /// 
    /// 周辺視野索敵時にレイキャストを使用しない
    u8 skipRaycastWhenAroundSearch;
    
    /// パディング
    dummy8 pad7[2];
    
    /// ゴールアクション：警戒状態/死体位置
    /// 
    /// ゴールアクション：ターゲットが死体の発見により警戒状態になった
    u8 goalAction_ToCautionCorpseTarget;
    
    /// 回避移動しない
    /// 
    /// 他のキャラクターを回避しながら移動しようとする挙動(ローカルステアリング)をオフにするか？
    u8 disableLocalSteering;
    
    /// ゴールアクション：記憶ターゲット状態
    /// 
    /// ゴールアクション：ターゲットを見失った
    u8 goalAction_ToDisappear;
    
    /// ゴールアクション：通常状態開始
    /// 
    /// 通常状態に遷移したときのアクション
    u8 changeStateAction_ToNormal;
    
    /// 記憶ターゲット忘れる時間[sec]
    /// 
    /// 記憶ターゲット忘れる時間。
    f32 MemoryTargetForgetTime;
    
    /// パディング
    /// 
    /// pad
    dummy8 pad3[12];
    
};

struct THROW_KIND_PARAM_ST {
    static constexpr const char* TYPE_NAME = "THROW_KIND_PARAM_ST";
    
    /// 〈投げ遷移ダメージ〉投げタイプID
    /// 
    /// 〈判定状況が「投げ遷移ダメージヒット/直撃」時〉攻撃パラメータの投げタイプIDと一致するときだけ、この種別の投げを判定する。一致しなければ種別ごとスキップ。
    s32 throwTypeId;
    
    /// 投げ入力待ち中に受け側にかける特殊効果
    /// 
    /// 投げ判定契機が「投げ入力」で、ボタン入力のみ行われておらず、その他の条件が全て成立しているときに受け側キャラに掛ける特殊効果。投げ可能表現UI表示用。
    s32 noThrowInputSpecialEffect_forDef;
    
    /// 〈派生〉派生元投げ種別
    /// 
    /// 〈キャラ状態判定方式が「派生」時に参照〉投げキャラ＆受けキャラが派生元種別の投げの最中のみ、この種別の投げを判定する。
    u32 derivationSourceThrowKind;
    
    /// 投げ変化ID
    /// 
    /// 特殊効果により“投げ側キャラ”に設定された投げ変化IDと一致するときだけ、この種別の投げを判定する。0なら特殊効果の有無にかかわらず常に判定を行う。同じ優先度で0と0以外の投げ種別が存在する場合は、先に0以外の種別の投げを判定する。
    u8 throwChangeId;
    
    /// 投げ判定状況
    /// 
    /// この種別の投げ判定契機となる、ゲーム内の状況。
    u8 throwCheckSituation;
    
    /// 〈投げ入力〉受付ボタン
    /// 
    /// 〈判定状況が「投げ入力受付」時〉このボタン入力（アクションリクエスト）の受付中に限り、この種別の投げ判定を行う。一致しなければ種別ごとスキップ。
    s8 acceptableButton;
    
    /// キャラ状態判定方式
    /// 
    /// 投げ判定において、投げ側、受け側キャラの状態をどのようなルールで見るかを指定する。　通常：投げ側受け側双方の投げ可能状態を見る。派生：投げ側受け側双方が、派生元に指定された種別の投げ中かを見る。投げ可能状態は見ない。
    u8 throwKindCheckMethod;
    
    /// 〈通常〉投げ種別カテゴリ
    /// 
    /// 〈キャラ状態判定方式が「通常」時に参照〉投げ可能状態表においてこの種別が属するカテゴリを設定する。
    u8 throwKindCategory;
    
    /// 判定優先度
    /// 
    /// この値が小さい種別の投げを優先して判定を行う。
    u8 checkPriority;
    
    /// 武器カテゴリチェックをスキップするか？
    /// 
    /// ○なら武器カテゴリ装備の状態にかかわらず常に判定を行う。
    u8 doesSkipWeaponCategoryCheck;
    
    /// 落下軌道上判定するか？
    /// 
    /// ○なら投げ側キャラの現在の落下速度から将来の軌道を予測し、受け側キャラがその軌道上一定範囲内にいるかどうかを追加判定する。
    u8 doesCheckNormalFallOrbit;
    
    /// 投げ側のみ投げアニメ再生するか？
    /// 
    /// 投げ実行時、投げ側だけアニメ再生要求を行い、受け側の投げアニメを再生しない特殊な投げとするか。所謂「投げ始動」で使用する。
    u8 isThrowBeginning;
    
    /// 受け側生死判定するか？
    /// 
    /// ×なら受け側キャラの生死にかかわらず常に判定を行う。
    u8 defAliveCheck;
    
    /// アクション解禁状況を判定するか？_0
    /// 
    /// このアクション解禁フラグが立っているときだけ、この種別の投げ判定を行う。一致しなければ種別ごとスキップ。×ならアクション解禁フラグにかかわらず常に判定を行う。
    s8 checkAction_ActionUnlock_0;
    
    /// アクション解禁状況を判定するか？_1
    /// 
    /// このアクション解禁フラグが立っているときだけ、この種別の投げ判定を行う。一致しなければ種別ごとスキップ。×ならアクション解禁フラグにかかわらず常に判定を行う。
    s8 checkAction_ActionUnlock_1;
    
    /// 投げ技ID
    /// 
    /// この投げ技ID装備がアクティブなときだけ、この種別の投げ判定を行う。一致しなければ種別ごとスキップ。-1なら投げ技装備の状態にかかわらず常に判定を行う。
    s32 throwSkillId;
    
    /// アクション解禁状況を判定するか？_2
    /// 
    /// このアクション解禁フラグが立っているときだけ、この種別の投げ判定を行う。一致しなければ種別ごとスキップ。×ならアクション解禁フラグにかかわらず常に判定を行う。
    s8 checkAction_ActionUnlock_2;
    
    /// パディング
    dummy8 pad0[3];
    
};

struct MENUPROPERTY_SPEC {
    static constexpr const char* TYPE_NAME = "MENUPROPERTY_SPEC";
    
    /// 項目名テキストID
    s32 CaptionTextID;
    
    /// 項目アイコンID
    s32 IconID;
    
    /// 必要スキル
    s32 RequiredPropertyID;
    
    /// 優劣判定
    s8 CompareType;
    
    /// 書式
    s8 FormatType;
    
    /// 項目名仮テキスト
    fixstrW AdhocCaption[9];
    
};

struct TENTATIVE_PLAYER_PARAM_ST {
    static constexpr const char* TYPE_NAME = "TENTATIVE_PLAYER_PARAM_ST";
    
    /// プレイヤーの自動フットエフェクトのSFX識別子[3桁]
    /// 
    /// フットエフェクトのSFXIDに使われる識別子です。XYYZZZのZZZにあたります。
    s32 PlayerFootEffect_bySFX;
    
    /// 精密射撃時プレイヤー非表示フェード時間
    /// 
    /// 精密射撃時にプレイヤーを非表示にするときのフェード時間です。単位は秒。
    f32 SnipeModeDrawAlpha_FadeTime;
    
    /// プレイヤー強靭度 回復時間補正値
    /// 
    /// プレイヤーの強靭度回復時間の計算に使われる補正値です。
    f32 ToughnessRecoverCorrection;
    
    /// 亡者化する亡者度の閾値
    /// 
    /// 亡者度がこの値以上の時に死亡したとき、亡者になります
    s16 DeceasedThreshold;
    
    /// 予約
    s8 Reserved03;
    
    /// 侵入された時の巨人の木の実抽選上限確率
    s8 GiantNutGetRand_MaxProbability;
    
    /// ドロップアイテム取得アニメーションID
    /// 
    /// ドロップアイテムを拾った時のアニメーションID
    s32 AnimeID_DropItemPick;
    
    /// 宝箱アイテム取得アニメーションID
    /// 
    /// 宝箱からアイテムを拾った時のアニメーションID（使われてない？）
    s32 AnimeID_CofferItemPick;
    
    /// 薪の王時特殊効果１
    /// 
    /// 薪の王時に付与する特殊効果。初回時に１回のみ付与するタイプ。
    s32 LoadOfCinderSpEffectId1;
    
    /// 薪の王時特殊効果２
    /// 
    /// 薪の王時に付与する特殊効果。初回時に１回のみ付与するタイプ。
    s32 LoadOfCinderSpEffectId2;
    
    /// 薪の王時特殊効果３
    /// 
    /// 薪の王時に付与する特殊効果。初回時に１回のみ付与するタイプ。
    s32 LoadOfCinderSpEffectId3;
    
    /// 薪の王時特殊効果４
    /// 
    /// 薪の王時に付与する特殊効果。初回時に１回のみ付与するタイプ。
    s32 LoadOfCinderSpEffectId4;
    
    /// 薪の王時特殊効果５
    /// 
    /// 薪の王時に付与する特殊効果。初回時に１回のみ付与するタイプ。
    s32 LoadOfCinderSpEffectId5;
    
    /// ステータス不足 基本攻撃力低下量
    f32 LowStatus_AtkPowDown;
    
    /// ステータス不足 スタミナ消費倍率
    f32 LowStatus_ConsumeStaminaRate;
    
    /// ステータス不足 弾き攻撃力
    s16 LowStatus_AtkGuardBreak;
    
    /// 盾ステータス補正 判定ステータス最大値
    /// 
    /// 盾の性能のステータス補正値を計算するときに使う、性能が上昇する最大ステータス値
    s16 GuardStatusCorrect_MaxStatusVal;
    
    /// マルチプレイ時引継ぎ薪の王特殊効果１
    /// 
    /// マルチプレイ時に自身が薪の王状態の場合にかける特殊効果。役割（ロール）や召喚のされ方により引き継ぐ場合にのみかかる。薪の王じゃないときにはかけない。初回時に１回のみ付与するタイプ。
    s32 HeroAmongSinnersSpEffectId1;
    
    /// マルチプレイ時引継ぎ薪の王特殊効果２
    /// 
    /// マルチプレイ時に自身が薪の王状態の場合にかける特殊効果。役割（ロール）や召喚のされ方により引き継ぐ場合にのみかかる。薪の王じゃないときにはかけない。初回時に１回のみ付与するタイプ。
    s32 HeroAmongSinnersSpEffectId2;
    
    /// マルチプレイ時引継ぎ薪の王特殊効果３
    /// 
    /// マルチプレイ時に自身が薪の王状態の場合にかける特殊効果。役割（ロール）や召喚のされ方により引き継ぐ場合にのみかかる。薪の王じゃないときにはかけない。初回時に１回のみ付与するタイプ。
    s32 HeroAmongSinnersSpEffectId3;
    
    /// マルチプレイ時引継ぎ薪の王特殊効果４
    /// 
    /// マルチプレイ時に自身が薪の王状態の場合にかける特殊効果。役割（ロール）や召喚のされ方により引き継ぐ場合にのみかかる。薪の王じゃないときにはかけない。初回時に１回のみ付与するタイプ。
    s32 HeroAmongSinnersSpEffectId4;
    
    /// マルチプレイ時引継ぎ薪の王特殊効果５
    /// 
    /// マルチプレイ時に自身が薪の王状態の場合にかける特殊効果。役割（ロール）や召喚のされ方により引き継ぐ場合にのみかかる。薪の王じゃないときにはかけない。初回時に１回のみ付与するタイプ。
    s32 HeroAmongSinnersSpEffectId5;
    
    /// 最大借金スタミナ
    /// 
    /// 最大マイナススタミナ
    s32 DebtSp;
    
    /// 濡れ上書き補間時間
    /// 
    /// 重複して濡れた時のマテリアル切り替え補間時間
    f32 WetOverrideInterpolateTime;
    
    /// マルチ時クライアント瓶補正倍率(0.5指定で所持数半分に)
    f32 EstusFlaskAllocateRate;
    
    /// 侵入された時の巨人の木の実抽選基本確率（％）
    /// 
    /// 侵入された時の巨人の木の実抽選基本確率
    s8 GiantNutGetRand_Base;
    
    /// 侵入された時の巨人の木の実抽選ボーナス確率（％）
    /// 
    /// 侵入された時の巨人の木の実抽選ボーナス確率
    s8 GiantNutGetRand_Bonus;
    
    /// プレイヤー正面から見てキックを出せる角度
    u8 KickAcceptanceDeg;
    
    /// NPCプレイヤー用アナログ重量比率_軽量
    /// 
    /// NPCプレイヤー用アナログ重量比率[%]。軽量。
    u8 NpcPlayerAnalogWeightRate_Light;
    
    /// NPCプレイヤー用アナログ重量比率_中量
    /// 
    /// NPCプレイヤー用アナログ重量比率[%]。中量。
    u8 NpcPlayerAnalogWeightRate_Normal;
    
    /// NPCプレイヤー用アナログ重量比率_重量
    /// 
    /// NPCプレイヤー用アナログ重量比率[%]。重量。
    u8 NpcPlayerAnalogWeightRate_Heavy;
    
    /// NPCプレイヤー用アナログ重量比率_重量過多
    /// 
    /// NPCプレイヤー用アナログ重量比率[%]。重量過多。
    u8 NpcPlayerAnalogWeightRate_WeightOver;
    
    /// NPCプレイヤー用アナログ重量比率_超軽量
    /// 
    /// NPCプレイヤー用アナログ重量比率[%]。超軽量。
    u8 NpcPlayerAnalogWeightRate_SuperLight;
    
    /// 巨人の木の実の種_闇霊効果用ID
    /// 
    /// 巨人の木の実の種の闇霊にかける特殊効果のID
    s32 GiantNutClientEffectId;
    
    /// 周回補正特殊効果基準ID
    /// 
    /// 周回補正のためにかける特殊効果の基準ID
    s32 ClearCountCorrectBaseSpEffectId;
    
    /// 矢、ボルトのモデルIdオフセット
    /// 
    /// 矢、ボルトモデルを表示する際に、スロット１に装備された場合のモデルIDに加えるオフセット。（モデルId+オフセット値）
    s32 ArrowBoltModelIdOffset;
    
    /// 矢、ボルトの残量によるモデルマスクの残数閾値_1段階[%]
    /// 
    /// 矢、ボルトモデルを表示する際に、本数による表示マスクをかけるときの閾値の１段階判定値[%]。（この値より多ければ１段階表示）
    s8 ArrowBoltRemainingNumModelMaskThreshold1;
    
    /// 矢、ボルトの残量によるモデルマスクの残数閾値_2段階[%]
    /// 
    /// 矢、ボルトモデルを表示する際に、本数による表示マスクをかけるときの閾値の２段階判定値[%]。（この値より多ければ２段階表示）
    s8 ArrowBoltRemainingNumModelMaskThreshold2;
    
    /// 予約
    s16 Reserved27;
    
    /// プレイヤー耐性値回復量_毒[point/s]
    f32 ResistRecoverPoint_Poision_Player;
    
    /// プレイヤー耐性値回復量_疫病[point/s]
    f32 ResistRecoverPoint_Desease_Player;
    
    /// プレイヤー耐性値回復量_出血[point/s]
    f32 ResistRecoverPoint_Blood_Player;
    
    /// プレイヤー耐性値回復量_呪い[point/s]
    f32 ResistRecoverPoint_Curse_Player;
    
    /// プレイヤー耐性値回復量_冷気[point/s]
    f32 ResistRecoverPoint_Freeze_Player;
    
    /// 敵耐性値回復量_毒[point/s]
    f32 ResistRecoverPoint_Poision_Enemy;
    
    /// 敵耐性値回復量_疫病[point/s]
    f32 ResistRecoverPoint_Desease_Enemy;
    
    /// 敵耐性値回復量_出血[point/s]
    f32 ResistRecoverPoint_Blood_Enemy;
    
    /// 敵耐性値回復量_呪い[point/s]
    f32 ResistRecoverPoint_Curse_Enemy;
    
    /// 敵耐性値回復量_冷気[point/s]
    f32 ResistRecoverPoint_Freeze_Enemy;
    
    /// 瀕死HP
    /// 
    /// 現在HPがこの値以下ならプレイヤーは瀕死状態になる
    s32 DyingHp;
    
    /// システム経由薪の王化用特殊効果ID
    /// 
    /// システムからの薪の王化を行う際に呼び出す特殊効果Id
    s32 SystemEnchant_LoadOfCinder;
    
    /// マルチ時クライアント瓶補正倍率(闘技場・決闘)
    /// 
    /// マルチ時クライアント瓶の所持数の補正倍率(闘技場・決闘)
    f32 EstusFlaskAllocateRateForBattleRoyalDuel;
    
    /// マルチ時クライアント瓶オフセット(闘技場・決闘)
    /// 
    /// マルチ時クライアント瓶の所持数のオフセット(闘技場・決闘)
    s32 EstusFlaskAllocateOffsetForBattleRoyalDuel;
    
    /// マルチ時クライアント瓶補正倍率(闘技場・乱闘)
    /// 
    /// マルチ時クライアント瓶の所持数の補正倍率(闘技場・乱闘)
    f32 EstusFlaskAllocateRateForBattleRoyalFree;
    
    /// マルチ時クライアント瓶オフセット(闘技場・乱闘)
    /// 
    /// マルチ時クライアント瓶の所持数のオフセット(闘技場・乱闘)
    s32 EstusFlaskAllocateOffsetForBattleRoyalFree;
    
    /// マルチ時クライアント瓶補正倍率(闘技場・共闘)
    /// 
    /// マルチ時クライアント瓶の所持数の補正倍率(闘技場・共闘)
    f32 EstusFlaskAllocateRateForBattleRoyalTeam;
    
    /// マルチ時クライアント瓶オフセット(闘技場・共闘)
    /// 
    /// マルチ時クライアント瓶の所持数のオフセット(闘技場・共闘)
    s32 EstusFlaskAllocateOffsetForBattleRoyalTeam;
    
    /// 黄衣HPエスト瓶補正倍率
    f32 HpEstusFlaskAllocateRateForYellowMonk;
    
    /// 黄衣HPエスト瓶オフセット
    s32 HpEstusFlaskAllocateOffsetForYellowMonk;
    
    /// 黄衣MPエスト瓶補正倍率
    f32 MpEstusFlaskAllocateRateForYellowMonk;
    
    /// 黄衣MPエスト瓶オフセット
    s32 MpEstusFlaskAllocateOffsetForYellowMonk;
    
    /// 死亡時のお金ロスト率（％）
    s8 MoneyLostRate;
    
    /// 死亡時のスキル経験値ロスト率（％）
    s8 SkillPointLostRate;
    
    /// 予約
    s16 Reserved50;
    
    /// 予約
    s32 Reserved51;
    
    /// 予約
    s32 Reserved52;
    
    /// 予約
    s32 Reserved53;
    
    /// 予約
    s32 Reserved54;
    
    /// 予約
    s32 Reserved55;
    
    /// 予約
    s32 Reserved56;
    
    /// 予約
    s32 Reserved57;
    
    /// 予約
    s32 Reserved58;
    
    /// 予約
    s32 Reserved59;
    
    /// 予約
    s32 Reserved60;
    
    /// 予約
    s32 Reserved61;
    
    /// 予約
    s32 Reserved62;
    
    /// 予約
    s32 Reserved63;
    
};

struct SHOP_LINEUP_PARAM {
    static constexpr const char* TYPE_NAME = "SHOP_LINEUP_PARAM";
    
    /// 販売品の装備ID
    /// 
    /// 販売している装備品のID
    s32 equipId;
    
    /// 販売価格補正：上書き
    s32 value;
    
    /// 購入に必要な素材ID
    s32 mtrlId;
    
    /// イベントフラグ
    /// 
    /// 個数を保持してあるイベントフラグ値
    s32 eventFlag;
    
    /// 販売解禁フラグ
    s32 flagId_forRelease;
    
    /// 販売個数
    s16 sellQuantity;
    
    /// ショップタイプ
    /// 
    /// ショップの種類
    u8 shopType;
    
    /// 販売品の装備タイプ
    /// 
    /// 販売している装備品の種類
    u8 equipType;
    
    /// 販売価格(SAN値)
    s16 value_SAN;
    
    /// PAD
    dummy8 pad[2];
    
    /// 販売価格補正：加算
    s32 value_Add;
    
    /// 販売価格補正：倍率
    f32 value_Magnification;
    
};

struct CS_SSAO_QUALITY_DETAIL {
    static constexpr const char* TYPE_NAME = "CS_SSAO_QUALITY_DETAIL";
    
    /// SSAO有効
    u8 enabled;
    
    /// リプロジェクション有効
    /// 
    /// リプロジェクション強制有効の時は、PreventGhostも有効になる
    u8 cs_reprojEnabledType;
    
    /// バイラテラルアップスケール有効
    u8 cs_upScaleEnabledType;
    
    /// 法線使用有効
    u8 cs_useNormalEnabledType;
    
    dummy8 dmy[1];
    
};

struct HIT_EFFECT_SE_PARAM_ST {
    static constexpr const char* TYPE_NAME = "HIT_EFFECT_SE_PARAM_ST";
    
    /// 鉄製：斬撃：小
    s32 Iron_Slash_S;
    
    /// 鉄製：斬撃：大
    s32 Iron_Slash_L;
    
    /// 鉄製：斬撃：特大
    s32 Iron_Slash_LL;
    
    /// 鉄製：刺突：小
    s32 Iron_Thrust_S;
    
    /// 鉄製：刺突：大
    s32 Iron_Thrust_L;
    
    /// 鉄製：刺突：特大
    s32 Iron_Thrust_LL;
    
    /// 鉄製：打撃：小
    s32 Iron_Blow_S;
    
    /// 鉄製：打撃：大
    s32 Iron_Blow_L;
    
    /// 鉄製：打撃：特大
    s32 Iron_Blow_LL;
    
    /// 炎：斬撃：小
    s32 Fire_Slash_S;
    
    /// 炎：斬撃：大
    s32 Fire_Slash_L;
    
    /// 炎：斬撃：特大
    s32 Fire_Slash_LL;
    
    /// 炎：刺突：小
    s32 Fire_Thrust_S;
    
    /// 炎：刺突：大
    s32 Fire_Thrust_L;
    
    /// 炎：刺突：特大
    s32 Fire_Thrust_LL;
    
    /// 炎：打撃：小
    s32 Fire_Blow_S;
    
    /// 炎：打撃：大
    s32 Fire_Blow_L;
    
    /// 炎：打撃：特大
    s32 Fire_Blow_LL;
    
    /// 木製：斬撃：小
    s32 Wood_Slash_S;
    
    /// 木製：斬撃：大
    s32 Wood_Slash_L;
    
    /// 木製：斬撃：特大
    s32 Wood_Slash_LL;
    
    /// 木製：刺突：小
    s32 Wood_Thrust_S;
    
    /// 木製：刺突：大
    s32 Wood_Thrust_L;
    
    /// 木製：刺突：特大
    s32 Wood_Thrust_LL;
    
    /// 木製：打撃：小
    s32 Wood_Blow_S;
    
    /// 木製：打撃：大
    s32 Wood_Blow_L;
    
    /// 木製：打撃：特大
    s32 Wood_Blow_LL;
    
    /// 肉：斬撃：小
    s32 Body_Slash_S;
    
    /// 肉：斬撃：大
    s32 Body_Slash_L;
    
    /// 肉：斬撃：特大
    s32 Body_Slash_LL;
    
    /// 肉：刺突：小
    s32 Body_Thrust_S;
    
    /// 肉：刺突：大
    s32 Body_Thrust_L;
    
    /// 肉：刺突：特大
    s32 Body_Thrust_LL;
    
    /// 肉：打撃：小
    s32 Body_Blow_S;
    
    /// 肉：打撃：大
    s32 Body_Blow_L;
    
    /// 肉：打撃：特大
    s32 Body_Blow_LL;
    
    /// 蝕：斬撃：小
    s32 Eclipse_Slash_S;
    
    /// 蝕：斬撃：大
    s32 Eclipse_Slash_L;
    
    /// 蝕：斬撃：特大
    s32 Eclipse_Slash_LL;
    
    /// 蝕：刺突：小
    s32 Eclipse_Thrust_S;
    
    /// 蝕：刺突：大
    s32 Eclipse_Thrust_L;
    
    /// 蝕：刺突：特大
    s32 Eclipse_Thrust_LL;
    
    /// 蝕：打撃：小
    s32 Eclipse_Blow_S;
    
    /// 蝕：打撃：大
    s32 Eclipse_Blow_L;
    
    /// 蝕：打撃：特大
    s32 Eclipse_Blow_LL;
    
    /// エネルギー：斬撃：小
    s32 Energy_Slash_S;
    
    /// エネルギー：斬撃：大
    s32 Energy_Slash_L;
    
    /// エネルギー：斬撃：特大
    s32 Energy_Slash_LL;
    
    /// エネルギー：刺突：小
    s32 Energy_Thrust_S;
    
    /// エネルギー：刺突：大
    s32 Energy_Thrust_L;
    
    /// エネルギー：刺突：特大
    s32 Energy_Thrust_LL;
    
    /// エネルギー：打撃：小
    s32 Energy_Blow_S;
    
    /// エネルギー：打撃：大
    s32 Energy_Blow_L;
    
    /// エネルギー：打撃：特大
    s32 Energy_Blow_LL;
    
    /// なし：斬撃：小
    s32 None_Slash_S;
    
    /// なし：斬撃：大
    s32 None_Slash_L;
    
    /// なし：斬撃：特大
    s32 None_Slash_LL;
    
    /// なし：刺突：小
    s32 None_Thrust_S;
    
    /// なし：刺突：大
    s32 None_Thrust_L;
    
    /// なし：刺突：特大
    s32 None_Thrust_LL;
    
    /// なし：打撃：小
    s32 None_Blow_S;
    
    /// なし：打撃：大
    s32 None_Blow_L;
    
    /// なし：打撃：特大
    s32 None_Blow_LL;
    
    /// Dmy1：斬撃：小
    s32 Dmy1_Slash_S;
    
    /// Dmy1：斬撃：大
    s32 Dmy1_Slash_L;
    
    /// Dmy1：斬撃：特大
    s32 Dmy1_Slash_LL;
    
    /// Dmy1：刺突：小
    s32 Dmy1_Thrust_S;
    
    /// Dmy1：刺突：大
    s32 Dmy1_Thrust_L;
    
    /// Dmy1：刺突：特大
    s32 Dmy1_Thrust_LL;
    
    /// Dmy1：打撃：小
    s32 Dmy1_Blow_S;
    
    /// Dmy1：打撃：大
    s32 Dmy1_Blow_L;
    
    /// Dmy1：打撃：特大
    s32 Dmy1_Blow_LL;
    
    /// Dmy2：斬撃：小
    s32 Dmy2_Slash_S;
    
    /// Dmy2：斬撃：大
    s32 Dmy2_Slash_L;
    
    /// Dmy2：斬撃：特大
    s32 Dmy2_Slash_LL;
    
    /// Dmy2：刺突：小
    s32 Dmy2_Thrust_S;
    
    /// Dmy2：刺突：大
    s32 Dmy2_Thrust_L;
    
    /// Dmy2：刺突：特大
    s32 Dmy2_Thrust_LL;
    
    /// Dmy2：打撃：小
    s32 Dmy2_Blow_S;
    
    /// Dmy2：打撃：大
    s32 Dmy2_Blow_L;
    
    /// Dmy2：打撃：特大
    s32 Dmy2_Blow_LL;
    
    /// Dmy3：斬撃：小
    s32 Dmy3_Slash_S;
    
    /// Dmy3：斬撃：大
    s32 Dmy3_Slash_L;
    
    /// Dmy3：斬撃：特大
    s32 Dmy3_Slash_LL;
    
    /// Dmy3：刺突：小
    s32 Dmy3_Thrust_S;
    
    /// Dmy3：刺突：大
    s32 Dmy3_Thrust_L;
    
    /// Dmy3：刺突：特大
    s32 Dmy3_Thrust_LL;
    
    /// Dmy3：打撃：小
    s32 Dmy3_Blow_S;
    
    /// Dmy3：打撃：大
    s32 Dmy3_Blow_L;
    
    /// Dmy3：打撃：特大
    s32 Dmy3_Blow_LL;
    
    /// うじ：斬撃：小
    s32 Maggot_Slash_S;
    
    /// うじ：斬撃：大
    s32 Maggot_Slash_L;
    
    /// うじ：斬撃：特大
    s32 Maggot_Slash_LL;
    
    /// うじ：刺突：小
    s32 Maggot_Thrust_S;
    
    /// うじ：刺突：大
    s32 Maggot_Thrust_L;
    
    /// うじ：刺突：特大
    s32 Maggot_Thrust_LL;
    
    /// うじ：打撃：小
    s32 Maggot_Blow_S;
    
    /// うじ：打撃：大
    s32 Maggot_Blow_L;
    
    /// うじ：打撃：特大
    s32 Maggot_Blow_LL;
    
    /// 蝋：斬撃：小
    s32 Wax_Slash_S;
    
    /// 蝋：斬撃：大
    s32 Wax_Slash_L;
    
    /// 蝋：斬撃：特大
    s32 Wax_Slash_LL;
    
    /// 蝋：刺突：小
    s32 Wax_Thrust_S;
    
    /// 蝋：刺突：大
    s32 Wax_Thrust_L;
    
    /// 蝋：刺突：特大
    s32 Wax_Thrust_LL;
    
    /// 蝋：打撃：小
    s32 Wax_Blow_S;
    
    /// 蝋：打撃：大
    s32 Wax_Blow_L;
    
    /// 蝋：打撃：特大
    s32 Wax_Blow_LL;
    
    /// 炎上：斬撃：小
    s32 FireFlame_Slash_S;
    
    /// 炎上：斬撃：大
    s32 FireFlame_Slash_L;
    
    /// 炎上：斬撃：特大
    s32 FireFlame_Slash_LL;
    
    /// 炎上：刺突：小
    s32 FireFlame_Thrust_S;
    
    /// 炎上：刺突：大
    s32 FireFlame_Thrust_L;
    
    /// 炎上：刺突：特大
    s32 FireFlame_Thrust_LL;
    
    /// 炎上：打撃：小
    s32 FireFlame_Blow_S;
    
    /// 炎上：打撃：大
    s32 FireFlame_Blow_L;
    
    /// 炎上：打撃：特大
    s32 FireFlame_Blow_LL;
    
    /// 蝕：気体：斬撃：小
    s32 EclipseGas_Slash_S;
    
    /// 蝕：気体：斬撃：大
    s32 EclipseGas_Slash_L;
    
    /// 蝕：気体：斬撃：特大
    s32 EclipseGas_Slash_LL;
    
    /// 蝕：気体：刺突：小
    s32 EclipseGas_Thrust_S;
    
    /// 蝕：気体：刺突：大
    s32 EclipseGas_Thrust_L;
    
    /// 蝕：気体：刺突：特大
    s32 EclipseGas_Thrust_LL;
    
    /// 蝕：気体：打撃：小
    s32 EclipseGas_Blow_S;
    
    /// 蝕：気体：打撃：大
    s32 EclipseGas_Blow_L;
    
    /// 蝕：気体：打撃：特大
    s32 EclipseGas_Blow_LL;
    
    /// エネルギー（強）：斬撃：小
    s32 EnergyStrong_Slash_S;
    
    /// エネルギー（強）：斬撃：大
    s32 EnergyStrong_Slash_L;
    
    /// エネルギー（強）：斬撃：特大
    s32 EnergyStrong_Slash_LL;
    
    /// エネルギー（強）：刺突：小
    s32 EnergyStrong_Thrust_S;
    
    /// エネルギー（強）：刺突：大
    s32 EnergyStrong_Thrust_L;
    
    /// エネルギー（強）：刺突：特大
    s32 EnergyStrong_Thrust_LL;
    
    /// エネルギー（強）：打撃：小
    s32 EnergyStrong_Blow_S;
    
    /// エネルギー（強）：打撃：大
    s32 EnergyStrong_Blow_L;
    
    /// エネルギー（強）：打撃：特大
    s32 EnergyStrong_Blow_LL;
    
    /// 予約領域
    dummy8 reserve[100];
    
};

struct ITEMLOT_PARAM_ST {
    static constexpr const char* TYPE_NAME = "ITEMLOT_PARAM_ST";
    
    /// １：アイテムID
    /// 
    /// 取得できるアイテムのID
    s32 lotItemId01;
    
    /// ２：アイテムID
    /// 
    /// 取得できるアイテムのID
    s32 lotItemId02;
    
    /// ３：アイテムID
    /// 
    /// 取得できるアイテムのID
    s32 lotItemId03;
    
    /// ４：アイテムID
    /// 
    /// 取得できるアイテムのID
    s32 lotItemId04;
    
    /// ５：アイテムID
    /// 
    /// 取得できるアイテムのID
    s32 lotItemId05;
    
    /// ６：アイテムID
    /// 
    /// 取得できるアイテムのID
    s32 lotItemId06;
    
    /// ７：アイテムID
    /// 
    /// 取得できるアイテムのID
    s32 lotItemId07;
    
    /// ８：アイテムID
    /// 
    /// 取得できるアイテムのID
    s32 lotItemId08;
    
    /// １：アイテムカテゴリ
    /// 
    /// 取得できるアイテムのカテゴリ
    s32 lotItemCategory01;
    
    /// ２：アイテムカテゴリ
    /// 
    /// 取得できるアイテムのカテゴリ
    s32 lotItemCategory02;
    
    /// ３：アイテムカテゴリ
    /// 
    /// 取得できるアイテムのカテゴリ
    s32 lotItemCategory03;
    
    /// ４：アイテムカテゴリ
    /// 
    /// 取得できるアイテムのカテゴリ
    s32 lotItemCategory04;
    
    /// ５：アイテムカテゴリ
    /// 
    /// 取得できるアイテムのカテゴリ
    s32 lotItemCategory05;
    
    /// ６：アイテムカテゴリ
    /// 
    /// 取得できるアイテムのカテゴリ
    s32 lotItemCategory06;
    
    /// ７：アイテムカテゴリ
    /// 
    /// 取得できるアイテムのカテゴリ
    s32 lotItemCategory07;
    
    /// ８：アイテムカテゴリ
    /// 
    /// 取得できるアイテムのカテゴリ
    s32 lotItemCategory08;
    
    /// 基本出現ポイント
    /// 
    /// 通常時の出現ポイント
    u16 lotItemBasePoint01;
    
    /// 基本出現ポイント
    /// 
    /// 通常時の出現ポイント
    u16 lotItemBasePoint02;
    
    /// 基本出現ポイント
    /// 
    /// 通常時の出現ポイント
    u16 lotItemBasePoint03;
    
    /// 基本出現ポイント
    /// 
    /// 通常時の出現ポイント
    u16 lotItemBasePoint04;
    
    /// 基本出現ポイント
    /// 
    /// 通常時の出現ポイント
    u16 lotItemBasePoint05;
    
    /// 基本出現ポイント
    /// 
    /// 通常時の出現ポイント
    u16 lotItemBasePoint06;
    
    /// 基本出現ポイント
    /// 
    /// 通常時の出現ポイント
    u16 lotItemBasePoint07;
    
    /// 基本出現ポイント
    /// 
    /// 通常時の出現ポイント
    u16 lotItemBasePoint08;
    
    /// 累積後出現ポイント
    /// 
    /// 最大累積時の出現ポイント
    u16 cumulateLotPoint01;
    
    /// 累積後出現ポイント
    /// 
    /// 最大累積時の出現ポイント
    u16 cumulateLotPoint02;
    
    /// 累積後出現ポイント
    /// 
    /// 最大累積時の出現ポイント
    u16 cumulateLotPoint03;
    
    /// 累積後出現ポイント
    /// 
    /// 最大累積時の出現ポイント
    u16 cumulateLotPoint04;
    
    /// 累積後出現ポイント
    /// 
    /// 最大累積時の出現ポイント
    u16 cumulateLotPoint05;
    
    /// 累積後出現ポイント
    /// 
    /// 最大累積時の出現ポイント
    u16 cumulateLotPoint06;
    
    /// 累積後出現ポイント
    /// 
    /// 最大累積時の出現ポイント
    u16 cumulateLotPoint07;
    
    /// 累積後出現ポイント
    /// 
    /// 最大累積時の出現ポイント
    u16 cumulateLotPoint08;
    
    /// 別ザクザクフラグID
    /// 
    /// 取得済みフラグとザクザク枠兼用(0:共通使用)
    s32 getItemFlagId01;
    
    /// 別ザクザクフラグID
    /// 
    /// 取得済みフラグとザクザク枠兼用(0:共通使用)
    s32 getItemFlagId02;
    
    /// 別ザクザクフラグID
    /// 
    /// 取得済みフラグとザクザク枠兼用(0:共通使用)
    s32 getItemFlagId03;
    
    /// 別ザクザクフラグID
    /// 
    /// 取得済みフラグとザクザク枠兼用(0:共通使用)
    s32 getItemFlagId04;
    
    /// 別ザクザクフラグID
    /// 
    /// 取得済みフラグとザクザク枠兼用(0:共通使用)
    s32 getItemFlagId05;
    
    /// 別ザクザクフラグID
    /// 
    /// 取得済みフラグとザクザク枠兼用(0:共通使用)
    s32 getItemFlagId06;
    
    /// 別ザクザクフラグID
    /// 
    /// 取得済みフラグとザクザク枠兼用(0:共通使用)
    s32 getItemFlagId07;
    
    /// 別ザクザクフラグID
    /// 
    /// 取得済みフラグとザクザク枠兼用(0:共通使用)
    s32 getItemFlagId08;
    
    /// ザクザクフラグID
    /// 
    /// 取得済みフラグとザクザク枠兼用(<0:フラグ無効)
    s32 getItemFlagId;
    
    /// 抽選累積保存フラグID
    /// 
    /// 抽選回数保存用(※8フラグ連番使用)
    s32 cumulateNumFlagId;
    
    /// 抽選累積最大数(0:累積なし)
    u8 cumulateNumMax;
    
    /// レアリティ設定
    /// 
    /// 宝箱などに、どれくらい貴重なアイテムが入っているかを指定する
    u8 lotItem_Rarity;
    
    /// 進行オフセットするか
    /// 
    /// ○の場合、進行に応じて百の位をオフセットする
    u8 isProgressOffset;
    
    /// パディング
    dummy8 pad[7];
    
    /// 運パラメータ有効
    /// 
    /// 抽選の確率をプレイヤーの運を反映させるか
    u16 enableLuck01 : 1;
    
    /// 運パラメータ有効
    /// 
    /// 抽選の確率をプレイヤーの運を反映させるか
    u16 enableLuck02 : 1;
    
    /// 運パラメータ有効
    /// 
    /// 抽選の確率をプレイヤーの運を反映させるか
    u16 enableLuck03 : 1;
    
    /// 運パラメータ有効
    /// 
    /// 抽選の確率をプレイヤーの運を反映させるか
    u16 enableLuck04 : 1;
    
    /// 運パラメータ有効
    /// 
    /// 抽選の確率をプレイヤーの運を反映させるか
    u16 enableLuck05 : 1;
    
    /// 運パラメータ有効
    /// 
    /// 抽選の確率をプレイヤーの運を反映させるか
    u16 enableLuck06 : 1;
    
    /// 運パラメータ有効
    /// 
    /// 抽選の確率をプレイヤーの運を反映させるか
    u16 enableLuck07 : 1;
    
    /// 運パラメータ有効
    /// 
    /// 抽選の確率をプレイヤーの運を反映させるか
    u16 enableLuck08 : 1;
    
    /// 累積リセットするか
    u16 cumulateReset01 : 1;
    
    /// 累積リセットするか
    u16 cumulateReset02 : 1;
    
    /// 累積リセットするか
    u16 cumulateReset03 : 1;
    
    /// 累積リセットするか
    u16 cumulateReset04 : 1;
    
    /// 累積リセットするか
    u16 cumulateReset05 : 1;
    
    /// 累積リセットするか
    u16 cumulateReset06 : 1;
    
    /// 累積リセットするか
    u16 cumulateReset07 : 1;
    
    /// 累積リセットするか
    u16 cumulateReset08 : 1;
    
    /// X週目以降オフセット
    /// 
    /// 周回プレイ時のオフセット
    s8 GameClearOffset;
    
    /// PAD1
    u8 PAD1;
    
    /// PAD2
    u16 PAD2;
    
    /// 個数
    /// 
    /// 取得できるアイテムの個数
    u16 lotItemNum01;
    
    /// 個数
    /// 
    /// 取得できるアイテムの個数
    u16 lotItemNum02;
    
    /// 個数
    /// 
    /// 取得できるアイテムの個数
    u16 lotItemNum03;
    
    /// 個数
    /// 
    /// 取得できるアイテムの個数
    u16 lotItemNum04;
    
    /// 個数
    /// 
    /// 取得できるアイテムの個数
    u16 lotItemNum05;
    
    /// 個数
    /// 
    /// 取得できるアイテムの個数
    u16 lotItemNum06;
    
    /// 個数
    /// 
    /// 取得できるアイテムの個数
    u16 lotItemNum07;
    
    /// 個数
    /// 
    /// 取得できるアイテムの個数
    u16 lotItemNum08;
    
};

struct SKELETON_PARAM_ST {
    static constexpr const char* TYPE_NAME = "SKELETON_PARAM_ST";
    
    /// 首振りゲイン。高いほど早く回る
    f32 neckTurnGain;
    
    /// 原点から地面への高さ[cm]
    s16 originalGroundHeightMS;
    
    /// 足首を上げられる最低の高さ[cm]
    s16 minAnkleHeightMS;
    
    /// 足首を上げられる最大の高さ[cm]
    s16 maxAnkleHeightMS;
    
    /// ひざを曲げられる最大の角度(コサインの値)
    s16 cosineMaxKneeAngle;
    
    /// ひざを曲げられる最小の角度
    s16 cosineMinKneeAngle;
    
    /// 足首がくっついていると仮定する最低位置[cm]
    /// 
    /// 足首がこの位置よりも低い場合には足がくっついていると仮定する[cm]
    s16 footPlantedAnkleHeightMS;
    
    /// 足首が離れていると仮定する最高位置[cm]
    /// 
    /// 足首がこの位置よりも高い場合には足が離れていると仮定する[cm]
    s16 footRaisedAnkleHeightMS;
    
    /// 足首よりどれぐらい上からレイキャストするか[cm]
    s16 raycastDistanceUp;
    
    /// 足首からどれぐらい下までレイキャストするか[cm]
    s16 raycastDistanceDown;
    
    /// つま先位置X[cm]
    s16 footEndLS_X;
    
    /// つま先位置Y[cm]
    s16 footEndLS_Y;
    
    /// つま先位置Z[cm]
    s16 footEndLS_Z;
    
    /// 足の接地をオンオフするときのゲイン[1/100]
    s16 onOffGain;
    
    /// 地面の高さが高くなったときのゲイン[1/100]
    s16 groundAscendingGain;
    
    /// 地面の高さが低くなったときのゲイン[1/100]
    s16 groundDescendingGain;
    
    /// 足が上がったときのゲイン[1/100]
    s16 footRaisedGain;
    
    /// 足が接地したときのゲイン[1/100]
    s16 footPlantedGain;
    
    /// 足がロック/アンロックしたときのゲイン[1/100]
    s16 footUnlockGain;
    
    /// ひざの軸方向
    u8 kneeAxisType;
    
    /// 足/足首をロック（固定？）するか
    u8 useFootLocking;
    
    /// 足の接地が有効か
    u8 footPlacementOn;
    
    /// ひねり用ひざ関節の軸方向
    /// 
    /// ひねり用ひざ関節の回転を無視する軸方向
    u8 twistKneeAxisType;
    
    /// 首振り優先度
    /// 
    /// 低いほど先に回る。-1で首振りしない
    s8 neckTurnPriority;
    
    /// 首振り最大角度
    /// 
    /// この関節の最大旋回角度。この角度以上はまがらない
    u8 neckTurnMaxAngle;
    
    /// パディング1
    dummy8 pad1[2];
    
};

struct MATERIAL_EX_PARAM_ST {
    static constexpr const char* TYPE_NAME = "MATERIAL_EX_PARAM_ST";
    
    /// マテリアルパラメータ名
    /// 
    /// マテリアルのパラメータ名を設定する。最大31文字まで
    fixstrW paramName[32];
    
    /// マテリアルID
    /// 
    /// パラメータ変更対象のマテリアルのIDを指定する。-1の場合は全てを対象とする
    s32 mtlModifyingId;
    
    /// パディング
    dummy8 pad[28];
    
};

struct MULTI_PLAY_CORRECTION_PARAM_ST {
    static constexpr const char* TYPE_NAME = "MULTI_PLAY_CORRECTION_PARAM_ST";
    
    /// 協力クライアント1名特殊効果ID
    s32 client1SpEffectId;
    
    /// 協力クライアント2名特殊効果ID
    s32 client2SpEffectId;
    
    /// 協力クライアント3名特殊効果ID
    s32 client3SpEffectId;
    
    /// 協力人数変動時に上書きするか
    u8 bOverrideSpEffect;
    
    /// pad
    dummy8 pad3[19];
    
};

struct HIT_MTRL_PARAM_ST {
    static constexpr const char* TYPE_NAME = "HIT_MTRL_PARAM_ST";
    
    /// 音半径倍率
    /// 
    /// 1倍のときは普通。0にすると音半径が0になる（SEとSFXは無関係のゲーム的なパラメータ）
    f32 aiVolumeRate;
    
    /// ヒットマテリアルを踏んだ時にかかる特殊効果0
    /// 
    /// キャラがヒットマテリアルを踏んだ時に、設定した特殊効果0が発揮される
    s32 spEffectIdOnHit0;
    
    /// ヒットマテリアルを踏んだ時にかかる特殊効果1
    /// 
    /// キャラがヒットマテリアルを踏んだ時に、設定した特殊効果1が発揮される
    s32 spEffectIdOnHit1;
    
    /// フットエフェクトの高さタイプ
    /// 
    /// フットエフェクトを発生させる高さ
    u8 footEffectHeightType : 2;
    
    /// フットエフェクトの向きタイプ
    /// 
    /// フットエフェクトの発生向き
    u8 footEffectDirType : 2;
    
    /// 地面の高さタイプ
    /// 
    /// 水面などアイテムを浮かせるとき用
    u8 floorHeightType : 2;
    
    /// 落下ダメージ無効か
    /// 
    /// 落下ダメージを受けない床の場合に 1 を設定する。PCと敵、両方に対して有効。
    u8 disableFallDamage : 1;
    
    /// パディング
    /// 
    /// pad
    dummy8 pad1 : 1;
    
    /// 材質の固さタイプ
    /// 
    /// 材質の固さ。剛体のソフトコンタクト処理に使用。
    u8 hardnessType;
    
    /// 全身濡れるか
    /// 
    /// 全身濡れを、床マテリアル踏んだら濡れるのか、TAEで指定があれば濡れるのかを制御する。
    u8 wetTiming;
    
    /// パディング
    /// 
    /// pad
    dummy8 pad2 : 1;
    
    /// 濡れ特殊効果ID
    /// 
    /// 濡れ用特殊効果
    s32 spEffectId_forWet;
    
    /// ヒットマテリアルを踏んだ時にかかる特殊効果0　2周目
    s32 spEffectIdOnHit0_ClearCount_2;
    
    /// ヒットマテリアルを踏んだ時にかかる特殊効果0　3周目
    s32 spEffectIdOnHit0_ClearCount_3;
    
    /// ヒットマテリアルを踏んだ時にかかる特殊効果0　4周目
    s32 spEffectIdOnHit0_ClearCount_4;
    
    /// ヒットマテリアルを踏んだ時にかかる特殊効果0　5周目
    s32 spEffectIdOnHit0_ClearCount_5;
    
    /// ヒットマテリアルを踏んだ時にかかる特殊効果0　6周目
    s32 spEffectIdOnHit0_ClearCount_6;
    
    /// ヒットマテリアルを踏んだ時にかかる特殊効果0　7周目
    s32 spEffectIdOnHit0_ClearCount_7;
    
    /// ヒットマテリアルを踏んだ時にかかる特殊効果0　8周目
    s32 spEffectIdOnHit0_ClearCount_8;
    
    /// ヒットマテリアルを踏んだ時にかかる特殊効果1　2周目
    s32 spEffectIdOnHit1_ClearCount_2;
    
    /// ヒットマテリアルを踏んだ時にかかる特殊効果1　3周目
    s32 spEffectIdOnHit1_ClearCount_3;
    
    /// ヒットマテリアルを踏んだ時にかかる特殊効果1　4周目
    s32 spEffectIdOnHit1_ClearCount_4;
    
    /// ヒットマテリアルを踏んだ時にかかる特殊効果1　5周目
    s32 spEffectIdOnHit1_ClearCount_5;
    
    /// ヒットマテリアルを踏んだ時にかかる特殊効果1　6周目
    s32 spEffectIdOnHit1_ClearCount_6;
    
    /// ヒットマテリアルを踏んだ時にかかる特殊効果1　7周目
    s32 spEffectIdOnHit1_ClearCount_7;
    
    /// ヒットマテリアルを踏んだ時にかかる特殊効果1　8周目
    s32 spEffectIdOnHit1_ClearCount_8;
    
    /// 即死落下距離（PC用）
    /// 
    /// このヒットマテリアルに着地したとき、設定値以上の高さから落下していると着地時に即死する。PCに対してのみ有効。
    u32 fallDeathDist;
    
    /// 落下ダメージ補正倍率（PC用）
    /// 
    /// このヒットマテリアルに着地したとき、落下ダメージに対してこの倍率がかかる。PCに対してのみ有効。
    f32 fallDamageRate;
    
    /// pad
    dummy8 pad[12];
    
};

struct ROLE_PARAM_ST {
    static constexpr const char* TYPE_NAME = "ROLE_PARAM_ST";
    
    /// チームタイプ
    u8 teamType;
    
    dummy8 pad10[3];
    
    /// ファントムパラメータID(誓約ランク0)
    /// 
    /// 誓約ランクが0のときのファントムパラメータID
    s32 phantomParamId;
    
    /// 常駐特殊効果0
    s32 spEffectID0;
    
    /// 常駐特殊効果1
    s32 spEffectID1;
    
    /// 常駐特殊効果2
    s32 spEffectID2;
    
    /// 常駐特殊効果3
    s32 spEffectID3;
    
    /// 常駐特殊効果4
    s32 spEffectID4;
    
    /// 常駐特殊効果5
    s32 spEffectID5;
    
    /// 常駐特殊効果6
    s32 spEffectID6;
    
    /// 常駐特殊効果7
    s32 spEffectID7;
    
    /// 常駐特殊効果8
    s32 spEffectID8;
    
    /// 常駐特殊効果9
    s32 spEffectID9;
    
    /// SOSサインSFX ID
    /// 
    /// 他の人が出したSOSサインSFX ID
    s32 sosSignSfxId;
    
    /// 自分が出したSOSサインSFX ID
    s32 mySosSignSfxId;
    
    /// 召喚された時のアニメID
    /// 
    /// 召喚されてゲーム開始するときに再生するアニメID
    s32 summonStartAnimId;
    
    /// 報酬アイテム抽選ID
    /// 
    /// 獲得報酬のアイテム抽選パラメータID(-1でなし)
    s32 itemlotParamId;
    
    /// ボイスチャットグループ
    u8 voiceChatGroup;
    
    /// ロール名テキストカラー
    /// 
    /// ネットワークPCのFEに表示するロール名テキストの色
    u8 roleNameColor;
    
    dummy8 pad1[2];
    
    /// ロール名テキストID
    /// 
    /// ネットワークPCのFEに表示するロール名のテキストID
    s32 roleNameId;
    
    /// チームタイプ(巨人の木の実の種適応後)
    /// 
    /// 巨人の木の実の種の効果適応後に刺し変わるチームタイプ
    u8 teamTypeByGiantNut;
    
    dummy8 pad3[3];
    
    /// ファントムパラメータID(誓約ランク1)
    /// 
    /// 誓約ランクが1のときのファントムパラメータID
    s32 phantomParamId_vowRank1;
    
    /// ファントムパラメータID(誓約ランク2)
    /// 
    /// 誓約ランクが2のときのファントムパラメータID
    s32 phantomParamId_vowRank2;
    
    /// ファントムパラメータID(誓約ランク3)
    /// 
    /// 誓約ランクが3のときのファントムパラメータID
    s32 phantomParamId_vowRank3;
    
    /// SFX用特殊効果ID(誓約ランク0)
    /// 
    /// 誓約ランク0のときのSFX用特殊効果ID
    s32 spEffectID_vowRank0;
    
    /// SFX用特殊効果ID(誓約ランク1)
    /// 
    /// 誓約ランク1のときのSFX用特殊効果ID
    s32 spEffectID_vowRank1;
    
    /// SFX用特殊効果ID(誓約ランク2)
    /// 
    /// 誓約ランク2のときのSFX用特殊効果ID
    s32 spEffectID_vowRank2;
    
    /// SFX用特殊効果ID(誓約ランク3)
    /// 
    /// 誓約ランク3のときのSFX用特殊効果ID
    s32 spEffectID_vowRank3;
    
    /// サイン幻影用のファントムID
    /// 
    /// マルチプレイ誓約霊体用　サイン幻影用のファントムID指定
    s32 signPhantomId;
    
    dummy8 pad2[20];
    
};

struct CAMERA_PARAM_ST {
    static constexpr const char* TYPE_NAME = "CAMERA_PARAM_ST";
    
    /// キャラ基点オフセットX(キャラ空間)[m]
    f32 chrOrgOffsetX;
    
    /// キャラ基点オフセットY(キャラ空間)[m]
    f32 chrOrgOffsetY;
    
    /// キャラ基点オフセットZ(キャラ空間)[m]
    f32 chrOrgOffsetZ;
    
    /// 通常用キャラ並進追尾率XZ[%]
    f32 chrTransChaseRateXZ_ForNormal;
    
    /// 通常用キャラ並進追尾率Y[%]
    f32 chrTransChaseRateY_ForNormal;
    
    /// 壁回避用キャラ並進追尾率XZ[%]
    f32 chrTransChaseRateXZ_ForEscapeWall;
    
    /// 壁回避用キャラ並進追尾率Y[%]
    f32 chrTransChaseRateY_ForEscapeWall;
    
    /// 予約
    dummy8 reserved_chr2[12];
    
    /// プレイヤー移動方向のカメラX軸回転追従を有効にするかどうか
    b32 isEnableChrChaseRotX;
    
    /// プレイヤー移動方向のカメラX軸回転追従の無効角度[deg]
    angle32 chrChaseRotXInvalidAngle;
    
    /// 予約
    dummy8 reserved_chr[16];
    
    /// 左右移動による支点距離率用最大距離[m]
    f32 fulcrumDistRateByLrMoveMaxDist;
    
    /// 左右移動による支点距離率最小値[%]
    f32 fulcrumDistRateByLrMoveMin;
    
    /// 左右移動による支点距離率最大値[%]
    f32 fulcrumDistRateByLrMoveMax;
    
    /// 支点距離率(1.0:カメラとの距離, 0.0:無効)[%]
    f32 fulcrumDistRate;
    
    /// 支点距離最低値[m]
    f32 fulcrumDistMin;
    
    /// 予約
    dummy8 reserved_fulcrum[4];
    
    /// 壁衝突時ターゲット距離追尾率XZ[%]
    f32 targetChaseDistRateXZ_ForHitWall;
    
    /// 壁衝突時ターゲット距離追尾率Y[%]
    f32 targetChaseDistRateY_ForHitWall;
    
    /// ターゲット並進追尾率XZ[%]
    f32 targetTransChaseRateXZ;
    
    /// ターゲット並進追尾率Y[%]
    f32 targetTransChaseRateY;
    
    /// ターゲットX軸回転追尾率[%]
    f32 targetRotXChaseRate;
    
    /// 通常用ターゲット追尾率XZ[%]
    f32 targetChaseRateXZForNormal;
    
    /// 壁回避用ターゲット追尾率XZ[%]
    f32 targetChaseRateXZForEscapeWall;
    
    /// ターゲット追尾率Y[%]
    f32 targetChaseRateY;
    
    /// ターゲット追尾率最小角度[deg]
    angle32 targetChaseRateAngMin;
    
    /// ターゲット追尾率最大角度[deg]
    angle32 targetChaseRateAngMax;
    
    /// ターゲット距離追尾率XZ[%]
    f32 targetChaseDistRateXZ;
    
    /// ターゲット距離追尾率Y[%]
    f32 targetChaseDistRateY;
    
    /// ロック中ターゲット追尾率XZ[%]
    f32 targetChaseRateAtLockXZ;
    
    /// ロック中ターゲット追尾率Y[%]
    f32 targetChaseRateAtLockY;
    
    /// ロック中ターゲット追尾率最小角度[deg]
    angle32 targetChaseRateAngAtLockMin;
    
    /// ロック中ターゲット追尾率最大角度[deg]
    angle32 targetChaseRateAngAtLockMax;
    
    /// 壁衝突時ターゲット距離追尾補正時間[sec]
    f32 targetChaseDistRateTime;
    
    /// 予約
    dummy8 reserved_target[4];
    
    /// 操作終了による並進追尾待ち時間[sec]
    f32 transChaseByControlEndWaitTime;
    
    /// 操作終了による並進追尾解放時間[sec]
    f32 transChaseByControlEndReleaseTime;
    
    /// 回転操作終了待ち時間[sec]
    f32 rotCtrlEndWaitTime;
    
    /// 回転操作終了解放時間[sec]
    f32 rotCtrlEndReleaseTime;
    
    /// 高速回転率増加時間[sec]
    f32 rotHiSpeedRateIncTime;
    
    /// X軸回転最小値[deg]
    angle32 rotRangeXMin;
    
    /// X軸回転最大値[deg]
    angle32 rotRangeXMax;
    
    /// ロック中X軸回転最小値[deg]
    angle32 rotRangeXAtLockMin;
    
    /// ロック中X軸回転最大値[deg]
    angle32 rotRangeXAtLockMax;
    
    /// Y軸回転最小値[deg]
    angle32 rotRangeYMin;
    
    /// Y軸回転最大値[deg]
    angle32 rotRangeYMax;
    
    /// ロック中X軸回転補間開始高さ[m]
    f32 rotRangeLerpBeginHeight;
    
    /// ロック中X軸回転補間終了高さ[m]
    f32 rotRangeLerpEndHeight;
    
    /// X軸回転速度最小値[deg/sec]
    angle32 rotSpeed_MinX;
    
    /// Y軸回転速度最小値[deg/sec]
    angle32 rotSpeed_MinY;
    
    /// X軸回転速度最大値[deg/sec]
    angle32 rotSpeed_MaxX;
    
    /// Y軸回転速度最大値[deg/sec]
    angle32 rotSpeed_MaxY;
    
    /// X軸高速回転速度最小値[deg/sec]
    angle32 rotHiSpeed_MinX;
    
    /// Y軸高速回転速度最小値[deg/sec]
    angle32 rotHiSpeed_MinY;
    
    /// X軸高速回転速度最大値[deg/sec]
    angle32 rotHiSpeed_MaxX;
    
    /// Y軸高速回転速度最大値[deg/sec]
    angle32 rotHiSpeed_MaxY;
    
    /// ダイレクトピッチ角度[deg]
    angle32 directPitchAng;
    
    /// ダイレクトピッチ率[%]
    f32 directPitchRate;
    
    /// 回転から停止までの遷移時間[sec]
    f32 rotSpeedTransTime;
    
    /// Y軸回転基準値[deg]
    /// 
    /// プレイヤーの向きに対しての角度です。180.0でプレイヤーの真後ろ、90.0でプレイヤーの右側となります。
    angle32 rotBaseY;
    
    /// Y軸リセット基準値[deg]
    /// 
    /// プレイヤーの向きに対しての角度です。180.0でプレイヤーの真後ろ、90.0でプレイヤーの右側となります。
    angle32 resetBaseY;
    
    /// 予約
    dummy8 reserved_manual[8];
    
    /// ロック回転追尾率X[%]
    f32 lockRotChaseRateX;
    
    /// ロック回転追尾率Y[%]
    f32 lockRotChaseRateY;
    
    /// ロック回転追尾遊び角度X[deg]
    angle32 lockRotChasePlayAngX;
    
    /// ロック回転追尾遊び角度Y[deg]
    angle32 lockRotChasePlayAngY;
    
    /// ロックターゲット位置の影響率[%]
    /// 
    /// 低いほどロックターゲット位置がキャラ基点に近づく
    f32 lockTgtPosRate;
    
    /// 強制前方ロック時間[sec]
    f32 forceFrontLockTime;
    
    /// ロックカメラ調整X軸回転最大値[deg]
    angle32 lockCamAdjustRot_MaxX;
    
    /// ロックカメラ調整Y軸回転最大値[deg]
    angle32 lockCamAdjustRot_MaxY;
    
    /// ロックカメラ調整回転追尾率[%]
    f32 lockCamAdjustRotChaseRate;
    
    /// ロックカメラパラム補間率[%]
    f32 lockCamParamLerpRate;
    
    /// 予約
    dummy8 reserved_lock[24];
    
    /// 落下時補正：回転速度[deg/s]
    angle32 fallTargetRot;
    
    /// 落下時補正：最低時間[sec]
    f32 fallMinTime;
    
    /// 落下時補正：最大時間[sec]
    f32 fallMaxTime;
    
    /// 落下時補正：落下高度マージン[m]
    /// 
    /// この高度以上落下したら落下したとみなし、補正を発動します。
    f32 fallHeightMargine;
    
    /// 落下時補正：基準落下高度[m]
    /// 
    /// この高度以上落下したら100％で補正します
    f32 fallBaseHeight;
    
    /// 落下時補正：有効にするかどうか
    b32 isEnableFall;
    
    /// 予約
    dummy8 reserved_fall[8];
    
    /// カメラキャスト球半径[m]
    f32 camCastSphereRadius;
    
    /// カメラ安全マージン率[%]
    f32 camSafeMarginRate;
    
    /// カメラ安全マージン最大[m]
    f32 camSafeMarginMax;
    
    /// 壁回避X軸回転加算値[deg/sec]
    angle32 escapeWallRotAddX;
    
    /// 壁回避Y軸回転加算値[deg/sec]
    angle32 escapeWallRotAddY;
    
    /// 壁回避X軸弱回転加算値[deg/sec]
    angle32 escapeWallWeakRotAddX;
    
    /// 壁回避Y軸弱回転加算値[deg/sec]
    angle32 escapeWallWeakRotAddY;
    
    /// 壁回避弱体化開始率[%]
    f32 escapeWallWeakBeginRatio;
    
    /// 壁回避X軸回転最大値[deg/sec]
    angle32 escapeWallRotMaxX;
    
    /// 壁回避Y軸回転最大値[deg/sec]
    angle32 escapeWallRotMaxY;
    
    /// 壁回避回転減衰率[%]
    f32 escapeWallRotDampRatio;
    
    /// 壁回避羽角度[deg]
    angle32 escapeWallWingAngY;
    
    /// 壁回避羽長[m]
    f32 escapeWallWingLen;
    
    /// 壁回避羽半径[m]
    f32 escapeWallWingRadius;
    
    /// 壁回避羽間隔[m]
    f32 escapeWallWingSeparate;
    
    /// 半透明処理用のキャスト球半径[m]
    f32 camCastSphereRadiusForFade;
    
    /// デフォルトカメラ：有効にするかどうか
    b32 isEnableDefaultCamera;
    
    /// デフォルトカメラ：基準のカメラ角度X[deg]
    angle32 defaultAngX;
    
    /// デフォルトカメラ：補間時の回転速度X[deg/sec]
    angle32 defaultRot;
    
    /// 予約
    dummy8 reserved_default[4];
    
    /// ワイヤー時補正：回転速度X[deg/sec]
    angle32 wireRotX;
    
    /// ワイヤー時補正：回転速度Y[deg/sec]
    angle32 wireRotY;
    
    /// 予約
    dummy8 reserved_wire[8];
    
    /// プレイヤーを半透明処理するキャラ基点からのカメラ距離[m]
    f32 playerFadeDist;
    
    /// 予約
    dummy8 reserved_other[12];
    
};

struct EQUIP_PARAM_WEAPON_ST {
    static constexpr const char* TYPE_NAME = "EQUIP_PARAM_WEAPON_ST";
    
    /// 行動バリエーションID
    /// 
    /// 攻撃時に参照する行動パラメータIDを決定するときに使う
    s32 behaviorVariationId;
    
    /// ソートID(-1:集めない)(プログラム内で強化レベルを加味するため s32 では７桁が限界)
    s32 sortId;
    
    /// 徘徊装備ID
    /// 
    /// 徘徊ゴースト用の差し替え装備ID.
    u32 wanderingEquipId;
    
    /// 重量[kg].
    f32 weight;
    
    /// 装備重量比率
    f32 weaponWeightRate;
    
    /// 修理価格
    /// 
    /// 修理基本価格
    s32 fixPrice;
    
    /// 強化価格
    s32 reinforcePrice;
    
    /// 売却価格
    /// 
    /// 販売価格
    s32 sellValue;
    
    /// 筋力補正
    /// 
    /// キャラパラ補正値.
    f32 correctStrength;
    
    /// 俊敏補正
    /// 
    /// キャラパラ補正値.
    f32 correctAgility;
    
    /// 魔力補正
    /// 
    /// キャラパラ補正値.
    f32 correctMagic;
    
    /// 信仰補正
    /// 
    /// キャラパラ補正値.
    f32 correctFaith;
    
    /// ガード時物理攻撃カット率
    /// 
    /// ガード時に物理攻撃力をどれだけカットするか設定する。
    f32 physGuardCutRate;
    
    /// ガード時魔法攻撃カット率
    /// 
    /// ガード時に魔法攻撃力をどれだけカットするか設定する。
    f32 magGuardCutRate;
    
    /// ガード時炎攻撃力カット率
    /// 
    /// ガード時に炎攻撃力をどれだけカットするか設定する。
    f32 fireGuardCutRate;
    
    /// ガード時電撃攻撃力カット率
    /// 
    /// ガード時に電撃攻撃力をどれだけカットするか設定する。
    f32 thunGuardCutRate;
    
    /// 特殊効果行動ID0
    /// 
    /// 武器に特殊効果を追加するときに登録する
    s32 spEffectBehaviorId0;
    
    /// 特殊効果行動ID1
    /// 
    /// 武器に特殊効果を追加するときに登録する
    s32 spEffectBehaviorId1;
    
    /// 特殊効果行動ID2
    /// 
    /// 武器に特殊効果を追加するときに登録する
    s32 spEffectBehaviorId2;
    
    /// 常駐特殊効果ID0
    s32 residentSpEffectId;
    
    /// 常駐特殊効果ID1
    s32 residentSpEffectId1;
    
    /// 常駐特殊効果ID2
    s32 residentSpEffectId2;
    
    /// 素材ID
    /// 
    /// 武器強化に必要な素材パラメータID
    s32 materialSetId;
    
    /// 派生元
    /// 
    /// この武器の強化元武器ID
    s32 originEquipWep;
    
    /// 派生元 強化+1
    /// 
    /// この武器の強化元武器ID1
    s32 originEquipWep1;
    
    /// 派生元 強化+2
    /// 
    /// この武器の強化元武器ID2
    s32 originEquipWep2;
    
    /// 派生元 強化+3
    /// 
    /// この武器の強化元武器ID3
    s32 originEquipWep3;
    
    /// 派生元 強化+4
    /// 
    /// この武器の強化元武器ID4
    s32 originEquipWep4;
    
    /// 派生元 強化+5
    /// 
    /// この武器の強化元武器ID5
    s32 originEquipWep5;
    
    /// 派生元 強化+6
    /// 
    /// この武器の強化元武器ID6
    s32 originEquipWep6;
    
    /// 派生元 強化+7
    /// 
    /// この武器の強化元武器ID7
    s32 originEquipWep7;
    
    /// 派生元 強化+8
    /// 
    /// この武器の強化元武器ID8
    s32 originEquipWep8;
    
    /// 派生元 強化+9
    /// 
    /// この武器の強化元武器ID9
    s32 originEquipWep9;
    
    /// 派生元 強化+10
    /// 
    /// この武器の強化元武器ID10
    s32 originEquipWep10;
    
    /// 派生元 強化+11
    /// 
    /// この武器の強化元武器ID11
    s32 originEquipWep11;
    
    /// 派生元 強化+12
    /// 
    /// この武器の強化元武器ID12
    s32 originEquipWep12;
    
    /// 派生元 強化+13
    /// 
    /// この武器の強化元武器ID13
    s32 originEquipWep13;
    
    /// 派生元 強化+14
    /// 
    /// この武器の強化元武器ID14
    s32 originEquipWep14;
    
    /// 派生元 強化+15
    /// 
    /// この武器の強化元武器ID15
    s32 originEquipWep15;
    
    /// 特攻Aダメージ倍率
    /// 
    /// 特攻A用のダメージ倍率
    f32 weakA_DamageRate;
    
    /// 特攻Bダメージ倍率
    /// 
    /// 特攻B用のダメージ倍率
    f32 weakB_DamageRate;
    
    /// 特攻Cダメージ倍率
    /// 
    /// 特攻C用のダメージ倍率
    f32 weakC_DamageRate;
    
    /// 特攻Dダメージ倍率
    /// 
    /// 特攻D用のダメージ倍率
    f32 weakD_DamageRate;
    
    /// ベイグラント時アイテム抽選ID
    /// 
    /// -1：ベイグラントなし 0：抽選なし 1～：抽選あり
    s32 vagrantItemLotId;
    
    /// ベイグラントボーナス敵ドロップアイテム抽選ID
    /// 
    /// -1：ドロップなし 0：抽選なし 1～：抽選あり
    s32 vagrantBonusEneDropItemLotId;
    
    /// ベイグラントアイテム敵ドロップアイテム抽選ID
    /// 
    /// -1：ドロップなし 0：抽選なし 1～：抽選あり
    s32 vagrantItemEneDropItemLotId;
    
    /// 装備モデル番号
    /// 
    /// 装備モデルの番号.
    u16 equipModelId;
    
    /// アイコンID
    /// 
    /// メニューアイコンID.
    u16 iconId;
    
    /// 耐久度
    /// 
    /// 初期耐久度.
    u16 durability;
    
    /// 耐久度最大値
    /// 
    /// 新品耐久度.
    u16 durabilityMax;
    
    /// 投げ抜け攻撃力基本値
    /// 
    /// 投げ抜け攻撃力の基本値
    u16 attackThrowEscape;
    
    /// パリィ発生時間[frame]
    /// 
    /// パリィダメージの寿命を制限する。TimeActで設定されている以上には持続しない。
    s16 parryDamageLife;
    
    /// 物理攻撃力基本値
    /// 
    /// 敵のＨＰにダメージを与える物理属性攻撃の基本値
    u16 attackBasePhysics;
    
    /// 魔法攻撃力基本値
    /// 
    /// 敵のＨＰにダメージを与える魔法属性攻撃の基本値
    u16 attackBaseMagic;
    
    /// 炎攻撃力基本値
    /// 
    /// 敵のＨＰにダメージを与える炎属性攻撃の基本値
    u16 attackBaseFire;
    
    /// 電撃攻撃力基本値
    /// 
    /// 敵のＨＰにダメージを与える電撃属性攻撃の基本値
    u16 attackBaseThunder;
    
    /// スタミナ攻撃力
    /// 
    /// 敵へのスタミナ攻撃力
    u16 attackBaseStamina;
    
    /// SA武器攻撃力
    /// 
    /// スーパーアーマー基本攻撃力
    u16 saWeaponDamage;
    
    /// SA耐久値
    /// 
    /// 攻撃モーション中に使われる追加SA耐久値
    s16 saDurability;
    
    /// ガード範囲[deg]
    /// 
    /// 武器のガード時の防御発生範囲角度
    s16 guardAngle;
    
    /// ガード時スタミナ防御力
    /// 
    /// ガード成功時に、敵のスタミナ攻撃に対する防御力
    s16 staminaGuardDef;
    
    /// 強化タイプID
    s16 reinforceTypeId;
    
    /// トロフィーＳグレードID
    /// 
    /// トロフィーシステムに関係あるか？
    s16 trophySGradeId;
    
    /// トロフィーSEQ番号
    /// 
    /// トロフィーのSEQ番号（１３～２９）
    s16 trophySeqId;
    
    /// 投げ攻撃力倍率
    /// 
    /// 投げの攻撃力倍率
    s16 throwAtkRate;
    
    /// 弓飛距離補正[％]
    /// 
    /// 飛距離を伸ばすアップ％
    s16 bowDistRate;
    
    /// 装備モデル種別
    /// 
    /// 装備モデルの種別.
    u8 equipModelCategory;
    
    /// 装備モデル性別
    /// 
    /// 装備モデルの性別.
    u8 equipModelGender;
    
    /// 武器カテゴリ
    /// 
    /// 武器のカテゴリ.
    u8 weaponCategory;
    
    /// 武器モーションカテゴリ
    /// 
    /// 武器モーションのカテゴリ.
    u8 wepmotionCategory;
    
    /// ガードモーションカテゴリ
    /// 
    /// ガードモーションのカテゴリ
    u8 guardmotionCategory;
    
    /// 攻撃材質
    /// 
    /// 攻撃パラから使用される攻撃材質
    u8 atkMaterial;
    
    /// 防御SE材質1
    /// 
    /// 攻撃パラから使用される防御SE材質1
    u16 defSeMaterial1;
    
    /// 補正タイプ（物理攻撃力）
    /// 
    /// 一次パラメータによる物理攻撃力の補正グラフのタイプを決める
    u8 correctType_Physics;
    
    /// 特殊属性
    /// 
    /// 武器の特殊属性値
    u8 spAttribute;
    
    /// 特殊攻撃カテゴリ（50～999まで可能)
    u16 spAtkcategory;
    
    /// 武器モーション片手ID
    /// 
    /// 片手装備時の基本モーションID.
    u8 wepmotionOneHandId;
    
    /// 武器モーション両手ID
    /// 
    /// 両手装備時の基本モーションID.
    u8 wepmotionBothHandId;
    
    /// 装備適正筋力
    /// 
    /// 装備適正値.
    u8 properStrength;
    
    /// 装備適正俊敏
    /// 
    /// 装備適正値.
    u8 properAgility;
    
    /// 装備適正魔力
    /// 
    /// 装備適正値.
    u8 properMagic;
    
    /// 装備適正信仰
    /// 
    /// 装備適正値.
    u8 properFaith;
    
    /// 筋力オーバー開始値
    u8 overStrength;
    
    /// パリィ攻撃基本値
    /// 
    /// 敵のパリィをやぶるための基本値
    u8 attackBaseParry;
    
    /// パリィ防御値
    /// 
    /// パリィ判定時に、パリィになるかガードになるかの判定に利用
    u8 defenseBaseParry;
    
    /// はじき防御力基本値
    /// 
    /// ガード敵を攻撃した時に、はじかれるかどうかの判定に利用
    u8 guardBaseRepel;
    
    /// はじき攻撃力基本値
    /// 
    /// 敵の攻撃をガードしたときに、はじけるかどうかの判定に利用
    u8 attackBaseRepel;
    
    /// ガードカット無効化倍率
    /// 
    /// 相手のガードカットを無効化させる倍率。-100で完全無効。100で相手の防御効果倍増。
    s8 guardCutCancelRate;
    
    /// ガードレベル
    /// 
    /// ガードしたとき、敵の攻撃をどのガードモーションで受けるか？を決める
    s8 guardLevel;
    
    /// 斬撃攻撃カット率
    /// 
    /// 攻撃タイプを見て、斬撃属性のダメージを何％カットするか？を指定
    s8 slashGuardCutRate;
    
    /// 軽打攻撃カット率
    /// 
    /// 攻撃タイプを見て、軽打属性のダメージを何％カットするか？を指定
    s8 lightHitGuardCutRate;
    
    /// 刺突攻撃カット率
    /// 
    /// 攻撃タイプを見て、刺突属性のダメージを何％カットするか？を指定
    s8 thrustGuardCutRate;
    
    /// ガード時毒耐性ダメージカット率
    /// 
    /// ガード時に毒耐性攻撃力[point]（特殊効果パラメータに設定）をどれだけカットするか
    s8 poisonGuardResist;
    
    /// ガード時疫病耐性ダメージカット率
    /// 
    /// ガード時に疫病耐性攻撃力[point]（特殊効果パラメータに設定）をどれだけカットするか
    s8 diseaseGuardResist;
    
    /// ガード時出血耐性ダメージカット率
    /// 
    /// ガード時に出血耐性攻撃力[point]（特殊効果パラメータに設定）をどれだけカットするか
    s8 bloodGuardResist;
    
    /// ガード時呪耐性ダメージカット率
    /// 
    /// ガード時に呪耐性攻撃力[point]（特殊効果パラメータに設定）をどれだけカットするか
    s8 curseGuardResist;
    
    /// 耐久度で分岐するか
    /// 
    /// 魔法使用武器対応：耐久度によるモーション分岐
    u8 isDurabilityDivergence;
    
    /// 右手装備可能か.
    u8 rightHandEquipable : 1;
    
    /// 左手装備可能か.
    u8 leftHandEquipable : 1;
    
    /// 両手装備可能か.
    u8 bothHandEquipable : 1;
    
    /// 弓矢弾装備
    /// 
    /// 弓用矢弾装備可能か.
    u8 arrowSlotEquipable : 1;
    
    /// 弩矢弾装備
    /// 
    /// 弩用矢弾装備可能か.
    u8 boltSlotEquipable : 1;
    
    /// ガード可能
    /// 
    /// 左手装備時L1でガード
    u8 enableGuard : 1;
    
    /// パリィ可能
    /// 
    /// 左手装備時L2でパリィ
    u8 enableParry : 1;
    
    /// 魔法可能
    /// 
    /// 攻撃時に魔法発動
    u8 enableMagic : 1;
    
    /// 呪術可能
    /// 
    /// 攻撃時に呪術発動
    u8 enableSorcery : 1;
    
    /// 奇蹟可能
    /// 
    /// 攻撃時に奇蹟発動
    u8 enableMiracle : 1;
    
    /// 誓約魔法可能
    /// 
    /// 攻撃時に誓約魔法発動
    u8 enableVowMagic : 1;
    
    /// 通常
    /// 
    /// メニュー表示用攻撃タイプ。通常か
    u8 isNormalAttackType : 1;
    
    /// 打撃
    /// 
    /// メニュー表示用攻撃タイプ。打撃か
    u8 isBlowAttackType : 1;
    
    /// 斬撃
    /// 
    /// メニュー表示用攻撃タイプ。斬撃か
    u8 isSlashAttackType : 1;
    
    /// 刺突
    /// 
    /// メニュー表示用攻撃タイプ。刺突か
    u8 isThrustAttackType : 1;
    
    /// エンチャント可能か？
    /// 
    /// 松脂などで、強化可能か？
    u8 isEnhance : 1;
    
    /// 人間性補正あるか
    /// 
    /// 人間性による攻撃力補正があるか
    u8 isHeroPointCorrect : 1;
    
    /// 強化できるか？
    /// 
    /// 強化ショップで強化対象リストに並ぶ(仕様変更で削除するかも？)
    u8 isCustom : 1;
    
    /// 転職リセット禁止か
    u8 disableBaseChangeReset : 1;
    
    /// 修理禁止か
    u8 disableRepair : 1;
    
    /// ダークハンドか
    u8 isDarkHand : 1;
    
    /// DLC用シンプルモデルありか
    /// 
    /// ＤＬＣ用シンプルモデルが存在しているか
    u8 simpleModelForDlc : 1;
    
    /// ランタン武器か
    u8 lanternWep : 1;
    
    /// 対霊武器か
    u8 isVersusGhostWep : 1;
    
    /// 武器転職カテゴリ。属性アイコン表示に使用します。
    u8 baseChangeCategory : 6;
    
    /// 竜狩りか
    /// 
    /// 竜狩り武器か
    u8 isDragonSlayer : 1;
    
    /// 預けれるか
    /// 
    /// 倉庫に預けれるか
    u8 isDeposit : 1;
    
    /// マルチドロップ共有禁止か
    u8 disableMultiDropShare : 1;
    
    /// 捨てれるか
    /// 
    /// アイテムを捨てれるか？TRUE=捨てれる
    u8 isDiscard : 1;
    
    /// その場に置けるか
    /// 
    /// アイテムをその場に置けるか？TRUE=置ける
    u8 isDrop : 1;
    
    /// 入手時ログ表示するか
    /// 
    /// アイテムの入手時にアイテム取得ログへ表示するか(○=アイテム取得ログへ表示する）
    u8 isNoticeLog : 1;
    
    /// 入手時ダイアログ表示するか
    /// 
    /// 取得時に時止めダイアログを表示するか
    u8 isNoticeDialog : 1;
    
    /// パディング1
    dummy8 pad1 : 3;
    
    /// 防御SFX材質1
    /// 
    /// 攻撃パラから使用される防御SFX材質1
    u16 defSfxMaterial1;
    
    /// 武器コライダブル設定
    /// 
    /// 武器のコライダブル設定
    u8 wepCollidableType0;
    
    /// 武器1コライダブル設定
    /// 
    /// 武器1のコライダブル設定
    u8 wepCollidableType1;
    
    /// ジャスガ時スタミナ防御力
    /// 
    /// ジャスガ成功時に、敵のスタミナ攻撃に対する防御力
    s16 staminaJustGuardDef;
    
    /// 剣閃SfxID_０(-1無効)
    s32 traceSfxId0;
    
    /// 根元剣閃ダミポリID_０
    /// 
    /// 剣閃根元ダミポリID_０(-1無効)
    s32 traceDmyIdHead0;
    
    /// 剣先剣閃ダミポリID_０
    /// 
    /// 剣閃剣先ダミポリID_０
    s32 traceDmyIdTail0;
    
    /// 剣閃SfxID_１(-1無効)
    s32 traceSfxId1;
    
    /// 根元剣閃ダミポリID_１
    /// 
    /// 剣閃根元ダミポリID_１(-1無効)
    s32 traceDmyIdHead1;
    
    /// 剣先剣閃ダミポリID_１
    /// 
    /// 剣閃剣先ダミポリID_１
    s32 traceDmyIdTail1;
    
    /// 剣閃SfxID_２(-1無効)
    s32 traceSfxId2;
    
    /// 根元剣閃ダミポリID_２
    /// 
    /// 剣閃根元ダミポリID_２(-1無効)
    s32 traceDmyIdHead2;
    
    /// 剣先剣閃ダミポリID_２
    /// 
    /// 剣閃剣先ダミポリID_２
    s32 traceDmyIdTail2;
    
    /// 剣閃SfxID_３(-1無効)
    s32 traceSfxId3;
    
    /// 根元剣閃ダミポリID_３
    /// 
    /// 剣閃根元ダミポリID_３(-1無効)
    s32 traceDmyIdHead3;
    
    /// 剣先剣閃ダミポリID_３
    /// 
    /// 剣閃剣先ダミポリID_３
    s32 traceDmyIdTail3;
    
    /// 剣閃SfxID_４(-1無効)
    s32 traceSfxId4;
    
    /// 根元剣閃ダミポリID_４
    /// 
    /// 剣閃根元ダミポリID_４(-1無効)
    s32 traceDmyIdHead4;
    
    /// 剣先剣閃ダミポリID_４
    /// 
    /// 剣閃剣先ダミポリID_４
    s32 traceDmyIdTail4;
    
    /// 剣閃SfxID_５(-1無効)
    s32 traceSfxId5;
    
    /// 根元剣閃ダミポリID_５
    /// 
    /// 剣閃根元ダミポリID_５(-1無効)
    s32 traceDmyIdHead5;
    
    /// 剣先剣閃ダミポリID_５
    /// 
    /// 剣閃剣先ダミポリID_５
    s32 traceDmyIdTail5;
    
    /// 剣閃SfxID_６(-1無効)
    s32 traceSfxId6;
    
    /// 根元剣閃ダミポリID_６
    /// 
    /// 剣閃根元ダミポリID_６(-1無効)
    s32 traceDmyIdHead6;
    
    /// 剣先剣閃ダミポリID_６
    /// 
    /// 剣閃剣先ダミポリID_６
    s32 traceDmyIdTail6;
    
    /// 剣閃SfxID_７(-1無効)
    s32 traceSfxId7;
    
    /// 根元剣閃ダミポリID_７
    /// 
    /// 剣閃根元ダミポリID_７(-1無効)
    s32 traceDmyIdHead7;
    
    /// 剣先剣閃ダミポリID_７
    /// 
    /// 剣閃剣先ダミポリID_７
    s32 traceDmyIdTail7;
    
    /// 防御SFX材質2
    /// 
    /// 攻撃パラから使用される防御SFX材質2
    u16 defSfxMaterial2;
    
    /// 防御SE材質2
    /// 
    /// 攻撃パラから使用される防御SE材質2
    u16 defSeMaterial2;
    
    /// 吸着位置Id
    /// 
    /// 武器吸着位置パラメータのId。この値により武器が吸着する位置を決定する(-1：旧ソースコード直書きの値を参照する)
    s32 absorpParamId;
    
    /// 強靭度 補正倍率
    /// 
    /// 強靭度の基本値を補正する倍率です
    f32 toughnessCorrectRate;
    
    /// 防具SAダメージ倍率が初期値でも有効か？
    /// 
    /// 防具SAが初期値でも強靭度計算が行われるかどうか。詳細は強靭度仕様書.xlsxを確認してください
    u8 isValidTough_ProtSADmg : 1;
    
    /// 双剣か
    /// 
    /// この武器は双剣か。
    u8 isDualBlade : 1;
    
    /// 自動装填可能か
    /// 
    /// 新しくこの武器を拾っ時に対象装備スロットに自動で装備するかどうか。矢・ボルトの場合は、空のスロットに。それ以外の場合は、強制的に右手武器１に。
    u8 isAutoEquip : 1;
    
    /// 緊急回避可能か
    /// 
    /// 緊急回避可能な武器かどうか。ビヘイビアスクリプトに渡す。
    u8 isEnableEmergencyStep : 1;
    
    /// カットシーン中非表示か
    u8 invisibleOnRemo : 1;
    
    /// パディング2
    dummy8 pad2 : 3;
    
    /// 補正タイプ（魔法攻撃力）
    /// 
    /// 一次パラメータによる魔法攻撃力の補正グラフのタイプを決める
    u8 correctType_Magic;
    
    /// 補正タイプ（炎攻撃力）
    /// 
    /// 一次パラメータによる炎攻撃力の補正グラフのタイプを決める
    u8 correctType_Fire;
    
    /// 補正タイプ（雷攻撃力）
    /// 
    /// 一次パラメータによる雷攻撃力の補正グラフのタイプを決める
    u8 correctType_Thunder;
    
    /// 特攻Eダメージ倍率
    /// 
    /// 特攻E用のダメージ倍率
    f32 weakE_DamageRate;
    
    /// 特攻Fダメージ倍率
    /// 
    /// 特攻F用のダメージ倍率
    f32 weakF_DamageRate;
    
    /// ガード時闇攻撃力カット率
    /// 
    /// ガード時に闇攻撃力をどれだけカットするか設定する。
    f32 darkGuardCutRate;
    
    /// 闇攻撃力基本値
    /// 
    /// 敵のＨＰにダメージを与える闇属性攻撃の基本値
    u16 attackBaseDark;
    
    /// 補正タイプ（闇攻撃力）
    /// 
    /// 一次パラメータによる闇攻撃力の補正グラフのタイプを決める
    u8 correctType_Dark;
    
    /// 補正タイプ（毒攻撃力）
    /// 
    /// 一次パラメータによる毒攻撃力の補正グラフのタイプを決める
    u8 correctType_Poison;
    
    /// 剣戟ID
    /// 
    /// 【削除予定】→アーツパラメータへ移動。剣戟判別用ID。ビヘイビアスクリプトに渡す。
    s32 swordArtsId;
    
    /// 補正タイプ（出血攻撃力）
    /// 
    /// 一次パラメータによる出血攻撃力の補正グラフのタイプを決める
    u8 correctType_Blood;
    
    /// 装備適正運
    /// 
    /// 装備適正値.
    u8 properLuck;
    
    /// ガード時冷気耐性ダメージカット率
    /// 
    /// ガード時に冷気耐性攻撃力[point]（特殊効果パラメータに設定）をどれだけカットするか
    s8 freezeGuardResist;
    
    /// 自動補充タイプ
    /// 
    /// 自動補充する/しないの可否およびデフォルト設定をコントロールします
    u8 autoReplenishType;
    
    /// アーツパラメータID
    /// 
    /// アーツパラメータのID
    s32 swordArtsParamId;
    
    /// 運補正
    /// 
    /// キャラパラ補正値.
    f32 correctLuck;
    
    /// 矢筒(弾倉)表示モデル用装備ID
    /// 
    /// 矢筒(弾倉)表示モデルの装備品番号。弓の場合は矢筒、弩の場合は弾倉として表示する。
    u32 arrowBoltEquipId;
    
    /// 常駐SfxId１
    /// 
    /// 常駐SfxId1
    s32 residentSfxId_1;
    
    /// 常駐SfxId２
    /// 
    /// 常駐SfxId2
    s32 residentSfxId_2;
    
    /// 常駐SfxId３
    /// 
    /// 常駐SfxId3
    s32 residentSfxId_3;
    
    /// 常駐SfxId４
    /// 
    /// 常駐SfxId4
    s32 residentSfxId_4;
    
    /// 常駐SfxダミポリId１
    s32 residentSfx_DmyId_1;
    
    /// 常駐SfxダミポリId２
    s32 residentSfx_DmyId_2;
    
    /// 常駐SfxダミポリId３
    s32 residentSfx_DmyId_3;
    
    /// 常駐SfxダミポリId４
    s32 residentSfx_DmyId_4;
    
    /// 常駐SFX1納刀時表示するか
    /// 
    /// 「常駐SFX1納刀時表示するか」がtrueの場合、武器が納刀された時に「常駐SFXID1」に設定されているSFXを非表示にする
    u8 residentSfx_1_IsVisibleForHang : 1;
    
    /// 常駐SFX2納刀時表示するか
    /// 
    /// 「常駐SFX2納刀時表示するか」がtrueの場合、武器が納刀された時に「常駐SFXID2」に設定されているSFXを非表示にする
    u8 residentSfx_2_IsVisibleForHang : 1;
    
    /// 常駐SFX3納刀時表示するか
    /// 
    /// 「常駐SFX3納刀時表示するか」がtrueの場合、武器が納刀された時に「常駐SFXID3」に設定されているSFXを非表示にする
    u8 residentSfx_3_IsVisibleForHang : 1;
    
    /// 常駐SFX4納刀時表示するか
    /// 
    /// 「常駐SFX4納刀時表示するか」がtrueの場合、武器が納刀された時に「常駐SFXID4」に設定されているSFXを非表示にする
    u8 residentSfx_4_IsVisibleForHang : 1;
    
    /// モデル_0 ソウルパラムID差し替え可能か
    /// 
    /// vfxパラメータの「武器エンチャント用ソウルパラムID」と「武器エンチャント用インビジブルウェポンか」設定が適応されるか
    u8 isSoulParamIdChange_model0 : 1;
    
    /// モデル_1 ソウルパラムID差し替え可能か
    /// 
    /// vfxパラメータの「武器エンチャント用ソウルパラムID」と「武器エンチャント用インビジブルウェポンか」設定が適応されるか
    u8 isSoulParamIdChange_model1 : 1;
    
    /// モデル_2 ソウルパラムID差し替え可能か
    /// 
    /// vfxパラメータの「武器エンチャント用ソウルパラムID」と「武器エンチャント用インビジブルウェポンか」設定が適応されるか
    u8 isSoulParamIdChange_model2 : 1;
    
    /// モデル_3 ソウルパラムID差し替え可能か
    /// 
    /// vfxパラメータの「武器エンチャント用ソウルパラムID」と「武器エンチャント用インビジブルウェポンか」設定が適応されるか
    u8 isSoulParamIdChange_model3 : 1;
    
    /// 還元時レベル設定
    /// 
    /// 武器を還元・派生させるときに強化レベルをどう設定するかの種別
    u8 DerivationLevelType;
    
    /// エンチャントSfxサイズ
    /// 
    /// エンチャントSfxIdにオフセットする値
    u8 enchantSfxSize;
    
    /// コンプトロフィーSEQ番号
    /// 
    /// コンプリート系トロフィのSEQ番号
    s8 compTrophySedId;
    
    /// パディング３
    dummy8 pad3[2];
    
    /// 武器種別(テキスト用)
    /// 
    /// テキスト表示用の武器種別
    u16 wepTypeForText;
    
    /// ガード時物理攻撃カット率_最大補正値
    /// 
    /// ガード時のダメージ物理カット率の補正値の最大値
    f32 physGuardCutRate_MaxCorrect;
    
    /// ガード時魔法攻撃カット率_最大補正値
    /// 
    /// ガード時のダメージ魔法カット率の補正値の最大値
    f32 magGuardCutRate_MaxCorrect;
    
    /// ガード時炎攻撃力カット率_最大補正値
    /// 
    /// ガード時のダメージ炎カット率の補正値の最大値
    f32 fireGuardCutRate_MaxCorrect;
    
    /// ガード時電撃攻撃力カット率_最大補正値
    /// 
    /// ガード時のダメージ電撃カット率の補正値の最大値
    f32 thunGuardCutRate_MaxCorrect;
    
    /// ガード時闇攻撃力カット率_最大補正値
    /// 
    /// ガード時のダメージ闇カット率の補正値の最大値
    f32 darkGuardCutRate_MaxCorrect;
    
    /// 毒耐性カット率_最大補正値
    /// 
    /// 毒に対する攻撃力（特殊効果パラメータに設定）のカット率補正値の最大値
    f32 poisonGuardResist_MaxCorrect;
    
    /// 疫病耐性カット率_最大補正値
    /// 
    /// 疫病に対する攻撃力（特殊効果パラメータに設定）のカット率補正値の最大値
    f32 diseaseGuardResist_MaxCorrect;
    
    /// 出血耐性カット率_最大補正値
    /// 
    /// 出血に対する攻撃力（特殊効果パラメータに設定）のカット率補正値の最大値
    f32 bloodGuardResist_MaxCorrect;
    
    /// 呪耐性カット率_最大補正値
    /// 
    /// 呪いに対する攻撃力（特殊効果パラメータに設定）のカット率補正値の最大値
    f32 curseGuardResist_MaxCorrect;
    
    /// 冷気耐性カット率_最大補正値
    /// 
    /// 冷気に対する攻撃力（特殊効果パラメータに設定）のカット率補正値の最大値
    f32 freezeGuardResist_MaxCorrect;
    
    /// ガード時スタミナ防御力_最大補正値
    /// 
    /// ガード成功時に、敵のスタミナ攻撃に対する防御力の補正値の最大値
    f32 staminaGuardDef_MaxCorrect;
    
    /// スタミナ消費量倍率
    f32 staminaConsumptionRate;
    
    /// 対プレイヤー 物理ダメージ補正倍率
    /// 
    /// プレイヤーに対する攻撃のみ、与えるダメージを補正する。
    f32 vsPlayerDmgCorrectRate_Physics;
    
    /// 対プレイヤー 魔法ダメージ補正倍率
    /// 
    /// プレイヤーに対する攻撃のみ、与えるダメージを補正する。
    f32 vsPlayerDmgCorrectRate_Magic;
    
    /// 対プレイヤー 炎ダメージ補正倍率
    /// 
    /// プレイヤーに対する攻撃のみ、与えるダメージを補正する。
    f32 vsPlayerDmgCorrectRate_Fire;
    
    /// 対プレイヤー 雷ダメージ補正倍率
    /// 
    /// プレイヤーに対する攻撃のみ、与えるダメージを補正する。
    f32 vsPlayerDmgCorrectRate_Thunder;
    
    /// 対プレイヤー 闇ダメージ補正倍率
    /// 
    /// プレイヤーに対する攻撃のみ、与えるダメージを補正する。
    f32 vsPlayerDmgCorrectRate_Dark;
    
    /// 対プレイヤー 毒ダメージ補正倍率
    /// 
    /// プレイヤーに対する攻撃のみ、与えるダメージを補正する。
    f32 vsPlayerDmgCorrectRate_Poison;
    
    /// 対プレイヤー 出血ダメージ補正倍率
    /// 
    /// プレイヤーに対する攻撃のみ、与えるダメージを補正する。
    f32 vsPlayerDmgCorrectRate_Blood;
    
    /// 対プレイヤー 冷気ダメージ補正倍率
    /// 
    /// プレイヤーに対する攻撃のみ、与えるダメージを補正する。
    f32 vsPlayerDmgCorrectRate_Freeze;
    
    /// 武器能力解放ステータス値：筋力
    /// 
    /// 特定の武器を使った際、ステータスがX以上だとR2攻撃が特殊なアクションに変わるようするためのもの
    s32 attainmentWepStatusStr;
    
    /// 武器能力解放ステータス値：技量
    /// 
    /// 特定の武器を使った際、ステータスがX以上だとR2攻撃が特殊なアクションに変わるようするためのもの
    s32 attainmentWepStatusDex;
    
    /// 武器能力解放ステータス値：理力
    /// 
    /// 特定の武器を使った際、ステータスがX以上だとR2攻撃が特殊なアクションに変わるようするためのもの
    s32 attainmentWepStatusMag;
    
    /// 武器能力解放ステータス値：信仰
    /// 
    /// 特定の武器を使った際、ステータスがX以上だとR2攻撃が特殊なアクションに変わるようするためのもの
    s32 attainmentWepStatusFai;
    
    /// 武器能力解放ステータス値：運
    /// 
    /// 特定の武器を使った際、ステータスがX以上だとR2攻撃が特殊なアクションに変わるようするためのもの
    s32 attainmentWepStatusLuc;
    
    /// 攻撃属性補正ID
    /// 
    /// 攻撃属性を補正するパラメータのID
    s32 attackElementCorrectId;
    
    /// 販売価格
    s32 saleValue;
    
    /// 強化ショップカテゴリ
    u8 reinforceShopCategory;
    
    /// 矢の最大所持数
    u8 maxArrowQuantity;
    
    /// 武器SEIDオフセット値
    /// 
    /// SEIDのオフセット値
    s8 wepSeIdOffset;
    
    /// パディング４
    dummy8 pad4[1];
    
    /// 進化価格
    s32 baseChangePrice;
    
    /// レベルシンク補正ID
    s16 levelSyncCorrectId;
    
    /// ノックバックカット率_対プレイヤー_ガード時[％]
    /// 
    /// プレイヤーの攻撃をガードした時のノックバックカット率
    u8 knockBackCutRate_vsPlayer_Guard;
    
    /// ノックバックカット率_対プレイヤー_ジャスガ時[％]
    /// 
    /// プレイヤーの攻撃をジャスガした時のノックバックカット率
    u8 knockBackCutRate_vsPlayer_JustGuard;
    
    /// ノックバックカット率_対エネミー_ガード時[％]
    /// 
    /// エネミーの攻撃をガードした時のノックバックカット率
    u8 knockBackCutRate_vsEnemy_Guard;
    
    /// ノックバックカット率_対エネミー_ジャスガ時[％]
    /// 
    /// エネミーの攻撃をジャスガした時のノックバックカット率
    u8 knockBackCutRate_vsEnemy_JustGuard;
    
    /// 無属性攻撃カット率
    /// 
    /// 攻撃タイプを見て、無属性のダメージを何％カットするか？を指定
    s8 neutralAttackCutRate;
    
    /// 忍殺攻撃カット率
    /// 
    /// 攻撃タイプを見て、忍殺のダメージを何％カットするか？を指定
    s8 ninsatsuAttackCutRate;
    
    /// 重打攻撃カット率
    /// 
    /// 攻撃タイプを見て、重打のダメージを何％カットするか？を指定
    s8 heavyHitAttackCutRate;
    
    /// 対地攻撃カット率
    /// 
    /// 攻撃タイプを見て、対地のダメージを何％カットするか？を指定
    s8 antiGroundAttackCutRate;
    
    /// 対空攻撃カット率
    /// 
    /// 攻撃タイプを見て、対空のダメージを何％カットするか？を指定
    s8 antiAirAttackCutRate;
    
    /// 軽射攻撃カット率
    /// 
    /// 攻撃タイプを見て、軽射のダメージを何％カットするか？を指定
    s8 lightShootAttackCutRate;
    
    /// 消費コスト_リソースアイテムA
    /// 
    /// この武器を使用したときに消費するリソースアイテムAの個数。行動パラメータの《武器消費コスト》と連動。
    u8 resourceItemA;
    
    /// 消費コスト_リソースアイテムB
    /// 
    /// この武器を使用したときに消費するリソースアイテムBの個数。行動パラメータの《武器消費コスト》と連動。
    u8 resourceItemB;
    
    /// 消費コスト_リソースアイテムC
    /// 
    /// この武器を使用したときに消費するリソースアイテムCの個数。行動パラメータの《武器消費コスト》と連動。
    u8 resourceItemC;
    
    /// アイテム取得UIの表示タイプ
    /// 
    /// アイテム取得ダイアログとアイテム取得ログの表示タイプ
    u8 itemUIDisplayType;
    
    /// アクション解禁パラメータID
    /// 
    /// アクション解禁パラメータと紐づけてどのアクションを解禁するか指定する。
    s32 actionUnlockParamId;
    
    /// 初回入手イベントフラグID
    /// 
    /// 武器を入手したときに立てるイベントフラグを設定します（-1なら何もしない）。
    s32 firstGetEventFlagId;
    
    /// ジャスガ時毒耐性ダメージカット率
    /// 
    /// ジャスガ時に毒耐性攻撃力[point]（特殊効果パラメータに設定）をどれだけカットするか
    s8 poisonJustGuardResist;
    
    /// ジャスガ時疫病耐性ダメージカット率
    /// 
    /// ジャスガ時に疫病耐性攻撃力[point]（特殊効果パラメータに設定）をどれだけカットするか
    s8 diseaseJustGuardResist;
    
    /// ジャスガ時出血耐性ダメージカット率
    /// 
    /// ジャスガ時に出血耐性攻撃力[point]（特殊効果パラメータに設定）をどれだけカットするか
    s8 bloodJustGuardResist;
    
    /// ジャスガ時呪耐性ダメージカット率
    /// 
    /// ジャスガ時に呪耐性攻撃力[point]（特殊効果パラメータに設定）をどれだけカットするか
    s8 curseJustGuardResist;
    
    /// ジャスガ時冷気耐性ダメージカット率
    /// 
    /// ジャスガ時に冷気耐性攻撃力[point]（特殊効果パラメータに設定）をどれだけカットするか
    s8 freezeJustGuardResist;
    
    /// 属性A攻撃カット率
    /// 
    /// 攻撃タイプを見て、属性Aのダメージを何％カットするか？を指定
    s8 attriAAttackCutRate;
    
    /// 属性B攻撃カット率
    /// 
    /// 攻撃タイプを見て、属性Bのダメージを何％カットするか？を指定
    s8 attriBAttackCutRate;
    
    /// 属性C攻撃カット率
    /// 
    /// 攻撃タイプを見て、属性Cのダメージを何％カットするか？を指定
    s8 attriCAttackCutRate;
    
    /// ジャスガ時物理攻撃カット率
    /// 
    /// ジャスガ時に物理攻撃力をどれだけカットするか設定する。
    f32 physJustGuardCutRate;
    
    /// ジャスガ時魔法攻撃カット率
    /// 
    /// ジャスガ時に魔法攻撃力をどれだけカットするか設定する。
    f32 magJustGuardCutRate;
    
    /// ジャスガ時炎攻撃力カット率
    /// 
    /// ジャスガ時に炎攻撃力をどれだけカットするか設定する。
    f32 fireJustGuardCutRate;
    
    /// ジャスガ時電撃攻撃力カット率
    /// 
    /// ジャスガ時に電撃攻撃力をどれだけカットするか設定する。
    f32 thunJustGuardCutRate;
    
    /// ジャスガ時闇攻撃力カット率
    /// 
    /// ジャスガ時に闇攻撃力をどれだけカットするか設定する。
    f32 darkJustGuardCutRate;
    
    /// スタミナ攻撃力倍率
    /// 
    /// 攻撃パラの「スタミナ攻撃力_○○」に乗算する
    f32 staminaAttackPowerRate;
    
    /// 受動スタミナ攻撃力倍率
    /// 
    /// ジャスガが成立したとき、ジャスガした側のこのパラメータの倍率をジャスガされた側の攻撃パラメータの《被スタミナダメージ_攻撃側_弾き負け》に乗算する
    f32 passiveStaminaAtkRate;
    
};

struct UPPER_ARM_PARAM_ST {
    static constexpr const char* TYPE_NAME = "UPPER_ARM_PARAM_ST";
    
    /// a０００：外側角度
    /// 
    /// デブ装備時腕を上げる角度。脇の角度
    f32 a000_outAngle;
    
    /// a０００：上下角度
    /// 
    /// デブ装備時腕を上げる角度。前ならえの角度
    f32 a000_upDownAngle;
    
    /// a００２：外側角度
    /// 
    /// デブ装備時腕を上げる角度。脇の角度
    f32 a002_outAngle;
    
    /// a００２：上下角度
    /// 
    /// デブ装備時腕を上げる角度。前ならえの角度
    f32 a002_upDownAngle;
    
    /// a００３：外側角度
    /// 
    /// デブ装備時腕を上げる角度。脇の角度
    f32 a003_outAngle;
    
    /// a００３：上下角度
    /// 
    /// デブ装備時腕を上げる角度。前ならえの角度
    f32 a003_upDownAngle;
    
    /// a０１０：外側角度
    /// 
    /// デブ装備時腕を上げる角度。脇の角度
    f32 a010_outAngle;
    
    /// a０１０：上下角度
    /// 
    /// デブ装備時腕を上げる角度。前ならえの角度
    f32 a010_upDownAngle;
    
    /// a０１１：外側角度
    /// 
    /// デブ装備時腕を上げる角度。脇の角度
    f32 a011_outAngle;
    
    /// a０１１：上下角度
    /// 
    /// デブ装備時腕を上げる角度。前ならえの角度
    f32 a011_upDownAngle;
    
    /// a０１２：外側角度
    /// 
    /// デブ装備時腕を上げる角度。脇の角度
    f32 a012_outAngle;
    
    /// a０１２：上下角度
    /// 
    /// デブ装備時腕を上げる角度。前ならえの角度
    f32 a012_upDownAngle;
    
    /// a０１３：外側角度
    /// 
    /// デブ装備時腕を上げる角度。脇の角度
    f32 a013_outAngle;
    
    /// a０１３：上下角度
    /// 
    /// デブ装備時腕を上げる角度。前ならえの角度
    f32 a013_upDownAngle;
    
    /// a０１４：外側角度
    /// 
    /// デブ装備時腕を上げる角度。脇の角度
    f32 a014_outAngle;
    
    /// a０１４：上下角度
    /// 
    /// デブ装備時腕を上げる角度。前ならえの角度
    f32 a014_upDownAngle;
    
    /// a０１５：外側角度
    /// 
    /// デブ装備時腕を上げる角度。脇の角度
    f32 a015_outAngle;
    
    /// a０１５：上下角度
    /// 
    /// デブ装備時腕を上げる角度。前ならえの角度
    f32 a015_upDownAngle;
    
    /// a０１６：外側角度
    /// 
    /// デブ装備時腕を上げる角度。脇の角度
    f32 a016_outAngle;
    
    /// a０１６：上下角度
    /// 
    /// デブ装備時腕を上げる角度。前ならえの角度
    f32 a016_upDownAngle;
    
    /// 予約領域
    dummy8 reserve[48];
    
};

struct MENU_PARAM_ST {
    static constexpr const char* TYPE_NAME = "MENU_PARAM_ST";
    
    /// ソロプレイ死亡時フェードアウト開始時間[秒]
    /// 
    /// ソロプレイ死亡時で「YOU DIED」表示後、何秒経過したらフェードアウトを開始するか
    f32 SoloPlayDeath_ToFadeOutTime;
    
    /// ホワイト、ブラックゴースト死亡時フェードアウト開始時間[秒]
    /// 
    /// ホワイト、ブラックゴースト死亡時で「YOU DIED」表示後、何秒経過したらフェードアウトを開始するか
    f32 PartyGhostDeath_ToFadeOutTime;
    
    /// プレイヤー最大HPの上限
    /// 
    /// HPゲージ表示の際に、リソースで用意されたゲージの長さの何％を使うかを算出するために使われます。
    s32 PlayerMaxHpLimit;
    
    /// プレイヤー最大MPの上限
    /// 
    /// MPゲージ表示の際に、リソースで用意されたゲージの長さの何％を使うかを算出するために使われます。
    s32 PlayerMaxMpLimit;
    
    /// プレイヤー最大SPの上限
    /// 
    /// SPゲージ表示の際に、リソースで用意されたゲージの長さの何％を使うかを算出するために使われます。
    s32 PlayerMaxSpLimit;
    
    /// アクションパネル切り替え判定_プレイヤー速度[m/sec]
    /// 
    /// アクションパネル切り替え可能なプレイヤーの速度。この速度以下なら切り替え可能
    f32 ActionPanelChangeThreshold_Vel;
    
    /// アクションパネル切り替え判定_プレイヤー速度判定時間[sec]
    /// 
    /// アクションパネル切り替え可能なプレイヤーの速度を出すための考慮時間。この時間の平均速度を使う(システム的に最大４秒)
    f32 ActionPanelChangeThreshold_PassTime;
    
    /// ゲージ長計算時にプレイヤー最大HPに加算する値
    /// 
    /// リソースで用意されたゲージ長の何％を使うかを計算する際に、プレイヤー最大HPに加算する値
    s32 PlayerMaxAddHp;
    
    /// ゲージ長計算時にプレイヤー最大MPに加算する値
    /// 
    /// リソースで用意されたゲージ長の何％を使うかを計算する際に、プレイヤー最大MPに加算する値
    s32 PlayerMaxAddMp;
    
    /// ゲージ長計算時にプレイヤー最大SPに加算する値
    /// 
    /// リソースで用意されたゲージ長の何％を使うかを計算する際に、プレイヤー最大SPに加算する値
    s32 PlayerMaxAddSp;
    
    /// デカールオフセット（左右）
    /// 
    /// デカールの表示位置オフセット左右方向
    s32 DecalPosOffsetX;
    
    /// デカールオフセット（上下）
    /// 
    /// デカールの表示位置オフセット上下方向
    s32 DecalPosOffsetY;
    
    /// ワイヤーポイント：最小サイズ
    /// 
    /// ワイヤーポイントを距離によって拡大縮小する際のパラメータ。Flashで指定した大きさに対する倍率です。
    f32 WirePointMinSize;
    
    /// ワイヤーポイント：最大サイズ
    /// 
    /// ワイヤーポイントを距離によって拡大縮小する際のパラメータ。Flashで指定した大きさに対する倍率です。
    f32 WirePointMaxSize;
    
    /// 健康状態表示「無傷」：HPと比較する値
    /// 
    /// この値以上であれば「無傷」アイコンが表示される
    s32 HealthHpNoDamage;
    
    /// 健康状態表示「軽傷」：HPと比較する値
    /// 
    /// 上記の「無傷」の値未満で、この値以上であれば「軽傷」が表示される
    s32 HealthHpLightDamage;
    
    /// 健康状態表示「重傷」：HPと比較する値
    /// 
    /// 上記の「軽傷」の値未満で、この値以上であれば「重傷」が表示される
    s32 HealthHpHeavyDamage;
    
    /// 健康状態表示「瀕死」：HPと比較する値
    /// 
    /// 上記の「重傷」の値未満で、この値以上であれば「瀕死」が表示される
    s32 HealthHpDying;
    
    /// 健康状態表示「死亡」：HPと比較する値
    /// 
    /// 上記の「瀕死」の値未満で、この値以上であれば「死亡」が表示される
    s32 HealthHpDead;
    
    /// 残機表示「残機ありアイコン」：ソウルと比較する値
    /// 
    /// この値以上であれば「残機ありアイコン」が表示される
    s32 PlayerCountSoul;
    
    /// 敵の体幹表示「白」：体幹の残量と比較する値
    /// 
    /// 比較する値として指定した割合以上になった時に、該当する色のロックオンカーソルが表示されます
    s32 LockStaminaNoDamage;
    
    /// 敵の体幹表示「薄い黄色」：体幹の残量と比較する値
    /// 
    /// 比較する値として指定した割合以上になった時に、該当する色のロックオンカーソルが表示されます
    s32 LockStaminaLightDamage;
    
    /// 敵の体幹表示「黄色」：体幹の残量と比較する値
    /// 
    /// 比較する値として指定した割合以上になった時に、該当する色のロックオンカーソルが表示されます
    s32 LockStaminaMiddleDamage;
    
    /// 敵の体幹表示「オレンジ」：体幹の残量と比較する値
    /// 
    /// 比較する値として指定した割合以上になった時に、該当する色のロックオンカーソルが表示されます
    s32 LockStaminaHeavyDamage;
    
    /// 敵の体幹表示「赤」：体幹の残量と比較する値
    /// 
    /// 比較する値として指定した割合以上になった時に、該当する色のロックオンカーソルが表示されます
    s32 LockStaminaCriticalDamage;
    
    /// 画面外ワイヤーポイント：画面外のどの位置まで通常のワイヤーポイントを表示するか_X軸[％]
    s32 WireOffScreenRangeX;
    
    /// 画面外ワイヤーポイント：画面外のどの位置まで通常のワイヤーポイントを表示するか_Y軸[％]
    s32 WireOffScreenRangeY;
    
    /// 画面外ワイヤーポイント：画面端からどのくらい離れた位置に画面外ワイヤーポイントを表示するか_X軸[％]
    s32 WireOffScreenDisplayX;
    
    /// 画面外ワイヤーポイント：画面端からどのくらい離れた位置に画面外ワイヤーポイントを表示するか_Y軸[％]
    s32 WireOffScreenDisplayY;
    
    /// 画面外ワイヤーポイント：画面外ワイヤーポイントの射出可能表示を距離に応じて拡縮させるかどうか[有効/無効]
    s32 WireOffScreenScaleEnable;
    
    /// 画面外ワイヤーポイント：表示サイズ(固定)（拡縮無効時にのみ有効）
    f32 WireOffScreenScale;
    
    /// 敵の体幹表示「黒い赤」：体幹の残量と比較する値
    /// 
    /// 敵の体幹表示「どす黒い赤」：体幹の残量と比較する値
    s32 LockStaminaFatalDamage;
    
    /// OPムービー前のウェイト[sec]
    /// 
    /// OPムービー再生前のウェイト時間。＞SEQ 15261
    f32 PreOpeningMovie_WaitSec;
    
    /// ゲージの色を変化させるSPしきい値
    /// 
    /// この値以下であればSPゲージの色が変化します
    s32 PlayerDangerSp;
    
    /// 発見されそうマーカー：表示するポイントの割合[％]
    /// 
    /// 使用していません
    s32 WatchTargetPointRate;
    
    /// 【検証用】画面外ワイヤーポイント：画面外のどの位置まで通常のワイヤーポイントを表示するか_X軸[％]
    /// 
    /// GamePropetiesで検証用のレイアウトを設定した際に参照される画面外ワイヤーポイントのパラメータです
    s32 WireOffScreenRangeX_Test;
    
    /// 【検証用】画面外ワイヤーポイント：画面外のどの位置まで通常のワイヤーポイントを表示するか_Y軸[％]
    /// 
    /// GamePropetiesで検証用のレイアウトを設定した際に参照される画面外ワイヤーポイントのパラメータです
    s32 WireOffScreenRangeY_Test;
    
    /// 【検証用】画面外ワイヤーポイント：画面端からどのくらい離れた位置に画面外ワイヤーポイントを表示するか_X軸[％]
    /// 
    /// GamePropetiesで検証用のレイアウトを設定した際に参照される画面外ワイヤーポイントのパラメータです
    s32 WireOffScreenDisplayX_Test;
    
    /// 【検証用】画面外ワイヤーポイント：画面端からどのくらい離れた位置に画面外ワイヤーポイントを表示するか_Y軸[％]
    /// 
    /// GamePropetiesで検証用のレイアウトを設定した際に参照される画面外ワイヤーポイントのパラメータです
    s32 WireOffScreenDisplayY_Test;
    
    /// ハート1/4個分のHP値
    /// 
    /// HPを示すハート1/4個の数値
    s32 PlayerQuarterHp;
    
    /// 発見されそうマーカー：画面外のどの位置まで通常のワイヤーポイントを表示するか_X軸[％]
    f32 WatchTargetOffScrRangeX;
    
    /// 発見されそうマーカー：画面外のどの位置まで通常のワイヤーポイントを表示するか_Y軸[％]
    f32 WatchTargetOffScrRangeY;
    
    /// 発見されそうマーカー：画面端からどのくらい離れた位置に画面外ワイヤーポイントを表示するか_X軸[％]
    f32 WatchTargetOffScrDisplayX;
    
    /// 発見されそうマーカー：画面端からどのくらい離れた位置に画面外ワイヤーポイントを表示するか_Y軸[％]
    f32 WatchTargetOffScrDisplayY;
    
    /// アイテム取得ログ：1行の表示時間[sec]
    f32 GetItemViewTime;
    
    /// 体幹ゲージ最低表示時間[sec]
    f32 SpMinimumDispTime;
    
    /// 予約
    s32 Reserved42;
    
    /// 予約
    s32 Reserved43;
    
    /// 予約
    s32 Reserved44;
    
    /// 予約
    s32 Reserved45;
    
    /// 予約
    s32 Reserved46;
    
    /// 予約
    s32 Reserved47;
    
    /// 予約
    s32 Reserved48;
    
    /// 予約
    s32 Reserved49;
    
    /// 予約
    s32 Reserved50;
    
    /// 予約
    s32 Reserved51;
    
    /// 予約
    s32 Reserved52;
    
    /// 予約
    s32 Reserved53;
    
    /// 予約
    s32 Reserved54;
    
    /// 予約
    s32 Reserved55;
    
    /// 予約
    s32 Reserved56;
    
    /// 予約
    s32 Reserved57;
    
    /// 予約
    s32 Reserved58;
    
    /// 予約
    s32 Reserved59;
    
};

struct GAME_PROGRESS_PARAM_ST {
    static constexpr const char* TYPE_NAME = "GAME_PROGRESS_PARAM_ST";
    
    /// イベントフラグID
    s32 eventFlagId;
    
    /// 加算進捗率[％]
    u8 progressValue;
    
    /// 予約
    dummy8 reserved[11];
    
};

struct LENS_FLARE_BANK {
    static constexpr const char* TYPE_NAME = "LENS_FLARE_BANK";
    
    /// テクスチャID
    /// 
    /// テクスチャ(lensflare_??)
    s8 texId;
    
    /// フレアか
    /// 
    /// 0:ゴースト, 1:フレア
    u8 isFlare;
    
    /// 回転有効
    /// 
    /// 0:無効, 1:有効
    u8 enableRoll;
    
    /// スケール有効
    /// 
    /// 0:無効, 1:有効
    u8 enableScale;
    
    /// 配置距離率
    /// 
    /// 0.0:光源位置～1.0:画面中心
    f32 locateDistRate;
    
    /// テクスチャスケール
    /// 
    /// テクスチャのスケール
    f32 texScale;
    
    /// Ｒ
    /// 
    /// テクスチャ乗算色
    s16 colR;
    
    /// Ｇ
    /// 
    /// テクスチャ乗算色
    s16 colG;
    
    /// Ｂ
    /// 
    /// テクスチャ乗算色
    s16 colB;
    
    /// Ａ
    /// 
    /// テクスチャ乗算色
    s16 colA;
    
};

struct WET_ASPECT_PARAM_ST {
    static constexpr const char* TYPE_NAME = "WET_ASPECT_PARAM_ST";
    
    /// R
    /// 
    /// ディフューズ色Rです。
    u8 diffColorR;
    
    /// G
    /// 
    /// ディフューズ色Gです。
    u8 diffColorG;
    
    /// B
    /// 
    /// ディフューズ色Bです。
    u8 diffColorB;
    
    /// 予備1
    dummy8 reserve_0[1];
    
    /// A
    /// 
    /// ディフューズ色Aです。
    f32 diffColorA;
    
    /// R
    /// 
    /// リフレクタンス色Rです。
    u8 refColorR;
    
    /// G
    /// 
    /// リフレクタンス色Gです。
    u8 refColorG;
    
    /// B
    /// 
    /// リフレクタンス色Bです。
    u8 refColorB;
    
    /// 予備2
    dummy8 reserve_1[1];
    
    /// A
    /// 
    /// リフレクタンス色Aです。
    f32 refColorA;
    
    /// オーバーライド率
    /// 
    /// シャイニネスのオーバーライド率です。
    f32 shininessRate;
    
    /// オーバーライド
    /// 
    /// シャイニネスのオーバーライドです。
    u8 shininess;
    
    /// 予備3
    dummy8 reserve_2[11];
    
};

struct SP_EFFECT_VFX_PARAM_ST {
    static constexpr const char* TYPE_NAME = "SP_EFFECT_VFX_PARAM_ST";
    
    /// 効果中SfxID(-1：無効)
    s32 midstSfxId;
    
    /// 効果中SeID(-1：無効)
    s32 midstSeId;
    
    /// 発動時SfxID(-1：無効)
    s32 initSfxId;
    
    /// 発動時SeID(-1：無効)
    s32 initSeId;
    
    /// 解除時SfxID(-1：無効)
    s32 finishSfxId;
    
    /// 解除時SeID(-1：無効)
    s32 finishSeId;
    
    /// 姿隠し開始距離[m]
    /// 
    /// カムフラージュ開始距離です
    f32 camouflageBeginDist;
    
    /// 姿隠し終了距離[m]
    /// 
    /// カムフラージュ終了距離です
    f32 camouflageEndDist;
    
    /// 変身防具ID(-1：なし)
    s32 transformProtectorId;
    
    /// 効果中ダミポリID(-1：ルート)
    s16 midstDmyId;
    
    /// 発動時ダミポリID(-1：ルート)
    s16 initDmyId;
    
    /// 解除時ダミポリID(-1：ルート)
    s16 finishDmyId;
    
    /// エフェクトタイプ
    u8 effectType;
    
    /// 武器エンチャント用ソウルパラムID(-1：なし).適用されるファントムパラムを変更します。
    u8 soulParamIdForWepEnchant;
    
    /// VFX再生カテゴリ
    /// 
    /// 重複効果によるエフェクト再生を制御します
    u8 playCategory;
    
    /// カテゴリ内優先度
    /// 
    /// カテゴリ一致した場合の再生優先度を設定(低い方が優先)
    u8 playPriority;
    
    /// 大型用エフェクトがあるか
    u8 existEffectForLarge : 1;
    
    /// ソウル体用エフェクトがあるか
    u8 existEffectForSoul : 1;
    
    /// 姿隠し時にエフェクトを非表示にするか
    u8 effectInvisibleAtCamouflage : 1;
    
    /// 姿隠しするか
    u8 useCamouflage : 1;
    
    /// 姿隠し時に味方でも非表示か
    u8 invisibleAtFriendCamouflage : 1;
    
    /// 移行した(SfxIDにマップ番号を足すか→SfxIDオフセットタイプ)
    dummy8 addMapAreaBlockOffset : 1;
    
    /// 半透明の姿隠しか
    u8 halfCamouflage : 1;
    
    /// 変身防具IDが全身用か
    u8 isFullBodyTransformProtectorId : 1;
    
    /// 武器エンチャント用インビジブルウェポンか(0:武器表示, 1:武器非表示)
    u8 isInvisibleWeapon : 1;
    
    /// サイレンスか(0:ちがう, 1:そう)
    u8 isSilence : 1;
    
    /// 全身か（効果中）
    /// 
    /// 効果中SFXを装備用全身ダミポリを使用するか。1の時に胴:190,頭:191,手:192,脚:193からSFXを再生する
    u8 isMidstFullbody : 1;
    
    /// 全身か（発動時）
    /// 
    /// 発動中SFXを装備用全身ダミポリを使用するか。1の時に胴:190,頭:191,手:192,脚:193からSFXを再生する
    u8 isInitFullbody : 1;
    
    /// 全身か（解除時）
    /// 
    /// 解除時SFXを装備用全身ダミポリを使用するか。1の時に胴:190,頭:191,手:192,脚:193からSFXを再生する
    u8 isFinishFullbody : 1;
    
    /// 死体時でも表示を行うか
    /// 
    /// ○の場合、死体時でもVFXが表示されるようになります。
    u8 isVisibleDeadChr : 1;
    
    /// エンチャントSFXサイズオフセット適応か
    /// 
    /// 武器パラの「エンチャントSfxサイズ」に従ってSfxIdをオフセットするか
    u8 isUseOffsetEnchantSfxSize : 1;
    
    /// パディング
    dummy8 pad_1 : 1;
    
    /// デカールID1(-1：無効)
    s32 decalId1;
    
    /// デカールID2(-1：無効)
    s32 decalId2;
    
    /// フットエフェクト優先度
    /// 
    /// フットエフェクトオフセットの優先度(低いほうが優先)
    u8 footEffectPriority;
    
    /// フットエフェクトオフセット
    /// 
    /// この特殊効果がかかっている場合にフットエフェクトIDにオフセットする量
    u8 footEffectOffset;
    
    /// 剣閃SFXIDオフセットタイプ
    /// 
    /// 剣閃SFXIDにかけるオフセット値です。エンチャントと剣の軌跡エフェクトに使われる
    u8 traceSfxIdOffsetType;
    
    /// プレイヤー見た目強制上書き
    /// 
    /// キャラクターの見た目を強制的に生者/亡者にできる機能
    u8 forceDeceasedType;
    
    /// エンチャント時根元ダミポリID＿０
    /// 
    /// エンチャント時の根元に発生させるダミポリID
    s32 enchantStartDmyId_0;
    
    /// エンチャント時剣先ダミポリID＿０
    /// 
    /// エンチャント時の剣先に発生させるダミポリID。-1指定で自動的に連番になってるところまで出す。
    s32 enchantEndDmyId_0;
    
    /// エンチャント時根元ダミポリID＿１
    /// 
    /// エンチャント時の根元に発生させるダミポリID
    s32 enchantStartDmyId_1;
    
    /// エンチャント時剣先ダミポリID＿１
    /// 
    /// エンチャント時の剣先に発生させるダミポリID。-1指定で自動的に連番になってるところまで出す。
    s32 enchantEndDmyId_1;
    
    /// エンチャント時根元ダミポリID＿２
    /// 
    /// エンチャント時の根元に発生させるダミポリID
    s32 enchantStartDmyId_2;
    
    /// エンチャント時剣先ダミポリID＿２
    /// 
    /// エンチャント時の剣先に発生させるダミポリID。-1指定で自動的に連番になってるところまで出す。
    s32 enchantEndDmyId_2;
    
    /// エンチャント時根元ダミポリID＿３
    /// 
    /// エンチャント時の根元に発生させるダミポリID
    s32 enchantStartDmyId_3;
    
    /// エンチャント時剣先ダミポリID＿３
    /// 
    /// エンチャント時の剣先に発生させるダミポリID。-1指定で自動的に連番になってるところまで出す。
    s32 enchantEndDmyId_3;
    
    /// エンチャント時根元ダミポリID＿４
    /// 
    /// エンチャント時の根元に発生させるダミポリID
    s32 enchantStartDmyId_4;
    
    /// エンチャント時剣先ダミポリID＿４
    /// 
    /// エンチャント時の剣先に発生させるダミポリID。-1指定で自動的に連番になってるところまで出す。
    s32 enchantEndDmyId_4;
    
    /// エンチャント時根元ダミポリID＿５
    /// 
    /// エンチャント時の根元に発生させるダミポリID
    s32 enchantStartDmyId_5;
    
    /// エンチャント時剣先ダミポリID＿５
    /// 
    /// エンチャント時の剣先に発生させるダミポリID。-1指定で自動的に連番になってるところまで出す。
    s32 enchantEndDmyId_5;
    
    /// エンチャント時根元ダミポリID＿６
    /// 
    /// エンチャント時の根元に発生させるダミポリID
    s32 enchantStartDmyId_6;
    
    /// エンチャント時剣先ダミポリID＿６
    /// 
    /// エンチャント時の剣先に発生させるダミポリID。-1指定で自動的に連番になってるところまで出す。
    s32 enchantEndDmyId_6;
    
    /// エンチャント時根元ダミポリID＿７
    /// 
    /// エンチャント時の根元に発生させるダミポリID
    s32 enchantStartDmyId_7;
    
    /// エンチャント時剣先ダミポリID＿７
    /// 
    /// エンチャント時の剣先に発生させるダミポリID。-1指定で自動的に連番になってるところまで出す。
    s32 enchantEndDmyId_7;
    
    /// SfxIDオフセットタイプ
    u8 SfxIdOffsetType;
    
    /// ファントムパラメータ強制指定
    /// 
    /// ファントムパラメータの強制上書きタイプ
    u8 phantomParamOverwriteType;
    
    /// 姿隠し時最小α値[%]
    u8 camouflageMinAlpha;
    
    /// 体幹回復速度減少演出
    /// 
    /// 指定された演出を体幹ゲージ上で表示します
    u8 staminaFeExpressionType;
    
    /// ファントムパラメータ上書きID
    /// 
    /// ファントムパラメータの強制Id
    s32 phantomParamOverwriteId;
    
    /// マテリアルのエミッシブ値
    /// 
    /// マテリアルのEmissiveIntensityを書き換える。-1は何もしない
    f32 emissiveIntensity;
    
    /// マテリアルエミッシブ値のフェード時間。この時間かけて徐々に目標値へ行く
    f32 emissiveFadeTime;
    
    /// フットデカール材質オフセット強制上書きID
    /// 
    /// フットデカールの床材質IDオフセットを強制的に書き換える（-1未使用）
    s16 footDecalMaterialOffsetOverwriteId;
    
    /// パディング
    dummy8 pad4[2];
    
    /// CinderIntensityScale値
    /// 
    /// マテリアルのCinderIntensityScaleを書き換える。-1は何もしない
    f32 cinderIntensityScale;
    
    /// 表示するFE。旧「忍殺FEの表示」。汎用的に扱うため名称を変更しました。
    u8 ninsatuVisible;
    
    /// パディング
    dummy8 pad5[1];
    
    /// FE表示先のダミポリID(-1：ルート)。旧「忍殺FEのダミポリID」。汎用的に扱うため名称を変更しました。
    s16 ninsatuDmyId;
    
    /// フットSFX材質オフセット強制上書きID
    /// 
    /// フットSFX、材質考慮SFXの床材質IDを強制的に書き換える（-1：未使用）
    s16 footSfxMaterialOffsetOverwriteId;
    
    /// フットSE材質オフセット強制上書きID
    /// 
    /// フットSEの床材質IDを強制的に書き換える（-1：未使用）
    s16 footSeMaterialOffsetOverwriteId;
    
    /// マテリアルパラメータID。-1は何もしない
    s32 materialParamId;
    
    /// マテリアルパラメータの初期値
    /// 
    /// マテリアルパラメータのフェード開始時の値。対象はマテリアルパラメータIDで指定する。マテリアルパラメータIDが -1 なら何もしない
    f32 materialParamInitValue;
    
    /// マテリアルパラメータの目標値
    /// 
    /// マテリアルパラメータのフェード終了時の値。対象はマテリアルパラメータIDで指定する。マテリアルパラメータIDが -1 なら何もしない
    f32 materialParamTargetValue;
    
    /// マテリアルパラメータ値のフェード時間。この時間かけて徐々に目標値へ行く。マテリアルパラメータIDが -1 なら何もしない
    f32 materialParamFadeTime;
    
    /// 姿隠しフェードアウト時の秒間のα値変化量[%]
    /// 
    /// 姿隠し特殊効果がかかった時に行われるフェードアウト処理で、秒間に変化させるα値。
    u16 fadeOutRateCamouflage;
    
    /// 姿隠しフェードイン時の秒間のα値変化量[%]
    /// 
    /// 姿隠し特殊効果が消えた時に行われるフェードイン処理で、秒間に変化させるα値。
    u16 fadeInRateCamouflage;
    
    /// CinderIntensityScale値
    /// 
    /// パディング
    dummy8 pad6[8];
    
};

struct SKILL_PARAM_ST {
    static constexpr const char* TYPE_NAME = "SKILL_PARAM_ST";
    
    /// 仮想武器ID
    /// 
    /// スキルを解禁するとこの武器が付与される。解禁に必要な道具やメニュー上でのテキストにも紐づく。
    s32 virtualWeaponId;
    
    /// 表示許可イベントフラグ
    /// 
    /// このフラグが立っていない場合、メニュー上でスキルを表示しない(-1なら必ず表示)。
    s32 unlockEventFlag;
    
    /// 親スキルID_1
    /// 
    /// 親スキルが解禁されていないと解禁不可(-1なら親なし)
    s32 parent1;
    
    /// 親スキルID_2
    /// 
    /// 親スキルが解禁されていないと解禁不可(-1なら親なし)
    s32 parent2;
    
    /// 親スキルID_3
    /// 
    /// 親スキルが解禁されていないと解禁不可(-1なら親なし)
    s32 parent3;
    
    /// 付与する武器ID
    /// 
    /// スキル解禁時にインベントリに加える武器IDを指定(-1なら付与しない)
    s32 acquireWeaponId;
    
    /// 強化する武器ID
    /// 
    /// スキル解禁時に垂直強化する武器IDを指定(-1なら強化しない)
    s32 reinforceWeaponId;
    
    /// 解禁後常駐特殊効果ID1
    /// 
    /// スキル解禁後にかかる常駐特殊効果を指定(-1なら何もしない)
    s32 spEffect1;
    
    /// 解禁後常駐特殊効果ID2
    /// 
    /// スキル解禁後にかかる常駐特殊効果を指定(-1なら何もしない)
    s32 spEffect2;
    
    /// 解禁後常駐特殊効果ID3
    /// 
    /// スキル解禁後にかかる常駐特殊効果を指定(-1なら何もしない)
    s32 spEffect3;
    
    /// 表示位置＿行
    /// 
    /// メニュー上の表示位置を指定します。
    s16 dispRow;
    
    /// 表示位置＿列
    /// 
    /// メニュー上の表示位置を指定します。
    s16 dispCol;
    
    /// 仮想武器ID_未解禁
    /// 
    /// 未解禁状態の時にここで設定されたアイテムを表示(-1なら何もしない)
    s32 unenforementWepId;
    
    /// 仮想武器ID_非公開
    /// 
    /// 非公開状態の時にここで設定されたアイテムを表示(-1なら何もしない)
    s32 unreleaseWepId;
    
    /// メニューページ番号
    /// 
    /// ページ番号（タブ番号）(-1なら表示されない)
    s8 menuPageNo;
    
    /// パディング２
    dummy8 pad2[2];
    
    /// リソースアイテムA最大所持数増加量
    /// 
    /// プレイヤーゲームデータで保持しているリソースアイテムA最大所持数にこの数値を加算する。
    u8 addResourceItemA;
    
    /// 解禁許可スキルID_0
    /// 
    /// 設定したスキルを一つも取得していない場合は、仮想武器_未解禁を参照する
    s32 unlovkViewSkill0;
    
    /// 解禁許可スキルID_1
    /// 
    /// 設定したスキルを一つも取得していない場合は、仮想武器_未解禁を参照する
    s32 unlovkViewSkill1;
    
    /// 解禁許可スキルID_2
    /// 
    /// 設定したスキルを一つも取得していない場合は、仮想武器_未解禁を参照する
    s32 unlovkViewSkill2;
    
    /// 解禁許可スキルID_3
    /// 
    /// 設定したスキルを一つも取得していない場合は、仮想武器_未解禁を参照する
    s32 unlovkViewSkill3;
    
    /// 解禁許可スキルID_4
    /// 
    /// 設定したスキルを一つも取得していない場合は、仮想武器_未解禁を参照する
    s32 unlovkViewSkill4;
    
    /// 解禁許可スキルID_5
    /// 
    /// 設定したスキルを一つも取得していない場合は、仮想武器_未解禁を参照する
    s32 unlovkViewSkill5;
    
    /// 解禁許可スキルID_6
    /// 
    /// 設定したスキルを一つも取得していない場合は、仮想武器_未解禁を参照する
    s32 unlovkViewSkill6;
    
    /// 解禁許可スキルID_7
    /// 
    /// 設定したスキルを一つも取得していない場合は、仮想武器_未解禁を参照する
    s32 unlovkViewSkill7;
    
    /// パディング
    dummy8 pad[8];
    
};

struct PROTECTOR_GEN_PARAM_ST {
    static constexpr const char* TYPE_NAME = "PROTECTOR_GEN_PARAM_ST";
    
    /// 防具パラムID
    /// 
    /// 装備品_防具パラメータのID
    s32 proParamId;
    
    /// ０：魔石スロットタイプ
    u32 gemSlotType_0;
    
    /// ０：魔石生成ID
    s32 gemGenId_0;
    
    /// １：魔石スロットタイプ
    u32 gemSlotType_1;
    
    /// １：魔石生成ID
    s32 gemGenId_1;
    
    /// ２：魔石スロットタイプ
    u32 gemSlotType_2;
    
    /// ２：魔石生成ID
    s32 gemGenId_2;
    
    /// ３：魔石スロットタイプ
    u32 gemSlotType_3;
    
    /// ３：魔石生成ID
    s32 gemGenId_3;
    
    /// ４：魔石スロットタイプ
    u32 gemSlotType_4;
    
    /// ４：魔石生成ID
    s32 gemGenId_4;
    
};

struct GAME_INFO_PARAM {
    static constexpr const char* TYPE_NAME = "GAME_INFO_PARAM";
    
    /// タイトルのMsgID
    /// 
    /// タイトル名
    s32 titleMsgId;
    
    /// 内容のMsgID
    /// 
    /// 内容
    s32 contentMsgId;
    
    /// 価格
    s32 value;
    
    /// ソートID
    s32 sortId;
    
    /// アクションID
    /// 
    /// 販売状況を判断するアクションIDです。
    s32 eventId;
    
    /// パディング
    dummy8 Pad[12];
    
};

struct DOF_BANK {
    static constexpr const char* TYPE_NAME = "DOF_BANK";
    
    /// 遠方開始距離[m]
    /// 
    /// 被写界深度で遠くがぼけ始める距離
    f32 farDofBegin;
    
    /// 遠方終了距離[m]
    /// 
    /// 被写界深度で遠くがぼけ終わる距離
    f32 farDofEnd;
    
    /// 遠方強度[％]
    /// 
    /// 被写界深度のぼけ具合(0でぼけなくなります)
    u8 farDofMul;
    
    /// パディング
    /// 
    /// ダミー
    dummy8 pad_0[3];
    
    /// 近傍開始距離[m]
    /// 
    /// 被写界深度で近くがぼけ始める距離(終了距離より遠くします)
    f32 nearDofBegin;
    
    /// 近傍終了距離[m]
    /// 
    /// 被写界深度で近くがぼけ終わる距離(開始距離より近くします)
    f32 nearDofEnd;
    
    /// 近傍強度[％]
    /// 
    /// 被写界深度のぼけ具合(0でぼけなくなります)
    u8 nearDofMul;
    
    /// パディング
    /// 
    /// ダミー
    dummy8 pad_1[3];
    
    /// ボケの大きさ
    /// 
    /// 値を大きくすると被写界深度のボケが強くなります
    f32 dispersionSq;
    
};

struct ACTION_UNLOCK_PARAM_ST {
    static constexpr const char* TYPE_NAME = "ACTION_UNLOCK_PARAM_ST";
    
    /// 00_無限呼吸
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action00;
    
    /// 01_夜目
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action01;
    
    /// 02_復活の術
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action02;
    
    /// 03_不死斬り
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action03;
    
    /// 04_義手
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action04;
    
    /// 05_右手刀
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action05;
    
    /// 06_白形代取得
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action06;
    
    /// 07_赤形代取得
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action07;
    
    /// 08_予備
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action08;
    
    /// 09_予備
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action09;
    
    /// 10_蹴り
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action10;
    
    /// 11_蹴り見切り
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action11;
    
    /// 12_蹴り強化
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action12;
    
    /// 13_崩し裏周り
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action13;
    
    /// 14_ワイヤー中アクション
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action14;
    
    /// 15_空中ガード
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action15;
    
    /// 16_空中義手忍具
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action16;
    
    /// 17_刀ジャンプ忍殺
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action17;
    
    /// 18_刀対空忍殺
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action18;
    
    /// 19_刀溜め
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action19;
    
    /// 20_義手忍具連携追い斬り
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action20;
    
    /// 21_義手忍具連携追加効果
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action21;
    
    /// 22_義手忍具連携連撃
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action22;
    
    /// 23_義手忍具連携エンチャ
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action23;
    
    /// 24_予備
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action24;
    
    /// 25_予備
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action25;
    
    /// 26_予備
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action26;
    
    /// 27_予備
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action27;
    
    /// 28_予備
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action28;
    
    /// 29_予備
    /// 
    /// 「○」がついた道具を1つでも所持していれば解禁される
    u8 action29;
    
};

struct WEAPON_GEN_PARAM_ST {
    static constexpr const char* TYPE_NAME = "WEAPON_GEN_PARAM_ST";
    
    /// 武器パラムID
    /// 
    /// 装備品_武器パラメータのID
    s32 wepParamId;
    
    /// ０：魔石スロットタイプ
    u32 gemSlotType_0;
    
    /// ０：魔石生成ID
    s32 gemGenId_0;
    
    /// １：魔石スロットタイプ
    u32 gemSlotType_1;
    
    /// １：魔石生成ID
    s32 gemGenId_1;
    
    /// ２：魔石スロットタイプ
    u32 gemSlotType_2;
    
    /// ２：魔石生成ID
    s32 gemGenId_2;
    
    /// ３：魔石スロットタイプ
    u32 gemSlotType_3;
    
    /// ３：魔石生成ID
    s32 gemGenId_3;
    
    /// ４：魔石スロットタイプ
    u32 gemSlotType_4;
    
    /// ４：魔石生成ID
    s32 gemGenId_4;
    
};

struct QWC_CHANGE_PARAM_ST {
    static constexpr const char* TYPE_NAME = "QWC_CHANGE_PARAM_ST";
    
    /// PC-黒
    /// 
    /// PC黒属性変化値
    s16 pcAttrB;
    
    /// PC-白
    /// 
    /// PC白属性変化値
    s16 pcAttrW;
    
    /// PC-左
    /// 
    /// PC左属性変化値
    s16 pcAttrL;
    
    /// PC-右
    /// 
    /// PC右属性変化値
    s16 pcAttrR;
    
    /// エリア-黒
    /// 
    /// エリア黒属性変化値
    s16 areaAttrB;
    
    /// エリア-白
    /// 
    /// エリア白属性変化値
    s16 areaAttrW;
    
    /// エリア-左
    /// 
    /// エリア左属性変化値
    s16 areaAttrL;
    
    /// エリア-右
    /// 
    /// エリア右属性変化値
    s16 areaAttrR;
    
};

struct CS_LIGHTING_QUALITY_DETAIL {
    static constexpr const char* TYPE_NAME = "CS_LIGHTING_QUALITY_DETAIL";
    
    /// ローカルライト有効距離係数(小さくすると、近い距離で消える)
    f32 localLightDistFactor;
    
    /// ローカルライトシャドウ有効
    u8 localLightShadowEnabled;
    
    /// フォワードパスライティング有効
    u8 forwardPassLightingEnabled;
    
    dummy8 dmy[2];
    
};

struct CS_WATER_QUALITY_DETAIL {
    static constexpr const char* TYPE_NAME = "CS_WATER_QUALITY_DETAIL";
    
    /// インタラクション有効
    u8 interactionEnabled;
    
    dummy8 dmy[3];
    
};

struct DYING_EFFECT_PARAM_ST {
    static constexpr const char* TYPE_NAME = "DYING_EFFECT_PARAM_ST";
    
    /// 通常→瀕死開始フェード時間[秒]
    f32 fadeTime_NormalToDyingBegin;
    
    /// 瀕死開始→瀕死中フェード時間[秒]
    f32 fadeTime_DyingBeginToDyingLoop;
    
    /// 瀕死中→通常フェード時間[秒]
    f32 fadeTime_DyingLoopToNormal;
    
    /// 瀕死中→復活待機開始フェード時間[秒]
    f32 fadeTime_DyingLoopToWaitBegin;
    
    /// 復活待機→通常フェード時間[秒]
    f32 fadeTime_WaitToNormal;
    
    dummy8 pad2[12];
    
};

struct CS_SHADER_QUALITY_DETAIL {
    static constexpr const char* TYPE_NAME = "CS_SHADER_QUALITY_DETAIL";
    
    /// SSS有効
    u8 sssEnabled;
    
    /// テッセレーション有効
    u8 tessellationEnabled;
    
    /// 高精度ノーマル有効(G-Bufferに格納する法線の精度の設定)
    u8 highPrecisionNormalEnabled;
    
    fixstr dmy[1];
    
};

struct LOCK_CAM_PARAM_ST {
    static constexpr const char* TYPE_NAME = "LOCK_CAM_PARAM_ST";
    
    /// カメラ距離目標[m]
    /// 
    /// カメラ用
    f32 camDistTarget;
    
    /// X軸回転最小値[deg]
    /// 
    /// カメラ用
    f32 rotRangeMinX;
    
    /// ロックX回転シフト率(0.0～1.0)
    /// 
    /// カメラ用
    f32 lockRotXShiftRatio;
    
    /// キャラ基点オフセット(キャラ空間)
    /// 
    /// カメラ用
    f32 chrOrgOffset_Y;
    
    /// キャラ範囲最大半径[m]
    /// 
    /// 明るい場所でのキャラのロック可納範囲
    f32 chrLockRangeMaxRadius;
    
    /// 縦画角[deg]
    /// 
    /// カメラ用
    f32 camFovY;
    
    /// 暗闇用キャラ範囲最大半径[m]
    /// 
    /// 暗いところでのキャラのロック可納範囲
    f32 chrLockRangeMaxRadius_forD;
    
    /// 真っ暗闇用キャラ範囲最大半径[m]
    /// 
    /// 真っ暗闇でのキャラのロック可納範囲
    f32 chrLockRangeMaxRadius_forPD;
    
    /// 近接攻撃自動捕捉 上限高さ[m]
    /// 
    /// 非ロックオン時の自動ロックオン判定高さ上限　近接
    f32 closeMaxHeight;
    
    /// 近接攻撃自動捕捉 下限高さ[m]
    /// 
    /// 非ロックオン時の自動ロックオン判定高さ下限　近接
    f32 closeMinHeight;
    
    /// 近接攻撃自動捕捉 角度範囲 左右[deg]
    /// 
    /// 非ロックオン時の自動ロックオン判定左右角度[deg]　近接
    f32 closeAngRange;
    
    /// 近接攻撃自動捕捉 キャラ範囲最大半径[m]
    /// 
    /// 非ロックオン時の自動ロックオン判定距離　近接
    f32 closeMaxRadius;
    
    /// 近接攻撃自動捕捉 暗闇用キャラ範囲最大半径[m]
    /// 
    /// 非ロックオン時の自動ロックオン判定距離_暗闇　近接
    f32 closeMaxRadius_forD;
    
    /// 近接攻撃自動捕捉 真っ暗闇用キャラ範囲最大半径[m]
    /// 
    /// 非ロックオン時の自動ロックオン_真っ暗　近接
    f32 closeMaxRadius_forPD;
    
    /// 弾丸自動捕捉 キャラ範囲最大半径[m]
    /// 
    /// 非ロックオン時の自動ロックオン判定距離　弾丸
    f32 bulletMaxRadius;
    
    /// 弾丸自動捕捉 暗闇用キャラ範囲最大半径[m]
    /// 
    /// 非ロックオン時の自動ロックオン判定距離_暗闇　弾丸
    f32 bulletMaxRadius_forD;
    
    /// 弾丸自動捕捉 真っ暗闇用キャラ範囲最大半径[m]
    /// 
    /// 非ロックオン時の自動ロックオン判定距離_真っ暗　弾丸
    f32 bulletMaxRadius_forPD;
    
    /// 弾丸自動捕捉 角度範囲 左右[deg]
    /// 
    /// 非ロックオン時の自動ロックオン左右角度　弾丸
    f32 bulletAngRange;
    
    /// パディング
    dummy8 pad[28];
    
};

struct PLAY_REGION_PARAM_ST {
    static constexpr const char* TYPE_NAME = "PLAY_REGION_PARAM_ST";
    
    /// マルチプレイ区間ID
    s32 multiPlayZoneId;
    
    /// マルチプレイ開始制限イベントフラグID
    s32 multiPlayStartLimitEventFlagId;
    
    /// その他霊侵入不可能距離
    f32 otherDisableDistance;
    
    /// PC位置セーブ制限イベントフラグID
    s32 pcPositionSaveLimitEventFlagId;
    
    /// マルチプレイホスト制限イベントフラグ：このフラグがONになるとホストとしてマルチプレイが禁止される。ブロッククリアフラグを入れる想定。0：制限しない
    s32 multiPlayHostLimitEventFlagId;
    
    /// NPC白霊召喚儀式の召還NPCのエンティティIDの自由枠ID
    /// 
    /// NPC白霊召喚儀式の召還NPCのエンティティIDとして使われる自由枠IDの先頭
    s16 cultNpcWhiteGhostEntityId_byFree;
    
    /// マップ守護領域か？
    /// 
    /// マップ守護領域の枠の増減にするか
    u8 bMapGuradianRegion;
    
    /// 黄衣の翁サイン領域か？
    u8 bYellowCostumeRegion : 1;
    
    /// 闇霊スタート方向侵入か？
    u8 isSummonPosStartForRed : 1;
    
    dummy8 pad : 6;
    
    /// ワープアイテム許可篝火ID1
    /// 
    /// ワープアイテムの使用を許可する判定に使う篝火のエンティティID1
    s32 warpItemUsePermitBonfireId_1;
    
    /// ワープアイテム許可篝火ID2
    /// 
    /// ワープアイテムの使用を許可する判定に使う篝火のエンティティID2
    s32 warpItemUsePermitBonfireId_2;
    
    /// ワープアイテム許可篝火ID3
    /// 
    /// ワープアイテムの使用を許可する判定に使う篝火のエンティティID3
    s32 warpItemUsePermitBonfireId_3;
    
    /// ワープアイテム許可篝火ID4
    /// 
    /// ワープアイテムの使用を許可する判定に使う篝火のエンティティID4
    s32 warpItemUsePermitBonfireId_4;
    
    /// ワープアイテム許可篝火ID5
    /// 
    /// ワープアイテムの使用を許可する判定に使う篝火のエンティティID5
    s32 warpItemUsePermitBonfireId_5;
    
    /// ワープアイテム禁止イベントフラグID1
    /// 
    /// ワープアイテムの使用禁止を判定するイベントフラグID1。ワープアイテム許可篝火IDによる判定より優先度が上
    s32 warpItemProhibitionEventFlagId_1;
    
    /// ワープアイテム禁止イベントフラグID2
    /// 
    /// ワープアイテムの使用禁止を判定するイベントフラグID2。ワープアイテム許可篝火IDによる判定より優先度が上
    s32 warpItemProhibitionEventFlagId_2;
    
    /// ワープアイテム禁止イベントフラグID3
    /// 
    /// ワープアイテムの使用禁止を判定するイベントフラグID3。ワープアイテム許可篝火IDによる判定より優先度が上
    s32 warpItemProhibitionEventFlagId_3;
    
    /// ワープアイテム禁止イベントフラグID4
    /// 
    /// ワープアイテムの使用禁止を判定するイベントフラグID4。ワープアイテム許可篝火IDによる判定より優先度が上
    s32 warpItemProhibitionEventFlagId_4;
    
    /// ワープアイテム禁止イベントフラグID5
    /// 
    /// ワープアイテムの使用禁止を判定するイベントフラグID5。ワープアイテム許可篝火IDによる判定より優先度が上
    s32 warpItemProhibitionEventFlagId_5;
    
    /// 血痕・死亡幻影有効
    u8 enableBloodstain : 1;
    
    /// 血文字有効
    u8 enableBloodMessage : 1;
    
    /// 幻影有効
    u8 enableGhost : 1;
    
    dummy8 pad3 : 5;
    
    dummy8 pad2[3];
    
    /// 黄衣の翁ホスト制限イベントフラグ：このフラグがONになると黄衣の翁のホストとしてのマルチプレイが禁止される。ブロッククリアフラグを入れる想定。0：制限しない
    s32 multiPlayHASHostLimitEventFlagId;
    
    /// PC落下時の復帰ポイント
    /// 
    /// PCが落下したときの復帰位置。MapStudioのポイントタイプ「ワープポイント」のエンティティIDを設定する。-1の場合はセーブ位置に復帰する。
    s32 returnPointEntityId;
    
    /// 予約領域
    dummy8 reserve[20];
    
};

struct REMATCH_WARP_PARAM_ST {
    static constexpr const char* TYPE_NAME = "REMATCH_WARP_PARAM_ST";
    
    u32 EvdFileOffset;
    
    u32 MapFile;
    
    s32 WarpPointId;
    
    s32 EnemyNameAndImage;
    
    s32 LocalPlayerWeaponStruct1;
    
    s32 LocalPlayerWeaponStruct2;
    
    u8 LocalPlayerWeaponStruct3;
    
    u8 LocalPlayerWeaponStruct4;
    
    u8 LocalPlayerWeaponStruct5;
    
    u8 LocalPlayerWeaponStruct6;
    
    s32 Unk01;
    
    s32 Unk02;
    
    s32 Unk03;
    
    s32 EventFlagId1;
    
    s32 EventFlagId2;
    
    s32 EventFlagId3;
    
    s32 EventFlagId4;
    
    s32 EventFlagId5;
    
    s32 EventFlagId6;
    
    s32 EventFlagId7;
    
    s32 EventFlagId8;
    
    s32 EventFlagId9;
    
    s32 EventFlagId10;
    
    u8 EventFlagManByte1;
    
    u8 EventFlagManByte2;
    
    u8 EventFlagManByte3;
    
    u8 EventFlagManByte4;
    
    u8 EventFlagManByte5;
    
    u8 EventFlagManByte6;
    
    u8 EventFlagManByte7;
    
    u8 EventFlagManByte8;
    
    u8 EventFlagManByte9;
    
    u8 EventFlagManByte10;
    
    u8 WeaponStructFlag1;
    
    u8 WeaponStructFlag2;
    
    dummy8 pad[4];
    
};

struct WIRE_POINT_SEARCH_PARAM_ST {
    static constexpr const char* TYPE_NAME = "WIRE_POINT_SEARCH_PARAM_ST";
    
    /// アクション可能距離_最小
    /// 
    /// ワイヤーアクション可能な最小距離
    f32 actionDistanceNear;
    
    /// アクション可能距離_最大
    /// 
    /// ワイヤーアクション可能な最大距離
    f32 actionDistanceFar;
    
    /// 認識可能距離
    /// 
    /// ワイヤーアクションは出来ないが、ポイントが見える距離
    f32 findDistanceFar;
    
    /// 視野フィルタリング高さ_上
    /// 
    /// 四角形でフィルタリングする際の上側の高さ
    f32 filteringDistanceHeightUpper;
    
    /// 視野フィルタリング高さ_下
    /// 
    /// 四角形でフィルタリングする際の下側の高さ
    f32 filteringDistanceHeightLower;
    
    /// 視野フィルタリング幅
    /// 
    /// 四角形でフィルタリングする際の幅
    f32 filteringDistanceWidth;
    
    /// ターゲットソフトロック範囲高さ_上
    /// 
    /// 一度捉えたターゲットをソフトロックする画面範囲の高さ（上側）
    f32 softlockDistanceHeightUpper;
    
    /// ターゲットソフトロック範囲高さ_下
    /// 
    /// 一度捉えたターゲットをソフトロックする画面範囲の高さ（下側）
    f32 softlockDistanceHeightLower;
    
    /// ターゲットソフトロック範囲幅
    /// 
    /// 一度捉えたターゲットをソフトロックする画面範囲の幅
    f32 softlockDistanceWidth;
    
    /// パディング
    dummy8 pad[28];
    
};

struct CHARMAKEMENU_LISTITEM_PARAM_ST {
    static constexpr const char* TYPE_NAME = "CHARMAKEMENU_LISTITEM_PARAM_ST";
    
    /// 値
    s32 Value;
    
    /// 項目テキストID
    s32 CaptionID;
    
    /// アイコンID
    u8 IconID;
    
    /// 予約
    dummy8 reserved[7];
    
};

struct THROW_INFO_BANK {
    static constexpr const char* TYPE_NAME = "THROW_INFO_BANK";
    
    /// 投げ側キャラID
    s32 AtkChrId;
    
    /// 受け側キャラID
    s32 DefChrId;
    
    /// 有効距離[m]
    /// 
    /// この値より近い距離じゃないと投げない[m]
    f32 Dist;
    
    /// 自分の向きと相手の向きの角度差範囲min
    /// 
    /// 投げ側と受け側の角度差(Y軸)がこの角度より大きくないと投げない
    f32 DiffAngMin;
    
    /// 自分の向きと相手の向きの角度差範囲max
    /// 
    /// 投げ側と受け側の角度差(Y軸)がこの角度より小さくないと投げない
    f32 DiffAngMax;
    
    /// 高さ範囲上[m]
    /// 
    /// 投げ側から受け側のY軸の相対距離がこの値より小さくないと投げない
    f32 upperYRange;
    
    /// 高さ範囲下[m]
    /// 
    /// 投げ側から受け側のY軸の相対距離がこの値より小さくないと投げない
    f32 lowerYRange;
    
    /// 自分の向きと自分から相手への方向の角度差
    /// 
    /// 自分の正面のベクトルと、自分から相手への方向のベクトルの角度差。この値より大きいと投げない
    f32 diffAngMyToDef;
    
    /// 投げタイプID
    /// 
    /// 投げの種類を特定するID(攻撃パラメタと紐付け)
    s32 throwTypeId;
    
    /// 投げ側アニメID
    /// 
    /// 攻撃アニメIDを設定(EzStateと紐付け)
    s32 atkAnimId;
    
    /// 受け側アニメID
    /// 
    /// ダメージアニメIDを設定(EzStateと紐付け)
    s32 defAnimId;
    
    /// 投げ抜けHP
    /// 
    /// 投げ抜けに耐えられる値
    u16 escHp;
    
    /// 自力投げ抜けサイクル時間[ms]
    /// 
    /// 自力投げ抜けのサイクル時間[ms]
    u16 selfEscCycleTime;
    
    /// スフィアキャスト半径比率_上[1/100Rate]
    /// 
    /// スフィアキャストの上側半径の比率[80->0.8]
    u16 sphereCastRadiusRateTop;
    
    /// スフィアキャスト半径比率_下[1/100Rate]
    /// 
    /// スフィアキャストの下側半径の比率[80->0.8]
    u16 sphereCastRadiusRateLow;
    
    /// 操作タイプ
    u8 PadType;
    
    /// 投げ側の投げ可能状態タイプ
    /// 
    /// 投げ側の投げが可能な状態タイプを設定してください
    u8 AtkEnableState;
    
    /// 投げ側 吸着ダミポリID（削除予定）
    /// 
    /// 投げ側のどこに受け側を吸着させるか？Uint8 の古いデータ
    u8 atkSorbDmyId_old;
    
    /// 受け側 吸着ダミポリID（削除予定）
    /// 
    /// 受け側のどこに投げ側を吸着させるか？Uint8 の古いデータ
    u8 defSorbDmyId_old;
    
    /// 投げ種別(旧)
    /// 
    /// 投げの種別
    u8 throwType_old;
    
    /// 自力投げ抜けサイクル回数
    /// 
    /// 自力投げ抜けのサイクル回数
    u8 selfEscCycleCnt;
    
    /// 投げ発生時のダミポリ所持キャラの向き
    u8 dmyHasChrDirType;
    
    /// 投げ側が旋回するか？
    u8 isTurnAtker : 1;
    
    /// 武器カテゴリチェックをスキップするか？
    /// 
    /// 攻撃側の武器カテゴリチェックをスキップするか？
    u8 isSkipWepCate : 1;
    
    /// スフィアキャストをスキップするか？
    u8 isSkipSphereCast : 1;
    
    /// pad
    dummy8 pad0 : 5;
    
    /// 投げ側 吸着ダミポリID
    /// 
    /// 投げ側のどこに受け側を吸着させるか？
    s16 atkSorbDmyId;
    
    /// 受け側 吸着ダミポリID
    /// 
    /// 受け側のどこに投げ側を吸着させるか？
    s16 defSorbDmyId;
    
    /// 有効距離(投げ開始)[m]
    /// 
    /// この値より近い距離じゃないと投げない[m]　バックスタブ開始時の投げに使われる
    f32 Dist_start;
    
    /// 自分の向きと相手の向きの角度差範囲min(投げ開始)
    /// 
    /// 投げ側と受け側の角度差(Y軸)がこの角度より大きくないと投げない　バックスタブ開始時の投げに使われる
    f32 DiffAngMin_start;
    
    /// 自分の向きと相手の向きの角度差範囲max(投げ開始)
    /// 
    /// 投げ側と受け側の角度差(Y軸)がこの角度より小さくないと投げない　バックスタブ開始時の投げに使われる
    f32 DiffAngMax_start;
    
    /// 高さ範囲上(投げ開始)[m]
    /// 
    /// 投げ側から受け側のY軸の相対距離がこの値より小さくないと投げない　バックスタブ開始時の投げに使われる
    f32 upperYRange_start;
    
    /// 高さ範囲下(投げ開始)[m]
    /// 
    /// 投げ側から受け側のY軸の相対距離がこの値より小さくないと投げない　バックスタブ開始時の投げに使われる
    f32 lowerYRange_start;
    
    /// 自分の向きと自分から相手への方向の角度差(投げ開始)
    /// 
    /// 自分の正面のベクトルと、自分から相手への方向のベクトルの角度差。この値より大きいと投げない　バックスタブ開始時の投げに使われる
    f32 diffAngMyToDef_start;
    
    /// 投げ側の投げ範囲判定基準ダミポリId
    /// 
    /// 投げ側が、投げ範囲を計算するときに自分の位置と見なすダミポリ。-1ならカプセル原点
    s32 judgeRangeBasePosDmyId1;
    
    /// 投られ側の投げ範囲判定基準ダミポリId
    /// 
    /// 投げられ側が、投げ範囲を計算するときに自分の位置と見なすダミポリ。-1ならカプセル原点
    s32 judgeRangeBasePosDmyId2;
    
    /// 投げ種別
    /// 
    /// この投げの種別（成立条件や優先度、成立後の挙動）を指定　※投げ種別パラメータと連動
    u32 throwKind;
    
    /// 落下軌道上判定_範囲[m]
    /// 
    /// 受け側が投げ側の落下軌道からこの距離以内にいないと投げない　※落下軌道上判定する投げ種別のみ有効
    f32 normalFallOrbitCheck_range;
    
    /// 落下軌道上判定_高度制限[m]
    /// 
    /// 投げ側高さを0mとしたときのこの値の高さ（正なら下方、負なら上方）よりも受け側が下にいないと投げない　※落下軌道上判定する投げ種別のみ有効
    f32 normalFallOrbitCheck_heightLimit;
    
    /// 追加条件特殊効果（投げ側）
    /// 
    /// 投げ側にこのIDの特殊効果がかかっていないと投げない　※-1ならチェックしない
    s32 additionalConditionSpecialEffect_forAtk;
    
    /// 追加条件特殊効果（受け側）
    /// 
    /// 受け側にこのIDの特殊効果がかかっていないと投げない　※-1ならチェックしない
    s32 additionalConditionSpecialEffect_forDef;
    
    /// 通常落下軌道上判定_到達時間制限[ms]
    /// 
    /// 投げ側が現在のスピードで落下して受け側の所に到達するまでの予測時間がこの値以下でないと投げない　※通常落下軌道上判定する投げ種別のみ有効
    u16 normalFallOrbitCheck_timeLimit;
    
    /// 投げ側アニメオフセット
    /// 
    /// 攻撃側アニメのオフセットを設定 ※ビヘイビアCMSGのOffsetType"ThrowCategory"と対応
    u16 atkAnimOffset;
    
    /// 受け側アニメオフセット
    /// 
    /// ダメージアニメのオフセットを設定 ※ビヘイビアCMSGのOffsetType"ThrowCategory"と対応
    u16 defAnimOffset;
    
    /// 投げ追従方式
    /// 
    /// 投げ実行中、吸着ダミポリ所持キャラにどのように追従するか。※追従期間はTAEアクションでコントロール
    u8 throwFollowingType;
    
    /// 投げ追従解除時の落下を防止するか？
    /// 
    /// 追従解除時に段差から落下しないよう、壁抜け防止と同じ処理を落下防止壁に対しても行うか？
    u8 isEnableThrowFollowingFallAssist;
    
    /// キャラ物理ホーミングIDオフセット
    /// 
    /// 投げ中、受け側キャラに対してキャラ物理ホーミングアクションする際のホーミングIDをこの値でオフセットする。
    s32 charaPhysicsHomingId;
    
    /// 投げ追従中の壁めり込みを抑制するか？
    /// 
    /// 追従中壁にめり込んだり段差から落下しそうな見た目にならないよう、ヒットや落下防止壁に接触したときに吸着ダミポリ所持キャラごと戻す処理を行うか？
    u8 isEnableThrowFollowingFeedback;
    
    /// pad
    dummy8 pad1[3];
    
    /// 吸着時モデル位置補間時間[s]
    /// 
    /// カプセルが吸着ダミポリに吸着したあと、キャラモデルが投げアニメデータ通りの位置に補間移動する時間（0を設定した場合はモデル位置の補間が行われず、吸着直後からアニメデータ通りの位置関係で再生開始される）
    f32 adsrobModelPosInterpolationTime;
    
};

struct MULTI_ESTUS_FLASK_BONUS_PARAM_ST {
    static constexpr const char* TYPE_NAME = "MULTI_ESTUS_FLASK_BONUS_PARAM_ST";
    
    /// ホストのエスト回復数
    u8 host;
    
    /// 白霊
    /// 
    /// 協力サインの白霊のエスト回復数
    u8 WhiteGhost_None;
    
    /// 金霊（太陽）
    /// 
    /// 協力サインの金霊のエスト回復数
    u8 WhiteGhost_Umbasa;
    
    /// 白バーサーカー
    /// 
    /// 協力サインの白バーサーカーのエスト回復数
    u8 WhiteGhost_Berserker;
    
    /// 闇霊(ロザリア赤霊)（サイン）
    /// 
    /// 敵対サインの闇霊(ロザリア赤霊)のエスト回復数
    u8 BlackGhost_None_Sign;
    
    /// 赤金霊（サイン）
    /// 
    /// 敵対サインの赤金霊のエスト回復数
    u8 BlackGhost_Umbasa_Sign;
    
    /// 赤バーサーカー（サイン）
    /// 
    /// 敵対サインの赤バーサーカーのエスト回復数
    u8 BlackGhost_Berserker_Sign;
    
    /// 闇霊(ロザリア赤霊)（乱入）
    /// 
    /// 侵入オーブの闇霊(ロザリア赤霊)のエスト回復数
    u8 BlackGhost_None_Invade;
    
    /// 赤金霊（乱入）
    /// 
    /// 侵入オーブの赤金霊のエスト回復数
    u8 BlackGhost_Umbasa_Invade;
    
    /// 赤バーサーカー（乱入）
    /// 
    /// 侵入オーブの赤バーサーカーのエスト回復数
    u8 BlackGhost_Berserker_Invade;
    
    /// 赤狩り霊１のエスト回復数
    u8 RedHunter1;
    
    /// 赤狩り霊２のエスト回復数
    u8 RedHunter2;
    
    /// マップ守護霊(森)
    /// 
    /// マップ守護霊（森）のエスト回復数
    u8 GuardianOfForest;
    
    /// マップ守護霊(アノール)のエスト回復数
    u8 GuardianOfAnor;
    
    /// pad
    dummy8 pad1[6];
    
};

struct NPC_PARAM_ST {
    static constexpr const char* TYPE_NAME = "NPC_PARAM_ST";
    
    /// 行動バリエーションID
    /// 
    /// 行動IDを算出するときに使用するバリエーションID.
    s32 behaviorVariationId;
    
    /// 死体ラグドールのフォースの影響率
    f32 deadMoveForceRate;
    
    /// NPC名ID
    /// 
    /// NPC名メッセージパラメータ用ID
    s32 nameId;
    
    /// 旋回速度[deg/sec]
    /// 
    /// 1秒間に旋回できる回転速度[度/秒].
    f32 turnVellocity;
    
    /// 対マップあたりの高さ[m]
    /// 
    /// 対キャラ当たりカプセルの高さ.
    f32 hitHeight;
    
    /// 対マップあたりの半径[m]
    /// 
    /// 対キャラ当たりカプセルの半径.
    f32 hitRadius;
    
    /// 重量[kg]
    /// 
    /// 重量.
    u32 weight;
    
    /// 表示位置Yオフセット[m]
    /// 
    /// モデル表示位置のY（高さ）方向のオフセット。あたり位置より浮かせることができる。
    f32 hitYOffset;
    
    /// ＨＰ
    /// 
    /// 死亡猶予.
    u32 hp;
    
    /// ＭＰ
    /// 
    /// 魔法使用量.
    u32 mp;
    
    /// ソウル
    /// 
    /// 死亡時に、キャラクターが取得できるソウル量.
    u32 getSoul;
    
    /// アイテム抽選ID_1
    /// 
    /// 死亡時に取得するアイテムの抽選IDを指定
    s32 itemLotId_1;
    
    /// アイテム抽選ID_2
    /// 
    /// 死亡時に取得するアイテムの抽選IDを指定
    s32 itemLotId_2;
    
    /// アイテム抽選ID_3
    /// 
    /// 死亡時に取得するアイテムの抽選IDを指定
    s32 itemLotId_3;
    
    /// アイテム抽選ID_4
    /// 
    /// 死亡時に取得するアイテムの抽選IDを指定
    s32 itemLotId_4;
    
    /// アイテム抽選ID_5
    /// 
    /// 死亡時に取得するアイテムの抽選IDを指定
    s32 itemLotId_5;
    
    /// アイテム抽選ID_6
    /// 
    /// 死亡時に取得するアイテムの抽選IDを指定
    s32 itemLotId_6;
    
    /// 人間性抽選ID
    /// 
    /// 死亡時に取得する人間性の抽選IDを指定
    s32 humanityLotId;
    
    /// 常駐特殊効果0
    s32 spEffectID0;
    
    /// 常駐特殊効果1
    s32 spEffectID1;
    
    /// 常駐特殊効果2
    s32 spEffectID2;
    
    /// 常駐特殊効果3
    s32 spEffectID3;
    
    /// 常駐特殊効果4
    s32 spEffectID4;
    
    /// 常駐特殊効果5
    s32 spEffectID5;
    
    /// 常駐特殊効果6
    s32 spEffectID6;
    
    /// 常駐特殊効果7
    s32 spEffectID7;
    
    /// 周回ボーナス用特殊効果ＩＤ
    s32 GameClearSpEffectID;
    
    /// 物理攻撃カット率[％]
    /// 
    /// ガード時のダメージカット率を各攻撃ごとに設定
    f32 physGuardCutRate;
    
    /// 魔法攻撃カット率[％]
    /// 
    /// ガード攻撃でない場合は、0を入れる
    f32 magGuardCutRate;
    
    /// 炎攻撃力カット率[％]
    /// 
    /// 炎攻撃をどれだけカットするか？
    f32 fireGuardCutRate;
    
    /// 電撃攻撃力カット率[％]
    /// 
    /// 電撃攻撃をどれだけカットするか？
    f32 thunGuardCutRate;
    
    /// アニメIDオフセット1
    /// 
    /// すべてのアニメをこの数だけずらしたIDで再生します。なければ元のアニメIDを参照します。
    s32 animIdOffset;
    
    /// 移動アニメパラメータID
    /// 
    /// 移動アニメパラメータ参照ID
    s32 moveAnimId;
    
    /// 特殊移動アニメパラメータID0
    /// 
    /// 特殊移動アニメパラメータ参照ID
    s32 spMoveAnimId1;
    
    /// 特殊移動アニメパラメータID1
    /// 
    /// 特殊移動アニメパラメータ参照ID
    s32 spMoveAnimId2;
    
    /// ネットワークワープ判定距離[m/秒]
    /// 
    /// ネットワークの同期で、補完移動でなくワープさせる距離。スピードの速い人（exドラゴン)は長めにしてあげる必要がある。
    f32 networkWarpDist;
    
    /// R1
    /// 
    /// 行動パラメータツールからIDを登録し、行動を指定する.
    s32 dbgBehaviorR1;
    
    /// L1
    /// 
    /// 行動パラメータツールからIDを登録し、行動を指定する.
    s32 dbgBehaviorL1;
    
    /// R2
    /// 
    /// 行動パラメータツールからIDを登録し、行動を指定する.
    s32 dbgBehaviorR2;
    
    /// L2
    /// 
    /// 行動パラメータツールからIDを登録し、行動を指定する.
    s32 dbgBehaviorL2;
    
    /// □
    /// 
    /// 行動パラメータツールからIDを登録し、行動を指定する.
    s32 dbgBehaviorRL;
    
    /// ○
    /// 
    /// 行動パラメータツールからIDを登録し、行動を指定する.
    s32 dbgBehaviorRR;
    
    /// ×
    /// 
    /// 行動パラメータツールからIDを登録し、行動を指定する.
    s32 dbgBehaviorRD;
    
    /// △
    /// 
    /// 行動パラメータツールからIDを登録し、行動を指定する.
    s32 dbgBehaviorRU;
    
    /// ←
    /// 
    /// 行動パラメータツールからIDを登録し、行動を指定する.
    s32 dbgBehaviorLL;
    
    /// →
    /// 
    /// 行動パラメータツールからIDを登録し、行動を指定する.
    s32 dbgBehaviorLR;
    
    /// ↓
    /// 
    /// 行動パラメータツールからIDを登録し、行動を指定する.
    s32 dbgBehaviorLD;
    
    /// ↑
    /// 
    /// 行動パラメータツールからIDを登録し、行動を指定する.
    s32 dbgBehaviorLU;
    
    /// アニメIDオフセット2
    /// 
    /// すべてのアニメをこの数だけずらしたIDで再生します。なければアニメIDオフセット1のアニメIDを参照します。
    s32 animIdOffset2;
    
    /// ダメージグループ1ダメージ倍率
    /// 
    /// ダメージグループ1に対するダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 damageRate_DamageGroup1;
    
    /// ダメージグループ2ダメージ倍率
    /// 
    /// ダメージグループ2に対するダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 damageRate_DamageGroup2;
    
    /// ダメージグループ3ダメージ倍率
    /// 
    /// ダメージグループ3に対するダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 damageRate_DamageGroup3;
    
    /// ダメージグループ4ダメージ倍率
    /// 
    /// ダメージグループ4に対するダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 damageRate_DamageGroup4;
    
    /// ダメージグループ5ダメージ倍率
    /// 
    /// ダメージグループ5に対するダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 damageRate_DamageGroup5;
    
    /// ダメージグループ6ダメージ倍率
    /// 
    /// ダメージグループ6に対するダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 damageRate_DamageGroup6;
    
    /// ダメージグループ7ダメージ倍率
    /// 
    /// ダメージグループ7に対するダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 damageRate_DamageGroup7;
    
    /// ダメージグループ8ダメージ倍率
    /// 
    /// ダメージグループ8に対するダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 damageRate_DamageGroup8;
    
    /// ダメージグループ「弱点」ダメージ倍率
    /// 
    /// ダメージグループ「弱点」に対するダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 damageRate_DamageGroupWeak;
    
    /// SA回復時間補正値
    /// 
    /// スーパーアーマー回復時間用の補正値
    f32 superArmorRecoverCorrection;
    
    /// SAブレイク時ノックバック距離
    /// 
    /// SAブレイクの時だけに使えるノックバック距離
    f32 superArmorBrakeKnockbackDist;
    
    /// スタミナ総量.
    u16 stamina;
    
    /// スタミナ回復基本速度[point/s]
    u16 staminaRecoverBaseVel;
    
    /// 物理防御力
    /// 
    /// 物理攻撃に対するダメージ減少基本値.
    u16 def_phys;
    
    /// 斬撃防御力[％]
    /// 
    /// 攻撃属性を見て、斬撃属性のときは、防御力を減少させる.
    s16 def_slash;
    
    /// 軽打防御力[％]
    /// 
    /// 攻撃属性を見て、軽打属性のときは、防御力を減少させる.
    s16 def_lightHit;
    
    /// 刺突防御力[％]
    /// 
    /// 攻撃属性を見て、刺突属性のときは、防御力を減少させる.
    s16 def_thrust;
    
    /// 魔法防御力
    /// 
    /// 魔法攻撃に対するダメージ減少基本値.
    u16 def_mag;
    
    /// 炎防御力
    /// 
    /// 炎攻撃に対するダメージ減少基本値.
    u16 def_fire;
    
    /// 電撃防御力
    /// 
    /// 電撃攻撃に対するダメージ減少基本値.
    u16 def_thunder;
    
    /// はじき防御力
    /// 
    /// 敵の攻撃のはじき判定に使用。//ガード以外の通常攻撃でもはじけるようにするためのものです.//硬い表皮の敵は、何もしなくてもはじかれることがある…みたいな感じ通常の敵なら関係ないです.
    u16 defFlickPower;
    
    /// 毒耐性
    /// 
    /// 毒状態異常へのかかりにくさ
    u16 resist_poison;
    
    /// 疫病耐性
    /// 
    /// 疫病状態異常へのかかりにくさ
    u16 resist_desease;
    
    /// 疫病耐性
    /// 
    /// 出血状態異常へのかかりにくさ
    u16 resist_blood;
    
    /// 呪耐性
    /// 
    /// 呪状態異常へのかかりにくさ
    u16 resist_curse;
    
    /// 徘徊ゴースト時差し替えモデルID
    /// 
    /// 徘徊ゴースト化したときの差し替えモデル、テクスチャID
    s16 ghostModelId;
    
    /// 通常時差し替えリソースID
    /// 
    /// 通常時のリソースID差し替え（むやみに使わないこと）
    s16 normalChangeResouceId;
    
    /// ガード範囲[deg]
    /// 
    /// 武器のガード時の防御発生範囲角度.保留中
    s16 guardAngle;
    
    /// 斬撃攻撃カット率[％]
    /// 
    /// 攻撃タイプを見て、斬撃属性のダメージを何％カットするか？を指定
    s16 slashGuardCutRate;
    
    /// 軽打攻撃カット率[％]
    /// 
    /// 攻撃タイプを見て、軽打属性のダメージを何％カットするか？を指定
    s16 lightHitGuardCutRate;
    
    /// 刺突攻撃カット率[％]
    /// 
    /// 攻撃タイプを見て、刺突属性のダメージを何％カットするか？を指定
    s16 thrustGuardCutRate;
    
    /// SA耐久力
    /// 
    /// スーパーアーマー耐久値
    s16 superArmorDurability;
    
    /// 通常時差し替えテクスチャキャラID（むやみに使わないこと）
    s16 normalChangeTexChrId;
    
    /// ドロップアイテムの表示形式
    /// 
    /// アイテムドロップ時の表示方法(死体発光、アイテム表示、吸引ドロップ)
    u16 dropType;
    
    /// ノックバックカット率_対プレイヤー_直撃時[%]
    /// 
    /// プレイヤーの攻撃が直撃した時のノックバックカット率
    u8 knockbackRate_vsPlayer_DirectHit;
    
    /// ノックバックカット率_対プレイヤー_ガード時[%]
    /// 
    /// プレイヤーの攻撃をガードした時のノックバックカット率
    u8 knockbackRate_vsPlayer_Guard;
    
    /// ノックバックカット率_対プレイヤー_ジャスガ時[%]
    /// 
    /// プレイヤーの攻撃をジャスガした時のノックバックカット率
    u8 knockbackRate_vsPlayer_JustGuard;
    
    /// ノックバックカット率_対エネミー_直撃時[%]
    /// 
    /// エネミーの攻撃が直撃した時のノックバックカット率
    u8 knockbackRate_vsEnemy_DirectHit;
    
    /// ノックバックカット率_対エネミー_ガード時[%]
    /// 
    /// エネミーの攻撃をガードした時のノックバックカット率
    u8 knockbackRate_vsEnemy_Guard;
    
    /// ノックバックカット率_対エネミー_ジャスガ時[%]
    /// 
    /// エネミーの攻撃をジャスガした時のノックバックカット率
    u8 knockbackRate_vsEnemy_JustGuard;
    
    /// 水泳ヒットに当たるか（水中・水上敵で有効に設定する）
    u8 isHitSwimMapCollision : 1;
    
    /// 水泳ヒットに交差したら死亡するか
    u8 isDeadSwimMapCollision : 1;
    
    /// ドーピングを進行オフセットするか
    /// 
    /// ○の場合、成長ドーピングと周回ドーピングの一の位を進行に応じてオフセットする
    u8 isDopingProgressOffset : 1;
    
    /// 会話字幕中LookAtの振動を抑制するか
    /// 
    /// ○の場合、会話字幕中LookAtダミポリの位置・向きの変化量が一定未満だったら更新しない。
    u8 doesPreventTalkingLookAtVibration : 1;
    
    /// pad
    dummy8 pad2 : 4;
    
    /// ヒットストップするか_防御側
    /// 
    /// 被弾時、このキャラがヒットストップ処理を行うかどうかの設定
    u8 hitStopType_Defencer;
    
    /// 必要忍殺回数
    /// 
    /// 倒すために必要な忍殺回数。0の場合は忍殺せずにHPを削れば倒せる。
    s8 ninsatuNum;
    
    /// ノックバックパラメータID
    /// 
    /// ノックバック時に使用するパラメータIDを設定
    u8 knockbackParamId;
    
    /// 落下ダメージ軽減補正[％]
    u8 fallDamageDump;
    
    /// スタミナ攻撃カット率[％]
    /// 
    /// ガード成功時に、敵のスタミナ攻撃に対する防御力
    u8 staminaGuardDef;
    
    /// PC-黒
    /// 
    /// QWC変化量　PC属性値黒
    u8 pcAttrB;
    
    /// PC-白
    /// 
    /// QWC変化量　PC属性値白
    u8 pcAttrW;
    
    /// PC-左
    /// 
    /// QWC変化量　PC属性値左
    u8 pcAttrL;
    
    /// PC-右
    /// 
    /// QWC変化量　PC属性値右
    u8 pcAttrR;
    
    /// エリア-黒
    /// 
    /// QWC変化量　エリア属性値黒
    u8 areaAttrB;
    
    /// エリア-白
    /// 
    /// QWC変化量　エリア属性値白
    u8 areaAttrW;
    
    /// エリア-左
    /// 
    /// QWC変化量　エリア属性値左
    u8 areaAttrL;
    
    /// エリア-右
    /// 
    /// QWC変化量　エリア属性値右
    u8 areaAttrR;
    
    /// MP回復基本速度[％/s]
    u8 mpRecoverBaseVel;
    
    /// はじき時ダメージ減衰率[%]
    /// 
    /// 攻撃をはじいた時にダメージを減衰する値を設定
    u8 flickDamageCutRate;
    
    /// デフォルトLODパラムID(-1：なし)
    s8 defaultLodParamId;
    
    /// 描画タイプ
    u8 drawType;
    
    /// NPCタイプ
    /// 
    /// NPCの種類.ザコ敵/ボス敵が区別されていればOK
    u8 npcType;
    
    /// チームタイプ
    /// 
    /// NPCの攻撃が当たる/当たらない、狙う/狙わない設定
    u8 teamType;
    
    /// 移動タイプ
    /// 
    /// 移動方法。これにより制御が変更される.
    u8 moveType;
    
    /// ロック距離
    /// 
    /// ロックオンできる距離[m]
    u8 lockDist;
    
    /// 弱点防御材質1【SE】
    /// 
    /// 弱点部位ダメージを受けた時に鳴らすSEを判定する。1
    u16 materialSe_Weak1;
    
    /// 弱点防御材質1【SFX】
    /// 
    /// 弱点部位ダメージを受けた時に発生するSFXを判定する。1
    u16 materialSfx_Weak1;
    
    /// 部位ダメージ適用攻撃
    /// 
    /// 部位ダメージを適用する攻撃タイプを設定する
    u8 partsDamageType;
    
    /// 起伏にあわせる最大角度
    /// 
    /// 起伏に角度を合わせる場合の上限角度。全長が長い場合には低めに設定したほうがよいです。
    u8 maxUndurationAng;
    
    /// ガードレベル
    /// 
    /// ガードしたとき、敵の攻撃をどのガードモーションで受けるか？を決める
    s8 guardLevel;
    
    /// 燃焼SFXタイプ
    /// 
    /// 燃焼時のSFXタイプ
    u8 burnSfxType;
    
    /// 毒耐性カット率[％]
    /// 
    /// 毒にする攻撃力（特殊効果パラメータに設定）をどれだけカットするか
    s8 poisonGuardResist;
    
    /// 疫病攻撃カット率[％]
    /// 
    /// 疫病にする攻撃力（特殊効果パラメータに設定）をどれだけカットするか
    s8 diseaseGuardResist;
    
    /// 出血攻撃カット率[％]
    /// 
    /// 出血にする攻撃力（特殊効果パラメータに設定）をどれだけカットするか
    s8 bloodGuardResist;
    
    /// 呪攻撃カット率[％]
    /// 
    /// 呪にする攻撃力（特殊効果パラメータに設定）をどれだけカットするか
    s8 curseGuardResist;
    
    /// パリィ攻撃力。パリィする側が使用
    u8 parryAttack;
    
    /// パリィ防御力。パリィされる側が使用。
    u8 parryDefence;
    
    /// SFXサイズ
    u8 sfxSize;
    
    /// カメラ押し出し領域半径[m]
    u8 pushOutCamRegionRadius;
    
    /// ヒットストップするか_攻撃側
    /// 
    /// 被弾時、このキャラに攻撃をヒットさせたキャラがヒットストップ処理を行うかどうかの設定
    u8 hitStopType;
    
    /// はしご上終端オフセット[1/10m]
    /// 
    /// はしご終端判定用オフセット上側
    u8 ladderEndChkOffsetTop;
    
    /// はしご下終端オフセット[1/10m]
    /// 
    /// はしご終端判定用オフセット下側
    u8 ladderEndChkOffsetLow;
    
    /// カメラヒットあたりラグドール
    /// 
    /// 敵のラグドールにカメラがあたるか。(プレイヤにも当たるときのみ有効)
    u8 useRagdollCamHit : 1;
    
    /// クロスリジッドヒットを無効
    /// 
    /// クロスリジッドが自分に当たらないようにしたければ○
    u8 disableClothRigidHit : 1;
    
    /// あたりラグドール
    /// 
    /// 敵のラグドールにプレイヤーがあたるか。デカキャラだけはラグドールにもプレイヤーがあたるようにしたいので、この設定でオンオフ.
    u8 useRagdoll : 1;
    
    /// 特攻Aか。特攻Aダメージ倍率が計算に含まれるようになります
    u8 isWeakA : 1;
    
    /// 霊体か。ダメージ計算等が専用になります徘徊ゴーストと混同しないように注意
    u8 isGhost : 1;
    
    /// ダメージ0のときにダメージモーションなしか
    /// 
    /// ダメージ0のときにダメージモーションを再生しないか。
    u8 isNoDamageMotion : 1;
    
    /// 起伏に角度をあわせるか
    /// 
    /// キャラの前後回転を地面の起伏に合わせるか。飛行キャラの場合は使用不可
    u8 isUnduration : 1;
    
    /// 徘徊ゴーストになるか
    /// 
    /// プレイヤーがクライアントのときに徘徊ゴーストになるか
    u8 isChangeWanderGhost : 1;
    
    /// モデル表示マスク0
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask0 : 1;
    
    /// モデル表示マスク1
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask1 : 1;
    
    /// モデル表示マスク2
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask2 : 1;
    
    /// モデル表示マスク3
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask3 : 1;
    
    /// モデル表示マスク4
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask4 : 1;
    
    /// モデル表示マスク5
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask5 : 1;
    
    /// モデル表示マスク6
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask6 : 1;
    
    /// モデル表示マスク7
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask7 : 1;
    
    /// モデル表示マスク8
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask8 : 1;
    
    /// モデル表示マスク9
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask9 : 1;
    
    /// モデル表示マスク10
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask10 : 1;
    
    /// モデル表示マスク11
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask11 : 1;
    
    /// モデル表示マスク12
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask12 : 1;
    
    /// モデル表示マスク13
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask13 : 1;
    
    /// モデル表示マスク14
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask14 : 1;
    
    /// モデル表示マスク15
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask15 : 1;
    
    /// 首振り有効にするか
    /// 
    /// パラムウィーバで設定された首振りを有効にするか。
    u8 isEnableNeckTurn : 1;
    
    /// リスポン禁止か
    /// 
    /// リスポンを禁止するか
    u8 disableRespawn : 1;
    
    /// 移動アニメを待つか
    /// 
    /// 移動アニメをアニメが終わるまで再生するか。（カゲロウ龍の様に。）
    u8 isMoveAnimWait : 1;
    
    /// 群集用処理軽減するか
    /// 
    /// 群集時の処理負荷軽減を行なうか。赤子用（できればファランクスも）
    u8 isCrowd : 1;
    
    /// 特攻Bか。特攻Bダメージ倍率が計算に含まれるようになります
    u8 isWeakB : 1;
    
    /// 特攻Cか。特攻Cダメージ倍率が計算に含まれるようになります
    u8 isWeakC : 1;
    
    /// 特攻Dか。特攻Dダメージ倍率が計算に含まれるようになります
    u8 isWeakD : 1;
    
    /// 常時特殊旋回するか
    /// 
    /// 常時特殊旋回を実行するか(旋回移動先にナビメッシュがない場合も特殊旋回を継続実行します)
    u8 doesAlwaysUseSpecialTurn : 1;
    
    /// 誓約タイプ(なし：０)
    u8 vowType : 3;
    
    /// 初期死亡しない
    /// 
    /// 初期死亡をしない場合にTRUE、殺してセーブしても死体再現されません。
    u8 disableInitializeDead : 1;
    
    /// ヒット時振動するか
    /// 
    /// ヒット時振動をする場合TRUE。亡者など、普通のヒットストップと変えたいときにつかう。
    u8 isHitRumble : 1;
    
    /// スムーズ旋回するか
    /// 
    /// ルート移動でのノード間旋回時、補間を行うか否か
    u8 isSmoothTurn : 1;
    
    /// 特攻Eか。特攻Eダメージ倍率が計算に含まれるようになります
    u8 isWeakE : 1;
    
    /// 特攻Fか。特攻Fダメージ倍率が計算に含まれるようになります
    u8 isWeakF : 1;
    
    /// モデル表示マスク16
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask16 : 1;
    
    /// モデル表示マスク17
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask17 : 1;
    
    /// モデル表示マスク18
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask18 : 1;
    
    /// モデル表示マスク19
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask19 : 1;
    
    /// モデル表示マスク20
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask20 : 1;
    
    /// モデル表示マスク21
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask21 : 1;
    
    /// モデル表示マスク22
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask22 : 1;
    
    /// モデル表示マスク23
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask23 : 1;
    
    /// モデル表示マスク24
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask24 : 1;
    
    /// モデル表示マスク25
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask25 : 1;
    
    /// モデル表示マスク26
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask26 : 1;
    
    /// モデル表示マスク27
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask27 : 1;
    
    /// モデル表示マスク28
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask28 : 1;
    
    /// モデル表示マスク29
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask29 : 1;
    
    /// モデル表示マスク30
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask30 : 1;
    
    /// モデル表示マスク31
    /// 
    /// 表示マスクに対応するモデルを表示します。
    u8 modelDispMask31 : 1;
    
    /// ドロップアイテム半径補正
    /// 
    /// 通常のItem検索判定の円柱半径に、補正として足し合わせる半径(敵ドロップアイテムに適用。大きなキャラなどで使用する)
    f32 itemSearchRadius;
    
    /// 対キャラあたりの高さ[m]
    /// 
    /// 対キャラ当たりカプセルの高さ.
    f32 chrHitHeight;
    
    /// 対キャラあたりの半径[m]
    /// 
    /// 対キャラ当たりカプセルの半径.
    f32 chrHitRadius;
    
    /// 特殊旋回のタイプ
    u8 specialTurnType;
    
    /// ソウルはボス入手か
    u8 isSoulGetByBoss : 1;
    
    /// オブジェクト扱いの弾丸オーナか
    /// 
    /// 弾丸のオーナーとなった場合、弾丸に関連するダメージ計算などをオブジェのものを適用するようにするフラグ。勢力別ダメージ補正で使用。
    u8 isBulletOwner_byObject : 1;
    
    /// ロウヒットFootIKを使うか？
    /// 
    /// ロウヒット用のFootIkフィルターを使用するか
    u8 isUseLowHitFootIk : 1;
    
    /// NpcPlayerのときPvPのダメージ補正制御を適用するか
    /// 
    /// NpcPlayerのときにPvPダメージ計算時に「プレイヤー」としてダメージ計算するのかを決める。無効の場合は「敵」扱い。
    u8 isNpcPlayerCalculatePvPDamage : 1;
    
    /// インテグレートレイキャストで天井の高さを見るか？
    /// 
    /// インテグレート（持ち上げ床判定）で30cm固定持ち上げではなく、天井が低いことを考慮して天井の高さを求めてから持ち上げ判定を行うようにするフラグ。処理負荷の増加に注意
    u8 isIntegrateRaycastCheckRoof : 1;
    
    /// 多言語対応か
    u8 isMultilingual : 1;
    
    /// 発見マーカーを表示するか
    /// 
    /// ○が設定されている対象のみ、発見マーカーFEが表示されるようにする。
    u8 isEnableFe : 1;
    
    /// 死体ターゲットとして認識されるか
    /// 
    /// ○が設定されている対象のみ、自身の死亡時に、仲間が死体位置ターゲットとして見つけることが出来る。
    u8 isCreateCorpseTarget : 1;
    
    /// 闇防御力
    /// 
    /// 闇攻撃に対するダメージ減少基本値.
    u16 def_dark;
    
    /// 特殊旋回の使用距離の閾値[m]
    /// 
    /// ターゲットとの距離が設定された閾値以上の場合に、特殊旋回を行う
    f32 specialTurnDistanceThreshold;
    
    /// フットエフェクト識別子
    /// 
    /// フットエフェクトで使用するSFX識別子。（XYYZZZのZZZ）
    s32 footEffectSfxId;
    
    /// 防御材質1【SE】
    /// 
    /// ダメージを受けたときに鳴らすＳＥを判定する。1.見た目で設定してＯＫ.
    u16 materialSe1;
    
    /// 防御材質1【SFX】
    /// 
    /// ダメージを受けたときに発生するSFXを判定する。1.見た目で設定してＯＫ.
    u16 materialSfx1;
    
    /// 弱点防御材質2【SE】
    /// 
    /// 弱点部位ダメージを受けた時に鳴らすSEを判定する。2
    u16 materialSe_Weak2;
    
    /// 弱点防御材質2【SFX】
    /// 
    /// 弱点部位ダメージを受けた時に発生するSFXを判定する。2
    u16 materialSfx_Weak2;
    
    /// 防御材質2【SE】
    /// 
    /// ダメージを受けたときに鳴らすＳＥを判定する。2.見た目で設定してＯＫ.
    u16 materialSe2;
    
    /// 防御材質2【SFX】
    /// 
    /// ダメージを受けたときに発生するSFXを判定する。2.見た目で設定してＯＫ.
    u16 materialSfx2;
    
    /// 常駐特殊効果8
    s32 spEffectID8;
    
    /// 常駐特殊効果9
    s32 spEffectID9;
    
    /// 常駐特殊効果10
    s32 spEffectID10;
    
    /// 常駐特殊効果11
    s32 spEffectID11;
    
    /// 常駐特殊効果12
    s32 spEffectID12;
    
    /// 常駐特殊効果13
    s32 spEffectID13;
    
    /// 常駐特殊効果14
    s32 spEffectID14;
    
    /// 常駐特殊効果15
    s32 spEffectID15;
    
    /// フットデカール識別子1
    /// 
    /// フットエフェクト発生時に貼られるデカール。床材質も考慮される
    s32 footEffectDecalBaseId1;
    
    /// 強靭度の基本値
    u32 toughness;
    
    /// 強靭度 回復時間補正値
    /// 
    /// 強靭度の回復時間用の補正値
    f32 toughnessRecoverCorrection;
    
    /// 無属性ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
    f32 neutralDamageCutRate;
    
    /// 斬撃ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
    f32 slashDamageCutRate;
    
    /// 軽打ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
    f32 lightHitDamageCutRate;
    
    /// 刺突ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
    f32 thrustDamageCutRate;
    
    /// 魔法ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
    f32 magicDamageCutRate;
    
    /// 火炎ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
    f32 fireDamageCutRate;
    
    /// 電撃ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
    f32 thunderDamageCutRate;
    
    /// 闇ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
    f32 darkDamageCutRate;
    
    /// 闇攻撃力カット率[％]
    /// 
    /// 闇攻撃をどれだけカットするか？
    f32 darkGuardCutRate;
    
    /// クロス更新優先度オフセット[m]
    s8 clothUpdateOffset;
    
    /// NPCプレイヤー時重量設定
    /// 
    /// NPCプレイヤーのときに適用される装備重量タイプ
    u8 npcPlayerWeightType;
    
    /// 通常時差し替えモデルID
    /// 
    /// 通常時の差し替えモデル、テクスチャID
    s16 normalChangeModelId;
    
    /// 通常時差し替えアニメキャラID
    /// 
    /// 対象のアニメを指定IDのAnibndで差し替える
    s16 normalChangeAnimChrId;
    
    /// ペイントレンダーターゲットサイズ[pix]
    u16 paintRenderTargetSize;
    
    /// 儀式設定ID
    /// 
    /// 儀式時に使われる儀式設定ParamのID
    u32 cultSettingId;
    
    /// しゃがみ対マップあたりの高さ[m]
    /// 
    /// しゃがみ中の対マップ当たりカプセルの高さ.
    f32 squatMapHitHeight;
    
    /// しゃがみ対マップあたりの半径[m]
    /// 
    /// しゃがみ中の対マップ当たりカプセルの半径.
    f32 squatMapHitRadius;
    
    /// しゃがみ対キャラあたりの高さ[m]
    /// 
    /// しゃがみ中の対キャラ当たりカプセルの高さ.
    f32 squatChrHitHeight;
    
    /// しゃがみ対キャラあたりの半径[m]
    /// 
    /// しゃがみ中の対キャラ当たりカプセルの半径.
    f32 squatChrHitRadius;
    
    /// ダメージグループ1被ダメージ時攻撃パラメータ
    /// 
    /// 部位1にダメージが当たった際に参照する攻撃パラメータID
    s32 partsAtkParamId1;
    
    /// ダメージグループ2被ダメージ時攻撃パラメータ
    /// 
    /// 部位2にダメージが当たった際に参照する攻撃パラメータID
    s32 partsAtkParamId2;
    
    /// ダメージグループ3被ダメージ時攻撃パラメータ
    /// 
    /// 部位3にダメージが当たった際に参照する攻撃パラメータID
    s32 partsAtkParamId3;
    
    /// ダメージグループ4被ダメージ時攻撃パラメータ
    /// 
    /// 部位4にダメージが当たった際に参照する攻撃パラメータID
    s32 partsAtkParamId4;
    
    /// ダメージグループ5被ダメージ時攻撃パラメータ
    /// 
    /// 部位5にダメージが当たった際に参照する攻撃パラメータID
    s32 partsAtkParamId5;
    
    /// ダメージグループ6被ダメージ時攻撃パラメータ
    /// 
    /// 部位6にダメージが当たった際に参照する攻撃パラメータID
    s32 partsAtkParamId6;
    
    /// ダメージグループ7被ダメージ時攻撃パラメータ
    /// 
    /// 部位7にダメージが当たった際に参照する攻撃パラメータID
    s32 partsAtkParamId7;
    
    /// ダメージグループ8被ダメージ時攻撃パラメータ
    /// 
    /// 部位8にダメージが当たった際に参照する攻撃パラメータID
    s32 partsAtkParamId8;
    
    /// 適用シェーダーID
    /// 
    /// 適用するファントムパラメータ.xlsmのID
    s32 phantomShaderId;
    
    /// マルチプレイ補正パラメータID
    s32 multiPlayCorrectionParamId;
    
    /// FootIK足首の制限角度_ピッチ
    /// 
    /// FootIK足首のピッチの制限角度（-1：制限なし）。HATでFoot End L Sを設定していない場合はこの角度がロールと共通で使用される。
    f32 maxAnklePitchAngle;
    
    /// 冷気耐性
    /// 
    /// 冷気状態異常へのかかりにくさ
    u16 resist_freeze;
    
    /// 冷気攻撃カット率[％]
    /// 
    /// 冷気に対する攻撃力（特殊効果パラメータに設定）をどれだけカットするか
    s8 freezeGuardResist;
    
    /// チームタイプ(巨人の木の実の種適応後)
    /// 
    /// 巨人の木の実の種の効果適応後に刺し変わるチームタイプ。NPCの攻撃が当たる/当たらない、狙う/狙わない設定
    u8 teamTypeByGiantNut;
    
    /// ロックカメラパラメータID
    /// 
    /// ロックオンされた際にカメラに適用させるロックカメラパラメータのID。最も優先度が高い。-1なら未使用
    s32 lockCameraParamId;
    
    /// 常駐特殊効果16
    s32 spEffectID16;
    
    /// 常駐特殊効果17
    s32 spEffectID17;
    
    /// 常駐特殊効果18
    s32 spEffectID18;
    
    /// 常駐特殊効果19
    s32 spEffectID19;
    
    /// 常駐特殊効果20
    s32 spEffectID20;
    
    /// 常駐特殊効果21
    s32 spEffectID21;
    
    /// 常駐特殊効果22
    s32 spEffectID22;
    
    /// 常駐特殊効果23
    s32 spEffectID23;
    
    /// 常駐特殊効果24
    s32 spEffectID24;
    
    /// 常駐特殊効果25
    s32 spEffectID25;
    
    /// 常駐特殊効果26
    s32 spEffectID26;
    
    /// 常駐特殊効果27
    s32 spEffectID27;
    
    /// 常駐特殊効果28
    s32 spEffectID28;
    
    /// 常駐特殊効果29
    s32 spEffectID29;
    
    /// 常駐特殊効果30
    s32 spEffectID30;
    
    /// 常駐特殊効果31
    s32 spEffectID31;
    
    /// ロック不可領域の中心角[deg]
    /// 
    /// 敵の真下に円錐状のロックオン不可領域を作る。円錐の広さの角度。TAEから一時的に変更可能
    f32 disableLockOnAng;
    
    /// クロスOffLODレベル
    /// 
    /// クロスの処理を切るLODレベルを設定する
    s8 clothOffLodLevel;
    
    /// マップBGMの再生に関わるか
    /// 
    /// ×を入力すると、マップBGM再生に関係なくなります。ボス、イベント敵、ダミー敵などに×を設定します。（内部的には、常にBGM状態が通常状態になります）
    u8 isAffectedPlayingBgm;
    
    /// HPエスト瓶／MPエスト瓶回復数パラメータID
    /// 
    /// キャラクター死亡時に値と同じ エスト使用回数回復パラメータ.xlsm　のデータIDを取得してエスト瓶を回復させる。 -1なら未使用
    s16 estusFlaskRecoveryParamId;
    
    /// ロール名テキストID
    /// 
    /// 召喚時のロール名を指定する。-1:対象霊体のデフォルトロール名を使用。0:表示なし。1以上:テキストＩＤとして利用。
    s32 roleNameId;
    
    /// HP&MPエスト瓶回復 抽選確率
    /// 
    /// 敵を倒した際のHP/MPエストの回復確率。10000 を分母とし、分子をNPCパラから取得する。
    u16 estusFlaskLotPoint;
    
    /// HPエスト瓶回復 抽選確率
    /// 
    /// 敵を倒した際のMPエストの回復確率。10000 を分母とし、分子をNPCパラから取得する。
    u16 hpEstusFlaskLotPoint;
    
    /// MPエスト瓶回復 抽選確率
    /// 
    /// 敵を倒した際のMPエストの回復確率。10000 を分母とし、分子をNPCパラから取得する。
    u16 mpEstusFlaskLotPoint;
    
    /// HP&MPエスト瓶回復 落選時 加算抽選確率
    /// 
    /// HP/MPエスト回復抽選に外れた際の次回確率上昇値。分子の加算値。
    u16 estusFlaskRecovery_failedLotPointAdd;
    
    /// HPエスト瓶回復 落選時 加算抽選確率
    /// 
    /// HPエスト回復抽選に外れた際の次回確率上昇値。分子の加算値。
    u16 hpEstusFlaskRecovery_failedLotPointAdd;
    
    /// MPエスト瓶回復 落選時 加算抽選確率
    /// 
    /// MPエスト回復抽選に外れた際の次回確率上昇値。分子の加算値。
    u16 mpEstusFlaskRecovery_failedLotPointAdd;
    
    /// ファントムシェーダを使用して徘徊ゴーストになるか
    /// 
    /// ゲスト側でだけ指定されたIDのファントムシェーダIDを指定して幻影化
    s32 WanderGhostPhantomId;
    
    /// フットデカール識別子2
    /// 
    /// フットエフェクト発生時に貼られるデカール。床材質も考慮される
    s16 footEffectDecalBaseId2;
    
    /// フットデカール識別子3
    /// 
    /// フットエフェクト発生時に貼られるデカール。床材質も考慮される
    s16 footEffectDecalBaseId3;
    
    /// 最大借金スタミナ
    /// 
    /// スタミナがマイナスになるときの下限を指定する
    s16 maxDebtStamina;
    
    /// 落下ダメージなし距離
    /// 
    /// この値より小さい段差からの落下なら落下ダメージを受けない。
    u16 fallNoDamageDist;
    
    /// 斬撃スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が斬撃のときにスタミナダメージに乗算する
    f32 slashStaminaDmgRate;
    
    /// 軽打スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が軽打のときにスタミナダメージに乗算する
    f32 lightHitStaminaDmgRate;
    
    /// 刺突スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が刺突のときにスタミナダメージに乗算する
    f32 thrustStaminaDmgRate;
    
    /// 無属性スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が無属性のときにスタミナダメージに乗算する
    f32 neutralStaminaDmgRate;
    
    /// 忍殺スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が忍殺のときにスタミナダメージに乗算する
    f32 ninsatuStaminaDmgRate;
    
    /// 重打スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が重打のときにスタミナダメージに乗算する
    f32 heavyHitStaminaDmgRate;
    
    /// 対地スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が対地のときにスタミナダメージに乗算する
    f32 antiGroundStaminaDmgRate;
    
    /// 対空スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が対空のときにスタミナダメージに乗算する
    f32 antiAirStaminaDmgRate;
    
    /// 軽射スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が軽射のときにスタミナダメージに乗算する
    f32 lightShootStaminaDmgRate;
    
    /// 無属性防御力[％]
    /// 
    /// 攻撃属性を見て、無属性のときは、防御力を減少させる.
    s16 def_neutral;
    
    /// 忍殺防御力[％]
    /// 
    /// 攻撃属性を見て、忍殺のときは、防御力を減少させる.
    s16 def_ninsatsu;
    
    /// 重打防御力[％]
    /// 
    /// 攻撃属性を見て、重打のときは、防御力を減少させる.
    s16 def_heavyHit;
    
    /// 対地防御力[％]
    /// 
    /// 攻撃属性を見て、対地のときは、防御力を減少させる.
    s16 def_antiGround;
    
    /// 対空防御力[％]
    /// 
    /// 攻撃属性を見て、対空のときは、防御力を減少させる.
    s16 def_antiAir;
    
    /// 軽射防御力[％]
    /// 
    /// 攻撃属性を見て、軽射のときは、防御力を減少させる.
    s16 def_lightShoot;
    
    /// 忍殺ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
    f32 ninsatsuDamageRate;
    
    /// 重打ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
    f32 heavyHitDamageRate;
    
    /// 対地ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
    f32 antiGroundDamageRate;
    
    /// 対空ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
    f32 antiAirDamageRate;
    
    /// 軽射ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
    f32 lightShootDamageRate;
    
    /// 無属性攻撃カット率[％]
    /// 
    /// 攻撃タイプを見て、無属性のダメージを何％カットするか？を指定
    s16 neutralGuardCutRate;
    
    /// 忍殺攻撃カット率[％]
    /// 
    /// 攻撃タイプを見て、忍殺のダメージを何％カットするか？を指定
    s16 ninsatsuGuardCutRate;
    
    /// 重打攻撃カット率[％]
    /// 
    /// 攻撃タイプを見て、重打のダメージを何％カットするか？を指定
    s16 heavyHitGuardCutRate;
    
    /// 対地攻撃攻撃カット率[％]
    /// 
    /// 攻撃タイプを見て、対地のダメージを何％カットするか？を指定
    s16 antiGroundGuardCutRate;
    
    /// 対空攻撃カット率[％]
    /// 
    /// 攻撃タイプを見て、対空のダメージを何％カットするか？を指定
    s16 antiAirGuardCutRate;
    
    /// 軽射攻撃カット率[％]
    /// 
    /// 攻撃タイプを見て、軽射のダメージを何％カットするか？を指定
    s16 lightShootGuardCutRate;
    
    /// スタミナ制御パラメータID
    /// 
    /// スタミナ制御パラメータのIDと紐づく
    u32 staminaControlParamId;
    
    /// リソースアイテム抽選パラメータID_1
    /// 
    /// リソースアイテム抽選パラメータのIDを指定する（-1：無効）。複数抽選する場合は、抽選パラのIDを連番にする。
    s32 resourceItemLotParamId;
    
    /// 完全追従LookAtの高さオフセット[m]
    /// 
    /// LookAt完全追従のターゲットにされたとき、この距離だけターゲット位置をオフセットする
    f32 lookAtHeightOffset;
    
    /// ダメージグループ1スタミナダメージ倍率
    /// 
    /// ダメージグループ1に対するスタミナダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 staminaDamageRate_DamageGroup1;
    
    /// ダメージグループ2スタミナダメージ倍率
    /// 
    /// ダメージグループ2に対するスタミナダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 staminaDamageRate_DamageGroup2;
    
    /// ダメージグループ3スタミナダメージ倍率
    /// 
    /// ダメージグループ3に対するスタミナダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 staminaDamageRate_DamageGroup3;
    
    /// ダメージグループ4スタミナダメージ倍率
    /// 
    /// ダメージグループ4に対するスタミナダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 staminaDamageRate_DamageGroup4;
    
    /// ダメージグループ5スタミナダメージ倍率
    /// 
    /// ダメージグループ5に対するスタミナダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 staminaDamageRate_DamageGroup5;
    
    /// ダメージグループ6スタミナダメージ倍率
    /// 
    /// ダメージグループ6に対するスタミナダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 staminaDamageRate_DamageGroup6;
    
    /// ダメージグループ7スタミナダメージ倍率
    /// 
    /// ダメージグループ7に対するスタミナダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 staminaDamageRate_DamageGroup7;
    
    /// ダメージグループ8スタミナダメージ倍率
    /// 
    /// ダメージグループ8に対するスタミナダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 staminaDamageRate_DamageGroup8;
    
    /// ダメージグループ「弱点」スタミナダメージ倍率
    /// 
    /// ダメージグループ「弱点」に対するスタミナダメージ処理に適応する倍率（ダメージグループはFD4ParamWeaverで設定される）
    f32 staminaDamageRate_DamageGroupWeak;
    
    /// キャラ物理ホーミングIDオフセット（被ロック時）
    /// 
    /// このキャラをロック、キャラ物理ホーミングする際に使用されるパラメータIDをこの値でオフセットする。キャラごとにホーミングする目標位置をずらしたいといったときに使用する。
    u32 chrPhysicsHomingIdOffset;
    
    /// アクティベート距離[m]
    /// 
    /// アクティベートされる（キャラが生成される）距離。0で無効化。
    u16 activateBorderDist;
    
    /// ディアクティベート距離遊び[m]
    /// 
    /// アクティベートされる距離からディアクティベートされる距離までの遊び。アクティベート距離が100で、こちらが10の場合は110mでディアクティベートされる
    u16 deactivateIntervalDist;
    
    /// リソースアイテム抽選パラメータID_2
    /// 
    /// リソースアイテム抽選パラメータのIDを指定する（-1：無効）。複数抽選する場合は、抽選パラのIDを連番にする。
    s32 resourceItemLotParamId2;
    
    /// 属性Aスタミナダメージ倍率
    /// 
    /// スタミナ物理属性が属性Aのときにスタミナダメージに乗算する
    f32 attriAStaminaDmgRate;
    
    /// 属性Bスタミナダメージ倍率
    /// 
    /// スタミナ物理属性が属性Bのときにスタミナダメージに乗算する
    f32 attriBStaminaDmgRate;
    
    /// 属性Cスタミナダメージ倍率
    /// 
    /// スタミナ物理属性が属性Cのときにスタミナダメージに乗算する
    f32 attriCStaminaDmgRate;
    
    /// 属性A防御力[％]
    /// 
    /// 攻撃属性を見て、属性A属性のときは、防御力を減少させる.
    s16 def_attriA;
    
    /// 属性B防御力[％]
    /// 
    /// 攻撃属性を見て、属性B属性のときは、防御力を減少させる.
    s16 def_attriB;
    
    /// 属性C防御力[％]
    /// 
    /// 攻撃属性を見て、属性C属性のときは、防御力を減少させる.
    s16 def_attriC;
    
    /// 属性A攻撃カット率[％]
    /// 
    /// 攻撃タイプを見て、属性Aのダメージを何％カットするか？を指定
    s16 attriAGuardCutRate;
    
    /// 属性B攻撃カット率[％]
    /// 
    /// 攻撃タイプを見て、属性Bのダメージを何％カットするか？を指定
    s16 attriBGuardCutRate;
    
    /// 属性C攻撃カット率[％]
    /// 
    /// 攻撃タイプを見て、属性Cのダメージを何％カットするか？を指定
    s16 attriCGuardCutRate;
    
    /// FootIK足首の制限角度_ロール
    /// 
    /// FootIK足首のロールの制限角度（-1：制限なし）
    f32 maxAnkleRollAngle;
    
    /// 属性Aダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
    f32 attriADamageCutRate;
    
    /// 属性Bダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
    f32 attriBDamageCutRate;
    
    /// 属性Cダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
    f32 attriCDamageCutRate;
    
    /// ダメージドロップソウル
    /// 
    /// ダメージドロップ時に、キャラクターが取得できるソウル量.
    u32 damageDropSoul;
    
    /// ダメージドロップアイテム抽選ID_1
    /// 
    /// ダメージドロップ時に使用するアイテム抽選パラメータ。-1なら抽選を行わない。
    s32 damageDropItemLotId_1;
    
    /// ダメージドロップアイテム抽選ID_2
    /// 
    /// ダメージドロップ時に使用するアイテム抽選パラメータ。-1なら抽選を行わない。
    s32 damageDropItemLotId_2;
    
    /// カメラディザフェード最小距離(m)
    /// 
    /// カメラディザフェード最小距離。「カメラディザフェード最小距離」、「カメラディザフェード最大距離」の両方に「0.0」を設定するとカメラディザフェードが無効になります。このパラメータは、「番号」の下4桁が「0000」のパラメータのみ有効です。
    f32 camDitherFadeMinDist;
    
    /// カメラディザフェード最大距離(m)
    /// 
    /// カメラディザフェード最大距離。「カメラディザフェード最小距離」、「カメラディザフェード最大距離」の両方に「0.0」を設定するとカメラディザフェードが無効になります。このパラメータは、「番号」の下4桁が「0000」のパラメータのみ有効です。
    f32 camDitherFadeMaxDist;
    
    /// 残機用アイテム抽選ID
    /// 
    /// 死亡時に取得する残機用アイテムの抽選IDを指定
    s32 lifeCountItemLotId;
    
    /// スキル経験値
    /// 
    /// 死亡時にキャラクターが取得できるスキル経験値
    u32 skillPoint;
    
    /// ハードモードドーピング用特殊効果ID
    /// 
    /// ハードモード中のみかかるドーピング用の特殊効果
    s32 HardModeSpEffectID;
    
    /// キャラSEIDオフセット
    /// 
    /// 再生するSEが「cX????????」でＸが1～8の場合、指定された数値分再生するSEのIDをオフセットします。犬とインスマス犬のようにモデルが異なるがアニメが同じ際に異なるSEを再生する機能です。
    s32 offsetSeID;
    
    /// 忍殺時リソースアイテム抽選パラメータID_1
    /// 
    /// 必要忍殺回数が減ったときに出現するリソースアイテム抽選パラメータのIDを指定する（-1：無効）。複数抽選する場合は、抽選パラのIDを連番にする。
    s32 ninsatsuResourceItemLotId_1;
    
    /// 忍殺時リソースアイテム抽選パラメータID_2
    /// 
    /// 必要忍殺回数が減ったときに出現するリソースアイテム抽選パラメータのIDを指定する（-1：無効）。複数抽選する場合は、抽選パラのIDを連番にする。
    s32 ninsatsuResourceItemLotId_2;
    
    /// 成長ドーピング用特殊効果ID
    /// 
    /// 成長ドーピング用の特殊効果ID。進行オフセットの対象になる。
    s32 growthDopingSpEffectID;
    
    /// パディング
    dummy8 pad3[32];
    
};

struct LOAD_BALANCER_PARAM_ST {
    static constexpr const char* TYPE_NAME = "LOAD_BALANCER_PARAM_ST";
    
    /// このFPSを下回ったら、ロードバランスレベルを1上げる
    f32 lowerFpsThreshold;
    
    /// このFPSを上回ったら、ロードバランスレベルを1下げる
    f32 upperFpsThreshold;
    
    /// このフレーム連続してしきい値を下回ったら、レベルアップ
    u32 lowerFpsContinousCount;
    
    /// このフレーム連続してしきい値を上回ったら、レベルダウン
    u32 upperFpsContinousCount;
    
    /// レベルダウン後のスリープフレームカウント
    u32 downAfterChangeSleep;
    
    /// レベルアップ後のスリープフレームカウント
    u32 upAfterChangeSleep;
    
    /// ライトシャフト
    /// 
    /// フィルタのライトシャフト
    u8 postProcessLightShaft;
    
    /// Bloom
    /// 
    /// ブルーム
    u8 postProcessBloom;
    
    /// Glow
    /// 
    /// グロー
    u8 postProcessGlow;
    
    /// AA
    /// 
    /// アンチエイリアス
    u8 postProcessAA;
    
    /// SSAO
    u8 postProcessSSAO;
    
    /// DOF
    u8 postProcessDOF;
    
    /// MotionBlur
    u8 postProcessMotionBlur;
    
    /// MotionBlurIteration
    /// 
    /// MotionBlurのイテレーション回数を下げる
    u8 postProcessMotionBlurIteration;
    
    /// Shadow ResolutionHalf
    /// 
    /// 影の解像度を半分に下げる
    u8 shadowResolutionHalf;
    
    /// Shadow Blur
    /// 
    /// 影のブラーを切る
    u8 shadowBlur;
    
    /// SFXのエミット回り
    /// 
    /// エミット間隔、エミット数、LOD距離をグラフィックスコンフィグの半分に
    u8 sfxParticleHalf;
    
    /// SFXの反射
    /// 
    /// 反射シーンSFXをオミット
    u8 sfxReflection;
    
    /// 水面インタラクション
    /// 
    /// 水面インタラクトSFXをオミット
    u8 sfxWaterInteraction;
    
    /// SFXのグロー
    /// 
    /// SFXでかけてるGlowをオミット
    u8 sfxGlow;
    
    /// SFXの歪み
    /// 
    /// SFXでかけてる歪みのオミット
    u8 sfxDistortion;
    
    /// ソフトスプライト
    /// 
    /// SFXでかけてるソフトスプライトのオミット
    u8 sftSoftSprite;
    
    /// ライトシャフト
    /// 
    /// SFXのライトシャフトのオミット
    u8 sfxLightShaft;
    
    /// 動的に縮小バッファに登録されるエフェクトの距離判定にスケール
    /// 
    /// SFXの距離で動的に縮小バッファに登録されるエフェクトの距離判定にスケール
    u8 sfxScaleRenderDistanceScale;
    
    /// 予備
    dummy8 reserve[38];
    
};

struct STAMINA_CONTROL_PARAM_ST {
    static constexpr const char* TYPE_NAME = "STAMINA_CONTROL_PARAM_ST";
    
    /// 【タイプ000】：スタミナ回復率[％]
    /// 
    /// スタミナ回復速度×スタミナ回復率×0.01とスタミナ回復率を変化させる
    u32 staminaRecoverRatio_forType000;
    
    /// 【タイプ000】：スタミナ上限[％]
    /// 
    /// スタミナの上限割合を指定する
    u16 staminaMaxRatio_forType000;
    
    /// 【タイプ000】：スタミナ下限[％]
    /// 
    /// スタミナの下限割合を指定する。借金（負の値）の指定は不可。
    u16 staminaMinRatio_forType000;
    
    /// 【タイプ001】：スタミナ回復率[％]
    /// 
    /// スタミナ回復速度×スタミナ回復率×0.01とスタミナ回復率を変化させる
    u32 staminaRecoverRatio_forType001;
    
    /// 【タイプ001】：スタミナ上限[％]
    /// 
    /// スタミナの上限割合を指定する
    u16 staminaMaxRatio_forType001;
    
    /// 【タイプ001】：スタミナ下限[％]
    /// 
    /// スタミナの下限割合を指定する。借金（負の値）の指定は不可。
    u16 staminaMinRatio_forType001;
    
    /// 【タイプ002】：スタミナ回復率[％]
    /// 
    /// スタミナ回復速度×スタミナ回復率×0.01とスタミナ回復率を変化させる
    u32 staminaRecoverRatio_forType002;
    
    /// 【タイプ002】：スタミナ上限[％]
    /// 
    /// スタミナの上限割合を指定する
    u16 staminaMaxRatio_forType002;
    
    /// 【タイプ002】：スタミナ下限[％]
    /// 
    /// スタミナの下限割合を指定する。借金（負の値）の指定は不可。
    u16 staminaMinRatio_forType002;
    
    /// 【タイプ003】：スタミナ回復率[％]
    /// 
    /// スタミナ回復速度×スタミナ回復率×0.01とスタミナ回復率を変化させる
    u32 staminaRecoverRatio_forType003;
    
    /// 【タイプ003】：スタミナ上限[％]
    /// 
    /// スタミナの上限割合を指定する
    u16 staminaMaxRatio_forType003;
    
    /// 【タイプ003】：スタミナ下限[％]
    /// 
    /// スタミナの下限割合を指定する。借金（負の値）の指定は不可。
    u16 staminaMinRatio_forType003;
    
    /// 【タイプ004】：スタミナ回復率[％]
    /// 
    /// スタミナ回復速度×スタミナ回復率×0.01とスタミナ回復率を変化させる
    u32 staminaRecoverRatio_forType004;
    
    /// 【タイプ004】：スタミナ上限[％]
    /// 
    /// スタミナの上限割合を指定する
    u16 staminaMaxRatio_forType004;
    
    /// 【タイプ004】：スタミナ下限[％]
    /// 
    /// スタミナの下限割合を指定する。借金（負の値）の指定は不可。
    u16 staminaMinRatio_forType004;
    
    /// 【タイプ005】：スタミナ回復率[％]
    /// 
    /// スタミナ回復速度×スタミナ回復率×0.01とスタミナ回復率を変化させる
    u32 staminaRecoverRatio_forType005;
    
    /// 【タイプ005】：スタミナ上限[％]
    /// 
    /// スタミナの上限割合を指定する
    u16 staminaMaxRatio_forType005;
    
    /// 【タイプ005】：スタミナ下限[％]
    /// 
    /// スタミナの下限割合を指定する。借金（負の値）の指定は不可。
    u16 staminaMinRatio_forType005;
    
    /// 【タイプ006】：スタミナ回復率[％]
    /// 
    /// スタミナ回復速度×スタミナ回復率×0.01とスタミナ回復率を変化させる
    u32 staminaRecoverRatio_forType006;
    
    /// 【タイプ006】：スタミナ上限[％]
    /// 
    /// スタミナの上限割合を指定する
    u16 staminaMaxRatio_forType006;
    
    /// 【タイプ006】：スタミナ下限[％]
    /// 
    /// スタミナの下限割合を指定する。借金（負の値）の指定は不可。
    u16 staminaMinRatio_forType006;
    
    /// 【タイプ007】：スタミナ回復率[％]
    /// 
    /// スタミナ回復速度×スタミナ回復率×0.01とスタミナ回復率を変化させる
    u32 staminaRecoverRatio_forType007;
    
    /// 【タイプ007】：スタミナ上限[％]
    /// 
    /// スタミナの上限割合を指定する
    u16 staminaMaxRatio_forType007;
    
    /// 【タイプ007】：スタミナ下限[％]
    /// 
    /// スタミナの下限割合を指定する。借金（負の値）の指定は不可。
    u16 staminaMinRatio_forType007;
    
    /// 【タイプ008】：スタミナ回復率[％]
    /// 
    /// スタミナ回復速度×スタミナ回復率×0.01とスタミナ回復率を変化させる
    u32 staminaRecoverRatio_forType008;
    
    /// 【タイプ008】：スタミナ上限[％]
    /// 
    /// スタミナの上限割合を指定する
    u16 staminaMaxRatio_forType008;
    
    /// 【タイプ008】：スタミナ下限[％]
    /// 
    /// スタミナの下限割合を指定する。借金（負の値）の指定は不可。
    u16 staminaMinRatio_forType008;
    
    /// 【タイプ009】：スタミナ回復率[％]
    /// 
    /// スタミナ回復速度×スタミナ回復率×0.01とスタミナ回復率を変化させる
    u32 staminaRecoverRatio_forType009;
    
    /// 【タイプ009】：スタミナ上限[％]
    /// 
    /// スタミナの上限割合を指定する
    u16 staminaMaxRatio_forType009;
    
    /// 【タイプ009】：スタミナ下限[％]
    /// 
    /// スタミナの下限割合を指定する。借金（負の値）の指定は不可。
    u16 staminaMinRatio_forType009;
    
    /// 【タイプ010】：スタミナ回復率[％]
    /// 
    /// スタミナ回復速度×スタミナ回復率×0.01とスタミナ回復率を変化させる
    u32 staminaRecoverRatio_forType010;
    
    /// 【タイプ010】：スタミナ上限[％]
    /// 
    /// スタミナの上限割合を指定する
    u16 staminaMaxRatio_forType010;
    
    /// 【タイプ010】：スタミナ下限[％]
    /// 
    /// スタミナの下限割合を指定する。借金（負の値）の指定は不可。
    u16 staminaMinRatio_forType010;
    
    /// 【タイプ011】：スタミナ回復率[％]
    /// 
    /// スタミナ回復速度×スタミナ回復率×0.01とスタミナ回復率を変化させる
    u32 staminaRecoverRatio_forType011;
    
    /// 【タイプ011】：スタミナ上限[％]
    /// 
    /// スタミナの上限割合を指定する
    u16 staminaMaxRatio_forType011;
    
    /// 【タイプ011】：スタミナ下限[％]
    /// 
    /// スタミナの下限割合を指定する。借金（負の値）の指定は不可。
    u16 staminaMinRatio_forType011;
    
    /// 【タイプ012】：スタミナ回復率[％]
    /// 
    /// スタミナ回復速度×スタミナ回復率×0.01とスタミナ回復率を変化させる
    u32 staminaRecoverRatio_forType012;
    
    /// 【タイプ012】：スタミナ上限[％]
    /// 
    /// スタミナの上限割合を指定する
    u16 staminaMaxRatio_forType012;
    
    /// 【タイプ012】：スタミナ下限[％]
    /// 
    /// スタミナの下限割合を指定する。借金（負の値）の指定は不可。
    u16 staminaMinRatio_forType012;
    
    /// 【タイプ013】：スタミナ回復率[％]
    /// 
    /// スタミナ回復速度×スタミナ回復率×0.01とスタミナ回復率を変化させる
    u32 staminaRecoverRatio_forType013;
    
    /// 【タイプ013】：スタミナ上限[％]
    /// 
    /// スタミナの上限割合を指定する
    u16 staminaMaxRatio_forType013;
    
    /// 【タイプ013】：スタミナ下限[％]
    /// 
    /// スタミナの下限割合を指定する。借金（負の値）の指定は不可。
    u16 staminaMinRatio_forType013;
    
    /// 【タイプ014】：スタミナ回復率[％]
    /// 
    /// スタミナ回復速度×スタミナ回復率×0.01とスタミナ回復率を変化させる
    u32 staminaRecoverRatio_forType014;
    
    /// 【タイプ014】：スタミナ上限[％]
    /// 
    /// スタミナの上限割合を指定する
    u16 staminaMaxRatio_forType014;
    
    /// 【タイプ014】：スタミナ下限[％]
    /// 
    /// スタミナの下限割合を指定する。借金（負の値）の指定は不可。
    u16 staminaMinRatio_forType014;
    
    /// 【タイプ015】：スタミナ回復率[％]
    /// 
    /// スタミナ回復速度×スタミナ回復率×0.01とスタミナ回復率を変化させる
    u32 staminaRecoverRatio_forType015;
    
    /// 【タイプ015】：スタミナ上限[％]
    /// 
    /// スタミナの上限割合を指定する
    u16 staminaMaxRatio_forType015;
    
    /// 【タイプ015】：スタミナ下限[％]
    /// 
    /// スタミナの下限割合を指定する。借金（負の値）の指定は不可。
    u16 staminaMinRatio_forType015;
    
};

struct ACTION_GUIDE_PARAM_ST {
    static constexpr const char* TYPE_NAME = "ACTION_GUIDE_PARAM_ST";
    
    /// テキストID
    /// 
    /// アクションガイドとして表示するテキストのID
    s32 textId;
    
    /// 表示順優先度
    /// 
    /// 複数のアクションガイドを同時に表示したときの優先度(0～99、0に近い程優先)
    s8 priority;
    
    /// padding
    dummy8 pad1[11];
    
};

struct GEM_DROP_MODIFY_PARAM_ST {
    static constexpr const char* TYPE_NAME = "GEM_DROP_MODIFY_PARAM_ST";
    
    /// スロットタイプＡ出現率
    f32 slotTypeRateA;
    
    /// スロットタイプＢ出現率
    f32 slotTypeRateB;
    
    /// スロットタイプＣ出現率
    f32 slotTypeRateC;
    
    /// スロットタイプＤ出現率
    f32 slotTypeRateD;
    
    /// スロットタイプＥ出現率
    f32 slotTypeRateE;
    
    /// スロットタイプＦ出現率
    f32 slotTypeRateF;
    
    /// ０：方向性出現率
    f32 directionalIdRate_0;
    
    /// １：方向性出現率
    f32 directionalIdRate_1;
    
    /// ２：方向性出現率
    f32 directionalIdRate_2;
    
    /// ３：方向性出現率
    f32 directionalIdRate_3;
    
    /// ４：方向性出現率
    f32 directionalIdRate_4;
    
    /// ５：方向性出現率
    f32 directionalIdRate_5;
    
    /// ６：方向性出現率
    f32 directionalIdRate_6;
    
    /// ７：方向性出現率
    f32 directionalIdRate_7;
    
    /// ０：相性カテゴリID(-1:無視)
    s32 affinityCateId_0;
    
    /// ０：相性補正倍率
    f32 affinityModifyRate_0;
    
    /// １：相性カテゴリID(-1:無視)
    s32 affinityCateId_1;
    
    /// １：相性補正倍率
    f32 affinityModifyRate_1;
    
    /// ２：相性カテゴリID(-1:無視)
    s32 affinityCateId_2;
    
    /// ２：相性補正倍率
    f32 affinityModifyRate_2;
    
    /// ３：相性カテゴリID(-1:無視)
    s32 affinityCateId_3;
    
    /// ３：相性補正倍率
    f32 affinityModifyRate_3;
    
    /// ０：出現率
    f32 manifestRate_0;
    
    /// １：出現率
    f32 manifestRate_1;
    
    /// ２：出現率
    f32 manifestRate_2;
    
    /// ３：出現率
    f32 manifestRate_3;
    
    /// ４：出現率
    f32 manifestRate_4;
    
    /// ５：出現率
    f32 manifestRate_5;
    
    /// ０：マイナス効果化率
    f32 negativizeRate_0;
    
    /// 正規分布平均値
    s32 normalDistributionAve;
    
    /// 正規分布標準偏差
    s32 normalDistributionSigma;
    
};

struct CS_EFFECT_QUALITY_DETAIL {
    static constexpr const char* TYPE_NAME = "CS_EFFECT_QUALITY_DETAIL";
    
    /// ソフトパーティクル有効
    u8 softParticleEnabled;
    
    /// グロー有効
    u8 glowEnabled;
    
    /// 歪み有効
    u8 distortionEnable;
    
    /// バイラテラルアップスケールを有効
    /// 
    /// バイラテラルアップスケール有効
    u8 cs_upScaleEnabledType;
    
    /// 一回のエミット数
    f32 fNumOnceEmitsScale;
    
    /// エミット間隔
    f32 fEmitSpanScale;
    
    /// 1段階目のLOD距離スケール
    f32 fLodDistance1Scale;
    
    /// 2段階目のLOD距離スケール
    f32 fLodDistance2Scale;
    
    /// 3段階目のLOD距離スケール
    f32 fLodDistance3Scale;
    
    /// 4段階目のLOD距離スケール
    f32 fLodDistance4Scale;
    
    /// 縮小バッファへ登録される距離への倍率
    f32 fScaleRenderDistanceScale;
    
    /// ダミー
    dummy8 dmy[4];
    
};

struct CHARACTER_INIT_PARAM {
    static constexpr const char* TYPE_NAME = "CHARACTER_INIT_PARAM";
    
    /// ＭＰ回復速度基本値[s]
    /// 
    /// ＭＰが、1ポイント回復するまでの時間（小数点第一位）
    f32 baseRec_mp;
    
    /// スタミナ回復速度基本値[s]
    /// 
    /// スタミナが、1ポイント回復するまでの時間（小数点第一位）
    f32 baseRec_sp;
    
    /// 落下ダメージ軽減補正[%]
    /// 
    /// 他のキャラクターに上からのしかかれたときに、クッションとなりえるダメージ軽減量（％）（小数点第一位）
    f32 red_Falldam;
    
    /// 初期ソウル
    /// 
    /// 初期に所持しているソウル量
    s32 soul;
    
    /// 右手武器
    /// 
    /// 装備品パラメータの武器ＩＤ(右手)
    s32 equip_Wep_Right;
    
    /// 右手予備武器
    /// 
    /// 装備品パラメータの武器ＩＤ(右手予備)
    s32 equip_Subwep_Right;
    
    /// 左手武器
    /// 
    /// 装備品パラメータの武器ＩＤ(左手)
    s32 equip_Wep_Left;
    
    /// 左手予備武器
    /// 
    /// 装備品パラメータの武器ＩＤ(左手予備)
    s32 equip_Subwep_Left;
    
    /// 頭防具
    /// 
    /// 装備品パラメータの防具ＩＤ(頭防具)
    s32 equip_Helm;
    
    /// 胴体防具
    /// 
    /// 装備品パラメータの防具ＩＤ(胴体防具)
    s32 equip_Armer;
    
    /// 腕防具
    /// 
    /// 装備品パラメータの防具ＩＤ(腕防具)
    s32 equip_Gaunt;
    
    /// 脚防具
    /// 
    /// 装備品パラメータの防具ＩＤ(脚防具)
    s32 equip_Leg;
    
    /// 矢
    /// 
    /// 装備品パラメータの武器ＩＤ(矢)
    s32 equip_Arrow;
    
    /// ボルト
    /// 
    /// 装備品パラメータの武器ＩＤ(ボルト)
    s32 equip_Bolt;
    
    /// 予備矢
    /// 
    /// 装備品パラメータの武器ＩＤ(矢予備)
    s32 equip_SubArrow;
    
    /// 予備ボルト
    /// 
    /// 装備品パラメータの武器ＩＤ(ボルト予備)
    s32 equip_SubBolt;
    
    /// 装飾品1
    /// 
    /// 装備品パラメータの装飾品ＩＤ01
    s32 equip_Accessory01;
    
    /// 装飾品2
    /// 
    /// 装備品パラメータの装飾品ＩＤ02
    s32 equip_Accessory02;
    
    /// 装飾品3
    /// 
    /// 装備品パラメータの装飾品ＩＤ03
    s32 equip_Accessory03;
    
    /// 装飾品4
    /// 
    /// 装備品パラメータの装飾品ＩＤ04
    s32 equip_Accessory04;
    
    /// 装飾品5（誓約アミュレット）
    /// 
    /// 装備品パラメータの装飾品ＩＤ05（誓約アミュレット）
    s32 equip_Accessory05;
    
    /// スキル1
    /// 
    /// 初期装備のスキルＩD01
    s32 equip_Skill_01;
    
    /// スキル2
    /// 
    /// 初期装備のスキルＩD02
    s32 equip_Skill_02;
    
    /// スキル3
    /// 
    /// 初期装備のスキルＩD03
    s32 equip_Skill_03;
    
    /// 魔法・奇跡1
    /// 
    /// 初期配置の魔法・奇跡ID01
    s32 equip_Spell_01;
    
    /// 魔法・奇跡2
    /// 
    /// 初期配置の魔法・奇跡ID02
    s32 equip_Spell_02;
    
    /// 魔法・奇跡3
    /// 
    /// 初期配置の魔法・奇跡ID03
    s32 equip_Spell_03;
    
    /// 魔法・奇跡4
    /// 
    /// 初期配置の魔法・奇跡ID04
    s32 equip_Spell_04;
    
    /// 魔法・奇跡5
    /// 
    /// 初期配置の魔法・奇跡ID05
    s32 equip_Spell_05;
    
    /// 魔法・奇跡6
    /// 
    /// 初期配置の魔法・奇跡ID06
    s32 equip_Spell_06;
    
    /// 魔法・奇跡7
    /// 
    /// 初期配置の魔法・奇跡ID07
    s32 equip_Spell_07;
    
    /// アイテム01
    /// 
    /// 初期所持のアイテムID01
    s32 item_01;
    
    /// アイテム02
    /// 
    /// 初期所持のアイテムID02
    s32 item_02;
    
    /// アイテム03
    /// 
    /// 初期所持のアイテムID03
    s32 item_03;
    
    /// アイテム04
    /// 
    /// 初期所持のアイテムID04
    s32 item_04;
    
    /// アイテム05
    /// 
    /// 初期所持のアイテムID05
    s32 item_05;
    
    /// アイテム06
    /// 
    /// 初期所持のアイテムID06
    s32 item_06;
    
    /// アイテム07
    /// 
    /// 初期所持のアイテムID07
    s32 item_07;
    
    /// アイテム08
    /// 
    /// 初期所持のアイテムID08
    s32 item_08;
    
    /// アイテム09
    /// 
    /// 初期所持のアイテムID09
    s32 item_09;
    
    /// アイテム10
    /// 
    /// 初期所持のアイテムID10
    s32 item_10;
    
    /// フェイスジェンパラメータID
    /// 
    /// NPCプレイヤーで使用するフェイスジェンパラメータID。通常プレイヤーでは使用しません。
    s32 npcPlayerFaceGenId;
    
    /// NPCプレイヤーの思考ID
    /// 
    /// NPCプレイヤーで使用するNPC思考パラメータID。通常プレイヤーでは使用しません。
    s32 npcPlayerThinkId;
    
    /// ＨＰ基本値
    /// 
    /// ＨＰの基本値（実際は、計算式で補正される）
    u16 baseHp;
    
    /// ＭＰ基本値
    /// 
    /// ＭＰの基本値（実際は、計算式で補正される）
    u16 baseMp;
    
    /// スタミナ基本値
    /// 
    /// スタミナの基本値（実際は、計算式で補正される）
    u16 baseSp;
    
    /// 矢の所持数
    /// 
    /// 矢の初期所持数
    u16 arrowNum;
    
    /// ボルトの所持数
    /// 
    /// ボルトの初期所持数
    u16 boltNum;
    
    /// 予備矢の所持数
    /// 
    /// 矢の初期所持数
    u16 subArrowNum;
    
    /// 予備ボルトの所持数
    /// 
    /// ボルトの初期所持数
    u16 subBoltNum;
    
    /// 傾向係数　S-B軸
    /// 
    /// 基本QWC値(Sword-Bow)
    s16 QWC_sb;
    
    /// 傾向係数　M-W軸
    /// 
    /// 基本QWC値(Mace-Wand)
    s16 QWC_mw;
    
    /// 傾向係数　C-D軸
    /// 
    /// 基本QWC値(理解-拡散)
    s16 QWC_cd;
    
    /// ソウルLv
    /// 
    /// 初期Lv
    s16 soulLv;
    
    /// 体力の基本値
    u8 baseVit;
    
    /// 精神の基本値
    u8 baseWil;
    
    /// 頑強の基本値
    u8 baseEnd;
    
    /// 筋力の基本値
    u8 baseStr;
    
    /// 俊敏の基本値
    u8 baseDex;
    
    /// 魔力の基本値
    u8 baseMag;
    
    /// 信仰の基本値
    u8 baseFai;
    
    /// 運の基本値
    u8 baseLuc;
    
    /// 人間性の基本値
    u8 baseHeroPoint;
    
    /// 耐久力の基本値
    u8 baseDurability;
    
    /// アイテム01の所持数
    /// 
    /// 初期所持のアイテム個数01
    u8 itemNum_01;
    
    /// アイテム02の所持数
    /// 
    /// 初期所持のアイテム個数02
    u8 itemNum_02;
    
    /// アイテム03の所持数
    /// 
    /// 初期所持のアイテム個数03
    u8 itemNum_03;
    
    /// アイテム個数04
    /// 
    /// 初期所持のアイテム個数04
    u8 itemNum_04;
    
    /// アイテム個数05
    /// 
    /// 初期所持のアイテム個数05
    u8 itemNum_05;
    
    /// アイテム個数06
    /// 
    /// 初期所持のアイテム個数06
    u8 itemNum_06;
    
    /// アイテム個数07
    /// 
    /// 初期所持のアイテム個数07
    u8 itemNum_07;
    
    /// アイテム個数08
    /// 
    /// 初期所持のアイテム個数08
    u8 itemNum_08;
    
    /// アイテム個数09
    /// 
    /// 初期所持のアイテム個数09
    u8 itemNum_09;
    
    /// アイテム個数10
    /// 
    /// 初期所持のアイテム個数10
    u8 itemNum_10;
    
    /// 頭部
    /// 
    /// 体型変化用スケール
    s8 bodyScaleHead;
    
    /// 胸部
    /// 
    /// 体型変化用スケール
    s8 bodyScaleBreast;
    
    /// 腹部
    /// 
    /// 体型変化用スケール
    s8 bodyScaleAbdomen;
    
    /// 右腕部
    /// 
    /// 体型変化用スケール
    s8 bodyScaleRArm;
    
    /// 右脚部
    /// 
    /// 体型変化用スケール
    s8 bodyScaleRLeg;
    
    /// ジェスチャーID0
    /// 
    /// ジェスチャー0番目(EzStateのジェスチャー0を再生したいなら0)
    s8 gestureId0;
    
    /// ジェスチャーID1
    /// 
    /// ジェスチャー1番目(EzStateのジェスチャー0を再生したいなら0)
    s8 gestureId1;
    
    /// ジェスチャーID2
    /// 
    /// ジェスチャー2番目(EzStateのジェスチャー0を再生したいなら0)
    s8 gestureId2;
    
    /// ジェスチャーID3
    /// 
    /// ジェスチャー3番目(EzStateのジェスチャー0を再生したいなら0)
    s8 gestureId3;
    
    /// ジェスチャーID4
    /// 
    /// ジェスチャー4番目(EzStateのジェスチャー0を再生したいなら0)
    s8 gestureId4;
    
    /// ジェスチャーID5
    /// 
    /// ジェスチャー5番目(EzStateのジェスチャー0を再生したいなら0)
    s8 gestureId5;
    
    /// ジェスチャーID6
    /// 
    /// ジェスチャー6番目(EzStateのジェスチャー0を再生したいなら0)
    s8 gestureId6;
    
    /// NPCプレイヤーのNPCタイプ
    /// 
    /// NPCプレイヤーで使用するNPCタイプ。通常プレイヤーでは使用しません。
    u8 npcPlayerType;
    
    /// NPCプレイヤーの描画タイプ
    /// 
    /// NPCプレイヤーで使用する描画タイプ。通常プレイヤーでは使用しません。
    u8 npcPlayerDrawType;
    
    /// NPCプレイヤーの性別
    /// 
    /// NPCプレイヤーで使用する性別です。通常プレイヤーには反映しません。
    u8 npcPlayerSex;
    
    /// 誓約タイプ(なし：0)
    u8 vowType : 4;
    
    /// pad
    dummy8 pad1 : 4;
    
    /// 左腕部
    /// 
    /// 体型変化用スケール
    s8 bodyScaleLArm;
    
    /// 左脚部
    /// 
    /// 体型変化用スケール
    s8 bodyScaleLLeg;
    
    /// 右手武器生成
    /// 
    /// 装備品パラメータの武器生成ＩＤ(右手)
    s32 equip_Wep_Right_GenId;
    
    /// 右手予備武器生成
    /// 
    /// 装備品パラメータの武器生成ＩＤ(右手予備)
    s32 equip_Subwep_Right_GenId;
    
    /// 左手武器生成
    /// 
    /// 装備品パラメータの武器生成ＩＤ(左手)
    s32 equip_Wep_Left_GenId;
    
    /// 左手予備武器生成
    /// 
    /// 装備品パラメータの武器生成ＩＤ(左手予備)
    s32 equip_Subwep_Left_GenId;
    
    /// 頭防具生成
    /// 
    /// 装備品パラメータの防具生成ＩＤ(頭防具)
    s32 equip_Helm_GenId;
    
    /// 胴体防具生成
    /// 
    /// 装備品パラメータの防具生成ＩＤ(胴体防具)
    s32 equip_Armer_GenId;
    
    /// 腕防具生成
    /// 
    /// 装備品パラメータの防具生成ＩＤ(腕防具)
    s32 equip_Gaunt_GenId;
    
    /// 脚防具生成
    /// 
    /// 装備品パラメータの防具生成ＩＤ(脚防具)
    s32 equip_Leg_GenId;
    
    /// 右手武器スロット3
    /// 
    /// 装備品パラメータの武器ＩＤ(右手スロット３)
    s32 equip_Subwep_Right3;
    
    /// 左手武器スロット3
    /// 
    /// 装備品パラメータの武器ＩＤ(左手スロット３)
    s32 equip_Subwep_Left3;
    
    /// 儀式剣ID
    /// 
    /// 装備する儀式剣
    s32 cultSwordId;
    
    /// 第二アイテム01
    /// 
    /// 第二ショートカット初期所持のアイテムID01
    s32 secondaryItem_01;
    
    /// 第二アイテム02
    /// 
    /// 第二ショートカット初期所持のアイテムID02
    s32 secondaryItem_02;
    
    /// 第二アイテム03
    /// 
    /// 第二ショートカット初期所持のアイテムID03
    s32 secondaryItem_03;
    
    /// 第二アイテム04
    /// 
    /// 第二ショートカット初期所持のアイテムID04
    s32 secondaryItem_04;
    
    /// 第二アイテム05
    /// 
    /// 第二ショートカット初期所持のアイテムID05
    s32 secondaryItem_05;
    
    /// 第二アイテム06
    /// 
    /// 第二ショートカット初期所持のアイテムID06
    s32 secondaryItem_06;
    
    /// 第二アイテム01の所持数
    /// 
    /// 第二ショートカット初期所持のアイテム個数01
    u8 secondaryItemNum_01;
    
    /// 第二アイテム02の所持数
    /// 
    /// 第二ショートカット初期所持のアイテム個数02
    u8 secondaryItemNum_02;
    
    /// 第二アイテム03の所持数
    /// 
    /// 第二ショートカット初期所持のアイテム個数03
    u8 secondaryItemNum_03;
    
    /// 第二アイテム04の所持数
    /// 
    /// 第二ショートカット初期所持のアイテム個数04
    u8 secondaryItemNum_04;
    
    /// 第二アイテム05の所持数
    /// 
    /// 第二ショートカット初期所持のアイテム個数05
    u8 secondaryItemNum_05;
    
    /// 第二アイテム06の所持数
    /// 
    /// 第二ショートカット初期所持のアイテム個数06
    u8 secondaryItemNum_06;
    
    /// HPエスト瓶 所持限界数
    s8 HpEstMax;
    
    /// MPエスト瓶 所持限界数
    s8 MpEstMax;
    
    /// インベントリアイテム01
    /// 
    /// 最初から装備せず所持しているアイテムのID01
    s32 inventoryItem_01;
    
    /// インベントリアイテム02
    /// 
    /// 最初から装備せず所持しているアイテムのID02
    s32 inventoryItem_02;
    
    /// インベントリアイテム03
    /// 
    /// 最初から装備せず所持しているアイテムのID03
    s32 inventoryItem_03;
    
    /// インベントリアイテム04
    /// 
    /// 最初から装備せず所持しているアイテムのID04
    s32 inventoryItem_04;
    
    /// インベントリアイテム05
    /// 
    /// 最初から装備せず所持しているアイテムのID05
    s32 inventoryItem_05;
    
    /// インベントリアイテム06
    /// 
    /// 最初から装備せず所持しているアイテムのID06
    s32 inventoryItem_06;
    
    /// インベントリアイテム07
    /// 
    /// 最初から装備せず所持しているアイテムのID07
    s32 inventoryItem_07;
    
    /// インベントリアイテム08
    /// 
    /// 最初から装備せず所持しているアイテムのID08
    s32 inventoryItem_08;
    
    /// インベントリアイテム09
    /// 
    /// 最初から装備せず所持しているアイテムのID09
    s32 inventoryItem_09;
    
    /// インベントリアイテム10
    /// 
    /// 最初から装備せず所持しているアイテムのID10
    s32 inventoryItem_10;
    
    /// インベントリアイテム01の所持数
    /// 
    /// 最初から装備せず所持しているアイテムの所持数01
    u8 inventoryItemNum_01;
    
    /// インベントリアイテム02の所持数
    /// 
    /// 最初から装備せず所持しているアイテムの所持数02
    u8 inventoryItemNum_02;
    
    /// インベントリアイテム03の所持数
    /// 
    /// 最初から装備せず所持しているアイテムの所持数03
    u8 inventoryItemNum_03;
    
    /// インベントリアイテム04の所持数
    /// 
    /// 最初から装備せず所持しているアイテムの所持数04
    u8 inventoryItemNum_04;
    
    /// インベントリアイテム05の所持数
    /// 
    /// 最初から装備せず所持しているアイテムの所持数05
    u8 inventoryItemNum_05;
    
    /// インベントリアイテム06の所持数
    /// 
    /// 最初から装備せず所持しているアイテムの所持数06
    u8 inventoryItemNum_06;
    
    /// インベントリアイテム07の所持数
    /// 
    /// 最初から装備せず所持しているアイテムの所持数07
    u8 inventoryItemNum_07;
    
    /// インベントリアイテム08の所持数
    /// 
    /// 最初から装備せず所持しているアイテムの所持数08
    u8 inventoryItemNum_08;
    
    /// インベントリアイテム09の所持数
    /// 
    /// 最初から装備せず所持しているアイテムの所持数09
    u8 inventoryItemNum_09;
    
    /// インベントリアイテム10の所持数
    /// 
    /// 最初から装備せず所持しているアイテムの所持数10
    u8 inventoryItemNum_10;
    
    /// リソースアイテムA所持数
    /// 
    /// リソースアイテムAの所持数
    u8 resourceItemNumA;
    
    /// リソースアイテムB所持数
    /// 
    /// リソースアイテムBの所持数
    u8 resourceItemNumB;
    
    /// リソースアイテムC所持数
    /// 
    /// リソースアイテムCの所持数
    u8 resourceItemNumC;
    
    /// 身体の基本値
    u8 baseBody;
    
    /// 体幹の基本値
    u8 baseTaikan;
    
    /// 最大回生回数
    /// 
    /// 所持出来る復活権の最大数（テンポラリ分除く）
    u8 revivalMaxNum;
    
    /// 投げ技1
    /// 
    /// 初期所持の投げ技ID01
    s32 throwSkill01;
    
    /// 投げ技2
    /// 
    /// 初期所持の投げ技ID02
    s32 throwSkill02;
    
    /// 投げ技3
    /// 
    /// 初期所持の投げ技ID03
    s32 throwSkill03;
    
    /// スキルレベル
    /// 
    /// 初期状態におけるスキルレベル
    s16 skillLv;
    
    dummy8 pad2[2];
    
    /// インベントリ武器01
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep01;
    
    /// インベントリ武器02
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep02;
    
    /// インベントリ武器03
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep03;
    
    /// インベントリ武器04
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep04;
    
    /// インベントリ武器05
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep05;
    
    /// インベントリ武器06
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep06;
    
    /// インベントリ武器07
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep07;
    
    /// インベントリ武器08
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep08;
    
    /// インベントリ武器09
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep09;
    
    /// インベントリ武器10
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep10;
    
    /// インベントリ武器11
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep11;
    
    /// インベントリ武器12
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep12;
    
    /// インベントリ武器13
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep13;
    
    /// インベントリ武器14
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep14;
    
    /// インベントリ武器15
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep15;
    
    /// インベントリ武器16
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep16;
    
    /// インベントリ武器17
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep17;
    
    /// インベントリ武器18
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep18;
    
    /// インベントリ武器19
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep19;
    
    /// インベントリ武器20
    /// 
    /// 最初から装備せずに持っている武器
    s32 inventoryWep20;
    
    dummy8 pad4[12];
    
};

struct BULLET_PARAM_ST {
    static constexpr const char* TYPE_NAME = "BULLET_PARAM_ST";
    
    /// 攻撃ID
    /// 
    /// 攻撃パラメータのＩＤをそれぞれ登録する.→攻撃タイプ／攻撃材質／物理攻撃力／魔法攻撃力／スタミナ攻撃力／ノックバック距離.
    s32 atkId_Bullet;
    
    /// SFXID【弾】
    /// 
    /// SFX IDを入れる。
    s32 sfxId_Bullet;
    
    /// SFXID【着弾】
    /// 
    /// 着弾SFXID。-1は発生しない。
    s32 sfxId_Hit;
    
    /// SFXID【ガード/ジャスガ】
    /// 
    /// ガードもしくはジャスガ時SFXID。-1は発生しない。旧はじき時SFXID。
    s32 sfxId_Flick;
    
    /// 寿命[s]
    /// 
    /// 飛び道具が存在し続けられる時間（-1なら無限）.
    f32 life;
    
    /// 射程距離[m]
    /// 
    /// 減衰が開始される距離（実際の飛距離ではない）.
    f32 dist;
    
    /// 発射間隔[s]
    /// 
    /// 飛び道具を何秒間隔で発射するかを指定.
    f32 shootInterval;
    
    /// 射程距離内重力[m/s^2]
    /// 
    /// 射程距離内での下向きにかかる重力.
    f32 gravityInRange;
    
    /// 射程距離外重力[m/s^2]
    /// 
    /// 減衰がはじまったときの下向きにかかる重力（ポトンと落ちる感じを表現.
    f32 gravityOutRange;
    
    /// 誘導停止距離[m]
    /// 
    /// 誘導を停止するターゲットとの距離。誘導弾で当たり過ぎないようにするパラメータ。
    f32 hormingStopRange;
    
    /// 初速[m/s]
    /// 
    /// ＳＦＸの初速度.
    f32 initVellocity;
    
    /// 射程距離内加速度[m/s^2]
    /// 
    /// ＳＦＸの射程内の加速度.
    f32 accelInRange;
    
    /// 射程距離外加速度[m/s^2]
    /// 
    /// ＳＦＸが射程距離外に出たときの加速度.
    f32 accelOutRange;
    
    /// 最高速度[m/s]
    /// 
    /// 最高速度.
    f32 maxVellocity;
    
    /// 最低速度[m/s]
    /// 
    /// 最低保証速度.
    f32 minVellocity;
    
    /// 加速開始時間[s]
    /// 
    /// この時間までは、加速しない（ロケット弾みたいな魔法を撃つことができるようにしておく）.
    f32 accelTime;
    
    /// 誘導開始距離[m]
    /// 
    /// 何ｍ進んだ地点から誘導を開始するか.
    f32 homingBeginDist;
    
    /// 初期弾半径[m]
    /// 
    /// 当たり球の半径を設定する.
    f32 hitRadius;
    
    /// 最大弾半径[m]
    /// 
    /// あたり球の最大半径（－1の場合、初期半径と同じにする／デフォルト）
    f32 hitRadiusMax;
    
    /// 範囲拡散時間[s]
    /// 
    /// 範囲半径が細大にまで広がる時間.
    f32 spreadTime;
    
    /// 発動遅延[s]
    /// 
    /// 着弾後、爆発までの時間（０の場合はすぐに爆発）.
    f32 expDelay;
    
    /// 誘導ずらし量[m]
    /// 
    /// ０だと正確。射撃時にXYZ各成分を、この量だけずらして狙うようにする。
    f32 hormingOffsetRange;
    
    /// ダメージヒット履歴の生存時間[s]
    /// 
    /// ダメージヒット履歴の生存時間[sec](<=0.0f：無期限)
    f32 dmgHitRecordLifeTime;
    
    /// 外力[m/s^2]
    /// 
    /// 射撃時の方向にかかる外力.(Y軸は抜いている)
    f32 externalForce;
    
    /// 射撃した人にかける特殊効果
    s32 spEffectIDForShooter;
    
    /// ファンネルNPC思考ID
    /// 
    /// ファンネルがターゲットの検索使用するパラメータ
    s32 autoSearchNPCThinkID;
    
    /// 発生弾丸ID
    /// 
    /// 弾丸パラメータから、新しく弾丸パラメータを発生させるときにＩＤを指定する
    s32 HitBulletID;
    
    /// 特殊効果ID0
    /// 
    /// 特殊効果パラメータのＩＤをそれぞれ登録する.→特殊効果全般.
    s32 spEffectId0;
    
    /// 特殊効果ID1
    /// 
    /// 特殊効果パラメータのＩＤをそれぞれ登録する.→特殊効果全般.
    s32 spEffectId1;
    
    /// 特殊効果ID2
    /// 
    /// 特殊効果パラメータのＩＤをそれぞれ登録する.→特殊効果全般.
    s32 spEffectId2;
    
    /// 特殊効果ID3
    /// 
    /// 特殊効果パラメータのＩＤをそれぞれ登録する.→特殊効果全般.
    s32 spEffectId3;
    
    /// 特殊効果ID4
    /// 
    /// 特殊効果パラメータのＩＤをそれぞれ登録する.→特殊効果全般.
    s32 spEffectId4;
    
    /// 発射数
    /// 
    /// 一度に発射する飛び道具の数.
    u16 numShoot;
    
    /// 誘導性能[deg/s]
    /// 
    /// 1秒間に何度まで補正するか？.
    s16 homingAngle;
    
    /// 発射角度[deg]
    /// 
    /// 飛び道具を前方何度に向かって発射するかを指定.
    s16 shootAngle;
    
    /// 発射角度間隔[deg]
    /// 
    /// 飛び道具を複数発射する場合、何度間隔で発射するかを指定.(Y軸)
    s16 shootAngleInterval;
    
    /// 発射仰角間隔[deg]
    /// 
    /// 飛び道具を複数発射する場合、何度間隔で発射するかを指定.(X軸)
    s16 shootAngleXInterval;
    
    /// 物理攻撃力減衰率[%/s]
    /// 
    /// 減衰距離以降、1秒間に減少する補正値.
    s8 damageDamp;
    
    /// 魔法攻撃力減衰率[%/s]
    /// 
    /// 減衰距離以降、1秒間に減少する補正値.
    s8 spelDamageDamp;
    
    /// 炎攻撃力減衰率[%/s]
    /// 
    /// 減衰距離以降、1秒間に減少する補正値.
    s8 fireDamageDamp;
    
    /// 電撃攻撃力減衰率[%/s]
    /// 
    /// 減衰距離以降、1秒間に減少する補正値.
    s8 thunderDamageDamp;
    
    /// スタミナダメージ減衰率[%/s]
    /// 
    /// 減衰距離以降、1秒間に減少する補正値.
    s8 staminaDamp;
    
    /// ノックバック減衰率[%/s]
    /// 
    /// 減衰距離以降、1秒間に減少する補正値.
    s8 knockbackDamp;
    
    /// 発射仰角[deg]
    /// 
    /// 水平方向からの追加仰角。
    s8 shootAngleXZ;
    
    /// ロック方向制限角度
    /// 
    /// ロック方向を向かせるときの制限角度
    u8 lockShootLimitAng;
    
    /// キャラ・OBJを貫通？
    /// 
    /// ＰＣ、ＮＰＣ、ＯＢＪに当たったときに、寿命まで消滅しないかどうか？を設定
    u8 isPenetrate;
    
    /// 前回の移動方向加算率[%]
    /// 
    /// 滑る弾が壁にヒット時に前回の移動方向を今の方向へ加算する比率
    u8 prevVelocityDirRate;
    
    /// 物理属性
    /// 
    /// 弾丸に設定する物理属性を設定
    u8 atkAttribute;
    
    /// 特殊属性
    /// 
    /// 弾丸に設定する特殊属性を設定
    u8 spAttribute;
    
    /// SFX材質 攻撃タイプ
    /// 
    /// 攻撃属性が何かを指定する
    u8 Material_AttackType;
    
    /// 攻撃材質[SFX]
    /// 
    /// 攻撃時のSFXに使用
    u8 Material_AttackMaterial_forSfx;
    
    /// SFX材質 サイズ
    /// 
    /// 攻撃時のSFX/ＳＥに使用（予備／デフォルト0）
    u8 Material_Size;
    
    /// 発生条件
    /// 
    /// 着弾・寿命消滅時に弾を発生させるか判定する条件を指定
    u8 launchConditionType;
    
    /// 追従タイプ。「追従しない」がデフォルト。
    u8 FollowType : 3;
    
    /// パディング7
    /// 
    /// pad7
    dummy8 pad7 : 3;
    
    /// 刺さったままになるか
    /// 
    /// 矢などの弾丸が、キャラクターに刺さったままになるかどうかを設定する
    u8 isAttackSFX : 1;
    
    /// あたり続けるか？
    u8 isEndlessHit : 1;
    
    /// マップを貫通？
    /// 
    /// マップを貫通するか？
    u8 isPenetrateMap : 1;
    
    /// 敵味方共にあたる？
    /// 
    /// 敵味方共にあたるか？（徘徊ゴーストにはあたらない）
    u8 isHitBothTeam : 1;
    
    /// ヒットリストを共有するか？
    /// 
    /// ヒットリストを共有するかを指定
    u8 isUseSharedHitList : 1;
    
    /// 複数のダミポリを使うか？
    /// 
    /// 弾配置時に同一ダミポリIDを複数使うか？
    u8 isUseMultiDmyPolyIfPlace : 1;
    
    /// AIへの割り込み通知
    /// 
    /// AIへ割り込み通知を行うか（INTERUPT_FLAG_Shoot）
    u8 isSendShootInterrupt : 1;
    
    /// 曲射補正の適用
    u8 isHowitzer : 1;
    
    /// フォース魔法に当たるか
    u8 isHitForceMagic : 1;
    
    /// 水面衝突時のエフェクト無視するか
    /// 
    /// 水面に当たった場合はエフェクト無視するか
    u8 isIgnoreSfxIfHitWater : 1;
    
    /// 水面衝突時の状態遷移を無視するか
    /// 
    /// 水に当たっても状態遷移を無視するか
    u8 isIgnoreMoveStateIfHitWater : 1;
    
    /// 闇フォース魔法に当たるか
    u8 isHitDarkForceMagic : 1;
    
    /// ダメージ計算サイド。　マルチプレイ時に、ダメージの計算を、与えた側 or 受けた側を切り替えるためのもの。
    u8 dmgCalcSide : 2;
    
    /// 弾丸自動捕捉許可
    /// 
    /// 非ロックオン時に自動追従するか
    u8 isEnableAutoHoming : 1;
    
    /// 同期弾丸の場合、ダミポリ位置での再計算を行うか
    /// 
    /// 同期生成された弾丸の場合、弾丸生成時にダミポリ位置による姿勢の再計算を行わず、同期時のエミッタ姿勢を使用する。
    u8 isSyncBulletCulcDumypolyPos : 1;
    
    /// 間隔指定弾丸の場合ターゲットに向けて飛ばすか
    /// 
    /// 一定間隔で作成される弾丸の場合ターゲットに向けて飛ばすか。OFFなら親姿勢の方に飛ばす。
    u8 isIntervalCreateTargetLockOn : 1;
    
    /// 子弾にSFXを引き継ぐか
    /// 
    /// 親弾のSFXを引き継ぐ。子弾に設定されたSFXIDは無視する
    u8 isInheritSfxToChild : 1;
    
    /// 闇攻撃力減衰率[%/s]
    /// 
    /// 減衰距離以降、1秒間に減少する補正値.
    s8 darkDamageDamp;
    
    /// 着弾時の弾丸SFX消滅タイプ
    /// 
    /// 着弾or弾き時の弾丸SFX消滅タイプ
    s8 bulletSfxDeleteType_byHit;
    
    /// 寿命時の弾丸SFX消滅タイプ
    s8 bulletSfxDeleteType_byLifeDead;
    
    /// 目標上下オフセット[m]
    /// 
    /// 着弾位置の上下オフセット。発射時とホーミング中のターゲット位置を上下にずらす。（-n～n）
    f32 targetYOffsetRange;
    
    /// 発射角度乱数[deg]
    /// 
    /// 発射角度乱数の上限（0～360）
    f32 shootAngleYMaxRandom;
    
    /// 発射仰角乱数[deg]
    /// 
    /// 発射仰角乱数の上限（0～360）
    f32 shootAngleXMaxRandom;
    
    /// 間隔指定発生弾丸ID
    /// 
    /// 一定間隔で弾丸を作る時に使う、弾丸のID
    s32 intervalCreateBulletId;
    
    /// 発生間隔：最小時間[s]
    /// 
    /// 一定間隔で弾丸を作る間隔の最小（0～n）
    f32 intervalCreateTimeMin;
    
    /// 発生間隔：最大時間[s]
    /// 
    /// 一定間隔で弾丸を作る間隔の最大（0～n 0なら機能無効）
    f32 intervalCreateTimeMax;
    
    /// 予測射撃の速度観測時間[s]
    /// 
    /// 予測射撃機能の平均速度観測時間（0～4 0なら機能無効）
    f32 predictionShootObserveTime;
    
    /// 間隔指定発生開始待ち時間[s]
    /// 
    /// 一定間隔で弾丸を作り始めるまでの待ち時間
    f32 intervalCreateWaitTime;
    
    /// 弾丸から発生したSFXの姿勢のタイプ
    /// 
    /// 弾丸から作成されたSFXまたは子弾丸の初期姿勢を設定する
    u8 sfxPostureType;
    
    /// 作成制限グループId
    /// 
    /// 0なら未使用。同一のグループIdに設定された弾丸を作成するときに上限に達していたらその弾丸を作成しない。（ネットワークで同期作成された弾は関係なく出る）
    u8 createLimitGroupId;
    
    /// ガード判定位置
    /// 
    /// 弾丸をガードした時、どことガード成功判定位置をとるか
    u8 guardRangeType;
    
    /// 子弾に速度を引き継ぐか
    /// 
    /// 子弾に差し替わるタイミングの速度を引き継ぐ。子弾に設定された速度は無視する
    u8 isInheritSpeedToChild : 1;
    
    /// キャラ・OBJヒット時着弾SFXを再生しない
    /// 
    /// ONの時、キャラクター/オブジェクトに着弾しても弾丸パラメータの「着弾SFX」を再生しない
    u8 isDisableHitSfx_byChrAndObj : 1;
    
    /// 発射位置壁めり込み判定をキャラ中心を平行に結ぶレイを飛ばして行う
    /// 
    /// 弾丸発射時めり込み判定に不具合があったので、それのエラーハンドリング用。SEQ23101 【自キャラ】ロックオン位置の高いキャラに密着してソウルの短矢、強いソウルの短矢を使うと弾丸の方向が反転する
    u8 isCheckWall_byCenterRay : 1;
    
    /// 他弾強制消去Aに当たるか
    u8 isHitOtherBulletForceEraseA : 1;
    
    /// 原始魔法アタリを使うか？原始魔法専用アタリに当たるフィルタに変わります。
    u8 isUseBulletWallFilter : 1;
    
    /// 親弾丸の向きを使って制限角度を計算する
    /// 
    /// ロック方向を向かせるときの制限角度の基準方向を親弾丸の向きにする
    u8 isUseParentAngForlockShootLimitAng : 1;
    
    /// PCのファンネル数が理力で変動しない。発射数になる
    u8 isNonDependenceMagicForFunnleNum : 1;
    
    /// パディング2
    /// 
    /// pad3
    dummy8 pad1 : 1;
    
    /// ランダム発生時の発生範囲(半径)[m]
    /// 
    /// 発生源タイプがランダムな位置に発生する設定の場合に利用される、弾丸の発生範囲。
    f32 randomCreateRadius;
    
    /// 動的生成するオブジェクトID
    /// 
    /// 動的に発生させるオブジェクトのID。エリア番号とオブジェ番号であらわされるオブジェクトIDを設定してください。発生タイミングは「オブジェクトの動的生成タイミング」で指定してください。
    s32 generateObjId;
    
    /// 寿命乱数[s]
    /// 
    /// 「寿命[s]」に対して、設定した時間の振れ幅を持つ乱数秒を加える
    f32 lifeRandomRange;
    
    /// 攻撃材質[SE]
    /// 
    /// 攻撃時のSEに使用
    u8 Material_AttackMaterial_forSe;
    
    /// スタミナ物理属性
    /// 
    /// 防御者のどのスタミナダメージ倍率を参照するか決める。例) 斬撃に設定すると、防御側の斬撃スタミナダメージ倍率を参照する。
    u8 staminaPhysicsAttribute;
    
    /// アタッチ効果タイプ
    /// 
    /// アタッチする効果タイプ
    u8 attachEffectType;
    
    /// オブジェクトの動的生成タイミング
    /// 
    /// 「動的生成するオブジェクトID」で指定したオブジェクトを生成するタイミング
    u8 objGenerateTiming;
    
    /// SFXID【強制消去時】
    /// 
    /// 強制消去時SFXID。-1は発生しない。
    s32 sfxId_ForceErase;
    
    /// 強制消去時の弾丸SFX消滅タイプ
    s8 bulletSfxDeleteType_byForceErase;
    
    /// パディング3
    /// 
    /// pad3
    dummy8 pad3[1];
    
    /// 誘導性能（X軸個別）[deg/s]
    /// 
    /// 誘導性能のX軸成分だけを変えます。-1で変えません
    s16 homingAngleX;
    
    /// 発射位置上下オフセット[m]
    /// 
    /// 発射時の高さをオフセットします。発生源タイプが「ダミポリから上下オフセット」の時にしか効きません
    f32 shootYOffsetRange;
    
    /// 発生限界距離[m]
    /// 
    /// 弾丸の発生位置が、オーナーの位置よりこの距離以上離れていると出さない。（0は無効値）
    f32 generationMaxDistWhenOwner;
    
    /// 曲射補正用_最低発射仰角[deg]
    s16 elevationMinAngle;
    
    /// 曲射補正用_最高発射仰角[deg]
    s16 elevationMaxAngle;
    
    /// 曲射補正用_最低初速[m/s]
    f32 initMinVellocity;
    
    /// 曲射補正用_最高初速[m/s]
    f32 initMaxVellocity;
    
    /// 他弾強制消去Bに当たるか
    u8 isHitOtherBulletForceEraseB : 1;
    
    /// パディング4
    dummy8 pad4 : 7;
    
    /// パディング5
    /// 
    /// pad5
    dummy8 pad5[1];
    
    /// 発生源タイプ。ダミポリからが通常。（メテオを判定するために導入）
    u16 EmittePosType;
    
    /// 接近消滅距離[m]
    /// 
    /// 弾丸が誘導対象から指定した値(m)まで接近したら弾丸を消滅させる。（0は無効値）
    f32 disappearDistanceToTarget;
    
    /// パディング6
    /// 
    /// pad6
    dummy8 pad6[8];
    
};

struct HIT_EFFECT_SFX_PARAM_ST {
    static constexpr const char* TYPE_NAME = "HIT_EFFECT_SFX_PARAM_ST";
    
    /// 斬撃：小
    s32 Slash_S;
    
    /// 斬撃：中
    s32 Slash_M;
    
    /// 斬撃：大
    s32 Slash_L;
    
    /// 斬撃：特大
    s32 Slash_LL;
    
    /// 斬撃：特特大
    s32 Slash_LLL;
    
    /// 刺突：小
    s32 Thrust_S;
    
    /// 刺突：中
    s32 Thrust_M;
    
    /// 刺突：大
    s32 Thrust_L;
    
    /// 刺突：特大
    s32 Thrust_LL;
    
    /// 刺突：特特大
    s32 Thrust_LLL;
    
    /// 打撃：小
    s32 Blow_S;
    
    /// 打撃：中
    s32 Blow_M;
    
    /// 打撃：大
    s32 Blow_L;
    
    /// 打撃：特大
    s32 Blow_LL;
    
    /// 打撃：特特大
    s32 Blow_LLL;
    
    /// 予約領域
    dummy8 reserve[20];
    
};

struct WEP_ABSORP_POS_PARAM_ST {
    static constexpr const char* TYPE_NAME = "WEP_ABSORP_POS_PARAM_ST";
    
    /// 格納場所タイプ
    /// 
    /// この値によって納刀時アニメが変わります
    u8 hangPosType;
    
    /// パディング
    dummy8 pad0[3];
    
    /// モデル0_右手時吸着ダミポリ
    /// 
    /// 武器を右手に片手で持っているときのモデル0の吸着ダミポリ。
    s16 right_0;
    
    /// モデル0_左手時吸着ダミポリ
    /// 
    /// 武器を左手に片手で持っているときのモデル0の吸着ダミポリ。
    s16 left_0;
    
    /// モデル0_右手両手時吸着ダミポリ
    /// 
    /// 右手武器を両手で持っているときのモデル0の吸着ダミポリ。
    s16 both_0;
    
    /// モデル0_左手納刀時吸着ダミポリ
    /// 
    /// 武器を左手に持っていて、その武器を納刀しているときのモデル0の吸着ダミポリ。
    s16 leftHang_0;
    
    /// モデル0_右手納刀時吸着ダミポリ
    /// 
    /// 武器を右手に持っていて、その武器を納刀しているときのモデル0の吸着ダミポリ。
    s16 rightHang_0;
    
    /// モデル1_右手時吸着ダミポリ
    /// 
    /// 武器を右手に片手で持っているときのモデル1の吸着ダミポリ。
    s16 right_1;
    
    /// モデル1_左手時吸着ダミポリ
    /// 
    /// 武器を左手に片手で持っているときのモデル1の吸着ダミポリ。
    s16 left_1;
    
    /// モデル1_右手両手時吸着ダミポリ
    /// 
    /// 右手武器を両手で持っているときのモデル1の吸着ダミポリ。
    s16 both_1;
    
    /// モデル1_左手納刀時吸着ダミポリ
    /// 
    /// 武器を左手に持っていて、その武器を納刀しているときのモデル1の吸着ダミポリ。
    s16 leftHang_1;
    
    /// モデル1_右手納刀時吸着ダミポリ
    /// 
    /// 武器を右手に持っていて、その武器を納刀しているときのモデル1の吸着ダミポリ。
    s16 rightHang_1;
    
    /// モデル2_右手時吸着ダミポリ
    /// 
    /// 武器を右手に片手で持っているときのモデル2の吸着ダミポリ。
    s16 right_2;
    
    /// モデル2_左手時吸着ダミポリ
    /// 
    /// 武器を左手に片手で持っているときのモデル2の吸着ダミポリ。
    s16 left_2;
    
    /// モデル2_右手両手時吸着ダミポリ
    /// 
    /// 右手武器を両手で持っているときのモデル2の吸着ダミポリ。
    s16 both_2;
    
    /// モデル2_左手納刀時吸着ダミポリ
    /// 
    /// 武器を左手に持っていて、その武器を納刀しているときのモデル2の吸着ダミポリ。
    s16 leftHang_2;
    
    /// モデル2_右手納刀時吸着ダミポリ
    /// 
    /// 武器を右手に持っていて、その武器を納刀しているときのモデル2の吸着ダミポリ。
    s16 rightHang_2;
    
    /// モデル3_右手時吸着ダミポリ
    /// 
    /// 武器を右手に片手で持っているときのモデル3の吸着ダミポリ。
    s16 right_3;
    
    /// モデル3_左手時吸着ダミポリ
    /// 
    /// 武器を左手に片手で持っているときのモデル3の吸着ダミポリ。
    s16 left_3;
    
    /// モデル3_右手両手時吸着ダミポリ
    /// 
    /// 右手武器を両手で持っているときのモデル3の吸着ダミポリ。
    s16 both_3;
    
    /// モデル3_左手納刀時吸着ダミポリ
    /// 
    /// 武器を左手に持っていて、その武器を納刀しているときのモデル3の吸着ダミポリ。
    s16 leftHang_3;
    
    /// モデル3_右手納刀時吸着ダミポリ
    /// 
    /// 武器を右手に持っていて、その武器を納刀しているときのモデル3の吸着ダミポリ。
    s16 rightHang_3;
    
    /// モデル4_右手時吸着ダミポリ
    /// 
    /// 武器を右手に片手で持っているときのモデル4の吸着ダミポリ。
    s16 right_4;
    
    /// モデル4_左手時吸着ダミポリ
    /// 
    /// 武器を左手に片手で持っているときのモデル4の吸着ダミポリ。
    s16 left_4;
    
    /// モデル4_右手両手時吸着ダミポリ
    /// 
    /// 右手武器を両手で持っているときのモデル4の吸着ダミポリ。
    s16 both_4;
    
    /// モデル4_左手納刀時吸着ダミポリ
    /// 
    /// 武器を左手に持っていて、その武器を納刀しているときのモデル4の吸着ダミポリ。
    s16 leftHang_4;
    
    /// モデル4_右手納刀時吸着ダミポリ
    /// 
    /// 武器を右手に持っていて、その武器を納刀しているときのモデル4の吸着ダミポリ。
    s16 rightHang_4;
    
    /// モデル5_右手時吸着ダミポリ
    /// 
    /// 武器を右手に片手で持っているときのモデル5の吸着ダミポリ。
    s16 right_5;
    
    /// モデル5_左手時吸着ダミポリ
    /// 
    /// 武器を左手に片手で持っているときのモデル5の吸着ダミポリ。
    s16 left_5;
    
    /// モデル5_右手両手時吸着ダミポリ
    /// 
    /// 右手武器を両手で持っているときのモデル5の吸着ダミポリ。
    s16 both_5;
    
    /// モデル5_左手納刀時吸着ダミポリ
    /// 
    /// 武器を左手に持っていて、その武器を納刀しているときのモデル5の吸着ダミポリ。
    s16 leftHang_5;
    
    /// モデル5_右手納刀時吸着ダミポリ
    /// 
    /// 武器を右手に持っていて、その武器を納刀しているときのモデル5の吸着ダミポリ。
    s16 rightHang_5;
    
    /// モデル0_武器非表示タイプ
    /// 
    /// モデル0の非表示タイプ。TAEで武器非表示にする際にこれと一致するものを消す
    u8 wepInvisibleType_0;
    
    /// モデル1_武器非表示タイプ
    /// 
    /// モデル1の非表示タイプ。TAEで武器非表示にする際にこれと一致するものを消す
    u8 wepInvisibleType_1;
    
    /// モデル2_武器非表示タイプ
    /// 
    /// モデル2の非表示タイプ。TAEで武器非表示にする際にこれと一致するものを消す
    u8 wepInvisibleType_2;
    
    /// モデル3_武器非表示タイプ
    /// 
    /// モデル3の非表示タイプ。TAEで武器非表示にする際にこれと一致するものを消す
    u8 wepInvisibleType_3;
    
    /// モデル4_武器非表示タイプ
    /// 
    /// モデル4の非表示タイプ。TAEで武器非表示にする際にこれと一致するものを消す
    u8 wepInvisibleType_4;
    
    /// モデル5_武器非表示タイプ
    /// 
    /// モデル5の非表示タイプ。TAEで武器非表示にする際にこれと一致するものを消す
    u8 wepInvisibleType_5;
    
    /// モデル0_左手両手時吸着ダミポリ
    /// 
    /// 左手武器を両手で持っているときのモデル0の吸着ダミポリ。
    s16 leftBoth_0;
    
    /// モデル1_左手両手時吸着ダミポリ
    /// 
    /// 左手武器を両手で持っているときのモデル1の吸着ダミポリ。
    s16 leftBoth_1;
    
    /// モデル2_左手両手時吸着ダミポリ
    /// 
    /// 左手武器を両手で持っているときのモデル2の吸着ダミポリ。
    s16 leftBoth_2;
    
    /// モデル3_左手両手時吸着ダミポリ
    /// 
    /// 左手武器を両手で持っているときのモデル3の吸着ダミポリ。
    s16 leftBoth_3;
    
    /// モデル4_左手両手時吸着ダミポリ
    /// 
    /// 左手武器を両手で持っているときのモデル4の吸着ダミポリ。
    s16 leftBoth_4;
    
    /// モデル5_左手両手時吸着ダミポリ
    /// 
    /// 左手武器を両手で持っているときのモデル5の吸着ダミポリ。
    s16 leftBoth_5;
    
    /// モデル0_右手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_right_0;
    
    /// モデル0_左手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_left_0;
    
    /// モデル0_右手両手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_rightBoth_0;
    
    /// モデル0_左手両手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_leftBoth_0;
    
    /// モデル0_右手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_rightHang_0;
    
    /// モデル0_左手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_leftHang_0;
    
    /// モデル1_右手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_right_1;
    
    /// モデル1_左手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_left_1;
    
    /// モデル1_右手両手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_rightBoth_1;
    
    /// モデル1_左手両手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_leftBoth_1;
    
    /// モデル1_右手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_rightHang_1;
    
    /// モデル1_左手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_leftHang_1;
    
    /// モデル2_右手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_right_2;
    
    /// モデル2_左手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_left_2;
    
    /// モデル2_右手両手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_rightBoth_2;
    
    /// モデル2_左手両手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_leftBoth_2;
    
    /// モデル2_右手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_rightHang_2;
    
    /// モデル2_左手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_leftHang_2;
    
    /// モデル3_右手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_right_3;
    
    /// モデル3_左手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_left_3;
    
    /// モデル3_右手両手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_rightBoth_3;
    
    /// モデル3_左手両手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_leftBoth_3;
    
    /// モデル3_右手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_rightHang_3;
    
    /// モデル3_左手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_leftHang_3;
    
    /// モデル4_右手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_right_4;
    
    /// モデル4_左手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_left_4;
    
    /// モデル4_右手両手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_rightBoth_4;
    
    /// モデル4_左手両手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_leftBoth_4;
    
    /// モデル4_右手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_rightHang_4;
    
    /// モデル4_左手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_leftHang_4;
    
    /// モデル5_右手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_right_5;
    
    /// モデル5_左手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_left_5;
    
    /// モデル5_右手両手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_rightBoth_5;
    
    /// モデル5_左手両手時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_leftBoth_5;
    
    /// モデル5_右手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_rightHang_5;
    
    /// モデル5_左手納刀時表示位置(TAE から非表示位置を指定するのに使用する)
    u8 dispPosType_leftHang_5;
    
    /// 予約領域
    dummy8 reserve[10];
    
};

struct TONE_CORRECT_BANK {
    static constexpr const char* TYPE_NAME = "TONE_CORRECT_BANK";
    
    /// 輝度R
    /// 
    /// 輝度
    f32 brightnessR;
    
    /// 輝度G
    /// 
    /// 輝度
    f32 brightnessG;
    
    /// 輝度B
    /// 
    /// 輝度
    f32 brightnessB;
    
    /// コントラストR
    /// 
    /// コントラスト
    f32 contrastR;
    
    /// コントラストG
    /// 
    /// コントラスト
    f32 contrastG;
    
    /// コントラストB
    /// 
    /// コントラスト
    f32 contrastB;
    
    /// 彩度
    f32 saturation;
    
    /// 色相
    f32 hue;
    
};

struct WHITE_SIGN_COOL_TIME_PARAM_ST {
    static constexpr const char* TYPE_NAME = "WHITE_SIGN_COOL_TIME_PARAM_ST";
    
    /// 制限時間（通常・指なし）
    /// 
    /// 制限時間[sec]（通常・干からびた指無）
    f32 limitationTime_Normal;
    
    /// 制限時間（通常・指あり）
    /// 
    /// 制限時間[sec]（通常・干からびた指有）
    f32 limitationTime_NormalDriedFinger;
    
    /// 制限時間（マップ守護・指なし）
    /// 
    /// 制限時間[sec]（マップ守護・干からびた指無）
    f32 limitationTime_Guardian;
    
    /// 制限時間（マップ守護・指あり）
    /// 
    /// 制限時間[sec]（マップ守護・干からびた指有）
    f32 limitationTime_GuardianDriedFinger;
    
};

struct EQUIP_PARAM_GOODS_ST {
    static constexpr const char* TYPE_NAME = "EQUIP_PARAM_GOODS_ST";
    
    /// 呼び出しID0(デフォルト)
    /// 
    /// アイテムから呼び出されるID0(デフォルト)
    s32 refId_default;
    
    /// SFXバリエーションID
    /// 
    /// ＳＦＸのバリエーションを指定（TimeActEditorのＩＤと組み合わせて、ＳＦＸを特定するのに使用する）
    s32 sfxVariationId;
    
    /// 重量[kg]
    f32 weight;
    
    /// 基本価格
    s32 basicPrice;
    
    /// 売却価格
    /// 
    /// 販売価格
    s32 sellValue;
    
    /// 行動ID
    /// 
    /// 道具を使ったときに発生する効果を設定します
    s32 behaviorId;
    
    /// 補充差し替えアイテムID
    /// 
    /// 補充差し替えするときのアイテムID
    s32 replaceItemId;
    
    /// ソートID(-1:集めない)
    s32 sortId;
    
    /// QWCID
    /// 
    /// QWCのパラメタiD
    s32 qwcId;
    
    /// YES/NOメッセージID
    /// 
    /// YesNoダイアログ表示時に使用するメッセージID
    s32 yesNoDialogMessageId;
    
    /// アクション解禁パラメータID
    /// 
    /// アクション解禁パラメータと紐づけてどのアクションを解禁するか指定する。
    s32 actionUnlockParamId;
    
    /// アイコンID
    /// 
    /// メニュー用アイコンID
    u16 iconId;
    
    /// モデルID
    u16 modelId;
    
    /// ショップレベル
    /// 
    /// お店で販売できるレベル
    s16 shopLv;
    
    /// コンプトロフィーSEQ番号
    /// 
    /// コンプリート系トロフィのSEQ番号
    s16 compTrophySedId;
    
    /// トロフィーSEQ番号
    /// 
    /// トロフィーのSEQ番号
    s16 trophySeqId;
    
    /// 最大所持数
    s16 maxNum;
    
    /// 消費人間性
    u8 consumeHeroPoint;
    
    /// 技量オーバー開始値
    u8 overDexterity;
    
    /// 道具のタイプ
    /// 
    /// 道具の種類
    u8 goodsType;
    
    /// IDカテゴリ
    /// 
    /// ↓のIDのカテゴリ[攻撃、飛び道具、特殊]
    u8 refCategory;
    
    /// 特殊効果カテゴリ
    /// 
    /// スキルや、魔法、アイテムなどで、パラメータが変動する効果（エンチャントウェポンなど）があるので、│定した効果が、「武器攻撃のみをパワーアップする」といった効果に対応できるように行動ごとに設定するバリスタなど、設定の必要のないものは「なし」を設定する
    u8 spEffectCategory;
    
    /// 道具カテゴリ
    u8 goodsCategory;
    
    /// 道具使用時アニメ
    /// 
    /// 道具を使ったときに再生するアニメを設定します
    u8 goodsUseAnim;
    
    /// メニュー開くか
    /// 
    /// アイテム使用時に開くメニュータイプ
    u8 opmeMenuType;
    
    /// 特殊効果カテゴリによる使用制限
    /// 
    /// かかっている特殊効果によって使用可能かを制御する為に指定
    u8 useLimitCategory;
    
    /// 差し替えカテゴリ
    /// 
    /// 呼び出しIDに加算しる条件カテゴリ
    u8 replaceCategory;
    
    /// 誓約0で使用可能か
    u8 vowType0 : 1;
    
    /// 誓約1で使用可能か
    u8 vowType1 : 1;
    
    /// 誓約2で使用可能か
    u8 vowType2 : 1;
    
    /// 誓約3で使用可能か
    u8 vowType3 : 1;
    
    /// 誓約4で使用可能か
    u8 vowType4 : 1;
    
    /// 誓約5で使用可能か
    u8 vowType5 : 1;
    
    /// 誓約6で使用可能か
    u8 vowType6 : 1;
    
    /// 誓約7で使用可能か
    u8 vowType7 : 1;
    
    /// 誓約8で使用可能か
    u8 vowType8 : 1;
    
    /// 誓約9で使用可能か
    u8 vowType9 : 1;
    
    /// 誓約10で使用可能か
    u8 vowType10 : 1;
    
    /// 誓約11で使用可能か
    u8 vowType11 : 1;
    
    /// 誓約12で使用可能か
    u8 vowType12 : 1;
    
    /// 誓約13で使用可能か
    u8 vowType13 : 1;
    
    /// 誓約14で使用可能か
    u8 vowType14 : 1;
    
    /// 誓約15で使用可能か
    u8 vowType15 : 1;
    
    /// 生存使用可
    /// 
    /// 生存プレイヤー使用可能か
    u8 enable_live : 1;
    
    /// グレイ使用可
    /// 
    /// グレイゴースト使用可能か
    u8 enable_gray : 1;
    
    /// 白使用可
    /// 
    /// ホワイトゴースト使用可能か
    u8 enable_white : 1;
    
    /// 黒使用可
    /// 
    /// ブラックゴーストしよう可能か
    u8 enable_black : 1;
    
    /// マルチプレイ可
    /// 
    /// マルチプレイ中に使用可能か？
    u8 enable_multi : 1;
    
    /// オフラインで使用不可
    /// 
    /// オフライン中に使用不可か？
    u8 disable_offline : 1;
    
    /// 装備可能
    /// 
    /// 装備できるかどうか
    u8 isEquip : 1;
    
    /// 消耗品か
    /// 
    /// 使用時に消耗するか(所持数が減るか)
    u8 isConsume : 1;
    
    /// 自動装備するか？
    /// 
    /// 拾った時に自動で装備するか？
    u8 isAutoEquip : 1;
    
    /// 設置型アイテムか？
    u8 isEstablishment : 1;
    
    /// 1個しか持てないか
    /// 
    /// 1個しか持てないアイテムか
    u8 isOnlyOne : 1;
    
    /// 捨てれるか
    /// 
    /// アイテムを捨てれるか？TRUE=捨てれる
    u8 isDiscard : 1;
    
    /// 預けれるか
    /// 
    /// 倉庫に預けれるか
    u8 isDeposit : 1;
    
    /// 右素手に使えないか
    /// 
    /// 右手武器が素手の場合に使用不可か
    u8 isDisableHand : 1;
    
    /// 旅するアイテムか
    /// 
    /// 旅するアイテム判別に使用します
    u8 IsTravelItem : 1;
    
    /// 補充アイテムか
    /// 
    /// 補充可能アイテムを判別するのに使用します
    u8 isSuppleItem : 1;
    
    /// 補充済みアイテムか
    /// 
    /// 補充済みアイテムを判別するのに使用します
    u8 isFullSuppleItem : 1;
    
    /// エンチャントするか？
    /// 
    /// 武器にエンチャントするか？
    u8 isEnhance : 1;
    
    /// 修理アイテムか
    /// 
    /// 修理するアイテムか？
    u8 isFixItem : 1;
    
    /// マルチドロップ共有禁止か
    u8 disableMultiDropShare : 1;
    
    /// 闘技場で使用禁止か
    u8 disableUseAtColiseum : 1;
    
    /// 闘技場以外で使用禁止か
    u8 disableUseAtOutOfColiseum : 1;
    
    /// 早いキャンセル可能か
    u8 isEnableFastUseItem : 1;
    
    /// 特殊効果を反映するか
    /// 
    /// （能力値補正など）特殊効果を反映するか
    u8 isApplySpecialEffect : 1;
    
    /// 個数増減を同期させるID
    /// 
    /// アイテムの個数が変更された際に、同じIDを設定したアイテムも一緒に変更を行います。 0：同期しない
    u8 syncNumVaryId;
    
    /// 呼び出しID1
    /// 
    /// アイテムから呼び出されるID1
    s32 refId_1;
    
    /// 参照仮想武器ID
    /// 
    /// 道具使用時に参照する武器ID
    s32 refVirtualWepId;
    
    /// ベイグラント時アイテム抽選ID
    /// 
    /// -1：ベイグラントなし 0：抽選なし 1～：抽選あり
    s32 vagrantItemLotId;
    
    /// ベイグラントボーナス敵ドロップアイテム抽選ID
    /// 
    /// -1：ドロップなし 0：抽選なし 1～：抽選あり
    s32 vagrantBonusEneDropItemLotId;
    
    /// ベイグラントアイテム敵ドロップアイテム抽選ID
    /// 
    /// -1：ドロップなし 0：抽選なし 1～：抽選あり
    s32 vagrantItemEneDropItemLotId;
    
    /// 手持ちSFXID
    /// 
    /// アイテムを使用しようとし、効果が発動するまでのSFXID
    s32 castSfxId;
    
    /// 発動SFXID
    /// 
    /// アイテムが発動したときのSFXID
    s32 fireSfxId;
    
    /// 効果SFXID
    /// 
    /// アイテムが発動後、効果中のSFXID
    s32 effectSfxId;
    
    /// 薪の王使用可
    /// 
    /// 薪の王状態で使用可能か
    u8 enable_LoadOfCinder : 1;
    
    /// 篝火ワープアイテムか
    /// 
    /// TRUEの時に状態変化タイプの「ワープ禁止」がかかっていればそのアイテムを使用不可にする機能を外す
    u8 isBonfireWarpItem : 1;
    
    /// はしご中使用可能か
    /// 
    /// はしご中に使用可能なアイテムはここにチェックを入れます
    u8 enable_Ladder : 1;
    
    /// マルチプレイ準備中可
    /// 
    /// セッション確率～初期同期の間でアイテムを使用できるかどうか
    u8 isUseMultiPlayPreparation : 1;
    
    /// まとめて使えるか
    u8 canMultiUse : 1;
    
    /// 左手両手持時に呼び出しID1を使用
    /// 
    /// 左手両手もち時でエンチャントするか？がtrueなら呼び出しID１を使う
    u8 isUseRefId1ForEnchant : 1;
    
    /// ワープ禁止対象か
    /// 
    /// これがTRUEの時に、状態変化タイプの「ワープ禁止」がかかっていればそのアイテムを使用不可にする
    u8 isWarpProhibited : 1;
    
    /// 切断ペナルティが発生しているときのみ使用可能
    /// 
    /// クライアント切断ペナルティが発生しているときのみ使用可能なアイテムかどうかを判断できるようにするためのフラグ
    u8 isUseMultiPenaltyOnly : 1;
    
    /// 補充タイプ
    /// 
    /// 補充アイテム/補充済みアイテムを補充する際の補充タイプ。
    u8 suppleType;
    
    /// 自動補充タイプ
    /// 
    /// 自動補充する/しないの可否およびデフォルト設定をコントロールします
    u8 autoReplenishType;
    
    /// その場に置けるか
    /// 
    /// アイテムをその場に置けるか？TRUE=置ける
    u8 isDrop : 1;
    
    /// 入手時ログ表示するか
    /// 
    /// アイテムの入手時にアイテム取得ログへ表示するか(○=アイテム取得ログへ表示する）
    u8 isNoticeLog : 1;
    
    /// 入手時ダイアログ表示するか
    /// 
    /// 取得時に時止めダイアログを表示するか
    u8 isNoticeDialog : 1;
    
    /// 納刀中使用可
    /// 
    /// 納刀中使用できるか
    u8 enable_EmptyHand : 1;
    
    /// 水上使用可
    /// 
    /// 水泳中使用できるか
    u8 enable_Swimming : 1;
    
    /// 水中使用可
    /// 
    /// 潜水中使用できるか
    u8 enable_Diving : 1;
    
    /// しゃがみ中立てなくても使用可
    /// 
    /// しゃがみ中に天井が低く立てないところにいても使用できるか
    u8 enable_CantStand : 1;
    
    /// よじ登りできないぶら下がり中使用可
    /// 
    /// よじ登りできないぶら下がり中でも使用できるか
    u8 enable_CantClimbHang : 1;
    
    /// 倉庫所持数
    s16 maxRepositoryNum;
    
    /// 落下する壁張り付き中使用可
    /// 
    /// 落下する壁張り付き中でも使用できるか
    u8 enable_FallWallCling : 1;
    
    /// 竜咳アイテムか
    u8 enable_DragonsCough : 1;
    
    /// よじ登りできるぶら下がり中使用可
    /// 
    /// よじ登りできるぶら下がり中でも使用できるか
    u8 enable_Hang : 1;
    
    /// 予約領域
    dummy8 pad3 : 5;
    
    /// 予約領域
    dummy8 pad2[1];
    
    /// 販売価格
    s32 saleValue;
    
    /// リソースアイテムA消費数
    /// 
    /// アイテム使用時に消費するリソースアイテムA（ハードコード）の数
    u8 consumeResourceItemA;
    
    /// リソースアイテムB消費数
    /// 
    /// アイテム使用時に消費するリソースアイテムB（ハードコード）の数
    u8 consumeResourceItemB;
    
    /// リソースアイテムC消費数
    /// 
    /// アイテム使用時に消費するリソースアイテムC（ハードコード）の数
    u8 consumeResourceItemC;
    
    /// 取得時成長タイプ
    /// 
    /// アイテムを取得した時に指定した成長をする（なし：成長しない）
    u8 getGrowthType;
    
    /// 最大数所持差し替えアイテムID
    /// 
    /// 所持できる最大の個数に達したときにこのアイテムに差し替える
    s32 maxReplaceItemId;
    
    /// 初回入手イベントフラグID
    /// 
    /// 道具を入手したときに立てるイベントフラグを設定します（-1なら何もしない）
    s32 firstGetEventFlagId;
    
    /// 所持最大数を超えた時の挙動
    /// 
    /// 取得時にインベントリと倉庫が両方最大数だった場合の挙動を設定します
    u8 overEquipPtyMaxType;
    
    /// アイテム取得UIの表示タイプ
    /// 
    /// アイテム取得ダイアログとアイテム取得ログの表示タイプ
    u8 itemUIDisplayType;
    
    /// 使うとアイテム取得
    /// 
    /// ○のとき、指定のアイテムをインベントリに追加する
    u8 useGetItem;
    
    /// 使うとアイテム取得_カテゴリ
    /// 
    /// 使用時に取得するアイテムのカテゴリ
    u8 useGetItemCate;
    
    /// 消費HP割合
    /// 
    /// アイテム使用時、最大HP×この値だけ現在HPを減らす。不足している場合はアイテム使用不可
    f32 consumeHpRate;
    
    /// 使うとアイテム取得_ID
    /// 
    /// 使用時に取得するアイテムのID
    u32 useGetItemId;
    
    /// 使うとアイテム取得_個数
    /// 
    /// 使用時に取得するアイテムの個数
    u16 useGetItemNum;
    
    /// 使用不可条件状態変化タイプ0
    /// 
    /// この状態変化タイプの特殊効果がかかっている間は使用不可　※「なし」を指定した場合は無効
    u16 useLimitSpEffectType0;
    
    /// 使用不可条件状態変化タイプ1
    /// 
    /// この状態変化タイプの特殊効果がかかっている間は使用不可　※「なし」を指定した場合は無効
    u16 useLimitSpEffectType1;
    
    /// 使用不可条件状態変化タイプ2
    /// 
    /// この状態変化タイプの特殊効果がかかっている間は使用不可　※「なし」を指定した場合は無効
    u16 useLimitSpEffectType2;
    
    /// 使用不可条件状態変化タイプ3
    /// 
    /// この状態変化タイプの特殊効果がかかっている間は使用不可　※「なし」を指定した場合は無効
    u16 useLimitSpEffectType3;
    
    /// 使用不可条件状態変化タイプ4
    /// 
    /// この状態変化タイプの特殊効果がかかっている間は使用不可　※「なし」を指定した場合は無効
    u16 useLimitSpEffectType4;
    
    /// 予約領域
    dummy8 pad1[8];
    
};

struct CHR_PHYSICS_VELOCITY_CHANGE_ST {
    static constexpr const char* TYPE_NAME = "CHR_PHYSICS_VELOCITY_CHANGE_ST";
    
    /// 平面速度倍率
    /// 
    /// 現在のXZ平面速度をどれだけの割合残すか。1.0で現在の速度がそのまま残る。
    f32 horizontalVelocityScale;
    
    /// 鉛直速度倍率
    /// 
    /// 現在のY軸速度をどれだけの割合残すか。1.0で現在の速度がそのまま残る。
    f32 verticalVelocityScale;
    
    /// 平面速度変化[m/s]
    /// 
    /// この速度のベクトルを現フレームでキャラに与える。最終的な速度ベクトルは《平面速度倍率》で補正した現在の速度ベクトルとの合算で決まる。
    f32 horizontalVelocityChange;
    
    /// 鉛直速度変化[m/s]
    /// 
    /// この速度のベクトルを現フレームでキャラに与える。最終的な速度ベクトルは《鉛直速度倍率》で補正した現在の速度ベクトルとの合算で決まる。
    f32 verticalVelocityChange;
    
    /// 平面速度変化ベクトル方向[度]
    /// 
    /// キャラの正面を0度としたときの《平面速度変化[m/s]》のベクトル方向。
    f32 horizontalVelocityAngle;
    
    /// 削除済み項目
    dummy8 deleted0[1];
    
    /// 速度変化後の落下タイプ
    /// 
    /// この速度変化が適用された以降、指定した落下タイプで落下制御を行う。落下タイプは落下速度やスティック入力による微調整が可能かどうかに影響する。
    u8 fallType;
    
    /// ホーミングターゲットタイプ
    /// 
    /// 指定したタイプのターゲットが有効になっているなら、そのターゲットに到達するようキャラ物理ホーミングを行う。"なし"の場合はホーミングを行わない。
    u8 homingTargetType;
    
    /// パディング
    dummy8 pad0[1];
    
    /// ホーミングID
    /// 
    /// キャラ物理ホーミングパラメータの番号。
    u32 homingId;
    
    /// パディング
    dummy8 pad1[4];
    
};

struct GAME_SYSTEM_PARAM_ST {
    static constexpr const char* TYPE_NAME = "GAME_SYSTEM_PARAM_ST";
    
    /// 基本強靭度耐久値回復時間
    /// 
    /// 強靭度回復時間の基本値です。（秒）
    f32 BaseToughnessRecoverTime;
    
    /// キャラのイベント旋回アニメーション（左90°）
    /// 
    /// 「キャラの旋回」イベント用の左90°旋回アニメーションです。
    s32 ChrEventTrun_byLeft90;
    
    /// キャラのイベント旋回アニメーション（右90°）
    /// 
    /// 「キャラの旋回」イベント用の右90°旋回アニメーションです。
    s32 ChrEventTrun_byRight90;
    
    /// キャラのイベント旋回アニメーション（左180°）
    /// 
    /// 「キャラの旋回」イベント用の左180°旋回アニメーションです。
    s32 ChrEventTrun_byLeft180;
    
    /// キャラのイベント旋回アニメーション（右180°）
    /// 
    /// 「キャラの旋回」イベント用の右180°旋回アニメーションです。
    s32 ChrEventTrun_byRight180;
    
    /// キャラのイベント旋回90°アニメーション開始角度
    /// 
    /// 「キャラの旋回」イベント用の90°旋回アニメーションを適用する角度の開始角度。この角度より小さい角度でイベントが始まった場合は、システム旋回が行われます
    s16 ChrEventTrun_90TurnStartAngle;
    
    /// キャラのイベント旋回180°アニメーション開始角度
    /// 
    /// 「キャラの旋回」イベント用の180°旋回アニメーションを適用する角度の開始角度。
    s16 ChrEventTrun_180TurnStartAngle;
    
    /// 負債亡者度アイテムId
    /// 
    /// 負債亡者度の判定用アイテムのID。０以下だと無効値として負債を扱いません
    s32 DeptDeceasedItemId;
    
    /// はじかれ時ガード成功時ダメージカット率。最終ダメージに乗算
    f32 FlickDamageCutRateSuccessGurad;
    
    /// NPC会話のアニメ再生開始する差分角度
    /// 
    /// NPC会話の会話中モーションのアニメ再生開始する差分角度です。
    f32 NpcTalkAnimBeginDiffAngle;
    
    /// NPC会話のアニメ再生停止する差分角度
    /// 
    /// NPC会話の会話中モーションのアニメ再生停止する差分角度です。
    f32 NpcTalkAnimEndDiffAngle;
    
    /// 儀式死体化時特殊効果_任意
    /// 
    /// プレイヤーが装備している儀式剣から決定する儀式死体のときの特殊効果。
    s32 CultDeadSpEffectId_Optional;
    
    /// 儀式死体化時特殊効果_レベルアップ
    /// 
    /// レベルアップ儀式死体のときの特殊効果
    s32 CultDeadSpEffectId_LevelUp;
    
    /// 儀式死体化時特殊効果_ステータス振りなおし
    /// 
    /// ステータス振りなおし儀式死体のときの特殊効果
    s32 CultDeadSpEffectId_StatusReroll;
    
    /// 儀式死体化時特殊効果_亡者度リセット
    /// 
    /// 亡者度リセット儀式死体のときの特殊効果
    s32 CultDeadSpEffectId_DeadLevelReset;
    
    /// 儀式死体化時特殊効果_贖罪
    /// 
    /// 贖罪儀式死体のときの特殊効果
    s32 CultDeadSpEffectId_Atonement;
    
    /// 儀式死体化時特殊効果_NPC白霊召喚
    /// 
    /// NPC白霊召喚儀式死体のときの特殊効果
    s32 CultDeadSpEffectId_NpcWhiteGhost;
    
    /// 儀式死体化時特殊効果_ボム
    /// 
    /// ボム儀式死体のときの特殊効果
    s32 CultDeadSpEffectId_Bomb;
    
    /// 儀式死体化時特殊効果_侵入禁止
    /// 
    /// 侵入禁止儀式死体のときの特殊効果
    s32 CultDeadSpEffectId_NoInvasion;
    
    /// レベルアップ儀式剣のId
    /// 
    /// レベルアップ儀式に対応する儀式剣の道具ParamId
    s32 CultSwordItemId_LevelUp;
    
    /// ステータス振りなおし儀式剣のId
    /// 
    /// ステータス振りなおし儀式に対応する儀式剣の道具ParamId
    s32 CultSwordItemId_StatusReroll;
    
    /// 亡者度リセット儀式剣のId
    /// 
    /// 亡者度リセット儀式に対応する儀式剣の道具ParamId
    s32 CultSwordItemId_DeadLevelReset;
    
    /// 贖罪儀式剣のId
    /// 
    /// 贖罪儀式に対応する儀式剣の道具ParamId
    s32 CultSwordItemId_Atonement;
    
    /// NPC白霊召喚儀式剣のId
    /// 
    /// NPC白霊召喚儀式に対応する儀式剣の道具ParamId
    s32 CultSwordItemId_NpcWhiteGhost;
    
    /// ボム儀式剣のId
    /// 
    /// ボム儀式に対応する儀式剣の道具ParamId
    s32 CultSwordItemId_Bomb;
    
    /// 侵入禁止儀式剣のId
    /// 
    /// 侵入禁止儀式に対応する儀式剣の道具ParamId
    s32 CultSwordItemId_NoInvasion;
    
    /// レベルアップ儀式不可能ダイアログId
    /// 
    /// レベルアップ儀式が不可能な時に出るダイアログId
    s32 ImpossibleCultDialogId_LevelUp;
    
    /// ステータス振りなおし儀式不可能ダイアログId
    /// 
    /// ステータス振りなおし儀式が不可能な時に出るダイアログId
    s32 ImpossibleCultDialogId_StatusReroll;
    
    /// 亡者度リセット儀式不可能ダイアログId
    /// 
    /// 亡者度リセット儀式が不可能な時に出るダイアログId
    s32 ImpossibleCultDialogId_DeadLevelReset;
    
    /// 贖罪儀式不可能ダイアログId
    /// 
    /// 贖罪儀式が不可能な時に出るダイアログId
    s32 ImpossibleCultDialogId_Atonement;
    
    /// NPC白霊召喚（空席なし）儀式不可能ダイアログId
    /// 
    /// NPC白霊召喚（空席なし）儀式が不可能な時に出るダイアログId
    s32 ImpossibleCultDialogId_NpcWhiteGhost_MaxChr;
    
    /// NPC白霊召喚（エリア外）儀式不可能ダイアログId
    /// 
    /// NPC白霊召喚（エリア外）儀式が不可能な時に出るダイアログId
    s32 ImpossibleCultDialogId_NpcWhiteGhost_AreaOut;
    
    /// NPC白霊召喚（攻略済み）儀式不可能ダイアログId
    /// 
    /// NPC白霊召喚（攻略済み）儀式が不可能な時に出るダイアログId
    s32 ImpossibleCultDialogId_NpcWhiteGhost_AreaClear;
    
    /// ボム儀式不可能ダイアログId
    /// 
    /// ボム儀式が不可能な時に出るダイアログId
    s32 ImpossibleCultDialogId_Bomb;
    
    /// 侵入禁止儀式不可能ダイアログId
    /// 
    /// 侵入禁止儀式が不可能な時に出るダイアログId
    s32 ImpossibleCultDialogId_NoInvasion;
    
    /// 免罪対象になるNPCがいるか？イベントフラグId
    /// 
    /// 免罪対象になるNPCがいるかを持つイベントフラグId
    s32 AcquittalTargetNpcEventFlagId;
    
    /// 贖罪イベント起動イベントフラグId
    /// 
    /// 贖罪儀式を行ったことをイベントに通知するためのイベントフラグID
    s32 ActiveCultAtonementEventFlagId;
    
    /// 「HP最大以下で回復」特殊効果完了通知特殊効果ID
    /// 
    /// 「HP最大以下で回復」が完了したことを通知する特殊効果のID。主にマルチの同期用に使われる。
    s32 RecoverBelowMaxHpCompletionNoticeSpEffectId;
    
    /// HPエスト吸収演出SFXID
    /// 
    /// 侵入者撃破時などにHPエスト瓶の使用回数を回復する際の吸収演出SFXID
    s32 EstusFlaskRecovery_AbsorptionProductionSfxId_byHp;
    
    /// MPエスト吸収演出SFXID
    /// 
    /// 侵入者撃破時などにMPエスト瓶の使用回数を回復する際の吸収演出SFXID
    s32 EstusFlaskRecovery_AbsorptionProductionSfxId_byMp;
    
    /// 復活特殊効果発動判定用特殊効果ID
    /// 
    /// 復活特殊効果が発動したことを通知する特殊効果のID。主にマルチの同期用に使われる。
    s32 RespawnSpecialEffectActiveCheckerSpEffectId;
    
    /// 敵対霊撃破時取得ソウル補正値_ホスト
    /// 
    /// マルチプレイで敵対霊を撃破した時のホストの取得ソウル量の補正値
    f32 DefeatHostilityGhostOfSoulCorrectRate_byHost;
    
    /// 敵対霊撃破時取得ソウル補正値_協力霊
    /// 
    /// マルチプレイで敵対霊を撃破した時の協力霊の取得ソウル量の補正値
    f32 DefeatHostilityGhostOfSoulCorrectRate_byTeamGhost;
    
    /// マルチ時エネミー撃破時取得ソウル補正値_ホスト
    /// 
    /// マルチプレイで通常敵を撃破した時のホストの取得ソウル量の補正値
    f32 DefeatMultiModeEnemyOfSoulCorrectRate_byHost;
    
    /// マルチ時エネミー撃破時取得ソウル補正値_協力霊
    /// 
    /// マルチプレイで通常敵を撃破した時の協力霊の取得ソウル量の補正値
    f32 DefeatMultiModeEnemyOfSoulCorrectRate_byTeamGhost;
    
    /// マルチ時ボス撃破時取得ソウル補正値_ホスト
    /// 
    /// マルチプレイでボスを撃破した時のホストの取得ソウル量の補正値
    f32 DefeatMultiModeBossOfSoulCorrectRate_byHost;
    
    /// マルチ時ボス撃破時取得ソウル補正値_協力霊
    /// 
    /// マルチプレイでボスを撃破した時の協力霊の取得ソウル量の補正値
    f32 DefeatMultiModeBossOfSoulCorrectRate_byTeamGhost;
    
    /// 敵キャラのHPゲージが画面上に見切れないようにするためのオフセット
    /// 
    /// 敵のHPゲージが画面上に見切れた時に画面内に収めるオフセット値[pixel]（FullHD基準）
    u16 EnemyHpGaugeScreenOffset_byUp;
    
    /// 予約
    s16 Reserved46;
    
    /// 「敵探知」時弾丸発射位置ダミポリID
    /// 
    /// 探知弾丸の発射位置ダミポリID
    u16 EnemyDetectionSpEffect_ShootBulletDummypolyId;
    
    /// 「敵探知」時最大探知数
    /// 
    /// 同時に探知出来る敵の最大数（飛ばす弾丸の上限）
    u16 EnemyDetectionSpEffect_MaxDetectionNum;
    
    /// 「敵探知」時最大探知距離
    /// 
    /// 探知可能な最大距離
    f32 EnemyDetectionSpEffect_MaxDetectionLength;
    
    /// 「敵探知」時発射弾丸ID_協力ホスト
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID
    s32 EnemyDetectionSpEffect_BulletId_byCoopHost;
    
    /// 「敵探知」時発射弾丸ID_協力サイン_なし
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID
    s32 EnemyDetectionSpEffect_BulletId_byCoopSign_None;
    
    /// 「敵探知」時発射弾丸ID_協力サイン_太陽
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID
    s32 EnemyDetectionSpEffect_BulletId_byCoopSign_Umbasa;
    
    /// 「敵探知」時発射弾丸ID_協力サイン_バーサーカー
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID
    s32 EnemyDetectionSpEffect_BulletId_byCoopSign_Berserker;
    
    /// 「敵探知」時発射弾丸ID_協力サイン_罪人
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID
    s32 EnemyDetectionSpEffect_BulletId_byCoopSign_Sinners;
    
    /// 「敵探知」時発射弾丸ID_協力指輪_赤狩り
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID(マルチ自動発射でも使う)
    s32 EnemyDetectionSpEffect_BulletId_byCoopRing_RedHunter;
    
    /// 「敵探知」時発射弾丸ID_侵入オーブ_なし
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID(マルチ自動発射でも使う)
    s32 EnemyDetectionSpEffect_BulletId_byInvadeOrb_None;
    
    /// 「敵探知」時発射弾丸ID_侵入オーブ_太陽
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID
    s32 EnemyDetectionSpEffect_BulletId_byInvadeOrb_Umbasa;
    
    /// 「敵探知」時発射弾丸ID_侵入オーブ_バーサーカー
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID
    s32 EnemyDetectionSpEffect_BulletId_byInvadeOrb_Berserker;
    
    /// 「敵探知」時発射弾丸ID_侵入オーブ_罪人
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID
    s32 EnemyDetectionSpEffect_BulletId_byInvadeOrb_Sinners;
    
    /// 「敵探知」時発射弾丸ID_侵入サイン_なし
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID
    s32 EnemyDetectionSpEffect_BulletId_byInvadeSign_None;
    
    /// 「敵探知」時発射弾丸ID_侵入サイン_太陽
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID
    s32 EnemyDetectionSpEffect_BulletId_byInvadeSign_Umbasa;
    
    /// 「敵探知」時発射弾丸ID_侵入サイン_バーサーカー
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID
    s32 EnemyDetectionSpEffect_BulletId_byInvadeSign_Berserker;
    
    /// 「敵探知」時発射弾丸ID_侵入サイン_罪人
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID
    s32 EnemyDetectionSpEffect_BulletId_byInvadeSign_Sinners;
    
    /// 「敵探知」時発射弾丸ID_侵入指輪_罪人
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID
    s32 EnemyDetectionSpEffect_BulletId_byInvadeRing_Sinners;
    
    /// 「敵探知」時発射弾丸ID_侵入指輪_ボス守護者
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID
    s32 EnemyDetectionSpEffect_BulletId_byInvadeRing_GuardianOfBoss;
    
    /// 「敵探知」時発射弾丸ID_侵入指輪_マップ守護者
    /// 
    /// 敵の勢力/タイプによって飛ばす弾丸のID
    s32 EnemyDetectionSpEffect_BulletId_byInvadeRing_GuardianOfMap;
    
    /// 「死者の活性」特殊効果発動時弾丸ID
    /// 
    /// 「死者の活性」特殊効果が発動したときに発射する弾丸ID
    s32 ActivityOfDeadSpEffect_BulletId;
    
    /// 「死者の活性」特殊効果発動時弾丸発生位置ダミポリID
    /// 
    /// 「死者の活性」特殊効果が発動したときに弾丸が発生する位置のダミポリID
    s32 ActivityOfDeadSpEffect_ShootBulletDummypolyId;
    
    /// 「死者の活性」特殊効果発動時の死体のフェードアウト時間
    /// 
    /// 「死者の活性」特殊効果が発動したときに死体がフェードアウトする際のフェード時間
    f32 ActivityOfDeadSpEffect_DeadFadeOutTime;
    
    /// 投げ開始時のネットワーク情報による遷移を無視する時間
    f32 IgnorNetStateSyncTime_ForThrow;
    
    /// マルチプレペナルティ：LAN切断
    u16 NetPenaltyPointLanDisconnect;
    
    /// マルチプレペナルティ：プロフィールサインアウト
    u16 NetPenaltyPointProfileSignout;
    
    /// マルチプレペナルティ：電源断
    u16 NetPenaltyPointReboot;
    
    /// マルチプレペナルティ：サスペンド・一時停止
    u16 NetPnaltyPointSuspend;
    
    /// マルチプレペナルティ：理の骨の生成（販売）開始待ち時間(秒)
    f32 NetPenaltyForgiveItemLimitTime;
    
    /// マルチプレペナルティ：ペナルティ判定ポイント
    u16 NetPenaltyPointThreshold;
    
    /// 未操作判定時間
    /// 
    /// マルチで一定期間操作ない人を退出させるためのもの。単位は秒。
    u16 UncontrolledMoveThresholdTime;
    
    /// 「敵探知」時発射弾丸ID_敵対NPC/敵キャラ
    /// 
    /// 敵意の探知に失敗したときに敵対NPC/敵キャラに飛ばす弾丸のID
    s32 EnemyDetectionSpEffect_BulletId_byNpcEnemy;
    
    /// 「死者の活性ターゲット検索」対象にかける特殊効果ID
    /// 
    /// 検索した対象にかける特殊効果
    s32 ActivityOfDeadTargetSearchSpEffect_OnHitSpEffect;
    
    /// 「死者の活性ターゲット検索」距離
    /// 
    /// 検索可能最大距離
    f32 ActivityOfDeadTargetSearchSpEffect_MaxLength;
    
    /// 低FPSチェック_FPS条件
    f32 NetFpsCheck_fpsThreshold;
    
    /// 低FPSチェック_低FPS継続時間
    f32 NetFpsCheck_lowfpsTImeThreshold;
    
    /// ソロ侵入最大ポイント
    /// 
    /// ソロ侵入ポイントの最大値。この値を越えたときにソロで侵入されるようになる
    u32 SoloBreakInMaxPoint;
    
    /// NPC会話のボイス再生タイムアウト時間。この時間経過してもボイス再生が終わらない場合は次のメッセージへ進む
    f32 NpcTalkTimeOutThreshold;
    
    /// プレイログの送信間隔
    /// 
    /// アイテム使用ログ などをサーバーへ送信する間隔
    f32 SendPlayLogIntervalTime;
    
    /// 七色石の最大設置数
    u8 Item370_MaxSfxNum;
    
    /// 予約_83
    s8 Reserved_83;
    
    /// マルチ弱体化レベル補正係数１
    /// 
    /// マルチ時ステータス弱体化。ホストのレベル加算補正
    s16 SummonDataCoopMatchingLevelUpperAbs;
    
    /// マルチ弱体化レベル補正係数２
    /// 
    /// マルチ時ステータス弱体化。ホストのレベル倍率補正
    s16 SummonDataCoopMatchingLevelUpperRel;
    
    /// マルチ弱体化最大武器補正係数
    /// 
    /// マルチ時ステータス弱体化。最大武器強化レベル補正
    s16 SummonDataCoopMatchingWepLevelMul;
    
    /// バーサーカーサインを拾った時のまたたび効果用弾丸ID
    /// 
    /// サイン位置に特殊効果用の弾丸を発生させる際の弾丸ID
    s32 PickUpBerserkerSignSpEffectBulletId;
    
    /// バーサーカーがPC自力殺害に成功演出用特殊効果ID
    /// 
    /// バーサーカーがPC自力殺害に成功した際に専用の演出を再生する特殊効果
    s32 SucceedBerserkerSelfKillingEffectId;
    
    /// レベルシンク適用判定係数１白
    /// 
    /// レベルシンク適用するかどうかのソウルレベル係数
    u8 MachingLevelWhiteSignUpperRel;
    
    /// レベルシンク適用判定係数２白
    /// 
    /// レベルシンク適用するかどうかのソウルレベル係数
    u8 MachingLevelWhiteSignUpperAbs;
    
    /// レベルシンク適用判定係数１赤
    /// 
    /// レベルシンク適用するかどうかのソウルレベル係数
    u8 MachingLevelRedSignUpperRel;
    
    /// レベルシンク適用判定係数２赤
    /// 
    /// レベルシンク適用するかどうかのソウルレベル係数
    u8 MachingLevelRedSignUpperAbs;
    
    /// レベルシンク適用判定最大武器強化レベル係数０白
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperWhiteSign_0;
    
    /// レベルシンク適用判定最大武器強化レベル係数１白
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperWhiteSign_1;
    
    /// レベルシンク適用判定最大武器強化レベル係数２白
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperWhiteSign_2;
    
    /// レベルシンク適用判定最大武器強化レベル係数３白
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperWhiteSign_3;
    
    /// レベルシンク適用判定最大武器強化レベル係数４白
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperWhiteSign_4;
    
    /// レベルシンク適用判定最大武器強化レベル係数５白
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperWhiteSign_5;
    
    /// レベルシンク適用判定最大武器強化レベル係数６白
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperWhiteSign_6;
    
    /// レベルシンク適用判定最大武器強化レベル係数７白
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperWhiteSign_7;
    
    /// レベルシンク適用判定最大武器強化レベル係数８白
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperWhiteSign_8;
    
    /// レベルシンク適用判定最大武器強化レベル係数９白
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperWhiteSign_9;
    
    /// レベルシンク適用判定最大武器強化レベル係数１０白
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperWhiteSign_10;
    
    /// レベルシンク適用判定最大武器強化レベル係数０赤
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperRedSign_0;
    
    /// レベルシンク適用判定最大武器強化レベル係数１赤
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperRedSign_1;
    
    /// レベルシンク適用判定最大武器強化レベル係数２赤
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperRedSign_2;
    
    /// レベルシンク適用判定最大武器強化レベル係数３赤
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperRedSign_3;
    
    /// レベルシンク適用判定最大武器強化レベル係数４赤
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperRedSign_4;
    
    /// レベルシンク適用判定最大武器強化レベル係数５赤
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperRedSign_5;
    
    /// レベルシンク適用判定最大武器強化レベル係数６赤
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperRedSign_6;
    
    /// レベルシンク適用判定最大武器強化レベル係数７赤
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperRedSign_7;
    
    /// レベルシンク適用判定最大武器強化レベル係数８赤
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperRedSign_8;
    
    /// レベルシンク適用判定最大武器強化レベル係数９赤
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperRedSign_9;
    
    /// レベルシンク適用判定最大武器強化レベル係数１０赤
    /// 
    /// レベルシンク適用するかどうかの最大武器強化レベル係数
    u8 MachingWeaponLevelUpperRedSign_10;
    
    /// 予約_94
    s16 Reserved_94;
    
    /// グローバルイベントログの送信間隔
    /// 
    /// グローバルイベントログ をサーバーへ送信する間隔
    f32 SendGlobalEventLogIntervalTime;
    
    /// ソロ侵入ポイント加算値_白サイン
    u16 AddSoloBreakInPoint_White;
    
    /// ソロ侵入ポイント加算値_赤サイン
    u16 AddSoloBreakInPoint_Black;
    
    /// ソロ侵入ポイント加算値_乱入
    u16 AddSoloBreakInPoint_ForceJoin;
    
    /// ソロ侵入ポイント加算値_マップ守護訪問
    u16 AddSoloBreakInPoint_VisitorGuardian;
    
    /// ソロ侵入ポイント加算値_赤狩り訪問
    u16 AddSoloBreakInPoint_VisitorRedHunter;
    
    /// 予約_98
    s16 Reserved_98;
    
    /// 【赤狩り】ホストが白扉を通過した際にもらえるソウル率
    /// 
    /// ホストが白扉を通過した時に赤狩りがもらえるソウル=赤狩りが一つ前のLvから現在Lvになるために必要なソウル*この倍率
    f32 RedHunter_HostBossAreaGetSoulRate;
    
};

struct MENU_PARAM_COLOR_TABLE_ST {
    static constexpr const char* TYPE_NAME = "MENU_PARAM_COLOR_TABLE_ST";
    
    /// 赤色
    /// 
    /// カラーテーブルの赤色
    u8 r;
    
    /// 緑色
    /// 
    /// カラーテーブルの緑
    u8 g;
    
    /// 青色
    /// 
    /// カラーテーブルの青
    u8 b;
    
    /// アルファ
    /// 
    /// カラーテーブルのアルファ
    u8 a;
    
};

struct HIT_EFFECT_SFX_CONCEPT_PARAM_ST {
    static constexpr const char* TYPE_NAME = "HIT_EFFECT_SFX_CONCEPT_PARAM_ST";
    
    /// 鉄製：概念１
    s16 atkIron_1;
    
    /// 鉄製：概念２
    s16 atkIron_2;
    
    /// 炎：概念１
    s16 atkFire_1;
    
    /// 炎：概念２
    s16 atkFire_2;
    
    /// 木製：概念１
    s16 atkWood_1;
    
    /// 木製：概念２
    s16 atkWood_2;
    
    /// 肉：概念１
    s16 atkBody_1;
    
    /// 肉：概念２
    s16 atkBody_2;
    
    /// 蝕：概念１
    s16 atkEclipse_1;
    
    /// 蝕：概念２
    s16 atkEclipse_2;
    
    /// エネルギー：概念１
    s16 atkEnergy_1;
    
    /// エネルギー：概念２
    s16 atkEnergy_2;
    
    /// なし：概念１
    s16 atkNone_1;
    
    /// なし：概念２
    s16 atkNone_2;
    
    /// Dmy1：概念１（企画GDさんテスト用）
    s16 atkDmy1_1;
    
    /// Dmy1：概念２（企画GDさんテスト用）
    s16 atkDmy1_2;
    
    /// Dmy2：概念１（企画GDさんテスト用）
    s16 atkDmy2_1;
    
    /// Dmy2：概念２（企画GDさんテスト用）
    s16 atkDmy2_2;
    
    /// Dmy3：概念１（企画GDさんテスト用）
    s16 atkDmy3_1;
    
    /// Dmy3：概念２（企画GDさんテスト用）
    s16 atkDmy3_2;
    
    /// うじ：概念１
    s16 atkMaggot_1;
    
    /// うじ：概念２
    s16 atkMaggot_2;
    
    /// 蝋：概念１
    s16 atkWax_1;
    
    /// 蝋：概念２
    s16 atkWax_2;
    
    /// 炎上：概念１
    s16 atkFireFlame_1;
    
    /// 炎上：概念２
    s16 atkFireFlame_2;
    
    /// 蝕：気体：概念１
    s16 atkEclipseGas_1;
    
    /// 蝕：気体：概念２
    s16 atkEclipseGas_2;
    
    /// エネルギー（強）：概念１
    s16 atkEnergyStrong_1;
    
    /// エネルギー（強）：概念２
    s16 atkEnergyStrong_2;
    
    /// 予約領域
    dummy8 reserve[20];
    
};

struct QWC_JUDGE_PARAM_ST {
    static constexpr const char* TYPE_NAME = "QWC_JUDGE_PARAM_ST";
    
    /// PC-黒条件（下限）
    /// 
    /// PC白黒属性条件（下限）
    s16 pcJudgeUnderWB;
    
    /// PC-白条件（上限）
    /// 
    /// PC白黒属性条件（上限）
    s16 pcJudgeTopWB;
    
    /// PC-左条件（下限）
    /// 
    /// PC左右属性条件（下限）
    s16 pcJudgeUnderLR;
    
    /// PC-右条件（上限）
    /// 
    /// PC左右属性条件（上限）
    s16 pcJudgeTopLR;
    
    /// エリア-黒条件（下限）
    /// 
    /// エリア白黒属性条件（下限）
    s16 areaJudgeUnderWB;
    
    /// エリア-白条件（上限）
    /// 
    /// エリア白黒属性条件（上限）
    s16 areaJudgeTopWB;
    
    /// エリア-左条件（下限）
    /// 
    /// エリア左右属性条件（下限）
    s16 areaJudgeUnderLR;
    
    /// エリア-右条件（上限）
    /// 
    /// エリア左右属性条件（上限）
    s16 areaJudgeTopLR;
    
};

struct ATTACK_ELEMENT_CORRECT_PARAM_ST {
    static constexpr const char* TYPE_NAME = "ATTACK_ELEMENT_CORRECT_PARAM_ST";
    
    /// 筋力補正するか（物理）
    u8 isStrengthCorrect_byPhysics : 1;
    
    /// 技量補正するか（物理）
    u8 isDexterityCorrect_byPhysics : 1;
    
    /// 理力補正するか（物理）
    u8 isMagicCorrect_byPhysics : 1;
    
    /// 信仰補正するか（物理）
    u8 isFaithCorrect_byPhysics : 1;
    
    /// 運補正するか（物理）
    u8 isLuckCorrect_byPhysics : 1;
    
    /// 筋力補正するか（魔法）
    u8 isStrengthCorrect_byMagic : 1;
    
    /// 技量補正するか（魔法）
    u8 isDexterityCorrect_byMagic : 1;
    
    /// 理力補正するか（魔法）
    u8 isMagicCorrect_byMagic : 1;
    
    /// 信仰補正するか（魔法）
    u8 isFaithCorrect_byMagic : 1;
    
    /// 運補正するか（魔法）
    u8 isLuckCorrect_byMagic : 1;
    
    /// 筋力補正するか（炎）
    u8 isStrengthCorrect_byFire : 1;
    
    /// 技量補正するか（炎）
    u8 isDexterityCorrect_byFire : 1;
    
    /// 理力補正するか（炎）
    u8 isMagicCorrect_byFire : 1;
    
    /// 信仰補正するか（炎）
    u8 isFaithCorrect_byFire : 1;
    
    /// 運補正するか（炎）
    u8 isLuckCorrect_byFire : 1;
    
    /// 筋力補正するか（雷）
    u8 isStrengthCorrect_byThunder : 1;
    
    /// 技量補正するか（雷）
    u8 isDexterityCorrect_byThunder : 1;
    
    /// 理力補正するか（雷）
    u8 isMagicCorrect_byThunder : 1;
    
    /// 信仰補正するか（雷）
    u8 isFaithCorrect_byThunder : 1;
    
    /// 運補正するか（雷）
    u8 isLuckCorrect_byThunder : 1;
    
    /// 筋力補正するか（闇）
    u8 isStrengthCorrect_byDark : 1;
    
    /// 技量補正するか（闇）
    u8 isDexterityCorrect_byDark : 1;
    
    /// 理力補正するか（闇）
    u8 isMagicCorrect_byDark : 1;
    
    /// 信仰補正するか（闇）
    u8 isFaithCorrect_byDark : 1;
    
    /// 運補正するか（闇）
    u8 isLuckCorrect_byDark : 1;
    
    /// パディング
    dummy8 pad1 : 7;
    
    /// 筋力補正値上書き（物理）
    s16 overwriteStrengthCorrectRate_byPhysics;
    
    /// 技量補正値上書き（物理）
    s16 overwriteDexterityCorrectRate_byPhysics;
    
    /// 理力補正値上書き（物理）
    s16 overwriteMagicCorrectRate_byPhysics;
    
    /// 信仰補正値上書き（物理）
    s16 overwriteFaithCorrectRate_byPhysics;
    
    /// 運補正値上書き（物理）
    s16 overwriteLuckCorrectRate_byPhysics;
    
    /// 筋力補正値上書き（魔法）
    s16 overwriteStrengthCorrectRate_byMagic;
    
    /// 技量補正値上書き（魔法）
    s16 overwriteDexterityCorrectRate_byMagic;
    
    /// 理力補正値上書き（魔法）
    s16 overwriteMagicCorrectRate_byMagic;
    
    /// 信仰補正値上書き（魔法）
    s16 overwriteFaithCorrectRate_byMagic;
    
    /// 運補正値上書き（魔法）
    s16 overwriteLuckCorrectRate_byMagic;
    
    /// 筋力補正値上書き（炎）
    s16 overwriteStrengthCorrectRate_byFire;
    
    /// 技量補正値上書き（炎）
    s16 overwriteDexterityCorrectRate_byFire;
    
    /// 理力補正値上書き（炎）
    s16 overwriteMagicCorrectRate_byFire;
    
    /// 信仰補正値上書き（炎）
    s16 overwriteFaithCorrectRate_byFire;
    
    /// 運補正値上書き（炎）
    s16 overwriteLuckCorrectRate_byFire;
    
    /// 筋力補正値上書き（雷）
    s16 overwriteStrengthCorrectRate_byThunder;
    
    /// 技量補正値上書き（雷）
    s16 overwriteDexterityCorrectRate_byThunder;
    
    /// 理力補正値上書き（雷）
    s16 overwriteMagicCorrectRate_byThunder;
    
    /// 信仰補正値上書き（雷）
    s16 overwriteFaithCorrectRate_byThunder;
    
    /// 運補正値上書き（雷）
    s16 overwriteLuckCorrectRate_byThunder;
    
    /// 筋力補正値上書き（闇）
    s16 overwriteStrengthCorrectRate_byDark;
    
    /// 技量補正値上書き（闇）
    s16 overwriteDexterityCorrectRate_byDark;
    
    /// 理力補正値上書き（闇）
    s16 overwriteMagicCorrectRate_byDark;
    
    /// 信仰補正値上書き（闇）
    s16 overwriteFaithCorrectRate_byDark;
    
    /// 運補正値上書き（闇）
    s16 overwriteLuckCorrectRate_byDark;
    
    /// 筋力補正値影響率（物理）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceStrengthCorrectRate_byPhysics;
    
    /// 技量補正値影響率（物理）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceDexterityCorrectRate_byPhysics;
    
    /// 理力補正値影響率（物理）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceMagicCorrectRate_byPhysics;
    
    /// 信仰補正値影響率（物理）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceFaithCorrectRate_byPhysics;
    
    /// 運補正値影響率（物理）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceLuckCorrectRate_byPhysics;
    
    /// 筋力補正値影響率（魔法）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceStrengthCorrectRate_byMagic;
    
    /// 技量補正値影響率（魔法）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceDexterityCorrectRate_byMagic;
    
    /// 理力補正値影響率（魔法）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceMagicCorrectRate_byMagic;
    
    /// 信仰補正値影響率（魔法）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceFaithCorrectRate_byMagic;
    
    /// 運補正値影響率（魔法）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceLuckCorrectRate_byMagic;
    
    /// 筋力補正値影響率（炎）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceStrengthCorrectRate_byFire;
    
    /// 技量補正値影響率（炎）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceDexterityCorrectRate_byFire;
    
    /// 理力補正値影響率（炎）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceMagicCorrectRate_byFire;
    
    /// 信仰補正値影響率（炎）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceFaithCorrectRate_byFire;
    
    /// 運補正値影響率（炎）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceLuckCorrectRate_byFire;
    
    /// 筋力補正値影響率（雷）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceStrengthCorrectRate_byThunder;
    
    /// 技量補正値影響率（雷）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceDexterityCorrectRate_byThunder;
    
    /// 理力補正値影響率（雷）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceMagicCorrectRate_byThunder;
    
    /// 信仰補正値影響率（雷）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceFaithCorrectRate_byThunder;
    
    /// 運補正値影響率（雷）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceLuckCorrectRate_byThunder;
    
    /// 筋力補正値影響率（闇）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceStrengthCorrectRate_byDark;
    
    /// 技量補正値影響率（闇）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceDexterityCorrectRate_byDark;
    
    /// 理力補正値影響率（闇）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceMagicCorrectRate_byDark;
    
    /// 信仰補正値影響率（闇）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceFaithCorrectRate_byDark;
    
    /// 運補正値影響率（闇）
    /// 
    /// 補正率の影響割合。
    s16 InfluenceLuckCorrectRate_byDark;
    
    /// パディング
    dummy8 pad2[24];
    
};

struct ENV_LIGHT_TEX_BANK {
    static constexpr const char* TYPE_NAME = "ENV_LIGHT_TEX_BANK";
    
    /// 使用するか
    /// 
    /// 0:しない, 1:する
    s8 isUse;
    
    /// 自動更新するか
    /// 
    /// 0:しない, 1:する
    s8 autoUpdate;
    
    /// パディング
    /// 
    /// ダミー
    dummy8 pad_0[12];
    
    /// RGB逆倍率[％]
    /// 
    /// 全ての光源色にこの値の逆数を掛けます
    s16 invMulCol;
    
    /// リソース名ID
    /// 
    /// [DIF0] テクスチャファイル名のID(-1:なし)
    s16 resNameId_Dif0;
    
    /// RGB逆倍率[％]
    /// 
    /// [DIF0] 光源色にこの値の逆数を掛けます
    s16 invMulCol_Dif0;
    
    /// スペキュラ次数
    /// 
    /// [DIF0] スペキュラ次数
    f32 sepcPow_Dif0;
    
    /// パディング
    /// 
    /// [DIF0]  ダミー
    dummy8 pad_Dif0[8];
    
    /// リソース名ID
    /// 
    /// [SPC0] テクスチャファイル名のID(-1:なし)
    s16 resNameId_Spc0;
    
    /// RGB逆倍率[％]
    /// 
    /// [SPC0] 光源色にこの値の逆数を掛けます
    s16 invMulCol_Spc0;
    
    /// スペキュラ次数
    /// 
    /// [SPC0] スペキュラ次数
    f32 sepcPow_Spc0;
    
    /// パディング
    /// 
    /// [SPC0]  ダミー
    dummy8 pad_Spc0[8];
    
    /// リソース名ID
    /// 
    /// [SPC1] テクスチャファイル名のID(-1:なし)
    s16 resNameId_Spc1;
    
    /// RGB逆倍率[％]
    /// 
    /// [SPC1] 光源色にこの値の逆数を掛けます
    s16 invMulCol_Spc1;
    
    /// スペキュラ次数
    /// 
    /// [SPC1] スペキュラ次数
    f32 sepcPow_Spc1;
    
    /// パディング
    /// 
    /// [SPC1]  ダミー
    dummy8 pad_Spc1[8];
    
    /// リソース名ID
    /// 
    /// [SPC2] テクスチャファイル名のID(-1:なし)
    s16 resNameId_Spc2;
    
    /// RGB逆倍率[％]
    /// 
    /// [SPC2] 光源色にこの値の逆数を掛けます
    s16 invMulCol_Spc2;
    
    /// スペキュラ次数
    /// 
    /// [SPC2] スペキュラ次数
    f32 sepcPow_Spc2;
    
    /// パディング
    /// 
    /// [SPC2]  ダミー
    dummy8 pad_Spc2[8];
    
    /// リソース名ID
    /// 
    /// [SPC3] テクスチャファイル名のID(-1:なし)
    s16 resNameId_Spc3;
    
    /// RGB逆倍率[％]
    /// 
    /// [SPC3] 光源色にこの値の逆数を掛けます
    s16 invMulCol_Spc3;
    
    /// スペキュラ次数
    /// 
    /// [SPC3] スペキュラ次数
    f32 sepcPow_Spc3;
    
    /// パディング
    /// 
    /// [SPC3]  ダミー
    dummy8 pad_Spc3[8];
    
    /// X角度
    /// 
    /// 平行光源：００
    s16 degRotX_00;
    
    /// Ｙ角度
    /// 
    /// 平行光源：００
    s16 degRotY_00;
    
    /// Ｒ
    /// 
    /// 平行光源：００
    s16 colR_00;
    
    /// Ｇ
    /// 
    /// 平行光源：００
    s16 colG_00;
    
    /// Ｂ
    /// 
    /// 平行光源：００
    s16 colB_00;
    
    /// RGB倍率[％]
    /// 
    /// 平行光源：００ (0:未使用)
    s16 colA_00;
    
    /// パディング
    /// 
    /// 平行光源：００
    dummy8 pad_00[4];
    
    /// X角度
    /// 
    /// 平行光源：０１
    s16 degRotX_01;
    
    /// Ｙ角度
    /// 
    /// 平行光源：０１
    s16 degRotY_01;
    
    /// Ｒ
    /// 
    /// 平行光源：０１
    s16 colR_01;
    
    /// Ｇ
    /// 
    /// 平行光源：０１
    s16 colG_01;
    
    /// Ｂ
    /// 
    /// 平行光源：０１
    s16 colB_01;
    
    /// RGB倍率[％]
    /// 
    /// 平行光源：０１ (0:未使用)
    s16 colA_01;
    
    /// パディング
    /// 
    /// 平行光源：０１
    dummy8 pad_01[4];
    
    /// X角度
    /// 
    /// 平行光源：０２
    s16 degRotX_02;
    
    /// Ｙ角度
    /// 
    /// 平行光源：０２
    s16 degRotY_02;
    
    /// Ｒ
    /// 
    /// 平行光源：０２
    s16 colR_02;
    
    /// Ｇ
    /// 
    /// 平行光源：０２
    s16 colG_02;
    
    /// Ｂ
    /// 
    /// 平行光源：０２
    s16 colB_02;
    
    /// RGB倍率[％]
    /// 
    /// 平行光源：０２ (0:未使用)
    s16 colA_02;
    
    /// パディング
    /// 
    /// 平行光源：０２
    dummy8 pad_02[4];
    
    /// X角度
    /// 
    /// 平行光源：０３
    s16 degRotX_03;
    
    /// Ｙ角度
    /// 
    /// 平行光源：０３
    s16 degRotY_03;
    
    /// Ｒ
    /// 
    /// 平行光源：０３
    s16 colR_03;
    
    /// Ｇ
    /// 
    /// 平行光源：０３
    s16 colG_03;
    
    /// Ｂ
    /// 
    /// 平行光源：０３
    s16 colB_03;
    
    /// RGB倍率[％]
    /// 
    /// 平行光源：０３ (0:未使用)
    s16 colA_03;
    
    /// パディング
    /// 
    /// 平行光源：０３
    dummy8 pad_03[4];
    
    /// X角度
    /// 
    /// 平行光源：０４
    s16 degRotX_04;
    
    /// Ｙ角度
    /// 
    /// 平行光源：０４
    s16 degRotY_04;
    
    /// Ｒ
    /// 
    /// 平行光源：０４
    s16 colR_04;
    
    /// Ｇ
    /// 
    /// 平行光源：０４
    s16 colG_04;
    
    /// Ｂ
    /// 
    /// 平行光源：０４
    s16 colB_04;
    
    /// RGB倍率[％]
    /// 
    /// 平行光源：０４ (0:未使用)
    s16 colA_04;
    
    /// パディング
    /// 
    /// 平行光源：０４
    dummy8 pad_04[4];
    
    /// X角度
    /// 
    /// 平行光源：０５
    s16 degRotX_05;
    
    /// Ｙ角度
    /// 
    /// 平行光源：０５
    s16 degRotY_05;
    
    /// Ｒ
    /// 
    /// 平行光源：０５
    s16 colR_05;
    
    /// Ｇ
    /// 
    /// 平行光源：０５
    s16 colG_05;
    
    /// Ｂ
    /// 
    /// 平行光源：０５
    s16 colB_05;
    
    /// RGB倍率[％]
    /// 
    /// 平行光源：０５ (0:未使用)
    s16 colA_05;
    
    /// パディング
    /// 
    /// 平行光源：０５
    dummy8 pad_05[4];
    
    /// X角度
    /// 
    /// 平行光源：０６
    s16 degRotX_06;
    
    /// Ｙ角度
    /// 
    /// 平行光源：０６
    s16 degRotY_06;
    
    /// Ｒ
    /// 
    /// 平行光源：０６
    s16 colR_06;
    
    /// Ｇ
    /// 
    /// 平行光源：０６
    s16 colG_06;
    
    /// Ｂ
    /// 
    /// 平行光源：０６
    s16 colB_06;
    
    /// RGB倍率[％]
    /// 
    /// 平行光源：０６ (0:未使用)
    s16 colA_06;
    
    /// パディング
    /// 
    /// 平行光源：０６
    dummy8 pad_06[4];
    
    /// X角度
    /// 
    /// 平行光源：０７
    s16 degRotX_07;
    
    /// Ｙ角度
    /// 
    /// 平行光源：０７
    s16 degRotY_07;
    
    /// Ｒ
    /// 
    /// 平行光源：０７
    s16 colR_07;
    
    /// Ｇ
    /// 
    /// 平行光源：０７
    s16 colG_07;
    
    /// Ｂ
    /// 
    /// 平行光源：０７
    s16 colB_07;
    
    /// RGB倍率[％]
    /// 
    /// 平行光源：０７ (0:未使用)
    s16 colA_07;
    
    /// パディング
    /// 
    /// 平行光源：０７
    dummy8 pad_07[4];
    
    /// X角度
    /// 
    /// 平行光源：０８
    s16 degRotX_08;
    
    /// Ｙ角度
    /// 
    /// 平行光源：０８
    s16 degRotY_08;
    
    /// Ｒ
    /// 
    /// 平行光源：０８
    s16 colR_08;
    
    /// Ｇ
    /// 
    /// 平行光源：０８
    s16 colG_08;
    
    /// Ｂ
    /// 
    /// 平行光源：０８
    s16 colB_08;
    
    /// RGB倍率[％]
    /// 
    /// 平行光源：０８ (0:未使用)
    s16 colA_08;
    
    /// パディング
    /// 
    /// 平行光源：０８
    dummy8 pad_08[4];
    
    /// X角度
    /// 
    /// 平行光源：０９
    s16 degRotX_09;
    
    /// Ｙ角度
    /// 
    /// 平行光源：０９
    s16 degRotY_09;
    
    /// Ｒ
    /// 
    /// 平行光源：０９
    s16 colR_09;
    
    /// Ｇ
    /// 
    /// 平行光源：０９
    s16 colG_09;
    
    /// Ｂ
    /// 
    /// 平行光源：０９
    s16 colB_09;
    
    /// RGB倍率[％]
    /// 
    /// 平行光源：０９ (0:未使用)
    s16 colA_09;
    
    /// パディング
    /// 
    /// 平行光源：０９
    dummy8 pad_09[4];
    
};

struct TONE_MAP_BANK {
    static constexpr const char* TYPE_NAME = "TONE_MAP_BANK";
    
    /// 近傍ブルーム閾値[％]
    /// 
    /// 輝度が閾値を越えるとにじみ始めます（近傍）
    s8 bloomBegin;
    
    /// 近傍ブルーム倍率[％]
    /// 
    /// 閾値以上の値に掛ける値です(0でにじまなくなります)（近傍）
    s8 bloomMul;
    
    /// 遠方ブルーム閾値[％]
    /// 
    /// 輝度が閾値を越えるとにじみ始めます（遠方）
    s8 bloomBeginFar;
    
    /// 遠方ブルーム倍率[％]
    /// 
    /// 閾値以上の値に掛ける値です(0でにじまなくなります)（遠方）
    s8 bloomMulFar;
    
    /// ブルーム近傍距離
    /// 
    /// この距離まで近傍のパラメータが適用されます。(m)
    f32 bloomNearDist;
    
    /// ブルーム遠方距離
    /// 
    /// この距離から遠方のパラメータが適用されます。(m)
    f32 bloomFarDist;
    
    /// トーンマップの基準値
    /// 
    /// この値が大きいと画面が明るくなり小さいと画面が暗くなります
    f32 grayKeyValue;
    
    /// 最小適応輝度
    /// 
    /// 値を小さくすると暗い場所に適応して見えるようになります
    f32 minAdaptedLum;
    
    /// 最大適応輝度
    /// 
    /// 値を大きくすると明るい場所に適応して見えるようになります
    f32 maxAdapredLum;
    
    /// 適応速度
    /// 
    /// 値を大きくする明順応、暗順応の速度が速くなります
    f32 adaptSpeed;
    
    /// ライトシャフト閾値[％]
    /// 
    /// 輝度が閾値を越えると光の筋がでます
    s8 lightShaftBegin;
    
    /// パディング
    /// 
    /// ダミー
    dummy8 pad_0[3];
    
    /// ライトシャフトの強さです。(0で消えます)
    f32 lightShaftPower;
    
    /// ライトシャフトの減衰率です。小さくすると短くなります
    f32 lightShaftAttenRate;
    
};

struct DIRECTION_CAMERA_PARAM_ST {
    static constexpr const char* TYPE_NAME = "DIRECTION_CAMERA_PARAM_ST";
    
    /// オプションの影響を受けるか
    /// 
    /// 演出カメラON/OFFオプションの影響を受けるか？
    u8 isUseOption : 1;
    
    /// パッド
    /// 
    /// pad
    dummy8 pad2 : 3;
    
    /// パッド
    /// 
    /// pad
    dummy8 pad1[15];
    
};

struct REINFORCE_PARAM_WEAPON_ST {
    static constexpr const char* TYPE_NAME = "REINFORCE_PARAM_WEAPON_ST";
    
    /// 物理攻撃力基本値
    /// 
    /// 物理攻撃力の補正値
    f32 physicsAtkRate;
    
    /// 魔法攻撃力基本値
    /// 
    /// 魔法攻撃力の補正値
    f32 magicAtkRate;
    
    /// 炎攻撃力基本値
    /// 
    /// 炎攻撃力の補正値
    f32 fireAtkRate;
    
    /// 電撃攻撃力基本値
    /// 
    /// 電撃攻撃力の補正値
    f32 thunderAtkRate;
    
    /// スタミナ攻撃力の補正値
    f32 staminaAtkRate;
    
    /// SA武器攻撃力
    /// 
    /// スーパーアーマー武器攻撃色の補正値
    f32 saWeaponAtkRate;
    
    /// SA耐久値
    /// 
    /// SA耐久力の補正値
    f32 saDurabilityRate;
    
    /// 筋力補正の補正値
    f32 correctStrengthRate;
    
    /// 俊敏補正の補正値
    f32 correctAgilityRate;
    
    /// 魔力補正の補正値
    f32 correctMagicRate;
    
    /// 信仰補正の補正値
    f32 correctFaithRate;
    
    /// ガード時物理攻撃カット率の補正値
    f32 physicsGuardCutRate;
    
    /// ガード時魔法攻撃カット率の補正値
    f32 magicGuardCutRate;
    
    /// ガード時炎攻撃カット率の補正値
    f32 fireGuardCutRate;
    
    /// ガード時電撃攻撃カット率の補正値
    f32 thunderGuardCutRate;
    
    /// ガード時毒攻撃カット率の補正値
    f32 poisonGuardResistRate;
    
    /// ガード時疫病攻撃カット率の補正値
    f32 diseaseGuardResistRate;
    
    /// ガード時出血攻撃カット率の補正値
    f32 bloodGuardResistRate;
    
    /// ガード時呪攻撃カット率
    /// 
    /// ガード時呪い攻撃カット率の補正値
    f32 curseGuardResistRate;
    
    /// ガード時スタミナ防御力の補正値
    f32 staminaGuardDefRate;
    
    /// 特殊効果ID1の加算補正値
    u8 spEffectId1;
    
    /// 特殊効果ID2の加算補正値
    u8 spEffectId2;
    
    /// 特殊効果ID3の加算補正値
    u8 spEffectId3;
    
    /// 常駐特殊効果ID1の加算補正値
    u8 residentSpEffectId1;
    
    /// 常駐特殊効果ID2の加算補正値
    u8 residentSpEffectId2;
    
    /// 常駐特殊効果ID3の加算補正値
    u8 residentSpEffectId3;
    
    /// 素材ID加算値
    /// 
    /// 素材パラメータIDの加算補正値
    u8 materialSetId;
    
    /// 最大強化武器レベル用レベル値
    u8 maxReinforceLevel;
    
    /// 闇攻撃力基本値
    /// 
    /// 闇攻撃力の補正値
    f32 darkAtkRate;
    
    /// ガード時闇攻撃カット率の補正値
    f32 darkGuardCutRate;
    
    /// 運補正の補正値
    f32 correctLuckRate;
    
    /// ガード時冷気カット率
    /// 
    /// ガード時冷気攻撃カット率の補正値
    f32 freezeGuardDefRate;
    
    /// 強化価格補正値
    /// 
    /// 武器パラメータの強化価格に乗算する補正値
    f32 reinforcePriceRate;
    
    /// 進化価格補正値
    /// 
    /// 武器パラメータの進化価格に乗算する補正値
    f32 baseChangePriceRate;
    
    /// 受動スタミナ攻撃力
    /// 
    /// ジャスガ時のスタミナ攻撃力の倍率
    f32 passiveStaminaAtkRate;
    
    /// pading
    dummy8 pad[12];
    
};

struct CS_DOF_QUALITY_DETAIL {
    static constexpr const char* TYPE_NAME = "CS_DOF_QUALITY_DETAIL";
    
    /// DOF許可
    u8 enabled;
    
    dummy8 dmy[3];
    
    /// HiResolutionBlur の設定を変更する(-1:強制オフ、0:そのまま、1:強制オン)
    s32 forceHiResoBlur;
    
    /// 最大ブラーレベル。2:最大、1:レベルを一段落とす、0:さらに精度を落とす
    s32 maxBlurLevel;
    
};

struct CEREMONY_PARAM_ST {
    static constexpr const char* TYPE_NAME = "CEREMONY_PARAM_ST";
    
    /// イベントレイヤーID
    /// 
    /// イベントメーカーのレイヤーID
    s32 eventLayerId;
    
    /// MapStudioレイヤーID
    /// 
    /// MapStudioのレイヤーID
    s32 mapStudioLayerId;
    
    /// GparamID
    /// 
    /// レイヤーに適用するGparamID
    u16 gparamId;
    
    /// 上書きGparamID
    /// 
    /// レイヤーに適用する上書きGparamID
    u16 overrideGparamId;
    
    /// ポイントクラウドID
    /// 
    /// レイヤーに適用するポイントクラウドID
    s32 pointCloudId;
    
    /// GIテクスチャID
    /// 
    /// レイヤーに適用するGIテクスチャID
    s32 giTextureId;
    
    /// 動的ライトグループID
    /// 
    /// マップに配置されている動的光源のライトグループＩＤです。
    s32 bakeToolLightId;
    
    /// リロードするか?
    /// 
    /// レイヤー切り替え時に、マップのリロードを行うかどうかのフラグ。(○=する、×=しない)
    u8 isReload : 1;
    
    dummy8 pad1 : 7;
    
    /// プレイ領域オフセット
    /// 
    /// プレイ領域ID「AABYPP」の Y の部分。
    u8 playRegionOffset;
    
    dummy8 pad2[10];
    
};

struct ENEMY_COMMOM_PARAM_ST {
    static constexpr const char* TYPE_NAME = "ENEMY_COMMOM_PARAM_ST";
    
    /// TARGET_ENE_0がはしご中でこの高さ[m]以内なら忘れない
    /// 
    /// TARGET_ENE_0がはしご中の時に敵自身との高さの差がこの数値以内ならターゲットを忘れない
    f32 TargetNoForget_TargetEne0_LadderHeight;
    
    /// 床インテグレート時天井高さ判定を許可するPCからの距離
    /// 
    /// ローカルプレイヤーからの距離がこの距離以下のときだけ、床インテグレートの持ち上げ高さを天井の高さを考慮して求めるように強化する。
    f32 IsIntegrateWithRaycast_CheckRoofLength;
    
    /// 予約
    s32 Reserved02;
    
    /// 予約
    s32 Reserved03;
    
    /// 予約
    s32 Reserved04;
    
    /// 予約
    s32 Reserved05;
    
    /// 予約
    s32 Reserved06;
    
    /// 予約
    s32 Reserved07;
    
    /// 予約
    s32 Reserved08;
    
    /// 予約
    s32 Reserved09;
    
    /// 予約
    s32 Reserved10;
    
    /// 予約
    s32 Reserved11;
    
    /// 予約
    s32 Reserved12;
    
    /// 予約
    s32 Reserved13;
    
    /// 予約
    s32 Reserved14;
    
    /// 予約
    s32 Reserved15;
    
    /// 予約
    s32 Reserved16;
    
    /// 予約
    s32 Reserved17;
    
    /// 予約
    s32 Reserved18;
    
    /// 予約
    s32 Reserved19;
    
    /// 予約
    s32 Reserved20;
    
    /// 予約
    s32 Reserved21;
    
    /// 予約
    s32 Reserved22;
    
    /// 予約
    s32 Reserved23;
    
    /// 予約
    s32 Reserved24;
    
    /// 予約
    s32 Reserved25;
    
    /// 予約
    s32 Reserved26;
    
    /// 予約
    s32 Reserved27;
    
    /// 予約
    s32 Reserved28;
    
    /// 予約
    s32 Reserved29;
    
    /// 予約
    s32 Reserved30;
    
    /// 予約
    s32 Reserved31;
    
    /// 予約
    s32 Reserved32;
    
    /// 予約
    s32 Reserved33;
    
    /// 予約
    s32 Reserved34;
    
    /// 予約
    s32 Reserved35;
    
    /// 予約
    s32 Reserved36;
    
    /// 予約
    s32 Reserved37;
    
    /// 予約
    s32 Reserved38;
    
    /// 予約
    s32 Reserved39;
    
    /// 予約
    s32 Reserved40;
    
    /// 予約
    s32 Reserved41;
    
    /// 予約
    s32 Reserved42;
    
    /// 予約
    s32 Reserved43;
    
    /// 予約
    s32 Reserved44;
    
    /// 予約
    s32 Reserved45;
    
    /// 予約
    s32 Reserved46;
    
    /// 予約
    s32 Reserved47;
    
    /// 予約
    s32 Reserved48;
    
    /// 予約
    s32 Reserved49;
    
    /// 予約
    s32 Reserved50;
    
    /// 予約
    s32 Reserved51;
    
    /// 予約
    s32 Reserved52;
    
    /// 予約
    s32 Reserved53;
    
    /// 予約
    s32 Reserved54;
    
    /// 予約
    s32 Reserved55;
    
    /// 予約
    s32 Reserved56;
    
    /// 予約
    s32 Reserved57;
    
    /// 予約
    s32 Reserved58;
    
    /// 予約
    s32 Reserved59;
    
    /// 予約
    s32 Reserved60;
    
    /// 予約
    s32 Reserved61;
    
    /// 予約
    s32 Reserved62;
    
    /// 予約
    s32 Reserved63;
    
};

struct ACTIONBUTTON_PARAM_ST {
    static constexpr const char* TYPE_NAME = "ACTIONBUTTON_PARAM_ST";
    
    /// 範囲タイプ
    /// 
    /// 範囲形状(円柱、角柱、カプセル柱)
    u8 regionType;
    
    /// パディング1
    dummy8 padding1[3];
    
    /// ダミポリ1
    /// 
    /// 範囲の底面の中心となるダミポリIDを指定する　ダミポリがない場合 or -1が入力されている場合は、中心座標が基準になる
    s32 dummyPoly1;
    
    /// ダミポリ2
    /// 
    /// 範囲タイプがカプセル柱の場合のみ使用　ダミポリ2つで線分を作る追加ダミポリ(カプセル柱)
    s32 dummyPoly2;
    
    /// 半径(円柱・カプセル柱)
    f32 radius;
    
    /// 角度(円柱)
    s32 angle;
    
    /// 奥行き(角柱)
    f32 depth;
    
    /// 幅(角柱)
    f32 width;
    
    /// 高さ(円柱・角柱・カプセル柱)
    f32 height;
    
    /// 底面高さオフセット
    /// 
    /// 底面のY座標をどれだけ上下させるか
    f32 baseHeightOffset;
    
    /// 角度差判定タイプ(円柱・角柱)
    u8 angleCheckType;
    
    /// パディング2
    /// 
    /// 角度差判定タイプ(点・線)
    dummy8 padding2[3];
    
    /// 許容角度差
    s32 allowAngle;
    
    /// テキストボックスタイプ
    u8 textBoxType;
    
    /// 遮蔽判定タイプ
    u8 raycastType;
    
    /// パディング3
    dummy8 padding3[2];
    
    /// テキストID
    /// 
    /// 表示するテキストID
    s32 textId;
    
    /// 無効フラグ
    /// 
    /// このフラグがONだとアクションボタンが出ず、判定も行われない
    s32 invalidFlag;
    
    /// グレーアウトフラグ
    /// 
    /// このフラグがONだとアクションボタンがグレーアウトし、判定も行われない
    s32 grayoutFlag;
    
    /// 重なり時優先度
    /// 
    /// 複数のアクションボタンが重なっていた場合の優先度(0～99、0に近い程優先)
    s32 priority;
    
    /// 実行後無効時間(-値で無限)
    f32 execInvalidTime;
    
    /// 実行判定用グループID（Behavior参照）
    /// 
    /// actからグループ単位で有効にするためのID。ぶら下がり中はアイテム取得は出来るが扉は開けられないなど
    u8 actionGroupId;
    
    /// 同じカテゴリ内での重なり表示
    /// 
    /// プログラムから指定してるカテゴリが同じアクションボタン同士が重なって表示されるかどうか。
    u8 sameCategoryActionDisplay;
    
    /// ゲームキー
    /// 
    /// アクションボタンと対応するゲームキー。アイコン表示にも連動。
    u8 gameKey;
    
    /// ポイントアイコン表示タイプ
    /// 
    /// アイコンの見た目
    u8 iconType;
    
    /// 半径(ポイント表示範囲は円柱固定)
    f32 pointRadius;
    
    /// 高さ(ポイント表示範囲は円柱固定)。-1 でアクション実行可能範囲の数値を参照。
    f32 pointHeight;
    
    /// 底面高さオフセット
    /// 
    /// 底面のY座標をどれだけ上下させるか
    f32 pointBaseHeightOffset;
    
    /// 半径(ボタンアイコン表示範囲は円柱固定)。-1 でアクション実行可能範囲の数値を参照。
    f32 textRadius;
    
    /// 高さ(ボタンアイコン表示範囲は円柱固定)。-1 でアクション実行可能範囲の数値を参照。
    f32 textHeight;
    
    /// 底面高さオフセット
    /// 
    /// 底面のY座標をどれだけ上下させるか
    f32 textBaseHeightOffset;
    
    /// 表示位置オフセットX軸
    /// 
    /// ダミポリ1で指定されたダミポリの位置からX軸方向にオフセットする値
    f32 iconOffsetX;
    
    /// 表示位置オフセットY軸
    /// 
    /// ダミポリ1で指定されたダミポリの位置からY軸方向にオフセットする値
    f32 iconOffsetY;
    
    /// 表示位置オフセットZ軸
    /// 
    /// ダミポリ1で指定されたダミポリの位置からZ軸方向にオフセットする値
    f32 iconOffsetZ;
    
    /// 実行済みフラグ
    /// 
    /// 実行済みかのフラグ管理用のイベントフラグID（-1:管理イベントフラグなし)
    s32 doneFlag;
    
};

struct MULTI_SOUL_BONUS_RATE_PARAM_ST {
    static constexpr const char* TYPE_NAME = "MULTI_SOUL_BONUS_RATE_PARAM_ST";
    
    /// ホストの報酬ソウル倍率
    f32 host;
    
    /// 白霊
    /// 
    /// 協力サインの白霊の報酬ソウル倍率
    f32 WhiteGhost_None;
    
    /// 金霊（太陽）
    /// 
    /// 協力サインの金霊の報酬ソウル倍率
    f32 WhiteGhost_Umbasa;
    
    /// 白バーサーカー
    /// 
    /// 協力サインの白バーサーカーの報酬ソウル倍率
    f32 WhiteGhost_Berserker;
    
    /// 闇霊(ロザリア赤霊)（サイン）
    /// 
    /// 敵対サインの闇霊(ロザリア赤霊)の報酬ソウル倍率
    f32 BlackGhost_None_Sign;
    
    /// 赤金霊（サイン）
    /// 
    /// 敵対サインの赤金霊の報酬ソウル倍率
    f32 BlackGhost_Umbasa_Sign;
    
    /// 赤バーサーカー（サイン）
    /// 
    /// 敵対サインの赤バーサーカーの報酬ソウル倍率
    f32 BlackGhost_Berserker_Sign;
    
    /// 闇霊(ロザリア赤霊)（乱入）
    /// 
    /// 侵入オーブの闇霊(ロザリア赤霊)の報酬ソウル倍率
    f32 BlackGhost_None_Invade;
    
    /// 赤金霊（乱入）
    /// 
    /// 侵入オーブの赤金霊の報酬ソウル倍率
    f32 BlackGhost_Umbasa_Invade;
    
    /// 赤バーサーカー（乱入）
    /// 
    /// 侵入オーブの赤バーサーカーの報酬ソウル倍率
    f32 BlackGhost_Berserker_Invade;
    
    /// 赤狩り霊１の報酬ソウル倍率
    f32 RedHunter1;
    
    /// 赤狩り霊２の報酬ソウル倍率
    f32 RedHunter2;
    
    /// マップ守護霊(森)
    /// 
    /// マップ守護霊（森）の報酬ソウル倍率
    f32 GuardianOfForest;
    
    /// マップ守護霊(アノール)の報酬ソウル倍率
    f32 GuardianOfAnor;
    
    /// pad
    dummy8 pad1[12];
    
};

struct WIRE_VARIATION_ST {
    static constexpr const char* TYPE_NAME = "WIRE_VARIATION_ST";
    
    /// ターゲットマーカータイプ
    /// 
    /// ターゲット位置に表示するマーカー（FE）のタイプ
    u8 targetMarkerType;
    
    /// ワイヤーアクション延長距離
    /// 
    /// 0以外が設定されるとその距離分ワイヤーアクション（アクション可能・認識）距離を引き伸ばします。グリッドに関係なく検索対象になるので限定的に使われる想定です。
    u8 extendWireActionDistance;
    
    /// パディング
    dummy8 pad0[2];
    
    /// 認識範囲_上方向[度]
    /// 
    /// ワイヤーエッジの基準方向を正面として、上側のこの角度以内にいるキャラのみワイヤーアクション可能
    f32 recognitionAngleUp;
    
    /// 認識範囲_下方向[度]
    /// 
    /// ワイヤーエッジの基準方向を正面として、下側のこの角度以内にいるキャラのみワイヤーアクション可能
    f32 recognitionAngleDown;
    
    /// 認識範囲_左方向[度]
    /// 
    /// ワイヤーエッジの基準方向を正面として、左側のこの角度以内にいるキャラのみワイヤーアクション可能
    f32 recognitionAngleLeft;
    
    /// 認識範囲_右方向[度]
    /// 
    /// ワイヤーエッジの基準方向を正面として、右側のこの角度以内にいるキャラのみワイヤーアクション可能
    f32 recognitionAngleRight;
    
    /// キャラ物理ホーミングIDオフセット
    /// 
    /// キャラ物理ホーミングパラメータIDをこの値でオフセットする。ワイヤーエッジごとにホーミングする目標位置をずらしたいといったときに使用する
    u32 chrPhysicsHomingIdOffset;
    
    /// パディング
    dummy8 pad1[8];
    
};

struct CACL_CORRECT_GRAPH_ST {
    static constexpr const char* TYPE_NAME = "CACL_CORRECT_GRAPH_ST";
    
    /// 閾値ポイント0
    /// 
    /// 仕様書に「n次閾値[point]」と書いてあるもの
    f32 stageMaxVal0;
    
    /// 閾値ポイント1
    /// 
    /// 仕様書に「n次閾値[point]」と書いてあるもの
    f32 stageMaxVal1;
    
    /// 閾値ポイント2
    /// 
    /// 仕様書に「n次閾値[point]」と書いてあるもの
    f32 stageMaxVal2;
    
    /// 閾値ポイント3
    /// 
    /// 仕様書に「n次閾値[point]」と書いてあるもの
    f32 stageMaxVal3;
    
    /// 閾値ポイント4
    /// 
    /// 仕様書に「n次閾値[point]」と書いてあるもの
    f32 stageMaxVal4;
    
    /// 閾値係数0
    /// 
    /// 仕様書に「n次閾値[係数]」と書いてあるもの
    f32 stageMaxGrowVal0;
    
    /// 閾値係数1
    /// 
    /// 仕様書に「n次閾値[係数]」と書いてあるもの
    f32 stageMaxGrowVal1;
    
    /// 閾値係数2
    /// 
    /// 仕様書に「n次閾値[係数]」と書いてあるもの
    f32 stageMaxGrowVal2;
    
    /// 閾値係数3
    /// 
    /// 仕様書に「n次閾値[係数]」と書いてあるもの
    f32 stageMaxGrowVal3;
    
    /// 閾値係数4
    /// 
    /// 仕様書に「n次閾値[係数]」と書いてあるもの
    f32 stageMaxGrowVal4;
    
    /// 調整係数0
    /// 
    /// 調整係数
    f32 adjPt_maxGrowVal0;
    
    /// 調整係数1
    /// 
    /// 調整係数
    f32 adjPt_maxGrowVal1;
    
    /// 調整係数2
    /// 
    /// 調整係数
    f32 adjPt_maxGrowVal2;
    
    /// 調整係数3
    /// 
    /// 調整係数
    f32 adjPt_maxGrowVal3;
    
    /// 調整係数4
    /// 
    /// 調整係数
    f32 adjPt_maxGrowVal4;
    
    /// 成長ソウル 初期のグラフの傾きα1
    f32 init_inclination_soul;
    
    /// 成長ソウル 初期のsoul調整α2
    f32 adjustment_value;
    
    /// 成長ソウル 閾値後のグラフの傾きに影響α3
    f32 boundry_inclination_soul;
    
    /// 成長ソウル 閾値 t
    f32 boundry_value;
    
    /// パディング
    dummy8 pad[4];
    
};

struct THROW_DIRECTION_SFX_PARAM_ST {
    static constexpr const char* TYPE_NAME = "THROW_DIRECTION_SFX_PARAM_ST";
    
    /// 0
    /// 
    /// 使用するSFXのID
    s32 sfxId_00;
    
    /// 1
    /// 
    /// 使用するSFXのID
    s32 sfxId_01;
    
    /// 2
    /// 
    /// 使用するSFXのID
    s32 sfxId_02;
    
    /// 3
    /// 
    /// 使用するSFXのID
    s32 sfxId_03;
    
    /// 4
    /// 
    /// 使用するSFXのID
    s32 sfxId_04;
    
    /// 5
    /// 
    /// 使用するSFXのID
    s32 sfxId_05;
    
    /// 6
    /// 
    /// 使用するSFXのID
    s32 sfxId_06;
    
    /// 7
    /// 
    /// 使用するSFXのID
    s32 sfxId_07;
    
    /// 8
    /// 
    /// 使用するSFXのID
    s32 sfxId_08;
    
    /// 9
    /// 
    /// 使用するSFXのID
    s32 sfxId_09;
    
    /// 10
    /// 
    /// 使用するSFXのID
    s32 sfxId_10;
    
    /// 11
    /// 
    /// 使用するSFXのID
    s32 sfxId_11;
    
    /// 12
    /// 
    /// 使用するSFXのID
    s32 sfxId_12;
    
    /// 13
    /// 
    /// 使用するSFXのID
    s32 sfxId_13;
    
    /// 14
    /// 
    /// 使用するSFXのID
    s32 sfxId_14;
    
    /// 15
    /// 
    /// 使用するSFXのID
    s32 sfxId_15;
    
    /// 16
    /// 
    /// 使用するSFXのID
    s32 sfxId_16;
    
    /// 17
    /// 
    /// 使用するSFXのID
    s32 sfxId_17;
    
    /// 18
    /// 
    /// 使用するSFXのID
    s32 sfxId_18;
    
    /// 19
    /// 
    /// 使用するSFXのID
    s32 sfxId_19;
    
    /// 20
    /// 
    /// 使用するSFXのID
    s32 sfxId_20;
    
    /// 21
    /// 
    /// 使用するSFXのID
    s32 sfxId_21;
    
    /// 22
    /// 
    /// 使用するSFXのID
    s32 sfxId_22;
    
    /// 23
    /// 
    /// 使用するSFXのID
    s32 sfxId_23;
    
    /// 24
    /// 
    /// 使用するSFXのID
    s32 sfxId_24;
    
    /// 25
    /// 
    /// 使用するSFXのID
    s32 sfxId_25;
    
    /// 26
    /// 
    /// 使用するSFXのID
    s32 sfxId_26;
    
    /// 27
    /// 
    /// 使用するSFXのID
    s32 sfxId_27;
    
    /// 28
    /// 
    /// 使用するSFXのID
    s32 sfxId_28;
    
    /// 29
    /// 
    /// 使用するSFXのID
    s32 sfxId_29;
    
    /// 30
    /// 
    /// 使用するSFXのID
    s32 sfxId_30;
    
    /// 31
    /// 
    /// 使用するSFXのID
    s32 sfxId_31;
    
    /// 32
    /// 
    /// 使用するSFXのID
    s32 sfxId_32;
    
    /// 33
    /// 
    /// 使用するSFXのID
    s32 sfxId_33;
    
    /// 34
    /// 
    /// 使用するSFXのID
    s32 sfxId_34;
    
    /// 35
    /// 
    /// 使用するSFXのID
    s32 sfxId_35;
    
    /// 36
    /// 
    /// 使用するSFXのID
    s32 sfxId_36;
    
    /// 37
    /// 
    /// 使用するSFXのID
    s32 sfxId_37;
    
    /// 38
    /// 
    /// 使用するSFXのID
    s32 sfxId_38;
    
    /// 39
    /// 
    /// 使用するSFXのID
    s32 sfxId_39;
    
    /// 40
    /// 
    /// 使用するSFXのID
    s32 sfxId_40;
    
    /// 41
    /// 
    /// 使用するSFXのID
    s32 sfxId_41;
    
    /// 42
    /// 
    /// 使用するSFXのID
    s32 sfxId_42;
    
    /// 43
    /// 
    /// 使用するSFXのID
    s32 sfxId_43;
    
    /// 44
    /// 
    /// 使用するSFXのID
    s32 sfxId_44;
    
    /// 45
    /// 
    /// 使用するSFXのID
    s32 sfxId_45;
    
    /// 46
    /// 
    /// 使用するSFXのID
    s32 sfxId_46;
    
    /// 47
    /// 
    /// 使用するSFXのID
    s32 sfxId_47;
    
    /// 48
    /// 
    /// 使用するSFXのID
    s32 sfxId_48;
    
    /// 49
    /// 
    /// 使用するSFXのID
    s32 sfxId_49;
    
    /// 50
    /// 
    /// 使用するSFXのID
    s32 sfxId_50;
    
    /// 51
    /// 
    /// 使用するSFXのID
    s32 sfxId_51;
    
    /// 52
    /// 
    /// 使用するSFXのID
    s32 sfxId_52;
    
    /// 53
    /// 
    /// 使用するSFXのID
    s32 sfxId_53;
    
    /// 54
    /// 
    /// 使用するSFXのID
    s32 sfxId_54;
    
    /// 55
    /// 
    /// 使用するSFXのID
    s32 sfxId_55;
    
    /// 56
    /// 
    /// 使用するSFXのID
    s32 sfxId_56;
    
    /// 57
    /// 
    /// 使用するSFXのID
    s32 sfxId_57;
    
    /// 58
    /// 
    /// 使用するSFXのID
    s32 sfxId_58;
    
    /// 59
    /// 
    /// 使用するSFXのID
    s32 sfxId_59;
    
    /// 60
    /// 
    /// 使用するSFXのID
    s32 sfxId_60;
    
    /// 61
    /// 
    /// 使用するSFXのID
    s32 sfxId_61;
    
    /// 62
    /// 
    /// 使用するSFXのID
    s32 sfxId_62;
    
    /// 63
    /// 
    /// 使用するSFXのID
    s32 sfxId_63;
    
    /// 64
    /// 
    /// 使用するSFXのID
    s32 sfxId_64;
    
    /// 65
    /// 
    /// 使用するSFXのID
    s32 sfxId_65;
    
    /// 66
    /// 
    /// 使用するSFXのID
    s32 sfxId_66;
    
    /// 67
    /// 
    /// 使用するSFXのID
    s32 sfxId_67;
    
    /// 68
    /// 
    /// 使用するSFXのID
    s32 sfxId_68;
    
    /// 69
    /// 
    /// 使用するSFXのID
    s32 sfxId_69;
    
    /// 70
    /// 
    /// 使用するSFXのID
    s32 sfxId_70;
    
    /// 71
    /// 
    /// 使用するSFXのID
    s32 sfxId_71;
    
    /// 72
    /// 
    /// 使用するSFXのID
    s32 sfxId_72;
    
    /// 73
    /// 
    /// 使用するSFXのID
    s32 sfxId_73;
    
    /// 74
    /// 
    /// 使用するSFXのID
    s32 sfxId_74;
    
    /// 75
    /// 
    /// 使用するSFXのID
    s32 sfxId_75;
    
    /// 76
    /// 
    /// 使用するSFXのID
    s32 sfxId_76;
    
    /// 77
    /// 
    /// 使用するSFXのID
    s32 sfxId_77;
    
    /// 78
    /// 
    /// 使用するSFXのID
    s32 sfxId_78;
    
    /// 79
    /// 
    /// 使用するSFXのID
    s32 sfxId_79;
    
    /// 80
    /// 
    /// 使用するSFXのID
    s32 sfxId_80;
    
    /// 81
    /// 
    /// 使用するSFXのID
    s32 sfxId_81;
    
    /// 82
    /// 
    /// 使用するSFXのID
    s32 sfxId_82;
    
    /// 83
    /// 
    /// 使用するSFXのID
    s32 sfxId_83;
    
    /// 84
    /// 
    /// 使用するSFXのID
    s32 sfxId_84;
    
    /// 85
    /// 
    /// 使用するSFXのID
    s32 sfxId_85;
    
    /// 86
    /// 
    /// 使用するSFXのID
    s32 sfxId_86;
    
    /// 87
    /// 
    /// 使用するSFXのID
    s32 sfxId_87;
    
    /// 88
    /// 
    /// 使用するSFXのID
    s32 sfxId_88;
    
    /// 89
    /// 
    /// 使用するSFXのID
    s32 sfxId_89;
    
};

struct TALK_PARAM_ST {
    static constexpr const char* TYPE_NAME = "TALK_PARAM_ST";
    
    /// PC性別が男：テキストID
    /// 
    /// PC性別が男：メッセージを指定->メニュー
    s32 textId;
    
    /// PC性別が女：テキストID
    /// 
    /// PC性別が女：メッセージを指定->メニュー
    s32 textId_female;
    
    /// ボイス再生タイムアウト時間
    f32 timeout;
    
    /// padding
    dummy8 pad[4];
    
    /// PC：PC性別が男：サウンドID
    /// 
    /// PC：PC性別が男：サウンド（ボイス）ID
    s32 soundId_pc;
    
    /// 会話参加者0：PC性別が男：サウンドID
    /// 
    /// 会話参加者0：PC性別が男：サウンド（ボイス）ID
    s32 soundId0;
    
    /// 会話参加者1：PC性別が男：サウンドID
    /// 
    /// 会話参加者1：PC性別が男：サウンド（ボイス）ID
    s32 soundId1;
    
    /// 会話参加者2：PC性別が男：サウンドID
    /// 
    /// 会話参加者2：PC性別が男：サウンド（ボイス）ID
    s32 soundId2;
    
    /// 会話参加者3：PC性別が男：サウンドID
    /// 
    /// 会話参加者3：PC性別が男：サウンド（ボイス）ID
    s32 soundId3;
    
    /// 会話参加者4：PC性別が男：サウンドID
    /// 
    /// 会話参加者4：PC性別が男：サウンド（ボイス）ID
    s32 soundId4;
    
    /// 会話参加者5：PC性別が男：サウンドID
    /// 
    /// 会話参加者5：PC性別が男：サウンド（ボイス）ID
    s32 soundId5;
    
    /// 会話参加者6：PC性別が男：サウンドID
    /// 
    /// 会話参加者6：PC性別が男：サウンド（ボイス）ID
    s32 soundId6;
    
    /// 会話参加者7：PC性別が男：サウンドID
    /// 
    /// 会話参加者7：PC性別が男：サウンド（ボイス）ID
    s32 soundId7;
    
    /// PC：PC性別が女：サウンドID
    /// 
    /// PC：PC性別が女：サウンド（ボイス）ID
    s32 soundId0_pc_female;
    
    /// 会話参加者0：PC性別が女：サウンドID
    /// 
    /// 会話参加者0：PC性別が女：サウンド（ボイス）ID
    s32 soundId0_female;
    
    /// 会話参加者1：PC性別が女：サウンドID
    /// 
    /// 会話参加者1：PC性別が女：サウンド（ボイス）ID
    s32 soundId1_female;
    
    /// 会話参加者2：PC性別が女：サウンドID
    /// 
    /// 会話参加者2：PC性別が女：サウンド（ボイス）ID
    s32 soundId2_female;
    
    /// 会話参加者3：PC性別が女：サウンドID
    /// 
    /// 会話参加者3：PC性別が女：サウンド（ボイス）ID
    s32 soundId3_female;
    
    /// 会話参加者4：PC性別が女：サウンドID
    /// 
    /// 会話参加者4：PC性別が女：サウンド（ボイス）ID
    s32 soundId4_female;
    
    /// 会話参加者5：PC性別が女：サウンドID
    /// 
    /// 会話参加者5：PC性別が女：サウンド（ボイス）ID
    s32 soundId5_female;
    
    /// 会話参加者6：PC性別が女：サウンドID
    /// 
    /// 会話参加者6：PC性別が女：サウンド（ボイス）ID
    s32 soundId6_female;
    
    /// 会話参加者7：PC性別が女：サウンドID
    /// 
    /// 会話参加者7：PC性別が女：サウンド（ボイス）ID
    s32 soundId7_female;
    
    /// PC：LookAt対象
    u8 lookAtTarget_pc;
    
    /// 会話参加者0：LookAt対象
    u8 lookAtTarget0;
    
    /// 会話参加者1：LookAt対象
    u8 lookAtTarget1;
    
    /// 会話参加者2：LookAt対象
    u8 lookAtTarget2;
    
    /// 会話参加者3：LookAt対象
    u8 lookAtTarget3;
    
    /// 会話参加者4：LookAt対象
    u8 lookAtTarget4;
    
    /// 会話参加者5：LookAt対象
    u8 lookAtTarget5;
    
    /// 会話参加者6：LookAt対象
    u8 lookAtTarget6;
    
    /// 会話参加者7：LookAt対象
    u8 lookAtTarget7;
    
    /// PC：字幕芝居
    /// 
    /// PC：会話中のアニメーション
    u8 talkAnimation_pc;
    
    /// 会話参加者0：字幕芝居
    /// 
    /// 会話参加者0：会話中のアニメーション
    u8 talkAnimation0;
    
    /// 会話参加者1：字幕芝居
    /// 
    /// 会話参加者1：会話中のアニメーション
    u8 talkAnimation1;
    
    /// 会話参加者2：字幕芝居
    /// 
    /// 会話参加者2：会話中のアニメーション
    u8 talkAnimation2;
    
    /// 会話参加者3：字幕芝居
    /// 
    /// 会話参加者3：会話中のアニメーション
    u8 talkAnimation3;
    
    /// 会話参加者4：字幕芝居
    /// 
    /// 会話参加者4：会話中のアニメーション
    u8 talkAnimation4;
    
    /// 会話参加者5：字幕芝居
    /// 
    /// 会話参加者5：会話中のアニメーション
    u8 talkAnimation5;
    
    /// 会話参加者6：字幕芝居
    /// 
    /// 会話参加者6：会話中のアニメーション
    u8 talkAnimation6;
    
    /// 会話参加者7：字幕芝居
    /// 
    /// 会話参加者7：会話中のアニメーション
    u8 talkAnimation7;
    
    /// PC：口パク開始時間。-1で口パク無し
    s16 lipSyncStart_pc;
    
    /// 会話参加者0：口パク開始時間。-1で口パク無し
    s16 lipSyncStart0;
    
    /// 会話参加者1：口パク開始時間。-1で口パク無し
    s16 lipSyncStart1;
    
    /// 会話参加者2：口パク開始時間。-1で口パク無し
    s16 lipSyncStart2;
    
    /// 会話参加者3：口パク開始時間。-2で口パク無し
    s16 lipSyncStart3;
    
    /// 会話参加者4：口パク開始時間。-3で口パク無し
    s16 lipSyncStart4;
    
    /// 会話参加者5：口パク開始時間。-4で口パク無し
    s16 lipSyncStart5;
    
    /// 会話参加者6：口パク開始時間。-5で口パク無し
    s16 lipSyncStart6;
    
    /// 会話参加者7：口パク開始時間。-6で口パク無し
    s16 lipSyncStart7;
    
    /// PC：口パク継続時間。-1で口パクずっと継続
    s16 lipSyncTime_pc;
    
    /// 会話参加者0：口パク継続時間。-1で口パクずっと継続
    s16 lipSyncTime0;
    
    /// 会話参加者1：口パク継続時間
    /// 
    /// 会話参加者1：口パク開始時間。-1で口パクずっと継続
    s16 lipSyncTime1;
    
    /// 会話参加者2：口パク継続時間
    /// 
    /// 会話参加者2：口パク開始時間。-1で口パクずっと継続
    s16 lipSyncTime2;
    
    /// 会話参加者3：口パク継続時間
    /// 
    /// 会話参加者3：口パク開始時間。-1で口パクずっと継続
    s16 lipSyncTime3;
    
    /// 会話参加者4：口パク継続時間
    /// 
    /// 会話参加者4：口パク開始時間。-1で口パクずっと継続
    s16 lipSyncTime4;
    
    /// 会話参加者5：口パク継続時間
    /// 
    /// 会話参加者5：口パク開始時間。-1で口パクずっと継続
    s16 lipSyncTime5;
    
    /// 会話参加者6：口パク継続時間
    /// 
    /// 会話参加者6：口パク開始時間。-1で口パクずっと継続
    s16 lipSyncTime6;
    
    /// 会話参加者7：口パク継続時間
    /// 
    /// 会話参加者7：口パク開始時間。-1で口パクずっと継続
    s16 lipSyncTime7;
    
    /// padding1
    dummy8 pad1[2];
    
};

struct GRASS_TYPE_PARAM_ST {
    static constexpr const char* TYPE_NAME = "GRASS_TYPE_PARAM_ST";
    
    /// LOD距離
    /// 
    /// -1はマップごとの設定、または全体設定になります
    s16 lodRange;
    
    /// LOD0のクラスタータイプ
    u8 lod0ClusterType;
    
    /// LOD1のクラスタータイプ
    u8 lod1ClusterType;
    
    /// LOD2のクラスタータイプ
    u8 lod2ClusterType;
    
    dummy8 pad0[2];
    
    /// 配置方法
    u8 distributionType;
    
    /// 基本密度
    f32 baseDensity;
    
    /// モデル名
    fixstrW modelName[16];
    
    /// フラットのテクスチャー名
    fixstrW flatTextureName[32];
    
    /// ビルボードのテクスチャー名
    fixstrW billboardTextureName[32];
    
    /// 傾きの影響（％）
    u8 normalInfluence;
    
    /// 傾きの最大角度（度）
    u8 inclinationMax;
    
    /// 傾斜角のランダム性（度）
    u8 inclinationJitter;
    
    /// 幅のスケール範囲(min，％)
    u8 scaleBaseMin;
    
    /// 幅のスケール範囲(max，％)
    u8 scaleBaseMax;
    
    /// 高さのスケール範囲(min，％)
    u8 scaleHeightMin;
    
    /// 高さのスケール範囲(max，％)
    u8 scaleHeightMax;
    
    /// 乗算カラー１ (赤）
    u8 colorShade1_r;
    
    /// 乗算カラー１ （緑）
    u8 colorShade1_g;
    
    /// 乗算カラー １（青）
    u8 colorShade1_b;
    
    /// 乗算カラー２ （赤）
    u8 colorShade2_r;
    
    /// 乗算カラー２ （緑）
    u8 colorShade2_g;
    
    /// 乗算カラー ２（青）
    u8 colorShade2_b;
    
    /// 平面の分離
    u8 flatSplitType;
    
    /// 平面の枚数
    u8 flatBladeCount;
    
    /// 平面の角度（度）
    s8 flatSlant;
    
    /// 平面の距離
    f32 flatRadius;
    
    /// 影を落とすか
    u8 castShadow;
    
    /// 振幅(揺れの大きさ)
    u8 windAmplitude;
    
    dummy8 pad1[1];
    
    /// 周期(速度)
    u8 windCycle;
    
    /// 方向（度）
    /// 
    /// -1の場合はランダム
    f32 orientationAngle;
    
    /// 方向の範囲（度）
    f32 orientationRange;
    
    /// モデル間隔（Grid配置のみ）
    /// モデルとモデルの距離
    /// 普通はモデルサイズ（直径）と同じ
    /// 少し小さくするとモデルはもっとくっつく
    f32 spacing;
    
    /// ディザリング方法（Grid配置のみ）
    /// Dithering8x8/4x4：ディザリングパターンで密度によって配置（密度が100%になると隙間なし配置になる）
    /// Fill (>50%): 密度が50%を超える部分に隙間なく配置，50%以下は配置しない
    /// Fill all: 密度がゼロじゃない部分に隙間なく配置
    u8 dithering;
    
    /// pad2
    dummy8 pad[3];
    
    /// Simpleモデル名
    fixstrW simpleModelName[16];
    
};

struct SP_EFFECT_PARAM_ST {
    static constexpr const char* TYPE_NAME = "SP_EFFECT_PARAM_ST";
    
    /// アイコンID(-1の時は、アイコン必要なし)
    s32 iconId;
    
    /// 発動条件　残りHP比率[%]
    /// 
    /// 残りHPが、maxHPの何%になったら発動するかを設定
    f32 conditionHp;
    
    /// 効果持続時間　時間[s]
    /// 
    /// 変化持続時間　/-1で永続 /0で瞬間1回限り
    f32 effectEndurance;
    
    /// 発動間隔[s]
    /// 
    /// 何秒間隔で発生するのかを設定
    f32 motionInterval;
    
    /// 最大HP倍率[%]
    /// 
    /// 最大HPに補正をかける
    f32 maxHpRate;
    
    /// 最大MP倍率[%]
    /// 
    /// 最大MPに補正をかける
    f32 maxMpRate;
    
    /// 最大スタミナ倍率[%]
    /// 
    /// 最大SPに補正をかける
    f32 maxStaminaRate;
    
    /// 防御側：斬撃ダメージ倍率
    /// 
    /// 斬撃ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 slashDamageCutRate;
    
    /// 防御側：軽打ダメージ倍率
    /// 
    /// 軽打ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 lightHitDamageCutRate;
    
    /// 防御側：刺突ダメージ倍率
    /// 
    /// 刺突ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 thrustDamageCutRate;
    
    /// 防御側：無属性ダメージ倍率
    /// 
    /// 無属性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 neutralDamageCutRate;
    
    /// 防御側：魔法ダメージ倍率
    /// 
    /// 魔法ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 magicDamageCutRate;
    
    /// 防御側：炎ダメージ倍率
    /// 
    /// 炎ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 fireDamageCutRate;
    
    /// 防御側：電撃ダメージ倍率
    /// 
    /// 電撃ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 thunderDamageCutRate;
    
    /// 攻撃側：物理ダメージ倍率
    /// 
    /// 物理ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 physicsAttackRate;
    
    /// 攻撃側：魔法ダメージ倍率
    /// 
    /// 魔法ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 magicAttackRate;
    
    /// 攻撃側：炎ダメージ倍率
    /// 
    /// 炎ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 fireAttackRate;
    
    /// 攻撃側：電撃ダメージ倍率
    /// 
    /// 電撃ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 thunderAttackRate;
    
    /// 物理攻撃力倍率
    /// 
    /// 物理攻撃力に設定した数値をかけます
    f32 physicsAttackPowerRate;
    
    /// 魔法攻撃力倍率
    /// 
    /// 魔法攻撃力に設定した数値をかけます
    f32 magicAttackPowerRate;
    
    /// 炎攻撃力倍率
    /// 
    /// 炎攻撃力に設定した数値をかけます
    f32 fireAttackPowerRate;
    
    /// 電撃攻撃力倍率
    /// 
    /// 電撃攻撃力に設定した数値をかけます
    f32 thunderAttackPowerRate;
    
    /// 物理攻撃力[point]
    /// 
    /// 物理攻撃力に設定した数値を加減算する
    s32 physicsAttackPower;
    
    /// 魔法攻撃力[point]
    /// 
    /// 魔法攻撃力に設定した数値を加減算する
    s32 magicAttackPower;
    
    /// 炎攻撃力[point]
    /// 
    /// 炎攻撃力に設定した数値を加減算する
    s32 fireAttackPower;
    
    /// 電撃攻撃力[point]
    /// 
    /// 電撃攻撃力に設定した数値を加減算する
    s32 thunderAttackPower;
    
    /// 物理防御力倍率
    /// 
    /// 物理防御力に設定した数値をかけます
    f32 physicsDiffenceRate;
    
    /// 魔法防御力倍率
    /// 
    /// 魔法防御力に設定した数値をかけます
    f32 magicDiffenceRate;
    
    /// 炎防御力倍率
    /// 
    /// 炎防御力に設定した数値をかけます
    f32 fireDiffenceRate;
    
    /// 電撃防御力倍率
    /// 
    /// 電撃防御力に設定した数値をかけます
    f32 thunderDiffenceRate;
    
    /// 物理防御力[point]
    /// 
    /// 物理防御力に設定した数値を加減算する
    s32 physicsDiffence;
    
    /// 魔法防御力[point]
    /// 
    /// 魔法防御力に設定した数値を加減算する
    s32 magicDiffence;
    
    /// 炎防御力[point]
    /// 
    /// 炎防御力に設定した数値を加減算する
    s32 fireDiffence;
    
    /// 電撃防御力[point]
    /// 
    /// 電撃防御力に設定した数値を加減算する
    s32 thunderDiffence;
    
    /// 隙ダメージ倍率
    /// 
    /// 隙のときのダメージ倍率を、設定した数値に置き換える（ダメージ側に設定）
    f32 NoGuardDamageRate;
    
    /// スィートスポット倍率
    /// 
    /// スィートスポットのダメージ計算を指定した数値に差し替える(急所ダメージ補正) -1.0で無効
    f32 vitalSpotChangeRate;
    
    /// ノーマルヒット倍率
    /// 
    /// ノーマルヒットのダメージ計算を指定した数値に差し替える  -1.0で無効
    f32 normalSpotChangeRate;
    
    /// 最大HP変化倍率
    /// 
    /// 最大HPに対して、設定された倍率をかけて増減させる
    f32 maxHpChangeRate;
    
    /// 行動ID指定枠
    /// 
    /// 特殊効果から行動IDを使ってダメージを与える場合に指定-1で無効
    s32 behaviorId;
    
    /// HPダメージ量[%]
    /// 
    /// 一度の発動で最大HPの何%分を加算（または減算）するかを設定
    f32 changeHpRate;
    
    /// HPダメージ[point]
    /// 
    /// 一度の発動で何ポイント加算（または減算）するかを設定
    s32 changeHpPoint;
    
    /// MPダメージ量[%]
    /// 
    /// 一度の発動で最大MPの何%分を加算（または減算）するかを設定
    f32 changeMpRate;
    
    /// MPダメージ[point]
    /// 
    /// 一度の発動で何ポイント加算（または減算）するかを設定
    s32 changeMpPoint;
    
    /// MP回復速度変化[point]
    /// 
    /// 回復速度を変化させる。回復計算式の基準回復速度、初期回復速度に加減算する。
    s32 mpRecoverChangeSpeed;
    
    /// スタミナダメージ量[%]
    /// 
    /// 一度の発動で最大スタミナの何%分を加算（または減算）するかを設定
    f32 changeStaminaRate;
    
    /// スタミナダメージ[point]
    /// 
    /// 一度の発動で何ポイント加算（または減算）するかを設定
    s32 changeStaminaPoint;
    
    /// スタミナ回復速度変化[point]
    /// 
    /// 回復速度を変化させる。回復計算式の基準回復速度、初期回復速度に加減算する。
    s32 staminaRecoverChangeSpeed;
    
    /// 魔法効果時間変化
    /// 
    /// 効果持続時間に0.1秒以上設定されている魔法のみ、効果持続時間に設定されている時間を加減算する
    f32 magicEffectTimeChange;
    
    /// 耐久度変化：内部損耗度[point]
    /// 
    /// 内部損耗度に数値分を加減算する
    s32 insideDurability;
    
    /// 耐久度変化：最大損耗度変化[point]
    /// 
    /// 耐久度の内部損耗度の最大値に、設定された数値を加算する
    s32 maxDurability;
    
    /// スタミナ攻撃力倍率
    /// 
    /// スタミナ攻撃力に、倍率をかける(1.0 1倍 0.5 半分）
    f32 staminaAttackRate;
    
    /// 毒耐性攻撃力[point]
    /// 
    /// ヒットした時に、対象の【毒耐性値】に加算する数値
    s32 poizonAttackPower;
    
    /// 疫病耐性攻撃力[point]
    /// 
    /// ヒットした時に、対象の【疫病耐性値】に加算する数値
    s32 registIllness;
    
    /// 出血耐性攻撃力[point]
    /// 
    /// ヒットした時に、対象の【出血耐性値】に加算する数値
    s32 registBlood;
    
    /// 呪耐性攻撃力[point]
    /// 
    /// ヒットした時に、対象の【呪耐性値】に加算する数値
    s32 registCurse;
    
    /// 落下ダメージ倍率
    /// 
    /// 落下時のダメージ計算に倍率をかける
    f32 fallDamageRate;
    
    /// 取得ソウル倍率
    /// 
    /// 敵を倒した時の取得ソウル量が、指定倍数分上乗せされる
    f32 soulRate;
    
    /// 装備重量変化倍率
    /// 
    /// 最大装備重量に、設定された倍率をかける
    f32 equipWeightChangeRate;
    
    /// 所持重量変化倍率
    /// 
    /// 最大所持重量に、設定された倍率をかける
    f32 allItemWeightChangeRate;
    
    /// ソウル加算
    /// 
    /// 所持ソウルに、設定値を加算する
    s32 soul;
    
    /// アニメIDオフセット(無効-1)
    s32 animIdOffset;
    
    /// 所持ソウル率
    /// 
    /// 敵周回効果用。設定されているキャラから外にソウルが出て行く時に適用されます。
    f32 haveSoulRate;
    
    /// ターゲット優先度加算分
    /// 
    /// マルチプレイ時、敵から優先的にターゲットとして狙われるようになる。プライオリティの加算。０がデフォルト。プラス値でよく狙われるようになる。マイナスは、－１まで。
    f32 targetPriority;
    
    /// 見られる方：視覚距離カット率
    /// 
    /// 見られる方にかける。見る方のAIの視覚索敵対象から外れやすくなる。０がデフォルト。
    s32 sightSearchEnemyCut;
    
    /// 見られる方：発見ポイント増加倍率
    /// 
    /// 見られる方にかける。見る方の周辺視野で貯まる発見ポイントの増加倍率
    f32 aroundSightPointAddRate;
    
    /// 対象のマップ視界タイプ上書き_良好
    /// 
    /// ロック判定やAI視認判定を行う際、対象となるキャラの立っているヒットのマップ視界タイプが「良好」ならこの値に置き換えた上で判定を行う。
    u8 mapVisibilityOverrideGood;
    
    /// 対象のマップ視界タイプ上書き_暗闇
    /// 
    /// ロック判定やAI視認判定を行う際、対象となるキャラの立っているヒットのマップ視界タイプが「暗闇」ならこの値に置き換えた上で判定を行う。
    u8 mapVisibilityOverrideDark;
    
    /// 対象のマップ視界タイプ上書き_真っ暗闇
    /// 
    /// ロック判定やAI視認判定を行う際、対象となるキャラの立っているヒットのマップ視界タイプが「真っ暗闇」ならこの値に置き換えた上で判定を行う。
    u8 mapVisibilityOverridePitchDark;
    
    /// 見られる方：制限タイプ
    /// 
    /// 見られる方にかける。見る方の視覚索敵カットが効果を発揮する条件タイプ
    u8 sightCutLimitType;
    
    /// 聞かせる方：AI音半径倍率
    /// 
    /// 聞かせる方にかける。自身の発生する音半径の倍率。1がデフォルト。
    f32 hearingSearchEnemyRate;
    
    /// グラビティ率
    f32 grabityRate;
    
    /// 毒耐性変化倍率
    /// 
    /// 毒耐性値に設定された倍率をかける
    f32 registPoizonChangeRate;
    
    /// 疫病耐性変化倍率
    /// 
    /// 疫病耐性値に設定された倍率をかける
    f32 registIllnessChangeRate;
    
    /// 出血耐性変化倍率
    /// 
    /// 出血耐性値に設定された倍率をかける
    f32 registBloodChangeRate;
    
    /// 呪耐性変化倍率
    /// 
    /// 呪耐性値に設定された倍率をかける
    f32 registCurseChangeRate;
    
    /// ソウルスティール係数
    /// 
    /// NPCがソウルスティールで奪われるHPに対する防御力
    f32 soulStealRate;
    
    /// 防御：寿命係数
    f32 lifeReductionRate;
    
    /// HP回復量係数
    /// 
    /// HPが減るときは、効かない。
    f32 hpRecoverRate;
    
    /// 差し替える特殊効果
    /// 
    /// 寿命が尽きた時に追加される特殊効果ID(-1は無視)
    s32 replaceSpEffectId;
    
    /// 周期発生特殊効果
    /// 
    /// 発動周期毎に発生する特殊効果ID(-1は無視)
    s32 cycleOccurrenceSpEffectId;
    
    /// 攻撃発生特殊効果
    /// 
    /// 攻撃Hit時に発生する特殊効果ID(-1は無視)
    s32 atkOccurrenceSpEffectId;
    
    /// ガード時はじき防御力アップ倍率
    /// 
    /// ガード時のはじき防御力補正値
    f32 guardDefFlickPowerRate;
    
    /// ガード時スタミナカット倍率
    /// 
    /// ガード時のスタミナカット率補正値
    f32 guardStaminaCutRate;
    
    /// 見る方：認識視覚角度（高さ_上）上書き[deg]
    /// 
    /// 見る方にかける。見る方の上方向の認識視覚角度[deg]
    u8 eyeAngUpper_Perceive;
    
    /// 見る方：認識視覚角度（高さ_下）上書き[deg]
    /// 
    /// 見る方にかける。見る方の下方向の認識視覚角度[deg]
    u8 eyeAngBottom_Perceive;
    
    /// SA値[point]
    /// 
    /// スーパーアーマー値に加算する値
    s16 changeSuperArmorPoint;
    
    /// 弓飛距離補正[％]
    /// 
    /// 武器の飛距離補正に加算される補正値
    s16 bowDistRate;
    
    /// 特殊効果カテゴリ
    /// 
    /// 特殊効果の上書きなどの挙動を決めるカテゴリ
    u16 spCategory;
    
    /// カテゴリ内優先度
    /// 
    /// 同一カテゴリ内での優先度（低い方が優先）
    u8 categoryPriority;
    
    /// 保存カテゴリ
    /// 
    /// 特殊効果を保存するカテゴリ
    s8 saveCategory;
    
    /// 魔法登録枠変化　魔法スロット
    /// 
    /// 魔法登録枠を指定数増やすことが出来る
    u8 changeMagicSlot;
    
    /// 奇跡登録枠変化　奇跡スロット
    /// 
    /// 軌跡登録枠を指定数増やすことが出来る
    u8 changeMiracleSlot;
    
    /// 人間性ダメージ値
    /// 
    /// 人間性値に与えるダメージ値
    s8 heroPointDamage;
    
    /// はじき防御力_上書き
    /// 
    /// はじき防御力を上書きする値を設定
    u8 defFlickPower;
    
    /// はじき時ダメージ減衰率[%]_上書き
    /// 
    /// はじき時のダメージ減衰率を上書きする値を設定
    u8 flickDamageCutRate;
    
    /// 出血発動時のHPダメージ補正倍率
    u8 bloodDamageRate;
    
    /// DL_ダメージなし（0）
    /// 
    /// ダメージLv0を差し替えるタイプを指定
    s8 dmgLv_None;
    
    /// DL_小（1）
    /// 
    /// ダメージLv1を差し替えるタイプを指定
    s8 dmgLv_S;
    
    /// DL_中（2）
    /// 
    /// ダメージLv2を差し替えるタイプを指定
    s8 dmgLv_M;
    
    /// DL_大（3）
    /// 
    /// ダメージLv3を差し替えるタイプを指定
    s8 dmgLv_L;
    
    /// DL_吹っ飛び（4）
    /// 
    /// ダメージLv4を差し替えるタイプを指定
    s8 dmgLv_BlowM;
    
    /// DL_プッシュ（5）
    /// 
    /// ダメージLv5を差し替えるタイプを指定
    s8 dmgLv_Push;
    
    /// DL_叩きつけ（6）
    /// 
    /// ダメージLv6を差し替えるタイプを指定
    s8 dmgLv_Strike;
    
    /// DL_小吹っ飛び（7）
    /// 
    /// ダメージLv7を差し替えるタイプを指定
    s8 dmgLv_BlowS;
    
    /// DL_極小（8）
    /// 
    /// ダメージLv8を差し替えるタイプを指定
    s8 dmgLv_Min;
    
    /// DL_打ち上げ（9）
    /// 
    /// ダメージLv9を差し替えるタイプを指定
    s8 dmgLv_Uppercut;
    
    /// DL_特大吹っ飛び(10)
    /// 
    /// ダメージLv10を差し替えるタイプを指定
    s8 dmgLv_BlowLL;
    
    /// DL_ブレス(11)
    /// 
    /// ダメージLv11を差し替えるタイプを指定
    s8 dmgLv_Breath;
    
    /// 物理属性
    /// 
    /// 特殊効果に設定する物理属性
    u8 atkAttribute;
    
    /// 特殊属性
    /// 
    /// 特殊効果に設定する特殊属性
    u8 spAttribute;
    
    /// 状態変化タイプ
    /// 
    /// 状態変化の判定フラグ
    u16 stateInfo;
    
    /// 対武器パラメータ変化
    /// 
    /// どの武器に対して効果を発揮するかを指定する。制限無しの場合は敵も含めた全ての攻撃・防御が対象
    u8 wepParamChange;
    
    /// 移動タイプ。移動速度を変更する。
    u8 moveType;
    
    /// 防御：寿命減少タイプ
    u16 lifeReductionType;
    
    /// 投げ条件。投げマスクに影響する。
    u8 throwCondition;
    
    /// 行動判定IDに加算する条件値
    /// 
    /// 行動判定ＩＤに値を加算する条件値(Def:-1)
    s8 addBehaviorJudgeId_condition;
    
    /// 冷気発動時のHPダメージ補正倍率
    /// 
    /// 状態変化タイプ[冷気]のPointダメージ、％ダメージの時のみ使用される補正値
    u8 freezeDamageRate;
    
    /// 効果対象：所属　自分
    /// 
    /// この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
    u8 effectTargetSelf : 1;
    
    /// 効果対象：所属　味方
    /// 
    /// この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
    u8 effectTargetFriend : 1;
    
    /// 効果対象：所属　敵
    /// 
    /// この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
    u8 effectTargetEnemy : 1;
    
    /// 効果対象：操作　PC
    /// 
    /// この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
    u8 effectTargetPlayer : 1;
    
    /// 効果対象：操作　AI
    /// 
    /// この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
    u8 effectTargetAI : 1;
    
    /// 効果対象：状態　生存
    /// 
    /// この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
    u8 effectTargetLive : 1;
    
    /// 効果対象：状態　全ゴースト
    /// 
    /// この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
    u8 effectTargetGhost : 1;
    
    /// 効果対象：状態　白ゴースト
    /// 
    /// この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
    u8 effectTargetWhiteGhost : 1;
    
    /// 効果対象：状態　黒ゴースト
    /// 
    /// この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
    u8 effectTargetBlackGhost : 1;
    
    /// 効果対象：攻撃者に発動
    /// 
    /// ダメージ後に攻撃者に特殊効果を適用（防御側には入れない）
    u8 effectTargetAttacker : 1;
    
    /// 発動してなくてもアイコン表示
    /// 
    /// 発動待ちの状態でもアイコンを表示する。
    u8 dispIconNonactive : 1;
    
    /// 特殊効果エフェクトを使用するか（未使用）
    /// 
    /// 特殊効果エフェクトを使用するか
    u8 useSpEffectEffect : 1;
    
    /// 魔力補正するか？
    u8 bAdjustMagicAblity : 1;
    
    /// 信仰補正するか？
    u8 bAdjustFaithAblity : 1;
    
    /// 周回ボーナス用か？
    /// 
    /// ゲームクリア周回ボーナス用かどうか。
    u8 bGameClearBonus : 1;
    
    /// 対魔法パラメータ変化
    /// 
    /// 魔法に対して効果を発揮するかしないかを設定する
    u8 magParamChange : 1;
    
    /// 対奇跡パラメータ変化
    /// 
    /// 奇跡に対して効果を発揮するかしないかを設定する
    u8 miracleParamChange : 1;
    
    /// 所持ソウルクリアするか
    /// 
    /// 所持ソウルが0になります。
    u8 clearSoul : 1;
    
    /// SOSサイン　判定フラグ
    /// 
    /// チェックが付いている場合、発動時にSOSサイン要求を発行
    u8 requestSOS : 1;
    
    /// ブラックSOSサイン　判定フラグ
    /// 
    /// チェックが付いている場合、発動時にブラックSOSサイン要求を発行
    u8 requestBlackSOS : 1;
    
    /// ブラック強制参加SOSサイン　判定フラグ
    /// 
    /// チェックが付いている場合、発動時にブラック強制参加SOSサイン要求を発行
    u8 requestForceJoinBlackSOS : 1;
    
    /// キック　判定フラグ
    /// 
    /// チェックが付いている場合、発動時にキック要求を発行
    u8 requestKickSession : 1;
    
    /// 退出　判定フラグ
    /// 
    /// チェックが付いている場合、発動時に退出要求を発行
    u8 requestLeaveSession : 1;
    
    /// NPCへの侵入　判定フラグ
    /// 
    /// チェックが付いている場合、発動時にNPCへの侵入要求を発行
    u8 requestNpcInveda : 1;
    
    /// 成仏不可　判定フラグ
    /// 
    /// 死体状態になれるかどうか。このチェックが付いていると、死亡状態にならない
    u8 noDead : 1;
    
    /// 最大HPが増減しても、現在HPは影響しないか？
    u8 bCurrHPIndependeMaxHP : 1;
    
    /// 腐食無視
    /// 
    /// 【状態変化タイプ】が【腐食】による【耐久度】減少を無視する
    u8 corrosionIgnore : 1;
    
    /// 見る方：視覚索敵カット無視
    /// 
    /// 見る方にかける。見られる方に設定された視覚索敵カットを無視する
    u8 sightSearchCutIgnore : 1;
    
    /// 聞く方：聴覚索敵カット無視
    /// 
    /// 聞く方にかける。聞かれる方に設定された聴覚索敵カットを無視する
    u8 hearingSearchCutIgnore : 1;
    
    /// アンチマジック無効
    /// 
    /// アンチマジック範囲でも魔法を使用できる
    u8 antiMagicIgnore : 1;
    
    /// 偽ターゲット無効
    /// 
    /// 発生した偽ターゲットに引っかからなくなる
    u8 fakeTargetIgnore : 1;
    
    /// 偽ターゲット無効_不死系
    /// 
    /// 発生した不死系の偽ターゲットに引っかからなくなる
    u8 fakeTargetIgnoreUndead : 1;
    
    /// 偽ターゲット無効_獣系
    /// 
    /// 発生した獣系の偽ターゲットに引っかからなくなる
    u8 fakeTargetIgnoreAnimal : 1;
    
    /// グラビティ無効
    /// 
    /// グラビティ効果無効
    u8 grabityIgnore : 1;
    
    /// 毒無効
    /// 
    /// この効果がかかっていると毒にかからなくなる
    u8 disablePoison : 1;
    
    /// 疫病無効
    /// 
    /// この効果がかかっていると疫病にかからなくなる
    u8 disableDisease : 1;
    
    /// 出血無効
    /// 
    /// この効果がかかっていると出血にかからなくなる
    u8 disableBlood : 1;
    
    /// 呪無効
    /// 
    /// この効果がかかっていると呪いにかからなくなる
    u8 disableCurse : 1;
    
    /// 魅了有効
    /// 
    /// この効果がかかっていると魅了にかかるようになる
    u8 enableCharm : 1;
    
    /// TAEフラグの寿命延長可能か？
    /// 
    /// TAEによるフラグ設定時に寿命延長するか？
    u8 enableLifeTime : 1;
    
    /// 効果対象：PCのみ
    /// 
    /// この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
    u8 effectTargetPCOnlyTarget : 1;
    
    /// 解除条件:炎ダメージ
    /// 
    /// 炎ダメージによる特殊効果の解除を行うか？
    u8 isFireDamageCancel : 1;
    
    /// 寿命延長効果で延長するか？
    /// 
    /// 寿命延長効果が掛かっている時に延長対象になるかどうか
    u8 isExtendSpEffectLife : 1;
    
    /// 闘技場退出　判定フラグ
    /// 
    /// チェックが付いている場合、発動時に闘技場退出要求を発行
    u8 requestLeaveColiseumSession : 1;
    
    /// 筋力補正するか？
    u8 bAdjustStrengthAblity : 1;
    
    /// 技量補正するか？
    u8 bAdjustAgilityAblity : 1;
    
    /// 対溜めパラメータ変化
    /// 
    /// 溜め攻撃に対して効果を発揮するかしないかを設定する
    u8 chargeAttackParamChange : 1;
    
    /// 対投げパラメータ変化
    /// 
    /// 投げ攻撃に対して効果を発揮するかしないかを設定する
    u8 throwAttackParamChange : 1;
    
    /// 誓約0
    u8 vowType0 : 1;
    
    /// 誓約1
    u8 vowType1 : 1;
    
    /// 誓約2
    u8 vowType2 : 1;
    
    /// 誓約3
    u8 vowType3 : 1;
    
    /// 誓約4
    u8 vowType4 : 1;
    
    /// 誓約5
    u8 vowType5 : 1;
    
    /// 誓約6
    u8 vowType6 : 1;
    
    /// 誓約7
    u8 vowType7 : 1;
    
    /// 誓約8
    u8 vowType8 : 1;
    
    /// 誓約9
    u8 vowType9 : 1;
    
    /// 誓約10
    u8 vowType10 : 1;
    
    /// 誓約11
    u8 vowType11 : 1;
    
    /// 誓約12
    u8 vowType12 : 1;
    
    /// 誓約13
    u8 vowType13 : 1;
    
    /// 誓約14
    u8 vowType14 : 1;
    
    /// 誓約15
    u8 vowType15 : 1;
    
    /// 攻撃側ダメージレベル差し替え
    /// 
    /// 攻撃側のダメージレベルがこの値に指し換わる
    s8 repAtkDmgLv;
    
    /// 見る方：視覚距離倍率
    /// 
    /// 見る方にかける。自身のAI視覚距離に、設定された倍率をかける
    f32 sightSearchRate;
    
    /// 効果対象：●敵対
    /// 
    /// この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
    u8 effectTargetOpposeTarget : 1;
    
    /// 効果対象：○味方
    /// 
    /// この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
    u8 effectTargetFriendlyTarget : 1;
    
    /// 効果対象：自分
    /// 
    /// この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
    u8 effectTargetSelfTarget : 1;
    
    /// チームタイプ変更
    /// 
    /// 指定したチームタイプに上書きする
    s8 changeTeamType;
    
    /// ダミポリID。ダミポリID範囲は0～999.1000,10000の位はカテゴリ番号.
    s16 dmypolyId;
    
    /// 特殊効果VfxId_０
    /// 
    /// 特殊効果VfxId(-1無効)
    s32 vfxId;
    
    /// 元気玉上限時発動特殊効果Id
    s32 accumuOverFireId;
    
    /// 元気玉上限値
    s32 accumuOverVal;
    
    /// 元気玉下限時発動特殊効果Id
    s32 accumuUnderFireId;
    
    /// 元気玉下限値
    s32 accumuUnderVal;
    
    /// 元気玉蓄積値
    s32 accumuVal;
    
    /// 聞く方：AI音半径カット率
    /// 
    /// 聞く方にかける。発生している音半径の倍率。０がデフォルト。
    s32 hearingSearchEnemyCut;
    
    /// 見る方：認識視覚角度（幅_左）上書き[deg]
    /// 
    /// 見る方にかける。見る方の左方向の認識視覚角度[deg]
    u8 eyeAngLeft_Perceive;
    
    /// 見る方：認識視覚角度（幅_右）上書き[deg]
    /// 
    /// 見る方にかける。見る方の右方向の認識視覚角度[deg]
    u8 eyeAngRight_Perceive;
    
    /// 亡者度 変更
    /// 
    /// この値分亡者度を加算する
    s16 addDeceasedLv;
    
    /// 特殊効果VfxId_１
    /// 
    /// 特殊効果VfxId１(-1無効)
    s32 vfxId1;
    
    /// 特殊効果VfxId_２
    /// 
    /// 特殊効果VfxId２(-1無効)
    s32 vfxId2;
    
    /// 特殊効果VfxId_３
    /// 
    /// 特殊効果VfxId３(-1無効)
    s32 vfxId3;
    
    /// 特殊効果VfxId_４
    /// 
    /// 特殊効果VfxId４(-1無効)
    s32 vfxId4;
    
    /// 特殊効果VfxId_５
    /// 
    /// 特殊効果VfxId５(-1無効)
    s32 vfxId5;
    
    /// 特殊効果VfxId_６
    /// 
    /// 特殊効果VfxId６(-1無効)
    s32 vfxId6;
    
    /// 特殊効果VfxId_７
    /// 
    /// 特殊効果VfxId７(-1無効)
    s32 vfxId7;
    
    /// 冷気耐性攻撃力[point]
    /// 
    /// ヒットした時に、対象の【冷気耐性値】に加算する数値
    s32 registFreeze;
    
    /// 弾丸着弾時発生AI音ID
    /// 
    /// ソウルコインや幻聴で使うAI音のID。弾丸着弾時に発動。誘い頭蓋骨など
    s32 AppearAiSoundId;
    
    /// 追加フットエフェクト識別子
    /// 
    /// 特殊効果時に追加で発生させるフットエフェクトの識別子。XYYZZZのZZZ
    s16 addFootEffectSfxId;
    
    /// 画面効果タイプ
    /// 
    /// 適用する画面効果
    u8 postEffectType;
    
    /// 姿隠し中　フットエフェクト強制表示
    u8 isForceVisibleFootEffect;
    
    /// 強靭度 被ダメージ倍率
    /// 
    /// 強靭度版カット率
    f32 toughnessDamageCutRate;
    
    /// 特攻Aダメージ倍率補正
    /// 
    /// 特攻Aダメージ倍率に補正をかけます。１が通常。
    f32 weakDmgRateA;
    
    /// 特攻Bダメージ倍率補正
    /// 
    /// 特攻Bダメージ倍率に補正をかけます。１が通常。
    f32 weakDmgRateB;
    
    /// 特攻Cダメージ倍率補正
    /// 
    /// 特攻Cダメージ倍率に補正をかけます。１が通常。
    f32 weakDmgRateC;
    
    /// 特攻Dダメージ倍率補正
    /// 
    /// 特攻Dダメージ倍率に補正をかけます。１が通常。
    f32 weakDmgRateD;
    
    /// 特攻Eダメージ倍率補正
    /// 
    /// 特攻Eダメージ倍率に補正をかけます。１が通常。
    f32 weakDmgRateE;
    
    /// 特攻Fダメージ倍率補正
    /// 
    /// 特攻Fダメージ倍率に補正をかけます。１が通常。
    f32 weakDmgRateF;
    
    /// 防御側：闇ダメージ倍率
    /// 
    /// 闇ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 darkDamageCutRate;
    
    /// 闇防御力倍率
    /// 
    /// 闇防御力に設定した数値をかけます
    f32 darkDiffenceRate;
    
    /// 闇防御力[point]
    /// 
    /// 闇防御力に設定した数値を加減算する
    s32 darkDiffence;
    
    /// 攻撃側：闇ダメージ倍率
    /// 
    /// 闇ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 darkAttackRate;
    
    /// 闇攻撃力倍率
    /// 
    /// 闇攻撃力に設定した数値をかけます
    f32 darkAttackPowerRate;
    
    /// 闇攻撃力[point]
    /// 
    /// 闇攻撃力に設定した数値を加減算する
    s32 darkAttackPower;
    
    /// 暗闇丸見え半径[m]。この距離内にいる場合は暗所でも通常距離で見えるようになります
    f32 antiDarkSightRadius;
    
    /// 暗闇丸見えダミポリID(-1:マスター)。このダミポリを中心に丸見え領域を作成します
    s32 antiDarkSightDmypolyId;
    
    /// 発動条件　残りHP比率が一定以上[%]
    /// 
    /// 指定された値以上のHPを持っている時にしか発動しない
    f32 conditionHpRate;
    
    /// 消費スタミナ倍率
    /// 
    /// 行動パラメータの消費スタミナの値にかける倍率
    f32 consumeStaminaRate;
    
    /// アイテムドロップ補正
    /// 
    /// 設定された値が【アイテムドロップ補正】に加算される
    f32 itemDropRate;
    
    /// AI聴覚距離倍率
    /// 
    /// AI聴覚距離に、設定された倍率をかける
    f32 hearingSearchRate;
    
    /// 毒耐性変化[point]
    /// 
    /// 状態耐性値を増減させる
    s32 changePoisonResistPoint;
    
    /// 疫病耐性変化[point]
    /// 
    /// 状態耐性値を増減させる
    s32 changeDiseaseResistPoint;
    
    /// 出血耐性変化[point]
    /// 
    /// 状態耐性値を増減させる
    s32 changeBloodResistPoint;
    
    /// 呪耐性変化[point]
    /// 
    /// 状態耐性値を増減させる
    s32 changeCurseResistPoint;
    
    /// 冷気耐性変化[point]
    /// 
    /// 状態耐性値を増減させる
    s32 changeFreezeResistPoint;
    
    /// 攻撃側：斬撃ダメージ倍率
    /// 
    /// 斬撃ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 slashAttackRate;
    
    /// 攻撃側：軽打ダメージ倍率
    /// 
    /// 軽打ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 lightHitAttackRate;
    
    /// 攻撃側：刺突ダメージ倍率
    /// 
    /// 刺突ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 thrustAttackRate;
    
    /// 攻撃側：無属性ダメージ倍率
    /// 
    /// 無属性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 neutralAttackRate;
    
    /// 斬撃攻撃力倍率
    /// 
    /// 斬撃攻撃力に設定した数値をかけます
    f32 slashAttackPowerRate;
    
    /// 軽打攻撃力倍率
    /// 
    /// 軽打攻撃力に設定した数値をかけます
    f32 lightHitAttackPowerRate;
    
    /// 刺突攻撃力倍率
    /// 
    /// 刺突攻撃力に設定した数値をかけます
    f32 thrustAttackPowerRate;
    
    /// 無属性攻撃力倍率
    /// 
    /// 無属性攻撃力に設定した数値をかけます
    f32 neutralAttackPowerRate;
    
    /// 斬撃攻撃力[point]
    /// 
    /// 斬撃攻撃力に設定した数値を加減算する
    s32 slashAttackPower;
    
    /// 軽打攻撃力[point]
    /// 
    /// 軽打攻撃力に設定した数値を加減算する
    s32 lightHitAttackPower;
    
    /// 刺突攻撃力[point]
    /// 
    /// 刺突攻撃力に設定した数値を加減算する
    s32 thrustAttackPower;
    
    /// 無属性攻撃力[point]
    /// 
    /// 無属性攻撃力に設定した数値を加減算する
    s32 neutralAttackPower;
    
    /// 筋力補正変化[point]
    /// 
    /// 武器の補正値を加減算する
    s32 changeStrengthPoint;
    
    /// 俊敏補正変化[point]
    /// 
    /// 武器の補正値を加減算する
    s32 changeAgilityPoint;
    
    /// 魔力補正変化[point]
    /// 
    /// 武器の補正値を加減算する
    s32 changeMagicPoint;
    
    /// 信仰補正変化[point]
    /// 
    /// 武器の補正値を加減算する
    s32 changeFaithPoint;
    
    /// 運補正変化[point]
    /// 
    /// 武器の補正値を加減算する
    s32 changeLuckPoint;
    
    /// アーツポイント回復 筋力系
    /// 
    /// アーツポイント筋力を回復させる
    s8 recoverArtsPoint_Str;
    
    /// アーツポイント回復 技量系
    /// 
    /// アーツポイント技量を回復させる
    s8 recoverArtsPoint_Dex;
    
    /// アーツポイント回復 魔法系
    /// 
    /// アーツポイント魔法を回復させる
    s8 recoverArtsPoint_Magic;
    
    /// アーツポイント回復 奇跡系
    /// 
    /// アーツポイント奇跡を回復させる
    s8 recoverArtsPoint_Miracle;
    
    /// 投げタイプID
    /// 
    /// 通常投げ時に、このタイプIDに差し替える。SEQ00005 【投げシステム】特殊効果に応じて、実行される通常投げ（PC）を変更する
    s32 overrideThrowTypeId;
    
    /// 見られる方：視覚角度（幅_左）カット率
    /// 
    /// 見られる方にかける。見る方のAIの視覚索敵幅(左方向)のカット率。０がデフォルト。
    u8 sightSearchLeftAngleCut;
    
    /// 見られる方：視覚角度（幅_右）カット率
    /// 
    /// 見られる方にかける。見る方のAIの視覚索敵幅(右方向)のカット率。０がデフォルト。
    u8 sightSearchRightAngleCut;
    
    /// 見られる方：視覚角度（高さ_上）カット率
    /// 
    /// 見られる方にかける。見る方のAIの視覚索敵幅(上方向)のカット率。０がデフォルト。
    u8 sightSearchUpperAngleCut;
    
    /// 見られる方：視覚角度（高さ_下）カット率
    /// 
    /// 見られる方にかける。見る方のAIの視覚索敵幅(下方向)のカット率。０がデフォルト。
    u8 sightSearchBottomAngleCut;
    
    /// 見る方：視覚角度（高さ_上）上書き[deg]
    /// 
    /// 見る方にかける。見る方の上方向の視覚角度[deg]
    u8 eyeAngUpper;
    
    /// 見る方：視覚角度（高さ_下）上書き[deg]
    /// 
    /// 見る方にかける。見る方の下方向の視覚角度[deg]
    u8 eyeAngBottom;
    
    /// 見る方：視覚角度（幅_左）上書き[deg]
    /// 
    /// 見る方にかける。見る方の左方向の視覚角度[deg]
    u8 eyeAngLeft;
    
    /// 見る方：視覚角度（幅_右）上書き[deg]
    /// 
    /// 見る方にかける。見る方の右方向の視覚角度[deg]
    u8 eyeAngRight;
    
    /// 濡れタイプ
    /// 
    /// 濡れの見た目の種類。デカールIDの算出などに使われる。
    u8 wetConditionType;
    
    /// 冷気無効
    /// 
    /// この効果がかかっていると冷気にかからなくなる
    u8 disableFreeze : 1;
    
    /// 状態異常攻撃力倍率補正を適応するか
    /// 
    /// ○なら攻撃パラの状態異常攻撃力倍率補正を適応します。
    u8 isUseStatusAilmentAtkPowerCorrect : 1;
    
    /// 攻撃パラメータの攻撃力倍率補正を適応するか
    /// 
    /// ○なら攻撃パラの攻撃力倍率補正を適応します。
    u8 isUseAtkParamAtkPowerCorrect : 1;
    
    /// 効果対象：PC亡者のみ
    /// 
    /// この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
    u8 effectTargetPcDeceased : 1;
    
    /// 寿命短縮効果で短縮するか？
    /// 
    /// 寿命短縮効果が掛かっている時に短縮対象になるかどうか
    u8 isContractSpEffectLife : 1;
    
    /// 待ち状態に入ると削除
    /// 
    /// 待ち状態になった瞬間に削除するか？
    u8 isWaitModeDelete : 1;
    
    /// 無敵時でも発動するか
    /// 
    /// 状態変化タイプ「無敵時でも発動機能を適応」が掛かっているときのみ、無敵状態でもこの特殊効果からのダメージを適応するか
    u8 isIgnoreNoDamage : 1;
    
    /// ネット同期しない。ローカルに掛けるようになる、という意味ではなく、単にネット送信しない。例えばリモートキャラはローカル発動しないので、その場合何も起こらない。
    u8 isDisableNetSync : 1;
    
    /// 見る方：周辺視覚角度（高さ_上）上書き[deg]
    /// 
    /// 見る方にかける。見る方の上方向の周辺視覚角度[deg]
    u8 eyeAngUpper_Around;
    
    /// 見る方：周辺視覚角度（高さ_下）上書き[deg]
    /// 
    /// 見る方にかける。見る方の下方向の周辺視覚角度[deg]
    u8 eyeAngBottom_Around;
    
    /// SA値_被ダメージ倍率
    /// 
    /// SAダメージかかる倍率
    f32 saReceiveDamageRate;
    
    /// 防御側 プレイヤー 物理ダメージ補正倍率
    /// 
    /// プレイヤーから受けるダメージ値に対するダメージ補正。
    f32 defPlayerDmgCorrectRate_Physics;
    
    /// 防御側 プレイヤー 魔法ダメージ補正倍率
    /// 
    /// プレイヤーから受けるダメージ値に対するダメージ補正。
    f32 defPlayerDmgCorrectRate_Magic;
    
    /// 防御側 プレイヤー 炎ダメージ補正倍率
    /// 
    /// プレイヤーから受けるダメージ値に対するダメージ補正。
    f32 defPlayerDmgCorrectRate_Fire;
    
    /// 防御側 プレイヤー 雷ダメージ補正倍率
    /// 
    /// プレイヤーから受けるダメージ値に対するダメージ補正。
    f32 defPlayerDmgCorrectRate_Thunder;
    
    /// 防御側 プレイヤー 闇ダメージ補正倍率
    /// 
    /// プレイヤーから受けるダメージ値に対するダメージ補正。
    f32 defPlayerDmgCorrectRate_Dark;
    
    /// 防御側 敵 物理ダメージ補正倍率
    /// 
    /// 敵から受けるダメージ値に対するダメージ補正。
    f32 defEnemyDmgCorrectRate_Physics;
    
    /// 防御側 敵 魔法ダメージ補正倍率
    /// 
    /// 敵から受けるダメージ値に対するダメージ補正。
    f32 defEnemyDmgCorrectRate_Magic;
    
    /// 防御側 敵 炎ダメージ補正倍率
    /// 
    /// 敵から受けるダメージ値に対するダメージ補正。
    f32 defEnemyDmgCorrectRate_Fire;
    
    /// 防御側 敵 雷ダメージ補正倍率
    /// 
    /// 敵から受けるダメージ値に対するダメージ補正。
    f32 defEnemyDmgCorrectRate_Thunder;
    
    /// 防御側 敵 闇ダメージ補正倍率
    /// 
    /// 敵から受けるダメージ値に対するダメージ補正。
    f32 defEnemyDmgCorrectRate_Dark;
    
    /// 防御側 オブジェクトダメージ補正倍率
    /// 
    /// OBJから受けるダメージ値に対するダメージ補正。
    f32 defObjDmgCorrectRate;
    
    /// 攻撃側 プレイヤー 物理ダメージ補正倍率
    /// 
    /// プレイヤーに与えるダメージ値に対するダメージ補正。
    f32 atkPlayerDmgCorrectRate_Physics;
    
    /// 攻撃側 プレイヤー 魔法ダメージ補正倍率
    /// 
    /// プレイヤーに与えるダメージ値に対するダメージ補正。
    f32 atkPlayerDmgCorrectRate_Magic;
    
    /// 攻撃側 プレイヤー 炎ダメージ補正倍率
    /// 
    /// プレイヤーに与えるダメージ値に対するダメージ補正。
    f32 atkPlayerDmgCorrectRate_Fire;
    
    /// 攻撃側 プレイヤー 雷ダメージ補正倍率
    /// 
    /// プレイヤーに与えるダメージ値に対するダメージ補正。
    f32 atkPlayerDmgCorrectRate_Thunder;
    
    /// 攻撃側 プレイヤー 闇ダメージ補正倍率
    /// 
    /// プレイヤーに与えるダメージ値に対するダメージ補正。
    f32 atkPlayerDmgCorrectRate_Dark;
    
    /// 攻撃側 敵 物理ダメージ補正倍率
    /// 
    /// 敵に与えるダメージ値に対するダメージ補正。
    f32 atkEnemyDmgCorrectRate_Physics;
    
    /// 攻撃側 敵 魔法ダメージ補正倍率
    /// 
    /// 敵に与えるダメージ値に対するダメージ補正。
    f32 atkEnemyDmgCorrectRate_Magic;
    
    /// 攻撃側 敵 炎ダメージ補正倍率
    /// 
    /// 敵に与えるダメージ値に対するダメージ補正。
    f32 atkEnemyDmgCorrectRate_Fire;
    
    /// 攻撃側 敵 雷ダメージ補正倍率
    /// 
    /// 敵に与えるダメージ値に対するダメージ補正。
    f32 atkEnemyDmgCorrectRate_Thunder;
    
    /// 攻撃側 敵 闇ダメージ補正倍率
    /// 
    /// 敵に与えるダメージ値に対するダメージ補正。
    f32 atkEnemyDmgCorrectRate_Dark;
    
    /// 冷気耐性変化倍率
    /// 
    /// 冷気耐性値に設定された倍率をかける
    f32 registFreezeChangeRate;
    
    /// 発動条件状態変化タイプ1
    u16 invocationConditionsStateChange1;
    
    /// 発動条件状態変化タイプ2
    u16 invocationConditionsStateChange2;
    
    /// 発動条件状態変化タイプ3
    u16 invocationConditionsStateChange3;
    
    /// 対呪術パラメータ変化
    /// 
    /// 呪術に対して効果を発揮するかしないかを設定する
    u8 shamanParamChange;
    
    /// 技量キャンセル用仮想ステータス
    /// 
    /// 「技量キャンセル」のTAEフラグの終了タイミングを計算する時に、この値を追加して計算する
    s8 dexterityCancelSystemOnlyAddDexterity;
    
    /// 販売価格補正：倍率
    f32 value_Magnification;
    
    /// アーツ消費MP倍率[%]
    f32 artsConsumptionRate;
    
    /// 魔法消費MP倍率[%]
    f32 magicConsumptionRate;
    
    /// 呪術消費MP倍率[%]
    f32 shamanConsumptionRate;
    
    /// 奇跡消費MP倍率[%]
    f32 miracleConsumptionRate;
    
    /// エスト瓶HPダメージ量[%]
    /// 
    /// 一度の発動で最大HPの何%分を加算（または減算）するかを設定
    s32 changeHpEstusFlaskRate;
    
    /// エスト瓶HPダメージ量[point]
    /// 
    /// 一度の発動で何ポイント加算（または減算）するかを設定
    s32 changeHpEstusFlaskPoint;
    
    /// エスト瓶MPダメージ量[%]
    /// 
    /// 一度の発動で最大MPの何%分を加算（または減算）するかを設定
    s32 changeMpEstusFlaskRate;
    
    /// エスト瓶MPダメージ量[point]
    /// 
    /// 一度の発動で何ポイント加算（または減算）するかを設定
    s32 changeMpEstusFlaskPoint;
    
    /// エスト瓶HPダメージ倍率
    /// 
    /// HPエスト瓶のダメージ量に対して補正をかける
    f32 changeHpEstusFlaskCorrectRate;
    
    /// エスト瓶MPダメージ倍率
    /// 
    /// MPエスト瓶のダメージ量に対して補正をかける
    f32 changeMpEstusFlaskCorrectRate;
    
    /// HPドレイン発動特殊効果
    /// 
    /// 状態変化タイプ「HPドレイン」の特殊効果が有効の時に、敵を倒した際に同じ特殊効果の「HPドレイン発動特殊効果」に設定されている特殊効果IDを呼び出す(0：無視)
    s32 applyIdOnGetSoul;
    
    /// 寿命延長倍率
    /// 
    /// 状態変化タイプ「寿命延長」の延長係数
    f32 extendLifeRate;
    
    /// 寿命短縮倍率
    /// 
    /// 状態変化タイプ「寿命短縮」の短縮係数
    f32 contractLifeRate;
    
    /// 行動判定IDに加算する加算値
    /// 
    /// 行動判定IDの加算値 ０の場合は行動を切り替えるのではなく、行動しなくなります。
    u16 addBehaviorJudgeId_add;
    
    /// 特殊効果消失時にキャラのペイントデカールを削除するグループID
    /// 
    /// 特殊効果が消失した時（寿命/何かに上書きされる/消される…など）に、同じグループIDの特殊効果がかかっていなければペイントデカールを削除する。
    s16 effectEndDeleteDecalGroupId;
    
    /// 被ダメージ オブジェクト攻撃力倍率
    /// 
    /// OBJから受けるダメージに対して攻撃力を補正する。（ダメージ補正ではない）
    f32 defObjectAttackPowerRate;
    
    /// 生命力追加値
    /// 
    /// 成長ステータスに値を加える
    s8 addLifeForceStatus;
    
    /// 精神力追加値
    /// 
    /// 成長ステータスに値を加える
    s8 addWillpowerStatus;
    
    /// 持久力追加値
    /// 
    /// 成長ステータスに値を加える
    s8 addEndureStatus;
    
    /// 体力追加値
    /// 
    /// 成長ステータスに値を加える
    s8 addVitalityStatus;
    
    /// 筋力追加値
    /// 
    /// 成長ステータスに値を加える
    s8 addStrengthStatus;
    
    /// 技量追加値
    /// 
    /// 成長ステータスに値を加える
    s8 addDexterityStatus;
    
    /// 理力追加値
    /// 
    /// 成長ステータスに値を加える
    s8 addMagicStatus;
    
    /// 信仰追加値
    /// 
    /// 成長ステータスに値を加える
    s8 addFaithStatus;
    
    /// 運追加値
    /// 
    /// 成長ステータスに値を加える
    s8 addLuckStatus;
    
    /// スタミナ物理属性
    /// 
    /// 防御者のどのスタミナダメージ倍率を参照するか決める。例) 斬撃に設定すると、防御側の斬撃スタミナダメージ倍率を参照する。
    u8 staminaPhysicsAttribute;
    
    /// Behavior参照フラグ_Behavior用生存フラグを見るか
    /// 
    /// 該当の特殊効果をenv( "特殊効果発動中か_Behavior参照ID", int )で参照した場合に、○なら特殊効果が存在していてもBehavior用生存フラグがfalseならFALSEを返す。特殊効果が存在し、Behavior用生存フラグがtrueならTRUEを返す。×なら特殊効果が存在していればTRUEを返す。存在しなければFALSEを返す。同じBehavior参照IDの特殊効果が複数存在している場合、　すべての特殊効果が○かつすべての特殊効果のBehavior用生存フラグがfalseならFALSEを返す。いずれかの特殊効果が×、もしくはいずれかの特殊効果のBehavior用生存フラグがtrueならTRUEを返す。詳細は下記資料に記載。alienbrain://SERVER-AB6/NTC:596/doc/Plan/02_システム/01_PC/030-110_TAEで設定した特殊効果がBehaviorスクリプトから見て1フレーム長く生存する問題とその対策について.xlsx
    u8 behaviorRefFlag_checkAliveFlagForBehavior;
    
    /// 必要忍殺回数回復
    /// 
    /// 設定した必要忍殺回数を回復させる。最大値以上にはならない。
    u8 recoveRremainNinsatsuNum;
    
    /// 防御側：斬撃スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が斬撃のときにスタミナダメージに乗算する
    f32 defSlashStaminaDmgRate;
    
    /// 防御側：軽打スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が軽打のときにスタミナダメージに乗算する
    f32 defLightHitStaminaDmgRate;
    
    /// 防御側：刺突スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が刺突のときにスタミナダメージに乗算する
    f32 defThrustStaminaDmgRate;
    
    /// 防御側：無属性スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が無属性のときにスタミナダメージに乗算する
    f32 defNeutralStaminaDmgRate;
    
    /// 防御側：忍殺スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が忍殺のときにスタミナダメージに乗算する
    f32 defNinsatuStaminaDmgRate;
    
    /// 防御側：重打スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が重打のときにスタミナダメージに乗算する
    f32 defHeavyHitStaminaDmgRate;
    
    /// 防御側：対地スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が対地のときにスタミナダメージに乗算する
    f32 defAntiGroundStaminaDmgRate;
    
    /// 防御側：対空スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が対空のときにスタミナダメージに乗算する
    f32 defAntiAirStaminaDmgRate;
    
    /// 防御側：軽射スタミナダメージ倍率
    /// 
    /// スタミナ物理属性が軽射のときにスタミナダメージに乗算する
    f32 defLightShootStaminaDmgRate;
    
    /// 攻撃側：忍殺ダメージ倍率
    /// 
    /// 忍殺ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 atkNinsatsuDmgRate;
    
    /// 攻撃側：重打ダメージ倍率
    /// 
    /// 重打ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 atkHeavyHitDmgRate;
    
    /// 攻撃側：対地ダメージ倍率
    /// 
    /// 対地ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 atkAntiGroundDmgRate;
    
    /// 攻撃側：対空ダメージ倍率
    /// 
    /// 対空ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 atkAntiAirDmgRate;
    
    /// 攻撃側：軽射ダメージ倍率
    /// 
    /// 軽射ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 atkLightShootDmgRate;
    
    /// 忍殺攻撃力倍率
    /// 
    /// 忍殺攻撃力に設定した数値をかけます
    f32 ninsatsuAttackPowerRate;
    
    /// 重打攻撃力倍率
    /// 
    /// 重打攻撃力に設定した数値をかけます
    f32 heavyHitAttackPowerRate;
    
    /// 対地攻撃力倍率
    /// 
    /// 対地攻撃力に設定した数値をかけます
    f32 antiGroundAttackPowerRate;
    
    /// 対空攻撃力倍率
    /// 
    /// 対空攻撃力に設定した数値をかけます
    f32 antiAirAttackPowerRate;
    
    /// 軽射攻撃力倍率
    /// 
    /// 軽射攻撃力に設定した数値をかけます
    f32 lightShootAttackPowerRate;
    
    /// 忍殺攻撃力[point]
    /// 
    /// 忍殺攻撃力に設定した数値を加減算する
    s32 ninsatsuAttackPower;
    
    /// 重打攻撃力[point]
    /// 
    /// 重打攻撃力に設定した数値を加減算する
    s32 heavyHitAttackPower;
    
    /// 対地攻撃力[point]
    /// 
    /// 対地攻撃力に設定した数値を加減算する
    s32 antiGroundAttackPower;
    
    /// 対空攻撃力[point]
    /// 
    /// 対空攻撃力に設定した数値を加減算する
    s32 antiAirAttackPower;
    
    /// 軽射攻撃力[point]
    /// 
    /// 軽射攻撃力に設定した数値を加減算する
    s32 lightShootAttackPower;
    
    /// 防御側：忍殺ダメージ倍率
    /// 
    /// 忍殺ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 defNinsatsuDmgRate;
    
    /// 防御側：重打ダメージ倍率
    /// 
    /// 重打ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 defHeavyHitDmgRate;
    
    /// 防御側：対地ダメージ倍率
    /// 
    /// 対地ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 defAntiGroundDmgRate;
    
    /// 防御側：対空ダメージ倍率
    /// 
    /// 対空ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 defAntiAirDmgRate;
    
    /// 防御側：軽射ダメージ倍率
    /// 
    /// 軽射ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 defLightShootDmgRate;
    
    /// 投げ変化IDオフセット
    u32 throwChangeIdOffset;
    
    /// 老化フェード時間[s]
    /// 
    /// 老化モデル差し替え時のクロスフェード時間[s]
    f32 agingFadeTime;
    
    /// 受動スタミナ攻撃力倍率
    /// 
    /// ジャスガが成立したとき、ジャスガした側のこのパラメータの倍率をジャスガされた側の攻撃パラメータの《被スタミナダメージ_攻撃側_弾き負け》に乗算する
    f32 defStaminaAttackRate;
    
    /// 攻撃接触パリィ時スタミナ攻撃力倍率
    /// 
    /// 見切りが成立したとき、見切りした側のこのパラメータの倍率を見切りされた側の攻撃パラメータの《攻撃接触パリィ時被スタミナダメージ》に乗算する
    f32 attackHitParryStaminaAttackRate;
    
    /// 最大HP増減量[point]
    /// 
    /// 最大HPにこの値を加算する
    s16 maxHpIncrease;
    
    /// 最大スタミナ増減量[point]
    /// 
    /// 最大SPにこの値を加算する
    s16 maxSpIncrease;
    
    /// カウンター特殊効果ID
    /// 
    /// カウンター特殊効果発動条件を満たしたときに攻撃者にかける特殊効果のID
    s32 counterSpEffectId;
    
    /// カウンター特殊効果発動条件
    /// 
    /// 受けた攻撃の《カウンター特殊効果発動用識別値》と一致することで条件を満たす。
    u8 counterSpEffectCondition;
    
    /// チーム攻撃影響力_上書き
    /// 
    /// 対象の【チーム攻撃影響力】の値を、上書きして変更する。デフォルト値（-1）のときは変更しない。
    s8 teamOffenseEffectivity;
    
    /// 姿隠しロック不可になるα値[%]
    /// 
    /// 姿隠し中にロック不可能になるα値
    s8 unlockThresholdCamouflage;
    
    /// 偽装先ダメージ部位
    /// 
    /// ダメージを受けた時、実際のヒット部位に関わらずここで指定した部位にダメージを受けたことにして部位によるダメージの減少や伝搬率補正を行う
    u8 camouflageHitPartsGroup;
    
    /// キャラワイヤーバリエーション番号
    /// 
    /// キャラに特殊効果がかかっている間、このバリエーションIDでワイヤーのターゲッティング＆アクションを有効にする。-1なら無効。
    s32 chrWireVariationNo;
    
    /// キャラワイヤーターゲットダミポリID
    /// 
    /// このIDのダミポリ位置にワイヤーエッジを生成する。-1なら原点に生成。
    s16 chrWireTargetDmypolyId;
    
    /// キャラワイヤーランディングポイントダミポリID
    /// 
    /// このIDのダミポリ位置にランディングポイントを生成する。-1なら原点に生成。
    s16 chrWireLandingPointDmypolyId;
    
    /// Behavior参照ID
    /// 
    /// 異なる特殊効果をまとめてビヘイビアスクリプトから発動中かどうか判別するためのID
    s32 behaviorRefId;
    
    /// 防御側：毒耐性ダメージ倍率
    /// 
    /// 特殊効果の毒耐性攻撃力[point]に対して倍率をかける
    f32 defPoisonResistDamageRate;
    
    /// 防御側：疫病耐性ダメージ倍率
    /// 
    /// 特殊効果の疫病耐性攻撃力[point]に対して倍率をかける
    f32 defDiseaseResistDamageRate;
    
    /// 防御側：出血耐性ダメージ倍率
    /// 
    /// 特殊効果の出血耐性攻撃力[point]に対して倍率をかける
    f32 defBloodResistDamageRate;
    
    /// 防御側：呪耐性ダメージ倍率
    /// 
    /// 特殊効果の呪耐性攻撃力[point]に対して倍率をかける
    f32 defCurseResistDamageRate;
    
    /// 防御側：冷気耐性ダメージ倍率
    /// 
    /// 特殊効果の冷気耐性攻撃力[point]に対して倍率をかける
    f32 defFreezeResistDamageRate;
    
    /// 防御側：属性Aスタミナダメージ倍率
    /// 
    /// スタミナ物理属性が属性Aのときにスタミナダメージに乗算する
    f32 defAttriAStaminaDmgRate;
    
    /// 防御側：属性Bスタミナダメージ倍率
    /// 
    /// スタミナ物理属性が属性Bのときにスタミナダメージに乗算する
    f32 defAttriBStaminaDmgRate;
    
    /// 防御側：属性Cスタミナダメージ倍率
    /// 
    /// スタミナ物理属性が属性Cのときにスタミナダメージに乗算する
    f32 defAttriCStaminaDmgRate;
    
    /// 攻撃側：属性Aダメージ倍率
    /// 
    /// 属性Aダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 attriAAttackRate;
    
    /// 攻撃側：属性Bダメージ倍率
    /// 
    /// 属性Bダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 attriBAttackRate;
    
    /// 攻撃側：属性Cダメージ倍率
    /// 
    /// 属性Cダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 attriCAttackRate;
    
    /// 属性A攻撃力倍率
    /// 
    /// 属性A攻撃力に設定した数値をかけます
    f32 attriAAttackPowerRate;
    
    /// 属性B攻撃力倍率
    /// 
    /// 属性B攻撃力に設定した数値をかけます
    f32 attriBAttackPowerRate;
    
    /// 属性C攻撃力倍率
    /// 
    /// 属性C攻撃力に設定した数値をかけます
    f32 attriCAttackPowerRate;
    
    /// 属性A攻撃力[point]
    /// 
    /// 属性A攻撃力に設定した数値を加減算する
    s32 attriAAttackPower;
    
    /// 属性B攻撃力[point]
    /// 
    /// 属性B攻撃力に設定した数値を加減算する
    s32 attriBAttackPower;
    
    /// 属性C攻撃力[point]
    /// 
    /// 属性C攻撃力に設定した数値を加減算する
    s32 attriCAttackPower;
    
    /// 防御側：属性Aダメージ倍率
    /// 
    /// 属性Aダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 attriADamageCutRate;
    
    /// 防御側：属性Bダメージ倍率
    /// 
    /// 属性Bダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 attriBDamageCutRate;
    
    /// 防御側：属性Cダメージ倍率
    /// 
    /// 属性Cダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
    f32 attriCDamageCutRate;
    
    /// リソースアイテムドロップ補正
    /// 
    /// この値（重ねがけしたときは合計値）を補正倍率として基本出現ポイントに乗算する
    f32 resourceItemDropRate;
    
    /// 復活リキャストポイントダメージ[point]
    /// 
    /// 発動時、復活リキャストポイントからこの値を減算する。
    s32 revivalRecastDamage;
    
    /// 所持スキル経験値率
    /// 
    /// 敵周回効果用。設定されているキャラから外にスキル経験値が出て行く時に適用されます。
    f32 haveSkillPointRate;
    
    /// スキル経験値加算
    /// 
    /// 所持スキル経験値に、設定値を加算する
    s32 skillPoint;
    
    /// スタミナ回復速度変化倍率
    /// 
    /// スタミナ回復速度に対して乗算する値
    f32 staminaRecoverSpeedRate;
    
    /// 攻撃側 プレイヤー スタミナダメージ補正倍率
    /// 
    /// プレイヤーに与えるスタミナ値に対する補正。
    f32 atkPlayerDmgCorrectRate_Stamina;
    
    /// 攻撃側 敵 スタミナダメージ補正倍率
    /// 
    /// 敵に与えるスタミナ値に対する補正。
    f32 atkEnemyDmgCorrectRate_Stamina;
    
    /// 防御側 プレイヤー スタミナダメージ補正倍率
    /// 
    /// プレイヤーから受けるスタミナ値に対する補正。
    f32 defPlayerDmgCorrectRate_Stamina;
    
    /// 防御側 敵 スタミナダメージ補正倍率
    /// 
    /// 敵から受けるスタミナ値に対する補正。
    f32 defEnemyDmgCorrectRate_Stamina;
    
    /// 見る方：周辺視覚角度（幅_左）上書き[deg]
    /// 
    /// 見る方にかける。見る方の左方向の周辺視覚角度[deg]
    u8 eyeAngLeft_Around;
    
    /// 見る方：周辺視覚角度（幅_右）上書き[deg]
    /// 
    /// 見る方にかける。見る方の右方向の周辺視覚角度[deg]
    u8 eyeAngRight_Around;
    
    /// pad
    dummy8 pad3[6];
    
};

struct CHR_PHYSICS_HOMING_ST {
    static constexpr const char* TYPE_NAME = "CHR_PHYSICS_HOMING_ST";
    
    /// 目標地点オフセットX[m]
    /// 
    /// 基準位置からこの値だけ左右にオフセットした位置を目標地点とする。
    f32 targetOffsetX;
    
    /// 目標地点オフセットY[m]
    /// 
    /// 基準位置からこの値だけ上下にオフセットした位置を目標地点とする。
    f32 targetOffsetY;
    
    /// 目標地点オフセットZ[m]
    /// 
    /// 基準位置からこの値だけ前後にオフセットした位置を目標地点とする。
    f32 targetOffsetZ;
    
    /// 目標地点基準ダミポリ（キャラへのホーミング時のみ）
    /// 
    /// 目標地点の基準位置とするキャラのダミポリ。-1ならキャラの原点を使用する。
    s16 targetBaseDmyPolyId;
    
    /// 落下補正（追尾）
    /// 
    /// 移動する目標地点に対して追尾するように落下中の速度に補正をかけるかどうか。
    u8 fallCorrectionChase;
    
    /// ホーミングターゲットをシステム旋回目標にするか？
    /// 
    /// 速度変化してからホーミングターゲットが無効になるまでの間、システム旋回の目標をホーミングターゲットに上書き変更するかどうか。"×"の場合は通常通り、ロック中のキャラや敵ターゲットに対してシステム旋回する。
    u8 fallCorrectionTurn;
    
    /// 落下補正（追尾）加速度上限[m/s^2]
    /// 
    /// 落下補正（追尾）で掛ける加速度の上限値。目標地点の移動に対する追尾性能に影響する。
    f32 fallCorrectionChaseMaxAcceleration;
    
    /// 初速補正
    /// 
    /// 速度変化パラメータの設定値の代わりに目標地点に到達するような初速をかけるかどうか。なお、初速補正をしない場合、または補正できない場合（補正の計算方法による）は元の速度変化パラメータの設定に従い速度を変化させる。
    u8 initialVelocityCorrection;
    
    /// 落下補正（到達保証）
    /// 
    /// 落下先と目標地点のズレを吸収するよう、落下中の速度に補正をかけるかどうか。
    u8 fallCorrectionGuaranteeArrival;
    
    /// パディング
    dummy8 pad0[2];
    
    /// 落下補正（追尾）最大速度割合
    /// 
    /// ホーミング開始時の平面速度に対してこの割合を掛けた値を、落下補正（追尾）有効時に加速できる最大速度とする。
    f32 fallCorrectionChaseMaxVelocityRate;
    
    /// パディング
    dummy8 pad1[4];
    
};

struct BONFIRE_WARP_PARAM_ST {
    static constexpr const char* TYPE_NAME = "BONFIRE_WARP_PARAM_ST";
    
    /// イベントフラグID
    /// 
    /// 解除条件イベントフラグID
    s32 eventflagId;
    
    /// 篝火エンティティID
    s32 bonfireEntityId;
    
    /// メッセージID
    /// 
    /// 表示メッセージID
    s32 msgId;
    
    /// メニューテキストID
    /// 
    /// ワープメニューの説明テキストID
    s32 menuTextId;
    
    /// メニューサムネール画像ID
    /// 
    /// ワープメニューのサムネール画像ID
    s32 menuImageId;
    
    /// メニューページ番号
    /// 
    /// ワープメニューのページ番号（タブ番号）
    u8 menuPageNo;
    
    /// 拠点篝火か
    u8 isHome;
    
    /// 儀式Id(下4桁)
    /// 
    /// 儀式IDの下4桁。-1以外の値の場合、ワープ時に乗っていたマップブロックの儀式IDを変更する(旧CeremonyId)
    s16 blockCultId;
    
    /// グレーアウトイベントフラグID
    /// 
    /// グレーアウト条件イベントフラグID
    s32 grayoutEventflagId;
    
    /// パッド
    /// 
    /// pad
    dummy8 pad1[4];
    
};

struct BUDGET_PARAM_ST {
    static constexpr const char* TYPE_NAME = "BUDGET_PARAM_ST";
    
    /// VRAM:ALL(単位はMB)
    f32 vram_all;
    
    /// VRAM:マップ/オブジェ テクスチャ(単位はMB)
    f32 vram_mapobj_tex;
    
    /// VRAM:マップ/オブジェ モデル(単位はMB)
    f32 vram_mapobj_mdl;
    
    /// VRAM:マップ(単位はMB)
    f32 vram_map;
    
    /// VRAM:キャラ(単位はMB)
    f32 vram_chr;
    
    /// VRAM:パーツ(単位はMB)
    f32 vram_parts;
    
    /// VRAM:SFX(単位はMB)
    f32 vram_sfx;
    
    /// VRAM:キャラ テクスチャ(単位はMB)
    f32 vram_chr_tex;
    
    /// VRAM:キャラ モデル(単位はMB)
    f32 vram_chr_mdl;
    
    /// VRAM:パーツ テクスチャ(単位はMB)
    f32 vram_parts_tex;
    
    /// VRAM:パーツ モデル(単位はMB)
    f32 vram_parts_mdl;
    
    /// VRAM:SFX テクスチャ(単位はMB)
    f32 vram_sfx_tex;
    
    /// VRAM:SFX モデル(単位はMB)
    f32 vram_sfx_mdl;
    
    /// VRAM:Gi(単位はMB)
    f32 vram_gi;
    
    /// VRAM:メニュー(単位はMB)
    f32 vram_menu_tex;
    
    /// VRAM:DECAL_RT
    /// 
    /// VRAM:DECALレンダーターゲット(単位はMB)
    f32 vram_decal_rt;
    
    /// VRAM:DECAL(単位はMB)
    f32 vram_decal;
    
    /// VRAM:YEBIS(単位はMB)
    f32 vram_yebis;
    
    /// VRAM:その他 テクスチャ
    /// 
    /// VRAM:その他 モデル(単位はMB)
    f32 vram_other_tex;
    
    /// VRAM:その他 モデル
    /// 
    /// VRAM:その他 テクスチャ(単位はMB)
    f32 vram_other_mdl;
    
    /// HAVOK:アニメ(単位はMB)
    f32 havok_anim;
    
    /// HAVOK:配置(単位はMB)
    f32 havok_ins;
    
    /// HAVOK:ヒット(単位はMB)
    f32 havok_hit;
    
    /// VRAM:その他(単位はMB)
    f32 vram_other;
    
    /// VRAM:合算値(単位はMB)
    f32 vram_detail_all;
    
    /// VRAM:キャラ&パーツ
    /// 
    /// VRAM:キャラとパーツ合算値(単位はMB)
    f32 vram_chr_and_parts;
    
    /// CPU:描画処理時間（単位はmsec）
    f32 cpu_draw_time;
    
    /// GPU:描画処理時間（単位はmsec）
    f32 gpu_draw_time;
    
    /// GFX:描画三角形
    f32 gfx_triangle;
    
    /// GFX:モデル
    f32 gfx_model;
    
    /// GFX:動的光源
    f32 gfx_dynamic_light;
    
    /// GFX:マテリアル
    f32 gfx_material;
    
    /// GFX:関節
    f32 gfx_bone;
    
    /// GFX:SFX
    f32 gfx_sfx;
    
    /// CPU:キャラ数
    f32 cpu_char_num;
    
    /// 予約領域
    dummy8 reserve[20];
    
};

struct MENU_TUTORIAL_PARAM_ST {
    static constexpr const char* TYPE_NAME = "MENU_TUTORIAL_PARAM_ST";
    
    /// 表示タイミング
    /// 
    /// タブを開いたタイミングで表示する
    s32 viewType;
    
    /// 起動イベントフラグ
    /// 
    /// 起動するイベントフラグ
    s32 beginEventFlagId;
    
    /// 終了イベントフラグ
    /// 
    /// 終了するイベントフラグ
    s32 endEventFlagId;
    
    /// タイトルメッセージＩＤ
    /// 
    /// タイトルメッセージのテキストID
    s32 titleMessageId;
    
    /// 説明メッセージＩＤ
    /// 
    /// 説明メッセージのテキストＩＤ
    s32 descMessageId;
    
    /// テクスチャーＩＤ
    /// 
    /// テクスチャのＩＤ
    s32 textureId;
    
    /// padding
    dummy8 pad[8];
    
};

struct WIRE_SET_PARAM_ST {
    static constexpr const char* TYPE_NAME = "WIRE_SET_PARAM_ST";
    
    /// 識別子1：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId0;
    
    /// 識別子2：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId1;
    
    /// 識別子3：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId2;
    
    /// 識別子4：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId3;
    
    /// 識別子5：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId4;
    
    /// 識別子6：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId5;
    
    /// 識別子7：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId6;
    
    /// 識別子8：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId7;
    
    /// 識別子9：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId8;
    
    /// 識別子10：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId9;
    
    /// 識別子11：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId10;
    
    /// 識別子12：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId11;
    
    /// 識別子13：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId12;
    
    /// 識別子14：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId13;
    
    /// 識別子15：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId14;
    
    /// 識別子16：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId15;
    
    /// 識別子17：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId16;
    
    /// 識別子18：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId17;
    
    /// 識別子19：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId18;
    
    /// 識別子20：ワイヤーポイント検索パラメータID
    u32 wirePointSearchParamId19;
    
};

struct SWORD_ARTS_PARAM_ST {
    static constexpr const char* TYPE_NAME = "SWORD_ARTS_PARAM_ST";
    
    /// 剣戟ID
    /// 
    /// ビヘイビアスクリプトに渡してどの剣戟か判定するためのもの
    u8 swordArtsType;
    
    /// アーツ速度
    /// 
    /// どのキャンセルタイミングを見るか。0：通常（左手攻撃）／1：早い／2：遅い
    u8 artsSpeedType;
    
    /// 関連ステータス
    /// 
    /// どの系統のアーツポイントを参照するか
    s8 refStatus;
    
    /// FE表示設定
    /// 
    /// FEの表示設定
    s8 feType;
    
    /// 消費ポイント L1
    /// 
    /// L1によりアーツを出したときに消費するポイント
    s8 usePoint_L1;
    
    /// 消費ポイント L2
    /// 
    /// L2によりアーツを出したときに消費するポイント
    s8 usePoint_L2;
    
    /// 消費ポイント R1
    /// 
    /// R1によりアーツを出したときに消費するポイント
    s8 usePoint_R1;
    
    /// 消費ポイント R2
    /// 
    /// R2によりアーツを出したときに消費するポイント
    s8 usePoint_R2;
    
    /// テキストID
    /// 
    /// アーツ説明用のテキストID
    s32 textId;
    
    /// 消費MP L1
    /// 
    /// L1によりアーツを出したときに消費するMP
    s16 useMagicPoint_L1;
    
    /// 消費MP L2
    /// 
    /// L2によりアーツを出したときに消費するMP
    s16 useMagicPoint_L2;
    
    /// 消費MP R1
    /// 
    /// R1によりアーツを出したときに消費するMP
    s16 useMagicPoint_R1;
    
    /// 消費MP R2
    /// 
    /// R2によりアーツを出したときに消費するMP
    s16 useMagicPoint_R2;
    
    /// 盾種別アイコン（上書き）
    /// 
    /// 上書きしない場合は、武器パラの剣戟IDを元にアイコン表示されます。
    s8 shieldIconType;
    
    /// 予約領域
    dummy8 reserve[11];
    
};

struct THROW_DIRECTION_SE_PARAM_ST {
    static constexpr const char* TYPE_NAME = "THROW_DIRECTION_SE_PARAM_ST";
    
    /// 0
    /// 
    /// 使用するSEのID
    s32 seId_00;
    
    /// 1
    /// 
    /// 使用するSEのID
    s32 seId_01;
    
    /// 2
    /// 
    /// 使用するSEのID
    s32 seId_02;
    
    /// 3
    /// 
    /// 使用するSEのID
    s32 seId_03;
    
    /// 4
    /// 
    /// 使用するSEのID
    s32 seId_04;
    
    /// 5
    /// 
    /// 使用するSEのID
    s32 seId_05;
    
    /// 6
    /// 
    /// 使用するSEのID
    s32 seId_06;
    
    /// 7
    /// 
    /// 使用するSEのID
    s32 seId_07;
    
    /// 8
    /// 
    /// 使用するSEのID
    s32 seId_08;
    
    /// 9
    /// 
    /// 使用するSEのID
    s32 seId_09;
    
    /// 10
    /// 
    /// 使用するSEのID
    s32 seId_10;
    
    /// 11
    /// 
    /// 使用するSEのID
    s32 seId_11;
    
    /// 12
    /// 
    /// 使用するSEのID
    s32 seId_12;
    
    /// 13
    /// 
    /// 使用するSEのID
    s32 seId_13;
    
    /// 14
    /// 
    /// 使用するSEのID
    s32 seId_14;
    
    /// 15
    /// 
    /// 使用するSEのID
    s32 seId_15;
    
    /// 16
    /// 
    /// 使用するSEのID
    s32 seId_16;
    
    /// 17
    /// 
    /// 使用するSEのID
    s32 seId_17;
    
    /// 18
    /// 
    /// 使用するSEのID
    s32 seId_18;
    
    /// 19
    /// 
    /// 使用するSEのID
    s32 seId_19;
    
    /// 20
    /// 
    /// 使用するSEのID
    s32 seId_20;
    
    /// 21
    /// 
    /// 使用するSEのID
    s32 seId_21;
    
    /// 22
    /// 
    /// 使用するSEのID
    s32 seId_22;
    
    /// 23
    /// 
    /// 使用するSEのID
    s32 seId_23;
    
    /// 24
    /// 
    /// 使用するSEのID
    s32 seId_24;
    
    /// 25
    /// 
    /// 使用するSEのID
    s32 seId_25;
    
    /// 26
    /// 
    /// 使用するSEのID
    s32 seId_26;
    
    /// 27
    /// 
    /// 使用するSEのID
    s32 seId_27;
    
    /// 28
    /// 
    /// 使用するSEのID
    s32 seId_28;
    
    /// 29
    /// 
    /// 使用するSEのID
    s32 seId_29;
    
    /// 30
    /// 
    /// 使用するSEのID
    s32 seId_30;
    
    /// 31
    /// 
    /// 使用するSEのID
    s32 seId_31;
    
    /// 32
    /// 
    /// 使用するSEのID
    s32 seId_32;
    
    /// 33
    /// 
    /// 使用するSEのID
    s32 seId_33;
    
    /// 34
    /// 
    /// 使用するSEのID
    s32 seId_34;
    
    /// 35
    /// 
    /// 使用するSEのID
    s32 seId_35;
    
    /// 36
    /// 
    /// 使用するSEのID
    s32 seId_36;
    
    /// 37
    /// 
    /// 使用するSEのID
    s32 seId_37;
    
    /// 38
    /// 
    /// 使用するSEのID
    s32 seId_38;
    
    /// 39
    /// 
    /// 使用するSEのID
    s32 seId_39;
    
    /// 40
    /// 
    /// 使用するSEのID
    s32 seId_40;
    
    /// 41
    /// 
    /// 使用するSEのID
    s32 seId_41;
    
    /// 42
    /// 
    /// 使用するSEのID
    s32 seId_42;
    
    /// 43
    /// 
    /// 使用するSEのID
    s32 seId_43;
    
    /// 44
    /// 
    /// 使用するSEのID
    s32 seId_44;
    
    /// 45
    /// 
    /// 使用するSEのID
    s32 seId_45;
    
    /// 46
    /// 
    /// 使用するSEのID
    s32 seId_46;
    
    /// 47
    /// 
    /// 使用するSEのID
    s32 seId_47;
    
    /// 48
    /// 
    /// 使用するSEのID
    s32 seId_48;
    
    /// 49
    /// 
    /// 使用するSEのID
    s32 seId_49;
    
    /// 50
    /// 
    /// 使用するSEのID
    s32 seId_50;
    
    /// 51
    /// 
    /// 使用するSEのID
    s32 seId_51;
    
    /// 52
    /// 
    /// 使用するSEのID
    s32 seId_52;
    
    /// 53
    /// 
    /// 使用するSEのID
    s32 seId_53;
    
    /// 54
    /// 
    /// 使用するSEのID
    s32 seId_54;
    
    /// 55
    /// 
    /// 使用するSEのID
    s32 seId_55;
    
    /// 56
    /// 
    /// 使用するSEのID
    s32 seId_56;
    
    /// 57
    /// 
    /// 使用するSEのID
    s32 seId_57;
    
    /// 58
    /// 
    /// 使用するSEのID
    s32 seId_58;
    
    /// 59
    /// 
    /// 使用するSEのID
    s32 seId_59;
    
    /// 60
    /// 
    /// 使用するSEのID
    s32 seId_60;
    
    /// 61
    /// 
    /// 使用するSEのID
    s32 seId_61;
    
    /// 62
    /// 
    /// 使用するSEのID
    s32 seId_62;
    
    /// 63
    /// 
    /// 使用するSEのID
    s32 seId_63;
    
    /// 64
    /// 
    /// 使用するSEのID
    s32 seId_64;
    
    /// 65
    /// 
    /// 使用するSEのID
    s32 seId_65;
    
    /// 66
    /// 
    /// 使用するSEのID
    s32 seId_66;
    
    /// 67
    /// 
    /// 使用するSEのID
    s32 seId_67;
    
    /// 68
    /// 
    /// 使用するSEのID
    s32 seId_68;
    
    /// 69
    /// 
    /// 使用するSEのID
    s32 seId_69;
    
    /// 70
    /// 
    /// 使用するSEのID
    s32 seId_70;
    
    /// 71
    /// 
    /// 使用するSEのID
    s32 seId_71;
    
    /// 72
    /// 
    /// 使用するSEのID
    s32 seId_72;
    
    /// 73
    /// 
    /// 使用するSEのID
    s32 seId_73;
    
    /// 74
    /// 
    /// 使用するSEのID
    s32 seId_74;
    
    /// 75
    /// 
    /// 使用するSEのID
    s32 seId_75;
    
    /// 76
    /// 
    /// 使用するSEのID
    s32 seId_76;
    
    /// 77
    /// 
    /// 使用するSEのID
    s32 seId_77;
    
    /// 78
    /// 
    /// 使用するSEのID
    s32 seId_78;
    
    /// 79
    /// 
    /// 使用するSEのID
    s32 seId_79;
    
    /// 80
    /// 
    /// 使用するSEのID
    s32 seId_80;
    
    /// 81
    /// 
    /// 使用するSEのID
    s32 seId_81;
    
    /// 82
    /// 
    /// 使用するSEのID
    s32 seId_82;
    
    /// 83
    /// 
    /// 使用するSEのID
    s32 seId_83;
    
    /// 84
    /// 
    /// 使用するSEのID
    s32 seId_84;
    
    /// 85
    /// 
    /// 使用するSEのID
    s32 seId_85;
    
    /// 86
    /// 
    /// 使用するSEのID
    s32 seId_86;
    
    /// 87
    /// 
    /// 使用するSEのID
    s32 seId_87;
    
    /// 88
    /// 
    /// 使用するSEのID
    s32 seId_88;
    
    /// 89
    /// 
    /// 使用するSEのID
    s32 seId_89;
    
};

struct KNOWLEDGE_LOADSCREEN_ITEM_PARAM_ST {
    static constexpr const char* TYPE_NAME = "KNOWLEDGE_LOADSCREEN_ITEM_PARAM_ST";
    
    /// 解禁フラグ
    s32 unlockFlagId;
    
    /// 無効フラグ
    s32 invalidFlagId;
    
    /// テキストID
    s32 msgId;
    
    /// 予約
    dummy8 padding[4];
    
};

struct HIT_EFFECT_SFX_ANGLE_PARAM_ST {
    static constexpr const char* TYPE_NAME = "HIT_EFFECT_SFX_ANGLE_PARAM_ST";
    
    /// X軸回転量：攻撃方向上
    f32 XAxisAngle_AttackDirUpper;
    
    /// Y軸回転量：攻撃方向上
    f32 YAxisAngle_AttackDirUpper;
    
    /// Z軸回転量：攻撃方向上
    f32 ZAxisAngle_AttackDirUpper;
    
    /// X軸回転量：攻撃方向下
    f32 XAxisAngle_AttackDirBottom;
    
    /// Y軸回転量：攻撃方向下
    f32 YAxisAngle_AttackDirBottom;
    
    /// Z軸回転量：攻撃方向下
    f32 ZAxisAngle_AttackDirBottom;
    
    /// X軸回転量：攻撃方向左
    f32 XAxisAngle_AttackDirLeft;
    
    /// Y軸回転量：攻撃方向左
    f32 YAxisAngle_AttackDirLeft;
    
    /// Z軸回転量：攻撃方向左
    f32 ZAxisAngle_AttackDirLeft;
    
    /// X軸回転量：攻撃方向右
    f32 XAxisAngle_AttackDirRight;
    
    /// Y軸回転量：攻撃方向右
    f32 YAxisAngle_AttackDirRight;
    
    /// Z軸回転量：攻撃方向右
    f32 ZAxisAngle_AttackDirRight;
    
    /// 概念差し替え：攻撃方向上
    /// 
    /// 攻撃方向[SFX]が上のとき、この概念を参照する
    s32 atkDirUpper;
    
    /// 概念差し替え：攻撃方向下
    /// 
    /// 攻撃方向[SFX]が下のとき、この概念を参照する
    s32 atkDirBottom;
    
    /// 概念差し替え：攻撃方向左
    /// 
    /// 攻撃方向[SFX]が左のとき、この概念を参照する
    s32 atkDirLeft;
    
    /// 概念差し替え：攻撃方向右
    /// 
    /// 攻撃方向[SFX]が右のとき、この概念を参照する
    s32 atkDirRight;
    
    /// 予約
    dummy8 reserve[12];
    
};

struct OBJECT_MATERIAL_SFX_PARAM_ST {
    static constexpr const char* TYPE_NAME = "OBJECT_MATERIAL_SFX_PARAM_ST";
    
    /// SFX識別子：00
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_00;
    
    /// SFX識別子：01
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_01;
    
    /// SFX識別子：02
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_02;
    
    /// SFX識別子：03
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_03;
    
    /// SFX識別子：04
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_04;
    
    /// SFX識別子：05
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_05;
    
    /// SFX識別子：06
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_06;
    
    /// SFX識別子：07
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_07;
    
    /// SFX識別子：08
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_08;
    
    /// SFX識別子：09
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_09;
    
    /// SFX識別子：10
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_10;
    
    /// SFX識別子：11
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_11;
    
    /// SFX識別子：12
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_12;
    
    /// SFX識別子：13
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_13;
    
    /// SFX識別子：14
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_14;
    
    /// SFX識別子：15
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_15;
    
    /// SFX識別子：16
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_16;
    
    /// SFX識別子：17
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_17;
    
    /// SFX識別子：18
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_18;
    
    /// SFX識別子：19
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_19;
    
    /// SFX識別子：20
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_20;
    
    /// SFX識別子：21
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_21;
    
    /// SFX識別子：22
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_22;
    
    /// SFX識別子：23
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_23;
    
    /// SFX識別子：24
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_24;
    
    /// SFX識別子：25
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_25;
    
    /// SFX識別子：26
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_26;
    
    /// SFX識別子：27
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_27;
    
    /// SFX識別子：28
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_28;
    
    /// SFX識別子：29
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_29;
    
    /// SFX識別子：30
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_30;
    
    /// SFX識別子：31
    /// 
    /// オブジェパラメータの「破壊後着地SFX識別子」に対応する、SFX識別子
    u32 sfxId_31;
    
};

struct MENU_VALUE_TABLE_SPEC {
    static constexpr const char* TYPE_NAME = "MENU_VALUE_TABLE_SPEC";
    
    /// 比較する値
    s32 value;
    
    /// 変換後のテキストID
    s32 textId;
    
    /// 比較タイプ
    s8 compareType;
    
    /// パディング
    dummy8 padding[3];
    
};

struct MAP_PARTS_PARAM_ST {
    static constexpr const char* TYPE_NAME = "MAP_PARTS_PARAM_ST";
    
    /// カメラディザフェード最小距離(m)
    /// 
    /// カメラディザフェード最小距離。「カメラディザフェード最小距離」、「カメラディザフェード最大距離」の両方に「0.0」を設定するとカメラディザフェードが無効になります。
    f32 camDitherFadeMinDist;
    
    /// カメラディザフェード最大距離(m)
    /// 
    /// カメラディザフェード最大距離。「カメラディザフェード最小距離」、「カメラディザフェード最大距離」の両方に「0.0」を設定するとカメラディザフェードが無効になります。
    f32 camDitherFadeMaxDist;
    
    /// パディング
    dummy8 pad[24];
    
};

struct EQUIP_PARAM_ACCESSORY_ST {
    static constexpr const char* TYPE_NAME = "EQUIP_PARAM_ACCESSORY_ST";
    
    /// 呼び出しID
    /// 
    /// 装飾品から呼び出すID
    s32 refId;
    
    /// SFXバリエーションID
    /// 
    /// ＳＦＸのバリエーションを指定（TimeActEditorのＩＤと組み合わせて、ＳＦＸを特定するのに使用する）
    s32 sfxVariationId;
    
    /// 重量[kg]
    f32 weight;
    
    /// 行動ID(=Skill)
    s32 behaviorId;
    
    /// 基本価格
    s32 basicPrice;
    
    /// 売却価格
    /// 
    /// 販売価格
    s32 sellValue;
    
    /// ソートID(-1:集めない)
    s32 sortId;
    
    /// QWCID
    s32 qwcId;
    
    /// 装備モデル番号
    /// 
    /// 装備モデルの番号
    u16 equipModelId;
    
    /// アイコンID
    /// 
    /// メニューアイコンID
    u16 iconId;
    
    /// ショップレベル
    /// 
    /// お店で販売できるレベル
    s16 shopLv;
    
    /// トロフィー
    s16 trophySGradeId;
    
    /// トロフィーSEQ番号
    /// 
    /// トロフィーのSEQ番号
    s16 trophySeqId;
    
    /// 装備モデル種別
    /// 
    /// 装備モデルの種別
    u8 equipModelCategory;
    
    /// 装備モデル性別
    /// 
    /// 装備モデルの性別
    u8 equipModelGender;
    
    /// 装飾カテゴリ
    /// 
    /// 防具のカテゴリ
    u8 accessoryCategory;
    
    /// IDカテゴリ
    /// 
    /// ↓のIDのカテゴリ[攻撃、飛び道具、特殊]
    u8 refCategory;
    
    /// 特殊効果カテゴリ
    /// 
    /// スキルや、魔法、アイテムなどで、パラメータが変動する効果（エンチャントウェポンなど）があるので、│定した効果が、「武器攻撃のみをパワーアップする」といった効果に対応できるように行動ごとに設定するバリスタなど、設定の必要のないものは「なし」を設定する
    u8 spEffectCategory;
    
    /// パディング
    dummy8 pad[1];
    
    /// ベイグラント時アイテム抽選ID
    /// 
    /// -1：ベイグラントなし 0：抽選なし 1～：抽選あり
    s32 vagrantItemLotId;
    
    /// ベイグラントボーナス敵ドロップアイテム抽選ID
    /// 
    /// -1：ドロップなし 0：抽選なし 1～：抽選あり
    s32 vagrantBonusEneDropItemLotId;
    
    /// ベイグラントアイテム敵ドロップアイテム抽選ID
    /// 
    /// -1：ドロップなし 0：抽選なし 1～：抽選あり
    s32 vagrantItemEneDropItemLotId;
    
    /// 預けれるか
    /// 
    /// 倉庫へ預けれるか
    u8 isDeposit : 1;
    
    /// 外すと壊れるか
    /// 
    /// 装備して外す時に壊れるか
    u8 isEquipOutBrake : 1;
    
    /// マルチドロップ共有禁止か
    u8 disableMultiDropShare : 1;
    
    /// 捨てれるか
    /// 
    /// アイテムを捨てれるか？TRUE=捨てれる
    u8 isDiscard : 1;
    
    /// その場に置けるか
    /// 
    /// アイテムをその場に置けるか？TRUE=置ける
    u8 isDrop : 1;
    
    /// 入手時ログ表示するか
    /// 
    /// アイテムの入手時にアイテム取得ログへ表示するか(○=アイテム取得ログへ表示する）
    u8 isNoticeLog : 1;
    
    /// 入手時ダイアログ表示するか
    /// 
    /// 取得時に時止めダイアログを表示するか
    u8 isNoticeDialog : 1;
    
    /// pad3
    dummy8 pad3 : 1;
    
    /// pad
    dummy8 pad2[3];
    
    /// 販売価格
    s32 saleValue;
    
    /// 装着グループID
    /// 
    /// 同じグループの物は同時装備不可能
    s16 accessoryGroup;
    
    /// 契約タイプ
    u8 vowType;
    
    /// コンプトロフィーSEQ番号
    /// 
    /// コンプリート系トロフィのSEQ番号
    s8 compTrophySedId;
    
    /// 常駐特殊効果ID1
    s32 residentSpEffectId1;
    
    /// 常駐特殊効果ID2
    s32 residentSpEffectId2;
    
    /// 常駐特殊効果ID3
    s32 residentSpEffectId3;
    
    /// 常駐特殊効果ID4
    s32 residentSpEffectId4;
    
    /// 初回入手イベントフラグID
    /// 
    /// 装飾を入手したときに立てるイベントフラグを設定します（-1なら何もしない）
    s32 firstGetEventFlagId;
    
    /// アイテム取得UIの表示タイプ
    /// 
    /// アイテム取得ダイアログとアイテム取得ログの表示タイプ
    u8 itemUIDisplayType;
    
    /// pad
    dummy8 pad1[3];
    
};

struct GEMEFFECT_PARAM_ST {
    static constexpr const char* TYPE_NAME = "GEMEFFECT_PARAM_ST";
    
    /// 特殊効果ID
    /// 
    /// 特殊効果パラメータのID
    s32 speffectId;
    
    /// カテゴリID
    s32 categoryId;
    
    /// 効果ランク
    s32 effectRank;
    
    /// 出現ランク_下限(-1:下限なし)
    s32 rankMin;
    
    /// 出現ランク_上限(-1:上限なし)
    s32 rankMax;
    
    /// 装着費
    s32 equipCost;
    
    /// 脱着費
    s32 removeCost;
    
    /// 接頭語ID
    s32 prefixNameId;
    
};

struct LOD_BANK_ST {
    static constexpr const char* TYPE_NAME = "LOD_BANK_ST";
    
    /// LODレベル0-1境界距離[m]
    /// 
    /// 切り替わる中心。マイナス値の場合は、LOD1、LOD2に切り替わらない。
    f32 lv01_BorderDist;
    
    /// LODレベル0-1遊び距離[m]
    /// 
    /// 境界中心で±遊び
    f32 lv01_PlayDist;
    
    /// LODレベル1-2境界距離[m]
    /// 
    /// 切り替わる中心。マイナス値の場合は、LOD2に切り替わらない。
    f32 lv12_BorderDist;
    
    /// LODレベル1-2遊び距離[m]
    /// 
    /// 境界中心で±遊び
    f32 lv12_PlayDist;
    
    /// テクスチャLOD(0:無効, 1:有効)
    u32 textureLod : 1;
    
    /// 描画境界距離[m]
    /// 
    /// 切り替わる中心。マイナス値の場合は、常に描画します。
    f32 draw_BorderDist;
    
    /// 描画遊び距離[m]
    /// 
    /// 境界中心で±遊び
    f32 draw_PlayDist;
    
    /// 影描画境界距離[m]
    /// 
    /// 切り替わる中心。マイナス値の場合は、常に描画します。
    f32 shadowDraw_BorderDist;
    
    /// 影描画遊び距離[m]
    /// 
    /// 境界中心で±遊び
    f32 shadowDraw_PlayDist;
    
    /// モーションブラー描画境界距離[m]
    /// 
    /// 切り替え距離。マイナス値の場合は、常に描画します。
    f32 motionBlur_BorderDist;
    
    /// モーションブラー描画遊び距離[m]
    /// 
    /// 境界中心で±遊び
    f32 motionBlur_PlayDist;
    
    /// タイプ
    u8 type;
    
    /// LOD間のクロスフェード有効
    /// 
    /// 1でクロスフェード有効。0で無効。
    u8 lodCrossFadeEnable;
    
    /// 予約
    dummy8 dummy[2];
    
    /// LOD間のクロスフェード時間[秒]
    /// 
    /// 「LOD間のクロスフェード有効」が有効な場合に使用されるパラメータです。0.0秒の場合、時間ではなく距離でクロスフェードを行います。
    f32 lodCrossFadeTime;
    
    /// 予約
    dummy8 reserve[12];
    
};

struct AI_STANDARD_INFO_BANK {
    static constexpr const char* TYPE_NAME = "AI_STANDARD_INFO_BANK";
    
    /// 認識距離[m]
    /// 
    /// 敵性キャラクタを認識する距離
    u16 RadarRange;
    
    /// 認識角度Ｘ[deg]
    /// 
    /// 敵性キャラクタを認識するX角度　現在の視線方向を０度として、上が＋。
    u8 RadarAngleX;
    
    /// 認識角度Y[deg]
    /// 
    /// 敵性キャラクタを認識するY角度　現在の視線方向を０度として、右が＋。
    u8 RadarAngleY;
    
    /// 縄張り距離[m]
    /// 
    /// 自分の縄張りの距離。認識しているプレイヤーがこの距離から外れると初期位置に戻ります。
    u16 TerritorySize;
    
    /// 攻撃前威嚇率[0～100]
    /// 
    /// 攻撃前に威嚇する確率
    u8 ThreatBeforeAttackRate;
    
    /// 初回認識威嚇
    /// 
    /// 初回プレイヤー認識時に必ず威嚇するかどうか
    u8 ForceThreatOnFirstLocked;
    
    /// 予約
    dummy8 reserve0[24];
    
    /// 攻撃１　間合い[m]
    /// 
    /// 攻撃するときの間合い[m]
    u16 Attack1_Distance;
    
    /// 攻撃１　間合い遊び[m]
    /// 
    /// 攻撃間合いの遊び。間合い距離近辺で、振動しないように
    u16 Attack1_Margin;
    
    /// 攻撃１　割合[0～100]
    /// 
    /// 攻撃の頻度
    u8 Attack1_Rate;
    
    /// 攻撃１　種類
    /// 
    /// 攻撃の種類
    u8 Attack1_ActionID;
    
    /// 攻撃１　最小遅延時間[frame]
    /// 
    /// 攻撃可能になった時点から、攻撃するまでの遅延時間の最小。
    u8 Attack1_DelayMin;
    
    /// 攻撃１　最長遅延時間[frame]
    /// 
    /// 攻撃可能になった時点から、攻撃するまでの遅延時間の最長。
    u8 Attack1_DelayMax;
    
    /// 攻撃１　攻撃許可円錐の角度[deg]
    /// 
    /// 視線方向とターゲットへの方向ベクトルのなす角が、この角度以内の場合、攻撃ＯＫ。
    u8 Attack1_ConeAngle;
    
    /// 予約
    dummy8 reserve10[7];
    
    /// 攻撃２　間合い[m]
    /// 
    /// 攻撃するときの間合い[m]
    u16 Attack2_Distance;
    
    /// 攻撃２　間合い遊び[m]
    /// 
    /// 攻撃間合いの遊び。間合い距離近辺で、振動しないように
    u16 Attack2_Margin;
    
    /// 攻撃１　割合[0～100]
    /// 
    /// 攻撃の頻度
    u8 Attack2_Rate;
    
    /// 攻撃２　種類
    /// 
    /// 攻撃の種類
    u8 Attack2_ActionID;
    
    /// 攻撃2　最小遅延時間[frame]
    /// 
    /// 攻撃可能になった時点から、攻撃するまでの遅延時間の最小。
    u8 Attack2_DelayMin;
    
    /// 攻撃2　最長遅延時間[frame]
    /// 
    /// 攻撃可能になった時点から、攻撃するまでの遅延時間の最長。
    u8 Attack2_DelayMax;
    
    /// 攻撃2　攻撃許可円錐の角度[deg]
    /// 
    /// 視線方向とターゲットへの方向ベクトルのなす角が、この角度以内の場合、攻撃ＯＫ。
    u8 Attack2_ConeAngle;
    
    /// 予約
    dummy8 reserve11[7];
    
    /// 攻撃３　間合い[m]
    /// 
    /// 攻撃するときの間合い[m]
    u16 Attack3_Distance;
    
    /// 攻撃３　間合い遊び[m]
    /// 
    /// 攻撃間合いの遊び。間合い距離近辺で、振動しないように
    u16 Attack3_Margin;
    
    /// 攻撃１　割合[0～100]
    /// 
    /// 攻撃の頻度
    u8 Attack3_Rate;
    
    /// 攻撃３　種類
    /// 
    /// 攻撃の種類
    u8 Attack3_ActionID;
    
    /// 攻撃3　最小遅延時間[frame]
    /// 
    /// 攻撃可能になった時点から、攻撃するまでの遅延時間の最小。
    u8 Attack3_DelayMin;
    
    /// 攻撃3　最長遅延時間[frame]
    /// 
    /// 攻撃可能になった時点から、攻撃するまでの遅延時間の最長。
    u8 Attack3_DelayMax;
    
    /// 攻撃3　攻撃許可円錐の角度[deg]
    /// 
    /// 視線方向とターゲットへの方向ベクトルのなす角が、この角度以内の場合、攻撃ＯＫ。
    u8 Attack3_ConeAngle;
    
    /// 予約
    dummy8 reserve12[7];
    
    /// 攻撃４　間合い[m]
    /// 
    /// 攻撃するときの間合い[m]
    u16 Attack4_Distance;
    
    /// 攻撃４　間合い遊び[m]
    /// 
    /// 攻撃間合いの遊び。間合い距離近辺で、振動しないように
    u16 Attack4_Margin;
    
    /// 攻撃１　割合[0～100]
    /// 
    /// 攻撃の頻度
    u8 Attack4_Rate;
    
    /// 攻撃４　種類
    /// 
    /// 攻撃の種類
    u8 Attack4_ActionID;
    
    /// 攻撃4　最小遅延時間[frame]
    /// 
    /// 攻撃可能になった時点から、攻撃するまでの遅延時間の最小。
    u8 Attack4_DelayMin;
    
    /// 攻撃4　最長遅延時間[frame]
    /// 
    /// 攻撃可能になった時点から、攻撃するまでの遅延時間の最長。
    u8 Attack4_DelayMax;
    
    /// 攻撃4　攻撃許可円錐の角度[deg]
    /// 
    /// 視線方向とターゲットへの方向ベクトルのなす角が、この角度以内の場合、攻撃ＯＫ。
    u8 Attack4_ConeAngle;
    
    /// 予約
    dummy8 reserve13[7];
    
    /// 予約
    dummy8 reserve_last[32];
    
};

struct ESTUS_FLASK_RECOVERY_PARAM_ST {
    static constexpr const char* TYPE_NAME = "ESTUS_FLASK_RECOVERY_PARAM_ST";
    
    /// ホストのエスト回復数
    u8 host;
    
    /// 侵入経路_オーブ_なし
    /// 
    /// 侵入経路がオーブの勢力のエスト回復数
    u8 invadeOrb_None;
    
    /// 侵入経路_オーブ_太陽
    /// 
    /// 侵入経路がオーブの勢力のエスト回復数
    u8 invadeOrb_Umbasa;
    
    /// 侵入経路_オーブ_バーサーカー
    /// 
    /// 侵入経路がオーブの勢力のエスト回復数
    u8 invadeOrb_Berserker;
    
    /// 侵入経路_オーブ_罪人
    /// 
    /// 侵入経路がオーブの勢力のエスト回復数
    u8 invadeOrb_Sinners;
    
    /// 侵入経路_サイン_なし
    /// 
    /// 侵入経路がサインの勢力のエスト回復数
    u8 invadeSign_None;
    
    /// 侵入経路_サイン_太陽
    /// 
    /// 侵入経路がサインの勢力のエスト回復数
    u8 invadeSign_Umbasa;
    
    /// 侵入経路_サイン_バーサーカー
    /// 
    /// 侵入経路がサインの勢力のエスト回復数
    u8 invadeSign_Berserker;
    
    /// 侵入経路_サイン_罪人
    /// 
    /// 侵入経路がサインの勢力のエスト回復数
    u8 invadeSign_Sinners;
    
    /// 侵入経路_指輪_罪人
    /// 
    /// 侵入経路が指輪の勢力のエスト回復数
    u8 invadeRing_Sinners;
    
    /// 侵入経路_指輪_ボス守(ロザリア)
    /// 
    /// 侵入経路が指輪の勢力のエスト回復数
    u8 invadeRing_Rosalia;
    
    /// 侵入経路_指輪_マップ守(森)
    /// 
    /// 侵入経路が指輪の勢力のエスト回復数
    u8 invadeRing_Forest;
    
    /// 協力経路_サイン_なし
    /// 
    /// 協力経路がサインの勢力のエスト回復数
    u8 coopSign_None;
    
    /// 協力経路_サイン_太陽
    /// 
    /// 協力経路がサインの勢力のエスト回復数
    u8 coopSign_Umbasa;
    
    /// 協力経路_サイン_バーサーカー
    /// 
    /// 協力経路がサインの勢力のエスト回復数
    u8 coopSign_Berserker;
    
    /// 協力経路_サイン_罪人
    /// 
    /// 協力経路がサインの勢力のエスト回復数
    u8 coopSign_Sinners;
    
    /// 協力経路_指輪 _赤狩り
    /// 
    /// 協力経路が指輪の勢力のエスト回復数
    u8 coopRing_RedHunter;
    
    /// 侵入経路_指輪_マップ守(アノール)
    /// 
    /// 侵入経路が指輪の勢力のエスト回復数
    u8 invadeRing_Anor;
    
    /// pad
    dummy8 pad1[6];
    
};

struct NPC_AI_ACTION_PARAM_ST {
    static constexpr const char* TYPE_NAME = "NPC_AI_ACTION_PARAM_ST";
    
    /// 移動方向入力
    /// 
    /// 入力する移動方向
    u8 moveDir;
    
    /// キー入力1
    /// 
    /// 入力するキー
    u8 key1;
    
    /// キー入力2
    /// 
    /// 入力するキー
    u8 key2;
    
    /// キー入力3
    /// 
    /// 入力するキー
    u8 key3;
    
    /// 移動方向入力は長押し？
    /// 
    /// 入力する移動方向を長押し扱いするか
    u8 bMoveDirHold;
    
    /// キー入力1は長押し？
    /// 
    /// 入力するキーを長押扱いするか
    u8 bKeyHold1;
    
    /// キー入力2は長押し？
    /// 
    /// 入力するキーを長押扱いするか
    u8 bKeyHold2;
    
    /// キー入力3は長押し？
    /// 
    /// 入力するキーを長押扱いするか
    u8 bKeyHold3;
    
    /// ジェスチャーID（どれかのキー入力がGESTUREの時のみ有効）
    /// 
    /// ジェスチャーID
    s32 gestureId;
    
    /// 寿命まで成功にしない
    /// 
    /// これがONならAIのゴールが寿命まで成功にならない
    u8 bLifeEndSuccess;
    
    /// パッド
    /// 
    /// pad
    dummy8 pad1[3];
    
};

struct MAP_MIMICRY_ESTABLISHMENT_PARAM_ST {
    static constexpr const char* TYPE_NAME = "MAP_MIMICRY_ESTABLISHMENT_PARAM_ST";
    
    /// 擬態重み0
    f32 mimicryEstablishment0;
    
    /// 擬態重み1
    f32 mimicryEstablishment1;
    
    /// 擬態重み2
    f32 mimicryEstablishment2;
    
    /// 擬態0 SFXID 前振り
    s32 mimicryBeginSfxId0;
    
    /// 擬態0 SFXID 本体
    s32 mimicrySfxId0;
    
    /// 擬態0 SFXID 解除
    s32 mimicryEndSfxId0;
    
    /// 擬態1 SFXID 前振り
    s32 mimicryBeginSfxId1;
    
    /// 擬態1 SFXID 本体
    s32 mimicrySfxId1;
    
    /// 擬態1 SFXID 解除
    s32 mimicryEndSfxId1;
    
    /// 擬態2 SFXID 前振り
    s32 mimicryBeginSfxId2;
    
    /// 擬態2 SFXID 本体
    s32 mimicrySfxId2;
    
    /// 擬態2 SFXID 解除
    s32 mimicryEndSfxId2;
    
    /// パッド
    /// 
    /// pad
    dummy8 pad1[16];
    
};

struct BudgetParam : public BUDGET_PARAM_ST {
    static constexpr const char* NAME = "BudgetParam";
};

struct LodPlatform : public LOD_PLATFORM_ST {
    static constexpr const char* NAME = "LodPlatform";
};

struct MenuPropertyLayoutParam : public MENUPROPERTY_LAYOUT {
    static constexpr const char* NAME = "MenuPropertyLayoutParam";
};

struct MultiSoulBonusRateParam : public MULTI_SOUL_BONUS_RATE_PARAM_ST {
    static constexpr const char* NAME = "MultiSoulBonusRateParam";
};

struct BehaviorParam_PC : public BEHAVIOR_PARAM_ST {
    static constexpr const char* NAME = "BehaviorParam_PC";
};

struct AttackElementCorrectParam : public ATTACK_ELEMENT_CORRECT_PARAM_ST {
    static constexpr const char* NAME = "AttackElementCorrectParam";
};

struct ActionButtonParam : public ACTIONBUTTON_PARAM_ST {
    static constexpr const char* NAME = "ActionButtonParam";
};

struct MaterialExParam : public MATERIAL_EX_PARAM_ST {
    static constexpr const char* NAME = "MaterialExParam";
};

struct RagdollParam : public RAGDOLL_PARAM_ST {
    static constexpr const char* NAME = "RagdollParam";
};

struct DefaultKeyAssignParam00 : public DEFAULT_KEY_ASSIGN_PARAM_ST {
    static constexpr const char* NAME = "DefaultKeyAssignParam00";
};

struct DefaultKeyAssignParam03 : public DEFAULT_KEY_ASSIGN_PARAM_ST {
    static constexpr const char* NAME = "DefaultKeyAssignParam03";
};

struct MenuValueTableParam : public MENU_VALUE_TABLE_SPEC {
    static constexpr const char* NAME = "MenuValueTableParam";
};

struct ShopLineupParam : public SHOP_LINEUP_PARAM {
    static constexpr const char* NAME = "ShopLineupParam";
};

struct NetworkAreaParam : public NETWORK_AREA_PARAM_ST {
    static constexpr const char* NAME = "NetworkAreaParam";
};

struct CharMakeMenuTopParam : public CHARMAKEMENUTOP_PARAM_ST {
    static constexpr const char* NAME = "CharMakeMenuTopParam";
};

struct DefaultKeyAssignParam01 : public DEFAULT_KEY_ASSIGN_PARAM_ST {
    static constexpr const char* NAME = "DefaultKeyAssignParam01";
};

struct LodParam : public LOD_BANK_ST {
    static constexpr const char* NAME = "LodParam";
};

struct MenuTutorialParam : public MENU_TUTORIAL_PARAM_ST {
    static constexpr const char* NAME = "MenuTutorialParam";
};

struct PlayRegionParam : public PLAY_REGION_PARAM_ST {
    static constexpr const char* NAME = "PlayRegionParam";
};

struct SkeletonParam : public SKELETON_PARAM_ST {
    static constexpr const char* NAME = "SkeletonParam";
};

struct ProtectorGenParam : public PROTECTOR_GEN_PARAM_ST {
    static constexpr const char* NAME = "ProtectorGenParam";
};

struct SwordArtsParam : public SWORD_ARTS_PARAM_ST {
    static constexpr const char* NAME = "SwordArtsParam";
};

struct NpcParam : public NPC_PARAM_ST {
    static constexpr const char* NAME = "NpcParam";
};

struct CoolTimeParam : public COOL_TIME_PARAM_ST {
    static constexpr const char* NAME = "CoolTimeParam";
};

struct ObjectMaterialSfxParam : public OBJECT_MATERIAL_SFX_PARAM_ST {
    static constexpr const char* NAME = "ObjectMaterialSfxParam";
};

struct FaceRangeParam : public FACE_RANGE_PARAM_ST {
    static constexpr const char* NAME = "FaceRangeParam";
};

struct RematchWarpParam : public REMATCH_WARP_PARAM_ST {
    static constexpr const char* NAME = "RematchWarpParam";
};

struct ToughnessParam : public TOUGHNESS_PARAM_ST {
    static constexpr const char* NAME = "ToughnessParam";
};

struct GemCategoryParam : public GEM_CATEGORY_PARAM_ST {
    static constexpr const char* NAME = "GemCategoryParam";
};

struct GrassLodRangeParam : public GRASS_LOD_RANGE_PARAM_ST {
    static constexpr const char* NAME = "GrassLodRangeParam";
};

struct CameraSetParam : public CAMERA_SET_PARAM_ST {
    static constexpr const char* NAME = "CameraSetParam";
};

struct HitMtrlParam : public HIT_MTRL_PARAM_ST {
    static constexpr const char* NAME = "HitMtrlParam";
};

struct ReinforceParamWeapon : public REINFORCE_PARAM_WEAPON_ST {
    static constexpr const char* NAME = "ReinforceParamWeapon";
};

struct NewMenuColorTableParam : public MENU_PARAM_COLOR_TABLE_ST {
    static constexpr const char* NAME = "NewMenuColorTableParam";
};

struct SpEffectParam : public SP_EFFECT_PARAM_ST {
    static constexpr const char* NAME = "SpEffectParam";
};

struct NetworkMsgParam : public NETWORK_MSG_PARAM_ST {
    static constexpr const char* NAME = "NetworkMsgParam";
};

struct LodParam_xb1 : public LOD_BANK_ST {
    static constexpr const char* NAME = "LodParam_xb1";
};

struct EquipParamWeapon : public EQUIP_PARAM_WEAPON_ST {
    static constexpr const char* NAME = "EquipParamWeapon";
};

struct DecalParam : public DECAL_PARAM_ST {
    static constexpr const char* NAME = "DecalParam";
};

struct MenuPropertySpecParam : public MENUPROPERTY_SPEC {
    static constexpr const char* NAME = "MenuPropertySpecParam";
};

struct CutsceneParam : public CUTSCENE_PARAM_ST {
    static constexpr const char* NAME = "CutsceneParam";
};

struct AtkParam_Pc : public ATK_PARAM_ST {
    static constexpr const char* NAME = "AtkParam_Pc";
};

struct ThrowDirectionDecalParam : public THROW_DIRECTION_DECAL_PARAM_ST {
    static constexpr const char* NAME = "ThrowDirectionDecalParam";
};

struct GemDropModifyParam : public GEM_DROP_MODIFY_PARAM_ST {
    static constexpr const char* NAME = "GemDropModifyParam";
};

struct MapMimicryEstablishmentParam : public MAP_MIMICRY_ESTABLISHMENT_PARAM_ST {
    static constexpr const char* NAME = "MapMimicryEstablishmentParam";
};

struct HitEffectSeJustGuardParam : public HIT_EFFECT_SE_PARAM_ST {
    static constexpr const char* NAME = "HitEffectSeJustGuardParam";
};

struct KnockBackParam : public KNOCKBACK_PARAM_ST {
    static constexpr const char* NAME = "KnockBackParam";
};

struct default_EnemyBehaviorBank : public ENEMY_STANDARD_INFO_BANK {
    static constexpr const char* NAME = "default_EnemyBehaviorBank";
};

struct WireSetParam : public WIRE_SET_PARAM_ST {
    static constexpr const char* NAME = "WireSetParam";
};

struct MapPartsParam : public MAP_PARTS_PARAM_ST {
    static constexpr const char* NAME = "MapPartsParam";
};

struct NpcThinkParam : public NPC_THINK_PARAM_ST {
    static constexpr const char* NAME = "NpcThinkParam";
};

struct GameProgressParam : public GAME_PROGRESS_PARAM_ST {
    static constexpr const char* NAME = "GameProgressParam";
};

struct LoadBalancerDrawDistScaleParam : public LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST {
    static constexpr const char* NAME = "LoadBalancerDrawDistScaleParam";
};

struct StaminaControlParam : public STAMINA_CONTROL_PARAM_ST {
    static constexpr const char* NAME = "StaminaControlParam";
};

struct MPEstusFlaskRecoveryParam : public ESTUS_FLASK_RECOVERY_PARAM_ST {
    static constexpr const char* NAME = "MPEstusFlaskRecoveryParam";
};

struct HPEstusFlaskRecoveryParam : public ESTUS_FLASK_RECOVERY_PARAM_ST {
    static constexpr const char* NAME = "HPEstusFlaskRecoveryParam";
};

struct WepAbsorpPosParam : public WEP_ABSORP_POS_PARAM_ST {
    static constexpr const char* NAME = "WepAbsorpPosParam";
};

struct CharaInitParam : public CHARACTER_INIT_PARAM {
    static constexpr const char* NAME = "CharaInitParam";
};

struct ChrPhysicsHomingParam : public CHR_PHYSICS_HOMING_ST {
    static constexpr const char* NAME = "ChrPhysicsHomingParam";
};

struct ActionUnlockParam : public ACTION_UNLOCK_PARAM_ST {
    static constexpr const char* NAME = "ActionUnlockParam";
};

struct LodParam_ps4 : public LOD_BANK_ST {
    static constexpr const char* NAME = "LodParam_ps4";
};

struct ClearCountCorrectParam : public CLEAR_COUNT_CORRECT_PARAM_ST {
    static constexpr const char* NAME = "ClearCountCorrectParam";
};

struct HitEffectSfxParam : public HIT_EFFECT_SFX_PARAM_ST {
    static constexpr const char* NAME = "HitEffectSfxParam";
};

struct MultiHPEstusFlaskBonusParam : public MULTI_ESTUS_FLASK_BONUS_PARAM_ST {
    static constexpr const char* NAME = "MultiHPEstusFlaskBonusParam";
};

struct TentativePlayerParam : public TENTATIVE_PLAYER_PARAM_ST {
    static constexpr const char* NAME = "TentativePlayerParam";
};

struct Magic : public MAGIC_PARAM_ST {
    static constexpr const char* NAME = "Magic";
};

struct MenuOffscrRendParam : public MENU_OFFSCR_REND_PARAM_ST {
    static constexpr const char* NAME = "MenuOffscrRendParam";
};

struct TalkParam : public TALK_PARAM_ST {
    static constexpr const char* NAME = "TalkParam";
};

struct MenuColorTableParam : public MENU_PARAM_COLOR_TABLE_ST {
    static constexpr const char* NAME = "MenuColorTableParam";
};

struct LockCamParam : public LOCK_CAM_PARAM_ST {
    static constexpr const char* NAME = "LockCamParam";
};

struct EnemyCommonParam : public ENEMY_COMMOM_PARAM_ST {
    static constexpr const char* NAME = "EnemyCommonParam";
};

struct RoleParam : public ROLE_PARAM_ST {
    static constexpr const char* NAME = "RoleParam";
};

struct SpEffectVfxParam : public SP_EFFECT_VFX_PARAM_ST {
    static constexpr const char* NAME = "SpEffectVfxParam";
};

struct DefaultKeyAssignParam04 : public DEFAULT_KEY_ASSIGN_PARAM_ST {
    static constexpr const char* NAME = "DefaultKeyAssignParam04";
};

struct DyingEffectParam : public DYING_EFFECT_PARAM_ST {
    static constexpr const char* NAME = "DyingEffectParam";
};

struct MoveParam : public MOVE_PARAM_ST {
    static constexpr const char* NAME = "MoveParam";
};

struct HitMaterialSpecialSettingParam : public CS_HIT_MATERIAL_SPECIAL_SETTING_PARAM_ST {
    static constexpr const char* NAME = "HitMaterialSpecialSettingParam";
};

struct ActionGuideParam : public ACTION_GUIDE_PARAM_ST {
    static constexpr const char* NAME = "ActionGuideParam";
};

struct BulletCreateLimitParam : public BULLET_CREATE_LIMIT_PARAM_ST {
    static constexpr const char* NAME = "BulletCreateLimitParam";
};

struct ObjActParam : public OBJ_ACT_PARAM_ST {
    static constexpr const char* NAME = "ObjActParam";
};

struct LoadBalancerParam : public LOAD_BALANCER_PARAM_ST {
    static constexpr const char* NAME = "LoadBalancerParam";
};

struct EquipMtrlSetParam : public EQUIP_MTRL_SET_PARAM_ST {
    static constexpr const char* NAME = "EquipMtrlSetParam";
};

struct GameAreaParam : public GAME_AREA_PARAM_ST {
    static constexpr const char* NAME = "GameAreaParam";
};

struct ThrowKindParam : public THROW_KIND_PARAM_ST {
    static constexpr const char* NAME = "ThrowKindParam";
};

struct WirePointSearchParam : public WIRE_POINT_SEARCH_PARAM_ST {
    static constexpr const char* NAME = "WirePointSearchParam";
};

struct CultSettingParam : public CULT_SETTING_PARAM_ST {
    static constexpr const char* NAME = "CultSettingParam";
};

struct BehaviorParam : public BEHAVIOR_PARAM_ST {
    static constexpr const char* NAME = "BehaviorParam";
};

struct HitEffectSfxConceptJustGuardParam : public HIT_EFFECT_SFX_CONCEPT_PARAM_ST {
    static constexpr const char* NAME = "HitEffectSfxConceptJustGuardParam";
};

struct ItemLotParam : public ITEMLOT_PARAM_ST {
    static constexpr const char* NAME = "ItemLotParam";
};

struct MenuParam : public MENU_PARAM_ST {
    static constexpr const char* NAME = "MenuParam";
};

struct EquipParamProtector : public EQUIP_PARAM_PROTECTOR_ST {
    static constexpr const char* NAME = "EquipParamProtector";
};

struct PhantomParam : public PHANTOM_PARAM_ST {
    static constexpr const char* NAME = "PhantomParam";
};

struct CharMakeMenuListItemParam : public CHARMAKEMENU_LISTITEM_PARAM_ST {
    static constexpr const char* NAME = "CharMakeMenuListItemParam";
};

struct GraphicsParam : public GRAPHICS_PARAM_ST {
    static constexpr const char* NAME = "GraphicsParam";
};

struct ResourceItemParam : public RESOURCEITEM_PARAM_ST {
    static constexpr const char* NAME = "ResourceItemParam";
};

struct ThrowParam : public THROW_INFO_BANK {
    static constexpr const char* NAME = "ThrowParam";
};

struct WeaponGenParam : public WEAPON_GEN_PARAM_ST {
    static constexpr const char* NAME = "WeaponGenParam";
};

struct CameraParam : public CAMERA_PARAM_ST {
    static constexpr const char* NAME = "CameraParam";
};

struct default_AIStandardInfoBank : public AI_STANDARD_INFO_BANK {
    static constexpr const char* NAME = "default_AIStandardInfoBank";
};

struct FootSfxParam : public FOOT_SFX_PARAM_ST {
    static constexpr const char* NAME = "FootSfxParam";
};

struct HitEffectSeParam : public HIT_EFFECT_SE_PARAM_ST {
    static constexpr const char* NAME = "HitEffectSeParam";
};

struct DefaultKeyAssignParam02 : public DEFAULT_KEY_ASSIGN_PARAM_ST {
    static constexpr const char* NAME = "DefaultKeyAssignParam02";
};

struct EquipParamGoods : public EQUIP_PARAM_GOODS_ST {
    static constexpr const char* NAME = "EquipParamGoods";
};

struct FaceParam : public FACE_PARAM_ST {
    static constexpr const char* NAME = "FaceParam";
};

struct ThrowDirectionSfxParam : public THROW_DIRECTION_SFX_PARAM_ST {
    static constexpr const char* NAME = "ThrowDirectionSfxParam";
};

struct AtkParam_Npc : public ATK_PARAM_ST {
    static constexpr const char* NAME = "AtkParam_Npc";
};

struct MultiPlayCorrectionParam : public MULTI_PLAY_CORRECTION_PARAM_ST {
    static constexpr const char* NAME = "MultiPlayCorrectionParam";
};

struct ThrowDirectionSeParam : public THROW_DIRECTION_SE_PARAM_ST {
    static constexpr const char* NAME = "ThrowDirectionSeParam";
};

struct GemGenParam : public GEM_GEN_PARAM_ST {
    static constexpr const char* NAME = "GemGenParam";
};

struct MultiMPEstusFlaskBonusParam : public MULTI_ESTUS_FLASK_BONUS_PARAM_ST {
    static constexpr const char* NAME = "MultiMPEstusFlaskBonusParam";
};

struct DirectionCameraParam : public DIRECTION_CAMERA_PARAM_ST {
    static constexpr const char* NAME = "DirectionCameraParam";
};

struct AiSoundParam : public AI_SOUND_PARAM_ST {
    static constexpr const char* NAME = "AiSoundParam";
};

struct GrassTypeParam : public GRASS_TYPE_PARAM_ST {
    static constexpr const char* NAME = "GrassTypeParam";
};

struct FaceGenParam : public FACE_GEN_PARAM_ST {
    static constexpr const char* NAME = "FaceGenParam";
};

struct Ceremony : public CEREMONY_PARAM_ST {
    static constexpr const char* NAME = "Ceremony";
};

struct BonfireWarpParam : public BONFIRE_WARP_PARAM_ST {
    static constexpr const char* NAME = "BonfireWarpParam";
};

struct ResourceItemLotParam : public RESOURCEITEMLOT_PARAM_ST {
    static constexpr const char* NAME = "ResourceItemLotParam";
};

struct ObjectParam : public OBJECT_PARAM_ST {
    static constexpr const char* NAME = "ObjectParam";
};

struct ChrPhysicsVelocityChangeParam : public CHR_PHYSICS_VELOCITY_CHANGE_ST {
    static constexpr const char* NAME = "ChrPhysicsVelocityChangeParam";
};

struct WhiteSignCoolTimeParam : public WHITE_SIGN_COOL_TIME_PARAM_ST {
    static constexpr const char* NAME = "WhiteSignCoolTimeParam";
};

struct CalcCorrectGraph : public CACL_CORRECT_GRAPH_ST {
    static constexpr const char* NAME = "CalcCorrectGraph";
};

struct GemDropDopingParam : public GEM_DROP_DOPING_PARAM_ST {
    static constexpr const char* NAME = "GemDropDopingParam";
};

struct HitEffectSeHitWallParam : public HIT_EFFECT_SE_PARAM_ST {
    static constexpr const char* NAME = "HitEffectSeHitWallParam";
};

struct WetAspectParam : public WET_ASPECT_PARAM_ST {
    static constexpr const char* NAME = "WetAspectParam";
};

struct GameSystemParam : public GAME_SYSTEM_PARAM_ST {
    static constexpr const char* NAME = "GameSystemParam";
};

struct Bullet : public BULLET_PARAM_ST {
    static constexpr const char* NAME = "Bullet";
};

struct EquipParamAccessory : public EQUIP_PARAM_ACCESSORY_ST {
    static constexpr const char* NAME = "EquipParamAccessory";
};

struct HitEffectSfxConceptParam : public HIT_EFFECT_SFX_CONCEPT_PARAM_ST {
    static constexpr const char* NAME = "HitEffectSfxConceptParam";
};

struct SkillParam : public SKILL_PARAM_ST {
    static constexpr const char* NAME = "SkillParam";
};

struct WireVariationParam : public WIRE_VARIATION_ST {
    static constexpr const char* NAME = "WireVariationParam";
};

struct UpperArmParam : public UPPER_ARM_PARAM_ST {
    static constexpr const char* NAME = "UpperArmParam";
};

struct ReinforceParamProtector : public REINFORCE_PARAM_PROTECTOR_ST {
    static constexpr const char* NAME = "ReinforceParamProtector";
};

struct NpcAiActionParam : public NPC_AI_ACTION_PARAM_ST {
    static constexpr const char* NAME = "NpcAiActionParam";
};

struct KnowledgeLoadScreenItemParam : public KNOWLEDGE_LOADSCREEN_ITEM_PARAM_ST {
    static constexpr const char* NAME = "KnowledgeLoadScreenItemParam";
};

struct ModelSfxParam : public MODEL_SFX_PARAM_ST {
    static constexpr const char* NAME = "ModelSfxParam";
};

struct GemeffectParam : public GEMEFFECT_PARAM_ST {
    static constexpr const char* NAME = "GemeffectParam";
};

struct HitEffectSfxAngleParam : public HIT_EFFECT_SFX_ANGLE_PARAM_ST {
    static constexpr const char* NAME = "HitEffectSfxAngleParam";
};

struct NetworkParam : public NETWORK_PARAM_ST {
    static constexpr const char* NAME = "NetworkParam";
};

};

#endif