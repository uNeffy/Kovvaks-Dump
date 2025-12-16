
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
/// dependency: XsollaUtils

#pragma pack(push, 0x1)

/// Enum /Script/XsollaStore.EXsollaOrderStatus
/// Size: 0x01 (1 bytes)
enum class EXsollaOrderStatus : uint8_t
{
	EXsollaOrderStatus__Unknown                                                      = 0,
	EXsollaOrderStatus__New                                                          = 1,
	EXsollaOrderStatus__Paid                                                         = 2,
	EXsollaOrderStatus__Done                                                         = 3,
	EXsollaOrderStatus__Canceled                                                     = 4
};

/// Enum /Script/XsollaStore.EXsollaPaymentRedirectStatusManual
/// Size: 0x01 (1 bytes)
enum class EXsollaPaymentRedirectStatusManual : uint8_t
{
	EXsollaPaymentRedirectStatusManual__none                                         = 0,
	EXsollaPaymentRedirectStatusManual__vc                                           = 1,
	EXsollaPaymentRedirectStatusManual__successful                                   = 2,
	EXsollaPaymentRedirectStatusManual__successful_or_canceled                       = 3,
	EXsollaPaymentRedirectStatusManual__any                                          = 4
};

/// Enum /Script/XsollaStore.EXsollaPaymentRedirectCondition
/// Size: 0x01 (1 bytes)
enum class EXsollaPaymentRedirectCondition : uint8_t
{
	EXsollaPaymentRedirectCondition__none                                            = 0,
	EXsollaPaymentRedirectCondition__successful                                      = 1,
	EXsollaPaymentRedirectCondition__successful_or_canceled                          = 2,
	EXsollaPaymentRedirectCondition__any                                             = 3
};

/// Enum /Script/XsollaStore.EXsollaPaymentUiVersion
/// Size: 0x01 (1 bytes)
enum class EXsollaPaymentUiVersion : uint8_t
{
	EXsollaPaymentUiVersion__not_specified                                           = 0,
	EXsollaPaymentUiVersion__desktop                                                 = 1,
	EXsollaPaymentUiVersion__mobile                                                  = 2
};

/// Enum /Script/XsollaStore.EXsollaPaymentUiTheme
/// Size: 0x01 (1 bytes)
enum class EXsollaPaymentUiTheme : uint8_t
{
	EXsollaPaymentUiTheme__default_light                                             = 0,
	EXsollaPaymentUiTheme__default_dark                                              = 1,
	EXsollaPaymentUiTheme__dark                                                      = 2,
	EXsollaPaymentUiTheme__ps4_default_light                                         = 3,
	EXsollaPaymentUiTheme__ps4_default_dark                                          = 4
};

/// Enum /Script/XsollaStore.EXsollaPaymentUiSize
/// Size: 0x01 (1 bytes)
enum class EXsollaPaymentUiSize : uint8_t
{
	EXsollaPaymentUiSize__small                                                      = 0,
	EXsollaPaymentUiSize__medium                                                     = 1,
	EXsollaPaymentUiSize__large                                                      = 2
};

/// Class /Script/XsollaStore.XsollaStoreLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UXsollaStoreLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/XsollaStore.XsollaStoreLibrary.GetStoreSettings
	// class UXsollaStoreSettings* GetStoreSettings();                                                                          // [0xc72e90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XsollaStore.XsollaStoreLibrary.GetCurrencyLibrary
	// class UDataTable* GetCurrencyLibrary();                                                                                  // [0xc72650] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreLibrary.FormatPrice
	// FString FormatPrice(float amount, FString currency);                                                                     // [0xc724e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XsollaStore.XsollaStoreLibrary.Equal_StoreCartStoreCart
	// bool Equal_StoreCartStoreCart(FStoreCart& A, FStoreCart& B);                                                             // [0xc71350] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/XsollaStore.XsollaStoreSaveData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FXsollaStoreSaveData
{ 
	FString                                            CartId;                                                     // 0x0000   (0x0010)  
	FString                                            CartCurrency;                                               // 0x0010   (0x0010)  
};

/// Class /Script/XsollaStore.XsollaStoreSave
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UXsollaStoreSave : public USaveGame
{ 
public:
	FXsollaStoreSaveData                               CartData;                                                   // 0x0028   (0x0020)  
};

