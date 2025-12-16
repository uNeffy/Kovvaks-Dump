
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/KovaaKCoreTests.DummySubsystem
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDummySubsystem : public UGameInstanceSubsystem
{ 
public:
};

/// Class /Script/KovaaKCoreTests.DummyObject
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDummyObject : public UObject
{ 
public:
};

/// Class /Script/KovaaKCoreTests.MockTickableSubsystem
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UMockTickableSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/KovaaKCoreTests.ShadowGameInstance
/// Size: 0x01B0 (432 bytes) (0x0001B0 - 0x0001B0) align 8 MaxSize: 0x01B0
class UShadowGameInstance : public UGameInstance
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UDummySubsystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDummyObject) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMockTickableSubsystem) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UShadowGameInstance) == 0x01B0); // 432 bytes (0x0001B0 - 0x0001B0)
