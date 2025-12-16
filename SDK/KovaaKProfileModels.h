
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
/// dependency: KovaaKCoreModels
/// dependency: KovaaKCoreUtils

#pragma pack(push, 0x1)

/// Enum /Script/KovaaKProfileModels.EAdaptiveDifficultyTimeDilationType
/// Size: 0x01 (1 bytes)
enum class EAdaptiveDifficultyTimeDilationType : uint8_t
{
	EAdaptiveDifficultyTimeDilationType__TargetDilation                              = 0,
	EAdaptiveDifficultyTimeDilationType__WorldDilation                               = 1
};

/// Enum /Script/KovaaKProfileModels.EAdaptivePerformanceMetricType
/// Size: 0x01 (1 bytes)
enum class EAdaptivePerformanceMetricType : uint8_t
{
	EAdaptivePerformanceMetricType__Accuracy                                         = 0,
	EAdaptivePerformanceMetricType__DamageEfficiency                                 = 1,
	EAdaptivePerformanceMetricType__KillsPerSecond                                   = 2
};

/// Enum /Script/KovaaKProfileModels.EDifficultyAdjustmentDirection
/// Size: 0x01 (1 bytes)
enum class EDifficultyAdjustmentDirection : uint8_t
{
	EDifficultyAdjustmentDirection__DecreaseDifficulty                               = 255,
	EDifficultyAdjustmentDirection__MaintainDifficulty                               = 0,
	EDifficultyAdjustmentDirection__IncreaseDifficulty                               = 1
};

/// Enum /Script/KovaaKProfileModels.EResetStrafeBehavior
/// Size: 0x01 (1 bytes)
enum class EResetStrafeBehavior : uint8_t
{
	EResetStrafeBehavior__InitialSpawn                                               = 0,
	EResetStrafeBehavior__EverySpawn                                                 = 1,
	EResetStrafeBehavior__SwapDodgeProfile                                           = 2
};

/// Enum /Script/KovaaKProfileModels.EInitialRightMovementState
/// Size: 0x01 (1 bytes)
enum class EInitialRightMovementState : uint8_t
{
	EInitialRightMovementState__Right                                                = 0,
	EInitialRightMovementState__Left                                                 = 1,
	EInitialRightMovementState__Random                                               = 2
};

/// Enum /Script/KovaaKProfileModels.EInitialForwardMovementState
/// Size: 0x01 (1 bytes)
enum class EInitialForwardMovementState : uint8_t
{
	EInitialForwardMovementState__Forward                                            = 0,
	EInitialForwardMovementState__Back                                               = 1,
	EInitialForwardMovementState__Random                                             = 2
};

/// Enum /Script/KovaaKProfileModels.EPlaybackPositionMode
/// Size: 0x01 (1 bytes)
enum class EPlaybackPositionMode : uint8_t
{
	EPlaybackPositionMode__Input                                                     = 0,
	EPlaybackPositionMode__AbsolutePosition                                          = 1
};

/// Enum /Script/KovaaKProfileModels.EDynamicAdjustmentProperty
/// Size: 0x01 (1 bytes)
enum class EDynamicAdjustmentProperty : uint8_t
{
	EDynamicAdjustmentProperty__None                                                 = 0,
	EDynamicAdjustmentProperty__TimeDilation                                         = 1,
	EDynamicAdjustmentProperty__TargetScale                                          = 2
};

/// Enum /Script/KovaaKProfileModels.EInterpolationFunction
/// Size: 0x01 (1 bytes)
enum class EInterpolationFunction : uint8_t
{
	EInterpolationFunction__Step                                                     = 0,
	EInterpolationFunction__Linear                                                   = 1
};

/// Enum /Script/KovaaKProfileModels.EDistanceScoreConditions
/// Size: 0x01 (1 bytes)
enum class EDistanceScoreConditions : uint8_t
{
	EDistanceScoreConditions__None                                                   = 0,
	EDistanceScoreConditions__LooseAntiMirror                                        = 1,
	EDistanceScoreConditions__LooseMirror                                            = 2,
	EDistanceScoreConditions__StrictAntiMirror                                       = 3,
	EDistanceScoreConditions__StrictMirror                                           = 4
};

/// Enum /Script/KovaaKProfileModels.EHitPitchModifier
/// Size: 0x01 (1 bytes)
enum class EHitPitchModifier : uint8_t
{
	EHitPitchModifier__Off                                                           = 0,
	EHitPitchModifier__IncreaseSlow                                                  = 1,
	EHitPitchModifier__IncreaseFast                                                  = 2,
	EHitPitchModifier__Random                                                        = 3
};

/// Enum /Script/KovaaKProfileModels.ESensitivity
/// Size: 0x01 (1 bytes)
enum class ESensitivity : uint8_t
{
	ESensitivity__Off                                                                = 0,
	ESensitivity__Static                                                             = 1,
	ESensitivity__Random_Step                                                        = 2,
	ESensitivity__Random_Smooth                                                      = 3
};

/// Enum /Script/KovaaKProfileModels.ESubProfileType
/// Size: 0x01 (1 bytes)
enum class ESubProfileType : uint8_t
{
	ESubProfileType__Weapon                                                          = 0,
	ESubProfileType__Bot                                                             = 1,
	ESubProfileType__Aim                                                             = 2,
	ESubProfileType__Character                                                       = 3,
	ESubProfileType__Dodge                                                           = 4,
	ESubProfileType__BotRotation                                                     = 5,
	ESubProfileType__MovementAbility                                                 = 6,
	ESubProfileType__WeaponAbility                                                   = 7,
	ESubProfileType__MeleeAbility                                                    = 8,
	ESubProfileType__RecallAbility                                                   = 9,
	ESubProfileType__SprintAbility                                                   = 10
};

/// Enum /Script/KovaaKProfileModels.EScenarioFeatureVersion
/// Size: 0x01 (1 bytes)
enum class EScenarioFeatureVersion : uint8_t
{
	EScenarioFeatureVersion__Invalid                                                 = 0,
	EScenarioFeatureVersion__Initial                                                 = 1
};

/// Enum /Script/KovaaKProfileModels.ELOSReactType
/// Size: 0x01 (1 bytes)
enum class ELOSReactType : uint8_t
{
	ELOSReactType__None                                                              = 0,
	ELOSReactType__ReturnToSpawn                                                     = 1,
	ELOSReactType__HaltMovement                                                      = 2
};

/// Enum /Script/KovaaKProfileModels.EAiWaypointLogicType
/// Size: 0x01 (1 bytes)
enum class EAiWaypointLogicType : uint8_t
{
	EAiWaypointLogicType__Ignore                                                     = 0,
	EAiWaypointLogicType__FollowUntilCombat                                          = 1,
	EAiWaypointLogicType__FollowAimAtTarget                                          = 2,
	EAiWaypointLogicType__FollowAimAtWaypoint                                        = 3
};

/// Enum /Script/KovaaKProfileModels.ETargetStrafeOverrideType
/// Size: 0x01 (1 bytes)
enum class ETargetStrafeOverrideType : uint8_t
{
	ETargetStrafeOverrideType__Ignore                                                = 0,
	ETargetStrafeOverrideType__Mimic                                                 = 1,
	ETargetStrafeOverrideType__Oppose                                                = 2,
	ETargetStrafeOverrideType__TargetShootingSoon                                    = 3
};

/// Enum /Script/KovaaKProfileModels.EWeaponModelTypeNative
/// Size: 0x01 (1 bytes)
enum class EWeaponModelTypeNative : uint8_t
{
	EWeaponModelTypeNative__None                                                     = 0,
	EWeaponModelTypeNative__Pistol                                                   = 1,
	EWeaponModelTypeNative__Sniper                                                   = 2,
	EWeaponModelTypeNative__SMG                                                      = 3,
	EWeaponModelTypeNative__Shotgun                                                  = 4,
	EWeaponModelTypeNative__Revolver                                                 = 5,
	EWeaponModelTypeNative__Minigun                                                  = 6,
	EWeaponModelTypeNative__DualPistols                                              = 7,
	EWeaponModelTypeNative__AssaultRifle                                             = 8
};

/// Enum /Script/KovaaKProfileModels.EBoundingBox
/// Size: 0x01 (1 bytes)
enum class EBoundingBox : uint8_t
{
	EBoundingBox__Cylindrical                                                        = 0,
	EBoundingBox__Cuboid                                                             = 1,
	EBoundingBox__Spheroid                                                           = 2
};

/// Enum /Script/KovaaKProfileModels.EAimingStyle
/// Size: 0x01 (1 bytes)
enum class EAimingStyle : uint8_t
{
	EAimingStyle__Original                                                           = 0,
	EAimingStyle__Sniper                                                             = 1,
	EAimingStyle__Simple                                                             = 2
};

/// Enum /Script/KovaaKProfileModels.EWeaponAnimationNative
/// Size: 0x01 (1 bytes)
enum class EWeaponAnimationNative : uint8_t
{
	EWeaponAnimationNative__Primary                                                  = 0,
	EWeaponAnimationNative__Secondary                                                = 1,
	EWeaponAnimationNative__Charging                                                 = 2,
	EWeaponAnimationNative__None                                                     = 3
};

/// Enum /Script/KovaaKProfileModels.ESoundsType
/// Size: 0x01 (1 bytes)
enum class ESoundsType : uint8_t
{
	ESoundsType__Shot                                                                = 0,
	ESoundsType__Hit1                                                                = 1,
	ESoundsType__Hit2                                                                = 2
};

/// Enum /Script/KovaaKProfileModels.EProjectileGraphicType
/// Size: 0x01 (1 bytes)
enum class EProjectileGraphicType : uint8_t
{
	EProjectileGraphicType__Ball                                                     = 0,
	EProjectileGraphicType__Rocket                                                   = 1,
	EProjectileGraphicType__Plasma                                                   = 2,
	EProjectileGraphicType__Arrow                                                    = 3,
	EProjectileGraphicType__Orb                                                      = 4,
	EProjectileGraphicType__Shuriken                                                 = 5
};

/// Enum /Script/KovaaKProfileModels.EWeaponCooldownTypeNative
/// Size: 0x01 (1 bytes)
enum class EWeaponCooldownTypeNative : uint8_t
{
	EWeaponCooldownTypeNative__InfiniteUse                                           = 0,
	EWeaponCooldownTypeNative__ReloadableAmmo                                        = 1,
	EWeaponCooldownTypeNative__TimedCooldownNoCharge                                 = 2,
	EWeaponCooldownTypeNative__Charges                                               = 3
};

/// Enum /Script/KovaaKProfileModels.EWeaponCategoryType
/// Size: 0x01 (1 bytes)
enum class EWeaponCategoryType : uint8_t
{
	EWeaponCategoryType__FullyAuto                                                   = 0,
	EWeaponCategoryType__SemiAuto                                                    = 1,
	EWeaponCategoryType__SemiAutoNoPrehold                                           = 2,
	EWeaponCategoryType__Burst                                                       = 3,
	EWeaponCategoryType__Charge                                                      = 4
};

/// Enum /Script/KovaaKProfileModels.EWeaponTypeNative
/// Size: 0x01 (1 bytes)
enum class EWeaponTypeNative : uint8_t
{
	EWeaponTypeNative__Hitscan                                                       = 0,
	EWeaponTypeNative__Projectile                                                    = 1,
	EWeaponTypeNative__Ability                                                       = 2
};

