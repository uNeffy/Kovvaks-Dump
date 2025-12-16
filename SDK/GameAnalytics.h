
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/GameAnalytics.EGAAdError
/// Size: 0x01 (1 bytes)
enum class EGAAdError : uint8_t
{
	EGAAdError__undefined                                                            = 0,
	EGAAdError__unknown                                                              = 1,
	EGAAdError__offline                                                              = 2,
	EGAAdError__nofill                                                               = 3,
	EGAAdError__internalerror                                                        = 4,
	EGAAdError__invalidrequest                                                       = 5,
	EGAAdError__unabletoprecache                                                     = 6
};

/// Enum /Script/GameAnalytics.EGAAdType
/// Size: 0x01 (1 bytes)
enum class EGAAdType : uint8_t
{
	EGAAdType__undefined                                                             = 0,
	EGAAdType__video                                                                 = 1,
	EGAAdType__rewardedvideo                                                         = 2,
	EGAAdType__playable                                                              = 3,
	EGAAdType__interstitial                                                          = 4,
	EGAAdType__offerwall                                                             = 5,
	EGAAdType__banner                                                                = 6
};

/// Enum /Script/GameAnalytics.EGAAdAction
/// Size: 0x01 (1 bytes)
enum class EGAAdAction : uint8_t
{
	EGAAdAction__undefined                                                           = 0,
	EGAAdAction__clicked                                                             = 1,
	EGAAdAction__show                                                                = 2,
	EGAAdAction__failedshow                                                          = 3,
	EGAAdAction__rewardreceived                                                      = 4,
	EGAAdAction__request                                                             = 5,
	EGAAdAction__loaded                                                              = 6
};

/// Enum /Script/GameAnalytics.EGAErrorSeverity
/// Size: 0x01 (1 bytes)
enum class EGAErrorSeverity : uint8_t
{
	EGAErrorSeverity__undefined                                                      = 0,
	EGAErrorSeverity__debug                                                          = 1,
	EGAErrorSeverity__info                                                           = 2,
	EGAErrorSeverity__warning                                                        = 3,
	EGAErrorSeverity__error                                                          = 4,
	EGAErrorSeverity__critical                                                       = 5
};

/// Enum /Script/GameAnalytics.EGAProgressionStatus
/// Size: 0x01 (1 bytes)
enum class EGAProgressionStatus : uint8_t
{
	EGAProgressionStatus__undefined                                                  = 0,
	EGAProgressionStatus__start                                                      = 1,
	EGAProgressionStatus__complete                                                   = 2,
	EGAProgressionStatus__fail                                                       = 3
};

/// Enum /Script/GameAnalytics.EGAResourceFlowType
/// Size: 0x01 (1 bytes)
enum class EGAResourceFlowType : uint8_t
{
	EGAResourceFlowType__undefined                                                   = 0,
	EGAResourceFlowType__source                                                      = 1,
	EGAResourceFlowType__sink                                                        = 2
};

