
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Struct /Script/KovaaKBuildEnvironment.KvKBuildVersion
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FKvKBuildVersion
{ 
	int32_t                                            Major;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minor;                                                      // 0x0004   (0x0004)  
	int32_t                                            Patch;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Hash;                                                       // 0x0010   (0x0010)  
	FDateTime                                          Date;                                                       // 0x0020   (0x0008)  
	FString                                            FullVersionString;                                          // 0x0028   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FKvKBuildVersion) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(FKvKBuildVersion, Hash) == 0x0010);
static_assert(offsetof(FKvKBuildVersion, Date) == 0x0020);
static_assert(offsetof(FKvKBuildVersion, FullVersionString) == 0x0028);
