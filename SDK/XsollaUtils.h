
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/XsollaUtils.EXsollaVariantTypes
/// Size: 0x01 (1 bytes)
enum class EXsollaVariantTypes : uint8_t
{
	EXsollaVariantTypes__Empty                                                       = 0,
	EXsollaVariantTypes__Ansichar                                                    = 1,
	EXsollaVariantTypes__Bool                                                        = 2,
	EXsollaVariantTypes__Box                                                         = 3,
	EXsollaVariantTypes__BoxSphereBounds                                             = 4,
	EXsollaVariantTypes__ByteArray                                                   = 5,
	EXsollaVariantTypes__Color                                                       = 6,
	EXsollaVariantTypes__DateTime                                                    = 7,
	EXsollaVariantTypes__Double                                                      = 8,
	EXsollaVariantTypes__Enum                                                        = 9,
	EXsollaVariantTypes__Float                                                       = 10,
	EXsollaVariantTypes__Guid                                                        = 11,
	EXsollaVariantTypes__Int8                                                        = 12,
	EXsollaVariantTypes__Int16                                                       = 13,
	EXsollaVariantTypes__Int32                                                       = 14,
	EXsollaVariantTypes__Int64                                                       = 15,
	EXsollaVariantTypes__IntRect                                                     = 16,
	EXsollaVariantTypes__LinearColor                                                 = 17,
	EXsollaVariantTypes__Matrix                                                      = 18,
	EXsollaVariantTypes__Name                                                        = 19,
	EXsollaVariantTypes__Plane                                                       = 20,
	EXsollaVariantTypes__Quat                                                        = 21,
	EXsollaVariantTypes__RandomStream                                                = 22,
	EXsollaVariantTypes__Rotator                                                     = 23,
	EXsollaVariantTypes__String                                                      = 24,
	EXsollaVariantTypes__Widechar                                                    = 25,
	EXsollaVariantTypes__Timespan                                                    = 26,
	EXsollaVariantTypes__Transform                                                   = 27,
	EXsollaVariantTypes__TwoVectors                                                  = 28,
	EXsollaVariantTypes__UInt8                                                       = 29,
	EXsollaVariantTypes__UInt16                                                      = 30,
	EXsollaVariantTypes__UInt32                                                      = 31,
	EXsollaVariantTypes__UInt64                                                      = 32,
	EXsollaVariantTypes__Vector                                                      = 33,
	EXsollaVariantTypes__Vector2d                                                    = 34,
	EXsollaVariantTypes__Vector4                                                     = 35,
	EXsollaVariantTypes__IntPoint                                                    = 36,
	EXsollaVariantTypes__IntVector                                                   = 37,
	EXsollaVariantTypes__NetworkGUID                                                 = 38,
	EXsollaVariantTypes__Custom                                                      = 64
};

/// Enum /Script/XsollaUtils.EXsollaPublishingPlatform
/// Size: 0x01 (1 bytes)
enum class EXsollaPublishingPlatform : uint8_t
{
	EXsollaPublishingPlatform__playstation_network                                   = 0,
	EXsollaPublishingPlatform__xbox_live                                             = 1,
	EXsollaPublishingPlatform__xsolla                                                = 2,
	EXsollaPublishingPlatform__pc_standalone                                         = 3,
	EXsollaPublishingPlatform__nintendo_shop                                         = 4,
	EXsollaPublishingPlatform__google_play                                           = 5,
	EXsollaPublishingPlatform__app_store_ios                                         = 6,
	EXsollaPublishingPlatform__android_standalone                                    = 7,
	EXsollaPublishingPlatform__ios_standalone                                        = 8,
	EXsollaPublishingPlatform__android_other                                         = 9,
	EXsollaPublishingPlatform__ios_other                                             = 10,
	EXsollaPublishingPlatform__pc_other                                              = 11
};

/// Class /Script/XsollaUtils.XsollaDemoGameModeBase
/// Size: 0x02D0 (720 bytes) (0x0002C0 - 0x0002D0) align 8 MaxSize: 0x02D0
class AXsollaDemoGameModeBase : public AGameModeBase
{ 
public:
	class UClass*                                      LoginDemo;                                                  // 0x02C0   (0x0008)  
	class UClass*                                      StoreDemo;                                                  // 0x02C8   (0x0008)  