/// Class /Script/GameAnalytics.GameAnalytics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameAnalytics : public UObject
{ 
public:


	/// Functions
	// Function /Script/GameAnalytics.GameAnalytics.SetCustomDimension03
	// void SetCustomDimension03(FString CustomDimension);                                                                      // [0xc198a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.SetCustomDimension02
	// void SetCustomDimension02(FString CustomDimension);                                                                      // [0xc19810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.SetCustomDimension01
	// void SetCustomDimension01(FString CustomDimension);                                                                      // [0xc19780] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.OnQuit
	// void OnQuit();                                                                                                           // [0xc19760] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.IsRemoteConfigsReady
	// bool IsRemoteConfigsReady();                                                                                             // [0xc19730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.GetRemoteConfigsValueAsStringWithDefaultValue
	// FString GetRemoteConfigsValueAsStringWithDefaultValue(FString Key, FString DefaultValue);                                // [0xc195f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.GetRemoteConfigsValueAsString
	// FString GetRemoteConfigsValueAsString(FString Key);                                                                      // [0xc19510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.GetRemoteConfigsContentAsString
	// FString GetRemoteConfigsContentAsString();                                                                               // [0xc19490] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.GetABTestingVariantId
	// FString GetABTestingVariantId();                                                                                         // [0xc19410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.GetABTestingId
	// FString GetABTestingId();                                                                                                // [0xc19390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.EnableSDKInitEvent
	// void EnableSDKInitEvent(bool Value);                                                                                     // [0xc19310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.EnableMemoryHistogram
	// void EnableMemoryHistogram(bool Value);                                                                                  // [0xc19290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.EnableHealthHardwareInfo
	// void EnableHealthHardwareInfo(bool Value);                                                                               // [0xc19210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.EnableFpsHistogram
	// void EnableFpsHistogram(bool Value);                                                                                     // [0xc19210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.DisableAdvertisingId
	// void DisableAdvertisingId(bool Value);                                                                                   // [0xc19210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddResourceEventWithMergeFields
	// void AddResourceEventWithMergeFields(EGAResourceFlowType FlowType, FString currency, float amount, FString ItemType, FString ItemId, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc18fb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddResourceEventWithFields
	// void AddResourceEventWithFields(EGAResourceFlowType FlowType, FString currency, float amount, FString ItemType, FString ItemId, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc18d50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddResourceEvent
	// void AddResourceEvent(EGAResourceFlowType FlowType, FString currency, float amount, FString ItemType, FString ItemId);   // [0xc18b90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoThreeScoreAndMergeFields
	// void AddProgressionEventWithOneTwoThreeScoreAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, int32_t Score, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc18930] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoThreeScoreAndFields
	// void AddProgressionEventWithOneTwoThreeScoreAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, int32_t Score, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc186d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoThreeAndScore
	// void AddProgressionEventWithOneTwoThreeAndScore(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, int32_t Score); // [0xc18510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoThreeAndMergeFields
	// void AddProgressionEventWithOneTwoThreeAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc182f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoThreeAndFields
	// void AddProgressionEventWithOneTwoThreeAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc180d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoScoreAndMergeFields
	// void AddProgressionEventWithOneTwoScoreAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, int32_t Score, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc17ed0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoScoreAndFields
	// void AddProgressionEventWithOneTwoScoreAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, int32_t Score, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc17cd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndThree
	// void AddProgressionEventWithOneTwoAndThree(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03); // [0xc17b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndScore
	// void AddProgressionEventWithOneTwoAndScore(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, int32_t Score); // [0xc179e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndMergeFields
	// void AddProgressionEventWithOneTwoAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc17820] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndFields
	// void AddProgressionEventWithOneTwoAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc17660] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneScoreAndMergeFields
	// void AddProgressionEventWithOneScoreAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, int32_t Score, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc174b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneScoreAndFields
	// void AddProgressionEventWithOneScoreAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, int32_t Score, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc17300] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndTwo
	// void AddProgressionEventWithOneAndTwo(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02); // [0xc171d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndScore
	// void AddProgressionEventWithOneAndScore(EGAProgressionStatus ProgressionStatus, FString Progression01, int32_t Score);   // [0xc170b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndMergeFields
	// void AddProgressionEventWithOneAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc16f40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndFields
	// void AddProgressionEventWithOneAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc16dd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOne
	// void AddProgressionEventWithOne(EGAProgressionStatus ProgressionStatus, FString Progression01);                          // [0xc16d00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddErrorEventWithMergeFields
	// void AddErrorEventWithMergeFields(EGAErrorSeverity Severity, FString Message, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc16b90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddErrorEventWithFields
	// void AddErrorEventWithFields(EGAErrorSeverity Severity, FString Message, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc16a20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddErrorEvent
	// void AddErrorEvent(EGAErrorSeverity Severity, FString Message);                                                          // [0xc16950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddDesignEventWithValueAndMergeFields
	// void AddDesignEventWithValueAndMergeFields(FString EventId, float Value, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc167e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddDesignEventWithValueAndFields
	// void AddDesignEventWithValueAndFields(FString EventId, float Value, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc16670] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddDesignEventWithValue
	// void AddDesignEventWithValue(FString EventId, float Value);                                                              // [0xc165a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddDesignEventWithMergeFields
	// void AddDesignEventWithMergeFields(FString EventId, TArray<FGameAnalyticsCustomEventField>& CustomFields);               // [0xc16480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddDesignEventWithFields
	// void AddDesignEventWithFields(FString EventId, TArray<FGameAnalyticsCustomEventField>& CustomFields);                    // [0xc16360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddDesignEvent
	// void AddDesignEvent(FString EventId);                                                                                    // [0xc162d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventWithMergeFields
	// void AddBusinessEventWithMergeFields(FString currency, int32_t amount, FString ItemType, FString ItemId, FString CartType, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc16060] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventWithFields
	// void AddBusinessEventWithFields(FString currency, int32_t amount, FString ItemType, FString ItemId, FString CartType, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc15df0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventIOSWithMergeFields
	// void AddBusinessEventIOSWithMergeFields(FString currency, int32_t amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc15b30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventIOSWithFields
	// void AddBusinessEventIOSWithFields(FString currency, int32_t amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc15b30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventIOS
	// void AddBusinessEventIOS(FString currency, int32_t amount, FString ItemType, FString ItemId, FString CartType, FString Receipt); // [0xc15900] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventAndroidWithMergeFields
	// void AddBusinessEventAndroidWithMergeFields(FString currency, int32_t amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, FString Signature, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc155e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventAndroidWithFields
	// void AddBusinessEventAndroidWithFields(FString currency, int32_t amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, FString Signature, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc155e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventAndroid
	// void AddBusinessEventAndroid(FString currency, int32_t amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, FString Signature); // [0xc15350] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventAndAutoFetchReceiptWithMergeFields
	// void AddBusinessEventAndAutoFetchReceiptWithMergeFields(FString currency, int32_t amount, FString ItemType, FString ItemId, FString CartType, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc150e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventAndAutoFetchReceiptWithFields
	// void AddBusinessEventAndAutoFetchReceiptWithFields(FString currency, int32_t amount, FString ItemType, FString ItemId, FString CartType, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc150e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventAndAutoFetchReceipt
	// void AddBusinessEventAndAutoFetchReceipt(FString currency, int32_t amount, FString ItemType, FString ItemId, FString CartType); // [0xc14f10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEvent
	// void AddBusinessEvent(FString currency, int32_t amount, FString ItemType, FString ItemId, FString CartType);             // [0xc14d40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEventWithNoAdReasonAndMergeFields
	// void AddAdEventWithNoAdReasonAndMergeFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, EGAAdError noAdReason, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc14af0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEventWithNoAdReasonAndFields
	// void AddAdEventWithNoAdReasonAndFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, EGAAdError noAdReason, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc14af0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEventWithNoAdReason
	// void AddAdEventWithNoAdReason(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, EGAAdError noAdReason); // [0xc14940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEventWithMergeFields
	// void AddAdEventWithMergeFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc14740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEventWithFields
	// void AddAdEventWithFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc14740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEventWithDurationAndMergeFields
	// void AddAdEventWithDurationAndMergeFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, int64_t Duration, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc144f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEventWithDurationAndFields
	// void AddAdEventWithDurationAndFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, int64_t Duration, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0xc144f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEventWithDuration
	// void AddAdEventWithDuration(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, int64_t Duration); // [0xc14340] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEvent
	// void AddAdEvent(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement);                           // [0xc141d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/GameAnalytics.GameAnalyticsCustomEventField
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameAnalyticsCustomEventField
{ 
	FString                                            Key;                                                        // 0x0000   (0x0010)  
	FString                                            Value;                                                      // 0x0010   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UGameAnalytics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGameAnalyticsCustomEventField) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FGameAnalyticsCustomEventField, Key) == 0x0000);
static_assert(offsetof(FGameAnalyticsCustomEventField, Value) == 0x0010);
