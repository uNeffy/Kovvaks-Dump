
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: KovaaKCoreModels
/// dependency: KovaaKCoreUtils
/// dependency: KovaaKProfileModels

#pragma pack(push, 0x1)

/// Enum /Script/KovaaKFramework.EJobContextState
/// Size: 0x01 (1 bytes)
enum class EJobContextState : uint8_t
{
	EJobContextState__Reset                                                          = 0,
	EJobContextState__Pending                                                        = 1,
	EJobContextState__CompletedOnSuccess                                             = 2,
	EJobContextState__CompletedOnError                                               = 3,
	EJobContextState__Retrigger                                                      = 4,
	EJobContextState__Retry                                                          = 5
};

/// Class /Script/KovaaKFramework.AsyncUtilitiesLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAsyncUtilitiesLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/KovaaKFramework.AsyncUtilitiesLibrary.New_JobContext
	// class UJobContext* New_JobContext(class UObject* WorldContextObject, int32_t MaxTryCount);                               // [0xee8510] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/KovaaKFramework.AsyncUtilitiesLibrary.Conflate
	// void Conflate(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FPrimaryKey PrimaryKey, int32_t& InEventData, class UJobContext* InJobContext, class UCapturedEventData*& OutCapturedEventData, class UJobContext*& OutJobContext); // [0xee11f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KovaaKFramework.LatentObject
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class ULatentObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/KovaaKFramework.CapturedEventData
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UCapturedEventData : public ULatentObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED


	/// Functions
	// Function /Script/KovaaKFramework.CapturedEventData.GetEventData
	// void GetEventData(int32_t& OutEventData);                                                                                // [0xee1430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KovaaKFramework.CharacterStateReceiver
/// Size: 0x0150 (336 bytes) (0x0000B0 - 0x000150) align 8 MaxSize: 0x0150
class UCharacterStateReceiver : public UCommonActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x00B0   (0x00A0)  MISSED


	/// Functions
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Send_Team
	// void Send_Team(int32_t InValue);                                                                                         // [0xeedd10] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Send_CharacterProfileName
	// void Send_CharacterProfileName(FString InValue);                                                                         // [0xeed7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Reset_Team
	// void Reset_Team();                                                                                                       // [0xeed670] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Reset_CharacterProfileName
	// void Reset_CharacterProfileName();                                                                                       // [0xeed530] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Receive_Team_ValueOr
	// void Receive_Team_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue, int32_t ValueIfNull); // [0xeed370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Receive_Team_ValueElse
	// void Receive_Team_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue, EValueElseResult& Result); // [0xeed1e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Receive_Team_Single
	// void Receive_Team_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue);      // [0xeed090] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Receive_Team
	// void Receive_Team(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue);             // [0xeed090] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Receive_CharacterProfileName_ValueOr
	// void Receive_CharacterProfileName_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, FString& OutValue, FString ValueIfNull); // [0xee9a60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Receive_CharacterProfileName_ValueElse
	// void Receive_CharacterProfileName_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, FString& OutValue, EValueElseResult& Result); // [0xee98c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Receive_CharacterProfileName_Single
	// void Receive_CharacterProfileName_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, FString& OutValue); // [0xee9760] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Receive_CharacterProfileName
	// void Receive_CharacterProfileName(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, FString& OutValue); // [0xee9760] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Get_Team_ValueOr
	// void Get_Team_ValueOr(int32_t& OutValue, int32_t ValueIfNull);                                                           // [0xee8140] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Get_Team_ValueElse
	// void Get_Team_ValueElse(int32_t& OutValue, EValueElseResult& Result);                                                    // [0xee8060] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Get_CharacterProfileName_ValueOr
	// void Get_CharacterProfileName_ValueOr(FString& OutValue, FString ValueIfNull);                                           // [0xee6a50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Get_CharacterProfileName_ValueElse
	// void Get_CharacterProfileName_ValueElse(FString& OutValue, EValueElseResult& Result);                                    // [0xee6950] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.CharacterStateReceiver.Get_CharacterProfileName_DefaultValue
	// FString Get_CharacterProfileName_DefaultValue();                                                                         // [0xee68d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/KovaaKFramework.GameInstanceStateReceiver
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UGameInstanceStateReceiver : public UCommonGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0030   (0x0078)  MISSED


	/// Functions
	// Function /Script/KovaaKFramework.GameInstanceStateReceiver.Send_GameSeconds
	// void Send_GameSeconds(float InValue);                                                                                    // [0xeed960] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.GameInstanceStateReceiver.Reset_TransientData
	// void Reset_TransientData();                                                                                              // [0xeed690] Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.GameInstanceStateReceiver.Reset_GameSeconds
	// void Reset_GameSeconds();                                                                                                // [0xeed590] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.GameInstanceStateReceiver.Receive_GameSeconds_ValueOr
	// void Receive_GameSeconds_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xeeac10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.GameInstanceStateReceiver.Receive_GameSeconds_ValueElse
	// void Receive_GameSeconds_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeeaa80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.GameInstanceStateReceiver.Receive_GameSeconds_Single
	// void Receive_GameSeconds_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeea930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.GameInstanceStateReceiver.Receive_GameSeconds
	// void Receive_GameSeconds(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);        // [0xeea930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.GameInstanceStateReceiver.Get_GameSeconds_ValueOr
	// void Get_GameSeconds_ValueOr(float& OutValue, float ValueIfNull);                                                        // [0xee7180] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.GameInstanceStateReceiver.Get_GameSeconds_ValueElse
	// void Get_GameSeconds_ValueElse(float& OutValue, EValueElseResult& Result);                                               // [0xee70a0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.GameInstanceStateReceiver.Get_GameSeconds_DefaultValue
	// float Get_GameSeconds_DefaultValue();                                                                                    // [0xeb5000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/KovaaKFramework.JobContext
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UJobContext : public ULatentObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	TArray<class UJobContext*>                         _Children;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/KovaaKFramework.JobContext.Signal_CompletionOnFailure
	// void Signal_CompletionOnFailure();                                                                                       // [0xeeddd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.JobContext.Signal_Completion
	// void Signal_Completion();                                                                                                // [0xeedda0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.JobContext.New_ChildJobContext
	// class UJobContext* New_ChildJobContext(class UObject* WorldContextObject, int32_t MaxTryCount);                          // [0xee83c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.JobContext.IsNotComplete
	// bool IsNotComplete();                                                                                                    // [0xee8340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.JobContext.HasSucceeded
	// bool HasSucceeded();                                                                                                     // [0xee8310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.JobContext.HasFailed
	// bool HasFailed();                                                                                                        // [0xee8290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.JobContext.HasCompleted
	// bool HasCompleted();                                                                                                     // [0xee8210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/KovaaKFramework.KvKPawnSensingComponent