	/// Functions
	// Function /Script/XsollaUtils.XsollaDemoGameModeBase.GetStoreDemo
	// class UClass* GetStoreDemo();                                                                                            // [0xc85f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaUtils.XsollaDemoGameModeBase.GetLoginDemo
	// class UClass* GetLoginDemo();                                                                                            // [0xc85e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/XsollaUtils.XsollaUtilsImageLoader
/// Size: 0x00C8 (200 bytes) (0x000028 - 0x0000C8) align 8 MaxSize: 0x00C8
class UXsollaUtilsImageLoader : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0028   (0x00A0)  MISSED


	/// Functions
	// Function /Script/XsollaUtils.XsollaUtilsImageLoader.LoadImage
	// void LoadImage(FString URL, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback);                       // [0xc860e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/XsollaUtils.XsollaUtilsLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UXsollaUtilsLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/XsollaUtils.XsollaUtilsLibrary.SetPartnerInfo
	// void SetPartnerInfo(FString Referral, FString ReferralVersion);                                                          // [0xc862f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XsollaUtils.XsollaUtilsLibrary.MakeDateTimeFromTimestamp
	// FDateTime MakeDateTimeFromTimestamp(int64_t Time);                                                                       // [0xc86260] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/XsollaUtils.XsollaUtilsLibrary.GetSecondsFromUnixTimestamp
	// int64_t GetSecondsFromUnixTimestamp(FDateTime& DateTime);                                                                // [0xc85eb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/XsollaUtils.XsollaUtilsLibrary.GetImageLoader
	// class UXsollaUtilsImageLoader* GetImageLoader();                                                                         // [0xc85e40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XsollaUtils.XsollaUtilsLibrary.GetDefaultObject
	// void GetDefaultObject(class UClass* ObjectClass, class UObject*& DefaultObj);                                            // [0xc85d70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/XsollaUtils.XsollaUtilsLibrary.Conv_StringToXsollaJsonVariant
	// FXsollaJsonVariant Conv_StringToXsollaJsonVariant(FString Value);                                                        // [0xc85b20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XsollaUtils.XsollaUtilsLibrary.Conv_IntToXsollaJsonVariant
	// FXsollaJsonVariant Conv_IntToXsollaJsonVariant(int32_t Value);                                                           // [0xc85a80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XsollaUtils.XsollaUtilsLibrary.Conv_FloatToXsollaJsonVariant
	// FXsollaJsonVariant Conv_FloatToXsollaJsonVariant(float Value);                                                           // [0xc859e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XsollaUtils.XsollaUtilsLibrary.Conv_BoolToXsollaJsonVariant
	// FXsollaJsonVariant Conv_BoolToXsollaJsonVariant(bool Value);                                                             // [0xc85930] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/XsollaUtils.XsollaUtilsTokenParser
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UXsollaUtilsTokenParser : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/XsollaUtils.XsollaUtilsTokenParser.GetStringTokenParam
	// bool GetStringTokenParam(FString Token, FString ParamName, FString& ParamValue);                                         // [0xc85f80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaUtils.XsollaUtilsTokenParser.GetBoolTokenParam
	// bool GetBoolTokenParam(FString Token, FString ParamName, bool& ParamValue);                                              // [0xc85c30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/XsollaUtils.XsollaWorldObject
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UXsollaWorldObject : public UObject
{ 
public:
	class UUserWidget*                                 Owner;                                                      // 0x0028   (0x0008)  
};

/// Struct /Script/XsollaUtils.XsollaConsumable
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FXsollaConsumable
{ 
	int32_t                                            usages_count;                                               // 0x0000   (0x0004)  
};

/// Struct /Script/XsollaUtils.XsollaExpirationPeriod
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FXsollaExpirationPeriod
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Type;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/XsollaUtils.XsollaItemOptions
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FXsollaItemOptions
{ 
	FXsollaConsumable                                  consumable;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FXsollaExpirationPeriod                            expiration_period;                                          // 0x0008   (0x0018)  
};

/// Struct /Script/XsollaUtils.XsollaVirtualCurrencyCalculatedPrice
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FXsollaVirtualCurrencyCalculatedPrice
{ 
	FString                                            amount;                                                     // 0x0000   (0x0010)  
	FString                                            amount_without_discount;                                    // 0x0010   (0x0010)  
};

/// Struct /Script/XsollaUtils.XsollaVirtualCurrencyPrice
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FXsollaVirtualCurrencyPrice
{ 
	FString                                            sku;                                                        // 0x0000   (0x0010)  
	bool                                               is_default;                                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            amount;                                                     // 0x0014   (0x0004)  
	int32_t                                            amount_without_discount;                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            image_url;                                                  // 0x0020   (0x0010)  
	FString                                            Name;                                                       // 0x0030   (0x0010)  
	FString                                            Description;                                                // 0x0040   (0x0010)  
	FString                                            Type;                                                       // 0x0050   (0x0010)  
	FXsollaVirtualCurrencyCalculatedPrice              calculated_price;                                           // 0x0060   (0x0020)  
};

/// Struct /Script/XsollaUtils.XsollaPrice
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FXsollaPrice
{ 
	FString                                            amount;                                                     // 0x0000   (0x0010)  
	FString                                            amount_without_discount;                                    // 0x0010   (0x0010)  
	FString                                            currency;                                                   // 0x0020   (0x0010)  
};

/// Struct /Script/XsollaUtils.XsollaItemGroup
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FXsollaItemGroup
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            external_id;                                                // 0x0008   (0x0010)  
	FString                                            Name;                                                       // 0x0018   (0x0010)  
	FString                                            Description;                                                // 0x0028   (0x0010)  
	FString                                            image_url;                                                  // 0x0038   (0x0010)  
	int32_t                                            Level;                                                      // 0x0048   (0x0004)  
	int32_t                                            order;                                                      // 0x004C   (0x0004)  
	FString                                            parent_external_id;                                         // 0x0050   (0x0010)  
};

