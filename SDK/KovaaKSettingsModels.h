
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: KovaaKCoreModels

#pragma pack(push, 0x1)

/// Enum /Script/KovaaKSettingsModels.ESensitivityScaleTarget
/// Size: 0x01 (1 bytes)
enum class ESensitivityScaleTarget : uint8_t
{
	ESensitivityScaleTarget__Invalid                                                 = 0,
	ESensitivityScaleTarget__QuakeSource                                             = 1,
	ESensitivityScaleTarget__Overwatch                                               = 2,
	ESensitivityScaleTarget__Reflex                                                  = 3,
	ESensitivityScaleTarget__Paladins                                                = 4,
	ESensitivityScaleTarget__Battalion                                               = 5,
	ESensitivityScaleTarget__UE4                                                     = 6,
	ESensitivityScaleTarget__FortniteSlider                                          = 7,
	ESensitivityScaleTarget__FortniteConfig                                          = 8,
	ESensitivityScaleTarget__ApexLegends                                             = 9,
	ESensitivityScaleTarget__FortnitePercent                                         = 10,
	ESensitivityScaleTarget__Diabotical                                              = 11,
	ESensitivityScaleTarget__Custom                                                  = 12,
	ESensitivityScaleTarget__Valorant                                                = 13,
	ESensitivityScaleTarget__CallOfDuty                                              = 14,
	ESensitivityScaleTarget__Rust                                                    = 15,
	ESensitivityScaleTarget__Splitgate                                               = 16,
	ESensitivityScaleTarget__CSGO                                                    = 17,
	ESensitivityScaleTarget__Destiny2                                                = 18,
	ESensitivityScaleTarget__Battlefield                                             = 19,
	ESensitivityScaleTarget__PUBG                                                    = 20,
	ESensitivityScaleTarget__Halo                                                    = 21
};