/// Size: 0x00F8 (248 bytes) (0x0000F8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UKvKPawnSensingComponent : public UPawnSensingComponent
{ 
public:
};

/// Class /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver
/// Size: 0x0278 (632 bytes) (0x000030 - 0x000278) align 8 MaxSize: 0x0278
class UPerformanceIndicatorsStateReceiver : public UCommonGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x248];                                     // 0x0030   (0x0248)  MISSED


	/// Functions
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Send_ShotsHit
	// void Send_ShotsHit(int32_t InValue);                                                                                     // [0xeedc80] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Send_ShotsFired
	// void Send_ShotsFired(int32_t InValue);                                                                                   // [0xeedbf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Send_Seconds
	// void Send_Seconds(float InValue);                                                                                        // [0xeedb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Send_Score
	// void Send_Score(float InValue);                                                                                          // [0xeedaf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Send_RandomSensScale
	// void Send_RandomSensScale(float InValue);                                                                                // [0xeeda70] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Send_Kills
	// void Send_Kills(int32_t InValue);                                                                                        // [0xeed9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Send_DamagePossible
	// void Send_DamagePossible(float InValue);                                                                                 // [0xeed8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Send_DamageDone
	// void Send_DamageDone(float InValue);                                                                                     // [0xeed860] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Send_ChallengeTickCount
	// void Send_ChallengeTickCount(int32_t InValue);                                                                           // [0xeed730] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Send_ChallengeSeconds
	// void Send_ChallengeSeconds(float InValue);                                                                               // [0xeed6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Reset_TransientData
	// void Reset_TransientData();                                                                                              // [0xeed690] Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Reset_ShotsHit
	// void Reset_ShotsHit();                                                                                                   // [0xeed650] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Reset_ShotsFired
	// void Reset_ShotsFired();                                                                                                 // [0xeed630] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Reset_Seconds
	// void Reset_Seconds();                                                                                                    // [0xeed610] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Reset_Score
	// void Reset_Score();                                                                                                      // [0xeed5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Reset_RandomSensScale
	// void Reset_RandomSensScale();                                                                                            // [0xeed5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Reset_Kills
	// void Reset_Kills();                                                                                                      // [0xeed5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Reset_DamagePossible
	// void Reset_DamagePossible();                                                                                             // [0xeed570] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Reset_DamageDone
	// void Reset_DamageDone();                                                                                                 // [0xeed550] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Reset_ChallengeTickCount
	// void Reset_ChallengeTickCount();                                                                                         // [0xeed510] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Reset_ChallengeSeconds
	// void Reset_ChallengeSeconds();                                                                                           // [0xeed4f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ShotsHit_ValueOr
	// void Receive_ShotsHit_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue, int32_t ValueIfNull); // [0xeecf10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ShotsHit_ValueElse
	// void Receive_ShotsHit_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue, EValueElseResult& Result); // [0xeecd80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ShotsHit_Single
	// void Receive_ShotsHit_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue);  // [0xeecc30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ShotsHit
	// void Receive_ShotsHit(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue);         // [0xeecc30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ShotsFired_ValueOr
	// void Receive_ShotsFired_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue, int32_t ValueIfNull); // [0xeecab0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ShotsFired_ValueElse
	// void Receive_ShotsFired_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue, EValueElseResult& Result); // [0xeec920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ShotsFired_Single
	// void Receive_ShotsFired_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue); // [0xeec7d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ShotsFired
	// void Receive_ShotsFired(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue);       // [0xeec7d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_Seconds_ValueOr
	// void Receive_Seconds_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xeec650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_Seconds_ValueElse
	// void Receive_Seconds_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeec4c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_Seconds_Single
	// void Receive_Seconds_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);     // [0xeec370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_Seconds
	// void Receive_Seconds(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);            // [0xeec370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ScorePerMinute_ValueOr
	// void Receive_ScorePerMinute_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xeebee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ScorePerMinute_ValueElse
	// void Receive_ScorePerMinute_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeebd50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ScorePerMinute_Single
	// void Receive_ScorePerMinute_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeebc00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ScorePerMinute
	// void Receive_ScorePerMinute(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);     // [0xeebc00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_Score_ValueOr
	// void Receive_Score_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xeec1f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_Score_ValueElse
	// void Receive_Score_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeec060] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_Score_Single
	// void Receive_Score_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);       // [0xeebab0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_Score
	// void Receive_Score(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);              // [0xeebab0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_RandomSensScale_ValueOr
	// void Receive_RandomSensScale_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xeeb930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_RandomSensScale_ValueElse
	// void Receive_RandomSensScale_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeeb7a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_RandomSensScale_Single
	// void Receive_RandomSensScale_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeeb650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_RandomSensScale
	// void Receive_RandomSensScale(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);    // [0xeeb650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_KillsPerSecond_ValueOr
	// void Receive_KillsPerSecond_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xeeb1c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_KillsPerSecond_ValueElse
	// void Receive_KillsPerSecond_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeeb030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_KillsPerSecond_Single
	// void Receive_KillsPerSecond_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeeaee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_KillsPerSecond
	// void Receive_KillsPerSecond(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);     // [0xeeaee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_Kills_ValueOr
	// void Receive_Kills_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue, int32_t ValueIfNull); // [0xeeb4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_Kills_ValueElse
	// void Receive_Kills_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue, EValueElseResult& Result); // [0xeeb340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_Kills_Single
	// void Receive_Kills_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue);     // [0xeead90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_Kills
	// void Receive_Kills(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue);            // [0xeead90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_DamagePossible_ValueOr
	// void Receive_DamagePossible_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xeea7b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_DamagePossible_ValueElse
	// void Receive_DamagePossible_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeea620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_DamagePossible_Single
	// void Receive_DamagePossible_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeea4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_DamagePossible
	// void Receive_DamagePossible(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);     // [0xeea4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_DamageEfficiency_ValueOr
	// void Receive_DamageEfficiency_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xeea350] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_DamageEfficiency_ValueElse
	// void Receive_DamageEfficiency_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeea1c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_DamageEfficiency_Single
	// void Receive_DamageEfficiency_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xeea070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_DamageEfficiency
	// void Receive_DamageEfficiency(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);   // [0xeea070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_DamageDone_ValueOr
	// void Receive_DamageDone_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xee9ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_DamageDone_ValueElse
	// void Receive_DamageDone_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xee9d60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_DamageDone_Single
	// void Receive_DamageDone_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);  // [0xee9c10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_DamageDone
	// void Receive_DamageDone(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);         // [0xee9c10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ChallengeTickCount_ValueOr
	// void Receive_ChallengeTickCount_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue, int32_t ValueIfNull); // [0xee95e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ChallengeTickCount_ValueElse
	// void Receive_ChallengeTickCount_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue, EValueElseResult& Result); // [0xee9450] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ChallengeTickCount_Single
	// void Receive_ChallengeTickCount_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue); // [0xee9300] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ChallengeTickCount
	// void Receive_ChallengeTickCount(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, int32_t& OutValue); // [0xee9300] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ChallengeSeconds_ValueOr
	// void Receive_ChallengeSeconds_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xee9180] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ChallengeSeconds_ValueElse
	// void Receive_ChallengeSeconds_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xee8ff0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ChallengeSeconds_Single
	// void Receive_ChallengeSeconds_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xee8ea0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ChallengeSeconds
	// void Receive_ChallengeSeconds(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);   // [0xee8ea0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ChallengeAverageFPS_ValueOr
	// void Receive_ChallengeAverageFPS_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xee8d20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ChallengeAverageFPS_ValueElse
	// void Receive_ChallengeAverageFPS_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xee8b90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ChallengeAverageFPS_Single
	// void Receive_ChallengeAverageFPS_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xee8a40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_ChallengeAverageFPS
	// void Receive_ChallengeAverageFPS(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xee8a40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_Accuracy_ValueOr
	// void Receive_Accuracy_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xee88c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_Accuracy_ValueElse
	// void Receive_Accuracy_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xee8730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_Accuracy_Single
	// void Receive_Accuracy_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);    // [0xee85e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Receive_Accuracy
	// void Receive_Accuracy(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);           // [0xee85e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ShotsHit_ValueOr
	// void Get_ShotsHit_ValueOr(int32_t& OutValue, int32_t ValueIfNull);                                                       // [0xee7f90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ShotsHit_ValueElse
	// void Get_ShotsHit_ValueElse(int32_t& OutValue, EValueElseResult& Result);                                                // [0xee7eb0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ShotsHit_DefaultValue
	// int32_t Get_ShotsHit_DefaultValue();                                                                                     // [0xee7420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ShotsFired_ValueOr
	// void Get_ShotsFired_ValueOr(int32_t& OutValue, int32_t ValueIfNull);                                                     // [0xee7de0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ShotsFired_ValueElse
	// void Get_ShotsFired_ValueElse(int32_t& OutValue, EValueElseResult& Result);                                              // [0xee7d00] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ShotsFired_DefaultValue
	// int32_t Get_ShotsFired_DefaultValue();                                                                                   // [0xee7420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_Seconds_ValueOr
	// void Get_Seconds_ValueOr(float& OutValue, float ValueIfNull);                                                            // [0xee7c20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_Seconds_ValueElse
	// void Get_Seconds_ValueElse(float& OutValue, EValueElseResult& Result);                                                   // [0xee7b40] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_Seconds_DefaultValue
	// float Get_Seconds_DefaultValue();                                                                                        // [0xeb5000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ScorePerMinute_ValueOr
	// void Get_ScorePerMinute_ValueOr(float& OutValue, float ValueIfNull);                                                     // [0xee78a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ScorePerMinute_ValueElse
	// void Get_ScorePerMinute_ValueElse(float& OutValue, EValueElseResult& Result);                                            // [0xee77c0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ScorePerMinute_DefaultValue
	// float Get_ScorePerMinute_DefaultValue();                                                                                 // [0xeb5000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_Score_ValueOr
	// void Get_Score_ValueOr(float& OutValue, float ValueIfNull);                                                              // [0xee7a60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_Score_ValueElse
	// void Get_Score_ValueElse(float& OutValue, EValueElseResult& Result);                                                     // [0xee7980] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_Score_DefaultValue
	// float Get_Score_DefaultValue();                                                                                          // [0xeb5000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_RandomSensScale_ValueOr
	// void Get_RandomSensScale_ValueOr(float& OutValue, float ValueIfNull);                                                    // [0xee76e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_RandomSensScale_ValueElse
	// void Get_RandomSensScale_ValueElse(float& OutValue, EValueElseResult& Result);                                           // [0xee7600] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_RandomSensScale_DefaultValue
	// float Get_RandomSensScale_DefaultValue();                                                                                // [0xeb4a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_KillsPerSecond_ValueOr
	// void Get_KillsPerSecond_ValueOr(float& OutValue, float ValueIfNull);                                                     // [0xee7340] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_KillsPerSecond_ValueElse
	// void Get_KillsPerSecond_ValueElse(float& OutValue, EValueElseResult& Result);                                            // [0xee7260] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_KillsPerSecond_DefaultValue
	// float Get_KillsPerSecond_DefaultValue();                                                                                 // [0xeb5000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_Kills_ValueOr
	// void Get_Kills_ValueOr(int32_t& OutValue, int32_t ValueIfNull);                                                          // [0xee7530] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_Kills_ValueElse
	// void Get_Kills_ValueElse(int32_t& OutValue, EValueElseResult& Result);                                                   // [0xee7450] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_Kills_DefaultValue
	// int32_t Get_Kills_DefaultValue();                                                                                        // [0xee7420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_DamagePossible_ValueOr
	// void Get_DamagePossible_ValueOr(float& OutValue, float ValueIfNull);                                                     // [0xee6fc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_DamagePossible_ValueElse
	// void Get_DamagePossible_ValueElse(float& OutValue, EValueElseResult& Result);                                            // [0xee6ee0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_DamagePossible_DefaultValue
	// float Get_DamagePossible_DefaultValue();                                                                                 // [0xeb5000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_DamageEfficiency_ValueOr
	// void Get_DamageEfficiency_ValueOr(float& OutValue, float ValueIfNull);                                                   // [0xee6e00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_DamageEfficiency_ValueElse
	// void Get_DamageEfficiency_ValueElse(float& OutValue, EValueElseResult& Result);                                          // [0xee6d20] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_DamageEfficiency_DefaultValue
	// float Get_DamageEfficiency_DefaultValue();                                                                               // [0xeb5000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_DamageDone_ValueOr
	// void Get_DamageDone_ValueOr(float& OutValue, float ValueIfNull);                                                         // [0xee6c40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_DamageDone_ValueElse
	// void Get_DamageDone_ValueElse(float& OutValue, EValueElseResult& Result);                                                // [0xee6b60] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_DamageDone_DefaultValue
	// float Get_DamageDone_DefaultValue();                                                                                     // [0xeb5000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ChallengeTickCount_ValueOr
	// void Get_ChallengeTickCount_ValueOr(int32_t& OutValue, int32_t ValueIfNull);                                             // [0xee6800] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ChallengeTickCount_ValueElse
	// void Get_ChallengeTickCount_ValueElse(int32_t& OutValue, EValueElseResult& Result);                                      // [0xee6720] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ChallengeTickCount_DefaultValue
	// int32_t Get_ChallengeTickCount_DefaultValue();                                                                           // [0xee66f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ChallengeSeconds_ValueOr
	// void Get_ChallengeSeconds_ValueOr(float& OutValue, float ValueIfNull);                                                   // [0xee6610] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ChallengeSeconds_ValueElse
	// void Get_ChallengeSeconds_ValueElse(float& OutValue, EValueElseResult& Result);                                          // [0xee6530] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ChallengeSeconds_DefaultValue
	// float Get_ChallengeSeconds_DefaultValue();                                                                               // [0xeb5000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ChallengeAverageFPS_ValueOr
	// void Get_ChallengeAverageFPS_ValueOr(float& OutValue, float ValueIfNull);                                                // [0xee6450] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ChallengeAverageFPS_ValueElse
	// void Get_ChallengeAverageFPS_ValueElse(float& OutValue, EValueElseResult& Result);                                       // [0xee6370] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_ChallengeAverageFPS_DefaultValue
	// float Get_ChallengeAverageFPS_DefaultValue();                                                                            // [0xeb5000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_Accuracy_ValueOr
	// void Get_Accuracy_ValueOr(float& OutValue, float ValueIfNull);                                                           // [0xee6290] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_Accuracy_ValueElse
	// void Get_Accuracy_ValueElse(float& OutValue, EValueElseResult& Result);                                                  // [0xee61b0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.PerformanceIndicatorsStateReceiver.Get_Accuracy_DefaultValue
	// float Get_Accuracy_DefaultValue();                                                                                       // [0xeb5000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/KovaaKFramework.ScenarioBroadcastReceiver
