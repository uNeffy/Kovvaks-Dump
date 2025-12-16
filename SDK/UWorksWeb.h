
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UWorks

#pragma pack(push, 0x1)

/// Enum /Script/UWorksWeb.EUWorksUserSession
/// Size: 0x01 (1 bytes)
enum class EUWorksUserSession : uint8_t
{
	EUWorksUserSession__None                                                         = 0,
	EUWorksUserSession__Client                                                       = 1,
	EUWorksUserSession__Web                                                          = 2
};

/// Enum /Script/UWorksWeb.EUWorksReportType
/// Size: 0x01 (1 bytes)
enum class EUWorksReportType : uint8_t
{
	EUWorksReportType__None                                                          = 0,
	EUWorksReportType__GameSales                                                     = 1,
	EUWorksReportType__SteamStore                                                    = 2,
	EUWorksReportType__Settlement                                                    = 3
};

/// Enum /Script/UWorksWeb.FUWorksHTTPResponse
/// Size: 0x01 (1 bytes)
enum class FUWorksHTTPResponse : uint8_t
{
	FUWorksHTTPResponse__Unknown                                                     = 0,
	FUWorksHTTPResponse__Continue                                                    = 1,
	FUWorksHTTPResponse__SwitchProtocol                                              = 2,
	FUWorksHTTPResponse__Ok                                                          = 3,
	FUWorksHTTPResponse__Created                                                     = 4,
	FUWorksHTTPResponse__Accepted                                                    = 5,
	FUWorksHTTPResponse__Partial                                                     = 6,
	FUWorksHTTPResponse__NoContent                                                   = 7,
	FUWorksHTTPResponse__ResetContent                                                = 8,
	FUWorksHTTPResponse__PartialContent                                              = 9,
	FUWorksHTTPResponse__Ambiguous                                                   = 10,
	FUWorksHTTPResponse__Moved                                                       = 11,
	FUWorksHTTPResponse__Redirect                                                    = 12,
	FUWorksHTTPResponse__RedirectMethod                                              = 13,
	FUWorksHTTPResponse__NotModified                                                 = 14,
	FUWorksHTTPResponse__UseProxy                                                    = 15,
	FUWorksHTTPResponse__RedirectKeepVerb                                            = 16,
	FUWorksHTTPResponse__BadRequest                                                  = 17,
	FUWorksHTTPResponse__Denied                                                      = 18,
	FUWorksHTTPResponse__PaymentReq                                                  = 19,
	FUWorksHTTPResponse__Forbidden                                                   = 20,
	FUWorksHTTPResponse__NotFound                                                    = 21,
	FUWorksHTTPResponse__BadMethod                                                   = 22,
	FUWorksHTTPResponse__NoneAcceptable                                              = 23,
	FUWorksHTTPResponse__ProxyAuthReq                                                = 24,
	FUWorksHTTPResponse__RequestTimeout                                              = 25,
	FUWorksHTTPResponse__Conflict                                                    = 26,
	FUWorksHTTPResponse__Gone                                                        = 27,
	FUWorksHTTPResponse__LengthRequired                                              = 28,
	FUWorksHTTPResponse__PrecondFailed                                               = 29,
	FUWorksHTTPResponse__RequestTooLarge                                             = 30,
	FUWorksHTTPResponse__UriTooLong                                                  = 31,
	FUWorksHTTPResponse__UnsupportedMedia                                            = 32,
	FUWorksHTTPResponse__TooManyRequests                                             = 33,
	FUWorksHTTPResponse__RetryWith                                                   = 34,
	FUWorksHTTPResponse__ServerError                                                 = 35,
	FUWorksHTTPResponse__NotSupported                                                = 36,
	FUWorksHTTPResponse__BadGateway                                                  = 37,
	FUWorksHTTPResponse__ServiceUnavail                                              = 38,
	FUWorksHTTPResponse__GatewayTimeout                                              = 39,
	FUWorksHTTPResponse__VersionNotSup                                               = 40
};

