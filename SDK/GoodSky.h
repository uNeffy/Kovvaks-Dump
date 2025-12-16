
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

/// Enum /Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Style_Clouds.Enum_GoodSky_Style_Clouds
/// Size: 0x01 (1 bytes)
enum class Enum_GoodSky_Style_Clouds : uint8_t
{
	Enum_GoodSky_Style_Clouds__NewEnumerator0                                        = 0,
	Enum_GoodSky_Style_Clouds__NewEnumerator3                                        = 1,
	Enum_GoodSky_Style_Clouds__NewEnumerator1                                        = 2,
	Enum_GoodSky_Style_Clouds__NewEnumerator2                                        = 3
};

/// Enum /Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Preset.Enum_GoodSky_Preset
/// Size: 0x01 (1 bytes)
enum class Enum_GoodSky_Preset : uint8_t
{
	Enum_GoodSky_Preset__NewEnumerator4                                              = 0,
	Enum_GoodSky_Preset__NewEnumerator5                                              = 1,
	Enum_GoodSky_Preset__NewEnumerator16                                             = 2,
	Enum_GoodSky_Preset__NewEnumerator3                                              = 3,
	Enum_GoodSky_Preset__NewEnumerator0                                              = 4,
	Enum_GoodSky_Preset__NewEnumerator6                                              = 5,
	Enum_GoodSky_Preset__NewEnumerator2                                              = 6,
	Enum_GoodSky_Preset__NewEnumerator7                                              = 7,
	Enum_GoodSky_Preset__NewEnumerator14                                             = 8,
	Enum_GoodSky_Preset__NewEnumerator11                                             = 9,
	Enum_GoodSky_Preset__NewEnumerator1                                              = 10,
	Enum_GoodSky_Preset__NewEnumerator8                                              = 11,
	Enum_GoodSky_Preset__NewEnumerator17                                             = 12,
	Enum_GoodSky_Preset__NewEnumerator21                                             = 13,
	Enum_GoodSky_Preset__NewEnumerator18                                             = 14,
	Enum_GoodSky_Preset__NewEnumerator20                                             = 15,
	Enum_GoodSky_Preset__NewEnumerator19                                             = 16,
	Enum_GoodSky_Preset__NewEnumerator9                                              = 17,
	Enum_GoodSky_Preset__NewEnumerator15                                             = 18,
	Enum_GoodSky_Preset__NewEnumerator13                                             = 19,
	Enum_GoodSky_Preset__NewEnumerator10                                             = 20,
	Enum_GoodSky_Preset__NewEnumerator22                                             = 21,
	Enum_GoodSky_Preset__NewEnumerator23                                             = 22,
	Enum_GoodSky_Preset__NewEnumerator24                                             = 23,
	Enum_GoodSky_Preset__NewEnumerator25                                             = 24,
	Enum_GoodSky_Preset__NewEnumerator26                                             = 25,
	Enum_GoodSky_Preset__NewEnumerator27                                             = 26,
	Enum_GoodSky_Preset__NewEnumerator28                                             = 27,
	Enum_GoodSky_Preset__NewEnumerator29                                             = 28,
	Enum_GoodSky_Preset__NewEnumerator30                                             = 29,
	Enum_GoodSky_Preset__NewEnumerator31                                             = 30,
	Enum_GoodSky_Preset__NewEnumerator32                                             = 31,
	Enum_GoodSky_Preset__NewEnumerator33                                             = 32,
	Enum_GoodSky_Preset__NewEnumerator35                                             = 33,
	Enum_GoodSky_Preset__NewEnumerator36                                             = 34,
	Enum_GoodSky_Preset__NewEnumerator37                                             = 35,
	Enum_GoodSky_Preset__NewEnumerator38                                             = 36,
	Enum_GoodSky_Preset__NewEnumerator39                                             = 37,
	Enum_GoodSky_Preset__NewEnumerator40                                             = 38,
	Enum_GoodSky_Preset__NewEnumerator41                                             = 39,
	Enum_GoodSky_Preset__NewEnumerator42                                             = 40,
	Enum_GoodSky_Preset__NewEnumerator43                                             = 41
};

