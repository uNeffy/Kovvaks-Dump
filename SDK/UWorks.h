
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/UWorks.UWorks
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorks : public UObject
{ 
public:
};

/// Class /Script/UWorks.UWorksInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterface : public UUWorks
{ 
public:
};

/// Class /Script/UWorks.UWorksRequest
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksRequest : public UUWorks
{ 
public:
};

/// Struct /Script/UWorks.UWorksSteamID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUWorksSteamID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/UWorks.UWorksGameID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUWorksGameID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/UWorks.UWorksPublishedFileID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUWorksPublishedFileID
{ 
	uint64_t                                           Value;                                                      // 0x0000   (0x0008)  
};

/// Struct /Script/UWorks.UWorksSteamItemDef
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FUWorksSteamItemDef
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/UWorks.UWorksSteamItemInstanceID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUWorksSteamItemInstanceID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UUWorks) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksRequest) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FUWorksSteamID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUWorksGameID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUWorksPublishedFileID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUWorksSteamItemDef) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FUWorksSteamItemInstanceID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