/// Class /Script/UWorksWeb.UWorksInterfaceWeb
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWeb : public UUWorksInterface
{ 
public:
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebApps
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebApps : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.UpToDateCheckMinimal
	// void UpToDateCheckMinimal(int32_t AppID, int32_t Version, FDelegateProperty& Delegate);                                  // [0xa65d80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.UpToDateCheck
	// class UUWorksRequestWebUpToDateCheck* UpToDateCheck();                                                                   // [0xa65d50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.SetAppBuildLiveMinimal
	// void SetAppBuildLiveMinimal(FString Key, int32_t AppID, int32_t BuildID, FString BetaKey, FString Description, FDelegateProperty& Delegate); // [0xa65a80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.SetAppBuildLive
	// class UUWorksRequestWebSetAppBuildLive* SetAppBuildLive();                                                               // [0xa65a50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.GetServersAtAddressMinimal
	// void GetServersAtAddressMinimal(FString Addr, FDelegateProperty& Delegate);                                              // [0xa65910] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.GetServersAtAddress
	// class UUWorksRequestWebGetServersAtAddress* GetServersAtAddress();                                                       // [0xa658e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.GetServerListMinimal
	// void GetServerListMinimal(FString Key, FString Filter, int32_t limit, FDelegateProperty& Delegate);                      // [0xa656d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.GetServerList
	// class UUWorksRequestWebGetServerList* GetServerList();                                                                   // [0xa656a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.GetPlayersBannedMinimal
	// void GetPlayersBannedMinimal(FString Key, int32_t AppID, FDelegateProperty& Delegate);                                   // [0xa65520] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.GetPlayersBanned
	// class UUWorksRequestWebGetPlayersBanned* GetPlayersBanned();                                                             // [0xa654f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.GetCheatingReportsListMinimal
	// void GetCheatingReportsListMinimal(FString Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, FString ReportIDMin, FDelegateProperty& Delegate); // [0xa651d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.GetCheatingReportsList
	// class UUWorksRequestWebGetCheatingReportsList* GetCheatingReportsList();                                                 // [0xa651a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.GetAppListMinimal
	// void GetAppListMinimal(FDelegateProperty& Delegate);                                                                     // [0xa65100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.GetAppList
	// class UUWorksRequestWebGetAppList* GetAppList();                                                                         // [0xa650d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.GetAppDepotVersionsMinimal
	// void GetAppDepotVersionsMinimal(FString Key, int32_t AppID, FDelegateProperty& Delegate);                                // [0xa64f50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.GetAppDepotVersions
	// class UUWorksRequestWebGetAppDepotVersions* GetAppDepotVersions();                                                       // [0xa64f20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.GetAppBuildsMinimal
	// void GetAppBuildsMinimal(FString Key, int32_t AppID, int32_t Count, FDelegateProperty& Delegate);                        // [0xa64d70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.GetAppBuilds
	// class UUWorksRequestWebGetAppBuilds* GetAppBuilds();                                                                     // [0xa64d40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.GetAppBetasMinimal
	// void GetAppBetasMinimal(FString Key, int32_t AppID, FDelegateProperty& Delegate);                                        // [0xa64bc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebApps.GetAppBetas
	// class UUWorksRequestWebGetAppBetas* GetAppBetas();                                                                       // [0xa64b90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebBroadcast
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebBroadcast : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebBroadcast.PostGameDataFrameMinimal
	// void PostGameDataFrameMinimal(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString BroadcastID, FString FrameData, FDelegateProperty& Delegate); // [0xa66060] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebBroadcast.PostGameDataFrame
	// class UUWorksRequestWebPostGameDataFrame* PostGameDataFrame();                                                           // [0xa66030] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebCheatReporting
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebCheatReporting : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebCheatReporting.StartSecureMultiplayerSessionMinimal
	// void StartSecureMultiplayerSessionMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, FDelegateProperty& Delegate); // [0xa68110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebCheatReporting.StartSecureMultiplayerSession
	// class UUWorksRequestWebStartSecureMultiplayerSession* StartSecureMultiplayerSession();                                   // [0xa680e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebCheatReporting.RequestVacStatusForUserMinimal
	// void RequestVacStatusForUserMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString SessionId, FDelegateProperty& Delegate); // [0xa67ea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebCheatReporting.RequestVacStatusForUser
	// class UUWorksRequestWebRequestVacStatusForUser* RequestVacStatusForUser();                                               // [0xa67e70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebCheatReporting.RequestPlayerGameBanMinimal
	// void RequestPlayerGameBanMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, FUWorksSteamID ReportID, FString CheatDescription, int32_t Duration, bool bDelayBan, FDelegateProperty& Delegate); // [0xa67b50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebCheatReporting.RequestPlayerGameBan
	// class UUWorksRequestWebRequestPlayerGameBan* RequestPlayerGameBan();                                                     // [0xa67b20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebCheatReporting.ReportPlayerCheatingMinimal
	// void ReportPlayerCheatingMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, FUWorksSteamID SteamIDReporter, int32_t AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity, FDelegateProperty& Delegate); // [0xa676e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebCheatReporting.ReportPlayerCheating
	// class UUWorksRequestWebReportPlayerCheating* ReportPlayerCheating();                                                     // [0xa676b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebCheatReporting.ReportCheatDataMinimal
	// void ReportCheatDataMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32_t GameProcessID, int32_t CheatProcessID, FString CheatParamA, FString CheatParamB, FDelegateProperty& Delegate); // [0xa66fa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebCheatReporting.ReportCheatData
	// class UUWorksRequestWebReportCheatData* ReportCheatData();                                                               // [0xa66f70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebCheatReporting.RemovePlayerGameBanMinimal
	// void RemovePlayerGameBanMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, FDelegateProperty& Delegate);        // [0xa66dc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebCheatReporting.RemovePlayerGameBan
	// class UUWorksRequestWebRemovePlayerGameBan* RemovePlayerGameBan();                                                       // [0xa66d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebCheatReporting.GetCheatingReportsMinimal
	// void GetCheatingReportsMinimal(FString Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, FString ReportIDMin, bool bIncludeReports, bool bIncludeBans, FUWorksSteamID SteamID, FDelegateProperty& Delegate); // [0xa66a20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebCheatReporting.GetCheatingReports
	// class UUWorksRequestWebGetCheatingReports* GetCheatingReports();                                                         // [0xa669f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebCheatReporting.EndSecureMultiplayerSessionMinimal
	// void EndSecureMultiplayerSessionMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString SessionId, FDelegateProperty& Delegate); // [0xa667b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebCheatReporting.EndSecureMultiplayerSession
	// class UUWorksRequestWebEndSecureMultiplayerSession* EndSecureMultiplayerSession();                                       // [0xa66780] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebCommunity
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebCommunity : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebCommunity.ReportAbuseMinimal
	// void ReportAbuseMinimal(FString Key, FUWorksSteamID SteamIDActor, FUWorksSteamID SteamIDTarget, int32_t AppID, char AbuseType, char ContentType, FString Description, FString GID, FDelegateProperty& Delegate); // [0xa68480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebCommunity.ReportAbuse
	// class UUWorksRequestWebReportAbuse* ReportAbuse();                                                                       // [0xa68450] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebEcon
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebEcon : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffersSummaryMinimal
	// void GetTradeOffersSummaryMinimal(FString Key, int32_t TimeLastVisit, FDelegateProperty& Delegate);                      // [0xa6a140] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffersSummary
	// class UUWorksRequestWebGetTradeOffersSummary* GetTradeOffersSummary();                                                   // [0xa6a110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffersMinimal
	// void GetTradeOffersMinimal(FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff, FDelegateProperty& Delegate); // [0xa69d90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffers
	// class UUWorksRequestWebGetTradeOffers* GetTradeOffers();                                                                 // [0xa69d60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.GetTradeOfferMinimal
	// void GetTradeOfferMinimal(FString Key, FString TradeOfferID, FString Language, FDelegateProperty& Delegate);             // [0xa69b00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffer
	// class UUWorksRequestWebGetTradeOffer* GetTradeOffer();                                                                   // [0xa69ad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.GetTradeHistoryMinimal
	// void GetTradeHistoryMinimal(FString Key, int32_t MaxTrades, int32_t StartAfterTime, FString StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, FString Language, bool bIncludeFailed, bool bIncludeTotal, FDelegateProperty& Delegate); // [0xa696c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.GetTradeHistory
	// class UUWorksRequestWebGetTradeHistory* GetTradeHistory();                                                               // [0xa69690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.FlushInventoryCacheMinimal
	// void FlushInventoryCacheMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString ContextID, FDelegateProperty& Delegate); // [0xa69450] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.FlushInventoryCache
	// class UUWorksRequestWebFlushInventoryCache* FlushInventoryCache();                                                       // [0xa69420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.FlushContextCacheMinimal
	// void FlushContextCacheMinimal(FString Key, int32_t AppID, FDelegateProperty& Delegate);                                  // [0xa692a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.FlushContextCache
	// class UUWorksRequestWebFlushContextCache* FlushContextCache();                                                           // [0xa69270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.FlushAssetAppearanceCacheMinimal
	// void FlushAssetAppearanceCacheMinimal(FString Key, int32_t AppID, FDelegateProperty& Delegate);                          // [0xa690f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.FlushAssetAppearanceCache
	// class UUWorksRequestWebFlushAssetAppearanceCache* FlushAssetAppearanceCache();                                           // [0xa690c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.DeclineTradeOfferMinimal
	// void DeclineTradeOfferMinimal(FString Key, FString TradeOfferID, FDelegateProperty& Delegate);                           // [0xa68ef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.DeclineTradeOffer
	// class UUWorksRequestWebDeclineTradeOffer* DeclineTradeOffer();                                                           // [0xa68ec0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.CancelTradeOfferMinimal
	// void CancelTradeOfferMinimal(FString Key, FString TradeOfferID, FDelegateProperty& Delegate);                            // [0xa68cf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEcon.CancelTradeOffer
	// class UUWorksRequestWebCancelTradeOffer* CancelTradeOffer();                                                             // [0xa68cc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebEconMarket
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebEconMarket : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconMarket.GetPopularMinimal
	// void GetPopularMinimal(FString Key, FString Language, int32_t Rows, int32_t Start, int32_t FilterAppID, int32_t ECurrency, FDelegateProperty& Delegate); // [0xa6abd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconMarket.GetPopular
	// class UUWorksRequestWebGetPopular* GetPopular();                                                                         // [0xa6aba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconMarket.GetMarketEligibilityMinimal
	// void GetMarketEligibilityMinimal(FString Key, FUWorksSteamID SteamID, FDelegateProperty& Delegate);                      // [0xa6aa20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconMarket.GetMarketEligibility
	// class UUWorksRequestWebGetMarketEligibility* GetMarketEligibility();                                                     // [0xa6a9f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconMarket.GetAssetIDMinimal
	// void GetAssetIDMinimal(FString Key, int32_t AppID, FString ListingID, FDelegateProperty& Delegate);                      // [0xa6a7e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconMarket.GetAssetID
	// class UUWorksRequestWebGetAssetID* GetAssetID();                                                                         // [0xa6a7b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconMarket.CancelAppListingsForUserMinimal
	// void CancelAppListingsForUserMinimal(FString Key, int32_t AppID, FUWorksSteamID SteamID, bool bSynchronous, FDelegateProperty& Delegate); // [0xa6a5a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconMarket.CancelAppListingsForUser
	// class UUWorksRequestWebCancelAppListingsForUser* CancelAppListingsForUser();                                             // [0xa6a570] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebEconomy
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebEconomy : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconomy.StartTradeMinimal
	// void StartTradeMinimal(FString Key, int32_t AppID, FUWorksSteamID PartyA, FUWorksSteamID PartyB, FDelegateProperty& Delegate); // [0xa6c810] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconomy.StartTrade
	// class UUWorksRequestWebStartTrade* StartTrade();                                                                         // [0xa6c7e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconomy.StartAssetTransactionMinimal
	// void StartAssetTransactionMinimal(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString AssetID0, int32_t AssetQuantity0, FString currency, FString Language, FString IPAddress, FString Referrer, bool bClientAuth, FDelegateProperty& Delegate); // [0xa6c2a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconomy.StartAssetTransaction
	// class UUWorksRequestWebStartAssetTransaction* StartAssetTransaction();                                                   // [0xa6c270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconomy.GetMarketPricesMinimal
	// void GetMarketPricesMinimal(FString Key, int32_t AppID, FDelegateProperty& Delegate);                                    // [0xa6c0f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconomy.GetMarketPrices
	// class UUWorksRequestWebGetMarketPrices* GetMarketPrices();                                                               // [0xa6c0c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconomy.GetExportedAssetsForUserMinimal
	// void GetExportedAssetsForUserMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString ContextID, FDelegateProperty& Delegate); // [0xa6be80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconomy.GetExportedAssetsForUser
	// class UUWorksRequestWebGetExportedAssetsForUser* GetExportedAssetsForUser();                                             // [0xa6be50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconomy.GetAssetPricesMinimal
	// void GetAssetPricesMinimal(FString Key, int32_t AppID, FString currency, FString Language, FDelegateProperty& Delegate); // [0xa6bbb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconomy.GetAssetPrices
	// class UUWorksRequestWebGetAssetPrices* GetAssetPrices();                                                                 // [0xa6bb80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconomy.GetAssetClassInfoMinimal
	// void GetAssetClassInfoMinimal(FString Key, int32_t AppID, int32_t ClassCount, FString ClassID0, FString Language, FString InstanceID0, FDelegateProperty& Delegate); // [0xa6b820] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconomy.GetAssetClassInfo
	// class UUWorksRequestWebGetAssetClassInfo* GetAssetClassInfo();                                                           // [0xa6b7f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconomy.FinalizeAssetTransactionMinimal
	// void FinalizeAssetTransactionMinimal(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString TxnID, FString Language, FDelegateProperty& Delegate); // [0xa6b520] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconomy.FinalizeAssetTransaction
	// class UUWorksRequestWebFinalizeAssetTransaction* FinalizeAssetTransaction();                                             // [0xa6b4f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconomy.CanTradeMinimal
	// void CanTradeMinimal(FString Key, int32_t AppID, FUWorksSteamID SteamID, FUWorksSteamID TargetId, FDelegateProperty& Delegate); // [0xa6b300] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebEconomy.CanTrade
	// class UUWorksRequestWebCanTrade* CanTrade();                                                                             // [0xa6b2d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebGameInventory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebGameInventory : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameInventory.SupportGetAssetHistoryMinimal
	// void SupportGetAssetHistoryMinimal(FString Key, int32_t AppID, FString AssetID, FString ContextID, FDelegateProperty& Delegate); // [0xa6d660] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameInventory.SupportGetAssetHistory
	// class UUWorksRequestWebSupportGetAssetHistory* SupportGetAssetHistory();                                                 // [0xa6d630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameInventory.HistoryExecuteCommandsMinimal
	// void HistoryExecuteCommandsMinimal(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString ContextID, FString ActorId, FDelegateProperty& Delegate); // [0xa6d360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameInventory.HistoryExecuteCommands
	// class UUWorksRequestWebHistoryExecuteCommands* HistoryExecuteCommands();                                                 // [0xa6d330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameInventory.GetUserHistoryMinimal
	// void GetUserHistoryMinimal(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString ContextID, int32_t StartTime, int32_t EndTime, FDelegateProperty& Delegate); // [0xa6d070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameInventory.GetUserHistory
	// class UUWorksRequestWebGetUserHistory* GetUserHistory();                                                                 // [0xa6d040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameInventory.GetHistoryCommandDetailsMinimal
	// void GetHistoryCommandDetailsMinimal(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString Command, FString ContextID, FString Arguments, FDelegateProperty& Delegate); // [0xa6cce0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameInventory.GetHistoryCommandDetails
	// class UUWorksRequestWebGetHistoryCommandDetails* GetHistoryCommandDetails();                                             // [0xa6ccb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebGameNotifications
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebGameNotifications : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameNotifications.UpdateSessionMinimal
	// void UpdateSessionMinimal(FString Key, FString SessionId, int32_t AppID, FUWorksTitle Title, FUWorksUsers users, FUWorksSteamID SteamID, FDelegateProperty& Delegate); // [0xa6ec00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameNotifications.UpdateSession
	// class UUWorksRequestWebUpdateSession* UpdateSession();                                                                   // [0xa6ebd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameNotifications.RequestNotificationsMinimal
	// void RequestNotificationsMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, FDelegateProperty& Delegate);       // [0xa6ea20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameNotifications.RequestNotifications
	// class UUWorksRequestWebRequestNotifications* RequestNotifications();                                                     // [0xa6e9f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameNotifications.GetSessionDetailsForAppMinimal
	// void GetSessionDetailsForAppMinimal(FString Key, FUWorksSessions Sessions, int32_t AppID, FString Language, FDelegateProperty& Delegate); // [0xa6e7b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameNotifications.GetSessionDetailsForApp
	// class UUWorksRequestWebGetSessionDetailsForApp* GetSessionDetailsForApp();                                               // [0xa6e780] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameNotifications.EnumerateSessionsForAppMinimal
	// void EnumerateSessionsForAppMinimal(FString Key, int32_t AppID, FUWorksSteamID SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language, FDelegateProperty& Delegate); // [0xa6e4a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameNotifications.EnumerateSessionsForApp
	// class UUWorksRequestWebEnumerateSessionsForApp* EnumerateSessionsForApp();                                               // [0xa6e470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameNotifications.DeleteSessionMinimal
	// void DeleteSessionMinimal(FString Key, FString SessionId, int32_t AppID, FUWorksSteamID SteamID, FDelegateProperty& Delegate); // [0xa6e230] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameNotifications.DeleteSessionBatchMinimal
	// void DeleteSessionBatchMinimal(FString Key, FString SessionId, int32_t AppID, FDelegateProperty& Delegate);              // [0xa6e020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameNotifications.DeleteSessionBatch
	// class UUWorksRequestWebDeleteSessionBatch* DeleteSessionBatch();                                                         // [0xa6dff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameNotifications.DeleteSession
	// class UUWorksRequestWebDeleteSession* DeleteSession();                                                                   // [0xa6dfc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameNotifications.CreateSessionMinimal
	// void CreateSessionMinimal(FString Key, int32_t AppID, FString Context, FUWorksTitle Title, FUWorksUsers users, FUWorksSteamID SteamID, FDelegateProperty& Delegate); // [0xa6dd00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameNotifications.CreateSession
	// class UUWorksRequestWebCreateSession* CreateSession();                                                                   // [0xa6dcd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebGameServers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebGameServers : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.SetMemoMinimal
	// void SetMemoMinimal(FString Key, FUWorksSteamID SteamID, FString Memo, FDelegateProperty& Delegate);                     // [0xa70490] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.SetMemo
	// class UUWorksRequestWebSetMemo* SetMemo();                                                                               // [0xa70460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.SetBanStatusMinimal
	// void SetBanStatusMinimal(FString Key, FUWorksSteamID SteamID, bool bBanned, int32_t BanSeconds, FDelegateProperty& Delegate); // [0xa70250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.SetBanStatus
	// class UUWorksRequestWebSetBanStatus* SetBanStatus();                                                                     // [0xa70220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.ResetLoginTokenMinimal
	// void ResetLoginTokenMinimal(FString Key, FUWorksSteamID SteamID, FDelegateProperty& Delegate);                           // [0xa700a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.ResetLoginToken
	// class UUWorksRequestWebResetLoginToken* ResetLoginToken();                                                               // [0xa70070] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.QueryLoginTokenMinimal
	// void QueryLoginTokenMinimal(FString Key, FString LoginToken, FDelegateProperty& Delegate);                               // [0xa6fea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.QueryLoginToken
	// class UUWorksRequestWebQueryLoginToken* QueryLoginToken();                                                               // [0xa6fe70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.GetServerSteamIDsByIPMinimal
	// void GetServerSteamIDsByIPMinimal(FString Key, FString ServerIPs, FDelegateProperty& Delegate);                          // [0xa6fca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.GetServerSteamIDsByIP
	// class UUWorksRequestWebGetServerSteamIDsByIP* GetServerSteamIDsByIP();                                                   // [0xa6fc70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.GetServerIPsBySteamIDMinimal
	// void GetServerIPsBySteamIDMinimal(FString Key, FUWorksSteamID ServerSteamID, FDelegateProperty& Delegate);               // [0xa6faf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.GetServerIPsBySteamID
	// class UUWorksRequestWebGetServerIPsBySteamID* GetServerIPsBySteamID();                                                   // [0xa6fac0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.GetAccountPublicInfoMinimal
	// void GetAccountPublicInfoMinimal(FString Key, FUWorksSteamID SteamID, FDelegateProperty& Delegate);                      // [0xa6f940] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.GetAccountPublicInfo
	// class UUWorksRequestWebGetAccountPublicInfo* GetAccountPublicInfo();                                                     // [0xa6f910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.GetAccountListMinimal
	// void GetAccountListMinimal(FString Key, FDelegateProperty& Delegate);                                                    // [0xa6f7d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.GetAccountList
	// class UUWorksRequestWebGetAccountList* GetAccountList();                                                                 // [0xa6f7a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.DeleteAccountMinimal
	// void DeleteAccountMinimal(FString Key, FUWorksSteamID SteamID, FDelegateProperty& Delegate);                             // [0xa6f620] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.DeleteAccount
	// class UUWorksRequestWebDeleteAccount* DeleteAccount();                                                                   // [0xa6f5f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.CreateAccountMinimal
	// void CreateAccountMinimal(FString Key, int32_t AppID, FString Memo, FDelegateProperty& Delegate);                        // [0xa6f3e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServers.CreateAccount
	// class UUWorksRequestWebCreateAccount* CreateAccount();                                                                   // [0xa6f3b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebGameServerStats
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebGameServerStats : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServerStats.GetGameServerPlayerStatsForGameMinimal
	// void GetGameServerPlayerStatsForGameMinimal(FString Key, FUWorksGameID GameID, int32_t AppID, FString RangeStart, FString RangeEnd, int32_t MaxResults, FDelegateProperty& Delegate); // [0xa70860] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebGameServerStats.GetGameServerPlayerStatsForGame
	// class UUWorksRequestWebGetGameServerPlayerStatsForGame* GetGameServerPlayerStatsForGame();                               // [0xa70830] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebInventory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebInventory : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.GetQuantityMinimal
	// void GetQuantityMinimal(FString Key, int32_t AppID, FUWorksSteamID SteamID, FUWorksSteamItemDef Itemdefid, bool bForce, FDelegateProperty& Delegate); // [0xa727f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.GetQuantity
	// class UUWorksRequestWebGetQuantity* GetQuantity();                                                                       // [0xa727c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.GetPriceSheetMinimal
	// void GetPriceSheetMinimal(FString Key, int32_t ECurrency, FDelegateProperty& Delegate);                                  // [0xa72640] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.GetPriceSheet
	// class UUWorksRequestWebGetPriceSheet* GetPriceSheet();                                                                   // [0xa72610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.GetItemDefsMinimal
	// void GetItemDefsMinimal(FString Key, int32_t AppID, FString ModifiedSince, TArray<FUWorksSteamItemDef> ItemDefIDs, TArray<FUWorksSteamItemDef> WorkshopIDs, int32_t CacheMaxAgeSeconds, FDelegateProperty& Delegate); // [0xa722b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.GetItemDefs
	// class UUWorksRequestWebGetItemDefs* GetItemDefs();                                                                       // [0xa72280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.GetInventoryMinimal
	// void GetInventoryMinimal(FString Key, int32_t AppID, FUWorksSteamID SteamID, FDelegateProperty& Delegate);               // [0xa720d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.GetInventory
	// class UUWorksRequestWebGetInventory* GetInventory();                                                                     // [0xa720a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.ExchangeItemMinimal
	// void ExchangeItemMinimal(FString Key, int32_t AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32_t> MaterialsQuantity, FUWorksSteamItemDef OutputItemDefID, FDelegateProperty& Delegate); // [0xa71d90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.ExchangeItem
	// class UUWorksRequestWebExchangeItem* ExchangeItem();                                                                     // [0xa71d60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.ConsumeItemMinimal
	// void ConsumeItemMinimal(FString Key, int32_t AppID, FUWorksSteamItemInstanceID ItemId, int32_t quantity, FUWorksSteamID SteamID, FString RequestID, FDelegateProperty& Delegate); // [0xa71a90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.ConsumeItem
	// class UUWorksRequestWebConsumeItem* ConsumeItem();                                                                       // [0xa71a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.ConsolidateMinimal
	// void ConsolidateMinimal(FString Key, int32_t AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef> Itemdefid, bool bForce, FDelegateProperty& Delegate); // [0xa717c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.Consolidate
	// class UUWorksRequestWebConsolidate* Consolidate();                                                                       // [0xa71790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.AddPromoItemMinimal
	// void AddPromoItemMinimal(FString Key, int32_t AppID, FUWorksSteamItemDef Itemdefid, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString RequestID, FDelegateProperty& Delegate); // [0xa71420] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.AddPromoItem
	// class UUWorksRequestWebAddPromoItem* AddPromoItem();                                                                     // [0xa713f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.AddItemMinimal
	// void AddItemMinimal(FString Key, int32_t AppID, TArray<FUWorksSteamItemDef> Itemdefid, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString RequestID, FDelegateProperty& Delegate); // [0xa71030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebInventory.AddItem
	// class UUWorksRequestWebAddItem* AddItem();                                                                               // [0xa71000] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebLeaderboards
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebLeaderboards : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebLeaderboards.SetLeaderboardScoreMinimal
	// void SetLeaderboardScoreMinimal(FString Key, int32_t AppID, int32_t LeaderboardID, FUWorksSteamID SteamID, int32_t Score, FString ScoreMethod, TArray<char> Details, FDelegateProperty& Delegate); // [0xa73af0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebLeaderboards.SetLeaderboardScore
	// class UUWorksRequestWebSetLeaderboardScore* SetLeaderboardScore();                                                       // [0xa73ac0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebLeaderboards.ResetLeaderboardMinimal
	// void ResetLeaderboardMinimal(FString Key, int32_t AppID, int32_t LeaderboardID, FDelegateProperty& Delegate);            // [0xa73910] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebLeaderboards.ResetLeaderboard
	// class UUWorksRequestWebResetLeaderboard* ResetLeaderboard();                                                             // [0xa738e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebLeaderboards.GetLeaderboardsForGameMinimal
	// void GetLeaderboardsForGameMinimal(FString Key, int32_t AppID, FDelegateProperty& Delegate);                             // [0xa73760] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebLeaderboards.GetLeaderboardsForGame
	// class UUWorksRequestWebGetLeaderboardsForGame* GetLeaderboardsForGame();                                                 // [0xa73730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebLeaderboards.GetLeaderboardEntriesMinimal
	// void GetLeaderboardEntriesMinimal(FString Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardID, int32_t DataRequest, FUWorksSteamID SteamID, FDelegateProperty& Delegate); // [0xa73470] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebLeaderboards.GetLeaderboardEntries
	// class UUWorksRequestWebGetLeaderboardEntries* GetLeaderboardEntries();                                                   // [0xa73440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebLeaderboards.FindOrCreateLeaderboardMinimal
	// void FindOrCreateLeaderboardMinimal(FString Key, int32_t AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads, FDelegateProperty& Delegate); // [0xa73030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebLeaderboards.FindOrCreateLeaderboard
	// class UUWorksRequestWebFindOrCreateLeaderboard* FindOrCreateLeaderboard();                                               // [0xa73000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebLeaderboards.DeleteLeaderboardMinimal
	// void DeleteLeaderboardMinimal(FString Key, int32_t AppID, FString Name, FDelegateProperty& Delegate);                    // [0xa72df0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebLeaderboards.DeleteLeaderboard
	// class UUWorksRequestWebDeleteLeaderboard* DeleteLeaderboard();                                                           // [0xa72dc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebMicroTxn
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebMicroTxn : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.RefundTxnMinimal
	// void RefundTxnMinimal(FString Key, FString OrderID, int32_t AppID, FDelegateProperty& Delegate);                         // [0xa76c60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.RefundTxn
	// class UUWorksRequestWebRefundTxn* RefundTxn();                                                                           // [0xa76c30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.QueryTxnMinimal
	// void QueryTxnMinimal(FString Key, int32_t AppID, FString OrderID, FString TransID, FDelegateProperty& Delegate);         // [0xa76990] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.QueryTxn
	// class UUWorksRequestWebQueryTxn* QueryTxn();                                                                             // [0xa76960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.ProcessAgreementMinimal
	// void ProcessAgreementMinimal(FString Key, FString OrderID, FUWorksSteamID SteamID, FString AgreementID, int32_t AppID, int32_t amount, FString currency, FDelegateProperty& Delegate); // [0xa765c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.ProcessAgreement
	// class UUWorksRequestWebProcessAgreement* ProcessAgreement();                                                             // [0xa76590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.InitTxnMinimal
	// void InitTxnMinimal(FString Key, FString OrderID, FUWorksSteamID SteamID, int32_t AppID, int32_t ItemCount, FString Language, FString currency, TArray<FUWorksSteamItemDef> ItemIDs, TArray<int32_t> Quantities, TArray<int32_t> Amounts, TArray<FString> Descriptions, TArray<FString> Categories, TArray<int32_t> AssociatedBundles, TArray<FString> BillingTypes, TArray<FString> StartDates, TArray<FString> EndDates, TArray<FString> Periods, TArray<int32_t> Frequencies, TArray<FString> RecurringAmounts, int32_t BundleCount, TArray<int32_t> BundleIDs, TArray<int32_t> BundleQuantities, TArray<FString> BundleDescriptions, TArray<FString> BundleCategories, EUWorksUserSession UserSession, FString IPAddress, FDelegateProperty& Delegate); // [0xa751e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.InitTxn
	// class UUWorksRequestWebInitTxn* InitTxn();                                                                               // [0xa751b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.GetUserInfoMinimal
	// void GetUserInfoMinimal(FString Key, FUWorksSteamID SteamID, FString IPAddress, FDelegateProperty& Delegate);            // [0xa74fa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.GetUserInfo
	// class UUWorksRequestWebGetUserInfo* GetUserInfo();                                                                       // [0xa74f70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.GetUserAgreementInfoMinimal
	// void GetUserAgreementInfoMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, FDelegateProperty& Delegate);       // [0xa74dc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.GetUserAgreementInfo
	// class UUWorksRequestWebGetUserAgreementInfo* GetUserAgreementInfo();                                                     // [0xa74d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.GetReportMinimal
	// void GetReportMinimal(FString Key, int32_t AppID, FString Time, EUWorksReportType Type, int32_t MaxResults, FDelegateProperty& Delegate); // [0xa74b10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.GetReport
	// class UUWorksRequestWebGetReport* GetReport();                                                                           // [0xa74ae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.FinalizeTxnMinimal
	// void FinalizeTxnMinimal(FString Key, FString OrderID, int32_t AppID, FDelegateProperty& Delegate);                       // [0xa748d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.FinalizeTxn
	// class UUWorksRequestWebFinalizeTxn* FinalizeTxn();                                                                       // [0xa748a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.CancelAgreementMinimal
	// void CancelAgreementMinimal(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32_t AppID, FDelegateProperty& Delegate); // [0xa74660] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.CancelAgreement
	// class UUWorksRequestWebCancelAgreement* CancelAgreement();                                                               // [0xa74630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.AdjustAgreementMinimal
	// void AdjustAgreementMinimal(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32_t AppID, FString NextProcessDate, FDelegateProperty& Delegate); // [0xa74360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebMicroTxn.AdjustAgreement
	// class UUWorksRequestWebAdjustAgreement* AdjustAgreement();                                                               // [0xa74330] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebNews
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebNews : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebNews.GetNewsForAppMinimal
	// void GetNewsForAppMinimal(int32_t AppID, int32_t MaxLength, int32_t EndDate, int32_t Count, FString Feeds, FDelegateProperty& Delegate); // [0xa77390] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebNews.GetNewsForAppAuthedMinimal
	// void GetNewsForAppAuthedMinimal(FString Key, int32_t AppID, int32_t MaxLength, int32_t EndDate, int32_t Count, FString Feeds, FDelegateProperty& Delegate); // [0xa770c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebNews.GetNewsForAppAuthed
	// class UUWorksRequestWebGetNewsForAppAuthed* GetNewsForAppAuthed();                                                       // [0xa77090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebNews.GetNewsForApp
	// class UUWorksRequestWebGetNewsForApp* GetNewsForApp();                                                                   // [0xa77060] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebPlayer
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebPlayer : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebPlayer.RecordOfflinePlaytimeMinimal
	// void RecordOfflinePlaytimeMinimal(FUWorksSteamID SteamID, FString Ticket, FUWorksPlaySessions PlaySessions, FDelegateProperty& Delegate); // [0xa785a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPlayer.RecordOfflinePlaytime
	// class UUWorksRequestWebRecordOfflinePlaytime* RecordOfflinePlaytime();                                                   // [0xa78570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPlayer.IsPlayingSharedGameMinimal
	// void IsPlayingSharedGameMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppIDPlaying, FDelegateProperty& Delegate); // [0xa783c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPlayer.IsPlayingSharedGame
	// class UUWorksRequestWebIsPlayingSharedGame* IsPlayingSharedGame();                                                       // [0xa78390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPlayer.GetSteamLevelMinimal
	// void GetSteamLevelMinimal(FString Key, FUWorksSteamID SteamID, FDelegateProperty& Delegate);                             // [0xa78210] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPlayer.GetSteamLevel
	// class UUWorksRequestWebGetSteamLevel* GetSteamLevel();                                                                   // [0xa781e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPlayer.GetRecentlyPlayedGamesMinimal
	// void GetRecentlyPlayedGamesMinimal(FString Key, FUWorksSteamID SteamID, int32_t Count, FDelegateProperty& Delegate);     // [0xa78030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPlayer.GetRecentlyPlayedGames
	// class UUWorksRequestWebGetRecentlyPlayedGames* GetRecentlyPlayedGames();                                                 // [0xa78000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPlayer.GetOwnedGamesMinimal
	// void GetOwnedGamesMinimal(FString Key, FUWorksSteamID SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32_t> AppIDsFilter, FDelegateProperty& Delegate); // [0xa77d60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPlayer.GetOwnedGames
	// class UUWorksRequestWebGetOwnedGames* GetOwnedGames();                                                                   // [0xa77d30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPlayer.GetCommunityBadgeProgressMinimal
	// void GetCommunityBadgeProgressMinimal(FString Key, FUWorksSteamID SteamID, int32_t BadgeID, FDelegateProperty& Delegate); // [0xa77b80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPlayer.GetCommunityBadgeProgress
	// class UUWorksRequestWebGetCommunityBadgeProgress* GetCommunityBadgeProgress();                                           // [0xa77b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPlayer.GetBadgesMinimal
	// void GetBadgesMinimal(FString Key, FUWorksSteamID SteamID, FDelegateProperty& Delegate);                                 // [0xa779d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPlayer.GetBadges
	// class UUWorksRequestWebGetBadges* GetBadges();                                                                           // [0xa779a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebPublishedFile
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebPublishedFile : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedFile.UpdateTagsMinimal
	// void UpdateTagsMinimal(FString Key, FUWorksPublishedFileID PublishedFileID, int32_t AppID, TArray<FString> AddTags, TArray<FString> RemoveTags, FDelegateProperty& Delegate); // [0xa79a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedFile.UpdateTags
	// class UUWorksRequestWebUpdateTags* UpdateTags();                                                                         // [0xa799e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedFile.SetDeveloperMetadataMinimal
	// void SetDeveloperMetadataMinimal(FString Key, FUWorksPublishedFileID PublishedFileID, int32_t AppID, FString MetaData, FDelegateProperty& Delegate); // [0xa797a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedFile.SetDeveloperMetadata
	// class UUWorksRequestWebSetDeveloperMetadata* SetDeveloperMetadata();                                                     // [0xa79770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedFile.QueryFilesMinimal
	// void QueryFilesMinimal(FString Key, char QueryType, int32_t Page, int32_t CreatorAppID, int32_t AppID, TArray<FString> RequiredTags, TArray<FString> ExcludedTags, TArray<FString> RequiredFlags, TArray<FString> OmittedFlags, FString SearchText, char FileType, FUWorksPublishedFileID ChildPublishedFileID, int32_t Days, bool bIncludeRecentVotesOnly, FUWorksRequiredKVTags RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int32_t ReturnPlaytimeStats, int32_t NumPerPage, bool bMatchAllTags, int32_t CacheMaxAgeSeconds, int32_t Language, bool bReturnMetadata, FDelegateProperty& Delegate); // [0xa78a80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedFile.QueryFiles
	// class UUWorksRequestWebQueryFiles* QueryFiles();                                                                         // [0xa78a50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebPublishedItemSearch
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebPublishedItemSearch : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedItemSearch.ResultSetSummaryMinimal
	// void ResultSetSummaryMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tags, TArray<FString> UserTags, FDelegateProperty& Delegate); // [0xa7b240] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedItemSearch.ResultSetSummary
	// class UUWorksRequestWebResultSetSummary* ResultSetSummary();                                                             // [0xa7b210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByVoteMinimal
	// void RankedByVoteMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tags, TArray<FString> UserTags, FDelegateProperty& Delegate); // [0xa7ac80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByVote
	// class UUWorksRequestWebRankedByVote* RankedByVote();                                                                     // [0xa7ac50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByTrendMinimal
	// void RankedByTrendMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t FileType, int32_t Days, TArray<FString> Tags, TArray<FString> UserTags, FDelegateProperty& Delegate); // [0xa7a680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByTrend
	// class UUWorksRequestWebRankedByTrend* RankedByTrend();                                                                   // [0xa7a650] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByPublicationOrderMinimal
	// void RankedByPublicationOrderMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tags, TArray<FString> UserTags, FDelegateProperty& Delegate); // [0xa7a0c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByPublicationOrder
	// class UUWorksRequestWebRankedByPublicationOrder* RankedByPublicationOrder();                                             // [0xa7a090] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebPublishedItemVoting
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebPublishedItemVoting : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedItemVoting.UserVoteSummaryMinimal
	// void UserVoteSummaryMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t Count, TArray<int32_t> PublishedFileIDs, FDelegateProperty& Delegate); // [0xa7bc40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedItemVoting.UserVoteSummary
	// class UUWorksRequestWebUserVoteSummary* UserVoteSummary();                                                               // [0xa7bc10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedItemVoting.ItemVoteSummaryMinimal
	// void ItemVoteSummaryMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t Count, TArray<int32_t> PublishedFileIDs, FDelegateProperty& Delegate); // [0xa7b980] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebPublishedItemVoting.ItemVoteSummary
	// class UUWorksRequestWebItemVoteSummary* ItemVoteSummary();                                                               // [0xa7b950] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebRemoteStorage : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage.UnsubscribePublishedFileMinimal
	// void UnsubscribePublishedFileMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t PublishedFileID, FDelegateProperty& Delegate); // [0xa7d150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage.UnsubscribePublishedFile
	// class UUWorksRequestWebUnsubscribePublishedFile* UnsubscribePublishedFile();                                             // [0xa7d120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage.SubscribePublishedFileMinimal
	// void SubscribePublishedFileMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t PublishedFileID, FDelegateProperty& Delegate); // [0xa7cf30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage.SubscribePublishedFile
	// class UUWorksRequestWebSubscribePublishedFile* SubscribePublishedFile();                                                 // [0xa7cf00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage.SetUGCUsedByGCMinimal
	// void SetUGCUsedByGCMinimal(FString Key, FUWorksSteamID SteamID, int32_t UGCID, int32_t AppID, bool bUsed, FDelegateProperty& Delegate); // [0xa7ccb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage.SetUGCUsedByGC
	// class UUWorksRequestWebSetUGCUsedByGC* SetUGCUsedByGC();                                                                 // [0xa7cc80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage.GetUGCFileDetailsMinimal
	// void GetUGCFileDetailsMinimal(FString Key, FUWorksSteamID SteamID, int32_t UGCID, int32_t AppID, FDelegateProperty& Delegate); // [0xa7ca90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage.GetUGCFileDetails
	// class UUWorksRequestWebGetUGCFileDetails* GetUGCFileDetails();                                                           // [0xa7ca60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage.GetPublishedFileDetailsMinimal
	// void GetPublishedFileDetailsMinimal(int32_t ItemCount, TArray<int32_t> PublishedFileIDs, FDelegateProperty& Delegate);   // [0xa7c8e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage.GetPublishedFileDetails
	// class UUWorksRequestWebGetPublishedFileDetails* GetPublishedFileDetails();                                               // [0xa7c8b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage.GetCollectionDetailsMinimal
	// void GetCollectionDetailsMinimal(int32_t CollectionCount, TArray<int32_t> PublishedFileIDs, FDelegateProperty& Delegate); // [0xa7c730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage.GetCollectionDetails
	// class UUWorksRequestWebGetCollectionDetails* GetCollectionDetails();                                                     // [0xa7c700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage.EnumerateUserSubscribedFilesMinimal
	// void EnumerateUserSubscribedFilesMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t ListType, FDelegateProperty& Delegate); // [0xa7c510] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage.EnumerateUserSubscribedFiles
	// class UUWorksRequestWebEnumerateUserSubscribedFiles* EnumerateUserSubscribedFiles();                                     // [0xa7c4e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage.EnumerateUserPublishedFilesMinimal
	// void EnumerateUserPublishedFilesMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, FDelegateProperty& Delegate); // [0xa7c330] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebRemoteStorage.EnumerateUserPublishedFiles
	// class UUWorksRequestWebEnumerateUserPublishedFiles* EnumerateUserPublishedFiles();                                       // [0xa7c300] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebUser
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebUser : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.ResolveVanityURLMinimal
	// void ResolveVanityURLMinimal(FString Key, FString VanityURL, char URLType, FDelegateProperty& Delegate);                 // [0xa7ebf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.ResolveVanityURL
	// class UUWorksRequestWebResolveVanityURL* ResolveVanityURL();                                                             // [0xa7ebc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.GrantPackageMinimal
	// void GrantPackageMinimal(FString Key, FUWorksSteamID SteamID, int32_t PackageID, FString IPAddress, FString ThirdPartyKey, int32_t ThirdPartyAppID, FDelegateProperty& Delegate); // [0xa7e8b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.GrantPackage
	// class UUWorksRequestWebGrantPackage* GrantPackage();                                                                     // [0xa7e880] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.GetUserGroupListMinimal
	// void GetUserGroupListMinimal(FString Key, FUWorksSteamID SteamID, FDelegateProperty& Delegate);                          // [0xa7e700] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.GetUserGroupList
	// class UUWorksRequestWebGetUserGroupList* GetUserGroupList();                                                             // [0xa7e6d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.GetPublisherAppOwnershipMinimal
	// void GetPublisherAppOwnershipMinimal(FString Key, FUWorksSteamID SteamID, FDelegateProperty& Delegate);                  // [0xa7e550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.GetPublisherAppOwnershipChangesMinimal
	// void GetPublisherAppOwnershipChangesMinimal(FString Key, FString PackageRowVersion, FString CDKeyRowVersion, FDelegateProperty& Delegate); // [0xa7e2f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.GetPublisherAppOwnershipChanges
	// class UUWorksRequestWebGetPublisherAppOwnershipChanges* GetPublisherAppOwnershipChanges();                               // [0xa7e2c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.GetPublisherAppOwnership
	// class UUWorksRequestWebGetPublisherAppOwnership* GetPublisherAppOwnership();                                             // [0xa7e290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.GetPlayerSummariesMinimal
	// void GetPlayerSummariesMinimal(FString Key, FString SteamIDs, FDelegateProperty& Delegate);                              // [0xa7e0c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.GetPlayerSummaries
	// class UUWorksRequestWebGetPlayerSummaries* GetPlayerSummaries();                                                         // [0xa7e090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.GetPlayerBansMinimal
	// void GetPlayerBansMinimal(FString Key, FString SteamIDs, FDelegateProperty& Delegate);                                   // [0xa7dec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.GetPlayerBans
	// class UUWorksRequestWebGetPlayerBans* GetPlayerBans();                                                                   // [0xa7de90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.GetFriendListMinimal
	// void GetFriendListMinimal(FString Key, FUWorksSteamID SteamID, FString Relationship, FDelegateProperty& Delegate);       // [0xa7dc80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.GetFriendList
	// class UUWorksRequestWebGetFriendList* GetFriendList();                                                                   // [0xa7dc50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.GetAppPriceInfoMinimal
	// void GetAppPriceInfoMinimal(FString Key, FUWorksSteamID SteamID, FString AppIDs, FDelegateProperty& Delegate);           // [0xa7da40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.GetAppPriceInfo
	// class UUWorksRequestWebGetAppPriceInfo* GetAppPriceInfo();                                                               // [0xa7da10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.CheckAppOwnershipMinimal
	// void CheckAppOwnershipMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, FDelegateProperty& Delegate);          // [0xa7d860] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUser.CheckAppOwnership
	// class UUWorksRequestWebCheckAppOwnership* CheckAppOwnership();                                                           // [0xa7d830] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebUserAuth
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebUserAuth : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserAuth.AuthenticateUserTicketMinimal
	// void AuthenticateUserTicketMinimal(FString Key, int32_t AppID, FString Ticket, FDelegateProperty& Delegate);             // [0xa7f250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserAuth.AuthenticateUserTicket
	// class UUWorksRequestWebAuthenticateUserTicket* AuthenticateUserTicket();                                                 // [0xa7f220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserAuth.AuthenticateUserMinimal
	// void AuthenticateUserMinimal(FUWorksSteamID SteamID, TArray<char> SessionKey, TArray<char> EncryptedLoginKey, FDelegateProperty& Delegate); // [0xa7f020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserAuth.AuthenticateUser
	// class UUWorksRequestWebAuthenticateUser* AuthenticateUser();                                                             // [0xa7eff0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebUserStats
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebUserStats : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserStats.SetUserStatsForGameMinimal
	// void SetUserStatsForGameMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t Count, TArray<FString> Name, TArray<int32_t> Value, FDelegateProperty& Delegate); // [0xa80410] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserStats.SetUserStatsForGame
	// class UUWorksRequestWebSetUserStatsForGame* SetUserStatsForGame();                                                       // [0xa803e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserStats.GetUserStatsForGameMinimal
	// void GetUserStatsForGameMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, FDelegateProperty& Delegate);        // [0xa80230] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserStats.GetUserStatsForGame
	// class UUWorksRequestWebGetUserStatsForGame* GetUserStatsForGame();                                                       // [0xa80200] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserStats.GetSchemaForGameMinimal
	// void GetSchemaForGameMinimal(FString Key, int32_t AppID, FString Language, FDelegateProperty& Delegate);                 // [0xa7fff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserStats.GetSchemaForGame
	// class UUWorksRequestWebGetSchemaForGame* GetSchemaForGame();                                                             // [0xa7ffc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserStats.GetPlayerAchievementsMinimal
	// void GetPlayerAchievementsMinimal(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString Language, FDelegateProperty& Delegate); // [0xa7fd80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserStats.GetPlayerAchievements
	// class UUWorksRequestWebGetPlayerAchievements* GetPlayerAchievements();                                                   // [0xa7fd50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserStats.GetNumberOfCurrentPlayersMinimal
	// void GetNumberOfCurrentPlayersMinimal(int32_t AppID, FDelegateProperty& Delegate);                                       // [0xa7fc70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserStats.GetNumberOfCurrentPlayers
	// class UUWorksRequestWebGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayers();                                           // [0xa7fc40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserStats.GetGlobalStatsForGameMinimal
	// void GetGlobalStatsForGameMinimal(int32_t AppID, int32_t Count, TArray<FString> Name, int32_t StartDate, int32_t EndDate, FDelegateProperty& Delegate); // [0xa7f970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserStats.GetGlobalStatsForGame
	// class UUWorksRequestWebGetGlobalStatsForGame* GetGlobalStatsForGame();                                                   // [0xa7f940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserStats.GetGlobalAchievementPercentagesForAppMinimal
	// void GetGlobalAchievementPercentagesForAppMinimal(FUWorksGameID GameID, FDelegateProperty& Delegate);                    // [0xa7f860] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebUserStats.GetGlobalAchievementPercentagesForApp
	// class UUWorksRequestWebGetGlobalAchievementPercentagesForApp* GetGlobalAchievementPercentagesForApp();                   // [0xa7f830] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksInterfaceWebWorkshop
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceWebWorkshop : public UUWorksInterfaceWeb
{ 
public:


	/// Functions
	// Function /Script/UWorksWeb.UWorksInterfaceWebWorkshop.SetItemPaymentRulesMinimal
	// void SetItemPaymentRulesMinimal(FString Key, int32_t AppID, int32_t GameItemID, FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles, FUWorksPartnerAccounts PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly, FDelegateProperty& Delegate); // [0xa81140] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebWorkshop.SetItemPaymentRules
	// class UUWorksRequestWebSetItemPaymentRules* SetItemPaymentRules();                                                       // [0xa81110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebWorkshop.PopulateItemDescriptionsMinimal
	// void PopulateItemDescriptionsMinimal(FString Key, int32_t AppID, FUWorksLanguages Languages, FDelegateProperty& Delegate); // [0xa80f60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebWorkshop.PopulateItemDescriptions
	// class UUWorksRequestWebPopulateItemDescriptions* PopulateItemDescriptions();                                             // [0xa80f30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebWorkshop.GetItemDailyRevenueMinimal
	// void GetItemDailyRevenueMinimal(FString Key, int32_t AppID, FString ItemId, int32_t DateStart, int32_t DateEnd, FDelegateProperty& Delegate); // [0xa80cb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebWorkshop.GetItemDailyRevenue
	// class UUWorksRequestWebGetItemDailyRevenue* GetItemDailyRevenue();                                                       // [0xa80c80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebWorkshop.GetFinalizedContributorsMinimal
	// void GetFinalizedContributorsMinimal(FString Key, int32_t AppID, int32_t GameItemID, FDelegateProperty& Delegate);       // [0xa80ad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksInterfaceWebWorkshop.GetFinalizedContributors
	// class UUWorksRequestWebGetFinalizedContributors* GetFinalizedContributors();                                             // [0xa80aa0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWeb
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UUWorksRequestWeb : public UUWorksRequest
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0028   (0x0078)  MISSED


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWeb.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWeb.GetStatus
	// FString GetStatus();                                                                                                     // [0xac1220] Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWeb.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWeb.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetAppBetas
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetAppBetas : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,987) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,988) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetAppBetas.SetInput
	// void SetInput(FString Key, int32_t AppID);                                                                               // [0xa824e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetAppBetas.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetAppBuilds
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetAppBuilds : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,989) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,990) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetAppBuilds.SetInput
	// void SetInput(FString Key, int32_t AppID, int32_t Count);                                                                // [0xa82610] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetAppBuilds.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetAppDepotVersions
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetAppDepotVersions : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,991) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,992) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetAppDepotVersions.SetInput
	// void SetInput(FString Key, int32_t AppID);                                                                               // [0xa824e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetAppDepotVersions.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetAppList
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetAppList : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,993) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,994) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetAppList.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetCheatingReportsList
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetCheatingReportsList : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,995) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,996) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetCheatingReportsList.SetInput
	// void SetInput(FString Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, FString ReportIDMin); // [0xa82770] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetCheatingReportsList.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetPlayersBanned
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetPlayersBanned : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,997) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,998) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetPlayersBanned.SetInput
	// void SetInput(FString Key, int32_t AppID);                                                                               // [0xa824e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetPlayersBanned.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetServerList
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetServerList : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,999) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1000) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetServerList.SetInput
	// void SetInput(FString Key, FString Filter, int32_t limit);                                                               // [0xa82a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetServerList.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetServersAtAddress
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetServersAtAddress : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1001) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1002) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetServersAtAddress.SetInput
	// void SetInput(FString Addr);                                                                                             // [0xa82bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetServersAtAddress.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebSetAppBuildLive
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebSetAppBuildLive : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1003) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1004) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebSetAppBuildLive.SetInput
	// void SetInput(FString Key, int32_t AppID, int32_t BuildID, FString BetaKey, FString Description);                        // [0xa82ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebSetAppBuildLive.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebUpToDateCheck
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebUpToDateCheck : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1005) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1006) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebUpToDateCheck.SetInput
	// void SetInput(int32_t AppID, int32_t VersionToCheck);                                                                    // [0xa82f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebUpToDateCheck.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebPostGameDataFrame
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebPostGameDataFrame : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1007) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1008) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebPostGameDataFrame.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString BroadcastID, FString FrameData);               // [0xa831e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebPostGameDataFrame.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebReportPlayerCheating
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebReportPlayerCheating : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1009) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1010) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebReportPlayerCheating.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, FUWorksSteamID SteamIDReporter, int32_t AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity); // [0xa84e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebReportPlayerCheating.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebRequestPlayerGameBan
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebRequestPlayerGameBan : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1011) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1012) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebRequestPlayerGameBan.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, FUWorksSteamID ReportID, FString CheatDescription, int32_t Duration, bool bDelayBan); // [0xa85260] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebRequestPlayerGameBan.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebRemovePlayerGameBan
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebRemovePlayerGameBan : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1013) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1014) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebRemovePlayerGameBan.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID);                                                       // [0xa84680] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebRemovePlayerGameBan.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetCheatingReports
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetCheatingReports : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1015) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1016) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetCheatingReports.SetInput
	// void SetInput(FString Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, FString ReportIDMin, bool bIncludeReports, bool bIncludeBans, FUWorksSteamID SteamID); // [0xa84360] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetCheatingReports.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebRequestVacStatusForUser
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebRequestVacStatusForUser : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1017) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1018) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebRequestVacStatusForUser.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString SessionId);                                    // [0xa84170] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebRequestVacStatusForUser.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebStartSecureMultiplayerSession
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebStartSecureMultiplayerSession : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1019) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1020) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebStartSecureMultiplayerSession.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID);                                                       // [0xa84680] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebStartSecureMultiplayerSession.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebEndSecureMultiplayerSession
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebEndSecureMultiplayerSession : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1021) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1022) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebEndSecureMultiplayerSession.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString SessionId);                                    // [0xa84170] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebEndSecureMultiplayerSession.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebReportCheatData
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebReportCheatData : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1023) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1024) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebReportCheatData.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32_t GameProcessID, int32_t CheatProcessID, FString CheatParamA, FString CheatParamB); // [0xa847e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebReportCheatData.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebReportAbuse
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebReportAbuse : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1025) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1026) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebReportAbuse.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamIDActor, FUWorksSteamID SteamIDTarget, int32_t AppID, char AbuseType, char ContentType, FString Description, FString GID); // [0xa856c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebReportAbuse.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetTradeHistory
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetTradeHistory : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1027) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1028) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetTradeHistory.SetInput
	// void SetInput(FString Key, int32_t MaxTrades, int32_t StartAfterTime, FString StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, FString Language, bool bIncludeFailed, bool bIncludeTotal); // [0xa86d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetTradeHistory.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebFlushInventoryCache
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebFlushInventoryCache : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1029) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1030) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebFlushInventoryCache.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString ContextID);                                    // [0xa86b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebFlushInventoryCache.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebFlushAssetAppearanceCache
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebFlushAssetAppearanceCache : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1031) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1032) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebFlushAssetAppearanceCache.SetInput
	// void SetInput(FString Key, int32_t AppID);                                                                               // [0xa86a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebFlushAssetAppearanceCache.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebFlushContextCache
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebFlushContextCache : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1033) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1034) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebFlushContextCache.SetInput
	// void SetInput(FString Key, int32_t AppID);                                                                               // [0xa86a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebFlushContextCache.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetTradeOffers
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetTradeOffers : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1035) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1036) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetTradeOffers.SetInput
	// void SetInput(FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff); // [0xa87310] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetTradeOffers.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetTradeOffer
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetTradeOffer : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1037) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1038) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetTradeOffer.SetInput
	// void SetInput(FString Key, FString TradeOfferID, FString Language);                                                      // [0xa87100] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetTradeOffer.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetTradeOffersSummary
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetTradeOffersSummary : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1039) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1040) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetTradeOffersSummary.SetInput
	// void SetInput(FString Key, int32_t TimeLastVisit);                                                                       // [0xa87630] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetTradeOffersSummary.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebDeclineTradeOffer
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebDeclineTradeOffer : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1041) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1042) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebDeclineTradeOffer.SetInput
	// void SetInput(FString Key, FString TradeOfferID);                                                                        // [0xa868b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebDeclineTradeOffer.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebCancelTradeOffer
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebCancelTradeOffer : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1043) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1044) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebCancelTradeOffer.SetInput
	// void SetInput(FString Key, FString TradeOfferID);                                                                        // [0xa868b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebCancelTradeOffer.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetMarketEligibility
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetMarketEligibility : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1045) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1046) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetMarketEligibility.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID);                                                                      // [0xa88130] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetMarketEligibility.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebCancelAppListingsForUser
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebCancelAppListingsForUser : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1047) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1048) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebCancelAppListingsForUser.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksSteamID SteamID, bool bSynchronous);                                    // [0xa87de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebCancelAppListingsForUser.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetAssetID
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetAssetID : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1049) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1050) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetAssetID.SetInput
	// void SetInput(FString Key, int32_t AppID, FString ListingID);                                                            // [0xa87f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetAssetID.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetPopular
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetPopular : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1051) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1052) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetPopular.SetInput
	// void SetInput(FString Key, FString Language, int32_t Rows, int32_t Start, int32_t FilterAppID, int32_t ECurrency);       // [0xa88260] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetPopular.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebCanTrade
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebCanTrade : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1053) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1054) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebCanTrade.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksSteamID SteamID, FUWorksSteamID TargetId);                              // [0xa891e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebCanTrade.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebFinalizeAssetTransaction
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebFinalizeAssetTransaction : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1055) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1056) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebFinalizeAssetTransaction.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString TxnID, FString Language);                      // [0xa89380] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebFinalizeAssetTransaction.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetAssetClassInfo
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetAssetClassInfo : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1057) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1058) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetAssetClassInfo.SetInput
	// void SetInput(FString Key, int32_t AppID, int32_t ClassCount, FString ClassID, FString Language, FString InstanceID);    // [0xa89610] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetAssetClassInfo.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetAssetPrices
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetAssetPrices : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1059) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1060) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetAssetPrices.SetInput
	// void SetInput(FString Key, int32_t AppID, FString currency, FString Language);                                           // [0xa89930] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetAssetPrices.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetExportedAssetsForUser
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetExportedAssetsForUser : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1061) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1062) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetExportedAssetsForUser.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString ContextID);                                    // [0xa89b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetExportedAssetsForUser.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetMarketPrices
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetMarketPrices : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1063) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1064) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetMarketPrices.SetInput
	// void SetInput(FString Key, int32_t AppID);                                                                               // [0xa824e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetMarketPrices.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebStartAssetTransaction
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebStartAssetTransaction : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1065) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1066) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebStartAssetTransaction.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString AssetID, int32_t AssetQuantity, FString currency, FString Language, FString IPAddress, FString Referrer, bool bClientAuth); // [0xa89d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebStartAssetTransaction.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebStartTrade
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebStartTrade : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1067) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1068) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebStartTrade.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksSteamID PartyA, FUWorksSteamID PartyB);                                 // [0xa8a230] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebStartTrade.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetHistoryCommandDetails
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetHistoryCommandDetails : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1069) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1070) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetHistoryCommandDetails.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString Command, FString ContextID, FString Arguments); // [0xa8aa50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetHistoryCommandDetails.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetUserHistory
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetUserHistory : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1071) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1072) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetUserHistory.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString ContextID, int32_t StartTime, int32_t EndTime); // [0xa8ad70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetUserHistory.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebHistoryExecuteCommands
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebHistoryExecuteCommands : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1073) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1074) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebHistoryExecuteCommands.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString ContextID, FString ActorId);                   // [0xa8aff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebHistoryExecuteCommands.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebSupportGetAssetHistory
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebSupportGetAssetHistory : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1075) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1076) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebSupportGetAssetHistory.SetInput
	// void SetInput(FString Key, int32_t AppID, FString AssetID, FString ContextID);                                           // [0xa8b280] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebSupportGetAssetHistory.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebCreateSession
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebCreateSession : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1077) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1078) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebCreateSession.SetInput
	// void SetInput(FString Key, int32_t AppID, FString Context, FUWorksTitle Title, FUWorksUsers users, FUWorksSteamID SteamID); // [0xa8c020] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebCreateSession.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebUpdateSession
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebUpdateSession : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1079) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1080) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebUpdateSession.SetInput
	// void SetInput(FString Key, FString SessionId, int32_t AppID, FUWorksTitle Title, FUWorksUsers users, FUWorksSteamID SteamID); // [0xa8cac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebUpdateSession.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebEnumerateSessionsForApp
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebEnumerateSessionsForApp : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1081) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1082) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebEnumerateSessionsForApp.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksSteamID SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language); // [0xa8c640] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebEnumerateSessionsForApp.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetSessionDetailsForApp
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetSessionDetailsForApp : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1083) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1084) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetSessionDetailsForApp.SetInput
	// void SetInput(FString Key, FUWorksSessions Sessions, int32_t AppID, FString Language);                                   // [0xa8c8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetSessionDetailsForApp.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebRequestNotifications
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebRequestNotifications : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1085) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1086) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebRequestNotifications.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID);                                                       // [0xa84680] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebRequestNotifications.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebDeleteSession
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebDeleteSession : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1087) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1088) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebDeleteSession.SetInput
	// void SetInput(FString Key, FString SessionId, int32_t AppID, FUWorksSteamID SteamID);                                    // [0xa8c2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebDeleteSession.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebDeleteSessionBatch
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebDeleteSessionBatch : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1089) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1090) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebDeleteSessionBatch.SetInput
	// void SetInput(FString Key, FString SessionId, int32_t AppID);                                                            // [0xa8c490] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebDeleteSessionBatch.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetAccountList
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetAccountList : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1091) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1092) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetAccountList.SetInput
	// void SetInput(FString Key);                                                                                              // [0xa8df30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetAccountList.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebCreateAccount
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebCreateAccount : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1093) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1094) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebCreateAccount.SetInput
	// void SetInput(FString Key, int32_t AppID, FString Memo);                                                                 // [0xa8dd80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebCreateAccount.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebSetMemo
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebSetMemo : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1095) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1096) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebSetMemo.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, FString Memo);                                                        // [0xa8e600] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebSetMemo.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebResetLoginToken
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebResetLoginToken : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1097) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1098) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebResetLoginToken.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID);                                                                      // [0xa88130] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebResetLoginToken.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebDeleteAccount
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebDeleteAccount : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1099) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1100) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebDeleteAccount.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID);                                                                      // [0xa88130] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebDeleteAccount.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetAccountPublicInfo
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetAccountPublicInfo : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1101) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1102) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetAccountPublicInfo.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID);                                                                      // [0xa88130] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetAccountPublicInfo.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebQueryLoginToken
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebQueryLoginToken : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1103) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1104) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebQueryLoginToken.SetInput
	// void SetInput(FString Key, FString LoginToken);                                                                          // [0xa8e2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebQueryLoginToken.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebSetBanStatus
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebSetBanStatus : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1105) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1106) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebSetBanStatus.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, bool bBanned, int32_t BanSeconds);                                    // [0xa8e450] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebSetBanStatus.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetServerSteamIDsByIP
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetServerSteamIDsByIP : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1107) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1108) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetServerSteamIDsByIP.SetInput
	// void SetInput(FString Key, FString ServerIPs);                                                                           // [0xa8e150] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetServerSteamIDsByIP.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetServerIPsBySteamID
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetServerIPsBySteamID : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1109) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1110) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetServerIPsBySteamID.SetInput
	// void SetInput(FString Key, FUWorksSteamID ServerSteamID);                                                                // [0xa8e020] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetServerIPsBySteamID.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetGameServerPlayerStatsForGame
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetGameServerPlayerStatsForGame : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1111) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1112) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetGameServerPlayerStatsForGame.SetInput
	// void SetInput(FString Key, FUWorksGameID GameID, int32_t AppID, FString RangeStart, FString RangeEnd, int32_t MaxResults); // [0xa8e950] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetGameServerPlayerStatsForGame.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebAddItem
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebAddItem : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1113) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1114) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebAddItem.SetInput
	// void SetInput(FString Key, int32_t AppID, TArray<FUWorksSteamItemDef> Itemdefid, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString RequestID); // [0xa8fac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebAddItem.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebAddPromoItem
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebAddPromoItem : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1115) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1116) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebAddPromoItem.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksSteamItemDef Itemdefid, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString RequestID); // [0xa8fe20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebAddPromoItem.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebConsumeItem
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebConsumeItem : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1117) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1118) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebConsumeItem.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksSteamItemInstanceID ItemId, int32_t quantity, FUWorksSteamID SteamID, FString RequestID); // [0xa90370] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebConsumeItem.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebExchangeItem
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebExchangeItem : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1119) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1120) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebExchangeItem.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32_t> MaterialsQuantity, FUWorksSteamItemDef OutputItemDefID); // [0xa905f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebExchangeItem.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetInventory
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetInventory : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1121) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1122) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetInventory.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksSteamID SteamID);                                                       // [0xa908c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetInventory.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetItemDefs
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetItemDefs : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1123) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1124) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetItemDefs.SetInput
	// void SetInput(FString Key, int32_t AppID, FString ModifiedSince, TArray<FUWorksSteamItemDef> ItemDefIDs, TArray<FUWorksSteamItemDef> WorkshopIDs, int32_t CacheMaxAgeSeconds); // [0xa90a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetItemDefs.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetPriceSheet
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetPriceSheet : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1125) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1126) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetPriceSheet.SetInput
	// void SetInput(FString Key, int32_t ECurrency);                                                                           // [0xa90d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetPriceSheet.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebConsolidate
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebConsolidate : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1127) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1128) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebConsolidate.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef> Itemdefid, bool bForce);   // [0xa90130] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebConsolidate.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetQuantity
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetQuantity : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1129) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1130) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetQuantity.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksSteamID SteamID, FUWorksSteamItemDef Itemdefid, bool bForce);           // [0xa90e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetQuantity.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebDeleteLeaderboard
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebDeleteLeaderboard : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1131) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1132) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebDeleteLeaderboard.SetInput
	// void SetInput(FString Key, int32_t AppID, FString Name);                                                                 // [0xa91a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebDeleteLeaderboard.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebFindOrCreateLeaderboard
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebFindOrCreateLeaderboard : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1133) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1134) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebFindOrCreateLeaderboard.SetInput
	// void SetInput(FString Key, int32_t AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads); // [0xa91bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebFindOrCreateLeaderboard.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetLeaderboardEntries
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetLeaderboardEntries : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1135) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1136) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetLeaderboardEntries.SetInput
	// void SetInput(FString Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardID, int32_t DataRequest, FUWorksSteamID SteamID); // [0xa91f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetLeaderboardEntries.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetLeaderboardsForGame
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetLeaderboardsForGame : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1137) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1138) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetLeaderboardsForGame.SetInput
	// void SetInput(FString Key, int32_t AppID);                                                                               // [0xa824e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetLeaderboardsForGame.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebResetLeaderboard
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebResetLeaderboard : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1139) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1140) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebResetLeaderboard.SetInput
	// void SetInput(FString Key, int32_t AppID, int32_t LeaderboardID);                                                        // [0xa921f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebResetLeaderboard.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebSetLeaderboardScore
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebSetLeaderboardScore : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1141) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1142) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebSetLeaderboardScore.SetInput
	// void SetInput(FString Key, int32_t AppID, int32_t LeaderboardID, FUWorksSteamID SteamID, int32_t Score, FString ScoreMethod, TArray<char> Details); // [0xa92350] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebSetLeaderboardScore.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebAdjustAgreement
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebAdjustAgreement : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1143) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1144) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebAdjustAgreement.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32_t AppID, FString NextProcessDate);         // [0xa936a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebAdjustAgreement.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebCancelAgreement
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebCancelAgreement : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1145) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1146) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebCancelAgreement.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32_t AppID);                                  // [0xa93920] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebCancelAgreement.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebFinalizeTxn
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebFinalizeTxn : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1147) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1148) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebFinalizeTxn.SetInput
	// void SetInput(FString Key, FString OrderID, int32_t AppID);                                                              // [0xa93b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebFinalizeTxn.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetReport
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetReport : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1149) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1150) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetReport.SetInput
	// void SetInput(FString Key, int32_t AppID, FString Time, EUWorksReportType Type, int32_t MaxResults);                     // [0xa93cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetReport.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetUserAgreementInfo
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetUserAgreementInfo : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1151) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1152) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetUserAgreementInfo.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID);                                                       // [0xa93f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetUserAgreementInfo.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetUserInfo
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetUserInfo : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1153) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1154) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetUserInfo.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, FString IPAddress);                                                   // [0xa94060] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetUserInfo.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebInitTxn
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebInitTxn : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1155) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1156) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebInitTxn.SetInput
	// void SetInput(FString Key, FString OrderID, FUWorksSteamID SteamID, int32_t AppID, int32_t ItemCount, FString Language, FString currency, TArray<FUWorksSteamItemDef> ItemIDs, TArray<int32_t> Quantities, TArray<int32_t> Amounts, TArray<FString> Descriptions, TArray<FString> Categories, TArray<int32_t> AssociatedBundles, TArray<FString> BillingTypes, TArray<FString> StartDates, TArray<FString> EndDates, TArray<FString> Periods, TArray<int32_t> Frequencies, TArray<FString> RecurringAmounts, int32_t BundleCount, TArray<int32_t> BundleIDs, TArray<int32_t> BundleQuantities, TArray<FString> BundleDescriptions, TArray<FString> BundleCategories, EUWorksUserSession UserSession, FString IPAddress); // [0xa94210] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebInitTxn.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebProcessAgreement
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebProcessAgreement : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1157) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1158) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebProcessAgreement.SetInput
	// void SetInput(FString Key, FString OrderID, FUWorksSteamID SteamID, FString AgreementID, int32_t AppID, int32_t amount, FString currency); // [0xa95560] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebProcessAgreement.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebQueryTxn
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebQueryTxn : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1159) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1160) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebQueryTxn.SetInput
	// void SetInput(FString Key, int32_t AppID, FString OrderID, FString TransID);                                             // [0xa958c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebQueryTxn.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebRefundTxn
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebRefundTxn : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1161) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1162) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebRefundTxn.SetInput
	// void SetInput(FString Key, FString OrderID, int32_t AppID);                                                              // [0xa93b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebRefundTxn.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetNewsForApp
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetNewsForApp : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1163) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1164) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetNewsForApp.SetInput
	// void SetInput(int32_t AppID, int32_t MaxLength, int32_t EndDate, int32_t Count, FString Feeds);                          // [0xa95e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetNewsForApp.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetNewsForAppAuthed
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetNewsForAppAuthed : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1165) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1166) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetNewsForAppAuthed.SetInput
	// void SetInput(FString Key, int32_t AppID, int32_t MaxLength, int32_t EndDate, int32_t Count, FString Feeds);             // [0xa96030] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetNewsForAppAuthed.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebRecordOfflinePlaytime
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebRecordOfflinePlaytime : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1167) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1168) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebRecordOfflinePlaytime.SetInput
	// void SetInput(FUWorksSteamID SteamID, FString Ticket, FUWorksPlaySessions PlaySessions);                                 // [0xa97480] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebRecordOfflinePlaytime.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetRecentlyPlayedGames
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetRecentlyPlayedGames : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1169) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1170) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetRecentlyPlayedGames.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t Count);                                                       // [0xa971c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetRecentlyPlayedGames.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetOwnedGames
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetOwnedGames : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1171) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1172) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetOwnedGames.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32_t> AppIDsFilter); // [0xa96f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetOwnedGames.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetSteamLevel
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetSteamLevel : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1173) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1174) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetSteamLevel.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID);                                                                      // [0xa88130] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetSteamLevel.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetBadges
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetBadges : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1175) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1176) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetBadges.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID);                                                                      // [0xa88130] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetBadges.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetCommunityBadgeProgress
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetCommunityBadgeProgress : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1177) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1178) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetCommunityBadgeProgress.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t BadgeID);                                                     // [0xa96e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetCommunityBadgeProgress.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebIsPlayingSharedGame
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebIsPlayingSharedGame : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1179) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1180) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebIsPlayingSharedGame.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppIDPlaying);                                                // [0xa97320] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebIsPlayingSharedGame.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebQueryFiles
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebQueryFiles : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1181) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1182) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebQueryFiles.SetInput
	// void SetInput(FString Key, char QueryType, int32_t Page, int32_t CreatorAppID, int32_t AppID, TArray<FString> RequiredTags, TArray<FString> ExcludedTags, TArray<FString> RequiredFlags, TArray<FString> OmittedFlags, FString SearchText, char FileType, FUWorksPublishedFileID ChildPublishedFileID, int32_t Days, bool bIncludeRecentVotesOnly, FUWorksRequiredKVTags RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int32_t ReturnPlaytimeStats, int32_t NumPerPage, bool bMatchAllTags, int32_t CacheMaxAgeSeconds, int32_t Language, bool bReturnMetadata); // [0xa97ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebQueryFiles.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebSetDeveloperMetadata
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebSetDeveloperMetadata : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1183) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1184) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebSetDeveloperMetadata.SetInput
	// void SetInput(FString Key, FUWorksPublishedFileID PublishedFileID, int32_t AppID, FString MetaData);                     // [0xa98750] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebSetDeveloperMetadata.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebUpdateTags
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebUpdateTags : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1185) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1186) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebUpdateTags.SetInput
	// void SetInput(FString Key, FUWorksPublishedFileID PublishedFileID, int32_t AppID, TArray<FString> AddTags, TArray<FString> RemoveTags); // [0xa98940] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebUpdateTags.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebRankedByPublicationOrder
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebRankedByPublicationOrder : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1187) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1188) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebRankedByPublicationOrder.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tags, TArray<FString> UserTags); // [0xa99350] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebRankedByPublicationOrder.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebRankedByTrend
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebRankedByTrend : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1189) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1190) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebRankedByTrend.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t FileType, int32_t Days, TArray<FString> Tags, TArray<FString> UserTags); // [0xa99850] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebRankedByTrend.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebRankedByVote
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebRankedByVote : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1191) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1192) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebRankedByVote.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tags, TArray<FString> UserTags); // [0xa99350] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebRankedByVote.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebResultSetSummary
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebResultSetSummary : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1193) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1194) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebResultSetSummary.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tags, TArray<FString> UserTags); // [0xa99d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebResultSetSummary.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebItemVoteSummary
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebItemVoteSummary : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1195) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1196) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebItemVoteSummary.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t Count, TArray<int32_t> PublishedFileIDs);      // [0xa9a580] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebItemVoteSummary.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebUserVoteSummary
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebUserVoteSummary : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1197) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1198) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebUserVoteSummary.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t Count, TArray<int32_t> PublishedFileIDs);      // [0xa9a580] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebUserVoteSummary.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebEnumerateUserPublishedFiles
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebEnumerateUserPublishedFiles : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1199) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1200) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebEnumerateUserPublishedFiles.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID);                                                       // [0xa93f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebEnumerateUserPublishedFiles.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebEnumerateUserSubscribedFiles
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebEnumerateUserSubscribedFiles : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1201) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1202) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebEnumerateUserSubscribedFiles.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t ListType);                                     // [0xa9b4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebEnumerateUserSubscribedFiles.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetCollectionDetails
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetCollectionDetails : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1203) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1204) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetCollectionDetails.SetInput
	// void SetInput(int32_t CollectionCount, TArray<int32_t> PublishedFileIDs);                                                // [0xa9b660] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetCollectionDetails.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetPublishedFileDetails
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetPublishedFileDetails : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1205) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1206) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetPublishedFileDetails.SetInput
	// void SetInput(int32_t ItemCount, TArray<int32_t> PublishedFileIDs);                                                      // [0xa9b790] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetPublishedFileDetails.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetUGCFileDetails
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetUGCFileDetails : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1207) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1208) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetUGCFileDetails.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t UGCID, int32_t AppID);                                        // [0xa9b8c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetUGCFileDetails.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebSetUGCUsedByGC
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebSetUGCUsedByGC : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1209) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1210) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebSetUGCUsedByGC.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t UGCID, int32_t AppID, bool bUsed);                            // [0xa9ba60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebSetUGCUsedByGC.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebSubscribePublishedFile
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebSubscribePublishedFile : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1211) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1212) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebSubscribePublishedFile.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t PublishedFileID);                              // [0xa9bc50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebSubscribePublishedFile.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebUnsubscribePublishedFile
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebUnsubscribePublishedFile : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1213) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1214) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebUnsubscribePublishedFile.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t PublishedFileID);                              // [0xa9bc50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebUnsubscribePublishedFile.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebCheckAppOwnership
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebCheckAppOwnership : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1215) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1216) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebCheckAppOwnership.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID);                                                       // [0xa93f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebCheckAppOwnership.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetAppPriceInfo
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetAppPriceInfo : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1217) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1218) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetAppPriceInfo.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, FString AppIDs);                                                      // [0xa9ce30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetAppPriceInfo.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetFriendList
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetFriendList : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1219) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1220) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetFriendList.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, FString Relationship);                                                // [0xa9cfe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetFriendList.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetPlayerBans
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetPlayerBans : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1221) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1222) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetPlayerBans.SetInput
	// void SetInput(FString Key, FString SteamIDs);                                                                            // [0xa9d190] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetPlayerBans.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetPlayerSummaries
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetPlayerSummaries : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1223) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1224) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetPlayerSummaries.SetInput
	// void SetInput(FString Key, FString SteamIDs);                                                                            // [0xa9d190] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetPlayerSummaries.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetPublisherAppOwnership
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetPublisherAppOwnership : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1225) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1226) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetPublisherAppOwnership.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID);                                                                      // [0xa9d310] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetPublisherAppOwnership.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetPublisherAppOwnershipChanges
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetPublisherAppOwnershipChanges : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1227) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1228) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetPublisherAppOwnershipChanges.SetInput
	// void SetInput(FString Key, FString PackageRowVersion, FString CDKeyRowVersion);                                          // [0xa9d440] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetPublisherAppOwnershipChanges.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetUserGroupList
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetUserGroupList : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1229) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1230) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetUserGroupList.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID);                                                                      // [0xa9d310] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetUserGroupList.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGrantPackage
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGrantPackage : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1231) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1232) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGrantPackage.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t PackageID, FString IPAddress, FString ThirdPartyKey, int32_t ThirdPartyAppID); // [0xa9d650] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGrantPackage.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebResolveVanityURL
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebResolveVanityURL : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1233) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1234) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebResolveVanityURL.SetInput
	// void SetInput(FString Key, FString VanityURL, char URLType);                                                             // [0xa9d920] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebResolveVanityURL.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebAuthenticateUser
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebAuthenticateUser : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1235) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1236) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebAuthenticateUser.SetInput
	// void SetInput(FUWorksSteamID SteamID, TArray<char> SessionKey, TArray<char> EncryptedLoginKey);                          // [0xa9de10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebAuthenticateUser.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebAuthenticateUserTicket
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebAuthenticateUserTicket : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1237) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1238) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebAuthenticateUserTicket.SetInput
	// void SetInput(FString Key, int32_t AppID, FString Ticket);                                                               // [0xa9dfb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebAuthenticateUserTicket.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetGlobalAchievementPercentagesForApp
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetGlobalAchievementPercentagesForApp : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1239) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1240) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetGlobalAchievementPercentagesForApp.SetInput
	// void SetInput(FUWorksGameID GameID);                                                                                     // [0xa9ecc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetGlobalAchievementPercentagesForApp.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetGlobalStatsForGame
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetGlobalStatsForGame : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1241) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1242) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetGlobalStatsForGame.SetInput
	// void SetInput(int32_t AppID, int32_t Count, TArray<FString> Name, int32_t StartDate, int32_t EndDate);                   // [0xa9ed50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetGlobalStatsForGame.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetNumberOfCurrentPlayers
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetNumberOfCurrentPlayers : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1243) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1244) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetNumberOfCurrentPlayers.SetInput
	// void SetInput(int32_t AppID);                                                                                            // [0xa9efd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetNumberOfCurrentPlayers.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetPlayerAchievements
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetPlayerAchievements : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1245) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1246) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetPlayerAchievements.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString Language);                                     // [0xa9f060] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetPlayerAchievements.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetSchemaForGame
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetSchemaForGame : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1247) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1248) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetSchemaForGame.SetInput
	// void SetInput(FString Key, int32_t AppID, FString Language);                                                             // [0xa9f250] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetSchemaForGame.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetUserStatsForGame
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetUserStatsForGame : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1249) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1250) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetUserStatsForGame.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID);                                                       // [0xa93f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetUserStatsForGame.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebSetUserStatsForGame
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebSetUserStatsForGame : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1251) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1252) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebSetUserStatsForGame.SetInput
	// void SetInput(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t Count, TArray<FString> Name, TArray<int32_t> Value); // [0xa9f400] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebSetUserStatsForGame.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebSetItemPaymentRules
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebSetItemPaymentRules : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1253) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1254) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebSetItemPaymentRules.SetInput
	// void SetInput(FString Key, int32_t AppID, int32_t GameItemID, FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles, FUWorksPartnerAccounts PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly); // [0xaa02f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebSetItemPaymentRules.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetFinalizedContributors
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetFinalizedContributors : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1255) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1256) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetFinalizedContributors.SetInput
	// void SetInput(FString Key, int32_t AppID, int32_t GameItemID);                                                           // [0xa9fdf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetFinalizedContributors.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebGetItemDailyRevenue
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebGetItemDailyRevenue : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1257) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1258) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebGetItemDailyRevenue.SetInput
	// void SetInput(FString Key, int32_t AppID, FString ItemId, int32_t DateStart, int32_t DateEnd);                           // [0xa9ff50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebGetItemDailyRevenue.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UWorksRequestWebPopulateItemDescriptions
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUWorksRequestWebPopulateItemDescriptions : public UUWorksRequestWeb
{ 
public:
	SDK_UNDEFINED(16,1259) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1260) /* FDelegateProperty */     __um(OnRequestCompletedMinimal);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UWorksRequestWebPopulateItemDescriptions.SetInput
	// void SetInput(FString Key, int32_t AppID, FUWorksLanguages Languages);                                                   // [0xaa0190] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UWorksRequestWebPopulateItemDescriptions.GetOutput
	// void GetOutput(FString& Content);                                                                                        // [0xa82430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetAppBetasNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetAppBetasNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1261) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetAppBetasNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetAppBetasNode.GetAppBetasNode
	// class UGetAppBetasNode* GetAppBetasNode(FString Key, int32_t AppID);                                                     // [0xaa1510] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetAppBuildsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetAppBuildsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1262) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetAppBuildsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetAppBuildsNode.GetAppBuildsNode
	// class UGetAppBuildsNode* GetAppBuildsNode(FString Key, int32_t AppID, int32_t Count);                                    // [0xaa1640] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetAppDepotVersionsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetAppDepotVersionsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1263) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetAppDepotVersionsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetAppDepotVersionsNode.GetAppDepotVersionsNode
	// class UGetAppDepotVersionsNode* GetAppDepotVersionsNode(FString Key, int32_t AppID);                                     // [0xaa17a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetAppListNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetAppListNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1264) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetAppListNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetAppListNode.GetAppListNode
	// class UGetAppListNode* GetAppListNode();                                                                                 // [0xaa18d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetCheatingReportsListNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetCheatingReportsListNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1265) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetCheatingReportsListNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetCheatingReportsListNode.GetCheatingReportsListNode
	// class UGetCheatingReportsListNode* GetCheatingReportsListNode(FString Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, FString ReportIDMin); // [0xaa1900] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetPlayersBannedNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetPlayersBannedNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1266) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetPlayersBannedNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetPlayersBannedNode.GetPlayersBannedNode
	// class UGetPlayersBannedNode* GetPlayersBannedNode(FString Key, int32_t AppID);                                           // [0xaa1bc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetServerListNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetServerListNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1267) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetServerListNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetServerListNode.GetServerListNode
	// class UGetServerListNode* GetServerListNode(FString Key, FString Filter, int32_t limit);                                 // [0xaa1cf0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetServersAtAddressNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetServersAtAddressNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1268) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetServersAtAddressNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetServersAtAddressNode.GetServersAtAddressNode
	// class UGetServersAtAddressNode* GetServersAtAddressNode(FString Addr);                                                   // [0xaa1ea0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.SetAppBuildLiveNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class USetAppBuildLiveNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1269) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.SetAppBuildLiveNode.SetAppBuildLiveNode
	// class USetAppBuildLiveNode* SetAppBuildLiveNode(FString Key, int32_t AppID, int32_t BuildID, FString BetaKey, FString Description); // [0xaa1f90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.SetAppBuildLiveNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.UpToDateCheckNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UUpToDateCheckNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1270) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UpToDateCheckNode.UpToDateCheckNode
	// class UUpToDateCheckNode* UpToDateCheckNode(int32_t AppID, int32_t Version);                                             // [0xaa2210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UpToDateCheckNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.PostGameDataFrameNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UPostGameDataFrameNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1271) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.PostGameDataFrameNode.PostGameDataFrameNode
	// class UPostGameDataFrameNode* PostGameDataFrameNode(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString BroadcastID, FString FrameData); // [0xaa2470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.PostGameDataFrameNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.ReportPlayerCheatingNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UReportPlayerCheatingNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1272) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.ReportPlayerCheatingNode.ReportPlayerCheatingNode
	// class UReportPlayerCheatingNode* ReportPlayerCheatingNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, FUWorksSteamID SteamIDReporter, int32_t AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity); // [0xaa4060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.ReportPlayerCheatingNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.RequestPlayerGameBanNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class URequestPlayerGameBanNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1273) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.RequestPlayerGameBanNode.RequestPlayerGameBanNode
	// class URequestPlayerGameBanNode* RequestPlayerGameBanNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, FUWorksSteamID ReportID, FString CheatDescription, int32_t Duration, bool bDelayBan); // [0xaa4430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.RequestPlayerGameBanNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.RemovePlayerGameBanNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class URemovePlayerGameBanNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1274) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.RemovePlayerGameBanNode.RemovePlayerGameBanNode
	// class URemovePlayerGameBanNode* RemovePlayerGameBanNode(FString Key, FUWorksSteamID SteamID, int32_t AppID);             // [0xaa3860] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.RemovePlayerGameBanNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.GetCheatingReportsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetCheatingReportsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1275) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetCheatingReportsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetCheatingReportsNode.GetCheatingReportsNode
	// class UGetCheatingReportsNode* GetCheatingReportsNode(FString Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, FString ReportIDMin, bool bIncludeReports, bool bIncludeBans, FUWorksSteamID SteamID); // [0xaa3560] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.RequestVacStatusForUserNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class URequestVacStatusForUserNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1276) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.RequestVacStatusForUserNode.RequestVacStatusForUserNode
	// class URequestVacStatusForUserNode* RequestVacStatusForUserNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString SessionId); // [0xaa46f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.RequestVacStatusForUserNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.StartSecureMultiplayerSessionNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UStartSecureMultiplayerSessionNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1277) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.StartSecureMultiplayerSessionNode.StartSecureMultiplayerSessionNode
	// class UStartSecureMultiplayerSessionNode* StartSecureMultiplayerSessionNode(FString Key, FUWorksSteamID SteamID, int32_t AppID); // [0xaa48e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.StartSecureMultiplayerSessionNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.EndSecureMultiplayerSessionNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UEndSecureMultiplayerSessionNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1278) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.EndSecureMultiplayerSessionNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.EndSecureMultiplayerSessionNode.EndSecureMultiplayerSessionNode
	// class UEndSecureMultiplayerSessionNode* EndSecureMultiplayerSessionNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString SessionId); // [0xaa3370] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.ReportCheatDataNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UReportCheatDataNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1279) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.ReportCheatDataNode.ReportCheatDataNode
	// class UReportCheatDataNode* ReportCheatDataNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32_t GameProcessID, int32_t CheatProcessID, FString CheatParamA, FString CheatParamB); // [0xaa39c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.ReportCheatDataNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.ReportAbuseNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UReportAbuseNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1280) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.ReportAbuseNode.ReportAbuseNode
	// class UReportAbuseNode* ReportAbuseNode(FString Key, FUWorksSteamID SteamIDActor, FUWorksSteamID SteamIDTarget, int32_t AppID, char AbuseType, char ContentType, FString Description, FString GID); // [0xaa4bd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.ReportAbuseNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.GetTradeHistoryNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetTradeHistoryNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1281) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetTradeHistoryNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetTradeHistoryNode.GetTradeHistoryNode
	// class UGetTradeHistoryNode* GetTradeHistoryNode(FString Key, int32_t MaxTrades, int32_t StartAfterTime, FString StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, FString Language, bool bIncludeFailed, bool bIncludeTotal); // [0xaa6470] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.FlushInventoryCacheNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UFlushInventoryCacheNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1282) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.FlushInventoryCacheNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.FlushInventoryCacheNode.FlushInventoryCacheNode
	// class UFlushInventoryCacheNode* FlushInventoryCacheNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString ContextID); // [0xaa6280] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.FlushAssetAppearanceCacheNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UFlushAssetAppearanceCacheNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1283) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.FlushAssetAppearanceCacheNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.FlushAssetAppearanceCacheNode.FlushAssetAppearanceCacheNode
	// class UFlushAssetAppearanceCacheNode* FlushAssetAppearanceCacheNode(FString Key, int32_t AppID);                         // [0xaa6020] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.FlushContextCacheNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UFlushContextCacheNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1284) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.FlushContextCacheNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.FlushContextCacheNode.FlushContextCacheNode
	// class UFlushContextCacheNode* FlushContextCacheNode(FString Key, int32_t AppID);                                         // [0xaa6150] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetTradeOffersNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetTradeOffersNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1285) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetTradeOffersNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetTradeOffersNode.GetTradeOffersNode
	// class UGetTradeOffersNode* GetTradeOffersNode(FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff); // [0xaa6a20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetTradeOfferNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetTradeOfferNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1286) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetTradeOfferNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetTradeOfferNode.GetTradeOfferNode
	// class UGetTradeOfferNode* GetTradeOfferNode(FString Key, FString TradeOfferID, FString Language);                        // [0xaa6810] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetTradeOffersSummaryNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetTradeOffersSummaryNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1287) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetTradeOffersSummaryNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetTradeOffersSummaryNode.GetTradeOffersSummaryNode
	// class UGetTradeOffersSummaryNode* GetTradeOffersSummaryNode(FString Key, int32_t TimeLastVisit);                         // [0xaa6d40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.DeclineTradeOfferNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UDeclineTradeOfferNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1288) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.DeclineTradeOfferNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.DeclineTradeOfferNode.DeclineTradeOfferNode
	// class UDeclineTradeOfferNode* DeclineTradeOfferNode(FString Key, FString TradeOfferID);                                  // [0xaa5ea0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.CancelTradeOfferNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCancelTradeOfferNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1289) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.CancelTradeOfferNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.CancelTradeOfferNode.CancelTradeOfferNode
	// class UCancelTradeOfferNode* CancelTradeOfferNode(FString Key, FString TradeOfferID);                                    // [0xaa5d20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetMarketEligibilityNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetMarketEligibilityNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1290) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetMarketEligibilityNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetMarketEligibilityNode.GetMarketEligibilityNode
	// class UGetMarketEligibilityNode* GetMarketEligibilityNode(FString Key, FUWorksSteamID SteamID);                          // [0xaa7800] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.CancelAppListingsForUserNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCancelAppListingsForUserNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1291) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.CancelAppListingsForUserNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.CancelAppListingsForUserNode.CancelAppListingsForUserNode
	// class UCancelAppListingsForUserNode* CancelAppListingsForUserNode(FString Key, int32_t AppID, FUWorksSteamID SteamID, bool bSynchronous); // [0xaa74b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetAssetIDNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetAssetIDNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1292) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetAssetIDNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetAssetIDNode.GetAssetIDNode
	// class UGetAssetIDNode* GetAssetIDNode(FString Key, int32_t AppID, FString ListingID);                                    // [0xaa7650] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetPopularNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetPopularNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1293) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetPopularNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetPopularNode.GetPopularNode
	// class UGetPopularNode* GetPopularNode(FString Key, FString Language, int32_t Rows, int32_t Start, int32_t FilterAppID, int32_t ECurrency); // [0xaa7930] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.CanTradeNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCanTradeNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1294) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.CanTradeNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.CanTradeNode.CanTradeNode
	// class UCanTradeNode* CanTradeNode(FString Key, int32_t AppID, FUWorksSteamID SteamID, FUWorksSteamID TargetId);          // [0xaa8810] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.FinalizeAssetTransactionNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UFinalizeAssetTransactionNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1295) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.FinalizeAssetTransactionNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.FinalizeAssetTransactionNode.FinalizeAssetTransactionNode
	// class UFinalizeAssetTransactionNode* FinalizeAssetTransactionNode(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString TxnID, FString Language); // [0xaa89a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetAssetClassInfoNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetAssetClassInfoNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1296) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetAssetClassInfoNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetAssetClassInfoNode.GetAssetClassInfoNode
	// class UGetAssetClassInfoNode* GetAssetClassInfoNode(FString Key, int32_t AppID, int32_t ClassCount, FString ClassID0, FString Language, FString InstanceID0); // [0xaa8c20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetAssetPricesNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetAssetPricesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1297) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetAssetPricesNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetAssetPricesNode.GetAssetPricesNode
	// class UGetAssetPricesNode* GetAssetPricesNode(FString Key, int32_t AppID, FString currency, FString Language);           // [0xaa8f30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetExportedAssetsForUserNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetExportedAssetsForUserNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1298) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetExportedAssetsForUserNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetExportedAssetsForUserNode.GetExportedAssetsForUserNode
	// class UGetExportedAssetsForUserNode* GetExportedAssetsForUserNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString ContextID); // [0xaa9170] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetMarketPricesNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetMarketPricesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1299) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetMarketPricesNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetMarketPricesNode.GetMarketPricesNode
	// class UGetMarketPricesNode* GetMarketPricesNode(FString Key, int32_t AppID);                                             // [0xaa9360] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.StartAssetTransactionNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UStartAssetTransactionNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1300) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.StartAssetTransactionNode.StartAssetTransactionNode
	// class UStartAssetTransactionNode* StartAssetTransactionNode(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString AssetID0, int32_t AssetQuantity0, FString currency, FString Language, FString IPAddress, FString Referrer, bool bClientAuth); // [0xaa9490] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.StartAssetTransactionNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.StartTradeNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UStartTradeNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1301) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.StartTradeNode.StartTradeNode
	// class UStartTradeNode* StartTradeNode(FString Key, int32_t AppID, FUWorksSteamID PartyA, FUWorksSteamID PartyB);         // [0xaa9960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.StartTradeNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.GetHistoryCommandDetailsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetHistoryCommandDetailsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1302) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetHistoryCommandDetailsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetHistoryCommandDetailsNode.GetHistoryCommandDetailsNode
	// class UGetHistoryCommandDetailsNode* GetHistoryCommandDetailsNode(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString Command, FString ContextID, FString Arguments); // [0xaaa130] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetUserHistoryNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetUserHistoryNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1303) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetUserHistoryNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetUserHistoryNode.GetUserHistoryNode
	// class UGetUserHistoryNode* GetUserHistoryNode(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString ContextID, int32_t StartTime, int32_t EndTime); // [0xaaa440] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.HistoryExecuteCommandsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UHistoryExecuteCommandsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1304) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.HistoryExecuteCommandsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.HistoryExecuteCommandsNode.HistoryExecuteCommandsNode
	// class UHistoryExecuteCommandsNode* HistoryExecuteCommandsNode(FString Key, int32_t AppID, FUWorksSteamID SteamID, FString ContextID, FString ActorId); // [0xaaa6a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.SupportGetAssetHistoryNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class USupportGetAssetHistoryNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1305) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.SupportGetAssetHistoryNode.SupportGetAssetHistoryNode
	// class USupportGetAssetHistoryNode* SupportGetAssetHistoryNode(FString Key, int32_t AppID, FString AssetID, FString ContextID); // [0xaaa920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.SupportGetAssetHistoryNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.CreateSessionNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCreateSessionNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1306) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.CreateSessionNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.CreateSessionNode.CreateSessionNode
	// class UCreateSessionNode* CreateSessionNode(FString Key, int32_t AppID, FString Context, FUWorksTitle Title, FUWorksUsers users, FUWorksSteamID SteamID); // [0xaab650] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UpdateSessionNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UUpdateSessionNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1307) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UpdateSessionNode.UpdateSessionNode
	// class UUpdateSessionNode* UpdateSessionNode(FString Key, FString SessionId, int32_t AppID, FUWorksTitle Title, FUWorksUsers users, FUWorksSteamID SteamID); // [0xaac220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UpdateSessionNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.EnumerateSessionsForAppNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UEnumerateSessionsForAppNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1308) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.EnumerateSessionsForAppNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.EnumerateSessionsForAppNode.EnumerateSessionsForAppNode
	// class UEnumerateSessionsForAppNode* EnumerateSessionsForAppNode(FString Key, int32_t AppID, FUWorksSteamID SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language); // [0xaabc50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetSessionDetailsForAppNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetSessionDetailsForAppNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1309) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetSessionDetailsForAppNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetSessionDetailsForAppNode.GetSessionDetailsForAppNode
	// class UGetSessionDetailsForAppNode* GetSessionDetailsForAppNode(FString Key, FUWorksSessions Sessions, int32_t AppID, FString Language); // [0xaabed0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.RequestNotificationsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class URequestNotificationsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1310) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.RequestNotificationsNode.RequestNotificationsNode
	// class URequestNotificationsNode* RequestNotificationsNode(FString Key, FUWorksSteamID SteamID, int32_t AppID);           // [0xaac0c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.RequestNotificationsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.DeleteSessionNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UDeleteSessionNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1311) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.DeleteSessionNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.DeleteSessionNode.DeleteSessionNode
	// class UDeleteSessionNode* DeleteSessionNode(FString Key, FString SessionId, int32_t AppID, FUWorksSteamID SteamID);      // [0xaaba60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.DeleteSessionBatchNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UDeleteSessionBatchNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1312) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.DeleteSessionBatchNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.DeleteSessionBatchNode.DeleteSessionBatchNode
	// class UDeleteSessionBatchNode* DeleteSessionBatchNode(FString Key, FString SessionId, int32_t AppID);                    // [0xaab8b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetAccountListNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetAccountListNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1313) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetAccountListNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetAccountListNode.GetAccountListNode
	// class UGetAccountListNode* GetAccountListNode(FString Key);                                                              // [0xaad700] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.CreateAccountNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCreateAccountNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1314) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.CreateAccountNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.CreateAccountNode.CreateAccountNode
	// class UCreateAccountNode* CreateAccountNode(FString Key, int32_t AppID, FString Memo);                                   // [0xaad420] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.SetMemoNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class USetMemoNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1315) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.SetMemoNode.SetMemoNode
	// class USetMemoNode* SetMemoNode(FString Key, FUWorksSteamID SteamID, FString Memo);                                      // [0xaae020] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.SetMemoNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.ResetLoginTokenNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UResetLoginTokenNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1316) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.ResetLoginTokenNode.ResetLoginTokenNode
	// class UResetLoginTokenNode* ResetLoginTokenNode(FString Key, FUWorksSteamID SteamID);                                    // [0xaadd50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.ResetLoginTokenNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.DeleteAccountNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UDeleteAccountNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1317) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.DeleteAccountNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.DeleteAccountNode.DeleteAccountNode
	// class UDeleteAccountNode* DeleteAccountNode(FString Key, FUWorksSteamID SteamID);                                        // [0xaad5d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetAccountPublicInfoNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetAccountPublicInfoNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1318) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetAccountPublicInfoNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetAccountPublicInfoNode.GetAccountPublicInfoNode
	// class UGetAccountPublicInfoNode* GetAccountPublicInfoNode(FString Key, FUWorksSteamID SteamID);                          // [0xaad7f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.QueryLoginTokenNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UQueryLoginTokenNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1319) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.QueryLoginTokenNode.QueryLoginTokenNode
	// class UQueryLoginTokenNode* QueryLoginTokenNode(FString Key, FString LoginToken);                                        // [0xaadbd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.QueryLoginTokenNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.SetBanStatusNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class USetBanStatusNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1320) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.SetBanStatusNode.SetBanStatusNode
	// class USetBanStatusNode* SetBanStatusNode(FString Key, FUWorksSteamID SteamID, bool bBanned, int32_t BanSeconds);        // [0xaade80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.SetBanStatusNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.GetServerSteamIDsByIPNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetServerSteamIDsByIPNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1321) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetServerSteamIDsByIPNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetServerSteamIDsByIPNode.GetServerSteamIDsByIPNode
	// class UGetServerSteamIDsByIPNode* GetServerSteamIDsByIPNode(FString Key, FString ServerIPs);                             // [0xaada50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetServerIPsBySteamIDNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetServerIPsBySteamIDNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1322) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetServerIPsBySteamIDNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetServerIPsBySteamIDNode.GetServerIPsBySteamIDNode
	// class UGetServerIPsBySteamIDNode* GetServerIPsBySteamIDNode(FString Key, FUWorksSteamID ServerSteamID);                  // [0xaad920] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetGameServerPlayerStatsForGameNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetGameServerPlayerStatsForGameNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1323) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetGameServerPlayerStatsForGameNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetGameServerPlayerStatsForGameNode.GetGameServerPlayerStatsForGameNode
	// class UGetGameServerPlayerStatsForGameNode* GetGameServerPlayerStatsForGameNode(FString Key, FUWorksGameID GameID, int32_t AppID, FString RangeStart, FString RangeEnd, int32_t MaxResults); // [0xaae360] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.AddItemNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UAddItemNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1324) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.AddItemNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.AddItemNode.AddItemNode
	// class UAddItemNode* AddItemNode(FString Key, int32_t AppID, TArray<FUWorksSteamItemDef> Itemdefid, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString RequestID); // [0xaaf420] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.AddPromoItemNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UAddPromoItemNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1325) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.AddPromoItemNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.AddPromoItemNode.AddPromoItemNode
	// class UAddPromoItemNode* AddPromoItemNode(FString Key, int32_t AppID, FUWorksSteamItemDef Itemdefid, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString RequestID); // [0xaaf780] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.ConsumeItemNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UConsumeItemNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1326) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.ConsumeItemNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.ConsumeItemNode.ConsumeItemNode
	// class UConsumeItemNode* ConsumeItemNode(FString Key, int32_t AppID, FUWorksSteamItemInstanceID ItemId, int32_t quantity, FUWorksSteamID SteamID, FString RequestID); // [0xaafcc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.ExchangeItemNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UExchangeItemNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1327) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.ExchangeItemNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.ExchangeItemNode.ExchangeItemNode
	// class UExchangeItemNode* ExchangeItemNode(FString Key, int32_t AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32_t> MaterialsQuantity, FUWorksSteamItemDef OutputItemDefID); // [0xaaff30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetInventoryNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetInventoryNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1328) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetInventoryNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetInventoryNode.GetInventoryNode
	// class UGetInventoryNode* GetInventoryNode(FString Key, int32_t AppID, FUWorksSteamID SteamID);                           // [0xab01e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetItemDefsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetItemDefsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1329) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetItemDefsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetItemDefsNode.GetItemDefsNode
	// class UGetItemDefsNode* GetItemDefsNode(FString Key, int32_t AppID, FString ModifiedSince, TArray<FUWorksSteamItemDef> ItemDefIDs, TArray<FUWorksSteamItemDef> WorkshopIDs, int32_t CacheMaxAgeSeconds); // [0xab0340] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetPriceSheetNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetPriceSheetNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1330) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetPriceSheetNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetPriceSheetNode.GetPriceSheetNode
	// class UGetPriceSheetNode* GetPriceSheetNode(FString Key, int32_t ECurrency);                                             // [0xab0650] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.ConsolidateNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UConsolidateNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1331) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.ConsolidateNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.ConsolidateNode.ConsolidateNode
	// class UConsolidateNode* ConsolidateNode(FString Key, int32_t AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef> Itemdefid, bool bForce); // [0xaafa90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetQuantityNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetQuantityNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1332) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetQuantityNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetQuantityNode.GetQuantityNode
	// class UGetQuantityNode* GetQuantityNode(FString Key, int32_t AppID, FUWorksSteamID SteamID, FUWorksSteamItemDef Itemdefid, bool bForce); // [0xab0780] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.DeleteLeaderboardNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UDeleteLeaderboardNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1333) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.DeleteLeaderboardNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.DeleteLeaderboardNode.DeleteLeaderboardNode
	// class UDeleteLeaderboardNode* DeleteLeaderboardNode(FString Key, int32_t AppID, FString Name);                           // [0xab12c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.FindOrCreateLeaderboardNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UFindOrCreateLeaderboardNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1334) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.FindOrCreateLeaderboardNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.FindOrCreateLeaderboardNode.FindOrCreateLeaderboardNode
	// class UFindOrCreateLeaderboardNode* FindOrCreateLeaderboardNode(FString Key, int32_t AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads); // [0xab1470] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetLeaderboardEntriesNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetLeaderboardEntriesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1335) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetLeaderboardEntriesNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetLeaderboardEntriesNode.GetLeaderboardEntriesNode
	// class UGetLeaderboardEntriesNode* GetLeaderboardEntriesNode(FString Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardID, int32_t DataRequest, FUWorksSteamID SteamID); // [0xab1820] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetLeaderboardsForGameNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetLeaderboardsForGameNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1336) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetLeaderboardsForGameNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetLeaderboardsForGameNode.GetLeaderboardsForGameNode
	// class UGetLeaderboardsForGameNode* GetLeaderboardsForGameNode(FString Key, int32_t AppID);                               // [0xab1a80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.ResetLeaderboardNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UResetLeaderboardNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1337) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.ResetLeaderboardNode.ResetLeaderboardNode
	// class UResetLeaderboardNode* ResetLeaderboardNode(FString Key, int32_t AppID, int32_t LeaderboardID);                    // [0xab1bb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.ResetLeaderboardNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.SetLeaderboardScoreNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class USetLeaderboardScoreNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1338) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.SetLeaderboardScoreNode.SetLeaderboardScoreNode
	// class USetLeaderboardScoreNode* SetLeaderboardScoreNode(FString Key, int32_t AppID, int32_t LeaderboardID, FUWorksSteamID SteamID, int32_t Score, FString ScoreMethod, TArray<char> Details); // [0xab1d10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.SetLeaderboardScoreNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.AdjustAgreementNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UAdjustAgreementNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1339) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.AdjustAgreementNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.AdjustAgreementNode.AdjustAgreementNode
	// class UAdjustAgreementNode* AdjustAgreementNode(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32_t AppID, FString NextProcessDate); // [0xab2fa0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.CancelAgreementNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCancelAgreementNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1340) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.CancelAgreementNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.CancelAgreementNode.CancelAgreementNode
	// class UCancelAgreementNode* CancelAgreementNode(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32_t AppID); // [0xab3220] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.FinalizeTxnNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UFinalizeTxnNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1341) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.FinalizeTxnNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.FinalizeTxnNode.FinalizeTxnNode
	// class UFinalizeTxnNode* FinalizeTxnNode(FString Key, FString OrderID, int32_t AppID);                                    // [0xab3410] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetReportNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetReportNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1342) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetReportNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetReportNode.GetReportNode
	// class UGetReportNode* GetReportNode(FString Key, int32_t AppID, FString Time, EUWorksReportType Type, int32_t MaxResults); // [0xab35c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetUserAgreementInfoNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetUserAgreementInfoNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1343) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetUserAgreementInfoNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetUserAgreementInfoNode.GetUserAgreementInfoNode
	// class UGetUserAgreementInfoNode* GetUserAgreementInfoNode(FString Key, FUWorksSteamID SteamID, int32_t AppID);           // [0xab37e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetUserInfoNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetUserInfoNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1344) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetUserInfoNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetUserInfoNode.GetUserInfoNode
	// class UGetUserInfoNode* GetUserInfoNode(FString Key, FUWorksSteamID SteamID, FString IPAddress);                         // [0xab3940] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.InitTxnNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UInitTxnNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1345) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.InitTxnNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.InitTxnNode.InitTxnNode
	// class UInitTxnNode* InitTxnNode(FString Key, FString OrderID, FUWorksSteamID SteamID, int32_t AppID, int32_t ItemCount, FString Language, FString currency, TArray<FUWorksSteamItemDef> ItemIDs, TArray<int32_t> Quantities, TArray<int32_t> Amounts, TArray<FString> Descriptions, TArray<FString> Categories, TArray<int32_t> AssociatedBundles, TArray<FString> BillingTypes, TArray<FString> StartDates, TArray<FString> EndDates, TArray<FString> Periods, TArray<int32_t> Frequencies, TArray<FString> RecurringAmounts, int32_t BundleCount, TArray<int32_t> BundleIDs, TArray<int32_t> BundleQuantities, TArray<FString> BundleDescriptions, TArray<FString> BundleCategories, EUWorksUserSession UserSession, FString IPAddress); // [0xab3af0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.ProcessAgreementNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UProcessAgreementNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1346) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.ProcessAgreementNode.ProcessAgreementNode
	// class UProcessAgreementNode* ProcessAgreementNode(FString Key, FString OrderID, FUWorksSteamID SteamID, FString AgreementID, int32_t AppID, int32_t amount, FString currency); // [0xab4e50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.ProcessAgreementNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.QueryTxnNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UQueryTxnNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1347) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.QueryTxnNode.QueryTxnNode
	// class UQueryTxnNode* QueryTxnNode(FString Key, int32_t AppID, FString OrderID, FString TransID);                         // [0xab5190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.QueryTxnNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.RefundTxnNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class URefundTxnNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1348) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.RefundTxnNode.RefundTxnNode
	// class URefundTxnNode* RefundTxnNode(FString Key, FString OrderID, int32_t AppID);                                        // [0xab53d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.RefundTxnNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.GetNewsForAppNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetNewsForAppNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1349) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetNewsForAppNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetNewsForAppNode.GetNewsForAppNode
	// class UGetNewsForAppNode* GetNewsForAppNode(int32_t AppID, int32_t MaxLength, int32_t EndDate, int32_t Count, FString Feeds); // [0xab5b10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetNewsForAppAuthedNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetNewsForAppAuthedNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1350) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetNewsForAppAuthedNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetNewsForAppAuthedNode.GetNewsForAppAuthedNode
	// class UGetNewsForAppAuthedNode* GetNewsForAppAuthedNode(FString Key, int32_t AppID, int32_t MaxLength, int32_t EndDate, int32_t Count, FString Feeds); // [0xab58a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.RecordOfflinePlaytimeNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class URecordOfflinePlaytimeNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1351) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.RecordOfflinePlaytimeNode.RecordOfflinePlaytimeNode
	// class URecordOfflinePlaytimeNode* RecordOfflinePlaytimeNode(FUWorksSteamID SteamID, FString Ticket, FUWorksPlaySessions PlaySessions); // [0xab7090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.RecordOfflinePlaytimeNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.GetRecentlyPlayedGamesNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetRecentlyPlayedGamesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1352) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetRecentlyPlayedGamesNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetRecentlyPlayedGamesNode.GetRecentlyPlayedGamesNode
	// class UGetRecentlyPlayedGamesNode* GetRecentlyPlayedGamesNode(FString Key, FUWorksSteamID SteamID, int32_t Count);       // [0xab6ca0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetOwnedGamesNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetOwnedGamesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1353) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetOwnedGamesNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetOwnedGamesNode.GetOwnedGamesNode
	// class UGetOwnedGamesNode* GetOwnedGamesNode(FString Key, FUWorksSteamID SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32_t> AppIDsFilter); // [0xab6a60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetSteamLevelNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetSteamLevelNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1354) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetSteamLevelNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetSteamLevelNode.GetSteamLevelNode
	// class UGetSteamLevelNode* GetSteamLevelNode(FString Key, FUWorksSteamID SteamID);                                        // [0xab6e00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetBadgesNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetBadgesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1355) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetBadgesNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetBadgesNode.GetBadgesNode
	// class UGetBadgesNode* GetBadgesNode(FString Key, FUWorksSteamID SteamID);                                                // [0xab67d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetCommunityBadgeProgressNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetCommunityBadgeProgressNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1356) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetCommunityBadgeProgressNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetCommunityBadgeProgressNode.GetCommunityBadgeProgressNode
	// class UGetCommunityBadgeProgressNode* GetCommunityBadgeProgressNode(FString Key, FUWorksSteamID SteamID, int32_t BadgeID); // [0xab6900] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.IsPlayingSharedGameNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UIsPlayingSharedGameNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1357) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.IsPlayingSharedGameNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.IsPlayingSharedGameNode.IsPlayingSharedGameNode
	// class UIsPlayingSharedGameNode* IsPlayingSharedGameNode(FString Key, FUWorksSteamID SteamID, int32_t AppIDPlaying);      // [0xab6f30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.QueryFilesNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UQueryFilesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1358) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.QueryFilesNode.QueryFilesNode
	// class UQueryFilesNode* QueryFilesNode(FString Key, char QueryType, int32_t Page, int32_t CreatorAppID, int32_t AppID, TArray<FString> RequiredTags, TArray<FString> ExcludedTags, TArray<FString> RequiredFlags, TArray<FString> OmittedFlags, FString SearchText, char FileType, FUWorksPublishedFileID ChildPublishedFileID, int32_t Days, bool bIncludeRecentVotesOnly, FUWorksRequiredKVTags RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int32_t ReturnPlaytimeStats, int32_t NumPerPage, bool bMatchAllTags, int32_t CacheMaxAgeSeconds, int32_t Language, bool bReturnMetadata); // [0xab76a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.QueryFilesNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.SetDeveloperMetadataNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class USetDeveloperMetadataNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1359) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.SetDeveloperMetadataNode.SetDeveloperMetadataNode
	// class USetDeveloperMetadataNode* SetDeveloperMetadataNode(FString Key, FUWorksPublishedFileID PublishedFileID, int32_t AppID, FString MetaData); // [0xab8330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.SetDeveloperMetadataNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.UpdateTagsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UUpdateTagsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1360) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UpdateTagsNode.UpdateTagsNode
	// class UUpdateTagsNode* UpdateTagsNode(FString Key, FUWorksPublishedFileID PublishedFileID, int32_t AppID, TArray<FString> AddTags, TArray<FString> RemoveTags); // [0xab8520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UpdateTagsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.RankedByPublicationOrderNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class URankedByPublicationOrderNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1361) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.RankedByPublicationOrderNode.RankedByPublicationOrderNode
	// class URankedByPublicationOrderNode* RankedByPublicationOrderNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tags, TArray<FString> UserTags); // [0xab8ef0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.RankedByPublicationOrderNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.RankedByTrendNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class URankedByTrendNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1362) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.RankedByTrendNode.RankedByTrendNode
	// class URankedByTrendNode* RankedByTrendNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t FileType, int32_t Days, TArray<FString> Tags, TArray<FString> UserTags); // [0xab93f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.RankedByTrendNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.RankedByVoteNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class URankedByVoteNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1363) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.RankedByVoteNode.RankedByVoteNode
	// class URankedByVoteNode* RankedByVoteNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tags, TArray<FString> UserTags); // [0xab9930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.RankedByVoteNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.ResultSetSummaryNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UResultSetSummaryNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1364) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.ResultSetSummaryNode.ResultSetSummaryNode
	// class UResultSetSummaryNode* ResultSetSummaryNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tags, TArray<FString> UserTags); // [0xab9e30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.ResultSetSummaryNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.ItemVoteSummaryNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UItemVoteSummaryNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1365) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.ItemVoteSummaryNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.ItemVoteSummaryNode.ItemVoteSummaryNode
	// class UItemVoteSummaryNode* ItemVoteSummaryNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t Count, TArray<int32_t> PublishedFileIDs); // [0xaba5f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.UserVoteSummaryNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UUserVoteSummaryNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1366) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UserVoteSummaryNode.UserVoteSummaryNode
	// class UUserVoteSummaryNode* UserVoteSummaryNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t Count, TArray<int32_t> PublishedFileIDs); // [0xaba810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UserVoteSummaryNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.EnumerateUserPublishedFilesNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UEnumerateUserPublishedFilesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1367) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.EnumerateUserPublishedFilesNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.EnumerateUserPublishedFilesNode.EnumerateUserPublishedFilesNode
	// class UEnumerateUserPublishedFilesNode* EnumerateUserPublishedFilesNode(FString Key, FUWorksSteamID SteamID, int32_t AppID); // [0xabb6b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.EnumerateUserSubscribedFilesNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UEnumerateUserSubscribedFilesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1368) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.EnumerateUserSubscribedFilesNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.EnumerateUserSubscribedFilesNode.EnumerateUserSubscribedFilesNode
	// class UEnumerateUserSubscribedFilesNode* EnumerateUserSubscribedFilesNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t ListType); // [0xabb810] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetCollectionDetailsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetCollectionDetailsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1369) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetCollectionDetailsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetCollectionDetailsNode.GetCollectionDetailsNode
	// class UGetCollectionDetailsNode* GetCollectionDetailsNode(int32_t CollectionCount, TArray<int32_t> PublishedFileIDs);    // [0xabb9a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetPublishedFileDetailsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetPublishedFileDetailsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1370) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetPublishedFileDetailsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetPublishedFileDetailsNode.GetPublishedFileDetailsNode
	// class UGetPublishedFileDetailsNode* GetPublishedFileDetailsNode(int32_t ItemCount, TArray<int32_t> PublishedFileIDs);    // [0xabbad0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetUGCFileDetailsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetUGCFileDetailsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1371) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetUGCFileDetailsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetUGCFileDetailsNode.GetUGCFileDetailsNode
	// class UGetUGCFileDetailsNode* GetUGCFileDetailsNode(FString Key, FUWorksSteamID SteamID, int32_t UGCID, int32_t AppID);  // [0xabbc00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.SetUGCUsedByGCNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class USetUGCUsedByGCNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1372) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.SetUGCUsedByGCNode.SetUGCUsedByGCNode
	// class USetUGCUsedByGCNode* SetUGCUsedByGCNode(FString Key, FUWorksSteamID SteamID, int32_t UGCID, int32_t AppID, bool bUsed); // [0xabbd90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.SetUGCUsedByGCNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.SubscribePublishedFileNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class USubscribePublishedFileNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1373) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.SubscribePublishedFileNode.SubscribePublishedFileNode
	// class USubscribePublishedFileNode* SubscribePublishedFileNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t PublishedFileID); // [0xabbf70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.SubscribePublishedFileNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.UnsubscribePublishedFileNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UUnsubscribePublishedFileNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1374) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.UnsubscribePublishedFileNode.UnsubscribePublishedFileNode
	// class UUnsubscribePublishedFileNode* UnsubscribePublishedFileNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t PublishedFileID); // [0xabc100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.UnsubscribePublishedFileNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.CheckAppOwnershipNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCheckAppOwnershipNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1375) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.CheckAppOwnershipNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.CheckAppOwnershipNode.CheckAppOwnershipNode
	// class UCheckAppOwnershipNode* CheckAppOwnershipNode(FString Key, FUWorksSteamID SteamID, int32_t AppID);                 // [0xabd230] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetAppPriceInfoNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetAppPriceInfoNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1376) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetAppPriceInfoNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetAppPriceInfoNode.GetAppPriceInfoNode
	// class UGetAppPriceInfoNode* GetAppPriceInfoNode(FString Key, FUWorksSteamID SteamID, FString AppIDs);                    // [0xabd390] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetFriendListNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetFriendListNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1377) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetFriendListNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetFriendListNode.GetFriendListNode
	// class UGetFriendListNode* GetFriendListNode(FString Key, FUWorksSteamID SteamID, FString Relationship);                  // [0xabd540] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetPlayerBansNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetPlayerBansNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1378) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetPlayerBansNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetPlayerBansNode.GetPlayerBansNode
	// class UGetPlayerBansNode* GetPlayerBansNode(FString Key, FString SteamIDs);                                              // [0xabd6f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetPlayerSummariesNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetPlayerSummariesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1379) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetPlayerSummariesNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetPlayerSummariesNode.GetPlayerSummariesNode
	// class UGetPlayerSummariesNode* GetPlayerSummariesNode(FString Key, FString SteamIDs);                                    // [0xabd870] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetPublisherAppOwnershipNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetPublisherAppOwnershipNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1380) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetPublisherAppOwnershipNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetPublisherAppOwnershipNode.GetPublisherAppOwnershipNode
	// class UGetPublisherAppOwnershipNode* GetPublisherAppOwnershipNode(FString Key, FUWorksSteamID SteamID);                  // [0xabdc00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetPublisherAppOwnershipChangesNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetPublisherAppOwnershipChangesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1381) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetPublisherAppOwnershipChangesNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetPublisherAppOwnershipChangesNode.GetPublisherAppOwnershipChangesNode
	// class UGetPublisherAppOwnershipChangesNode* GetPublisherAppOwnershipChangesNode(FString Key, FString PackageRowVersion, FString CDKeyRowVersion); // [0xabd9f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetUserGroupListNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetUserGroupListNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1382) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetUserGroupListNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetUserGroupListNode.GetUserGroupListNode
	// class UGetUserGroupListNode* GetUserGroupListNode(FString Key, FUWorksSteamID SteamID);                                  // [0xabdd30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GrantPackageNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGrantPackageNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1383) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GrantPackageNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GrantPackageNode.GrantPackageNode
	// class UGrantPackageNode* GrantPackageNode(FString Key, FUWorksSteamID SteamID, int32_t PackageID, FString IPAddress, FString ThirdPartyKey, int32_t ThirdPartyAppID); // [0xabde60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.ResolveVanityURLNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UResolveVanityURLNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1384) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.ResolveVanityURLNode.ResolveVanityURLNode
	// class UResolveVanityURLNode* ResolveVanityURLNode(FString Key, FString VanityURL, char URLType);                         // [0xabe110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.ResolveVanityURLNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.AuthenticateUserNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UAuthenticateUserNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1385) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.AuthenticateUserNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.AuthenticateUserNode.AuthenticateUserNode
	// class UAuthenticateUserNode* AuthenticateUserNode(FUWorksSteamID SteamID, TArray<char> SessionKey, TArray<char> EncryptedLoginKey); // [0xabe5e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.AuthenticateUserTicketNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UAuthenticateUserTicketNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1386) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.AuthenticateUserTicketNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.AuthenticateUserTicketNode.AuthenticateUserTicketNode
	// class UAuthenticateUserTicketNode* AuthenticateUserTicketNode(FString Key, int32_t AppID, FString Ticket);               // [0xabe780] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetGlobalAchievementPercentagesForAppNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetGlobalAchievementPercentagesForAppNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1387) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetGlobalAchievementPercentagesForAppNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetGlobalAchievementPercentagesForAppNode.GetGlobalAchievementPercentagesForAppNode
	// class UGetGlobalAchievementPercentagesForAppNode* GetGlobalAchievementPercentagesForAppNode(FUWorksGameID GameID);       // [0xabf420] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetGlobalStatsForGameNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetGlobalStatsForGameNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1388) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetGlobalStatsForGameNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetGlobalStatsForGameNode.GetGlobalStatsForGameNode
	// class UGetGlobalStatsForGameNode* GetGlobalStatsForGameNode(int32_t AppID, int32_t Count, TArray<FString> Name, int32_t StartDate, int32_t EndDate); // [0xabf4b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetNumberOfCurrentPlayersNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetNumberOfCurrentPlayersNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1389) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetNumberOfCurrentPlayersNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetNumberOfCurrentPlayersNode.GetNumberOfCurrentPlayersNode
	// class UGetNumberOfCurrentPlayersNode* GetNumberOfCurrentPlayersNode(int32_t AppID);                                      // [0xabf730] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetPlayerAchievementsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetPlayerAchievementsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1390) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetPlayerAchievementsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetPlayerAchievementsNode.GetPlayerAchievementsNode
	// class UGetPlayerAchievementsNode* GetPlayerAchievementsNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, FString Language); // [0xabf7c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetSchemaForGameNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetSchemaForGameNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1391) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetSchemaForGameNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetSchemaForGameNode.GetSchemaForGameNode
	// class UGetSchemaForGameNode* GetSchemaForGameNode(FString Key, int32_t AppID, FString Language);                         // [0xabf9b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetUserStatsForGameNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetUserStatsForGameNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1392) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetUserStatsForGameNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetUserStatsForGameNode.GetUserStatsForGameNode
	// class UGetUserStatsForGameNode* GetUserStatsForGameNode(FString Key, FUWorksSteamID SteamID, int32_t AppID);             // [0xabfb60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.SetUserStatsForGameNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class USetUserStatsForGameNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1393) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.SetUserStatsForGameNode.SetUserStatsForGameNode
	// class USetUserStatsForGameNode* SetUserStatsForGameNode(FString Key, FUWorksSteamID SteamID, int32_t AppID, int32_t Count, TArray<FString> Name, TArray<int32_t> Value); // [0xabfcc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.SetUserStatsForGameNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.SetItemPaymentRulesNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class USetItemPaymentRulesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1394) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.SetItemPaymentRulesNode.SetItemPaymentRulesNode
	// class USetItemPaymentRulesNode* SetItemPaymentRulesNode(FString Key, int32_t AppID, int32_t GameItemID, FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles, FUWorksPartnerAccounts PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly); // [0xac0b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.SetItemPaymentRulesNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksWeb.GetFinalizedContributorsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetFinalizedContributorsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1395) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetFinalizedContributorsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetFinalizedContributorsNode.GetFinalizedContributorsNode
	// class UGetFinalizedContributorsNode* GetFinalizedContributorsNode(FString Key, int32_t AppID, int32_t GameItemID);       // [0xac0670] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.GetItemDailyRevenueNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGetItemDailyRevenueNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1396) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.GetItemDailyRevenueNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
	// Function /Script/UWorksWeb.GetItemDailyRevenueNode.GetItemDailyRevenueNode
	// class UGetItemDailyRevenueNode* GetItemDailyRevenueNode(FString Key, int32_t AppID, FString ItemId, int32_t DateStart, int32_t DateEnd); // [0xac07d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksWeb.PopulateItemDescriptionsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UPopulateItemDescriptionsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1397) /* FMulticastInlineDelegate */ __um(Completed);                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksWeb.PopulateItemDescriptionsNode.PopulateItemDescriptionsNode
	// class UPopulateItemDescriptionsNode* PopulateItemDescriptionsNode(FString Key, int32_t AppID, FUWorksLanguages Languages); // [0xac09f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksWeb.PopulateItemDescriptionsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString Content);                                                              // [0x9e2c70] Final|Native|Public  
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebApps
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebApps
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebBroadcast
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebBroadcast
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebCheatReporting
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebCheatReporting
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebCommunity
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebCommunity
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebEcon
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebEcon
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebEconMarket
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebEconMarket
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebEconomy
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebEconomy
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebGameInventory
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebGameInventory
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksSessions
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksSessions
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksUsers
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksUsers
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksTitle
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksTitle
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebGameNotifications
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebGameNotifications
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebGameServers
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebGameServers
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebGameServerStats
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebGameServerStats
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebInventory
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebInventory
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebLeaderboards
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebLeaderboards
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebMicroTxn
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebMicroTxn
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebNews
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebNews
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksPlaySessions
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksPlaySessions
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebPlayer
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebPlayer
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksRequiredKVTags
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksRequiredKVTags
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebPublishedFile
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebPublishedFile
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebPublishedItemSearch
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebPublishedItemSearch
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebPublishedItemVoting
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebPublishedItemVoting
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebRemoteStorage
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebRemoteStorage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebUser
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebUser
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebUserAuth
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebUserAuth
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebUserStats
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebUserStats
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksLanguages
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksLanguages
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksPartnerAccounts
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksPartnerAccounts
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAssociatedWorkshopFiles
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAssociatedWorkshopFiles
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksWeb.UWorksAnnexWebWorkshop
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexWebWorkshop
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UUWorksInterfaceWeb) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebApps) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebBroadcast) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebCheatReporting) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebCommunity) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebEcon) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebEconMarket) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebEconomy) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebGameInventory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebGameNotifications) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebGameServers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebGameServerStats) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebInventory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebLeaderboards) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebMicroTxn) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebNews) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebPlayer) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebPublishedFile) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebPublishedItemSearch) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebPublishedItemVoting) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebRemoteStorage) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebUser) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebUserAuth) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebUserStats) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceWebWorkshop) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksRequestWeb) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UUWorksRequestWebGetAppBetas) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetAppBuilds) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetAppDepotVersions) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetAppList) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetCheatingReportsList) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetPlayersBanned) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetServerList) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetServersAtAddress) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebSetAppBuildLive) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebUpToDateCheck) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebPostGameDataFrame) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebReportPlayerCheating) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebRequestPlayerGameBan) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebRemovePlayerGameBan) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetCheatingReports) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebRequestVacStatusForUser) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebStartSecureMultiplayerSession) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebEndSecureMultiplayerSession) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebReportCheatData) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebReportAbuse) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetTradeHistory) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebFlushInventoryCache) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebFlushAssetAppearanceCache) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebFlushContextCache) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetTradeOffers) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetTradeOffer) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetTradeOffersSummary) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebDeclineTradeOffer) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebCancelTradeOffer) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetMarketEligibility) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebCancelAppListingsForUser) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetAssetID) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetPopular) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebCanTrade) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebFinalizeAssetTransaction) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetAssetClassInfo) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetAssetPrices) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetExportedAssetsForUser) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetMarketPrices) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebStartAssetTransaction) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebStartTrade) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetHistoryCommandDetails) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetUserHistory) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebHistoryExecuteCommands) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebSupportGetAssetHistory) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebCreateSession) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebUpdateSession) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebEnumerateSessionsForApp) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetSessionDetailsForApp) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebRequestNotifications) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebDeleteSession) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebDeleteSessionBatch) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetAccountList) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebCreateAccount) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebSetMemo) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebResetLoginToken) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebDeleteAccount) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetAccountPublicInfo) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebQueryLoginToken) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebSetBanStatus) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetServerSteamIDsByIP) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetServerIPsBySteamID) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetGameServerPlayerStatsForGame) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebAddItem) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebAddPromoItem) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebConsumeItem) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebExchangeItem) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetInventory) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetItemDefs) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetPriceSheet) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebConsolidate) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetQuantity) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebDeleteLeaderboard) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebFindOrCreateLeaderboard) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetLeaderboardEntries) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetLeaderboardsForGame) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebResetLeaderboard) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebSetLeaderboardScore) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebAdjustAgreement) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebCancelAgreement) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebFinalizeTxn) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetReport) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetUserAgreementInfo) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetUserInfo) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebInitTxn) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebProcessAgreement) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebQueryTxn) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebRefundTxn) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetNewsForApp) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetNewsForAppAuthed) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebRecordOfflinePlaytime) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetRecentlyPlayedGames) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetOwnedGames) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetSteamLevel) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetBadges) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetCommunityBadgeProgress) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebIsPlayingSharedGame) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebQueryFiles) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebSetDeveloperMetadata) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebUpdateTags) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebRankedByPublicationOrder) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebRankedByTrend) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebRankedByVote) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebResultSetSummary) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebItemVoteSummary) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebUserVoteSummary) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebEnumerateUserPublishedFiles) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebEnumerateUserSubscribedFiles) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetCollectionDetails) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetPublishedFileDetails) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetUGCFileDetails) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebSetUGCUsedByGC) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebSubscribePublishedFile) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebUnsubscribePublishedFile) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebCheckAppOwnership) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetAppPriceInfo) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetFriendList) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetPlayerBans) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetPlayerSummaries) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetPublisherAppOwnership) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetPublisherAppOwnershipChanges) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetUserGroupList) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGrantPackage) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebResolveVanityURL) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebAuthenticateUser) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebAuthenticateUserTicket) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetGlobalAchievementPercentagesForApp) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetGlobalStatsForGame) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetNumberOfCurrentPlayers) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetPlayerAchievements) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetSchemaForGame) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetUserStatsForGame) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebSetUserStatsForGame) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebSetItemPaymentRules) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetFinalizedContributors) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebGetItemDailyRevenue) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UUWorksRequestWebPopulateItemDescriptions) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UGetAppBetasNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetAppBuildsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetAppDepotVersionsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetAppListNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetCheatingReportsListNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetPlayersBannedNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetServerListNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetServersAtAddressNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(USetAppBuildLiveNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UUpToDateCheckNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UPostGameDataFrameNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UReportPlayerCheatingNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(URequestPlayerGameBanNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(URemovePlayerGameBanNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetCheatingReportsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(URequestVacStatusForUserNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UStartSecureMultiplayerSessionNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UEndSecureMultiplayerSessionNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UReportCheatDataNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UReportAbuseNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetTradeHistoryNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UFlushInventoryCacheNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UFlushAssetAppearanceCacheNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UFlushContextCacheNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetTradeOffersNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetTradeOfferNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetTradeOffersSummaryNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UDeclineTradeOfferNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCancelTradeOfferNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetMarketEligibilityNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCancelAppListingsForUserNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetAssetIDNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetPopularNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCanTradeNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UFinalizeAssetTransactionNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetAssetClassInfoNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetAssetPricesNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetExportedAssetsForUserNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetMarketPricesNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UStartAssetTransactionNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UStartTradeNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetHistoryCommandDetailsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetUserHistoryNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UHistoryExecuteCommandsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(USupportGetAssetHistoryNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCreateSessionNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UUpdateSessionNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UEnumerateSessionsForAppNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetSessionDetailsForAppNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(URequestNotificationsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UDeleteSessionNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UDeleteSessionBatchNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetAccountListNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCreateAccountNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(USetMemoNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UResetLoginTokenNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UDeleteAccountNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetAccountPublicInfoNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UQueryLoginTokenNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(USetBanStatusNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetServerSteamIDsByIPNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetServerIPsBySteamIDNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetGameServerPlayerStatsForGameNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UAddItemNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UAddPromoItemNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UConsumeItemNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UExchangeItemNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetInventoryNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetItemDefsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetPriceSheetNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UConsolidateNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetQuantityNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UDeleteLeaderboardNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UFindOrCreateLeaderboardNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetLeaderboardEntriesNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetLeaderboardsForGameNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UResetLeaderboardNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(USetLeaderboardScoreNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UAdjustAgreementNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCancelAgreementNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UFinalizeTxnNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetReportNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetUserAgreementInfoNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetUserInfoNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UInitTxnNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UProcessAgreementNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UQueryTxnNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(URefundTxnNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetNewsForAppNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetNewsForAppAuthedNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(URecordOfflinePlaytimeNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetRecentlyPlayedGamesNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetOwnedGamesNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetSteamLevelNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetBadgesNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetCommunityBadgeProgressNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UIsPlayingSharedGameNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UQueryFilesNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(USetDeveloperMetadataNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UUpdateTagsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(URankedByPublicationOrderNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(URankedByTrendNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(URankedByVoteNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UResultSetSummaryNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UItemVoteSummaryNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UUserVoteSummaryNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UEnumerateUserPublishedFilesNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UEnumerateUserSubscribedFilesNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetCollectionDetailsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetPublishedFileDetailsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetUGCFileDetailsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(USetUGCUsedByGCNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(USubscribePublishedFileNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UUnsubscribePublishedFileNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCheckAppOwnershipNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetAppPriceInfoNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetFriendListNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetPlayerBansNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetPlayerSummariesNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetPublisherAppOwnershipNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetPublisherAppOwnershipChangesNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetUserGroupListNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGrantPackageNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UResolveVanityURLNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UAuthenticateUserNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UAuthenticateUserTicketNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetGlobalAchievementPercentagesForAppNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetGlobalStatsForGameNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetNumberOfCurrentPlayersNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetPlayerAchievementsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetSchemaForGameNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetUserStatsForGameNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(USetUserStatsForGameNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(USetItemPaymentRulesNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetFinalizedContributorsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGetItemDailyRevenueNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UPopulateItemDescriptionsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FUWorksAnnexWebApps) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebBroadcast) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebCheatReporting) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebCommunity) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebEcon) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebEconMarket) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebEconomy) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebGameInventory) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksSessions) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksUsers) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksTitle) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebGameNotifications) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebGameServers) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebGameServerStats) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebInventory) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebLeaderboards) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebMicroTxn) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebNews) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksPlaySessions) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebPlayer) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksRequiredKVTags) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebPublishedFile) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebPublishedItemSearch) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebPublishedItemVoting) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebRemoteStorage) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebUser) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebUserAuth) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebUserStats) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksLanguages) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksPartnerAccounts) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAssociatedWorkshopFiles) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexWebWorkshop) == 0x0001); // 1 bytes (0x000000 - 0x000001)