/// Class /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface
/// Size: 0x0280 (640 bytes) (0x000030 - 0x000280) align 8 MaxSize: 0x0280
class UAdaptiveDifficultyModelInterface : public UCommonGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x250];                                     // 0x0030   (0x0250)  MISSED


	/// Functions
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Send_TimeDilationType
	// void Send_TimeDilationType(EAdaptiveDifficultyTimeDilationType InValue);                                                 // [0xec0bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Send_TimeDilationBaseMultiplier
	// void Send_TimeDilationBaseMultiplier(float InValue);                                                                     // [0xec0b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Send_TargetSizeBaseMultiplier
	// void Send_TargetSizeBaseMultiplier(float InValue);                                                                       // [0xec0af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Send_PerformanceThreshold
	// void Send_PerformanceThreshold(float InValue);                                                                           // [0xec0a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Send_PerformanceTarget
	// void Send_PerformanceTarget(float InValue);                                                                              // [0xec09f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Send_PerformanceMetricType
	// void Send_PerformanceMetricType(EAdaptivePerformanceMetricType InValue);                                                 // [0xec0970] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Send_MinTargetSpeedMultiplier
	// void Send_MinTargetSpeedMultiplier(float InValue);                                                                       // [0xec08f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Send_MinTargetSizeMultiplier
	// void Send_MinTargetSizeMultiplier(float InValue);                                                                        // [0xec0870] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Send_MaxTargetSpeedMultiplier
	// void Send_MaxTargetSpeedMultiplier(float InValue);                                                                       // [0xec07f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Send_MaxTargetSizeMultiplier
	// void Send_MaxTargetSizeMultiplier(float InValue);                                                                        // [0xec0770] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Send_IsTimeDilationActive
	// void Send_IsTimeDilationActive(bool InValue);                                                                            // [0xec06e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Send_IsTargetSizeActive
	// void Send_IsTargetSizeActive(bool InValue);                                                                              // [0xec0650] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Send_IsHeightLocked
	// void Send_IsHeightLocked(bool InValue);                                                                                  // [0xec05c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Send_IsDirty
	// void Send_IsDirty(bool InValue);                                                                                         // [0xec0530] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Send_AdjustmentRate
	// void Send_AdjustmentRate(float InValue);                                                                                 // [0xec04b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Send_AdjustmentInterval
	// void Send_AdjustmentInterval(float InValue);                                                                             // [0xec0430] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_TransientData
	// void Reset_TransientData();                                                                                              // [0xec0410] Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_TimeDilationType
	// void Reset_TimeDilationType();                                                                                           // [0xec03f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_TimeDilationBaseMultiplier
	// void Reset_TimeDilationBaseMultiplier();                                                                                 // [0xec03d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_TargetSizeBaseMultiplier
	// void Reset_TargetSizeBaseMultiplier();                                                                                   // [0xec03b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_PerformanceThreshold
	// void Reset_PerformanceThreshold();                                                                                       // [0xec0390] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_PerformanceTarget
	// void Reset_PerformanceTarget();                                                                                          // [0xec0370] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_PerformanceMetricType
	// void Reset_PerformanceMetricType();                                                                                      // [0xec0350] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_MinTargetSpeedMultiplier
	// void Reset_MinTargetSpeedMultiplier();                                                                                   // [0xec0330] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_MinTargetSizeMultiplier
	// void Reset_MinTargetSizeMultiplier();                                                                                    // [0xec0310] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_MaxTargetSpeedMultiplier
	// void Reset_MaxTargetSpeedMultiplier();                                                                                   // [0xec02f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_MaxTargetSizeMultiplier
	// void Reset_MaxTargetSizeMultiplier();                                                                                    // [0xec02d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_IsTimeDilationActive
	// void Reset_IsTimeDilationActive();                                                                                       // [0xec02b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_IsTargetSizeActive
	// void Reset_IsTargetSizeActive();                                                                                         // [0xec0290] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_IsHeightLocked
	// void Reset_IsHeightLocked();                                                                                             // [0xec0270] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_IsDirty
	// void Reset_IsDirty();                                                                                                    // [0xec0250] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_AdjustmentRate
	// void Reset_AdjustmentRate();                                                                                             // [0xec0230] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Reset_AdjustmentInterval
	// void Reset_AdjustmentInterval();                                                                                         // [0xec0210] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_TimeDilationType_ValueOr
	// void Receive_TimeDilationType_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EAdaptiveDifficultyTimeDilationType& OutValue, EAdaptiveDifficultyTimeDilationType ValueIfNull); // [0xec0090] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_TimeDilationType_ValueElse
	// void Receive_TimeDilationType_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EAdaptiveDifficultyTimeDilationType& OutValue, EValueElseResult& Result); // [0xebff00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_TimeDilationType_Single
	// void Receive_TimeDilationType_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EAdaptiveDifficultyTimeDilationType& OutValue); // [0xebfdb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_TimeDilationType
	// void Receive_TimeDilationType(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EAdaptiveDifficultyTimeDilationType& OutValue); // [0xebfdb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_TimeDilationBaseMultiplier_ValueOr
	// void Receive_TimeDilationBaseMultiplier_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xebfc30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_TimeDilationBaseMultiplier_ValueElse
	// void Receive_TimeDilationBaseMultiplier_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xebfaa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_TimeDilationBaseMultiplier_Single
	// void Receive_TimeDilationBaseMultiplier_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebf950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_TimeDilationBaseMultiplier
	// void Receive_TimeDilationBaseMultiplier(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebf950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_TargetSizeBaseMultiplier_ValueOr
	// void Receive_TargetSizeBaseMultiplier_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xebf7d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_TargetSizeBaseMultiplier_ValueElse
	// void Receive_TargetSizeBaseMultiplier_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xebf640] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_TargetSizeBaseMultiplier_Single
	// void Receive_TargetSizeBaseMultiplier_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebf4f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_TargetSizeBaseMultiplier
	// void Receive_TargetSizeBaseMultiplier(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebf4f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_PerformanceThreshold_ValueOr
	// void Receive_PerformanceThreshold_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xebf370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_PerformanceThreshold_ValueElse
	// void Receive_PerformanceThreshold_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xebf1e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_PerformanceThreshold_Single
	// void Receive_PerformanceThreshold_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebf090] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_PerformanceThreshold
	// void Receive_PerformanceThreshold(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebf090] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_PerformanceTarget_ValueOr
	// void Receive_PerformanceTarget_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xebef10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_PerformanceTarget_ValueElse
	// void Receive_PerformanceTarget_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xebed80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_PerformanceTarget_Single
	// void Receive_PerformanceTarget_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebec30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_PerformanceTarget
	// void Receive_PerformanceTarget(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);  // [0xebec30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_PerformanceMetricType_ValueOr
	// void Receive_PerformanceMetricType_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EAdaptivePerformanceMetricType& OutValue, EAdaptivePerformanceMetricType ValueIfNull); // [0xebeab0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_PerformanceMetricType_ValueElse
	// void Receive_PerformanceMetricType_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EAdaptivePerformanceMetricType& OutValue, EValueElseResult& Result); // [0xebe920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_PerformanceMetricType_Single
	// void Receive_PerformanceMetricType_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EAdaptivePerformanceMetricType& OutValue); // [0xebe7d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_PerformanceMetricType
	// void Receive_PerformanceMetricType(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EAdaptivePerformanceMetricType& OutValue); // [0xebe7d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_MinTargetSpeedMultiplier_ValueOr
	// void Receive_MinTargetSpeedMultiplier_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xebe650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_MinTargetSpeedMultiplier_ValueElse
	// void Receive_MinTargetSpeedMultiplier_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xebe4c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_MinTargetSpeedMultiplier_Single
	// void Receive_MinTargetSpeedMultiplier_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebe370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_MinTargetSpeedMultiplier
	// void Receive_MinTargetSpeedMultiplier(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebe370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_MinTargetSizeMultiplier_ValueOr
	// void Receive_MinTargetSizeMultiplier_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xebe1f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_MinTargetSizeMultiplier_ValueElse
	// void Receive_MinTargetSizeMultiplier_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xebe060] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_MinTargetSizeMultiplier_Single
	// void Receive_MinTargetSizeMultiplier_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebdf10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_MinTargetSizeMultiplier
	// void Receive_MinTargetSizeMultiplier(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebdf10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_MaxTargetSpeedMultiplier_ValueOr
	// void Receive_MaxTargetSpeedMultiplier_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xebdd90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_MaxTargetSpeedMultiplier_ValueElse
	// void Receive_MaxTargetSpeedMultiplier_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xebdc00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_MaxTargetSpeedMultiplier_Single
	// void Receive_MaxTargetSpeedMultiplier_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebdab0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_MaxTargetSpeedMultiplier
	// void Receive_MaxTargetSpeedMultiplier(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebdab0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_MaxTargetSizeMultiplier_ValueOr
	// void Receive_MaxTargetSizeMultiplier_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xebd930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_MaxTargetSizeMultiplier_ValueElse
	// void Receive_MaxTargetSizeMultiplier_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xebd7a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_MaxTargetSizeMultiplier_Single
	// void Receive_MaxTargetSizeMultiplier_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebd650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_MaxTargetSizeMultiplier
	// void Receive_MaxTargetSizeMultiplier(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebd650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_IsTimeDilationActive_ValueOr
	// void Receive_IsTimeDilationActive_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, bool ValueIfNull); // [0xebd4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_IsTimeDilationActive_ValueElse
	// void Receive_IsTimeDilationActive_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, EValueElseResult& Result); // [0xebd340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_IsTimeDilationActive_Single
	// void Receive_IsTimeDilationActive_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue); // [0xebd1f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_IsTimeDilationActive
	// void Receive_IsTimeDilationActive(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue); // [0xebd1f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_IsTargetSizeActive_ValueOr
	// void Receive_IsTargetSizeActive_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, bool ValueIfNull); // [0xebd070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_IsTargetSizeActive_ValueElse
	// void Receive_IsTargetSizeActive_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, EValueElseResult& Result); // [0xebcee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_IsTargetSizeActive_Single
	// void Receive_IsTargetSizeActive_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue); // [0xebcd90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_IsTargetSizeActive
	// void Receive_IsTargetSizeActive(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);  // [0xebcd90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_IsHeightLocked_ValueOr
	// void Receive_IsHeightLocked_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, bool ValueIfNull); // [0xebcc10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_IsHeightLocked_ValueElse
	// void Receive_IsHeightLocked_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, EValueElseResult& Result); // [0xebca80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_IsHeightLocked_Single
	// void Receive_IsHeightLocked_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue); // [0xebc930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_IsHeightLocked
	// void Receive_IsHeightLocked(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);      // [0xebc930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_IsDirty_ValueOr
	// void Receive_IsDirty_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, bool ValueIfNull); // [0xebc7b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_IsDirty_ValueElse
	// void Receive_IsDirty_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, EValueElseResult& Result); // [0xebc620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_IsDirty_Single
	// void Receive_IsDirty_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);      // [0xebc4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_IsDirty
	// void Receive_IsDirty(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);             // [0xebc4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_AdjustmentRate_ValueOr
	// void Receive_AdjustmentRate_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xebc350] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_AdjustmentRate_ValueElse
	// void Receive_AdjustmentRate_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xebc1c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_AdjustmentRate_Single
	// void Receive_AdjustmentRate_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebc070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_AdjustmentRate
	// void Receive_AdjustmentRate(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);     // [0xebc070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_AdjustmentInterval_ValueOr
	// void Receive_AdjustmentInterval_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xebbef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_AdjustmentInterval_ValueElse
	// void Receive_AdjustmentInterval_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xebbd60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_AdjustmentInterval_Single
	// void Receive_AdjustmentInterval_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebbc10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Receive_AdjustmentInterval
	// void Receive_AdjustmentInterval(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebbc10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Import_Profile
	// void Import_Profile(FAdaptiveDifficultyProfile& InProfile);                                                              // [0xebbb50] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_TimeDilationType_ValueOr
	// void Get_TimeDilationType_ValueOr(EAdaptiveDifficultyTimeDilationType& OutValue, EAdaptiveDifficultyTimeDilationType ValueIfNull); // [0xebba70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_TimeDilationType_ValueElse
	// void Get_TimeDilationType_ValueElse(EAdaptiveDifficultyTimeDilationType& OutValue, EValueElseResult& Result);            // [0xebb990] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_TimeDilationType_DefaultValue
	// EAdaptiveDifficultyTimeDilationType Get_TimeDilationType_DefaultValue();                                                 // [0xeb4e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_TimeDilationBaseMultiplier_ValueOr
	// void Get_TimeDilationBaseMultiplier_ValueOr(float& OutValue, float ValueIfNull);                                         // [0xebb8b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_TimeDilationBaseMultiplier_ValueElse
	// void Get_TimeDilationBaseMultiplier_ValueElse(float& OutValue, EValueElseResult& Result);                                // [0xebb7d0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_TimeDilationBaseMultiplier_DefaultValue
	// float Get_TimeDilationBaseMultiplier_DefaultValue();                                                                     // [0xeb4a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_TargetSizeBaseMultiplier_ValueOr
	// void Get_TargetSizeBaseMultiplier_ValueOr(float& OutValue, float ValueIfNull);                                           // [0xebb6f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_TargetSizeBaseMultiplier_ValueElse
	// void Get_TargetSizeBaseMultiplier_ValueElse(float& OutValue, EValueElseResult& Result);                                  // [0xebb610] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_TargetSizeBaseMultiplier_DefaultValue
	// float Get_TargetSizeBaseMultiplier_DefaultValue();                                                                       // [0xeb4a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_PerformanceThreshold_ValueOr
	// void Get_PerformanceThreshold_ValueOr(float& OutValue, float ValueIfNull);                                               // [0xebb530] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_PerformanceThreshold_ValueElse
	// void Get_PerformanceThreshold_ValueElse(float& OutValue, EValueElseResult& Result);                                      // [0xebb450] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_PerformanceThreshold_DefaultValue
	// float Get_PerformanceThreshold_DefaultValue();                                                                           // [0xebb420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_PerformanceTarget_ValueOr
	// void Get_PerformanceTarget_ValueOr(float& OutValue, float ValueIfNull);                                                  // [0xebb340] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_PerformanceTarget_ValueElse
	// void Get_PerformanceTarget_ValueElse(float& OutValue, EValueElseResult& Result);                                         // [0xebb260] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_PerformanceTarget_DefaultValue
	// float Get_PerformanceTarget_DefaultValue();                                                                              // [0xebb230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_PerformanceMetricType_ValueOr
	// void Get_PerformanceMetricType_ValueOr(EAdaptivePerformanceMetricType& OutValue, EAdaptivePerformanceMetricType ValueIfNull); // [0xebb150] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_PerformanceMetricType_ValueElse
	// void Get_PerformanceMetricType_ValueElse(EAdaptivePerformanceMetricType& OutValue, EValueElseResult& Result);            // [0xebb070] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_PerformanceMetricType_DefaultValue
	// EAdaptivePerformanceMetricType Get_PerformanceMetricType_DefaultValue();                                                 // [0xeb4e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_MinTargetSpeedMultiplier_ValueOr
	// void Get_MinTargetSpeedMultiplier_ValueOr(float& OutValue, float ValueIfNull);                                           // [0xebaf90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_MinTargetSpeedMultiplier_ValueElse
	// void Get_MinTargetSpeedMultiplier_ValueElse(float& OutValue, EValueElseResult& Result);                                  // [0xebaeb0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_MinTargetSpeedMultiplier_DefaultValue
	// float Get_MinTargetSpeedMultiplier_DefaultValue();                                                                       // [0xebacc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_MinTargetSizeMultiplier_ValueOr
	// void Get_MinTargetSizeMultiplier_ValueOr(float& OutValue, float ValueIfNull);                                            // [0xebadd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_MinTargetSizeMultiplier_ValueElse
	// void Get_MinTargetSizeMultiplier_ValueElse(float& OutValue, EValueElseResult& Result);                                   // [0xebacf0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_MinTargetSizeMultiplier_DefaultValue
	// float Get_MinTargetSizeMultiplier_DefaultValue();                                                                        // [0xebacc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_MaxTargetSpeedMultiplier_ValueOr
	// void Get_MaxTargetSpeedMultiplier_ValueOr(float& OutValue, float ValueIfNull);                                           // [0xebabe0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_MaxTargetSpeedMultiplier_ValueElse
	// void Get_MaxTargetSpeedMultiplier_ValueElse(float& OutValue, EValueElseResult& Result);                                  // [0xebab00] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_MaxTargetSpeedMultiplier_DefaultValue
	// float Get_MaxTargetSpeedMultiplier_DefaultValue();                                                                       // [0xeba910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_MaxTargetSizeMultiplier_ValueOr
	// void Get_MaxTargetSizeMultiplier_ValueOr(float& OutValue, float ValueIfNull);                                            // [0xebaa20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_MaxTargetSizeMultiplier_ValueElse
	// void Get_MaxTargetSizeMultiplier_ValueElse(float& OutValue, EValueElseResult& Result);                                   // [0xeba940] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_MaxTargetSizeMultiplier_DefaultValue
	// float Get_MaxTargetSizeMultiplier_DefaultValue();                                                                        // [0xeba910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_IsTimeDilationActive_ValueOr
	// void Get_IsTimeDilationActive_ValueOr(bool& OutValue, bool ValueIfNull);                                                 // [0xeba830] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_IsTimeDilationActive_ValueElse
	// void Get_IsTimeDilationActive_ValueElse(bool& OutValue, EValueElseResult& Result);                                       // [0xeba750] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_IsTimeDilationActive_DefaultValue
	// bool Get_IsTimeDilationActive_DefaultValue();                                                                            // [0xeb4e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_IsTargetSizeActive_ValueOr
	// void Get_IsTargetSizeActive_ValueOr(bool& OutValue, bool ValueIfNull);                                                   // [0xeba670] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_IsTargetSizeActive_ValueElse
	// void Get_IsTargetSizeActive_ValueElse(bool& OutValue, EValueElseResult& Result);                                         // [0xeba590] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_IsTargetSizeActive_DefaultValue
	// bool Get_IsTargetSizeActive_DefaultValue();                                                                              // [0xeb4e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_IsHeightLocked_ValueOr
	// void Get_IsHeightLocked_ValueOr(bool& OutValue, bool ValueIfNull);                                                       // [0xeba4b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_IsHeightLocked_ValueElse
	// void Get_IsHeightLocked_ValueElse(bool& OutValue, EValueElseResult& Result);                                             // [0xeba3d0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_IsHeightLocked_DefaultValue
	// bool Get_IsHeightLocked_DefaultValue();                                                                                  // [0xeb4e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_IsDirty_ValueOr
	// void Get_IsDirty_ValueOr(bool& OutValue, bool ValueIfNull);                                                              // [0xeba2f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_IsDirty_ValueElse
	// void Get_IsDirty_ValueElse(bool& OutValue, EValueElseResult& Result);                                                    // [0xeba210] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_IsDirty_DefaultValue
	// bool Get_IsDirty_DefaultValue();                                                                                         // [0xeb4e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_AdjustmentRate_ValueOr
	// void Get_AdjustmentRate_ValueOr(float& OutValue, float ValueIfNull);                                                     // [0xeba130] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_AdjustmentRate_ValueElse
	// void Get_AdjustmentRate_ValueElse(float& OutValue, EValueElseResult& Result);                                            // [0xeba050] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_AdjustmentRate_DefaultValue
	// float Get_AdjustmentRate_DefaultValue();                                                                                 // [0xeba020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_AdjustmentInterval_ValueOr
	// void Get_AdjustmentInterval_ValueOr(float& OutValue, float ValueIfNull);                                                 // [0xeb9f40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_AdjustmentInterval_ValueElse
	// void Get_AdjustmentInterval_ValueElse(float& OutValue, EValueElseResult& Result);                                        // [0xeb9e60] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Get_AdjustmentInterval_DefaultValue
	// float Get_AdjustmentInterval_DefaultValue();                                                                             // [0xeb9e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyModelInterface.Export_Profile
	// FAdaptiveDifficultyProfile Export_Profile();                                                                             // [0xeb9de0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/KovaaKProfileModels.AdaptiveDifficultyEditorModel
/// Size: 0x0280 (640 bytes) (0x000280 - 0x000280) align 8 MaxSize: 0x0280
class UAdaptiveDifficultyEditorModel : public UAdaptiveDifficultyModelInterface
{ 
public:
};

/// Class /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel
/// Size: 0x03A8 (936 bytes) (0x000280 - 0x0003A8) align 8 MaxSize: 0x03A8
class UAdaptiveDifficultyGameModel : public UAdaptiveDifficultyModelInterface
{ 
public:
	unsigned char                                      UnknownData00_8[0x118];                                     // 0x0280   (0x0118)  MISSED
	SDK_UNDEFINED(16,292) /* FMulticastInlineDelegate */ __um(Receive_ImportProfile_K2);                           // 0x0398   (0x0010)  


