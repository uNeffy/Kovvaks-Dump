
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/KovaaKCoreModels.ERandomSensEasingFunction
/// Size: 0x01 (1 bytes)
enum class ERandomSensEasingFunction : uint8_t
{
	ERandomSensEasingFunction__Step                                                  = 0,
	ERandomSensEasingFunction__Smooth                                                = 1
};

/// Enum /Script/KovaaKCoreModels.ETransitionState
/// Size: 0x01 (1 bytes)
enum class ETransitionState : uint8_t
{
	ETransitionState__Enter                                                          = 0,
	ETransitionState__Exit                                                           = 1
};

/// Enum /Script/KovaaKCoreModels.EExecutionPolicy
/// Size: 0x01 (1 bytes)
enum class EExecutionPolicy : uint8_t
{
	EExecutionPolicy__Unrestricted                                                   = 0,
	EExecutionPolicy__Restricted                                                     = 1
};

/// Enum /Script/KovaaKCoreModels.EExecutionStatus
/// Size: 0x01 (1 bytes)
enum class EExecutionStatus : uint8_t
{
	EExecutionStatus__Paused                                                         = 0,
	EExecutionStatus__Running                                                        = 1,
	EExecutionStatus__Stopped                                                        = 2
};

/// Enum /Script/KovaaKCoreModels.EFovScaleTarget
/// Size: 0x01 (1 bytes)
enum class EFovScaleTarget : uint8_t
{
	EFovScaleTarget__Invalid                                                         = 0,
	EFovScaleTarget__QuakeSource                                                     = 1,
	EFovScaleTarget__QuakeChampions                                                  = 2,
	EFovScaleTarget__Overwatch                                                       = 3,
	EFovScaleTarget__Horizontal_16x9                                                 = 4,
	EFovScaleTarget__Horizontal_4x3                                                  = 5,
	EFovScaleTarget__Vertial_1x1                                                     = 6,
	EFovScaleTarget__ClampedHorizontal                                               = 7,
	EFovScaleTarget__ApexLegends                                                     = 8,
	EFovScaleTarget__Fornite                                                         = 9,
	EFovScaleTarget__FortniteLegacy                                                  = 10,
	EFovScaleTarget__Valorant                                                        = 11,
	EFovScaleTarget__Custom                                                          = 12,
	EFovScaleTarget__Splitgate                                                       = 13,
	EFovScaleTarget__CSGO                                                            = 14,
	EFovScaleTarget__CallOfDuty                                                      = 15,
	EFovScaleTarget__RainbowSixSiege                                                 = 16,
	EFovScaleTarget__Diabotical                                                      = 17,
	EFovScaleTarget__Destiny2                                                        = 18,
	EFovScaleTarget__Battlefield                                                     = 19,
	EFovScaleTarget__PUBG                                                            = 20,
	EFovScaleTarget__Paladins                                                        = 21,
	EFovScaleTarget__Halo                                                            = 22,
	EFovScaleTarget__Rust                                                            = 23
};

/// Enum /Script/KovaaKCoreModels.EScopeChoicesNative
/// Size: 0x01 (1 bytes)
enum class EScopeChoicesNative : uint8_t
{
	EScopeChoicesNative__NoScope                                                     = 0,
	EScopeChoicesNative__SC                                                          = 1,
	EScopeChoicesNative__SC3                                                         = 2,
	EScopeChoicesNative__SC4                                                         = 3,
	EScopeChoicesNative__SC5                                                         = 4,
	EScopeChoicesNative__SC6                                                         = 5,
	EScopeChoicesNative__SC7                                                         = 6,
	EScopeChoicesNative__SC8                                                         = 7,
	EScopeChoicesNative__SC9                                                         = 8,
	EScopeChoicesNative__SC10                                                        = 9,
	EScopeChoicesNative__SC11                                                        = 10,
	EScopeChoicesNative__SC12                                                        = 11
};

/// Enum /Script/KovaaKCoreModels.EValueElseResult
/// Size: 0x01 (1 bytes)
enum class EValueElseResult : uint8_t
{
	EValueElseResult__HasValue                                                       = 0,
	EValueElseResult__Else                                                           = 1
};

/// Enum /Script/KovaaKCoreModels.EInScenarioCheck
/// Size: 0x01 (1 bytes)
enum class EInScenarioCheck : uint8_t
{
	EInScenarioCheck__None                                                           = 0,
	EInScenarioCheck__CheckForValidScenario                                          = 1
};

/// Enum /Script/KovaaKCoreModels.EScenarioType
/// Size: 0x01 (1 bytes)
enum class EScenarioType : uint8_t
{
	EScenarioType__Online                                                            = 0,
	EScenarioType__Local                                                             = 1,
	EScenarioType__Trainer                                                           = 2
};

/// Enum /Script/KovaaKCoreModels.EScenarioStartType
/// Size: 0x01 (1 bytes)
enum class EScenarioStartType : uint8_t
{
	EScenarioStartType__Start                                                        = 0,
	EScenarioStartType__Restart                                                      = 1,
	EScenarioStartType__Replay                                                       = 2
};

/// Enum /Script/KovaaKCoreModels.EScenarioPlayType
/// Size: 0x01 (1 bytes)
enum class EScenarioPlayType : uint8_t
{
	EScenarioPlayType__Challenge                                                     = 0,
	EScenarioPlayType__FreePlay                                                      = 1,
	EScenarioPlayType__Benchmark                                                     = 2
};

/// Enum /Script/KovaaKCoreModels.ELocalSortType
/// Size: 0x01 (1 bytes)
enum class ELocalSortType : uint8_t
{
	ELocalSortType__Title                                                            = 0,
	ELocalSortType__Difficulty                                                       = 1
};