/// Class /Script/XsollaStore.XsollaStoreSettings
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UXsollaStoreSettings : public UObject
{ 
public:
	FString                                            ProjectId;                                                  // 0x0028   (0x0010)  
	class UClass*                                      OverrideBrowserWidgetClass;                                 // 0x0038   (0x0008)  
	bool                                               UsePlatformBrowser;                                         // 0x0040   (0x0001)  
	bool                                               UseCrossPlatformAccountLinking;                             // 0x0041   (0x0001)  
	EXsollaPublishingPlatform                          platform;                                                   // 0x0042   (0x0001)  
	bool                                               EnableSandbox;                                              // 0x0043   (0x0001)  
	bool                                               EnableSandboxInShippingBuild;                               // 0x0044   (0x0001)  
	bool                                               BuildForSteam;                                              // 0x0045   (0x0001)  
	EXsollaPaymentUiTheme                              PaymentInterfaceTheme;                                      // 0x0046   (0x0001)  
	EXsollaPaymentUiSize                               PaymentInterfaceSize;                                       // 0x0047   (0x0001)  
	EXsollaPaymentUiVersion                            PaymentInterfaceVersion;                                    // 0x0048   (0x0001)  
	bool                                               OverrideRedirectPolicy;                                     // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x004A   (0x0006)  MISSED
	FString                                            ReturnUrl;                                                  // 0x0050   (0x0010)  
	EXsollaPaymentRedirectCondition                    RedirectCondition;                                          // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            RedirectDelay;                                              // 0x0064   (0x0004)  
	EXsollaPaymentRedirectStatusManual                 RedirectStatusManual;                                       // 0x0068   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	FString                                            RedirectButtonCaption;                                      // 0x0070   (0x0010)  
	FString                                            DemoProjectID;                                              // 0x0080   (0x0010)  
	bool                                               UseDeepLinking;                                             // 0x0090   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	FString                                            RedirectURL;                                                // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/XsollaStore.XsollaStoreSettings.SetupDefaultDemoSettings
	// void SetupDefaultDemoSettings();                                                                                         // [0xc73ee0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/XsollaStore.XsollaStoreSubsystem
/// Size: 0x01A8 (424 bytes) (0x000030 - 0x0001A8) align 8 MaxSize: 0x01A8
class UXsollaStoreSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	SDK_UNDEFINED(16,1399) /* FMulticastInlineDelegate */ __um(OnCartUpdate);                                      // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x150];                                     // 0x0050   (0x0150)  MISSED
	class UClass*                                      DefaultBrowserWidgetClass;                                  // 0x01A0   (0x0008)  


	/// Functions
	// Function /Script/XsollaStore.XsollaStoreSubsystem.UpdateVirtualItems
	// void UpdateVirtualItems(FString Locale, FString country, TArray<FString>& AdditionalFields, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback, int32_t limit, int32_t Offset); // [0xc74c10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.UpdateVirtualCurrencyPackages
	// void UpdateVirtualCurrencyPackages(FString Locale, FString country, TArray<FString>& AdditionalFields, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback, int32_t limit, int32_t Offset); // [0xc74930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.UpdateVirtualCurrencies
	// void UpdateVirtualCurrencies(FString Locale, FString country, TArray<FString>& AdditionalFields, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback, int32_t limit, int32_t Offset); // [0xc74650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.UpdateItemGroups
	// void UpdateItemGroups(FString Locale, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback, int32_t limit, int32_t Offset); // [0xc74460] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.UpdateCart
	// void UpdateCart(FString AuthToken, FString CartId, FString currency, FString Locale, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc741e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.UpdateBundles
	// void UpdateBundles(FString Locale, FString country, TArray<FString>& AdditionalFields, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback, int32_t limit, int32_t Offset); // [0xc73f00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.RemoveFromCart
	// void RemoveFromCart(FString AuthToken, FString CartId, FString ItemSKU, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc73cc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.RedeemPromocode
	// void RedeemPromocode(FString AuthToken, FString PromocodeCode, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc73af0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.ParseBattlepass
	// FStoreBattlepassData ParseBattlepass(FString BattlepassInfo);                                                            // [0xc73920] Final|Native|Public|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.LaunchPaymentConsole
	// void LaunchPaymentConsole(class UObject* WorldContextObject, FString AccessToken, class UUserWidget*& BrowserWidget);    // [0xc737f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.IsItemInCart
	// bool IsItemInCart(FString ItemSKU);                                                                                      // [0xc73740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.Initialize
	// void Initialize(FString InProjectId);                                                                                    // [0xc736a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.GetVirtualItemsWithoutGroup
	// TArray<FStoreItem> GetVirtualItemsWithoutGroup();                                                                        // [0xc73650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.GetVirtualItems
	// TArray<FStoreItem> GetVirtualItems(FString GroupFilter);                                                                 // [0xc73590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.GetVirtualCurrencyPackages
	// TArray<FVirtualCurrencyPackage> GetVirtualCurrencyPackages();                                                            // [0xc73550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.GetVirtualCurrencyPackage
	// void GetVirtualCurrencyPackage(FString PackageSKU, FString Locale, FString country, TArray<FString>& AdditionalFields, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc732a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.GetVirtualCurrencyName
	// FString GetVirtualCurrencyName(FString CurrencySKU);                                                                     // [0xc731b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.GetVirtualCurrencyData
	// TArray<FVirtualCurrency> GetVirtualCurrencyData();                                                                       // [0xc73170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.GetVirtualCurrency
	// void GetVirtualCurrency(FString CurrencySKU, FString Locale, FString country, TArray<FString>& AdditionalFields, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc72ec0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.GetSpecifiedBundle
	// void GetSpecifiedBundle(FString sku, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback);              // [0xc72d10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.GetPromocodeRewards
	// void GetPromocodeRewards(FString AuthToken, FString PromocodeCode, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc72b40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.GetPendingPaystationUrl
	// FString GetPendingPaystationUrl();                                                                                       // [0xc72b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.GetItemsListBySpecifiedGroup
	// void GetItemsListBySpecifiedGroup(FString ExternalId, FString Locale, FString country, TArray<FString>& AdditionalFields, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback, int32_t limit, int32_t Offset); // [0xc727d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.GetItemsData
	// FStoreItemsData GetItemsData();                                                                                          // [0xc72770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.GetItemName
	// FString GetItemName(FString ItemSKU);                                                                                    // [0xc72680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.GetCart
	// FStoreCart GetCart();                                                                                                    // [0xc72610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.FindVirtualCurrencyPackageBySku
	// FVirtualCurrencyPackage FindVirtualCurrencyPackageBySku(FString ItemSKU, bool& bHasFound);                               // [0xc723e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.FindVirtualCurrencyBySku
	// FVirtualCurrency FindVirtualCurrencyBySku(FString CurrencySKU, bool& bHasFound);                                         // [0xc722b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.FindItemBySku
	// FStoreItem FindItemBySku(FString ItemSKU, bool& bHasFound);                                                              // [0xc721b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.FillCartById
	// void FillCartById(FString AuthToken, FString CartId, TArray<FStoreCartItem>& Items, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc71e90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.FetchPaymentToken
	// void FetchPaymentToken(FString AuthToken, FString ItemSKU, FString currency, FString country, FString Locale, FXsollaParameters CustomParameters, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc71ac0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.FetchCartPaymentToken
	// void FetchCartPaymentToken(FString AuthToken, FString CartId, FString currency, FString country, FString Locale, FXsollaParameters CustomParameters, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc716f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.ClearCart
	// void ClearCart(FString AuthToken, FString CartId, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc71180] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.CheckOrder
	// void CheckOrder(FString AuthToken, int32_t OrderID, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc70fd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.BuyItemWithVirtualCurrency
	// void BuyItemWithVirtualCurrency(FString AuthToken, FString ItemSKU, FString CurrencySKU, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc70db0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaStore.XsollaStoreSubsystem.AddToCart
	// void AddToCart(FString AuthToken, FString CartId, FString ItemSKU, int32_t quantity, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc70b50] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/XsollaStore.StoreCartItem
/// Size: 0x0100 (256 bytes) (0x000000 - 0x000100) align 8 MaxSize: 0x0100
struct FStoreCartItem
{ 
	FString                                            sku;                                                        // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	TArray<FXsollaItemAttribute>                       attributes;                                                 // 0x0020   (0x0010)  
	TArray<FXsollaItemGroup>                           Groups;                                                     // 0x0030   (0x0010)  
	FString                                            Description;                                                // 0x0040   (0x0010)  
	FString                                            long_description;                                           // 0x0050   (0x0010)  
	FString                                            Type;                                                       // 0x0060   (0x0010)  
	FString                                            virtual_item_type;                                          // 0x0070   (0x0010)  
	bool                                               is_free;                                                    // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0081   (0x0007)  MISSED
	FXsollaPrice                                       price;                                                      // 0x0088   (0x0030)  
	TArray<FXsollaVirtualCurrencyPrice>                vc_prices;                                                  // 0x00B8   (0x0010)  
	FString                                            image_url;                                                  // 0x00C8   (0x0010)  
	int32_t                                            quantity;                                                   // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	FXsollaItemOptions                                 inventory_options;                                          // 0x00E0   (0x0020)  
};

/// Struct /Script/XsollaStore.StoreCart
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FStoreCart
{ 
	FString                                            cart_id;                                                    // 0x0000   (0x0010)  
	FXsollaPrice                                       price;                                                      // 0x0010   (0x0030)  
	bool                                               is_free;                                                    // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<FStoreCartItem>                             Items;                                                      // 0x0048   (0x0010)  
};

/// Struct /Script/XsollaStore.XsollaOrderItem
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FXsollaOrderItem
{ 
	FString                                            sku;                                                        // 0x0000   (0x0010)  
	int32_t                                            quantity;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            is_free;                                                    // 0x0018   (0x0010)  
	FXsollaPrice                                       price;                                                      // 0x0028   (0x0030)  
};

/// Struct /Script/XsollaStore.XsollaOrderContent
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FXsollaOrderContent
{ 
	FXsollaPrice                                       price;                                                      // 0x0000   (0x0030)  
	FXsollaVirtualCurrencyPrice                        virtual_price;                                              // 0x0030   (0x0080)  
	FString                                            is_free;                                                    // 0x00B0   (0x0010)  
	TArray<FXsollaOrderItem>                           Items;                                                      // 0x00C0   (0x0010)  
};

/// Struct /Script/XsollaStore.StoreItemMediaList
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FStoreItemMediaList
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FString                                            URL;                                                        // 0x0010   (0x0010)  
};

