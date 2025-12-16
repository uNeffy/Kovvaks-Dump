
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/CoherentRenderingPlugin.ECoherentRenderingSettingsSeverity
/// Size: 0x01 (1 bytes)
enum class ECoherentRenderingSettingsSeverity : uint8_t
{
	ECoherentRenderingSettingsSeverity__Trace                                        = 0,
	ECoherentRenderingSettingsSeverity__Debug                                        = 1,
	ECoherentRenderingSettingsSeverity__Info                                         = 2,
	ECoherentRenderingSettingsSeverity__Warning                                      = 3,
	ECoherentRenderingSettingsSeverity__AssertFailure                                = 4,
	ECoherentRenderingSettingsSeverity__Error                                        = 5
};

/// Class /Script/CoherentRenderingPlugin.CoherentRenderingSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UCoherentRenderingSettings : public UObject
{ 
public:
	ECoherentRenderingSettingsSeverity                 RenderingLogSeverity;                                       // 0x0028   (0x0001)  
	bool                                               ShowWarningsOnScreen;                                       // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x002A   (0x0006)  MISSED
	FString                                            DeveloperOptions;                                           // 0x0030   (0x0010)  
};

/// Class /Script/CoherentRenderingPlugin.CohTextureUserWrapData
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UCohTextureUserWrapData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0028   (0x0048)  MISSED
	class UTexture*                                    Texture;                                                    // 0x0070   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UCoherentRenderingSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UCohTextureUserWrapData) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(offsetof(UCoherentRenderingSettings, RenderingLogSeverity) == 0x0028);
static_assert(offsetof(UCoherentRenderingSettings, DeveloperOptions) == 0x0030);
static_assert(offsetof(UCohTextureUserWrapData, Texture) == 0x0070);
