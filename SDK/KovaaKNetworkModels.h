
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: KovaaKCoreModels
/// dependency: KovaaKCoreUtils
/// dependency: UWorks

#pragma pack(push, 0x1)

/// Enum /Script/KovaaKNetworkModels.EWatchDogTimerStatus
/// Size: 0x01 (1 bytes)
enum class EWatchDogTimerStatus : uint8_t
{
	EWatchDogTimerStatus__Started                                                    = 0,
	EWatchDogTimerStatus__Stopped                                                    = 1,
	EWatchDogTimerStatus__Expired                                                    = 2
};

/// Class /Script/KovaaKNetworkModels.KvKAuthTokenLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UKvKAuthTokenLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/KovaaKNetworkModels.KvKAuthTokenLibrary.Get_IsExpired
	// bool Get_IsExpired(FKvKAuthToken& InValue);                                                                              // [0xed1e70] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/KovaaKNetworkModels.KvKLeaderboardIDUtilities
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UKvKLeaderboardIDUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/KovaaKNetworkModels.KvKLeaderboardIDUtilities.ConvertTo_String
	// FString ConvertTo_String(FKvKLeaderboardID_Network& It);                                                                 // [0xed1b60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/KovaaKNetworkModels.SteamNetworkModel
/// Size: 0x0118 (280 bytes) (0x000030 - 0x000118) align 8 MaxSize: 0x0118
class USteamNetworkModel : public UCommonGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xE8];                                      // 0x0030   (0x00E8)  MISSED


	/// Functions
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Send_PublicScenariosTotal
	// void Send_PublicScenariosTotal(int32_t InValue);                                                                         // [0xed3870] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Send_PublicScenariosFound
	// void Send_PublicScenariosFound(int32_t InValue);                                                                         // [0xed37e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Send_IsUGCProcessPending
	// void Send_IsUGCProcessPending(bool InValue);                                                                             // [0xed3750] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Send_AuthToken
	// void Send_AuthToken(FKvKAuthToken& InValue);                                                                             // [0xed36a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Reset_PublicScenariosTotal
	// void Reset_PublicScenariosTotal();                                                                                       // [0xed3680] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Reset_PublicScenariosFound
	// void Reset_PublicScenariosFound();                                                                                       // [0xed3660] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Reset_IsUGCProcessPending
	// void Reset_IsUGCProcessPending();                                                                                        // [0xed3640] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Reset_AuthToken
	// void Reset_AuthToken();                                                                                                  // [0xed3620] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Receive_PublicScenariosTotal_ValueOr
	// void Receive_PublicScenariosTotal_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue, int32_t ValueIfNull); // [0xed34a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Receive_PublicScenariosTotal_ValueElse
	// void Receive_PublicScenariosTotal_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue, EValueElseResult& Result); // [0xed3310] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Receive_PublicScenariosTotal_Single
	// void Receive_PublicScenariosTotal_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue); // [0xed31c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Receive_PublicScenariosTotal
	// void Receive_PublicScenariosTotal(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue); // [0xed31c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Receive_PublicScenariosFound_ValueOr
	// void Receive_PublicScenariosFound_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue, int32_t ValueIfNull); // [0xed3040] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Receive_PublicScenariosFound_ValueElse
	// void Receive_PublicScenariosFound_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue, EValueElseResult& Result); // [0xed2eb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Receive_PublicScenariosFound_Single
	// void Receive_PublicScenariosFound_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue); // [0xed2d60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Receive_PublicScenariosFound
	// void Receive_PublicScenariosFound(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue); // [0xed2d60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Receive_IsUGCProcessPending_ValueOr
	// void Receive_IsUGCProcessPending_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, bool ValueIfNull); // [0xed2be0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Receive_IsUGCProcessPending_ValueElse
	// void Receive_IsUGCProcessPending_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, EValueElseResult& Result); // [0xed2a50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Receive_IsUGCProcessPending_Single
	// void Receive_IsUGCProcessPending_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue); // [0xed2900] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Receive_IsUGCProcessPending
	// void Receive_IsUGCProcessPending(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue); // [0xed2900] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Receive_AuthToken_ValueOr
	// void Receive_AuthToken_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, FKvKAuthToken& OutValue, FKvKAuthToken& ValueIfNull); // [0xed2740] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Receive_AuthToken_ValueElse
	// void Receive_AuthToken_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, FKvKAuthToken& OutValue, EValueElseResult& Result); // [0xed25a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Receive_AuthToken_Single
	// void Receive_AuthToken_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, FKvKAuthToken& OutValue); // [0xed2440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Receive_AuthToken
	// void Receive_AuthToken(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, FKvKAuthToken& OutValue);  // [0xed2440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Get_PublicScenariosTotal_ValueOr
	// void Get_PublicScenariosTotal_ValueOr(int32_t& OutValue, int32_t ValueIfNull);                                           // [0xed2370] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Get_PublicScenariosTotal_ValueElse
	// void Get_PublicScenariosTotal_ValueElse(int32_t& OutValue, EValueElseResult& Result);                                    // [0xed2290] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Get_PublicScenariosFound_ValueOr
	// void Get_PublicScenariosFound_ValueOr(int32_t& OutValue, int32_t ValueIfNull);                                           // [0xed21c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Get_PublicScenariosFound_ValueElse
	// void Get_PublicScenariosFound_ValueElse(int32_t& OutValue, EValueElseResult& Result);                                    // [0xed20e0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Get_IsUGCProcessPending_ValueOr
	// void Get_IsUGCProcessPending_ValueOr(bool& OutValue, bool ValueIfNull);                                                  // [0xed2000] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Get_IsUGCProcessPending_ValueElse
	// void Get_IsUGCProcessPending_ValueElse(bool& OutValue, EValueElseResult& Result);                                        // [0xed1f20] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Get_AuthToken_ValueOr
	// void Get_AuthToken_ValueOr(FKvKAuthToken& OutValue, FKvKAuthToken& ValueIfNull);                                         // [0xed1d50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKNetworkModels.SteamNetworkModel.Get_AuthToken_ValueElse
	// void Get_AuthToken_ValueElse(FKvKAuthToken& OutValue, EValueElseResult& Result);                                         // [0xed1c50] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
};