/// Size: 0x02B0 (688 bytes) (0x000030 - 0x0002B0) align 8 MaxSize: 0x02B0
class UScenarioBroadcastReceiver : public UCommonGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x180];                                     // 0x0030   (0x0180)  MISSED
	SDK_UNDEFINED(16,293) /* FMulticastInlineDelegate */ __um(Receive_Initialize_K2);                              // 0x01B0   (0x0010)  
	SDK_UNDEFINED(16,294) /* FMulticastInlineDelegate */ __um(Receive_Start_K2);                                   // 0x01C0   (0x0010)  
	SDK_UNDEFINED(16,295) /* FMulticastInlineDelegate */ __um(Receive_PostStart_K2);                               // 0x01D0   (0x0010)  
	SDK_UNDEFINED(16,296) /* FMulticastInlineDelegate */ __um(Receive_PlayTypeChanged_K2);                         // 0x01E0   (0x0010)  
	SDK_UNDEFINED(16,297) /* FMulticastInlineDelegate */ __um(Receive_ChallengeQueued_K2);                         // 0x01F0   (0x0010)  
	SDK_UNDEFINED(16,298) /* FMulticastInlineDelegate */ __um(Receive_Enable_K2);                                  // 0x0200   (0x0010)  
	SDK_UNDEFINED(16,299) /* FMulticastInlineDelegate */ __um(Receive_Disable_K2);                                 // 0x0210   (0x0010)  
	SDK_UNDEFINED(16,300) /* FMulticastInlineDelegate */ __um(Receive_Suspend_K2);                                 // 0x0220   (0x0010)  
	SDK_UNDEFINED(16,301) /* FMulticastInlineDelegate */ __um(Receive_Resume_K2);                                  // 0x0230   (0x0010)  
	SDK_UNDEFINED(16,302) /* FMulticastInlineDelegate */ __um(Receive_ScenarioChanged_K2);                         // 0x0240   (0x0010)  
	SDK_UNDEFINED(16,303) /* FMulticastInlineDelegate */ __um(Receive_ChallengeComplete_K2);                       // 0x0250   (0x0010)  
	SDK_UNDEFINED(16,304) /* FMulticastInlineDelegate */ __um(Receive_PostChallengeComplete_K2);                   // 0x0260   (0x0010)  
	SDK_UNDEFINED(16,305) /* FMulticastInlineDelegate */ __um(Receive_ChallengeCanceled_K2);                       // 0x0270   (0x0010)  
	SDK_UNDEFINED(16,306) /* FMulticastInlineDelegate */ __um(Receive_EnterEditor_K2);                             // 0x0280   (0x0010)  
	SDK_UNDEFINED(16,307) /* FMulticastInlineDelegate */ __um(Receive_ExitEditor_K2);                              // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,308) /* FMulticastInlineDelegate */ __um(Receive_NewCharacter_K2);                            // 0x02A0   (0x0010)  


	/// Functions
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Send_Suspend
	// void Send_Suspend();                                                                                                     // [0xef4960] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Send_Start
	// void Send_Start(EScenarioStartType StartType);                                                                           // [0xef48e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Send_ScenarioChanged
	// void Send_ScenarioChanged();                                                                                             // [0xef4840] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Send_Resume
	// void Send_Resume();                                                                                                      // [0xef4820] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Send_PostStart
	// void Send_PostStart(EScenarioStartType StartType);                                                                       // [0xef47a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Send_PostChallengeComplete
	// void Send_PostChallengeComplete();                                                                                       // [0xef4780] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Send_PlayTypeChanged
	// void Send_PlayTypeChanged(EScenarioPlayType PlayType);                                                                   // [0xef4700] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Send_NewCharacter
	// void Send_NewCharacter(class ACharacter* Character);                                                                     // [0xef4670] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Send_Initialize
	// void Send_Initialize(bool bNewScenario);                                                                                 // [0xef4200] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Send_ExitEditor
	// void Send_ExitEditor();                                                                                                  // [0xef4160] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Send_EnterEditor
	// void Send_EnterEditor();                                                                                                 // [0xef4140] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Send_Enable
	// void Send_Enable();                                                                                                      // [0xef4120] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Send_Disable
	// void Send_Disable();                                                                                                     // [0xef4080] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Send_ChallengeQueued
	// void Send_ChallengeQueued(float Delay);                                                                                  // [0xef3e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Send_ChallengeComplete
	// void Send_ChallengeComplete();                                                                                           // [0xef3e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Send_ChallengeCanceled
	// void Send_ChallengeCanceled();                                                                                           // [0xef3df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Receive_Suspend_K2__DelegateSignature
	// void Receive_Suspend_K2__DelegateSignature();                                                                            // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Receive_Start_K2__DelegateSignature
	// void Receive_Start_K2__DelegateSignature(EScenarioStartType StartType);                                                  // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Receive_ScenarioChanged_K2__DelegateSignature
	// void Receive_ScenarioChanged_K2__DelegateSignature();                                                                    // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Receive_Resume_K2__DelegateSignature
	// void Receive_Resume_K2__DelegateSignature();                                                                             // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Receive_PostStart_K2__DelegateSignature
	// void Receive_PostStart_K2__DelegateSignature(EScenarioStartType StartType);                                              // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Receive_PostChallengeComplete_K2__DelegateSignature
	// void Receive_PostChallengeComplete_K2__DelegateSignature();                                                              // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Receive_PlayTypeChanged_K2__DelegateSignature
	// void Receive_PlayTypeChanged_K2__DelegateSignature(EScenarioPlayType PlayType);                                          // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Receive_NewCharacter_K2__DelegateSignature
	// void Receive_NewCharacter_K2__DelegateSignature(class ACharacter* Character);                                            // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Receive_Initialize_K2__DelegateSignature
	// void Receive_Initialize_K2__DelegateSignature(bool bNewScenario);                                                        // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Receive_ExitEditor_K2__DelegateSignature
	// void Receive_ExitEditor_K2__DelegateSignature();                                                                         // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Receive_EnterEditor_K2__DelegateSignature
	// void Receive_EnterEditor_K2__DelegateSignature();                                                                        // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Receive_Enable_K2__DelegateSignature
	// void Receive_Enable_K2__DelegateSignature();                                                                             // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Receive_Disable_K2__DelegateSignature
	// void Receive_Disable_K2__DelegateSignature();                                                                            // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Receive_ChallengeQueued_K2__DelegateSignature
	// void Receive_ChallengeQueued_K2__DelegateSignature(float Delay);                                                         // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Receive_ChallengeComplete_K2__DelegateSignature
	// void Receive_ChallengeComplete_K2__DelegateSignature();                                                                  // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/KovaaKFramework.ScenarioBroadcastReceiver.Receive_ChallengeCanceled_K2__DelegateSignature
	// void Receive_ChallengeCanceled_K2__DelegateSignature();                                                                  // [0x18d2100] MulticastDelegate|Public|Delegate 
};

