
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

/// Class /Script/KovaaKCoreUtils.CommonActorComponent
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UCommonActorComponent : public UActorComponent
{ 
public:
};

/// Class /Script/KovaaKCoreUtils.CommonGameInstanceSubsystem
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UCommonGameInstanceSubsystem : public UGameInstanceSubsystem
{ 
public:
};

/// Class /Script/KovaaKCoreUtils.GroupedSamplerSubsystem
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UGroupedSamplerSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/KovaaKCoreUtils.RealTimeTimerManagerContext
/// Size: 0x0198 (408 bytes) (0x000030 - 0x000198) align 8 MaxSize: 0x0198
class URealTimeTimerManagerContext : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x168];                                     // 0x0030   (0x0168)  MISSED
};

/// Class /Script/KovaaKCoreUtils.UtilitiesBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUtilitiesBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/KovaaKCoreUtils.UtilitiesBlueprintLibrary.Sample
	// void Sample(class UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);                            // [0xea8d80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KovaaKCoreUtils.UtilitiesBlueprintLibrary.GroupedSample
	// void GroupedSample(class UObject* WorldContextObject, int64_t GroupId, float Interval, FLatentActionInfo LatentInfo);    // [0xea8c20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KovaaKCoreUtils.UtilitiesBlueprintLibrary.ConvertTo_DisplayTime
	// FText ConvertTo_DisplayTime(float InSeconds);                                                                            // [0xea8b40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


static_assert(sizeof(UCommonActorComponent) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UCommonGameInstanceSubsystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UGroupedSamplerSubsystem) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(URealTimeTimerManagerContext) == 0x0198); // 408 bytes (0x000030 - 0x000198)
static_assert(sizeof(UUtilitiesBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