/// Struct /Script/KovaaKNetworkModels.InterUEMapCache
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FInterUEMapCache
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/KovaaKNetworkModels.KvKAuthToken
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FKvKAuthToken
{ 
	FString                                            Value;                                                      // 0x0000   (0x0010)  
	FDateTime                                          ExpirationDateTime;                                         // 0x0010   (0x0008)  
};

/// Struct /Script/KovaaKNetworkModels.InterUEMapCacheline
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FInterUEMapCacheline
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/KovaaKNetworkModels.KvKLeaderboardCSVData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FKvKLeaderboardCSVData
{ 
	FString                                            Resolution;                                                 // 0x0000   (0x0010)  
	float                                              AvgFPS;                                                     // 0x0010   (0x0004)  
	float                                              AvgTTK;                                                     // 0x0014   (0x0004)  
	FString                                            SensScale;                                                  // 0x0018   (0x0010)  
	float                                              HorizSens;                                                  // 0x0028   (0x0004)  
	float                                              VertSens;                                                   // 0x002C   (0x0004)  
	float                                              FOV;                                                        // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FString                                            ChallengeStart;                                             // 0x0038   (0x0010)  
	float                                              Score;                                                      // 0x0048   (0x0004)  
	int32_t                                            NumKills;                                                   // 0x004C   (0x0004)  
	FString                                            Hash;                                                       // 0x0050   (0x0010)  
	FString                                            FOVScale;                                                   // 0x0060   (0x0010)  
};

/// Struct /Script/KovaaKNetworkModels.LeaderboardDataCacheline
/// Size: 0x0060 (96 bytes) (0x000020 - 0x000060) align 8 MaxSize: 0x0060
struct FLeaderboardDataCacheline : FInterUEMapCacheline
{ 
	TArray<FString>                                    Names;                                                      // 0x0020   (0x0010)  
	TArray<FString>                                    Scores;                                                     // 0x0030   (0x0010)  
	FString                                            UserRank;                                                   // 0x0040   (0x0010)  
	FString                                            userScore;                                                  // 0x0050   (0x0010)  
};

/// Struct /Script/KovaaKNetworkModels.KvKUGCHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FKvKUGCHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/KovaaKNetworkModels.KvKLeaderboardEntry
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FKvKLeaderboardEntry
{ 
	FUWorksSteamID                                     ID;                                                         // 0x0000   (0x0008)  
	FString                                            PlayerSteamName;                                            // 0x0008   (0x0010)  
	int32_t                                            GlobalRank;                                                 // 0x0018   (0x0004)  
	int32_t                                            Score;                                                      // 0x001C   (0x0004)  
	bool                                               KovaaksPlusActive;                                          // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	int32_t                                            Details;                                                    // 0x0024   (0x0004)  
	TArray<int32_t>                                    DetailsArr;                                                 // 0x0028   (0x0010)  
	FKvKUGCHandle                                      UGCHandle;                                                  // 0x0038   (0x0008)  
};