/// Class /Script/KovaaKFramework.ScenarioStateReceiver
/// Size: 0x0248 (584 bytes) (0x000030 - 0x000248) align 8 MaxSize: 0x0248
class UScenarioStateReceiver : public UCommonGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x218];                                     // 0x0030   (0x0218)  MISSED


	/// Functions
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Send_Seconds
	// void Send_Seconds(float InValue);                                                                                        // [0xeed960] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Send_ScenarioPlayType
	// void Send_ScenarioPlayType(EScenarioPlayType InValue);                                                                   // [0xef4860] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Send_IsPaused
	// void Send_IsPaused(bool InValue);                                                                                        // [0xef4550] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Send_IsInEditor
	// void Send_IsInEditor(bool InValue);                                                                                      // [0xef44c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Send_IsEnabled
	// void Send_IsEnabled(bool InValue);                                                                                       // [0xef4430] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Send_ChallengeScore
	// void Send_ChallengeScore(FScoreNative& InValue);                                                                         // [0xef3eb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Reset_TransientData
	// void Reset_TransientData();                                                                                              // [0xeed690] Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Reset_Seconds
	// void Reset_Seconds();                                                                                                    // [0xeed590] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Reset_ScenarioPlayType
	// void Reset_ScenarioPlayType();                                                                                           // [0xef3db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Reset_IsPaused
	// void Reset_IsPaused();                                                                                                   // [0xef3d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Reset_IsInEditor
	// void Reset_IsInEditor();                                                                                                 // [0xef3d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Reset_IsEnabled
	// void Reset_IsEnabled();                                                                                                  // [0xef3d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Reset_ChallengeScore
	// void Reset_ChallengeScore();                                                                                             // [0xef3c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_Seconds_ValueOr
	// void Receive_Seconds_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xeeac10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_Seconds_ValueElse
	// void Receive_Seconds_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeeaa80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_Seconds_Single
	// void Receive_Seconds_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);     // [0xeea930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_Seconds
	// void Receive_Seconds(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);            // [0xeea930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_ScenarioPlayType_ValueOr
	// void Receive_ScenarioPlayType_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EScenarioPlayType& OutValue, EScenarioPlayType ValueIfNull); // [0xef3670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_ScenarioPlayType_ValueElse
	// void Receive_ScenarioPlayType_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EScenarioPlayType& OutValue, EValueElseResult& Result); // [0xef34e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_ScenarioPlayType_Single
	// void Receive_ScenarioPlayType_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EScenarioPlayType& OutValue); // [0xef3390] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_ScenarioPlayType
	// void Receive_ScenarioPlayType(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, EScenarioPlayType& OutValue); // [0xef3390] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_IsPaused_ValueOr
	// void Receive_IsPaused_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, bool ValueIfNull); // [0xef3210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_IsPaused_ValueElse
	// void Receive_IsPaused_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, EValueElseResult& Result); // [0xef3080] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_IsPaused_Single
	// void Receive_IsPaused_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);     // [0xef2f30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_IsPaused
	// void Receive_IsPaused(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);            // [0xef2f30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_IsInEditor_ValueOr
	// void Receive_IsInEditor_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, bool ValueIfNull); // [0xef2db0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_IsInEditor_ValueElse
	// void Receive_IsInEditor_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, EValueElseResult& Result); // [0xef2c20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_IsInEditor_Single
	// void Receive_IsInEditor_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);   // [0xef2ad0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_IsInEditor
	// void Receive_IsInEditor(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);          // [0xef2ad0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_IsEnabled_ValueOr
	// void Receive_IsEnabled_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, bool ValueIfNull); // [0xef2950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_IsEnabled_ValueElse
	// void Receive_IsEnabled_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, EValueElseResult& Result); // [0xef27c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_IsEnabled_Single
	// void Receive_IsEnabled_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);    // [0xef2670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_IsEnabled
	// void Receive_IsEnabled(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);           // [0xef2670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_ChallengeScore_ValueOr
	// void Receive_ChallengeScore_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, FScoreNative& OutValue, FScoreNative& ValueIfNull); // [0xef2160] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_ChallengeScore_ValueElse
	// void Receive_ChallengeScore_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, FScoreNative& OutValue, EValueElseResult& Result); // [0xef1f70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_ChallengeScore_Single
	// void Receive_ChallengeScore_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, FScoreNative& OutValue); // [0xef1de0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Receive_ChallengeScore
	// void Receive_ChallengeScore(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, FScoreNative& OutValue); // [0xef1de0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_Seconds_ValueOr
	// void Get_Seconds_ValueOr(float& OutValue, float ValueIfNull);                                                            // [0xee7180] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_Seconds_ValueElse
	// void Get_Seconds_ValueElse(float& OutValue, EValueElseResult& Result);                                                   // [0xee70a0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_Seconds_DefaultValue
	// float Get_Seconds_DefaultValue();                                                                                        // [0xeb5000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_ScenarioPlayType_ValueOr
	// void Get_ScenarioPlayType_ValueOr(EScenarioPlayType& OutValue, EScenarioPlayType ValueIfNull);                           // [0xef1a90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_ScenarioPlayType_ValueElse
	// void Get_ScenarioPlayType_ValueElse(EScenarioPlayType& OutValue, EValueElseResult& Result);                              // [0xef19b0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_ScenarioPlayType_DefaultValue
	// EScenarioPlayType Get_ScenarioPlayType_DefaultValue();                                                                   // [0xef1170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_IsPaused_ValueOr
	// void Get_IsPaused_ValueOr(bool& OutValue, bool ValueIfNull);                                                             // [0xef18d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_IsPaused_ValueElse
	// void Get_IsPaused_ValueElse(bool& OutValue, EValueElseResult& Result);                                                   // [0xef17f0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_IsPaused_DefaultValue
	// bool Get_IsPaused_DefaultValue();                                                                                        // [0xef1170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_IsInEditor_ValueOr
	// void Get_IsInEditor_ValueOr(bool& OutValue, bool ValueIfNull);                                                           // [0xef1710] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_IsInEditor_ValueElse
	// void Get_IsInEditor_ValueElse(bool& OutValue, EValueElseResult& Result);                                                 // [0xef1630] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_IsInEditor_DefaultValue
	// bool Get_IsInEditor_DefaultValue();                                                                                      // [0xeb4e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_IsEnabled_ValueOr
	// void Get_IsEnabled_ValueOr(bool& OutValue, bool ValueIfNull);                                                            // [0xef1550] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_IsEnabled_ValueElse
	// void Get_IsEnabled_ValueElse(bool& OutValue, EValueElseResult& Result);                                                  // [0xef1470] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_IsEnabled_DefaultValue
	// bool Get_IsEnabled_DefaultValue();                                                                                       // [0xeb4e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_ChallengeScore_ValueOr
	// void Get_ChallengeScore_ValueOr(FScoreNative& OutValue, FScoreNative& ValueIfNull);                                      // [0xef0fa0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.ScenarioStateReceiver.Get_ChallengeScore_ValueElse
	// void Get_ChallengeScore_ValueElse(FScoreNative& OutValue, EValueElseResult& Result);                                     // [0xef0e60] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
};

