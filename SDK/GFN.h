
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/GFN.EGFNTier
/// Size: 0x01 (1 bytes)
enum class EGFNTier : uint8_t
{
	EGFNTier__Unknown                                                                = 0,
	EGFNTier__Free                                                                   = 1,
	EGFNTier__Priority                                                               = 2,
	EGFNTier__Ultimate                                                               = 3
};

/// Enum /Script/GFN.EGFNIsRunningInCloudAssuranceLevel
/// Size: 0x01 (1 bytes)
enum class EGFNIsRunningInCloudAssuranceLevel : uint8_t
{
	EGFNIsRunningInCloudAssuranceLevel__None                                         = 0,
	EGFNIsRunningInCloudAssuranceLevel__Low                                          = 1,
	EGFNIsRunningInCloudAssuranceLevel__Mid                                          = 2,
	EGFNIsRunningInCloudAssuranceLevel__High                                         = 3
};

/// Class /Script/GFN.GFNSubsystem
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UGFNSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED


	/// Functions
	// Function /Script/GFN.GFNSubsystem.IsRunningInCloud
	// bool IsRunningInCloud();                                                                                                 // [0x7ca4e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GFN.GFNSubsystem.IsGfnInitialized
	// bool IsGfnInitialized();                                                                                                 // [0x7ca4c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GFN.GFNSubsystem.GetIsRunningInCloudAssuranceLevel
	// EGFNIsRunningInCloudAssuranceLevel GetIsRunningInCloudAssuranceLevel();                                                  // [0x7ca490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GFN.GFNSubsystem.GetGFNTier
	// EGFNTier GetGFNTier();                                                                                                   // [0x7ca460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(UGFNSubsystem) == 0x0038); // 56 bytes (0x000030 - 0x000038)
