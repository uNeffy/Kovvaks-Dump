
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: XsollaUtils

#pragma pack(push, 0x1)

/// Class /Script/XsollaInventory.XsollaInventoryLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UXsollaInventoryLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/XsollaInventory.XsollaInventoryLibrary.GetInventorySettings
	// class UXsollaInventorySettings* GetInventorySettings();                                                                  // [0xc7bfa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/XsollaInventory.XsollaInventorySettings
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UXsollaInventorySettings : public UObject
{ 
public:
	FString                                            ProjectId;                                                  // 0x0028   (0x0010)  
	bool                                               UseCrossPlatformAccountLinking;                             // 0x0038   (0x0001)  
	EXsollaPublishingPlatform                          platform;                                                   // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
	FString                                            WebStoreURL;                                                // 0x0040   (0x0010)  
	FString                                            DemoProjectID;                                              // 0x0050   (0x0010)  
};

/// Class /Script/XsollaInventory.XsollaInventorySubsystem
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UXsollaInventorySubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED


	/// Functions
	// Function /Script/XsollaInventory.XsollaInventorySubsystem.UpdateVirtualCurrencyBalance
	// void UpdateVirtualCurrencyBalance(FString AuthToken, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc7cc20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaInventory.XsollaInventorySubsystem.UpdateSubscriptions
	// void UpdateSubscriptions(FString AuthToken, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback);       // [0xc7caa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaInventory.XsollaInventorySubsystem.UpdateInventory
	// void UpdateInventory(FString AuthToken, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback, int32_t limit, int32_t Offset); // [0xc7c8b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaInventory.XsollaInventorySubsystem.RedeemCoupon
	// void RedeemCoupon(FString AuthToken, FString CouponCode, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc7c6e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaInventory.XsollaInventorySubsystem.IsItemInInventory
	// bool IsItemInInventory(FString ItemSKU);                                                                                 // [0xc7c630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaInventory.XsollaInventorySubsystem.Initialize
	// void Initialize(FString InProjectId);                                                                                    // [0xc7c590] Final|Native|Public|BlueprintCallable 
	// Function /Script/XsollaInventory.XsollaInventorySubsystem.GetVirtualCurrencyBalanceBySku
	// FVirtualCurrencyBalance GetVirtualCurrencyBalanceBySku(FString CurrencySKU, bool& bWasFound);                            // [0xc7c330] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaInventory.XsollaInventorySubsystem.GetVirtualCurrencyBalance
	// TArray<FVirtualCurrencyBalance> GetVirtualCurrencyBalance();                                                             // [0xc7c1d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaInventory.XsollaInventorySubsystem.GetSubscriptions
	// TArray<FSubscriptionItem> GetSubscriptions();                                                                            // [0xc7c0c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaInventory.XsollaInventorySubsystem.GetItemName
	// FString GetItemName(FString ItemSKU);                                                                                    // [0xc7bfd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaInventory.XsollaInventorySubsystem.GetInventory
	// FInventoryItemsData GetInventory();                                                                                      // [0xc7be70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaInventory.XsollaInventorySubsystem.GetCouponRewards
	// void GetCouponRewards(FString AuthToken, FString CouponCode, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc7bca0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaInventory.XsollaInventorySubsystem.ConsumeInventoryItem
	// void ConsumeInventoryItem(FString AuthToken, FString ItemSKU, int32_t quantity, FString InstanceID, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc7ba40] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/XsollaInventory.InventoryCouponRewardData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInventoryCouponRewardData
{ 
	TArray<FXsollaBonusItem>                           bonus;                                                      // 0x0000   (0x0010)  
	bool                                               is_selectable;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/XsollaInventory.InventoryRedeemedCouponItem
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FInventoryRedeemedCouponItem
{ 
	FString                                            sku;                                                        // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            Description;                                                // 0x0020   (0x0010)  
	FString                                            Type;                                                       // 0x0030   (0x0010)  
	FString                                            virtual_item_type;                                          // 0x0040   (0x0010)  
	TArray<FXsollaItemGroup>                           Groups;                                                     // 0x0050   (0x0010)  
	TArray<FXsollaItemAttribute>                       attributes;                                                 // 0x0060   (0x0010)  
	bool                                               is_free;                                                    // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	FXsollaPrice                                       price;                                                      // 0x0078   (0x0030)  
	TArray<FXsollaVirtualCurrencyPrice>                virtual_prices;                                             // 0x00A8   (0x0010)  
	FString                                            image_url;                                                  // 0x00B8   (0x0010)  
	FXsollaItemOptions                                 inventory_options;                                          // 0x00C8   (0x0020)  
	int32_t                                            quantity;                                                   // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/XsollaInventory.InventoryRedeemedCouponData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FInventoryRedeemedCouponData
{ 
	TArray<FInventoryRedeemedCouponItem>               Items;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/XsollaInventory.SubscriptionItem
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FSubscriptionItem
{ 
	FString                                            sku;                                                        // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            Type;                                                       // 0x0020   (0x0010)  
	FString                                            virtual_item_type;                                          // 0x0030   (0x0010)  
	FString                                            Description;                                                // 0x0040   (0x0010)  
	FString                                            image_url;                                                  // 0x0050   (0x0010)  
	int64_t                                            expired_at;                                                 // 0x0060   (0x0008)  
	FString                                            status;                                                     // 0x0068   (0x0010)  
};

/// Struct /Script/XsollaInventory.SubscriptionData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSubscriptionData
{ 
	TArray<FSubscriptionItem>                          Items;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/XsollaInventory.VirtualCurrencyBalance
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FVirtualCurrencyBalance
{ 
	FString                                            sku;                                                        // 0x0000   (0x0010)  
	FString                                            Type;                                                       // 0x0010   (0x0010)  
	FString                                            Name;                                                       // 0x0020   (0x0010)  
	FString                                            Description;                                                // 0x0030   (0x0010)  
	FString                                            image_url;                                                  // 0x0040   (0x0010)  
	int64_t                                            amount;                                                     // 0x0050   (0x0008)  
};

/// Struct /Script/XsollaInventory.VirtualCurrencyBalanceData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FVirtualCurrencyBalanceData
{ 
	TArray<FVirtualCurrencyBalance>                    Items;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/XsollaInventory.InventoryItem
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FInventoryItem
{ 
	FString                                            sku;                                                        // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            Type;                                                       // 0x0020   (0x0010)  
	FString                                            virtual_item_type;                                          // 0x0030   (0x0010)  
	FString                                            Description;                                                // 0x0040   (0x0010)  
	FString                                            image_url;                                                  // 0x0050   (0x0010)  
	TArray<FXsollaItemAttribute>                       attributes;                                                 // 0x0060   (0x0010)  
	TArray<FXsollaItemGroup>                           Groups;                                                     // 0x0070   (0x0010)  
	FString                                            instance_id;                                                // 0x0080   (0x0010)  
	int32_t                                            quantity;                                                   // 0x0090   (0x0004)  
	int32_t                                            remaining_uses;                                             // 0x0094   (0x0004)  
};

/// Struct /Script/XsollaInventory.InventoryItemsData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FInventoryItemsData
{ 
	TArray<FInventoryItem>                             Items;                                                      // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UXsollaInventoryLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UXsollaInventorySettings) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UXsollaInventorySubsystem) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(FInventoryCouponRewardData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInventoryRedeemedCouponItem) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FInventoryRedeemedCouponData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSubscriptionItem) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FSubscriptionData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVirtualCurrencyBalance) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FVirtualCurrencyBalanceData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FInventoryItem) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FInventoryItemsData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UXsollaInventorySettings, ProjectId) == 0x0028);
static_assert(offsetof(UXsollaInventorySettings, platform) == 0x0039);
static_assert(offsetof(UXsollaInventorySettings, WebStoreURL) == 0x0040);
static_assert(offsetof(UXsollaInventorySettings, DemoProjectID) == 0x0050);
static_assert(offsetof(FInventoryCouponRewardData, bonus) == 0x0000);
static_assert(offsetof(FInventoryRedeemedCouponItem, sku) == 0x0000);
static_assert(offsetof(FInventoryRedeemedCouponItem, Name) == 0x0010);
static_assert(offsetof(FInventoryRedeemedCouponItem, Description) == 0x0020);
static_assert(offsetof(FInventoryRedeemedCouponItem, Type) == 0x0030);
static_assert(offsetof(FInventoryRedeemedCouponItem, virtual_item_type) == 0x0040);
static_assert(offsetof(FInventoryRedeemedCouponItem, Groups) == 0x0050);
static_assert(offsetof(FInventoryRedeemedCouponItem, attributes) == 0x0060);
static_assert(offsetof(FInventoryRedeemedCouponItem, price) == 0x0078);
static_assert(offsetof(FInventoryRedeemedCouponItem, virtual_prices) == 0x00A8);
static_assert(offsetof(FInventoryRedeemedCouponItem, image_url) == 0x00B8);
static_assert(offsetof(FInventoryRedeemedCouponItem, inventory_options) == 0x00C8);
static_assert(offsetof(FInventoryRedeemedCouponData, Items) == 0x0000);
static_assert(offsetof(FSubscriptionItem, sku) == 0x0000);
static_assert(offsetof(FSubscriptionItem, Name) == 0x0010);
static_assert(offsetof(FSubscriptionItem, Type) == 0x0020);
static_assert(offsetof(FSubscriptionItem, virtual_item_type) == 0x0030);
static_assert(offsetof(FSubscriptionItem, Description) == 0x0040);
static_assert(offsetof(FSubscriptionItem, image_url) == 0x0050);
static_assert(offsetof(FSubscriptionItem, status) == 0x0068);
static_assert(offsetof(FSubscriptionData, Items) == 0x0000);
static_assert(offsetof(FVirtualCurrencyBalance, sku) == 0x0000);
static_assert(offsetof(FVirtualCurrencyBalance, Type) == 0x0010);
static_assert(offsetof(FVirtualCurrencyBalance, Name) == 0x0020);
static_assert(offsetof(FVirtualCurrencyBalance, Description) == 0x0030);
static_assert(offsetof(FVirtualCurrencyBalance, image_url) == 0x0040);
static_assert(offsetof(FVirtualCurrencyBalanceData, Items) == 0x0000);
static_assert(offsetof(FInventoryItem, sku) == 0x0000);
static_assert(offsetof(FInventoryItem, Name) == 0x0010);
static_assert(offsetof(FInventoryItem, Type) == 0x0020);
static_assert(offsetof(FInventoryItem, virtual_item_type) == 0x0030);
static_assert(offsetof(FInventoryItem, Description) == 0x0040);
static_assert(offsetof(FInventoryItem, image_url) == 0x0050);
static_assert(offsetof(FInventoryItem, attributes) == 0x0060);
static_assert(offsetof(FInventoryItem, Groups) == 0x0070);
static_assert(offsetof(FInventoryItem, instance_id) == 0x0080);
static_assert(offsetof(FInventoryItemsData, Items) == 0x0000);