/// Class /Script/KovaaKFramework.SensitivityRandomizerStateReceiver
/// Size: 0x01C0 (448 bytes) (0x000030 - 0x0001C0) align 8 MaxSize: 0x01C0
class USensitivityRandomizerStateReceiver : public UCommonGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x190];                                     // 0x0030   (0x0190)  MISSED


	/// Functions
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Send_UseDeltaRange
	// void Send_UseDeltaRange(bool InValue);                                                                                   // [0xef4980] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Send_IsSuspended
	// void Send_IsSuspended(bool InValue);                                                                                     // [0xef45e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Send_IsDirty
	// void Send_IsDirty(bool InValue);                                                                                         // [0xef43a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Send_IsActive
	// void Send_IsActive(bool InValue);                                                                                        // [0xef4310] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Send_IntervalSeconds
	// void Send_IntervalSeconds(float InValue);                                                                                // [0xef4290] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Send_GlobalMin
	// void Send_GlobalMin(float InValue);                                                                                      // [0xeed8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Send_GlobalMax
	// void Send_GlobalMax(float InValue);                                                                                      // [0xef4180] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Send_EasingFunction
	// void Send_EasingFunction(ERandomSensEasingFunction InValue);                                                             // [0xef40a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Send_DeltaPerSecondMin
	// void Send_DeltaPerSecondMin(float InValue);                                                                              // [0xef4000] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Send_DeltaPerSecondMax
	// void Send_DeltaPerSecondMax(float InValue);                                                                              // [0xef3f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Reset_UseDeltaRange
	// void Reset_UseDeltaRange();                                                                                              // [0xef3dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Reset_TransientData
	// void Reset_TransientData();                                                                                              // [0xec0410] Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Reset_IsSuspended
	// void Reset_IsSuspended();                                                                                                // [0xef3d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Reset_IsDirty
	// void Reset_IsDirty();                                                                                                    // [0xef3d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Reset_IsActive
	// void Reset_IsActive();                                                                                                   // [0xef3cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Reset_IntervalSeconds
	// void Reset_IntervalSeconds();                                                                                            // [0xef3cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Reset_GlobalMin
	// void Reset_GlobalMin();                                                                                                  // [0xeed570] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Reset_GlobalMax
	// void Reset_GlobalMax();                                                                                                  // [0xeed5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Reset_EasingFunction
	// void Reset_EasingFunction();                                                                                             // [0xef3cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Reset_DeltaPerSecondMin
	// void Reset_DeltaPerSecondMin();                                                                                          // [0xef3c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Reset_DeltaPerSecondMax
	// void Reset_DeltaPerSecondMax();                                                                                          // [0xef3c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_UseDeltaRange_ValueOr
	// void Receive_UseDeltaRange_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, bool ValueIfNull); // [0xef3ad0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_UseDeltaRange_ValueElse
	// void Receive_UseDeltaRange_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, EValueElseResult& Result); // [0xef3940] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_UseDeltaRange_Single
	// void Receive_UseDeltaRange_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue); // [0xef37f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_UseDeltaRange
	// void Receive_UseDeltaRange(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);       // [0xef37f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_IsSuspended_ValueOr
	// void Receive_IsSuspended_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, bool ValueIfNull); // [0xebd4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_IsSuspended_ValueElse
	// void Receive_IsSuspended_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, EValueElseResult& Result); // [0xebd340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_IsSuspended_Single
	// void Receive_IsSuspended_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);  // [0xebd1f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_IsSuspended
	// void Receive_IsSuspended(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);         // [0xebd1f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_IsDirty_ValueOr
	// void Receive_IsDirty_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, bool ValueIfNull); // [0xebc7b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_IsDirty_ValueElse
	// void Receive_IsDirty_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, EValueElseResult& Result); // [0xebc620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_IsDirty_Single
	// void Receive_IsDirty_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);      // [0xebc4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_IsDirty
	// void Receive_IsDirty(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);             // [0xebc4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_IsActive_ValueOr
	// void Receive_IsActive_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, bool ValueIfNull); // [0xebd070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_IsActive_ValueElse
	// void Receive_IsActive_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue, EValueElseResult& Result); // [0xebcee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_IsActive_Single
	// void Receive_IsActive_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);     // [0xebcd90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_IsActive
	// void Receive_IsActive(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, bool& OutValue);            // [0xebcd90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_IntervalSeconds_ValueOr
	// void Receive_IntervalSeconds_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xebdd90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_IntervalSeconds_ValueElse
	// void Receive_IntervalSeconds_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xebdc00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_IntervalSeconds_Single
	// void Receive_IntervalSeconds_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebdab0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_IntervalSeconds
	// void Receive_IntervalSeconds(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);    // [0xebdab0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_GlobalMin_ValueOr
	// void Receive_GlobalMin_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xeea7b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_GlobalMin_ValueElse
	// void Receive_GlobalMin_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeea620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_GlobalMin_Single
	// void Receive_GlobalMin_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);   // [0xeea4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_GlobalMin
	// void Receive_GlobalMin(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);          // [0xeea4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_GlobalMax_ValueOr
	// void Receive_GlobalMax_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xef24f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_GlobalMax_ValueElse
	// void Receive_GlobalMax_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xeeb340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_GlobalMax_Single
	// void Receive_GlobalMax_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);   // [0xeead90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_GlobalMax
	// void Receive_GlobalMax(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);          // [0xeead90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_EasingFunction_ValueOr
	// void Receive_EasingFunction_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, ERandomSensEasingFunction& OutValue, ERandomSensEasingFunction ValueIfNull); // [0xef2370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_EasingFunction_ValueElse
	// void Receive_EasingFunction_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, ERandomSensEasingFunction& OutValue, EValueElseResult& Result); // [0xebca80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_EasingFunction_Single
	// void Receive_EasingFunction_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, ERandomSensEasingFunction& OutValue); // [0xebc930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_EasingFunction
	// void Receive_EasingFunction(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, ERandomSensEasingFunction& OutValue); // [0xebc930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_DeltaPerSecondMin_ValueOr
	// void Receive_DeltaPerSecondMin_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xebd930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_DeltaPerSecondMin_ValueElse
	// void Receive_DeltaPerSecondMin_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xebd7a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_DeltaPerSecondMin_Single
	// void Receive_DeltaPerSecondMin_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebd650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_DeltaPerSecondMin
	// void Receive_DeltaPerSecondMin(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);  // [0xebd650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_DeltaPerSecondMax_ValueOr
	// void Receive_DeltaPerSecondMax_ValueOr(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, float ValueIfNull); // [0xebe1f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_DeltaPerSecondMax_ValueElse
	// void Receive_DeltaPerSecondMax_ValueElse(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue, EValueElseResult& Result); // [0xebe060] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_DeltaPerSecondMax_Single
	// void Receive_DeltaPerSecondMax_Single(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue); // [0xebdf10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Receive_DeltaPerSecondMax
	// void Receive_DeltaPerSecondMax(class UObject* WorldContextObject, FLatentActionInfo LatentActionInfo, float& OutValue);  // [0xebdf10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Import_Profile
	// void Import_Profile(FSensitivityRandomizerProfile& InProfile);                                                           // [0xef1d30] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_UseDeltaRange_ValueOr
	// void Get_UseDeltaRange_ValueOr(bool& OutValue, bool ValueIfNull);                                                        // [0xef1c50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_UseDeltaRange_ValueElse
	// void Get_UseDeltaRange_ValueElse(bool& OutValue, EValueElseResult& Result);                                              // [0xef1b70] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_UseDeltaRange_DefaultValue
	// bool Get_UseDeltaRange_DefaultValue();                                                                                   // [0xef1170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_IsSuspended_ValueOr
	// void Get_IsSuspended_ValueOr(bool& OutValue, bool ValueIfNull);                                                          // [0xeba830] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_IsSuspended_ValueElse
	// void Get_IsSuspended_ValueElse(bool& OutValue, EValueElseResult& Result);                                                // [0xeba750] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_IsSuspended_DefaultValue
	// bool Get_IsSuspended_DefaultValue();                                                                                     // [0xeb4e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_IsDirty_ValueOr
	// void Get_IsDirty_ValueOr(bool& OutValue, bool ValueIfNull);                                                              // [0xeba2f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_IsDirty_ValueElse
	// void Get_IsDirty_ValueElse(bool& OutValue, EValueElseResult& Result);                                                    // [0xeba210] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_IsDirty_DefaultValue
	// bool Get_IsDirty_DefaultValue();                                                                                         // [0xeb4e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_IsActive_ValueOr
	// void Get_IsActive_ValueOr(bool& OutValue, bool ValueIfNull);                                                             // [0xeba670] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_IsActive_ValueElse
	// void Get_IsActive_ValueElse(bool& OutValue, EValueElseResult& Result);                                                   // [0xeba590] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_IsActive_DefaultValue
	// bool Get_IsActive_DefaultValue();                                                                                        // [0xeb4e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_IntervalSeconds_ValueOr
	// void Get_IntervalSeconds_ValueOr(float& OutValue, float ValueIfNull);                                                    // [0xebabe0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_IntervalSeconds_ValueElse
	// void Get_IntervalSeconds_ValueElse(float& OutValue, EValueElseResult& Result);                                           // [0xebab00] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_IntervalSeconds_DefaultValue
	// float Get_IntervalSeconds_DefaultValue();                                                                                // [0xef1440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_GlobalMin_ValueOr
	// void Get_GlobalMin_ValueOr(float& OutValue, float ValueIfNull);                                                          // [0xee6fc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_GlobalMin_ValueElse
	// void Get_GlobalMin_ValueElse(float& OutValue, EValueElseResult& Result);                                                 // [0xee6ee0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_GlobalMin_DefaultValue
	// float Get_GlobalMin_DefaultValue();                                                                                      // [0xebb230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_GlobalMax_ValueOr
	// void Get_GlobalMax_ValueOr(float& OutValue, float ValueIfNull);                                                          // [0xef1360] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_GlobalMax_ValueElse
	// void Get_GlobalMax_ValueElse(float& OutValue, EValueElseResult& Result);                                                 // [0xef1280] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_GlobalMax_DefaultValue
	// float Get_GlobalMax_DefaultValue();                                                                                      // [0xeba910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_EasingFunction_ValueOr
	// void Get_EasingFunction_ValueOr(ERandomSensEasingFunction& OutValue, ERandomSensEasingFunction ValueIfNull);             // [0xef11a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_EasingFunction_ValueElse
	// void Get_EasingFunction_ValueElse(ERandomSensEasingFunction& OutValue, EValueElseResult& Result);                        // [0xeba3d0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_EasingFunction_DefaultValue
	// ERandomSensEasingFunction Get_EasingFunction_DefaultValue();                                                             // [0xef1170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_DeltaPerSecondMin_ValueOr
	// void Get_DeltaPerSecondMin_ValueOr(float& OutValue, float ValueIfNull);                                                  // [0xebaa20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_DeltaPerSecondMin_ValueElse
	// void Get_DeltaPerSecondMin_ValueElse(float& OutValue, EValueElseResult& Result);                                         // [0xeba940] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_DeltaPerSecondMin_DefaultValue
	// float Get_DeltaPerSecondMin_DefaultValue();                                                                              // [0xef1140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_DeltaPerSecondMax_ValueOr
	// void Get_DeltaPerSecondMax_ValueOr(float& OutValue, float ValueIfNull);                                                  // [0xebadd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_DeltaPerSecondMax_ValueElse
	// void Get_DeltaPerSecondMax_ValueElse(float& OutValue, EValueElseResult& Result);                                         // [0xebacf0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Get_DeltaPerSecondMax_DefaultValue
	// float Get_DeltaPerSecondMax_DefaultValue();                                                                              // [0xef1110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KovaaKFramework.SensitivityRandomizerStateReceiver.Export_Profile
	// FSensitivityRandomizerProfile Export_Profile();                                                                          // [0xef0e10] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/KovaaKFramework.CapturedEventDataAggregate
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FCapturedEventDataAggregate
{ 
	class UScriptStruct*                               _Struct;                                                    // 0x0000   (0x0008)  
	TArray<char>                                       _Bytes;                                                     // 0x0008   (0x0010)  
};