/// Struct /Script/XsollaStore.VirtualCurrency
/// Size: 0x0100 (256 bytes) (0x000000 - 0x000100) align 8 MaxSize: 0x0100
struct FVirtualCurrency
{ 
	FString                                            sku;                                                        // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	TArray<FString>                                    Groups;                                                     // 0x0020   (0x0010)  
	TArray<FXsollaItemAttribute>                       attributes;                                                 // 0x0030   (0x0010)  
	FString                                            Type;                                                       // 0x0040   (0x0010)  
	FString                                            Description;                                                // 0x0050   (0x0010)  
	FString                                            image_url;                                                  // 0x0060   (0x0010)  
	bool                                               is_free;                                                    // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	FXsollaPrice                                       price;                                                      // 0x0078   (0x0030)  
	TArray<FXsollaVirtualCurrencyPrice>                virtual_prices;                                             // 0x00A8   (0x0010)  
	FXsollaItemOptions                                 inventory_options;                                          // 0x00B8   (0x0020)  
	FString                                            long_description;                                           // 0x00D8   (0x0010)  
	int32_t                                            order;                                                      // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	TArray<FStoreItemMediaList>                        media_list;                                                 // 0x00F0   (0x0010)  
};

/// Struct /Script/XsollaStore.VirtualCurrencyPackageContent
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FVirtualCurrencyPackageContent
{ 
	FString                                            sku;                                                        // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            Type;                                                       // 0x0020   (0x0010)  
	FString                                            Description;                                                // 0x0030   (0x0010)  
	FString                                            image_url;                                                  // 0x0040   (0x0010)  
	int32_t                                            quantity;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FXsollaItemOptions                                 inventory_options;                                          // 0x0058   (0x0020)  
};