/// Enum /Game/GoodSky/Source/Data/Enum/Enum_GoodSky_MeshType.Enum_GoodSky_MeshType
/// Size: 0x01 (1 bytes)
enum class Enum_GoodSky_MeshType : uint8_t
{
	Enum_GoodSky_MeshType__NewEnumerator0                                            = 0,
	Enum_GoodSky_MeshType__NewEnumerator1                                            = 1
};

/// Enum /Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Effects.Enum_GoodSky_Effects
/// Size: 0x01 (1 bytes)
enum class Enum_GoodSky_Effects : uint8_t
{
	Enum_GoodSky_Effects__NewEnumerator0                                             = 0,
	Enum_GoodSky_Effects__NewEnumerator3                                             = 1,
	Enum_GoodSky_Effects__NewEnumerator1                                             = 2,
	Enum_GoodSky_Effects__NewEnumerator2                                             = 3
};

/// Enum /Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Clouds_Coverage.Enum_GoodSky_Clouds_Coverage
/// Size: 0x01 (1 bytes)
enum class Enum_GoodSky_Clouds_Coverage : uint8_t
{
	Enum_GoodSky_Clouds_Coverage__NewEnumerator3                                     = 0,
	Enum_GoodSky_Clouds_Coverage__NewEnumerator0                                     = 1,
	Enum_GoodSky_Clouds_Coverage__NewEnumerator1                                     = 2,
	Enum_GoodSky_Clouds_Coverage__NewEnumerator2                                     = 3,
	Enum_GoodSky_Clouds_Coverage__NewEnumerator4                                     = 4,
	Enum_GoodSky_Clouds_Coverage__NewEnumerator5                                     = 5
};