/// Class /Script/KovaaKCoreModels.CommonCharacter
/// Size: 0x04C0 (1216 bytes) (0x0004B8 - 0x0004C0) align 16 MaxSize: 0x04C0
class ACommonCharacter : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x04B8   (0x0008)  MISSED
};

/// Class /Script/KovaaKCoreModels.CommonSettings
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UCommonSettings : public UDeveloperSettings
{ 
public:
	TWeakObjectPtr<class UDataTable*>                  KnownScenarioDefaultTags;                                   // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/KovaaKCoreModels.CommonSettings.Get_KnownScenarioDefaultTags
	// class UDataTable* Get_KnownScenarioDefaultTags();                                                                        // [0xea5bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/KovaaKCoreModels.BurstCounterBase
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FBurstCounterBase
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	bool                                               IsHeld;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            PressCount;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/KovaaKCoreModels.CrouchBurstCounter
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FCrouchBurstCounter : FBurstCounterBase
{ 
};

/// Struct /Script/KovaaKCoreModels.JumpBurstCounter
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FJumpBurstCounter : FBurstCounterBase
{ 
};

/// Struct /Script/KovaaKCoreModels.LeanLeftBurstCounter
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FLeanLeftBurstCounter : FBurstCounterBase
{ 
};

/// Struct /Script/KovaaKCoreModels.LeanRightBurstCounter
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FLeanRightBurstCounter : FBurstCounterBase
{ 
};

/// Struct /Script/KovaaKCoreModels.MovementBurstCounterSet
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FMovementBurstCounterSet
{ 
	FCrouchBurstCounter                                Crouch;                                                     // 0x0000   (0x0010)  
	FJumpBurstCounter                                  Jump;                                                       // 0x0010   (0x0010)  
	FLeanLeftBurstCounter                              LeanLeft;                                                   // 0x0020   (0x0010)  
	FLeanRightBurstCounter                             LeanRight;                                                  // 0x0030   (0x0010)  
};

/// Struct /Script/KovaaKCoreModels.AbilitySlotBurstCounter
/// Size: 0x0018 (24 bytes) (0x000010 - 0x000018) align 8 MaxSize: 0x0018
struct FAbilitySlotBurstCounter : FBurstCounterBase
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/KovaaKCoreModels.AbilityBurstCounterSet
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAbilityBurstCounterSet
{ 
	TArray<FAbilitySlotBurstCounter>                   ActivateAbilities;                                          // 0x0000   (0x0010)  
};

/// Struct /Script/KovaaKCoreModels.FireBurstCounter
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FFireBurstCounter : FBurstCounterBase
{ 
};

/// Struct /Script/KovaaKCoreModels.AltFireBurstCounter
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FAltFireBurstCounter : FBurstCounterBase
{ 
};

/// Struct /Script/KovaaKCoreModels.ReloadBurstCounter
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FReloadBurstCounter : FBurstCounterBase
{ 
};

/// Struct /Script/KovaaKCoreModels.ADSBurstCounter
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FADSBurstCounter : FBurstCounterBase
{ 
};

/// Struct /Script/KovaaKCoreModels.WeaponSlotBurstCounter
/// Size: 0x0018 (24 bytes) (0x000010 - 0x000018) align 8 MaxSize: 0x0018
struct FWeaponSlotBurstCounter : FBurstCounterBase
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/KovaaKCoreModels.WeaponBurstCounterSet
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FWeaponBurstCounterSet
{ 
	FFireBurstCounter                                  Fire;                                                       // 0x0000   (0x0010)  
	FAltFireBurstCounter                               AltFire;                                                    // 0x0010   (0x0010)  
	FReloadBurstCounter                                Reload;                                                     // 0x0020   (0x0010)  
	FADSBurstCounter                                   ADS;                                                        // 0x0030   (0x0010)  
	TArray<FWeaponSlotBurstCounter>                    SwitchWeapons;                                              // 0x0040   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(ACommonCharacter) == 0x04C0); // 1216 bytes (0x0004B8 - 0x0004C0)
static_assert(sizeof(UCommonSettings) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(FBurstCounterBase) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCrouchBurstCounter) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FJumpBurstCounter) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FLeanLeftBurstCounter) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FLeanRightBurstCounter) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FMovementBurstCounterSet) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FAbilitySlotBurstCounter) == 0x0018); // 24 bytes (0x000010 - 0x000018)
static_assert(sizeof(FAbilityBurstCounterSet) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFireBurstCounter) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FAltFireBurstCounter) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FReloadBurstCounter) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FADSBurstCounter) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FWeaponSlotBurstCounter) == 0x0018); // 24 bytes (0x000010 - 0x000018)
static_assert(sizeof(FWeaponBurstCounterSet) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(UCommonSettings, KnownScenarioDefaultTags) == 0x0038);
static_assert(offsetof(FMovementBurstCounterSet, Crouch) == 0x0000);
static_assert(offsetof(FMovementBurstCounterSet, Jump) == 0x0010);
static_assert(offsetof(FMovementBurstCounterSet, LeanLeft) == 0x0020);
static_assert(offsetof(FMovementBurstCounterSet, LeanRight) == 0x0030);
static_assert(offsetof(FAbilityBurstCounterSet, ActivateAbilities) == 0x0000);
static_assert(offsetof(FWeaponBurstCounterSet, Fire) == 0x0000);
static_assert(offsetof(FWeaponBurstCounterSet, AltFire) == 0x0010);
static_assert(offsetof(FWeaponBurstCounterSet, Reload) == 0x0020);
static_assert(offsetof(FWeaponBurstCounterSet, ADS) == 0x0030);
static_assert(offsetof(FWeaponBurstCounterSet, SwitchWeapons) == 0x0040);