/// Struct /Script/XsollaStore.VirtualCurrencyPackage
/// Size: 0x0168 (360 bytes) (0x000000 - 0x000168) align 8 MaxSize: 0x0168
struct FVirtualCurrencyPackage
{ 
	FString                                            sku;                                                        // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            Type;                                                       // 0x0020   (0x0010)  
	FString                                            Description;                                                // 0x0030   (0x0010)  
	FString                                            image_url;                                                  // 0x0040   (0x0010)  
	TArray<FXsollaItemAttribute>                       attributes;                                                 // 0x0050   (0x0010)  
	TArray<FXsollaItemGroup>                           Groups;                                                     // 0x0060   (0x0010)  
	FString                                            bundle_type;                                                // 0x0070   (0x0010)  
	bool                                               is_free;                                                    // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0081   (0x0007)  MISSED
	FXsollaPrice                                       price;                                                      // 0x0088   (0x0030)  
	TArray<FXsollaVirtualCurrencyPrice>                virtual_prices;                                             // 0x00B8   (0x0010)  
	FVirtualCurrencyPackageContent                     Content;                                                    // 0x00C8   (0x0078)  
	FString                                            long_description;                                           // 0x0140   (0x0010)  
	int32_t                                            order;                                                      // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0154   (0x0004)  MISSED
	TArray<FStoreItemMediaList>                        media_list;                                                 // 0x0158   (0x0010)  
};