/// Class /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C
/// Size: 0x03A4 (932 bytes) (0x000220 - 0x0003A4) align 8 MaxSize: 0x03A4
class ABP_GoodSky_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class USceneComponent*                             SunSphere_Group;                                            // 0x0228   (0x0008)  
	class UStaticMeshComponent*                        StarMesh;                                                   // 0x0230   (0x0008)  
	class USceneComponent*                             Mesh_Group;                                                 // 0x0238   (0x0008)  
	class UStaticMeshComponent*                        SunMesh;                                                    // 0x0240   (0x0008)  
	class UArrowComponent*                             NOW_Arrow;                                                  // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        Sky_Ring;                                                   // 0x0250   (0x0008)  
	class USceneComponent*                             NowTime_Arrow_Group;                                        // 0x0258   (0x0008)  
	class UArrowComponent*                             SunRiseArrow_Group;                                         // 0x0260   (0x0008)  
	class USceneComponent*                             ArrowTool;                                                  // 0x0268   (0x0008)  
	class UTextRenderComponent*                        TextRender;                                                 // 0x0270   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh;                                                 // 0x0278   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0280   (0x0008)  
	bool                                               Refresh_Sky_Shader__For_direction_actor__;                  // 0x0288   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0289   (0x0007)  MISSED
	class ADirectionalLight*                           ___;                                                        // 0x0290   (0x0008)  
	bool                                               Enable_Auto_Day___Night_Cycle_In_Game_;                     // 0x0298   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0299   (0x0003)  MISSED
	float                                              ___0;                                                       // 0x029C   (0x0004)  
	bool                                               Enable_Time_of_Day;                                         // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x02A1   (0x0003)  MISSED
	float                                              ___1;                                                       // 0x02A4   (0x0004)  
	TEnumAsByte<Enum_GoodSky_Preset>                   SkyPreset;                                                  // 0x02A8   (0x0001)  
	TEnumAsByte<Enum_GoodSky_Style_Clouds>             SkyCloudsStyle;                                             // 0x02A9   (0x0001)  
	TEnumAsByte<Enum_GoodSky_Clouds_Coverage>          SkyCloudsCoveragePreset;                                    // 0x02AA   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x02AB   (0x0005)  MISSED
	class UCurveLinearColor*                           Curve_BaseCloudColor;                                       // 0x02B0   (0x0008)  
	class UCurveLinearColor*                           Curve_BackGroundHorizonColor;                               // 0x02B8   (0x0008)  
	class UCurveLinearColor*                           Curve_DomeColor;                                            // 0x02C0   (0x0008)  
	class UCurveLinearColor*                           Curve_AllOverlayColor;                                      // 0x02C8   (0x0008)  
	class UCurveFloat*                                 Curve_StarsTime;                                            // 0x02D0   (0x0008)  
	class UCurveVector*                                Curve_SunDirection;                                         // 0x02D8   (0x0008)  
	class UMaterialInstanceDynamic*                    SkyMaterial;                                                // 0x02E0   (0x0008)  
	FName                                              SelectSkyName;                                              // 0x02E8   (0x0008)  
	TEnumAsByte<Enum_GoodSky_Effects>                  SkyEffect;                                                  // 0x02F0   (0x0001)  
	TEnumAsByte<Enum_GoodSky_MeshType>                 SkyMesh;                                                    // 0x02F1   (0x0001)  
	bool                                               UseRandomTime__For_Custom_Mode__;                           // 0x02F2   (0x0001)  
	bool                                               Use_All_Random;                                             // 0x02F3   (0x0001)  
	float                                              Global_Texture_Move_Speed_;                                 // 0x02F4   (0x0004)  
	FLinearColor                                       Global_Overlay_Color;                                       // 0x02F8   (0x0010)  
	float                                              Global_Horizon_Fog_Falloff;                                 // 0x0308   (0x0004)  
	float                                              Clouds_Behind_Effect_Intensity;                             // 0x030C   (0x0004)  
	FLinearColor                                       Moon_Overlay_Color;                                         // 0x0310   (0x0010)  
	float                                              Moon_Size;                                                  // 0x0320   (0x0004)  
	float                                              Moon_Brightness;                                            // 0x0324   (0x0004)  
	float                                              Moon_Move;                                                  // 0x0328   (0x0004)  
	float                                              Sun_Size;                                                   // 0x032C   (0x0004)  
	float                                              Sun_brightness;                                             // 0x0330   (0x0004)  
	FLinearColor                                       Stars_Overlay__Color;                                       // 0x0334   (0x0010)  
	float                                              Stars_brightness;                                           // 0x0344   (0x0004)  
	float                                              Stars_UVTile;                                               // 0x0348   (0x0004)  
	float                                              Stars_Falloff_Intensity;                                    // 0x034C   (0x0004)  
	float                                              Lightning_Brightness;                                       // 0x0350   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0354   (0x0004)  MISSED
	class UCurveFloat*                                 Curve_SunLight;                                             // 0x0358   (0x0008)  
	FLinearColor                                       Lightning_Overlay_Color;                                    // 0x0360   (0x0010)  
	float                                              Get_Present_Time_of_Day;                                    // 0x0370   (0x0004)  
	int32_t                                            Moon_Eclipse_Intensity;                                     // 0x0374   (0x0004)  
	float                                              ___2;                                                       // 0x0378   (0x0004)  
	float                                              ___3;                                                       // 0x037C   (0x0004)  
	bool                                               ArrowTool__Hidden_In_Game;                                  // 0x0380   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0381   (0x0003)  MISSED
	float                                              Get_Rotator_To_Time_of_Day;                                 // 0x0384   (0x0004)  
	float                                              Temp_Time_of_Day;                                           // 0x0388   (0x0004)  
	FRotator                                           Get_Present_Rotator;                                        // 0x038C   (0x000C)  
	float                                              East___West_;                                               // 0x0398   (0x0004)  
	bool                                               Solid_Color;                                                // 0x039C   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x039D   (0x0003)  MISSED
	int32_t                                            IsFromExternalSource;                                       // 0x03A0   (0x0004)  


	/// Functions
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.ApplyUserColor
	// void ApplyUserColor();                                                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.ApplyColor
	// void ApplyColor(bool SolidSkyColor, FLinearColor SkyColor);                                                              // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.ApplyUserShowSun
	// void ApplyUserShowSun();                                                                                                 // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.ApplyShowSun
	// void ApplyShowSun(bool ShowSun);                                                                                         // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.ApplyUserCloudCover
	// void ApplyUserCloudCover();                                                                                              // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.ApplyCloudCover
	// void ApplyCloudCover(int32_t CloudCover);                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.ApplyUserSkyPreset
	// void ApplyUserSkyPreset();                                                                                               // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.ApplySkyPreset
	// void ApplySkyPreset(int32_t SkyPreset);                                                                                  // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.ApplySettings
	// void ApplySettings(bool ShowSun, bool SolidSkyColor, FLinearColor SkyColor, int32_t SkyPreset, int32_t CloudCover);      // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.ApplyUserSettings
	// void ApplyUserSettings();                                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.Init
	// void Init();                                                                                                             // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.Use All Random Sky
	// void UseAllRandomSky();                                                                                                  // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.Get Sky Presets DataTable
	// void GetSkyPresetsDataTable(FName Name);                                                                                 // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x18d2100] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.GoodSky Realtime Update
	// void GoodSkyRealtimeUpdate();                                                                                            // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x18d2100] Event|Public|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x18d2100] Event|Protected|BlueprintEvent 
	// Function /Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C.ExecuteUbergraph_BP_GoodSky
	// void ExecuteUbergraph_BP_GoodSky(int32_t EntryPoint);                                                                    // [0x18d2100] Final                
};