/// Struct /Script/KovaaKSettingsModels.CrosshairSettingsNative
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FCrosshairSettingsNative
{ 
	FVector                                            Color;                                                      // 0x0000   (0x000C)  
	bool                                               bHitmarkers;                                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            Filename;                                                   // 0x0018   (0x0010)  
	bool                                               bShowBloom;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              BloomMultiplier;                                            // 0x002C   (0x0004)  
	FVector                                            HitmarkerColor;                                             // 0x0030   (0x000C)  
	float                                              HitmarkerScale;                                             // 0x003C   (0x0004)  
	FString                                            HitmarkerFile;                                              // 0x0040   (0x0010)  
	float                                              HitmarkerTime;                                              // 0x0050   (0x0004)  
	bool                                               bHeadHitmarkers;                                            // 0x0054   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	FVector                                            HeadHitmarkerColor;                                         // 0x0058   (0x000C)  
	float                                              HeadHitmarkerScale;                                         // 0x0064   (0x0004)  
	FString                                            HeadHitmarkerFile;                                          // 0x0068   (0x0010)  
	float                                              HeadHitmarkerTime;                                          // 0x0078   (0x0004)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/KovaaKSettingsModels.WeaponSettingsNative
/// Size: 0x0208 (520 bytes) (0x000000 - 0x000208) align 8 MaxSize: 0x0208
struct FWeaponSettingsNative
{ 
	bool                                               bUseDefaults;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            WeaponName;                                                 // 0x0008   (0x0010)  
	bool                                               bTracerVisible;                                             // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              TracerDuration;                                             // 0x001C   (0x0004)  
	float                                              AdsSensitivity;                                             // 0x0020   (0x0004)  
	float                                              AdsZoomFovScale;                                            // 0x0024   (0x0004)  
	bool                                               bWeaponHidden;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FCrosshairSettingsNative                           Crosshair;                                                  // 0x0030   (0x0080)  
	bool                                               bOverrideSensitivity;                                       // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              HorizontalSensitivity;                                      // 0x00B4   (0x0004)  
	float                                              VerticalSensitivity;                                        // 0x00B8   (0x0004)  
	ESensitivityScaleTarget                            SensitivityScale;                                           // 0x00BC   (0x0001)  
	bool                                               bOverrideFov;                                               // 0x00BD   (0x0001)  
	unsigned char                                      UnknownData04_6[0x2];                                       // 0x00BE   (0x0002)  MISSED
	float                                              FOV;                                                        // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	FString                                            BodyHitSound;                                               // 0x00C8   (0x0010)  
	FString                                            HeadHitSound;                                               // 0x00D8   (0x0010)  
	FString                                            ShootSound;                                                 // 0x00E8   (0x0010)  
	bool                                               bEnableMissSound;                                           // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
	FString                                            MissSound;                                                  // 0x0100   (0x0010)  
	float                                              MissPitchShiftPerDegree;                                    // 0x0110   (0x0004)  
	bool                                               bMissSeparate;                                              // 0x0114   (0x0001)  
	bool                                               bMissSeparateSwap;                                          // 0x0115   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x0116   (0x0002)  MISSED
	float                                              AdsZoomFov;                                                 // 0x0118   (0x0004)  
	bool                                               bAutoScaleZoomSensitivity;                                  // 0x011C   (0x0001)  
	bool                                               bGraphicOriginAtWeapon;                                     // 0x011D   (0x0001)  
	unsigned char                                      UnknownData08_6[0x2];                                       // 0x011E   (0x0002)  MISSED
	FVector                                            WeaponModelOffset;                                          // 0x0120   (0x000C)  
	unsigned char                                      UnknownData09_6[0x4];                                       // 0x012C   (0x0004)  MISSED
	FString                                            WeaponSkin;                                                 // 0x0130   (0x0010)  
	FString                                            ShootPressedSound;                                          // 0x0140   (0x0010)  
	FString                                            ShootReleasedSound;                                         // 0x0150   (0x0010)  
	FString                                            ReloadPressedSound;                                         // 0x0160   (0x0010)  
	float                                              CustomYaw;                                                  // 0x0170   (0x0004)  
	float                                              CustomYawFovMult;                                           // 0x0174   (0x0004)  
	bool                                               bDisableManualRecoilNegation;                               // 0x0178   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3];                                       // 0x0179   (0x0003)  MISSED
	float                                              ShootSoundCooldown;                                         // 0x017C   (0x0004)  
	float                                              HitSoundCooldown;                                           // 0x0180   (0x0004)  
	EFovScaleTarget                                    HipfireFovScaleTarget;                                      // 0x0184   (0x0001)  
	EFovScaleTarget                                    AdsFovScaleTarget;                                          // 0x0185   (0x0001)  
	unsigned char                                      UnknownData11_6[0x2];                                       // 0x0186   (0x0002)  MISSED
	int32_t                                            HipfireCustomFovAspectX;                                    // 0x0188   (0x0004)  
	int32_t                                            HipfireCustomFovAspectY;                                    // 0x018C   (0x0004)  
	FString                                            HipfireCustomFovScale;                                      // 0x0190   (0x0010)  
	int32_t                                            AdsCustomFovAspectX;                                        // 0x01A0   (0x0004)  
	int32_t                                            AdsCustomFovAspectY;                                        // 0x01A4   (0x0004)  
	FString                                            AdsCustomFovScale;                                          // 0x01A8   (0x0010)  
	bool                                               bOverrideWeaponModel;                                       // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData12_6[0x7];                                       // 0x01B9   (0x0007)  MISSED
	FString                                            OverrideWeaponModelGraphic;                                 // 0x01C0   (0x0010)  
	FString                                            FovScaleString;                                             // 0x01D0   (0x0010)  
	FString                                            SensitivityScaleString;                                     // 0x01E0   (0x0010)  
	EScopeChoicesNative                                AdsScope;                                                   // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData13_6[0x7];                                       // 0x01F1   (0x0007)  MISSED
	FString                                            AdsFovScaleString;                                          // 0x01F8   (0x0010)  
};

/// Struct /Script/KovaaKSettingsModels.CharacterSettingsNative
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FCharacterSettingsNative
{ 
	FString                                            CharacterProfile;                                           // 0x0000   (0x0010)  
	TArray<int32_t>                                    WeaponOrder;                                                // 0x0010   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FCrosshairSettingsNative) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FWeaponSettingsNative) == 0x0208); // 520 bytes (0x000000 - 0x000208)
static_assert(sizeof(FCharacterSettingsNative) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FCrosshairSettingsNative, Color) == 0x0000);
static_assert(offsetof(FCrosshairSettingsNative, Filename) == 0x0018);
static_assert(offsetof(FCrosshairSettingsNative, HitmarkerColor) == 0x0030);
static_assert(offsetof(FCrosshairSettingsNative, HitmarkerFile) == 0x0040);
static_assert(offsetof(FCrosshairSettingsNative, HeadHitmarkerColor) == 0x0058);
static_assert(offsetof(FCrosshairSettingsNative, HeadHitmarkerFile) == 0x0068);
static_assert(offsetof(FWeaponSettingsNative, WeaponName) == 0x0008);
static_assert(offsetof(FWeaponSettingsNative, Crosshair) == 0x0030);
static_assert(offsetof(FWeaponSettingsNative, SensitivityScale) == 0x00BC);
static_assert(offsetof(FWeaponSettingsNative, BodyHitSound) == 0x00C8);
static_assert(offsetof(FWeaponSettingsNative, HeadHitSound) == 0x00D8);
static_assert(offsetof(FWeaponSettingsNative, ShootSound) == 0x00E8);
static_assert(offsetof(FWeaponSettingsNative, MissSound) == 0x0100);
static_assert(offsetof(FWeaponSettingsNative, WeaponModelOffset) == 0x0120);
static_assert(offsetof(FWeaponSettingsNative, WeaponSkin) == 0x0130);
static_assert(offsetof(FWeaponSettingsNative, ShootPressedSound) == 0x0140);
static_assert(offsetof(FWeaponSettingsNative, ShootReleasedSound) == 0x0150);
static_assert(offsetof(FWeaponSettingsNative, ReloadPressedSound) == 0x0160);
static_assert(offsetof(FWeaponSettingsNative, HipfireFovScaleTarget) == 0x0184);
static_assert(offsetof(FWeaponSettingsNative, AdsFovScaleTarget) == 0x0185);
static_assert(offsetof(FWeaponSettingsNative, HipfireCustomFovScale) == 0x0190);
static_assert(offsetof(FWeaponSettingsNative, AdsCustomFovScale) == 0x01A8);
static_assert(offsetof(FWeaponSettingsNative, OverrideWeaponModelGraphic) == 0x01C0);
static_assert(offsetof(FWeaponSettingsNative, FovScaleString) == 0x01D0);
static_assert(offsetof(FWeaponSettingsNative, SensitivityScaleString) == 0x01E0);
static_assert(offsetof(FWeaponSettingsNative, AdsScope) == 0x01F0);
static_assert(offsetof(FWeaponSettingsNative, AdsFovScaleString) == 0x01F8);
static_assert(offsetof(FCharacterSettingsNative, CharacterProfile) == 0x0000);
static_assert(offsetof(FCharacterSettingsNative, WeaponOrder) == 0x0010);