/// Struct /Script/KovaaKNetworkModels.KvKLeaderboardID_Cache
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FKvKLeaderboardID_Cache
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/KovaaKNetworkModels.KvKLeaderboardID_Network
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FKvKLeaderboardID_Network
{ 
	uint64_t                                           Value;                                                      // 0x0000   (0x0008)  
};

/// Struct /Script/KovaaKNetworkModels.LeaderboardPostRequest
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FLeaderboardPostRequest
{ 
	FString                                            LeaderboardName;                                            // 0x0000   (0x0010)  
	float                                              Score;                                                      // 0x0010   (0x0004)  
	float                                              AccuracyOrDamageEfficiency;                                 // 0x0014   (0x0004)  
	bool                                               bIsAccuracyValue;                                           // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
	FString                                            ScenarioHash;                                               // 0x0020   (0x0010)  
	FKvKLeaderboardCSVData                             CSVData;                                                    // 0x0030   (0x0070)  
	float                                              PauseDuration;                                              // 0x00A0   (0x0004)  
	int32_t                                            PauseCount;                                                 // 0x00A4   (0x0004)  
};

/// Struct /Script/KovaaKNetworkModels.KvKNetworkRequest
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FKvKNetworkRequest
{ 
	FString                                            URLPath;                                                    // 0x0000   (0x0010)  
	FString                                            MessageBody;                                                // 0x0010   (0x0010)  
	FString                                            Verb;                                                       // 0x0020   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UKvKAuthTokenLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKvKLeaderboardIDUtilities) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USteamNetworkModel) == 0x0118); // 280 bytes (0x000030 - 0x000118)
static_assert(sizeof(FInterUEMapCache) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FKvKAuthToken) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterUEMapCacheline) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FKvKLeaderboardCSVData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FLeaderboardDataCacheline) == 0x0060); // 96 bytes (0x000020 - 0x000060)
static_assert(sizeof(FKvKUGCHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FKvKLeaderboardEntry) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FKvKLeaderboardID_Cache) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FKvKLeaderboardID_Network) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLeaderboardPostRequest) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FKvKNetworkRequest) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FKvKAuthToken, Value) == 0x0000);
static_assert(offsetof(FKvKAuthToken, ExpirationDateTime) == 0x0010);
static_assert(offsetof(FInterUEMapCacheline, Type) == 0x0000);
static_assert(offsetof(FInterUEMapCacheline, Name) == 0x0010);
static_assert(offsetof(FKvKLeaderboardCSVData, Resolution) == 0x0000);
static_assert(offsetof(FKvKLeaderboardCSVData, SensScale) == 0x0018);
static_assert(offsetof(FKvKLeaderboardCSVData, ChallengeStart) == 0x0038);
static_assert(offsetof(FKvKLeaderboardCSVData, Hash) == 0x0050);
static_assert(offsetof(FKvKLeaderboardCSVData, FOVScale) == 0x0060);
static_assert(offsetof(FLeaderboardDataCacheline, Names) == 0x0020);
static_assert(offsetof(FLeaderboardDataCacheline, Scores) == 0x0030);
static_assert(offsetof(FLeaderboardDataCacheline, UserRank) == 0x0040);
static_assert(offsetof(FLeaderboardDataCacheline, userScore) == 0x0050);
static_assert(offsetof(FKvKLeaderboardEntry, ID) == 0x0000);
static_assert(offsetof(FKvKLeaderboardEntry, PlayerSteamName) == 0x0008);
static_assert(offsetof(FKvKLeaderboardEntry, DetailsArr) == 0x0028);
static_assert(offsetof(FKvKLeaderboardEntry, UGCHandle) == 0x0038);
static_assert(offsetof(FLeaderboardPostRequest, LeaderboardName) == 0x0000);
static_assert(offsetof(FLeaderboardPostRequest, ScenarioHash) == 0x0020);
static_assert(offsetof(FLeaderboardPostRequest, CSVData) == 0x0030);
static_assert(offsetof(FKvKNetworkRequest, URLPath) == 0x0000);
static_assert(offsetof(FKvKNetworkRequest, MessageBody) == 0x0010);
static_assert(offsetof(FKvKNetworkRequest, Verb) == 0x0020);