#pragma pack(pop)


static_assert(sizeof(ABP_GoodSky_C) == 0x03A4); // 932 bytes (0x000220 - 0x0003A4)
static_assert(offsetof(ABP_GoodSky_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ABP_GoodSky_C, SunSphere_Group) == 0x0228);
static_assert(offsetof(ABP_GoodSky_C, StarMesh) == 0x0230);
static_assert(offsetof(ABP_GoodSky_C, Mesh_Group) == 0x0238);
static_assert(offsetof(ABP_GoodSky_C, SunMesh) == 0x0240);
static_assert(offsetof(ABP_GoodSky_C, NOW_Arrow) == 0x0248);
static_assert(offsetof(ABP_GoodSky_C, Sky_Ring) == 0x0250);
static_assert(offsetof(ABP_GoodSky_C, NowTime_Arrow_Group) == 0x0258);
static_assert(offsetof(ABP_GoodSky_C, SunRiseArrow_Group) == 0x0260);
static_assert(offsetof(ABP_GoodSky_C, ArrowTool) == 0x0268);
static_assert(offsetof(ABP_GoodSky_C, TextRender) == 0x0270);
static_assert(offsetof(ABP_GoodSky_C, StaticMesh) == 0x0278);
static_assert(offsetof(ABP_GoodSky_C, DefaultSceneRoot) == 0x0280);
static_assert(offsetof(ABP_GoodSky_C, ___) == 0x0290);
static_assert(offsetof(ABP_GoodSky_C, SkyPreset) == 0x02A8);
static_assert(offsetof(ABP_GoodSky_C, SkyCloudsStyle) == 0x02A9);
static_assert(offsetof(ABP_GoodSky_C, SkyCloudsCoveragePreset) == 0x02AA);
static_assert(offsetof(ABP_GoodSky_C, Curve_BaseCloudColor) == 0x02B0);
static_assert(offsetof(ABP_GoodSky_C, Curve_BackGroundHorizonColor) == 0x02B8);
static_assert(offsetof(ABP_GoodSky_C, Curve_DomeColor) == 0x02C0);
static_assert(offsetof(ABP_GoodSky_C, Curve_AllOverlayColor) == 0x02C8);
static_assert(offsetof(ABP_GoodSky_C, Curve_StarsTime) == 0x02D0);
static_assert(offsetof(ABP_GoodSky_C, Curve_SunDirection) == 0x02D8);
static_assert(offsetof(ABP_GoodSky_C, SkyMaterial) == 0x02E0);
static_assert(offsetof(ABP_GoodSky_C, SelectSkyName) == 0x02E8);
static_assert(offsetof(ABP_GoodSky_C, SkyEffect) == 0x02F0);
static_assert(offsetof(ABP_GoodSky_C, SkyMesh) == 0x02F1);
static_assert(offsetof(ABP_GoodSky_C, Global_Overlay_Color) == 0x02F8);
static_assert(offsetof(ABP_GoodSky_C, Moon_Overlay_Color) == 0x0310);
static_assert(offsetof(ABP_GoodSky_C, Stars_Overlay__Color) == 0x0334);
static_assert(offsetof(ABP_GoodSky_C, Curve_SunLight) == 0x0358);
static_assert(offsetof(ABP_GoodSky_C, Lightning_Overlay_Color) == 0x0360);
static_assert(offsetof(ABP_GoodSky_C, Get_Present_Rotator) == 0x038C);