/// Struct /Script/XsollaUtils.XsollaItemAttributeValue
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FXsollaItemAttributeValue
{ 
	FString                                            external_id;                                                // 0x0000   (0x0010)  
	FString                                            Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/XsollaUtils.XsollaItemAttribute
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FXsollaItemAttribute
{ 
	FString                                            external_id;                                                // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	TArray<FXsollaItemAttributeValue>                  values;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/XsollaUtils.XsollaUnitItem
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FXsollaUnitItem
{ 
	FString                                            sku;                                                        // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            Type;                                                       // 0x0020   (0x0010)  
	FString                                            drm_name;                                                   // 0x0030   (0x0010)  
	FString                                            drm_sku;                                                    // 0x0040   (0x0010)  
};

/// Struct /Script/XsollaUtils.XsollaRewardItem
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FXsollaRewardItem
{ 
	FString                                            sku;                                                        // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            Type;                                                       // 0x0020   (0x0010)  
	FString                                            virtual_item_type;                                          // 0x0030   (0x0010)  
	FString                                            Description;                                                // 0x0040   (0x0010)  
	FString                                            image_url;                                                  // 0x0050   (0x0010)  
	TArray<FXsollaUnitItem>                            unit_items;                                                 // 0x0060   (0x0010)  
};

/// Struct /Script/XsollaUtils.XsollaBonusItem
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FXsollaBonusItem
{ 
	FXsollaRewardItem                                  item;                                                       // 0x0000   (0x0070)  
	int32_t                                            quantity;                                                   // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/XsollaUtils.XsollaJsonVariant
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FXsollaJsonVariant
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/XsollaUtils.XsollaParameters
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FXsollaParameters
{ 
	TMap<FString, FXsollaJsonVariant>                  Parameters;                                                 // 0x0000   (0x0050)  
};

#pragma pack(pop)


static_assert(sizeof(AXsollaDemoGameModeBase) == 0x02D0); // 720 bytes (0x0002C0 - 0x0002D0)
static_assert(sizeof(UXsollaUtilsImageLoader) == 0x00C8); // 200 bytes (0x000028 - 0x0000C8)
static_assert(sizeof(UXsollaUtilsLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UXsollaUtilsTokenParser) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UXsollaWorldObject) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FXsollaConsumable) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FXsollaExpirationPeriod) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FXsollaItemOptions) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FXsollaVirtualCurrencyCalculatedPrice) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FXsollaVirtualCurrencyPrice) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FXsollaPrice) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FXsollaItemGroup) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FXsollaItemAttributeValue) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FXsollaItemAttribute) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FXsollaUnitItem) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FXsollaRewardItem) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FXsollaBonusItem) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FXsollaJsonVariant) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FXsollaParameters) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(AXsollaDemoGameModeBase, LoginDemo) == 0x02C0);
static_assert(offsetof(AXsollaDemoGameModeBase, StoreDemo) == 0x02C8);
static_assert(offsetof(UXsollaWorldObject, Owner) == 0x0028);
static_assert(offsetof(FXsollaExpirationPeriod, Type) == 0x0008);
static_assert(offsetof(FXsollaItemOptions, consumable) == 0x0000);
static_assert(offsetof(FXsollaItemOptions, expiration_period) == 0x0008);
static_assert(offsetof(FXsollaVirtualCurrencyCalculatedPrice, amount) == 0x0000);
static_assert(offsetof(FXsollaVirtualCurrencyCalculatedPrice, amount_without_discount) == 0x0010);
static_assert(offsetof(FXsollaVirtualCurrencyPrice, sku) == 0x0000);
static_assert(offsetof(FXsollaVirtualCurrencyPrice, image_url) == 0x0020);
static_assert(offsetof(FXsollaVirtualCurrencyPrice, Name) == 0x0030);
static_assert(offsetof(FXsollaVirtualCurrencyPrice, Description) == 0x0040);
static_assert(offsetof(FXsollaVirtualCurrencyPrice, Type) == 0x0050);
static_assert(offsetof(FXsollaVirtualCurrencyPrice, calculated_price) == 0x0060);
static_assert(offsetof(FXsollaPrice, amount) == 0x0000);
static_assert(offsetof(FXsollaPrice, amount_without_discount) == 0x0010);
static_assert(offsetof(FXsollaPrice, currency) == 0x0020);
static_assert(offsetof(FXsollaItemGroup, external_id) == 0x0008);
static_assert(offsetof(FXsollaItemGroup, Name) == 0x0018);
static_assert(offsetof(FXsollaItemGroup, Description) == 0x0028);
static_assert(offsetof(FXsollaItemGroup, image_url) == 0x0038);
static_assert(offsetof(FXsollaItemGroup, parent_external_id) == 0x0050);
static_assert(offsetof(FXsollaItemAttributeValue, external_id) == 0x0000);
static_assert(offsetof(FXsollaItemAttributeValue, Value) == 0x0010);
static_assert(offsetof(FXsollaItemAttribute, external_id) == 0x0000);
static_assert(offsetof(FXsollaItemAttribute, Name) == 0x0010);
static_assert(offsetof(FXsollaItemAttribute, values) == 0x0020);
static_assert(offsetof(FXsollaUnitItem, sku) == 0x0000);
static_assert(offsetof(FXsollaUnitItem, Name) == 0x0010);
static_assert(offsetof(FXsollaUnitItem, Type) == 0x0020);
static_assert(offsetof(FXsollaUnitItem, drm_name) == 0x0030);
static_assert(offsetof(FXsollaUnitItem, drm_sku) == 0x0040);
static_assert(offsetof(FXsollaRewardItem, sku) == 0x0000);
static_assert(offsetof(FXsollaRewardItem, Name) == 0x0010);
static_assert(offsetof(FXsollaRewardItem, Type) == 0x0020);
static_assert(offsetof(FXsollaRewardItem, virtual_item_type) == 0x0030);
static_assert(offsetof(FXsollaRewardItem, Description) == 0x0040);
static_assert(offsetof(FXsollaRewardItem, image_url) == 0x0050);
static_assert(offsetof(FXsollaRewardItem, unit_items) == 0x0060);
static_assert(offsetof(FXsollaBonusItem, item) == 0x0000);
static_assert(offsetof(FXsollaParameters, Parameters) == 0x0000);