/// Struct /Script/KovaaKFramework.PrimaryKey
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FPrimaryKey
{ 
	uint64_t                                           Value;                                                      // 0x0000   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UAsyncUtilitiesLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULatentObject) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UCapturedEventData) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UCharacterStateReceiver) == 0x0150); // 336 bytes (0x0000B0 - 0x000150)
static_assert(sizeof(UGameInstanceStateReceiver) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UJobContext) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UKvKPawnSensingComponent) == 0x00F8); // 248 bytes (0x0000F8 - 0x0000F8)
static_assert(sizeof(UPerformanceIndicatorsStateReceiver) == 0x0278); // 632 bytes (0x000030 - 0x000278)
static_assert(sizeof(UScenarioBroadcastReceiver) == 0x02B0); // 688 bytes (0x000030 - 0x0002B0)
static_assert(sizeof(UScenarioStateReceiver) == 0x0248); // 584 bytes (0x000030 - 0x000248)
static_assert(sizeof(USensitivityRandomizerStateReceiver) == 0x01C0); // 448 bytes (0x000030 - 0x0001C0)
static_assert(sizeof(FCapturedEventDataAggregate) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPrimaryKey) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(UJobContext, _Children) == 0x0040);
static_assert(offsetof(FCapturedEventDataAggregate, _Struct) == 0x0000);
static_assert(offsetof(FCapturedEventDataAggregate, _Bytes) == 0x0008);