	/// Functions
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Send_PreviousPerformanceMetricValue
	// void Send_PreviousPerformanceMetricValue(float InValue);                                                                 // [0xeb8090] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Send_PreviousDifficultyAdjustmentDirection
	// void Send_PreviousDifficultyAdjustmentDirection(EDifficultyAdjustmentDirection InValue);                                 // [0xeb8010] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Send_ImportProfile
	// void Send_ImportProfile();                                                                                               // [0xeb7ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Send_CurrentTimeDilationModifier
	// void Send_CurrentTimeDilationModifier(float InValue);                                                                    // [0xeb7f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Send_CurrentTargetSizeModifier
	// void Send_CurrentTargetSizeModifier(float InValue);                                                                      // [0xeb7ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Send_CurrentPerformanceMetricValue
	// void Send_CurrentPerformanceMetricValue(float InValue);                                                                  // [0xeb7e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Send_CurrentDifficultyAdjustmentDirection
	// void Send_CurrentDifficultyAdjustmentDirection(EDifficultyAdjustmentDirection InValue);                                  // [0xeb7df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Send_AverageTimeDilationModifier
	// void Send_AverageTimeDilationModifier(float InValue);                                                                    // [0xeb7d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Send_AverageTargetSizeModifier
	// void Send_AverageTargetSizeModifier(float InValue);                                                                      // [0xeb7cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Reset_PreviousPerformanceMetricValue
	// void Reset_PreviousPerformanceMetricValue();                                                                             // [0xeb7cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Reset_PreviousDifficultyAdjustmentDirection
	// void Reset_PreviousDifficultyAdjustmentDirection();                                                                      // [0xeb7cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Reset_CurrentTimeDilationModifier
	// void Reset_CurrentTimeDilationModifier();                                                                                // [0xeb7c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Reset_CurrentTargetSizeModifier
	// void Reset_CurrentTargetSizeModifier();                                                                                  // [0xeb7c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Reset_CurrentPerformanceMetricValue
	// void Reset_CurrentPerformanceMetricValue();                                                                              // [0xeb7c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Reset_CurrentDifficultyAdjustmentDirection
	// void Reset_CurrentDifficultyAdjustmentDirection();                                                                       // [0xeb7c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Reset_AverageTimeDilationModifier
	// void Reset_AverageTimeDilationModifier();                                                                                // [0xeb7c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Reset_AverageTargetSizeModifier
	// void Reset_AverageTargetSizeModifier();                                                                                  // [0xeb7bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_PreviousPerformanceMetricValue_ValueOr
	// void Receive_PreviousPerformanceMetricValue_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xeb7a70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_PreviousPerformanceMetricValue_ValueElse
	// void Receive_PreviousPerformanceMetricValue_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeb78e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_PreviousPerformanceMetricValue_Single
	// void Receive_PreviousPerformanceMetricValue_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeb7790] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_PreviousPerformanceMetricValue
	// void Receive_PreviousPerformanceMetricValue(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeb7790] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_PreviousDifficultyAdjustmentDirection_ValueOr
	// void Receive_PreviousDifficultyAdjustmentDirection_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EDifficultyAdjustmentDirection& OutValue, EDifficultyAdjustmentDirection ValueIfNull); // [0xeb7610] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_PreviousDifficultyAdjustmentDirection_ValueElse
	// void Receive_PreviousDifficultyAdjustmentDirection_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EDifficultyAdjustmentDirection& OutValue, EValueElseResult& Result); // [0xeb7480] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_PreviousDifficultyAdjustmentDirection_Single
	// void Receive_PreviousDifficultyAdjustmentDirection_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EDifficultyAdjustmentDirection& OutValue); // [0xeb7330] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_PreviousDifficultyAdjustmentDirection
	// void Receive_PreviousDifficultyAdjustmentDirection(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EDifficultyAdjustmentDirection& OutValue); // [0xeb7330] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_ImportProfile_K2__DelegateSignature
	// void Receive_ImportProfile_K2__DelegateSignature();                                                                      // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_CurrentTimeDilationModifier_ValueOr
	// void Receive_CurrentTimeDilationModifier_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xeb71b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_CurrentTimeDilationModifier_ValueElse
	// void Receive_CurrentTimeDilationModifier_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeb7020] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_CurrentTimeDilationModifier_Single
	// void Receive_CurrentTimeDilationModifier_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeb6ed0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_CurrentTimeDilationModifier
	// void Receive_CurrentTimeDilationModifier(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeb6ed0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_CurrentTargetSizeModifier_ValueOr
	// void Receive_CurrentTargetSizeModifier_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xeb6d50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_CurrentTargetSizeModifier_ValueElse
	// void Receive_CurrentTargetSizeModifier_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeb6bc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_CurrentTargetSizeModifier_Single
	// void Receive_CurrentTargetSizeModifier_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeb6a70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_CurrentTargetSizeModifier
	// void Receive_CurrentTargetSizeModifier(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeb6a70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_CurrentPerformanceMetricValue_ValueOr
	// void Receive_CurrentPerformanceMetricValue_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xeb68f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_CurrentPerformanceMetricValue_ValueElse
	// void Receive_CurrentPerformanceMetricValue_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeb6760] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_CurrentPerformanceMetricValue_Single
	// void Receive_CurrentPerformanceMetricValue_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeb6610] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_CurrentPerformanceMetricValue
	// void Receive_CurrentPerformanceMetricValue(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeb6610] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_CurrentDifficultyAdjustmentDirection_ValueOr
	// void Receive_CurrentDifficultyAdjustmentDirection_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EDifficultyAdjustmentDirection& OutValue, EDifficultyAdjustmentDirection ValueIfNull); // [0xeb6490] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_CurrentDifficultyAdjustmentDirection_ValueElse
	// void Receive_CurrentDifficultyAdjustmentDirection_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EDifficultyAdjustmentDirection& OutValue, EValueElseResult& Result); // [0xeb6300] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_CurrentDifficultyAdjustmentDirection_Single
	// void Receive_CurrentDifficultyAdjustmentDirection_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EDifficultyAdjustmentDirection& OutValue); // [0xeb61b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_CurrentDifficultyAdjustmentDirection
	// void Receive_CurrentDifficultyAdjustmentDirection(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EDifficultyAdjustmentDirection& OutValue); // [0xeb61b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_AverageTimeDilationModifier_ValueOr
	// void Receive_AverageTimeDilationModifier_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xeb6030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_AverageTimeDilationModifier_ValueElse
	// void Receive_AverageTimeDilationModifier_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeb5ea0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_AverageTimeDilationModifier_Single
	// void Receive_AverageTimeDilationModifier_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeb5d50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_AverageTimeDilationModifier
	// void Receive_AverageTimeDilationModifier(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeb5d50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_AverageTargetSizeModifier_ValueOr
	// void Receive_AverageTargetSizeModifier_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xeb5bd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_AverageTargetSizeModifier_ValueElse
	// void Receive_AverageTargetSizeModifier_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeb5a40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_AverageTargetSizeModifier_Single
	// void Receive_AverageTargetSizeModifier_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeb58f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Receive_AverageTargetSizeModifier
	// void Receive_AverageTargetSizeModifier(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeb58f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_PreviousPerformanceMetricValue_ValueOr
	// void Get_PreviousPerformanceMetricValue_ValueOr(float& OutValue, float ValueIfNull);                                     // [0xeb5810] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_PreviousPerformanceMetricValue_ValueElse
	// void Get_PreviousPerformanceMetricValue_ValueElse(float& OutValue, EValueElseResult& Result);                            // [0xeb5730] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_PreviousPerformanceMetricValue_DefaultValue
	// float Get_PreviousPerformanceMetricValue_DefaultValue();                                                                 // [0xeb4a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_PreviousDifficultyAdjustmentDirection_ValueOr
	// void Get_PreviousDifficultyAdjustmentDirection_ValueOr(EDifficultyAdjustmentDirection& OutValue, EDifficultyAdjustmentDirection ValueIfNull); // [0xeb5650] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_PreviousDifficultyAdjustmentDirection_ValueElse
	// void Get_PreviousDifficultyAdjustmentDirection_ValueElse(EDifficultyAdjustmentDirection& OutValue, EValueElseResult& Result); // [0xeb5570] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_PreviousDifficultyAdjustmentDirection_DefaultValue
	// EDifficultyAdjustmentDirection Get_PreviousDifficultyAdjustmentDirection_DefaultValue();                                 // [0xeb4e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_CurrentTimeDilationModifier_ValueOr
	// void Get_CurrentTimeDilationModifier_ValueOr(float& OutValue, float ValueIfNull);                                        // [0xeb5490] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_CurrentTimeDilationModifier_ValueElse
	// void Get_CurrentTimeDilationModifier_ValueElse(float& OutValue, EValueElseResult& Result);                               // [0xeb53b0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_CurrentTimeDilationModifier_DefaultValue
	// float Get_CurrentTimeDilationModifier_DefaultValue();                                                                    // [0xeb4a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_CurrentTargetSizeModifier_ValueOr
	// void Get_CurrentTargetSizeModifier_ValueOr(float& OutValue, float ValueIfNull);                                          // [0xeb52d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_CurrentTargetSizeModifier_ValueElse
	// void Get_CurrentTargetSizeModifier_ValueElse(float& OutValue, EValueElseResult& Result);                                 // [0xeb51f0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_CurrentTargetSizeModifier_DefaultValue
	// float Get_CurrentTargetSizeModifier_DefaultValue();                                                                      // [0xeb4a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_CurrentPerformanceMetricValue_ValueOr
	// void Get_CurrentPerformanceMetricValue_ValueOr(float& OutValue, float ValueIfNull);                                      // [0xeb5110] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_CurrentPerformanceMetricValue_ValueElse
	// void Get_CurrentPerformanceMetricValue_ValueElse(float& OutValue, EValueElseResult& Result);                             // [0xeb5030] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_CurrentPerformanceMetricValue_DefaultValue
	// float Get_CurrentPerformanceMetricValue_DefaultValue();                                                                  // [0xeb5000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_CurrentDifficultyAdjustmentDirection_ValueOr
	// void Get_CurrentDifficultyAdjustmentDirection_ValueOr(EDifficultyAdjustmentDirection& OutValue, EDifficultyAdjustmentDirection ValueIfNull); // [0xeb4f20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_CurrentDifficultyAdjustmentDirection_ValueElse
	// void Get_CurrentDifficultyAdjustmentDirection_ValueElse(EDifficultyAdjustmentDirection& OutValue, EValueElseResult& Result); // [0xeb4e40] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_CurrentDifficultyAdjustmentDirection_DefaultValue
	// EDifficultyAdjustmentDirection Get_CurrentDifficultyAdjustmentDirection_DefaultValue();                                  // [0xeb4e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_AverageTimeDilationModifier_ValueOr
	// void Get_AverageTimeDilationModifier_ValueOr(float& OutValue, float ValueIfNull);                                        // [0xeb4d30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_AverageTimeDilationModifier_ValueElse
	// void Get_AverageTimeDilationModifier_ValueElse(float& OutValue, EValueElseResult& Result);                               // [0xeb4c50] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_AverageTimeDilationModifier_DefaultValue
	// float Get_AverageTimeDilationModifier_DefaultValue();                                                                    // [0xeb4a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_AverageTargetSizeModifier_ValueOr
	// void Get_AverageTargetSizeModifier_ValueOr(float& OutValue, float ValueIfNull);                                          // [0xeb4b70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_AverageTargetSizeModifier_ValueElse
	// void Get_AverageTargetSizeModifier_ValueElse(float& OutValue, EValueElseResult& Result);                                 // [0xeb4a90] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKProfileModels.AdaptiveDifficultyGameModel.Get_AverageTargetSizeModifier_DefaultValue
	// float Get_AverageTargetSizeModifier_DefaultValue();                                                                      // [0xeb4a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/KovaaKProfileModels.AdaptiveDifficultyProfileDefaultValues
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UAdaptiveDifficultyProfileDefaultValues : public UDeveloperSettings
{ 
public:
	EAdaptivePerformanceMetricType                     PerformanceMetricType;                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              MaxTargetSizeMultiplier;                                    // 0x003C   (0x0004)  
	float                                              MinTargetSizeMultiplier;                                    // 0x0040   (0x0004)  
	float                                              MaxTargetSpeedMultiplier;                                   // 0x0044   (0x0004)  
	float                                              MinTargetSpeedMultiplier;                                   // 0x0048   (0x0004)  
	float                                              PerformanceTarget_Accuracy;                                 // 0x004C   (0x0004)  
	float                                              PerformanceTarget_DammageEfficiency;                        // 0x0050   (0x0004)  
	float                                              PerformanceTarget_KillsPerSecond;                           // 0x0054   (0x0004)  
	float                                              PerformanceThreshold_Accuracy;                              // 0x0058   (0x0004)  
	float                                              PerformanceThreshold_DammageEfficiency;                     // 0x005C   (0x0004)  
	float                                              PerformanceThreshold_KillsPerSecond;                        // 0x0060   (0x0004)  
	float                                              AdjustmentRate;                                             // 0x0064   (0x0004)  
	float                                              AdjustmentInterval_Accuracy;                                // 0x0068   (0x0004)  
	float                                              AdjustmentInterval_DammageEfficiency;                       // 0x006C   (0x0004)  
	float                                              AdjustmentInterval_KillsPerSecond;                          // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/KovaaKProfileModels.KvKProfileUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UKvKProfileUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/KovaaKProfileModels.KvKProfileUtils.Fix_ScenarioProfileName
	// FString Fix_ScenarioProfileName(FString Value);                                                                          // [0xec5fc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/KovaaKProfileModels.KvKProfileUtils.Compare_ScenarioNames
	// bool Compare_ScenarioNames(FString A, FString B);                                                                        // [0xec5ed0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/KovaaKProfileModels.SensitivityRandomizerProfileDefaultValues
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class USensitivityRandomizerProfileDefaultValues : public UDeveloperSettings
{ 
public:
	bool                                               IsActive;                                                   // 0x0038   (0x0001)  
	ERandomSensEasingFunction                          EasingFunction;                                             // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003A   (0x0002)  MISSED
	float                                              GlobalMin;                                                  // 0x003C   (0x0004)  
	float                                              GlobalMax;                                                  // 0x0040   (0x0004)  
	float                                              DeltaPerSecondMin;                                          // 0x0044   (0x0004)  
	float                                              DeltaPerSecondMax;                                          // 0x0048   (0x0004)  
	float                                              IntervalSeconds;                                            // 0x004C   (0x0004)  
	bool                                               UseDeltaRange;                                              // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/KovaaKProfileModels.AdaptiveDifficultyProfile
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FAdaptiveDifficultyProfile
{ 
	bool                                               IsTimeDilationActive;                                       // 0x0000   (0x0001)  
	bool                                               IsTargetSizeActive;                                         // 0x0001   (0x0001)  
	bool                                               IsHeightLocked;                                             // 0x0002   (0x0001)  
	EAdaptivePerformanceMetricType                     PerformanceMetricType;                                      // 0x0003   (0x0001)  
	EAdaptiveDifficultyTimeDilationType                TimeDilationType;                                           // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              MaxTargetSizeMultiplier;                                    // 0x0008   (0x0004)  
	float                                              MinTargetSizeMultiplier;                                    // 0x000C   (0x0004)  
	float                                              MaxTargetSpeedMultiplier;                                   // 0x0010   (0x0004)  
	float                                              MinTargetSpeedMultiplier;                                   // 0x0014   (0x0004)  
	float                                              PerformanceTarget;                                          // 0x0018   (0x0004)  
	float                                              PerformanceThreshold;                                       // 0x001C   (0x0004)  
	float                                              TimeDilationBaseMultiplier;                                 // 0x0020   (0x0004)  
	float                                              TargetSizeBaseMultiplier;                                   // 0x0024   (0x0004)  
	float                                              AdjustmentRate;                                             // 0x0028   (0x0004)  
	float                                              AdjustmentInterval;                                         // 0x002C   (0x0004)  
};

/// Struct /Script/KovaaKProfileModels.KovaaKProfile
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FKovaaKProfile
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/KovaaKProfileModels.AIAbilityUseNative
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FAIAbilityUseNative
{ 
	bool                                               UseInCombat;                                                // 0x0000   (0x0001)  
	bool                                               UseOutOfCombat;                                             // 0x0001   (0x0001)  
	bool                                               UseOnGround;                                                // 0x0002   (0x0001)  
	bool                                               UseInAir;                                                   // 0x0003   (0x0001)  
	float                                              ReuseTimer;                                                 // 0x0004   (0x0004)  
	float                                              MinimumSelfHealth;                                          // 0x0008   (0x0004)  
	float                                              MaximumSelfHealth;                                          // 0x000C   (0x0004)  
	float                                              MinimumTargetHealth;                                        // 0x0010   (0x0004)  
	float                                              MaximumTargetHealth;                                        // 0x0014   (0x0004)  
	float                                              MinimumTargetDistance;                                      // 0x0018   (0x0004)  
	float                                              MaximumTargetDistance;                                      // 0x001C   (0x0004)  
	float                                              MaximumFovToTarget;                                         // 0x0020   (0x0004)  
	bool                                               DamageReaction;                                             // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              DamageReactionChanceToIgnore;                               // 0x0028   (0x0004)  
	float                                              DamageReactionMinimumDelay;                                 // 0x002C   (0x0004)  
	float                                              DamageReactionMaximumDelay;                                 // 0x0030   (0x0004)  
	float                                              DamageReactionCooldown;                                     // 0x0034   (0x0004)  
	float                                              DamageReactionThreshold;                                    // 0x0038   (0x0004)  
	float                                              DamageReactionResetTimer;                                   // 0x003C   (0x0004)  
};

/// Struct /Script/KovaaKProfileModels.SprintAbilityNative
/// Size: 0x0078 (120 bytes) (0x000010 - 0x000078) align 8 MaxSize: 0x0078
struct FSprintAbilityNative : FKovaaKProfile
{ 
	float                                              MaxCharges;                                                 // 0x0010   (0x0004)  
	float                                              ChargesOnSpawn;                                             // 0x0014   (0x0004)  
	float                                              ChangeTimer;                                                // 0x0018   (0x0004)  
	float                                              ChargesRefundedOnKill;                                      // 0x001C   (0x0004)  
	float                                              DelayAfterUse;                                              // 0x0020   (0x0004)  
	FAIAbilityUseNative                                AIAbilityUse;                                               // 0x0024   (0x0040)  
	float                                              AbilityDuration;                                            // 0x0064   (0x0004)  
	bool                                               FullyAuto;                                                  // 0x0068   (0x0001)  
	bool                                               BlockAttackWhileSprinting;                                  // 0x0069   (0x0001)  
	bool                                               AbilityBlockedWhenAttacking;                                // 0x006A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x006B   (0x0001)  MISSED
	float                                              SpeedModifier;                                              // 0x006C   (0x0004)  
	bool                                               Allow45DegreeSprint;                                        // 0x0070   (0x0001)  
	bool                                               Allow90DegreeSprint;                                        // 0x0071   (0x0001)  
	bool                                               Allow135DegreeSprint;                                       // 0x0072   (0x0001)  
	bool                                               Allow180DegreeSprint;                                       // 0x0073   (0x0001)  
	bool                                               TapToSprint;                                                // 0x0074   (0x0001)  
	bool                                               Block45DegreesWhenSprinting;                                // 0x0075   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x0076   (0x0002)  MISSED
};

/// Struct /Script/KovaaKProfileModels.JetpackNative
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FJetpackNative
{ 
	bool                                               HasJetpack;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              JumpActivationDelay;                                        // 0x0004   (0x0004)  
	float                                              FullFuelTime;                                               // 0x0008   (0x0004)  
	float                                              FuelIncPerSec;                                              // 0x000C   (0x0004)  
	bool                                               FuelRegensInAir;                                            // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Thrust;                                                     // 0x0014   (0x0004)  
	float                                              MaxZVelocity;                                               // 0x0018   (0x0004)  
	float                                              AirControlWithThrust;                                       // 0x001C   (0x0004)  
};

/// Struct /Script/KovaaKProfileModels.BoundingBoxNative
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FBoundingBoxNative
{ 
	EBoundingBox                                       Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Height;                                                     // 0x0004   (0x0004)  
	float                                              Radius;                                                     // 0x0008   (0x0004)  
	bool                                               HasHead;                                                    // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              HeadRadius;                                                 // 0x0010   (0x0004)  
	float                                              HeadOffset;                                                 // 0x0014   (0x0004)  
	bool                                               HideBB;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/KovaaKProfileModels.MetaPlaybackFrame
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FMetaPlaybackFrame
{ 
	float                                              CurrentPathTime;                                            // 0x0000   (0x0004)  
	float                                              Turn;                                                       // 0x0004   (0x0004)  
	float                                              LookUp;                                                     // 0x0008   (0x0004)  
	float                                              MoveForward;                                                // 0x000C   (0x0004)  
	float                                              MoveRight;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FWeaponBurstCounterSet                             WeaponKeys;                                                 // 0x0018   (0x0050)  
	FAbilityBurstCounterSet                            AbilityKeys;                                                // 0x0068   (0x0010)  
	FMovementBurstCounterSet                           MovementKeys;                                               // 0x0078   (0x0040)  
	FVector                                            Location;                                                   // 0x00B8   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x00C4   (0x000C)  
	FVector                                            Velocity;                                                   // 0x00D0   (0x000C)  
	TEnumAsByte<EMovementMode>                         MovementMode;                                               // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x00DD   (0x0003)  MISSED
};

/// Struct /Script/KovaaKProfileModels.MetaPlaybackOptions
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 1 MaxSize: 0x0008
struct FMetaPlaybackOptions
{ 
	EPlaybackPositionMode                              PlaybackMode;                                               // 0x0000   (0x0001)  
	bool                                               OverrideRotation;                                           // 0x0001   (0x0001)  
	bool                                               OverrideAbilities;                                          // 0x0002   (0x0001)  
	bool                                               OverrideWeapons;                                            // 0x0003   (0x0001)  
	bool                                               OverrideMovement;                                           // 0x0004   (0x0001)  
	bool                                               OverrideDodgeTime;                                          // 0x0005   (0x0001)  
	bool                                               LoopUponCompletion;                                         // 0x0006   (0x0001)  
	bool                                               BreakToInputMode;                                           // 0x0007   (0x0001)  
};

/// Struct /Script/KovaaKProfileModels.PlaybackProfile
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPlaybackProfile
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	TArray<FMetaPlaybackFrame>                         Frames;                                                     // 0x0008   (0x0010)  
	FMetaPlaybackOptions                               PlaybackOptions;                                            // 0x0018   (0x0008)  
};

/// Struct /Script/KovaaKProfileModels.CharacterProfileNative
/// Size: 0x02B8 (696 bytes) (0x000010 - 0x0002B8) align 8 MaxSize: 0x02B8
struct FCharacterProfileNative : FKovaaKProfile
{ 
	float                                              maxHealth;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FString>                                    WeaponProfileNames;                                         // 0x0018   (0x0010)  
	float                                              MinRespawnDelay;                                            // 0x0028   (0x0004)  
	float                                              MaxRespawnDelay;                                            // 0x002C   (0x0004)  
	float                                              StepUpHeight;                                               // 0x0030   (0x0004)  
	float                                              CrouchHeightModifier;                                       // 0x0034   (0x0004)  
	float                                              CrouchAnimationSpeed;                                       // 0x0038   (0x0004)  
	FVector                                            CameraOffset;                                               // 0x003C   (0x000C)  
	bool                                               HeadshotOnly;                                               // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              DamageKnockbackFactor;                                      // 0x004C   (0x0004)  
	float                                              MaxSpeed;                                                   // 0x0050   (0x0004)  
	float                                              MaxCrouchSpeed;                                             // 0x0054   (0x0004)  
	float                                              WalkingAcceleration;                                        // 0x0058   (0x0004)  
	float                                              CrouchingAcceleration;                                      // 0x005C   (0x0004)  
	float                                              Friction;                                                   // 0x0060   (0x0004)  
	float                                              BrakingFrictionFactor;                                      // 0x0064   (0x0004)  
	float                                              JumpVelocityMin;                                            // 0x0068   (0x0004)  
	float                                              JumpVelocityMax;                                            // 0x006C   (0x0004)  
	float                                              Gravity;                                                    // 0x0070   (0x0004)  
	float                                              AirControl;                                                 // 0x0074   (0x0004)  
	bool                                               CanCrouch;                                                  // 0x0078   (0x0001)  
	bool                                               CanPogoJump;                                                // 0x0079   (0x0001)  
	bool                                               CanCrouchInAir;                                             // 0x007A   (0x0001)  
	bool                                               CrouchInAirRaisesFeet;                                      // 0x007B   (0x0001)  
	bool                                               CanJumpFromCrouch;                                          // 0x007C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	FVector                                            EnemyBodyColor;                                             // 0x0080   (0x000C)  
	FVector                                            EnemyBodyColorOnHit;                                        // 0x008C   (0x000C)  
	FVector                                            EnemyBodyColorOnLookAt;                                     // 0x0098   (0x000C)  
	FVector                                            EnemyHeadColor;                                             // 0x00A4   (0x000C)  
	FVector                                            EnemyHeadColorOnHit;                                        // 0x00B0   (0x000C)  
	FVector                                            EnemyHeadColorOnLookAt;                                     // 0x00BC   (0x000C)  
	FVector                                            TeamBodyColor;                                              // 0x00C8   (0x000C)  
	FVector                                            TeamHeadColor;                                              // 0x00D4   (0x000C)  
	FBoundingBoxNative                                 CharBoundingBox;                                            // 0x00E0   (0x001C)  
	FBoundingBoxNative                                 ProjectileBoundingBox;                                      // 0x00FC   (0x001C)  
	bool                                               BlockSelfDamage;                                            // 0x0118   (0x0001)  
	bool                                               InvinciblePlayer;                                           // 0x0119   (0x0001)  
	bool                                               InvincibleBots;                                             // 0x011A   (0x0001)  
	bool                                               BlockTeamDamage;                                            // 0x011B   (0x0001)  
	FJetpackNative                                     Jetpack;                                                    // 0x011C   (0x0020)  
	int32_t                                            AirJumpCount;                                               // 0x013C   (0x0004)  
	float                                              AirJumpVelocity;                                            // 0x0140   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0144   (0x0004)  MISSED
	TArray<FString>                                    AbilityProfileNames;                                        // 0x0148   (0x0010)  
	bool                                               HideWeapon;                                                 // 0x0158   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0159   (0x0003)  MISSED
	float                                              AerialFriction;                                             // 0x015C   (0x0004)  
	float                                              AerialVerticalTurningFriction;                              // 0x0160   (0x0004)  
	float                                              AerialVerticalBreakingFriction;                             // 0x0164   (0x0004)  
	bool                                               UseAerialVerticalFriction;                                  // 0x0168   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0169   (0x0003)  MISSED
	float                                              StrafeSpeed;                                                // 0x016C   (0x0004)  
	float                                              BackSpeed;                                                  // 0x0170   (0x0004)  
	float                                              RespawnInvulnTime;                                          // 0x0174   (0x0004)  
	float                                              BlockedSpawnRadius;                                         // 0x0178   (0x0004)  
	float                                              BlockSpawnFov;                                              // 0x017C   (0x0004)  
	float                                              BlockSpawnDistance;                                         // 0x0180   (0x0004)  
	float                                              RespawnAnimationDuration;                                   // 0x0184   (0x0004)  
	bool                                               AllowBufferedJumps;                                         // 0x0188   (0x0001)  
	bool                                               BounceOffWalls;                                             // 0x0189   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x018A   (0x0002)  MISSED
	float                                              LeanAngle;                                                  // 0x018C   (0x0004)  
	float                                              LeanDisplacement;                                           // 0x0190   (0x0004)  
	float                                              AirJumpExtraControl;                                        // 0x0194   (0x0004)  
	float                                              ForwardSpeedBias;                                           // 0x0198   (0x0004)  
	float                                              HealthRegainedOnKill;                                       // 0x019C   (0x0004)  
	float                                              HealthRegenPerSec;                                          // 0x01A0   (0x0004)  
	float                                              HealthRegenDaily;                                           // 0x01A4   (0x0004)  
	float                                              JumpSpeedPenaltyDuration;                                   // 0x01A8   (0x0004)  
	float                                              JumpSpeedPenaltyPercent;                                    // 0x01AC   (0x0004)  
	bool                                               ThirdPersonCamera;                                          // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x01B1   (0x0003)  MISSED
	float                                              ThirdPersonCameraArmLength;                                 // 0x01B4   (0x0004)  
	FVector                                            ThirdPersonCameraOffset;                                    // 0x01B8   (0x000C)  
	float                                              BrakingDeceleration;                                        // 0x01C4   (0x0004)  
	float                                              TerminalVelocity;                                           // 0x01C8   (0x0004)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x01CC   (0x0004)  MISSED
	FString                                            CharacterModel;                                             // 0x01D0   (0x0010)  
	FString                                            CharacterSkin;                                              // 0x01E0   (0x0010)  
	bool                                               MeshHitDetection;                                           // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData09_6[0x3];                                       // 0x01F1   (0x0003)  MISSED
	FVector                                            SpawnOffsetMin;                                             // 0x01F4   (0x000C)  
	FVector                                            SpawnOffsetMax;                                             // 0x0200   (0x000C)  
	bool                                               InvertBlockedSpawn;                                         // 0x020C   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3];                                       // 0x020D   (0x0003)  MISSED
	float                                              ViewBobTime;                                                // 0x0210   (0x0004)  
	float                                              ViewBobAngleAdjustment;                                     // 0x0214   (0x0004)  
	float                                              ViewBobCameraZOffset;                                       // 0x0218   (0x0004)  
	bool                                               ViewBobAffectsShots;                                        // 0x021C   (0x0001)  
	bool                                               IsFlyer;                                                    // 0x021D   (0x0001)  
	bool                                               flightObeysPitch;                                           // 0x021E   (0x0001)  
	unsigned char                                      UnknownData11_6[0x1];                                       // 0x021F   (0x0001)  MISSED
	float                                              FlightVelocityUp;                                           // 0x0220   (0x0004)  
	float                                              FlightAccelUp;                                              // 0x0224   (0x0004)  
	float                                              FlightVelocityDown;                                         // 0x0228   (0x0004)  
	float                                              FlightAccelDown;                                            // 0x022C   (0x0004)  
	bool                                               IsFlyUpOnJumpAndCrouch;                                     // 0x0230   (0x0001)  
	bool                                               DisableCharacterCollision;                                  // 0x0231   (0x0001)  
	unsigned char                                      UnknownData12_6[0x2];                                       // 0x0232   (0x0002)  MISSED
	int32_t                                            AmmoRegainedOnKill;                                         // 0x0234   (0x0004)  
	float                                              ContinuousGroundFriction;                                   // 0x0238   (0x0004)  
	float                                              ContinuousAirFriction;                                      // 0x023C   (0x0004)  
	float                                              ScaledGroundAcceleration;                                   // 0x0240   (0x0004)  
	float                                              ScaledAirAcceleration;                                      // 0x0244   (0x0004)  
	float                                              MaxAirSpeed;                                                // 0x0248   (0x0004)  
	float                                              StopSpeed;                                                  // 0x024C   (0x0004)  
	float                                              StopSpeedThreshold;                                         // 0x0250   (0x0004)  
	bool                                               ClampVelocityToInputSpeed;                                  // 0x0254   (0x0001)  
	bool                                               JumpSkipsFriction;                                          // 0x0255   (0x0001)  
	bool                                               EnableQuakeMovement;                                        // 0x0256   (0x0001)  
	bool                                               EnableQuakeJump;                                            // 0x0257   (0x0001)  
	float                                              KtJump;                                                     // 0x0258   (0x0004)  
	float                                              MovementPhysicsTickInterval;                                // 0x025C   (0x0004)  
	bool                                               MovementPhysicsTickEnabled;                                 // 0x0260   (0x0001)  
	unsigned char                                      UnknownData13_6[0x3];                                       // 0x0261   (0x0003)  MISSED
	float                                              TeamGlowUpHead;                                             // 0x0264   (0x0004)  
	float                                              TeamGlowUpBody;                                             // 0x0268   (0x0004)  
	float                                              EnemyGlowUpHead;                                            // 0x026C   (0x0004)  
	float                                              EnemyGlowUpBody;                                            // 0x0270   (0x0004)  
	float                                              EnemyGlowUpHeadOnHit;                                       // 0x0274   (0x0004)  
	float                                              EnemyGlowUpBodyOnHit;                                       // 0x0278   (0x0004)  
	float                                              EnemyGlowUpHeadOnLookAt;                                    // 0x027C   (0x0004)  
	float                                              EnemyGlowUpBodyOnLookAt;                                    // 0x0280   (0x0004)  
	unsigned char                                      UnknownData14_6[0x4];                                       // 0x0284   (0x0004)  MISSED
	FPlaybackProfile                                   PlaybackOnSpawn;                                            // 0x0288   (0x0020)  
	float                                              LifeStealPercent;                                           // 0x02A8   (0x0004)  
	float                                              AbilityGlobalCooldown;                                      // 0x02AC   (0x0004)  
	float                                              BlockAbilityOnStartDuration;                                // 0x02B0   (0x0004)  
	float                                              DragCoefficient;                                            // 0x02B4   (0x0004)  
};

/// Struct /Script/KovaaKProfileModels.RecallAbilityNative
/// Size: 0x0080 (128 bytes) (0x000010 - 0x000080) align 8 MaxSize: 0x0080
struct FRecallAbilityNative : FKovaaKProfile
{ 
	float                                              MaxCharges;                                                 // 0x0010   (0x0004)  
	float                                              ChargesOnSpawn;                                             // 0x0014   (0x0004)  
	float                                              ChargeTimer;                                                // 0x0018   (0x0004)  
	float                                              ChargesRefundedOnKill;                                      // 0x001C   (0x0004)  
	float                                              DelayAfterUse;                                              // 0x0020   (0x0004)  
	FAIAbilityUseNative                                AIAbilityUse;                                               // 0x0024   (0x0040)  
	float                                              AbilityDuration;                                            // 0x0064   (0x0004)  
	bool                                               FullyAuto;                                                  // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              BlockAttackTimer;                                           // 0x006C   (0x0004)  
	bool                                               AbilityBlockedWhenAttacking;                                // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              RecallTimer;                                                // 0x0074   (0x0004)  
	bool                                               RefillAmmo;                                                 // 0x0078   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/KovaaKProfileModels.MeleeAbilityNative
/// Size: 0x0098 (152 bytes) (0x000010 - 0x000098) align 8 MaxSize: 0x0098
struct FMeleeAbilityNative : FKovaaKProfile
{ 
	float                                              MaxCharges;                                                 // 0x0010   (0x0004)  
	float                                              ChargesOnSpawn;                                             // 0x0014   (0x0004)  
	float                                              ChargeTimer;                                                // 0x0018   (0x0004)  
	float                                              ChargesRefundedOnKill;                                      // 0x001C   (0x0004)  
	float                                              DelayAfterUse;                                              // 0x0020   (0x0004)  
	FAIAbilityUseNative                                AIAbilityUse;                                               // 0x0024   (0x0040)  
	float                                              AbilityDuration;                                            // 0x0064   (0x0004)  
	float                                              HurtboxRadius;                                              // 0x0068   (0x0004)  
	float                                              HurtboxDamage;                                              // 0x006C   (0x0004)  
	float                                              HurtboxGroundKnockbackFactor;                               // 0x0070   (0x0004)  
	float                                              HurtboxAirKnockbackFactor;                                  // 0x0074   (0x0004)  
	bool                                               FullyAuto;                                                  // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0079   (0x0003)  MISSED
	float                                              BlockAttackTimer;                                           // 0x007C   (0x0004)  
	bool                                               AbilityBlockedWhenAttacking;                                // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	int32_t                                            AmmoPerShot;                                                // 0x0084   (0x0004)  
	float                                              FlatKnockbackHorizontal;                                    // 0x0088   (0x0004)  
	float                                              FlatKnockbackVeritcal;                                      // 0x008C   (0x0004)  
	float                                              FlatKnockbackHorizontalMin;                                 // 0x0090   (0x0004)  
	float                                              FlatKnockbackVerticalMin;                                   // 0x0094   (0x0004)  
};

/// Struct /Script/KovaaKProfileModels.WeaponAbilityNative
/// Size: 0x0088 (136 bytes) (0x000010 - 0x000088) align 8 MaxSize: 0x0088
struct FWeaponAbilityNative : FKovaaKProfile
{ 
	float                                              MaxCharges;                                                 // 0x0010   (0x0004)  
	float                                              ChargesOnSpawn;                                             // 0x0014   (0x0004)  
	float                                              ChargeTimer;                                                // 0x0018   (0x0004)  
	float                                              ChargesRefundedOnKill;                                      // 0x001C   (0x0004)  
	float                                              DelayAfterUse;                                              // 0x0020   (0x0004)  
	bool                                               FullyAuto;                                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	FAIAbilityUseNative                                AIAbilityUse;                                               // 0x0028   (0x0040)  
	FString                                            WeaponProfile;                                              // 0x0068   (0x0010)  
	float                                              BlockAttackTimer;                                           // 0x0078   (0x0004)  
	bool                                               AbilityBlockedWhenAttacking;                                // 0x007C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	int32_t                                            AmmoPerShot;                                                // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/KovaaKProfileModels.MovementAbilityNative
/// Size: 0x00A8 (168 bytes) (0x000010 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FMovementAbilityNative : FKovaaKProfile
{ 
	float                                              MaxCharges;                                                 // 0x0010   (0x0004)  
	float                                              ChargesOnSpawn;                                             // 0x0014   (0x0004)  
	float                                              ChargeTimer;                                                // 0x0018   (0x0004)  
	float                                              ChargesRefundedOnKill;                                      // 0x001C   (0x0004)  
	float                                              DelayAfterUse;                                              // 0x0020   (0x0004)  
	FAIAbilityUseNative                                AIAbilityUse;                                               // 0x0024   (0x0040)  
	float                                              AbilityDuration;                                            // 0x0064   (0x0004)  
	bool                                               LockDirectionForDuration;                                   // 0x0068   (0x0001)  
	bool                                               NegateGravityForDuration;                                   // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x006A   (0x0002)  MISSED
	float                                              MainVelocity;                                               // 0x006C   (0x0004)  
	bool                                               MainVelocityCanGoVertical;                                  // 0x0070   (0x0001)  
	bool                                               MainVelocitySetToMovementKeys;                              // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0072   (0x0002)  MISSED
	float                                              UpVelocity;                                                 // 0x0074   (0x0004)  
	float                                              EndVelocityClampFactor;                                     // 0x0078   (0x0004)  
	bool                                               Hurtbox;                                                    // 0x007C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              HurtboxRadius;                                              // 0x0080   (0x0004)  
	float                                              HurtboxDamage;                                              // 0x0084   (0x0004)  
	bool                                               AbilityBlocksTurning;                                       // 0x0088   (0x0001)  
	bool                                               AbilityBlocksMovement;                                      // 0x0089   (0x0001)  
	bool                                               AbilityBlocksAttack;                                        // 0x008A   (0x0001)  
	bool                                               AttackCancelsAbility;                                       // 0x008B   (0x0001)  
	float                                              HurtboxGroundKnockbackFactor;                               // 0x008C   (0x0004)  
	float                                              HurtboxAirKnockbackFactor;                                  // 0x0090   (0x0004)  
	bool                                               AbilityReloadsCurrentWeapon;                                // 0x0094   (0x0001)  
	bool                                               FullyAuto;                                                  // 0x0095   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0096   (0x0002)  MISSED
	float                                              HealthRestore;                                              // 0x0098   (0x0004)  
	bool                                               CancelDashOnGreaterThan45Collisions;                        // 0x009C   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x009D   (0x0003)  MISSED
	float                                              CancelDashVelocityFactor;                                   // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData05_7[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Struct /Script/KovaaKProfileModels.ScoringProfileNative
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 4 MaxSize: 0x0070
struct FScoringProfileNative
{ 
	float                                              ScoreToWin;                                                 // 0x0000   (0x0004)  
	float                                              ScorePerDamage;                                             // 0x0004   (0x0004)  
	float                                              ScorePerHit;                                                // 0x0008   (0x0004)  
	float                                              ScorePerKill;                                               // 0x000C   (0x0004)  
	float                                              ScorePerMidairDirect;                                       // 0x0010   (0x0004)  
	float                                              ScorePerAnyDirect;                                          // 0x0014   (0x0004)  
	float                                              ScoreLossPerDamageTaken;                                    // 0x0018   (0x0004)  
	float                                              ScoreLossPerDeath;                                          // 0x001C   (0x0004)  
	float                                              ScoreLossPerMidairDirected;                                 // 0x0020   (0x0004)  
	float                                              ScoreLossPerAnyDirected;                                    // 0x0024   (0x0004)  
	bool                                               MultAccuracy;                                               // 0x0028   (0x0001)  
	bool                                               MultDamageEff;                                              // 0x0029   (0x0001)  
	bool                                               MultKillEff;                                                // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x002B   (0x0001)  MISSED
	float                                              ScorePerTimeRemaining;                                      // 0x002C   (0x0004)  
	float                                              ScorePerDistanceTraveled;                                   // 0x0030   (0x0004)  
	bool                                               MBSEnable;                                                  // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              MBSTime1;                                                   // 0x0038   (0x0004)  
	float                                              MBSTime2;                                                   // 0x003C   (0x0004)  
	float                                              MBSTime3;                                                   // 0x0040   (0x0004)  
	float                                              MBSTime1Mult;                                               // 0x0044   (0x0004)  
	float                                              MBSTime2Mult;                                               // 0x0048   (0x0004)  
	float                                              MBSTime3Mult;                                               // 0x004C   (0x0004)  
	bool                                               MBSFBInstead;                                               // 0x0050   (0x0001)  
	bool                                               MBSRequireEnemyAlive;                                       // 0x0051   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0052   (0x0002)  MISSED
	float                                              MaxDistanceTraveledScore;                                   // 0x0054   (0x0004)  
	float                                              MaxMBSScore;                                                // 0x0058   (0x0004)  
	EDistanceScoreConditions                           DistanceScoreCondition;                                     // 0x005C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	float                                              DistScoreCondAcceptTime;                                    // 0x0060   (0x0004)  
	float                                              ScoreLossPerMiss;                                           // 0x0064   (0x0004)  
	float                                              ScoreLossPerReload;                                         // 0x0068   (0x0004)  
	bool                                               MultSqrtAcc;                                                // 0x006C   (0x0001)  
	bool                                               EnableOverDamage;                                           // 0x006D   (0x0001)  
	unsigned char                                      UnknownData04_7[0x2];                                       // 0x006E   (0x0002)  MISSED
};

/// Struct /Script/KovaaKProfileModels.ChallengeProfileNative
/// Size: 0x0150 (336 bytes) (0x000000 - 0x000150) align 8 MaxSize: 0x0150
struct FChallengeProfileNative
{ 
	float                                              TimeLimit;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            PlayerProfile;                                              // 0x0008   (0x0010)  
	TArray<FString>                                    AddedBots;                                                  // 0x0018   (0x0010)  
	int32_t                                            PlayerMaxLives;                                             // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<int32_t>                                    BotMaxLives;                                                // 0x0030   (0x0010)  
	int32_t                                            PlayerTeam;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<int32_t>                                    BotTeams;                                                   // 0x0048   (0x0010)  
	FScoringProfileNative                              ScoringProfile;                                             // 0x0058   (0x0070)  
	FString                                            MapName;                                                    // 0x00C8   (0x0010)  
	float                                              MapScale;                                                   // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<FString>                                    MapData;                                                    // 0x00E0   (0x0010)  
	bool                                               BlockProjectilePredictors;                                  // 0x00F0   (0x0001)  
	bool                                               BlockCheats;                                                // 0x00F1   (0x0001)  
	bool                                               InvulnerablePlayers;                                        // 0x00F2   (0x0001)  
	bool                                               InvulnerableBots;                                           // 0x00F3   (0x0001)  
	float                                              TimeScale;                                                  // 0x00F4   (0x0004)  
	bool                                               BlockHealthbars;                                            // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x00F9   (0x0003)  MISSED
	float                                              TimeRefilledByKill;                                         // 0x00FC   (0x0004)  
	bool                                               BlockHitMarkers;                                            // 0x0100   (0x0001)  
	bool                                               BlockHitSounds;                                             // 0x0101   (0x0001)  
	bool                                               BlockMissSounds;                                            // 0x0102   (0x0001)  
	bool                                               BlockFCT;                                                   // 0x0103   (0x0001)  
	bool                                               LockFOVRange;                                               // 0x0104   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0105   (0x0003)  MISSED
	float                                              LockedFOVMin;                                               // 0x0108   (0x0004)  
	float                                              LockedFOVMax;                                               // 0x010C   (0x0004)  
	EFovScaleTarget                                    LockedFOVScalar;                                            // 0x0110   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x0111   (0x0003)  MISSED
	float                                              EndChallengeAfterKills;                                     // 0x0114   (0x0004)  
	float                                              EndChallengeAfterDamage;                                    // 0x0118   (0x0004)  
	bool                                               bForceParticleEffectsOn;                                    // 0x011C   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x011D   (0x0003)  MISSED
	FAdaptiveDifficultyProfile                         AdaptiveDifficultyProfile;                                  // 0x0120   (0x0030)  
};

/// Struct /Script/KovaaKProfileModels.ExplosivesNative
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FExplosivesNative
{ 
	bool                                               IsExplosive;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x0004   (0x0004)  
	float                                              DamageAtCenter;                                             // 0x0008   (0x0004)  
	float                                              DamageAtMaxRange;                                           // 0x000C   (0x0004)  
	float                                              SelfDamageMultiplier;                                       // 0x0010   (0x0004)  
	bool                                               ExplodesOnContactWithEnemy;                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              DelayAfterEnemyContact;                                     // 0x0018   (0x0004)  
	bool                                               ExplodesOnContactWithWorld;                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              DelayAfterWorldContact;                                     // 0x0020   (0x0004)  
	bool                                               ExplodesOnNextAttack;                                       // 0x0024   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              DelayAfterSpawn;                                            // 0x0028   (0x0004)  
	bool                                               IsBlockedByWorld;                                           // 0x002C   (0x0001)  
	bool                                               ClearAttackersOnSelfDmg;                                    // 0x002D   (0x0001)  
	unsigned char                                      UnknownData04_7[0x2];                                       // 0x002E   (0x0002)  MISSED
};

/// Struct /Script/KovaaKProfileModels.StanceSpreadNative
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FStanceSpreadNative
{ 
	float                                              SpreadIncreasePerShoot;                                     // 0x0000   (0x0004)  
	float                                              SpreadDecreasePerSecond;                                    // 0x0004   (0x0004)  
	float                                              MinimumSpread;                                              // 0x0008   (0x0004)  
	float                                              MaximumSpread;                                              // 0x000C   (0x0004)  
};

/// Struct /Script/KovaaKProfileModels.WeaponSpreadNative
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 4 MaxSize: 0x0080
struct FWeaponSpreadNative
{ 
	FStanceSpreadNative                                StationaryStandingADS;                                      // 0x0000   (0x0010)  
	FStanceSpreadNative                                StationaryCrouchingADS;                                     // 0x0010   (0x0010)  
	FStanceSpreadNative                                MovingStandingADS;                                          // 0x0020   (0x0010)  
	FStanceSpreadNative                                MovingCrouchingADS;                                         // 0x0030   (0x0010)  
	FStanceSpreadNative                                StationaryStandingHipfire;                                  // 0x0040   (0x0010)  
	FStanceSpreadNative                                StationaryCrouchingHipfire;                                 // 0x0050   (0x0010)  
	FStanceSpreadNative                                MovingStandingHipfire;                                      // 0x0060   (0x0010)  
	FStanceSpreadNative                                MovingCrouchingHipfire;                                     // 0x0070   (0x0010)  
};

/// Struct /Script/KovaaKProfileModels.WeaponRecoilNative
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FWeaponRecoilNative
{ 
	float                                              MaxRecoilUp;                                                // 0x0000   (0x0004)  
	float                                              MinRecoilUp;                                                // 0x0004   (0x0004)  
	float                                              MinRecoilHoriz;                                             // 0x0008   (0x0004)  
	float                                              MaxRecoilHoriz;                                             // 0x000C   (0x0004)  
	float                                              FirstShotRecoilMultiplier;                                  // 0x0010   (0x0004)  
	bool                                               RecoilAutoReset;                                            // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              TimeToRecoilPeak;                                           // 0x0018   (0x0004)  
	float                                              TimeToRecoilReset;                                          // 0x001C   (0x0004)  
};

/// Struct /Script/KovaaKProfileModels.AAProfileNative
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align 4 MaxSize: 0x003C
struct FAAProfileNative
{ 
	int32_t                                            Mode;                                                       // 0x0000   (0x0004)  
	bool                                               PreferClosestPlayer;                                        // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              AAAlpha;                                                    // 0x0008   (0x0004)  
	float                                              AAMaxSpeed;                                                 // 0x000C   (0x0004)  
	float                                              AADeadZone;                                                 // 0x0010   (0x0004)  
	float                                              AAFov;                                                      // 0x0014   (0x0004)  
	bool                                               AANeedsLos;                                                 // 0x0018   (0x0001)  
	bool                                               TrackHorizontal;                                            // 0x0019   (0x0001)  
	bool                                               TrackVertical;                                              // 0x001A   (0x0001)  
	bool                                               AABlocksMouse;                                              // 0x001B   (0x0001)  
	float                                              AAOffTimer;                                                 // 0x001C   (0x0004)  
	float                                              AABackOnTimer;                                              // 0x0020   (0x0004)  
	bool                                               TriggerBotEnabled;                                          // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              TriggerBotDelay;                                            // 0x0028   (0x0004)  
	float                                              TriggerBotFov;                                              // 0x002C   (0x0004)  
	bool                                               StickyLock;                                                 // 0x0030   (0x0001)  
	bool                                               HeadLock;                                                   // 0x0031   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              VerticalOffset;                                             // 0x0034   (0x0004)  
	bool                                               DisableLockOnKill;                                          // 0x0038   (0x0001)  
	unsigned char                                      UnknownData03_7[0x3];                                       // 0x0039   (0x0003)  MISSED
};

/// Struct /Script/KovaaKProfileModels.SingleShotRecoilNative
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSingleShotRecoilNative
{ 
	float                                              Up;                                                         // 0x0000   (0x0004)  
	float                                              Right;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/KovaaKProfileModels.PerShotRecoilNative
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FPerShotRecoilNative
{ 
	bool                                               UsePerShotRecoil;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            PSRLoopStartIndex;                                          // 0x0004   (0x0004)  
	float                                              PSRViewRecoilTracking;                                      // 0x0008   (0x0004)  
	float                                              PSRCapUp;                                                   // 0x000C   (0x0004)  
	float                                              PSRCapRight;                                                // 0x0010   (0x0004)  
	float                                              PSRCapLeft;                                                 // 0x0014   (0x0004)  
	float                                              PSRTimeToPeak;                                              // 0x0018   (0x0004)  
	float                                              PSRResetDegreesPerSec;                                      // 0x001C   (0x0004)  
	TArray<FSingleShotRecoilNative>                    PerShot;                                                    // 0x0020   (0x0010)  
};

/// Struct /Script/KovaaKProfileModels.SingleBulletSpreadNative
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSingleBulletSpreadNative
{ 
	float                                              Distance;                                                   // 0x0000   (0x0004)  
	float                                              Angle;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/KovaaKProfileModels.PerBulletSpreadNative
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPerBulletSpreadNative
{ 
	bool                                               UsePBS;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FSingleBulletSpreadNative>                  SingleBulletSpread;                                         // 0x0008   (0x0010)  
};

/// Struct /Script/KovaaKProfileModels.WeaponProfileNative
/// Size: 0x0458 (1112 bytes) (0x000010 - 0x000458) align 8 MaxSize: 0x0458
struct FWeaponProfileNative : FKovaaKProfile
{ 
	EWeaponTypeNative                                  Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            ShotsPerClick;                                              // 0x0014   (0x0004)  
	float                                              DamagePerShot;                                              // 0x0018   (0x0004)  
	float                                              KnockbackFactor;                                            // 0x001C   (0x0004)  
	float                                              TimeBetweenShots;                                           // 0x0020   (0x0004)  
	bool                                               Pierces;                                                    // 0x0024   (0x0001)  
	EWeaponCategoryType                                Category;                                                   // 0x0025   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0026   (0x0002)  MISSED
	int32_t                                            BurstShotCount;                                             // 0x0028   (0x0004)  
	float                                              TimeBetweenBursts;                                          // 0x002C   (0x0004)  
	float                                              ChargeStartDamage;                                          // 0x0030   (0x0004)  
	FVector                                            ChargeStartVelocity;                                        // 0x0034   (0x000C)  
	float                                              ChargeTimeToAutoRelease;                                    // 0x0040   (0x0004)  
	float                                              ChargeTimeToCap;                                            // 0x0044   (0x0004)  
	FVector                                            MuzzleVelocityMin;                                          // 0x0048   (0x000C)  
	FVector                                            MuzzleVelocityMax;                                          // 0x0054   (0x000C)  
	float                                              InheritOwnerVelocity;                                       // 0x0060   (0x0004)  
	FVector                                            OriginOffset;                                               // 0x0064   (0x000C)  
	float                                              MaxTravelTime;                                              // 0x0070   (0x0004)  
	float                                              MaxHitscanRange;                                            // 0x0074   (0x0004)  
	float                                              GravityScale;                                               // 0x0078   (0x0004)  
	bool                                               HeadshotCapable;                                            // 0x007C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              HeadshotMultiplier;                                         // 0x0080   (0x0004)  
	EWeaponCooldownTypeNative                          CooldownType;                                               // 0x0084   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0085   (0x0003)  MISSED
	int32_t                                            MagazineMax;                                                // 0x0088   (0x0004)  
	float                                              ReloadTimeFromEmpty;                                        // 0x008C   (0x0004)  
	float                                              ReloadTimeFromPartial;                                      // 0x0090   (0x0004)  
	float                                              CooldownTimer;                                              // 0x0094   (0x0004)  
	int32_t                                            MaxCharges;                                                 // 0x0098   (0x0004)  
	float                                              DamageFalloffStartDistance;                                 // 0x009C   (0x0004)  
	float                                              DamageFalloffStopDistance;                                  // 0x00A0   (0x0004)  
	float                                              DamageAtMaxRange;                                           // 0x00A4   (0x0004)  
	float                                              DelayBeforeShot;                                            // 0x00A8   (0x0004)  
	EProjectileGraphicType                             ProjectileGraphic;                                          // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              VisualLifetime;                                             // 0x00B0   (0x0004)  
	FExplosivesNative                                  Explosives;                                                 // 0x00B4   (0x0030)  
	bool                                               BounceOffWorld;                                             // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x00E5   (0x0003)  MISSED
	float                                              BounceFactor;                                               // 0x00E8   (0x0004)  
	int32_t                                            BounceCount;                                                // 0x00EC   (0x0004)  
	float                                              HomingProjectileAcceleration;                               // 0x00F0   (0x0004)  
	FWeaponSpreadNative                                Spread;                                                     // 0x00F4   (0x0080)  
	FWeaponRecoilNative                                Recoil;                                                     // 0x0174   (0x0020)  
	float                                              ProjectileWorldHitRadius;                                   // 0x0194   (0x0004)  
	float                                              ProjectileEnemyHitRadius;                                   // 0x0198   (0x0004)  
	bool                                               CanAimDownSight;                                            // 0x019C   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x019D   (0x0003)  MISSED
	float                                              ADSZoomFactor;                                              // 0x01A0   (0x0004)  
	float                                              ADSZoomDelay;                                               // 0x01A4   (0x0004)  
	float                                              ADSZoomSensFactor;                                          // 0x01A8   (0x0004)  
	float                                              ADSMoveFactor;                                              // 0x01AC   (0x0004)  
	float                                              ADSStartDelay;                                              // 0x01B0   (0x0004)  
	FAAProfileNative                                   AutoAimProfile;                                             // 0x01B4   (0x003C)  
	float                                              ShootSoundCooldown;                                         // 0x01F0   (0x0004)  
	float                                              HitSoundCooldown;                                           // 0x01F4   (0x0004)  
	ESoundsType                                        ShootSound;                                                 // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x01F9   (0x0003)  MISSED
	FVector                                            HitscanVisualOffset;                                        // 0x01FC   (0x000C)  
	bool                                               ADSBlocksShooting;                                          // 0x0208   (0x0001)  
	bool                                               ShootingBlocksADS;                                          // 0x0209   (0x0001)  
	unsigned char                                      UnknownData08_6[0x2];                                       // 0x020A   (0x0002)  MISSED
	float                                              KnockFactorAir;                                             // 0x020C   (0x0004)  
	bool                                               RecoilNegatable;                                            // 0x0210   (0x0001)  
	unsigned char                                      UnknownData09_6[0x3];                                       // 0x0211   (0x0003)  MISSED
	int32_t                                            DecalType;                                                  // 0x0214   (0x0004)  
	float                                              DecalSize;                                                  // 0x0218   (0x0004)  
	float                                              DelayAfterShooting;                                         // 0x021C   (0x0004)  
	bool                                               BeamTracksCrosshair;                                        // 0x0220   (0x0001)  
	unsigned char                                      UnknownData10_6[0x7];                                       // 0x0221   (0x0007)  MISSED
	TArray<FString>                                    AlsoShootWeaponProfiles;                                    // 0x0228   (0x0010)  
	FString                                            ADSShoot;                                                   // 0x0238   (0x0010)  
	float                                              ChargeMovespeedModifier;                                    // 0x0248   (0x0004)  
	float                                              StunDuration;                                               // 0x024C   (0x0004)  
	int32_t                                            AmmoPerShot;                                                // 0x0250   (0x0004)  
	unsigned char                                      UnknownData11_6[0x4];                                       // 0x0254   (0x0004)  MISSED
	FPerShotRecoilNative                               PerShotRecoil;                                              // 0x0258   (0x0030)  
	bool                                               CircularSpread;                                             // 0x0288   (0x0001)  
	unsigned char                                      UnknownData12_6[0x3];                                       // 0x0289   (0x0003)  MISSED
	float                                              StationarySpreadVelocity;                                   // 0x028C   (0x0004)  
	bool                                               PassiveCharging;                                            // 0x0290   (0x0001)  
	bool                                               BurstFullyAuto;                                             // 0x0291   (0x0001)  
	unsigned char                                      UnknownData13_6[0x2];                                       // 0x0292   (0x0002)  MISSED
	float                                              FlatKnockbackHorizontal;                                    // 0x0294   (0x0004)  
	float                                              FlatKnockbackVertical;                                      // 0x0298   (0x0004)  
	float                                              HitscanRadius;                                              // 0x029C   (0x0004)  
	float                                              HitscanVisualRadius;                                        // 0x02A0   (0x0004)  
	float                                              TaggingDuration;                                            // 0x02A4   (0x0004)  
	float                                              TaggingMaxFactor;                                           // 0x02A8   (0x0004)  
	float                                              TaggingHitFactor;                                           // 0x02AC   (0x0004)  
	float                                              RecoilCrouchScale;                                          // 0x02B0   (0x0004)  
	float                                              RecoilADSScale;                                             // 0x02B4   (0x0004)  
	float                                              PSRCrouchScale;                                             // 0x02B8   (0x0004)  
	float                                              PSRADSScale;                                                // 0x02BC   (0x0004)  
	float                                              ProfjectileAcceleration;                                    // 0x02C0   (0x0004)  
	bool                                               AccelIncludeVertical;                                       // 0x02C4   (0x0001)  
	unsigned char                                      UnknownData14_6[0x3];                                       // 0x02C5   (0x0003)  MISSED
	float                                              AimPunchAmount;                                             // 0x02C8   (0x0004)  
	float                                              AimPunchResetTime;                                          // 0x02CC   (0x0004)  
	float                                              AimPunchCooldown;                                           // 0x02D0   (0x0004)  
	bool                                               AimPunchHeadshotOnly;                                       // 0x02D4   (0x0001)  
	bool                                               AimPunchCosmeticOnly;                                       // 0x02D5   (0x0001)  
	unsigned char                                      UnknownData15_6[0x2];                                       // 0x02D6   (0x0002)  MISSED
	float                                              MinimumDecelVelocity;                                       // 0x02D8   (0x0004)  
	bool                                               PSRManualNegation;                                          // 0x02DC   (0x0001)  
	bool                                               PSRAutoReset;                                               // 0x02DD   (0x0001)  
	unsigned char                                      UnknownData16_6[0x2];                                       // 0x02DE   (0x0002)  MISSED
	FPerBulletSpreadNative                             PerBulletSpread;                                            // 0x02E0   (0x0018)  
	float                                              AimPunchUpTime;                                             // 0x02F8   (0x0004)  
	int32_t                                            AmmoReloadedOnKill;                                         // 0x02FC   (0x0004)  
	bool                                               CancelReloadOnKill;                                         // 0x0300   (0x0001)  
	unsigned char                                      UnknownData17_6[0x3];                                       // 0x0301   (0x0003)  MISSED
	float                                              FlatKnockbackHorizontalMin;                                 // 0x0304   (0x0004)  
	float                                              FlatKnockbackVerticalMin;                                   // 0x0308   (0x0004)  
	EScopeChoicesNative                                AdsScope;                                                   // 0x030C   (0x0001)  
	unsigned char                                      UnknownData18_6[0x3];                                       // 0x030D   (0x0003)  MISSED
	float                                              ADSFovOverride;                                             // 0x0310   (0x0004)  
	bool                                               ADSAllowUserOverrideFov;                                    // 0x0314   (0x0001)  
	bool                                               HitscanGraphicOriginAtWeapon;                               // 0x0315   (0x0001)  
	bool                                               ProjectileGraphicOriginAtWeapon;                            // 0x0316   (0x0001)  
	bool                                               IsChargeWeapon;                                             // 0x0317   (0x0001)  
	bool                                               IsBurstWeapon;                                              // 0x0318   (0x0001)  
	bool                                               ForceFirstPersonInADS;                                      // 0x0319   (0x0001)  
	bool                                               ZoomBlockedInAir;                                           // 0x031A   (0x0001)  
	unsigned char                                      UnknownData19_6[0x1];                                       // 0x031B   (0x0001)  MISSED
	float                                              ADSCameraOffsetX;                                           // 0x031C   (0x0004)  
	float                                              ADSCameraOffsetY;                                           // 0x0320   (0x0004)  
	float                                              ADSCameraOffsetZ;                                           // 0x0324   (0x0004)  
	float                                              QuickSwitchTime;                                            // 0x0328   (0x0004)  
	unsigned char                                      UnknownData20_6[0x4];                                       // 0x032C   (0x0004)  MISSED
	FString                                            WeaponModel;                                                // 0x0330   (0x0010)  
	EWeaponAnimationNative                             WeaponAnimation;                                            // 0x0340   (0x0001)  
	bool                                               UseIncReload;                                               // 0x0341   (0x0001)  
	unsigned char                                      UnknownData21_6[0x2];                                       // 0x0342   (0x0002)  MISSED
	float                                              IncReloadStartupTime;                                       // 0x0344   (0x0004)  
	float                                              IncReloadLoopTime;                                          // 0x0348   (0x0004)  
	int32_t                                            IncReloadAmmoPerLoop;                                       // 0x034C   (0x0004)  
	float                                              IncReloadEndTime;                                           // 0x0350   (0x0004)  
	bool                                               IncReloadCancelWithShoot;                                   // 0x0354   (0x0001)  
	unsigned char                                      UnknownData22_6[0x3];                                       // 0x0355   (0x0003)  MISSED
	FString                                            WeaponSkin;                                                 // 0x0358   (0x0010)  
	FVector                                            ProjectileVisualOffset;                                     // 0x0368   (0x000C)  
	float                                              SpreadDecayDelay;                                           // 0x0374   (0x0004)  
	bool                                               ReloadBeforeRecovery;                                       // 0x0378   (0x0001)  
	unsigned char                                      UnknownData23_6[0x7];                                       // 0x0379   (0x0007)  MISSED
	FString                                            ThirdPersonWeaponModel;                                     // 0x0380   (0x0010)  
	FString                                            ThirdPersonWeaponSkin;                                      // 0x0390   (0x0010)  
	FString                                            ParticleMuzzleFlash;                                        // 0x03A0   (0x0010)  
	FString                                            ParticleWallImpact;                                         // 0x03B0   (0x0010)  
	FString                                            ParticleBodyImpact;                                         // 0x03C0   (0x0010)  
	FString                                            ParticleProjectileTrail;                                    // 0x03D0   (0x0010)  
	FString                                            ParticleHitscanTrace;                                       // 0x03E0   (0x0010)  
	float                                              ParticleMuzzleFlashScale;                                   // 0x03F0   (0x0004)  
	float                                              ParticleWallImpactScale;                                    // 0x03F4   (0x0004)  
	float                                              ParticleBodyImpactScale;                                    // 0x03F8   (0x0004)  
	float                                              ParticleProjectileTrailScale;                               // 0x03FC   (0x0004)  
	EFovScaleTarget                                    ADSFovScalar;                                               // 0x0400   (0x0001)  
	unsigned char                                      UnknownData24_6[0x3];                                       // 0x0401   (0x0003)  MISSED
	int32_t                                            CustomFovAspectX;                                           // 0x0404   (0x0004)  
	int32_t                                            CustomFovAspectY;                                           // 0x0408   (0x0004)  
	unsigned char                                      UnknownData25_6[0x4];                                       // 0x040C   (0x0004)  MISSED
	FString                                            CustomFovScale;                                             // 0x0410   (0x0010)  
	bool                                               ADSResetsCharge;                                            // 0x0420   (0x0001)  
	unsigned char                                      UnknownData26_6[0x3];                                       // 0x0421   (0x0003)  MISSED
	float                                              ADSZoomInDuration;                                          // 0x0424   (0x0004)  
	float                                              ADSZoomOutDuration;                                         // 0x0428   (0x0004)  
	unsigned char                                      UnknownData27_6[0x4];                                       // 0x042C   (0x0004)  MISSED
	FString                                            AdsFovScaleString;                                          // 0x0430   (0x0010)  
	bool                                               bFullyAutomatic;                                            // 0x0440   (0x0001)  
	unsigned char                                      UnknownData28_6[0x3];                                       // 0x0441   (0x0003)  MISSED
	float                                              DelayBeforePassiveCharge;                                   // 0x0444   (0x0004)  
	float                                              BaseChargeRecoilFactor;                                     // 0x0448   (0x0004)  
	float                                              AccelSpeedModifier;                                         // 0x044C   (0x0004)  
	float                                              MaxSpeedModifier;                                           // 0x0450   (0x0004)  
	unsigned char                                      UnknownData29_7[0x4];                                       // 0x0454   (0x0004)  MISSED
};

/// Struct /Script/KovaaKProfileModels.DodgeProfileNative
/// Size: 0x0120 (288 bytes) (0x000010 - 0x000120) align 8 MaxSize: 0x0120
struct FDodgeProfileNative : FKovaaKProfile
{ 
	float                                              MaxTargetDistance;                                          // 0x0010   (0x0004)  
	float                                              MinTargetDistance;                                          // 0x0014   (0x0004)  
	bool                                               ToggleLeftRight;                                            // 0x0018   (0x0001)  
	bool                                               ToggleForwardBackward;                                      // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              MinLRTimeChange;                                            // 0x001C   (0x0004)  
	float                                              MaxLRTimeChange;                                            // 0x0020   (0x0004)  
	float                                              MinFBTimeChange;                                            // 0x0024   (0x0004)  
	float                                              MaxFBTimeChange;                                            // 0x0028   (0x0004)  
	bool                                               DamageReactionChangesDirection;                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	float                                              DamageReactionChanceToIgnore;                               // 0x0030   (0x0004)  
	float                                              DamageReactionMinimumDelay;                                 // 0x0034   (0x0004)  
	float                                              DamageReactionMaximumDelay;                                 // 0x0038   (0x0004)  
	float                                              DamageReactionCooldown;                                     // 0x003C   (0x0004)  
	float                                              DamageReactionThreshold;                                    // 0x0040   (0x0004)  
	float                                              DamageReactionResetTimer;                                   // 0x0044   (0x0004)  
	float                                              JumpFrequency;                                              // 0x0048   (0x0004)  
	float                                              CrouchInAirFrequency;                                       // 0x004C   (0x0004)  
	float                                              CrouchOnGroundFrequency;                                    // 0x0050   (0x0004)  
	ETargetStrafeOverrideType                          TargetStrafeOverride;                                       // 0x0054   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	float                                              TargetStrafeMinDelay;                                       // 0x0058   (0x0004)  
	float                                              TargetStrafeMaxDelay;                                       // 0x005C   (0x0004)  
	float                                              MinProfileChangeTime;                                       // 0x0060   (0x0004)  
	float                                              MaxProfileChangeTime;                                       // 0x0064   (0x0004)  
	float                                              MinCrouchTime;                                              // 0x0068   (0x0004)  
	float                                              MaxCrouchTime;                                              // 0x006C   (0x0004)  
	float                                              MinJumpTime;                                                // 0x0070   (0x0004)  
	float                                              MaxJumpTime;                                                // 0x0074   (0x0004)  
	bool                                               AlterateJumpCrouchInput;                                    // 0x0078   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0079   (0x0003)  MISSED
	float                                              ToggleUpDownMinTime;                                        // 0x007C   (0x0004)  
	float                                              ToggleUpDownMaxTime;                                        // 0x0080   (0x0004)  
	float                                              UpDownSwapPauseMinTime;                                     // 0x0084   (0x0004)  
	float                                              UpDownSwapPauseMaxTime;                                     // 0x0088   (0x0004)  
	float                                              LeftStrafeTimeMult;                                         // 0x008C   (0x0004)  
	float                                              RightStrafeTimeMult;                                        // 0x0090   (0x0004)  
	float                                              StrafeSwapMinPause;                                         // 0x0094   (0x0004)  
	float                                              StrafeSwapMaxPause;                                         // 0x0098   (0x0004)  
	float                                              BlockedMovementPercent;                                     // 0x009C   (0x0004)  
	float                                              BlockedMovementReactionMin;                                 // 0x00A0   (0x0004)  
	float                                              BlockedMovementReactionMax;                                 // 0x00A4   (0x0004)  
	EAiWaypointLogicType                               WaypointLogic;                                              // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              WaypointTurnRate;                                           // 0x00AC   (0x0004)  
	float                                              MinTimeBeforeShot;                                          // 0x00B0   (0x0004)  
	float                                              MaxTimeBeforeShot;                                          // 0x00B4   (0x0004)  
	float                                              IgnoreShotChance;                                           // 0x00B8   (0x0004)  
	float                                              ForwardTimeMult;                                            // 0x00BC   (0x0004)  
	float                                              BackTimeMult;                                               // 0x00C0   (0x0004)  
	bool                                               DamageReactionChangeFB;                                     // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x00C5   (0x0003)  MISSED
	float                                              CooldownTime;                                               // 0x00C8   (0x0004)  
	bool                                               DamageReactionTriggersProfileChange;                        // 0x00CC   (0x0001)  
	ELOSReactType                                      LOSReactType;                                               // 0x00CD   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x00CE   (0x0002)  MISSED
	float                                              LOSReactInitMin;                                            // 0x00D0   (0x0004)  
	float                                              LOSReactInitMax;                                            // 0x00D4   (0x0004)  
	float                                              LOSReactChanceIgnore;                                       // 0x00D8   (0x0004)  
	float                                              LOSReactCooldownTime;                                       // 0x00DC   (0x0004)  
	float                                              LOSReactDurationMin;                                        // 0x00E0   (0x0004)  
	float                                              LOSReactDurationMax;                                        // 0x00E4   (0x0004)  
	bool                                               LOSReactKillBot;                                            // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              LOSReactKillBotTimerMin;                                    // 0x00EC   (0x0004)  
	float                                              LOSReactKillBotTimerMax;                                    // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
	FPlaybackProfile                                   PlaybackProfile;                                            // 0x00F8   (0x0020)  
	EInitialForwardMovementState                       InitialForwardMovementState;                                // 0x0118   (0x0001)  
	EInitialRightMovementState                         InitialRightMovementState;                                  // 0x0119   (0x0001)  
	bool                                               CounterStrafeOnCollision;                                   // 0x011A   (0x0001)  
	EResetStrafeBehavior                               InitialLeftRightStrafeResetBehavior;                        // 0x011B   (0x0001)  
	EResetStrafeBehavior                               InitialForwardBackStrafeResetBehavior;                      // 0x011C   (0x0001)  
	unsigned char                                      UnknownData09_7[0x3];                                       // 0x011D   (0x0003)  MISSED
};

/// Struct /Script/KovaaKProfileModels.BotRotationProfileNative
/// Size: 0x0038 (56 bytes) (0x000010 - 0x000038) align 8 MaxSize: 0x0038
struct FBotRotationProfileNative : FKovaaKProfile
{ 
	TArray<FString>                                    ProfileNames;                                               // 0x0010   (0x0010)  
	TArray<float>                                      ProfileWeights;                                             // 0x0020   (0x0010)  
	bool                                               Randomized;                                                 // 0x0030   (0x0001)  
	bool                                               AllowRepeatEntries;                                         // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0032   (0x0006)  MISSED
};

/// Struct /Script/KovaaKProfileModels.BotProfileNative
/// Size: 0x00F0 (240 bytes) (0x000010 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FBotProfileNative : FKovaaKProfile
{ 
	float                                              Health;                                                     // 0x0010   (0x0004)  
	float                                              RespawnDelay;                                               // 0x0014   (0x0004)  
	EBoundingBox                                       BoundingBoxType;                                            // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              Height;                                                     // 0x001C   (0x0004)  
	float                                              Width;                                                      // 0x0020   (0x0004)  
	bool                                               Headshottable;                                              // 0x0024   (0x0001)  
	bool                                               HeadshotOnly;                                               // 0x0025   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0026   (0x0002)  MISSED
	float                                              HeadRadius;                                                 // 0x0028   (0x0004)  
	float                                              HeadOffset;                                                 // 0x002C   (0x0004)  
	float                                              DamageKnockbackFactor;                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FString                                            MovementProfileName;                                        // 0x0038   (0x0010)  
	TArray<FString>                                    DodgeProfileNames;                                          // 0x0048   (0x0010)  
	TArray<float>                                      DodgeProfileWeights;                                        // 0x0058   (0x0010)  
	float                                              DodgeProfileMaxChangeTime;                                  // 0x0068   (0x0004)  
	float                                              DodgeProfileMinChangeTime;                                  // 0x006C   (0x0004)  
	TArray<FString>                                    WeaponsProfileNames;                                        // 0x0070   (0x0010)  
	TArray<float>                                      WeaponProfileWeights;                                       // 0x0080   (0x0010)  
	TArray<FString>                                    AimingProfileNames;                                         // 0x0090   (0x0010)  
	float                                              WeaponSwitchTime;                                           // 0x00A0   (0x0004)  
	bool                                               UseWeapons;                                                 // 0x00A4   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00A5   (0x0003)  MISSED
	FString                                            CharacterProfile;                                           // 0x00A8   (0x0010)  
	bool                                               SeeThroughWalls;                                            // 0x00B8   (0x0001)  
	bool                                               NoDodging;                                                  // 0x00B9   (0x0001)  
	bool                                               StandStillUntilHurt;                                        // 0x00BA   (0x0001)  
	bool                                               NoAiming;                                                   // 0x00BB   (0x0001)  
	int32_t                                            SpawnGroup;                                                 // 0x00BC   (0x0004)  
	float                                              AbilityUseTimer;                                            // 0x00C0   (0x0004)  
	float                                              UseAbilityFrequency;                                        // 0x00C4   (0x0004)  
	float                                              UseAbilityFreqMinTime;                                      // 0x00C8   (0x0004)  
	float                                              UseAbilityFreqMaxTime;                                      // 0x00CC   (0x0004)  
	bool                                               ShowLaser;                                                  // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x00D1   (0x0003)  MISSED
	FVector                                            LaserRgb;                                                   // 0x00D4   (0x000C)  
	float                                              LaserAlpha;                                                 // 0x00E0   (0x0004)  
	bool                                               RandomizeDodgeProfiles;                                     // 0x00E4   (0x0001)  
	bool                                               RepeatDodgeProfileEntries;                                  // 0x00E5   (0x0001)  
	bool                                               UseMinimumRespawnTime;                                      // 0x00E6   (0x0001)  
	bool                                               DisableScoring;                                             // 0x00E7   (0x0001)  
	bool                                               RestartDodgeProfileTimerOnRespawn;                          // 0x00E8   (0x0001)  
	bool                                               Untargetable;                                               // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData05_7[0x6];                                       // 0x00EA   (0x0006)  MISSED
};

/// Struct /Script/KovaaKProfileModels.AIAimProfileNative
/// Size: 0x0080 (128 bytes) (0x000010 - 0x000080) align 8 MaxSize: 0x0080
struct FAIAimProfileNative : FKovaaKProfile
{ 
	float                                              MinReactionTime;                                            // 0x0010   (0x0004)  
	float                                              MaxReactionTime;                                            // 0x0014   (0x0004)  
	float                                              MinSelfMovementCorrectionTime;                              // 0x0018   (0x0004)  
	float                                              MaxSelfMovementCorrectionTime;                              // 0x001C   (0x0004)  
	float                                              FlickFov;                                                   // 0x0020   (0x0004)  
	float                                              FlickSpeed;                                                 // 0x0024   (0x0004)  
	float                                              FlickError;                                                 // 0x0028   (0x0004)  
	float                                              TrackSpeed;                                                 // 0x002C   (0x0004)  
	float                                              TrackError;                                                 // 0x0030   (0x0004)  
	float                                              MaxTurnAngleFromPadCenter;                                  // 0x0034   (0x0004)  
	float                                              MinReCenterTime;                                            // 0x0038   (0x0004)  
	float                                              MaxReCenterTime;                                            // 0x003C   (0x0004)  
	float                                              OptimalAimFov;                                              // 0x0040   (0x0004)  
	float                                              OuterAimPenalty;                                            // 0x0044   (0x0004)  
	float                                              MaxError;                                                   // 0x0048   (0x0004)  
	float                                              ShootFov;                                                   // 0x004C   (0x0004)  
	float                                              VerticalAimOffset;                                          // 0x0050   (0x0004)  
	float                                              MaxTolerableSpread;                                         // 0x0054   (0x0004)  
	float                                              MinTolerableSpread;                                         // 0x0058   (0x0004)  
	float                                              TolerableSpreadDistance;                                    // 0x005C   (0x0004)  
	float                                              MaxSpreadDistFactor;                                        // 0x0060   (0x0004)  
	EAimingStyle                                       AimingStyle;                                                // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
	float                                              ScanSpeedMultiplier;                                        // 0x0068   (0x0004)  
	float                                              MaxSeekPitch;                                               // 0x006C   (0x0004)  
	float                                              MaxSeekYaw;                                                 // 0x0070   (0x0004)  
	float                                              AimingSpeed;                                                // 0x0074   (0x0004)  
	float                                              MinShootDelay;                                              // 0x0078   (0x0004)  
	float                                              MaxShootDelay;                                              // 0x007C   (0x0004)  
};

/// Struct /Script/KovaaKProfileModels.AdaptiveDifficultyProfileDefaultValuesContext
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FAdaptiveDifficultyProfileDefaultValuesContext
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/KovaaKProfileModels.ScoreNative
/// Size: 0x0100 (256 bytes) (0x000000 - 0x000100) align 8 MaxSize: 0x0100
struct FScoreNative
{ 
	FString                                            ChallengeName;                                              // 0x0000   (0x0010)  
	FDateTime                                          Date;                                                       // 0x0010   (0x0008)  
	float                                              Score;                                                      // 0x0018   (0x0004)  
	FScoringProfileNative                              ScoringProfile;                                             // 0x001C   (0x0070)  
	float                                              DamageDone;                                                 // 0x008C   (0x0004)  
	int32_t                                            KillCount;                                                  // 0x0090   (0x0004)  
	int32_t                                            MidairCount;                                                // 0x0094   (0x0004)  
	int32_t                                            DirectCount;                                                // 0x0098   (0x0004)  
	float                                              DamageTaken;                                                // 0x009C   (0x0004)  
	int32_t                                            Deaths;                                                     // 0x00A0   (0x0004)  
	int32_t                                            MidairedCount;                                              // 0x00A4   (0x0004)  
	int32_t                                            DirectedCount;                                              // 0x00A8   (0x0004)  
	int32_t                                            ShotsHit;                                                   // 0x00AC   (0x0004)  
	int32_t                                            ShotsFired;                                                 // 0x00B0   (0x0004)  
	float                                              Accuracy;                                                   // 0x00B4   (0x0004)  
	float                                              DamagePossible;                                             // 0x00B8   (0x0004)  
	float                                              DamageEfficiency;                                           // 0x00BC   (0x0004)  
	float                                              KillEfficiency;                                             // 0x00C0   (0x0004)  
	float                                              TimeRemaining;                                              // 0x00C4   (0x0004)  
	FString                                            ScenarioHash;                                               // 0x00C8   (0x0010)  
	float                                              DistanceTraveled;                                           // 0x00D8   (0x0004)  
	float                                              MBS;                                                        // 0x00DC   (0x0004)  
	FString                                            StatFile;                                                   // 0x00E0   (0x0010)  
	bool                                               MultAverageTimeDilationModifier;                            // 0x00F0   (0x0001)  
	bool                                               MultAverageTargetSizeModifier;                              // 0x00F1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00F2   (0x0002)  MISSED
	float                                              AverageTimeDilationModifier;                                // 0x00F4   (0x0004)  
	float                                              AverageTargetSizeModifier;                                  // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/KovaaKProfileModels.SensitivityRandomizerProfile
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FSensitivityRandomizerProfile
{ 
	bool                                               IsActive;                                                   // 0x0000   (0x0001)  
	ERandomSensEasingFunction                          EasingFunction;                                             // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              GlobalMin;                                                  // 0x0004   (0x0004)  
	float                                              GlobalMax;                                                  // 0x0008   (0x0004)  
	float                                              DeltaPerSecondMin;                                          // 0x000C   (0x0004)  
	float                                              DeltaPerSecondMax;                                          // 0x0010   (0x0004)  
	float                                              IntervalSeconds;                                            // 0x0014   (0x0004)  
	bool                                               UseDeltaRange;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/KovaaKProfileModels.SensitivityRandomizerDefaultValueContext
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSensitivityRandomizerDefaultValueContext
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAdaptiveDifficultyModelInterface) == 0x0280); // 640 bytes (0x000030 - 0x000280)
static_assert(sizeof(UAdaptiveDifficultyEditorModel) == 0x0280); // 640 bytes (0x000280 - 0x000280)
static_assert(sizeof(UAdaptiveDifficultyGameModel) == 0x03A8); // 936 bytes (0x000280 - 0x0003A8)
static_assert(sizeof(UAdaptiveDifficultyProfileDefaultValues) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UKvKProfileUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USensitivityRandomizerProfileDefaultValues) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(FAdaptiveDifficultyProfile) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FKovaaKProfile) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAIAbilityUseNative) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FSprintAbilityNative) == 0x0078); // 120 bytes (0x000010 - 0x000078)
static_assert(sizeof(FJetpackNative) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FBoundingBoxNative) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMetaPlaybackFrame) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(FMetaPlaybackOptions) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPlaybackProfile) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FCharacterProfileNative) == 0x02B8); // 696 bytes (0x000010 - 0x0002B8)
static_assert(sizeof(FRecallAbilityNative) == 0x0080); // 128 bytes (0x000010 - 0x000080)
static_assert(sizeof(FMeleeAbilityNative) == 0x0098); // 152 bytes (0x000010 - 0x000098)
static_assert(sizeof(FWeaponAbilityNative) == 0x0088); // 136 bytes (0x000010 - 0x000088)
static_assert(sizeof(FMovementAbilityNative) == 0x00A8); // 168 bytes (0x000010 - 0x0000A8)
static_assert(sizeof(FScoringProfileNative) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FChallengeProfileNative) == 0x0150); // 336 bytes (0x000000 - 0x000150)
static_assert(sizeof(FExplosivesNative) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FStanceSpreadNative) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWeaponSpreadNative) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FWeaponRecoilNative) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAAProfileNative) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FSingleShotRecoilNative) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPerShotRecoilNative) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FSingleBulletSpreadNative) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPerBulletSpreadNative) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FWeaponProfileNative) == 0x0458); // 1112 bytes (0x000010 - 0x000458)
static_assert(sizeof(FDodgeProfileNative) == 0x0120); // 288 bytes (0x000010 - 0x000120)
static_assert(sizeof(FBotRotationProfileNative) == 0x0038); // 56 bytes (0x000010 - 0x000038)
static_assert(sizeof(FBotProfileNative) == 0x00F0); // 240 bytes (0x000010 - 0x0000F0)
static_assert(sizeof(FAIAimProfileNative) == 0x0080); // 128 bytes (0x000010 - 0x000080)
static_assert(sizeof(FAdaptiveDifficultyProfileDefaultValuesContext) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FScoreNative) == 0x0100); // 256 bytes (0x000000 - 0x000100)
static_assert(sizeof(FSensitivityRandomizerProfile) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FSensitivityRandomizerDefaultValueContext) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(UAdaptiveDifficultyProfileDefaultValues, PerformanceMetricType) == 0x0038);
static_assert(offsetof(USensitivityRandomizerProfileDefaultValues, EasingFunction) == 0x0039);
static_assert(offsetof(FAdaptiveDifficultyProfile, PerformanceMetricType) == 0x0003);
static_assert(offsetof(FAdaptiveDifficultyProfile, TimeDilationType) == 0x0004);
static_assert(offsetof(FKovaaKProfile, Name) == 0x0000);
static_assert(offsetof(FSprintAbilityNative, AIAbilityUse) == 0x0024);
static_assert(offsetof(FBoundingBoxNative, Type) == 0x0000);
static_assert(offsetof(FMetaPlaybackFrame, WeaponKeys) == 0x0018);
static_assert(offsetof(FMetaPlaybackFrame, AbilityKeys) == 0x0068);
static_assert(offsetof(FMetaPlaybackFrame, MovementKeys) == 0x0078);
static_assert(offsetof(FMetaPlaybackFrame, Location) == 0x00B8);
static_assert(offsetof(FMetaPlaybackFrame, Rotation) == 0x00C4);
static_assert(offsetof(FMetaPlaybackFrame, Velocity) == 0x00D0);
static_assert(offsetof(FMetaPlaybackFrame, MovementMode) == 0x00DC);
static_assert(offsetof(FMetaPlaybackOptions, PlaybackMode) == 0x0000);
static_assert(offsetof(FPlaybackProfile, Name) == 0x0000);
static_assert(offsetof(FPlaybackProfile, Frames) == 0x0008);
static_assert(offsetof(FPlaybackProfile, PlaybackOptions) == 0x0018);
static_assert(offsetof(FCharacterProfileNative, WeaponProfileNames) == 0x0018);
static_assert(offsetof(FCharacterProfileNative, CameraOffset) == 0x003C);
static_assert(offsetof(FCharacterProfileNative, EnemyBodyColor) == 0x0080);
static_assert(offsetof(FCharacterProfileNative, EnemyBodyColorOnHit) == 0x008C);
static_assert(offsetof(FCharacterProfileNative, EnemyBodyColorOnLookAt) == 0x0098);
static_assert(offsetof(FCharacterProfileNative, EnemyHeadColor) == 0x00A4);
static_assert(offsetof(FCharacterProfileNative, EnemyHeadColorOnHit) == 0x00B0);
static_assert(offsetof(FCharacterProfileNative, EnemyHeadColorOnLookAt) == 0x00BC);
static_assert(offsetof(FCharacterProfileNative, TeamBodyColor) == 0x00C8);
static_assert(offsetof(FCharacterProfileNative, TeamHeadColor) == 0x00D4);
static_assert(offsetof(FCharacterProfileNative, CharBoundingBox) == 0x00E0);
static_assert(offsetof(FCharacterProfileNative, ProjectileBoundingBox) == 0x00FC);
static_assert(offsetof(FCharacterProfileNative, Jetpack) == 0x011C);
static_assert(offsetof(FCharacterProfileNative, AbilityProfileNames) == 0x0148);
static_assert(offsetof(FCharacterProfileNative, ThirdPersonCameraOffset) == 0x01B8);
static_assert(offsetof(FCharacterProfileNative, CharacterModel) == 0x01D0);
static_assert(offsetof(FCharacterProfileNative, CharacterSkin) == 0x01E0);
static_assert(offsetof(FCharacterProfileNative, SpawnOffsetMin) == 0x01F4);
static_assert(offsetof(FCharacterProfileNative, SpawnOffsetMax) == 0x0200);
static_assert(offsetof(FCharacterProfileNative, PlaybackOnSpawn) == 0x0288);
static_assert(offsetof(FRecallAbilityNative, AIAbilityUse) == 0x0024);
static_assert(offsetof(FMeleeAbilityNative, AIAbilityUse) == 0x0024);
static_assert(offsetof(FWeaponAbilityNative, AIAbilityUse) == 0x0028);
static_assert(offsetof(FWeaponAbilityNative, WeaponProfile) == 0x0068);
static_assert(offsetof(FMovementAbilityNative, AIAbilityUse) == 0x0024);
static_assert(offsetof(FScoringProfileNative, DistanceScoreCondition) == 0x005C);
static_assert(offsetof(FChallengeProfileNative, PlayerProfile) == 0x0008);
static_assert(offsetof(FChallengeProfileNative, AddedBots) == 0x0018);
static_assert(offsetof(FChallengeProfileNative, BotMaxLives) == 0x0030);
static_assert(offsetof(FChallengeProfileNative, BotTeams) == 0x0048);
static_assert(offsetof(FChallengeProfileNative, ScoringProfile) == 0x0058);
static_assert(offsetof(FChallengeProfileNative, MapName) == 0x00C8);
static_assert(offsetof(FChallengeProfileNative, MapData) == 0x00E0);
static_assert(offsetof(FChallengeProfileNative, LockedFOVScalar) == 0x0110);
static_assert(offsetof(FChallengeProfileNative, AdaptiveDifficultyProfile) == 0x0120);
static_assert(offsetof(FWeaponSpreadNative, StationaryStandingADS) == 0x0000);
static_assert(offsetof(FWeaponSpreadNative, StationaryCrouchingADS) == 0x0010);
static_assert(offsetof(FWeaponSpreadNative, MovingStandingADS) == 0x0020);
static_assert(offsetof(FWeaponSpreadNative, MovingCrouchingADS) == 0x0030);
static_assert(offsetof(FWeaponSpreadNative, StationaryStandingHipfire) == 0x0040);
static_assert(offsetof(FWeaponSpreadNative, StationaryCrouchingHipfire) == 0x0050);
static_assert(offsetof(FWeaponSpreadNative, MovingStandingHipfire) == 0x0060);
static_assert(offsetof(FWeaponSpreadNative, MovingCrouchingHipfire) == 0x0070);
static_assert(offsetof(FPerShotRecoilNative, PerShot) == 0x0020);
static_assert(offsetof(FPerBulletSpreadNative, SingleBulletSpread) == 0x0008);
static_assert(offsetof(FWeaponProfileNative, Type) == 0x0010);
static_assert(offsetof(FWeaponProfileNative, Category) == 0x0025);
static_assert(offsetof(FWeaponProfileNative, ChargeStartVelocity) == 0x0034);
static_assert(offsetof(FWeaponProfileNative, MuzzleVelocityMin) == 0x0048);
static_assert(offsetof(FWeaponProfileNative, MuzzleVelocityMax) == 0x0054);
static_assert(offsetof(FWeaponProfileNative, OriginOffset) == 0x0064);
static_assert(offsetof(FWeaponProfileNative, CooldownType) == 0x0084);
static_assert(offsetof(FWeaponProfileNative, ProjectileGraphic) == 0x00AC);
static_assert(offsetof(FWeaponProfileNative, Explosives) == 0x00B4);
static_assert(offsetof(FWeaponProfileNative, Spread) == 0x00F4);
static_assert(offsetof(FWeaponProfileNative, Recoil) == 0x0174);
static_assert(offsetof(FWeaponProfileNative, AutoAimProfile) == 0x01B4);
static_assert(offsetof(FWeaponProfileNative, ShootSound) == 0x01F8);
static_assert(offsetof(FWeaponProfileNative, HitscanVisualOffset) == 0x01FC);
static_assert(offsetof(FWeaponProfileNative, AlsoShootWeaponProfiles) == 0x0228);
static_assert(offsetof(FWeaponProfileNative, ADSShoot) == 0x0238);
static_assert(offsetof(FWeaponProfileNative, PerShotRecoil) == 0x0258);
static_assert(offsetof(FWeaponProfileNative, PerBulletSpread) == 0x02E0);
static_assert(offsetof(FWeaponProfileNative, AdsScope) == 0x030C);
static_assert(offsetof(FWeaponProfileNative, WeaponModel) == 0x0330);
static_assert(offsetof(FWeaponProfileNative, WeaponAnimation) == 0x0340);
static_assert(offsetof(FWeaponProfileNative, WeaponSkin) == 0x0358);
static_assert(offsetof(FWeaponProfileNative, ProjectileVisualOffset) == 0x0368);
static_assert(offsetof(FWeaponProfileNative, ThirdPersonWeaponModel) == 0x0380);
static_assert(offsetof(FWeaponProfileNative, ThirdPersonWeaponSkin) == 0x0390);
static_assert(offsetof(FWeaponProfileNative, ParticleMuzzleFlash) == 0x03A0);
static_assert(offsetof(FWeaponProfileNative, ParticleWallImpact) == 0x03B0);
static_assert(offsetof(FWeaponProfileNative, ParticleBodyImpact) == 0x03C0);
static_assert(offsetof(FWeaponProfileNative, ParticleProjectileTrail) == 0x03D0);
static_assert(offsetof(FWeaponProfileNative, ParticleHitscanTrace) == 0x03E0);
static_assert(offsetof(FWeaponProfileNative, ADSFovScalar) == 0x0400);
static_assert(offsetof(FWeaponProfileNative, CustomFovScale) == 0x0410);
static_assert(offsetof(FWeaponProfileNative, AdsFovScaleString) == 0x0430);
static_assert(offsetof(FDodgeProfileNative, TargetStrafeOverride) == 0x0054);
static_assert(offsetof(FDodgeProfileNative, WaypointLogic) == 0x00A8);
static_assert(offsetof(FDodgeProfileNative, LOSReactType) == 0x00CD);
static_assert(offsetof(FDodgeProfileNative, PlaybackProfile) == 0x00F8);
static_assert(offsetof(FDodgeProfileNative, InitialForwardMovementState) == 0x0118);
static_assert(offsetof(FDodgeProfileNative, InitialRightMovementState) == 0x0119);
static_assert(offsetof(FDodgeProfileNative, InitialLeftRightStrafeResetBehavior) == 0x011B);
static_assert(offsetof(FDodgeProfileNative, InitialForwardBackStrafeResetBehavior) == 0x011C);
static_assert(offsetof(FBotRotationProfileNative, ProfileNames) == 0x0010);
static_assert(offsetof(FBotRotationProfileNative, ProfileWeights) == 0x0020);
static_assert(offsetof(FBotProfileNative, BoundingBoxType) == 0x0018);
static_assert(offsetof(FBotProfileNative, MovementProfileName) == 0x0038);
static_assert(offsetof(FBotProfileNative, DodgeProfileNames) == 0x0048);
static_assert(offsetof(FBotProfileNative, DodgeProfileWeights) == 0x0058);
static_assert(offsetof(FBotProfileNative, WeaponsProfileNames) == 0x0070);
static_assert(offsetof(FBotProfileNative, WeaponProfileWeights) == 0x0080);
static_assert(offsetof(FBotProfileNative, AimingProfileNames) == 0x0090);
static_assert(offsetof(FBotProfileNative, CharacterProfile) == 0x00A8);
static_assert(offsetof(FBotProfileNative, LaserRgb) == 0x00D4);
static_assert(offsetof(FAIAimProfileNative, AimingStyle) == 0x0064);
static_assert(offsetof(FScoreNative, ChallengeName) == 0x0000);
static_assert(offsetof(FScoreNative, Date) == 0x0010);
static_assert(offsetof(FScoreNative, ScoringProfile) == 0x001C);
static_assert(offsetof(FScoreNative, ScenarioHash) == 0x00C8);
static_assert(offsetof(FScoreNative, StatFile) == 0x00E0);
static_assert(offsetof(FSensitivityRandomizerProfile, EasingFunction) == 0x0001);