/// Struct /Script/XsollaStore.StoreDiscount
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FStoreDiscount
{ 
	FString                                            percent;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/XsollaStore.StorePromocodeRewardData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FStorePromocodeRewardData
{ 
	TArray<FXsollaBonusItem>                           bonus;                                                      // 0x0000   (0x0010)  
	FStoreDiscount                                     discount;                                                   // 0x0010   (0x0010)  
	bool                                               is_selectable;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/XsollaStore.StoreBundleContent
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FStoreBundleContent
{ 
	FString                                            sku;                                                        // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            Type;                                                       // 0x0020   (0x0010)  
	FString                                            Description;                                                // 0x0030   (0x0010)  
	FString                                            image_url;                                                  // 0x0040   (0x0010)  
	int32_t                                            quantity;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FXsollaPrice                                       price;                                                      // 0x0058   (0x0030)  
	TArray<FXsollaVirtualCurrencyPrice>                virtual_prices;                                             // 0x0088   (0x0010)  
};

/// Struct /Script/XsollaStore.StoreBundle
/// Size: 0x0110 (272 bytes) (0x000000 - 0x000110) align 8 MaxSize: 0x0110
struct FStoreBundle
{ 
	FString                                            sku;                                                        // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	TArray<FXsollaItemGroup>                           Groups;                                                     // 0x0020   (0x0010)  
	TArray<FXsollaItemAttribute>                       attributes;                                                 // 0x0030   (0x0010)  
	FString                                            Type;                                                       // 0x0040   (0x0010)  
	FString                                            bundle_type;                                                // 0x0050   (0x0010)  
	FString                                            Description;                                                // 0x0060   (0x0010)  
	FString                                            image_url;                                                  // 0x0070   (0x0010)  
	FString                                            is_free;                                                    // 0x0080   (0x0010)  
	FXsollaPrice                                       price;                                                      // 0x0090   (0x0030)  
	FXsollaPrice                                       total_content_price;                                        // 0x00C0   (0x0030)  
	TArray<FXsollaVirtualCurrencyPrice>                virtual_prices;                                             // 0x00F0   (0x0010)  
	TArray<FStoreBundleContent>                        Content;                                                    // 0x0100   (0x0010)  
};

/// Struct /Script/XsollaStore.StoreListOfBundles
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FStoreListOfBundles
{ 
	TArray<FStoreBundle>                               Items;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/XsollaStore.StoreItem
/// Size: 0x0160 (352 bytes) (0x000000 - 0x000160) align 8 MaxSize: 0x0160
struct FStoreItem
{ 
	FString                                            sku;                                                        // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            Description;                                                // 0x0020   (0x0010)  
	FString                                            Type;                                                       // 0x0030   (0x0010)  
	FString                                            virtual_item_type;                                          // 0x0040   (0x0010)  
	TArray<FXsollaItemGroup>                           Groups;                                                     // 0x0050   (0x0010)  
	bool                                               is_free;                                                    // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	FXsollaPrice                                       price;                                                      // 0x0068   (0x0030)  
	TArray<FXsollaVirtualCurrencyPrice>                virtual_prices;                                             // 0x0098   (0x0010)  
	FString                                            image_url;                                                  // 0x00A8   (0x0010)  
	FXsollaItemOptions                                 inventory_options;                                          // 0x00B8   (0x0020)  
	FString                                            bundle_type;                                                // 0x00D8   (0x0010)  
	FXsollaPrice                                       total_content_price;                                        // 0x00E8   (0x0030)  
	TArray<FStoreBundleContent>                        Content;                                                    // 0x0118   (0x0010)  
	TArray<FXsollaItemAttribute>                       attributes;                                                 // 0x0128   (0x0010)  
	FString                                            long_description;                                           // 0x0138   (0x0010)  
	int32_t                                            order;                                                      // 0x0148   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x014C   (0x0004)  MISSED
	TArray<FStoreItemMediaList>                        media_list;                                                 // 0x0150   (0x0010)  
};

/// Struct /Script/XsollaStore.StoreItemsList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FStoreItemsList
{ 
	TArray<FStoreItem>                                 Items;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/XsollaStore.XsollaStoreCurrencySymbol
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FXsollaStoreCurrencySymbol
{ 
	FString                                            grapheme;                                                   // 0x0000   (0x0010)  
	FString                                            Format;                                                     // 0x0010   (0x0010)  
	bool                                               rtl;                                                        // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/XsollaStore.XsollaStoreCurrency
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FXsollaStoreCurrency : FTableRowBase
{ 
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FString                                            Description;                                                // 0x0018   (0x0010)  
	int32_t                                            fractionSize;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FXsollaStoreCurrencySymbol                         symbol;                                                     // 0x0030   (0x0028)  
};

/// Struct /Script/XsollaStore.StoreBattlepassRewardItem
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FStoreBattlepassRewardItem
{ 
	FString                                            sku;                                                        // 0x0000   (0x0010)  
	FString                                            Promocode;                                                  // 0x0010   (0x0010)  
	int32_t                                            quantity;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/XsollaStore.StoreBattlepassLevel
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FStoreBattlepassLevel
{ 
	int32_t                                            Tier;                                                       // 0x0000   (0x0004)  
	int32_t                                            Experience;                                                 // 0x0004   (0x0004)  
	FStoreBattlepassRewardItem                         FreeItem;                                                   // 0x0008   (0x0028)  
	FStoreBattlepassRewardItem                         PremiumItem;                                                // 0x0030   (0x0028)  
};

/// Struct /Script/XsollaStore.StoreBattlepassData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FStoreBattlepassData
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            ExpiryDate;                                                 // 0x0010   (0x0010)  
	TArray<FStoreBattlepassLevel>                      Levels;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/XsollaStore.VirtualCurrencyPackagesData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FVirtualCurrencyPackagesData
{ 
	TArray<FVirtualCurrencyPackage>                    Items;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/XsollaStore.VirtualCurrencyData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FVirtualCurrencyData
{ 
	TArray<FVirtualCurrency>                           Items;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/XsollaStore.StoreItemsData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FStoreItemsData
{ 
	TArray<FStoreItem>                                 Items;                                                      // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,1400) /* TSet<FString> */         __um(GroupIds);                                             // 0x0010   (0x0050)  
	TArray<FXsollaItemGroup>                           Groups;                                                     // 0x0060   (0x0010)  
};

/// Struct /Script/XsollaStore.XsollaOrder
/// Size: 0x00E8 (232 bytes) (0x000000 - 0x0000E8) align 8 MaxSize: 0x00E8
struct FXsollaOrder
{ 
	int32_t                                            order_id;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            status;                                                     // 0x0008   (0x0010)  
	FXsollaOrderContent                                Content;                                                    // 0x0018   (0x00D0)  
};

#pragma pack(pop)


static_assert(sizeof(UXsollaStoreLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FXsollaStoreSaveData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UXsollaStoreSave) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UXsollaStoreSettings) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UXsollaStoreSubsystem) == 0x01A8); // 424 bytes (0x000030 - 0x0001A8)
static_assert(sizeof(FStoreCartItem) == 0x0100); // 256 bytes (0x000000 - 0x000100)
static_assert(sizeof(FStoreCart) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FXsollaOrderItem) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FXsollaOrderContent) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FStoreItemMediaList) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FVirtualCurrency) == 0x0100); // 256 bytes (0x000000 - 0x000100)
static_assert(sizeof(FVirtualCurrencyPackageContent) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FVirtualCurrencyPackage) == 0x0168); // 360 bytes (0x000000 - 0x000168)
static_assert(sizeof(FStoreDiscount) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FStorePromocodeRewardData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FStoreBundleContent) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FStoreBundle) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(FStoreListOfBundles) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FStoreItem) == 0x0160); // 352 bytes (0x000000 - 0x000160)
static_assert(sizeof(FStoreItemsList) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FXsollaStoreCurrencySymbol) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FXsollaStoreCurrency) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FStoreBattlepassRewardItem) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FStoreBattlepassLevel) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FStoreBattlepassData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FVirtualCurrencyPackagesData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVirtualCurrencyData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FStoreItemsData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FXsollaOrder) == 0x00E8); // 232 bytes (0x000000 - 0x0000E8)
static_assert(offsetof(FXsollaStoreSaveData, CartId) == 0x0000);
static_assert(offsetof(FXsollaStoreSaveData, CartCurrency) == 0x0010);
static_assert(offsetof(UXsollaStoreSave, CartData) == 0x0028);
static_assert(offsetof(UXsollaStoreSettings, ProjectId) == 0x0028);
static_assert(offsetof(UXsollaStoreSettings, OverrideBrowserWidgetClass) == 0x0038);
static_assert(offsetof(UXsollaStoreSettings, platform) == 0x0042);
static_assert(offsetof(UXsollaStoreSettings, PaymentInterfaceTheme) == 0x0046);
static_assert(offsetof(UXsollaStoreSettings, PaymentInterfaceSize) == 0x0047);
static_assert(offsetof(UXsollaStoreSettings, PaymentInterfaceVersion) == 0x0048);
static_assert(offsetof(UXsollaStoreSettings, ReturnUrl) == 0x0050);
static_assert(offsetof(UXsollaStoreSettings, RedirectCondition) == 0x0060);
static_assert(offsetof(UXsollaStoreSettings, RedirectStatusManual) == 0x0068);
static_assert(offsetof(UXsollaStoreSettings, RedirectButtonCaption) == 0x0070);
static_assert(offsetof(UXsollaStoreSettings, DemoProjectID) == 0x0080);
static_assert(offsetof(UXsollaStoreSettings, RedirectURL) == 0x0098);
static_assert(offsetof(UXsollaStoreSubsystem, DefaultBrowserWidgetClass) == 0x01A0);
static_assert(offsetof(FStoreCartItem, sku) == 0x0000);
static_assert(offsetof(FStoreCartItem, Name) == 0x0010);
static_assert(offsetof(FStoreCartItem, attributes) == 0x0020);
static_assert(offsetof(FStoreCartItem, Groups) == 0x0030);
static_assert(offsetof(FStoreCartItem, Description) == 0x0040);
static_assert(offsetof(FStoreCartItem, long_description) == 0x0050);
static_assert(offsetof(FStoreCartItem, Type) == 0x0060);
static_assert(offsetof(FStoreCartItem, virtual_item_type) == 0x0070);
static_assert(offsetof(FStoreCartItem, price) == 0x0088);
static_assert(offsetof(FStoreCartItem, vc_prices) == 0x00B8);
static_assert(offsetof(FStoreCartItem, image_url) == 0x00C8);
static_assert(offsetof(FStoreCartItem, inventory_options) == 0x00E0);
static_assert(offsetof(FStoreCart, cart_id) == 0x0000);
static_assert(offsetof(FStoreCart, price) == 0x0010);
static_assert(offsetof(FStoreCart, Items) == 0x0048);
static_assert(offsetof(FXsollaOrderItem, sku) == 0x0000);
static_assert(offsetof(FXsollaOrderItem, is_free) == 0x0018);
static_assert(offsetof(FXsollaOrderItem, price) == 0x0028);
static_assert(offsetof(FXsollaOrderContent, price) == 0x0000);
static_assert(offsetof(FXsollaOrderContent, virtual_price) == 0x0030);
static_assert(offsetof(FXsollaOrderContent, is_free) == 0x00B0);
static_assert(offsetof(FXsollaOrderContent, Items) == 0x00C0);
static_assert(offsetof(FStoreItemMediaList, Type) == 0x0000);
static_assert(offsetof(FStoreItemMediaList, URL) == 0x0010);
static_assert(offsetof(FVirtualCurrency, sku) == 0x0000);
static_assert(offsetof(FVirtualCurrency, Name) == 0x0010);
static_assert(offsetof(FVirtualCurrency, Groups) == 0x0020);
static_assert(offsetof(FVirtualCurrency, attributes) == 0x0030);
static_assert(offsetof(FVirtualCurrency, Type) == 0x0040);
static_assert(offsetof(FVirtualCurrency, Description) == 0x0050);
static_assert(offsetof(FVirtualCurrency, image_url) == 0x0060);
static_assert(offsetof(FVirtualCurrency, price) == 0x0078);
static_assert(offsetof(FVirtualCurrency, virtual_prices) == 0x00A8);
static_assert(offsetof(FVirtualCurrency, inventory_options) == 0x00B8);
static_assert(offsetof(FVirtualCurrency, long_description) == 0x00D8);
static_assert(offsetof(FVirtualCurrency, media_list) == 0x00F0);
static_assert(offsetof(FVirtualCurrencyPackageContent, sku) == 0x0000);
static_assert(offsetof(FVirtualCurrencyPackageContent, Name) == 0x0010);
static_assert(offsetof(FVirtualCurrencyPackageContent, Type) == 0x0020);
static_assert(offsetof(FVirtualCurrencyPackageContent, Description) == 0x0030);
static_assert(offsetof(FVirtualCurrencyPackageContent, image_url) == 0x0040);
static_assert(offsetof(FVirtualCurrencyPackageContent, inventory_options) == 0x0058);
static_assert(offsetof(FVirtualCurrencyPackage, sku) == 0x0000);
static_assert(offsetof(FVirtualCurrencyPackage, Name) == 0x0010);
static_assert(offsetof(FVirtualCurrencyPackage, Type) == 0x0020);
static_assert(offsetof(FVirtualCurrencyPackage, Description) == 0x0030);
static_assert(offsetof(FVirtualCurrencyPackage, image_url) == 0x0040);
static_assert(offsetof(FVirtualCurrencyPackage, attributes) == 0x0050);
static_assert(offsetof(FVirtualCurrencyPackage, Groups) == 0x0060);
static_assert(offsetof(FVirtualCurrencyPackage, bundle_type) == 0x0070);
static_assert(offsetof(FVirtualCurrencyPackage, price) == 0x0088);
static_assert(offsetof(FVirtualCurrencyPackage, virtual_prices) == 0x00B8);
static_assert(offsetof(FVirtualCurrencyPackage, Content) == 0x00C8);
static_assert(offsetof(FVirtualCurrencyPackage, long_description) == 0x0140);
static_assert(offsetof(FVirtualCurrencyPackage, media_list) == 0x0158);
static_assert(offsetof(FStoreDiscount, percent) == 0x0000);
static_assert(offsetof(FStorePromocodeRewardData, bonus) == 0x0000);
static_assert(offsetof(FStorePromocodeRewardData, discount) == 0x0010);
static_assert(offsetof(FStoreBundleContent, sku) == 0x0000);
static_assert(offsetof(FStoreBundleContent, Name) == 0x0010);
static_assert(offsetof(FStoreBundleContent, Type) == 0x0020);
static_assert(offsetof(FStoreBundleContent, Description) == 0x0030);
static_assert(offsetof(FStoreBundleContent, image_url) == 0x0040);
static_assert(offsetof(FStoreBundleContent, price) == 0x0058);
static_assert(offsetof(FStoreBundleContent, virtual_prices) == 0x0088);
static_assert(offsetof(FStoreBundle, sku) == 0x0000);
static_assert(offsetof(FStoreBundle, Name) == 0x0010);
static_assert(offsetof(FStoreBundle, Groups) == 0x0020);
static_assert(offsetof(FStoreBundle, attributes) == 0x0030);
static_assert(offsetof(FStoreBundle, Type) == 0x0040);
static_assert(offsetof(FStoreBundle, bundle_type) == 0x0050);
static_assert(offsetof(FStoreBundle, Description) == 0x0060);
static_assert(offsetof(FStoreBundle, image_url) == 0x0070);
static_assert(offsetof(FStoreBundle, is_free) == 0x0080);
static_assert(offsetof(FStoreBundle, price) == 0x0090);
static_assert(offsetof(FStoreBundle, total_content_price) == 0x00C0);
static_assert(offsetof(FStoreBundle, virtual_prices) == 0x00F0);
static_assert(offsetof(FStoreBundle, Content) == 0x0100);
static_assert(offsetof(FStoreListOfBundles, Items) == 0x0000);
static_assert(offsetof(FStoreItem, sku) == 0x0000);
static_assert(offsetof(FStoreItem, Name) == 0x0010);
static_assert(offsetof(FStoreItem, Description) == 0x0020);
static_assert(offsetof(FStoreItem, Type) == 0x0030);
static_assert(offsetof(FStoreItem, virtual_item_type) == 0x0040);
static_assert(offsetof(FStoreItem, Groups) == 0x0050);
static_assert(offsetof(FStoreItem, price) == 0x0068);
static_assert(offsetof(FStoreItem, virtual_prices) == 0x0098);
static_assert(offsetof(FStoreItem, image_url) == 0x00A8);
static_assert(offsetof(FStoreItem, inventory_options) == 0x00B8);
static_assert(offsetof(FStoreItem, bundle_type) == 0x00D8);
static_assert(offsetof(FStoreItem, total_content_price) == 0x00E8);
static_assert(offsetof(FStoreItem, Content) == 0x0118);
static_assert(offsetof(FStoreItem, attributes) == 0x0128);
static_assert(offsetof(FStoreItem, long_description) == 0x0138);
static_assert(offsetof(FStoreItem, media_list) == 0x0150);
static_assert(offsetof(FStoreItemsList, Items) == 0x0000);
static_assert(offsetof(FXsollaStoreCurrencySymbol, grapheme) == 0x0000);
static_assert(offsetof(FXsollaStoreCurrencySymbol, Format) == 0x0010);
static_assert(offsetof(FXsollaStoreCurrency, Name) == 0x0008);
static_assert(offsetof(FXsollaStoreCurrency, Description) == 0x0018);
static_assert(offsetof(FXsollaStoreCurrency, symbol) == 0x0030);
static_assert(offsetof(FStoreBattlepassRewardItem, sku) == 0x0000);
static_assert(offsetof(FStoreBattlepassRewardItem, Promocode) == 0x0010);
static_assert(offsetof(FStoreBattlepassLevel, FreeItem) == 0x0008);
static_assert(offsetof(FStoreBattlepassLevel, PremiumItem) == 0x0030);
static_assert(offsetof(FStoreBattlepassData, Name) == 0x0000);
static_assert(offsetof(FStoreBattlepassData, ExpiryDate) == 0x0010);
static_assert(offsetof(FStoreBattlepassData, Levels) == 0x0020);
static_assert(offsetof(FVirtualCurrencyPackagesData, Items) == 0x0000);
static_assert(offsetof(FVirtualCurrencyData, Items) == 0x0000);
static_assert(offsetof(FStoreItemsData, Items) == 0x0000);
static_assert(offsetof(FStoreItemsData, Groups) == 0x0060);
static_assert(offsetof(FXsollaOrder, status) == 0x0008);
static_assert(offsetof(FXsollaOrder, Content) == 0x0018);
