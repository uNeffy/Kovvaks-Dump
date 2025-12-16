
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

/// Class /Script/GoogleAnalytics.GoogleAnalyticsBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGoogleAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetTrackingId
	// void SetTrackingId(FString TrackingId);                                                                                  // [0xc031d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetApplicationVersion
	// void SetApplicationVersion(FString Version);                                                                             // [0xc03140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetApplicationName
	// void SetApplicationName(FString Name);                                                                                   // [0xc030b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetApplicationID
	// void SetApplicationID(FString ID);                                                                                       // [0xc03020] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetAnonymizeIP
	// void SetAnonymizeIP(bool Anonymize);                                                                                     // [0xc02fa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleUserTiming
	// void RecordGoogleUserTiming(FString TimingCategory, int32_t TimingValue, FString TimingName, FString TimingLabel, TArray<FCustomDimension> CustomDimensions, TArray<FCustomMetric> CustomMetrics); // [0xc02c70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleSocialInteraction
	// void RecordGoogleSocialInteraction(FString SocialNetwork, FString SocialAction, FString SocialTarget, TArray<FCustomDimension> CustomDimensions, TArray<FCustomMetric> CustomMetrics); // [0xc02980] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleScreen
	// void RecordGoogleScreen(FString ScreenName, TArray<FCustomDimension> CustomDimensions, TArray<FCustomMetric> CustomMetrics); // [0xc02740] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleEvent
	// void RecordGoogleEvent(FString EventCategory, FString EventAction, FString EventLabel, int32_t EventValue, TArray<FCustomDimension> CustomDimensions, TArray<FCustomMetric> CustomMetrics); // [0xc02410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.GetTrackingId
	// FString GetTrackingId();                                                                                                 // [0xc02390] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GoogleAnalytics.GoogleAnalyticsSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UGoogleAnalyticsSettings : public UObject
{ 
public:
	bool                                               bEnableIDFACollection;                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/GoogleAnalytics.CustomMetric
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FCustomMetric
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	float                                              Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/GoogleAnalytics.CustomDimension
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FCustomDimension
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Value;                                                      // 0x0008   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UGoogleAnalyticsBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGoogleAnalyticsSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FCustomMetric) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FCustomDimension) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FCustomDimension, Value) == 0x0008);
