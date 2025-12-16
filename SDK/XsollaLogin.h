
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

/// Enum /Script/XsollaLogin.EXsollaFriendsType
/// Size: 0x01 (1 bytes)
enum class EXsollaFriendsType : uint8_t
{
	EXsollaFriendsType__friends                                                      = 0,
	EXsollaFriendsType__friend_requested                                             = 1,
	EXsollaFriendsType__friend_requested_by                                          = 2,
	EXsollaFriendsType__blocked                                                      = 3,
	EXsollaFriendsType__blocked_by                                                   = 4
};

/// Enum /Script/XsollaLogin.EUserDataStorage
/// Size: 0x01 (1 bytes)
enum class EUserDataStorage : uint8_t
{
	EUserDataStorage__Xsolla                                                         = 0,
	EUserDataStorage__Custom                                                         = 1
};

/// Enum /Script/XsollaLogin.EXsollaFriendAction
/// Size: 0x01 (1 bytes)
enum class EXsollaFriendAction : uint8_t
{
	EXsollaFriendAction__friend_request_add                                          = 0,
	EXsollaFriendAction__friend_request_cancel                                       = 1,
	EXsollaFriendAction__friend_request_approve                                      = 2,
	EXsollaFriendAction__friend_request_deny                                         = 3,
	EXsollaFriendAction__friend_remove                                               = 4,
	EXsollaFriendAction__block                                                       = 5,
	EXsollaFriendAction__unblock                                                     = 6
};

/// Enum /Script/XsollaLogin.EXsollaUsersSortOrder
/// Size: 0x01 (1 bytes)
enum class EXsollaUsersSortOrder : uint8_t
{
	EXsollaUsersSortOrder__asc                                                       = 0,
	EXsollaUsersSortOrder__desc                                                      = 1
};

/// Enum /Script/XsollaLogin.EXsollaUsersSortCriteria
/// Size: 0x01 (1 bytes)
enum class EXsollaUsersSortCriteria : uint8_t
{
	EXsollaUsersSortCriteria__by_nickname                                            = 0,
	EXsollaUsersSortCriteria__by_update                                              = 1
};

/// Class /Script/XsollaLogin.XsollaLoginLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UXsollaLoginLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/XsollaLogin.XsollaLoginLibrary.LaunchPlatfromBrowser
	// void LaunchPlatfromBrowser(FString URL);                                                                                 // [0xc4fc60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginLibrary.IsEmailValid
	// bool IsEmailValid(FString email);                                                                                        // [0xc4f8f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XsollaLogin.XsollaLoginLibrary.GetUrlParameter
	// FString GetUrlParameter(FString URL, FString Parameter);                                                                 // [0xc4f2b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XsollaLogin.XsollaLoginLibrary.GetStringCommandLineParam
	// FString GetStringCommandLineParam(FString ParamName);                                                                    // [0xc4f1d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XsollaLogin.XsollaLoginLibrary.GetSessionTicket
	// FString GetSessionTicket();                                                                                              // [0xc4eb30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XsollaLogin.XsollaLoginLibrary.GetLoginSettings
	// class UXsollaLoginSettings* GetLoginSettings();                                                                          // [0xc4eac0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XsollaLogin.XsollaLoginLibrary.GetDeviceName
	// FString GetDeviceName();                                                                                                 // [0xc4e770] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XsollaLogin.XsollaLoginLibrary.GetDeviceId
	// FString GetDeviceId();                                                                                                   // [0xc4e6f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XsollaLogin.XsollaLoginLibrary.ConvertTextureToByteArray
	// TArray<char> ConvertTextureToByteArray(class UTexture2D* Texture);                                                       // [0xc4de50] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/XsollaLogin.XsollaAuthToken
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FXsollaAuthToken
{ 
	FString                                            JWT;                                                        // 0x0000   (0x0010)  
	int64_t                                            ExpiresAt;                                                  // 0x0010   (0x0008)  
	bool                                               bIsVerified;                                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
	FString                                            RefreshToken;                                               // 0x0020   (0x0010)  
};

/// Struct /Script/XsollaLogin.XsollaLoginData
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FXsollaLoginData
{ 
	FXsollaAuthToken                                   AuthToken;                                                  // 0x0000   (0x0030)  
	FString                                            Username;                                                   // 0x0030   (0x0010)  
	FString                                            Password;                                                   // 0x0040   (0x0010)  
	bool                                               bRememberMe;                                                // 0x0050   (0x0001)  
	bool                                               bEncrypted;                                                 // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0052   (0x0006)  MISSED
};

/// Class /Script/XsollaLogin.XsollaLoginSave
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UXsollaLoginSave : public USaveGame
{ 
public:
	FXsollaLoginData                                   LoginData;                                                  // 0x0028   (0x0058)  
};

/// Class /Script/XsollaLogin.XsollaLoginSettings
/// Size: 0x0180 (384 bytes) (0x000028 - 0x000180) align 8 MaxSize: 0x0180
class UXsollaLoginSettings : public UObject
{ 
public:
	FString                                            ProjectId;                                                  // 0x0028   (0x0010)  
	FString                                            LoginID;                                                    // 0x0038   (0x0010)  
	FString                                            CallbackURL;                                                // 0x0048   (0x0010)  
	EUserDataStorage                                   UserDataStorage;                                            // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED
	class UClass*                                      OverrideBrowserWidgetClass;                                 // 0x0060   (0x0008)  
	bool                                               InvalidateExistingSessions;                                 // 0x0068   (0x0001)  
	bool                                               UseOAuth2;                                                  // 0x0069   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x006A   (0x0006)  MISSED
	FString                                            ClientId;                                                   // 0x0070   (0x0010)  
	bool                                               EncryptCachedCredentials;                                   // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0081   (0x0007)  MISSED
	FString                                            XsollaSaveEncryptionKey;                                    // 0x0088   (0x0010)  
	bool                                               SendPasswordlessAuthURL;                                    // 0x0098   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0099   (0x0007)  MISSED
	FString                                            PasswordlessAuthURL;                                        // 0x00A0   (0x0010)  
	FString                                            DemoProjectID;                                              // 0x00B0   (0x0010)  
	FString                                            DemoLoginID;                                                // 0x00C0   (0x0010)  
	FString                                            DemoClientID;                                               // 0x00D0   (0x0010)  
	bool                                               UseCrossPlatformAccountLinking;                             // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x00E1   (0x0007)  MISSED
	FString                                            AccountLinkingURL;                                          // 0x00E8   (0x0010)  
	FString                                            PlatformAuthenticationURL;                                  // 0x00F8   (0x0010)  
	EXsollaPublishingPlatform                          platform;                                                   // 0x0108   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0109   (0x0007)  MISSED
	FString                                            PlatformAccountID;                                          // 0x0110   (0x0010)  
	bool                                               RequestNickname;                                            // 0x0120   (0x0001)  
	bool                                               bForceSteamAuthorization;                                   // 0x0121   (0x0001)  
	bool                                               bCustomAuthViaAccessToken;                                  // 0x0122   (0x0001)  
	unsigned char                                      UnknownData06_6[0x5];                                       // 0x0123   (0x0005)  MISSED
	FString                                            CustomAuthServerURL;                                        // 0x0128   (0x0010)  
	bool                                               bAllowNativeAuth;                                           // 0x0138   (0x0001)  
	unsigned char                                      UnknownData07_6[0x7];                                       // 0x0139   (0x0007)  MISSED
	FString                                            FacebookAppId;                                              // 0x0140   (0x0010)  
	FString                                            GoogleAppId;                                                // 0x0150   (0x0010)  
	FString                                            WeChatAppId;                                                // 0x0160   (0x0010)  
	FString                                            QQAppId;                                                    // 0x0170   (0x0010)  


	/// Functions
	// Function /Script/XsollaLogin.XsollaLoginSettings.SetupDefaultDemoSettings
	// void SetupDefaultDemoSettings();                                                                                         // [0xc52490] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/XsollaLogin.XsollaLoginSubsystem
/// Size: 0x02B8 (696 bytes) (0x000030 - 0x0002B8) align 8 MaxSize: 0x02B8
class UXsollaLoginSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x280];                                     // 0x0030   (0x0280)  MISSED
	class UClass*                                      DefaultBrowserWidgetClass;                                  // 0x02B0   (0x0008)  


	/// Functions
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.ValidateToken
	// void ValidateToken(FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback);                                // [0xc53fc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.UpdateUsersFriends
	// void UpdateUsersFriends(FString AuthToken, FString platform, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc53df0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.UpdateUsersDevices
	// void UpdateUsersDevices(FString AuthToken, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback);        // [0xc53c70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.UpdateUserReadOnlyAttributes
	// void UpdateUserReadOnlyAttributes(FString AuthToken, FString UserId, TArray<FString>& AttributeKeys, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc53a20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.UpdateUserPhoneNumber
	// void UpdateUserPhoneNumber(FString AuthToken, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback);     // [0xc538a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.UpdateUserEmail
	// void UpdateUserEmail(FString AuthToken, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback);           // [0xc53720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.UpdateUserDetails
	// void UpdateUserDetails(FString AuthToken, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback);         // [0xc535a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.UpdateUserAttributes
	// void UpdateUserAttributes(FString AuthToken, FString UserId, TArray<FString>& AttributeKeys, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc53350] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.UpdateSocialFriends
	// void UpdateSocialFriends(FString AuthToken, FString platform, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback, int32_t Offset, int32_t limit, bool FromThisGame); // [0xc530c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.UpdateSocialAuthLinks
	// void UpdateSocialAuthLinks(FString AuthToken, FString Locale, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc52ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.UpdateLinkedSocialNetworks
	// void UpdateLinkedSocialNetworks(FString AuthToken, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc52d70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.UpdateFriends
	// void UpdateFriends(FString AuthToken, EXsollaFriendsType Type, EXsollaUsersSortCriteria SortBy, EXsollaUsersSortOrder SortOrder, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback, FString After, int32_t limit); // [0xc52aa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.UnlinkDeviceFromAccount
	// void UnlinkDeviceFromAccount(FString AuthToken, int64_t DeviceID, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc528f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.StartAuthByPhoneNumber
	// void StartAuthByPhoneNumber(FString PhoneNumber, FString Payload, FString State, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc526d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.StartAuthByEmail
	// void StartAuthByEmail(FString email, FString Payload, FString State, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc524b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.SetToken
	// void SetToken(FString Token);                                                                                            // [0xc523f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.SetLoginData
	// void SetLoginData(FXsollaLoginData& data, bool ClearCache);                                                              // [0xc522b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.SearchUsersByNickname
	// void SearchUsersByNickname(FString AuthToken, FString nickname, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback, int32_t Offset, int32_t limit); // [0xc52070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.ResetUserPassword
	// void ResetUserPassword(FString User, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback);              // [0xc51ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.ResendAccountConfirmationEmail
	// void ResendAccountConfirmationEmail(FString Username, FString State, FString Payload, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc51cd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.RemoveUserPhoneNumber
	// void RemoveUserPhoneNumber(FString AuthToken, FString PhoneNumber, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc51b00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.RemoveUserAttributes
	// void RemoveUserAttributes(FString AuthToken, TArray<FString>& AttributesToRemove, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc51900] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.RemoveProfilePicture
	// void RemoveProfilePicture(FString AuthToken, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback);      // [0xc51780] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.RegisterUser
	// void RegisterUser(FString Username, FString Password, FString email, FString State, FString Payload, bool PersonalDataProcessingConsent, bool ReceiveNewsConsent, TArray<FString>& AdditionalFields, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc513a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.RefreshToken
	// void RefreshToken(FString RefreshToken, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback);           // [0xc51220] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.ModifyUserProfilePicture
	// void ModifyUserProfilePicture(FString AuthToken, class UTexture2D* picture, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc51070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.ModifyUserPhoneNumber
	// void ModifyUserPhoneNumber(FString AuthToken, FString PhoneNumber, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc50ea0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.ModifyUserDetails
	// void ModifyUserDetails(FString AuthToken, FString birthday, FString FirstName, FString LastName, FString gender, FString nickname, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc50b70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.ModifyUserAttributes
	// void ModifyUserAttributes(FString AuthToken, TArray<FXsollaUserAttribute>& AttributesToModify, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc50950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.ModifyFriends
	// void ModifyFriends(FString AuthToken, EXsollaFriendAction Action, FString UserId, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc50740] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.LinkSocialNetworkToUserAccount
	// void LinkSocialNetworkToUserAccount(FString AuthToken, FString ProviderName, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc50570] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.LinkEmailAndPassword
	// void LinkEmailAndPassword(FString AuthToken, FString email, FString Password, bool ReceiveNewsConsent, FString Username, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc502b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.LinkDeviceToAccount
	// void LinkDeviceToAccount(FString AuthToken, FString PlatformName, FString DeviceName, FString DeviceID, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc50030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.LinkAccount
	// void LinkAccount(FString UserId, EXsollaPublishingPlatform platform, FString Code, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc4fe20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.LaunchSocialAuthentication
	// void LaunchSocialAuthentication(FString SocialAuthenticationUrl, class UUserWidget*& BrowserWidget, bool bRememberMe);   // [0xc4fcf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.LaunchNativeSocialAuthentication
	// void LaunchNativeSocialAuthentication(FString ProviderName, FDelegateProperty& SuccessCallback, FDelegateProperty& CancelCallback, FDelegateProperty& ErrorCallback, bool bRememberMe); // [0xc4fa40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.IsSocialNetworkLinked
	// bool IsSocialNetworkLinked(FString provider);                                                                            // [0xc4f990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.Initialize
	// void Initialize(FString InProjectId, FString InLoginId, FString InClientId);                                             // [0xc4f7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.GetUserReadOnlyAttributes
	// TArray<FXsollaUserAttribute> GetUserReadOnlyAttributes();                                                                // [0xc4f760] Final|Native|Public|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.GetUserProfile
	// void GetUserProfile(FString AuthToken, FString UserId, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc4f590] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.GetUserDevices
	// TArray<FXsollaUserDevice> GetUserDevices();                                                                              // [0xc4f470] Final|Native|Public|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.GetUserDetails
	// FXsollaUserDetails GetUserDetails();                                                                                     // [0xc4f430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.GetUserAttributes
	// TArray<FXsollaUserAttribute> GetUserAttributes();                                                                        // [0xc4f3f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.GetSocialProfiles
	// TArray<FXsollaSocialFriend> GetSocialProfiles(FString UserId);                                                           // [0xc4eff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.GetSocialFriends
	// FXsollaSocialFriendsData GetSocialFriends();                                                                             // [0xc4ef90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.GetSocialAuthLinks
	// TArray<FXsollaSocialAuthLink> GetSocialAuthLinks();                                                                      // [0xc4ebf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.GetSocialAuthenticationUrl
	// void GetSocialAuthenticationUrl(FString ProviderName, FString State, FString Payload, TArray<FString>& AdditionalFields, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc4ece0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.GetSocialAccountLinkingHtml
	// FString GetSocialAccountLinkingHtml();                                                                                   // [0xc4ebb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.GetPendingSocialAuthenticationUrl
	// FString GetPendingSocialAuthenticationUrl();                                                                             // [0xc4eaf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.GetLoginData
	// FXsollaLoginData GetLoginData();                                                                                         // [0xc4e930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.GetLinkedSocialNetworks
	// TArray<FXsollaLinkedSocialNetworkData> GetLinkedSocialNetworks();                                                        // [0xc4e7f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.GetAuthConfirmationCode
	// void GetAuthConfirmationCode(FString UserId, FString OperationId, FDelegateProperty& SuccessCallback, FDelegateProperty& TimeoutCallback, FDelegateProperty& ErrorCallback); // [0xc4e4c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.GetAccessTokenFromCustomAuthServer
	// void GetAccessTokenFromCustomAuthServer(FXsollaParameters Parameters, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc4e2b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.ExchangeAuthenticationCodeToToken
	// void ExchangeAuthenticationCodeToToken(FString AuthenticationCode, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc4e130] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.DropLoginData
	// void DropLoginData(bool ClearCache);                                                                                     // [0xc4e0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.CreateAccountLinkingCode
	// void CreateAccountLinkingCode(FString AuthToken, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback);  // [0xc4df20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.CompleteAuthByPhoneNumber
	// void CompleteAuthByPhoneNumber(FString Code, FString OperationId, FString PhoneNumber, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc4dc30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.CompleteAuthByEmail
	// void CompleteAuthByEmail(FString Code, FString OperationId, FString email, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc4da10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.CheckUserAge
	// void CheckUserAge(FString DateOfBirth, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback);            // [0xc4d890] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.AuthViaAccessTokenOfSocialNetwork
	// void AuthViaAccessTokenOfSocialNetwork(FString AuthToken, FString AuthTokenSecret, FString OpenId, FString ProviderName, FString Payload, FString State, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc4cb90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.AuthenticateWithSessionTicket
	// void AuthenticateWithSessionTicket(FString ProviderName, FString SessionTicket, FString Code, FString AppID, FString State, FString Payload, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc4d560] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.AuthenticateViaDeviceId
	// void AuthenticateViaDeviceId(FString DeviceName, FString DeviceID, FString State, FString Payload, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc4d2e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.AuthenticateUser
	// void AuthenticateUser(FString Username, FString Password, FString Payload, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback, bool bRememberMe); // [0xc4d070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XsollaLogin.XsollaLoginSubsystem.AuthenticatePlatformAccountUser
	// void AuthenticatePlatformAccountUser(FString UserId, EXsollaPublishingPlatform platform, FDelegateProperty& SuccessCallback, FDelegateProperty& ErrorCallback); // [0xc4cec0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/XsollaLogin.XsollaUserBan
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FXsollaUserBan
{ 
	FString                                            date_from;                                                  // 0x0000   (0x0010)  
	FString                                            date_to;                                                    // 0x0010   (0x0010)  
	FString                                            Reason;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/XsollaLogin.XsollaUserGroup
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FXsollaUserGroup
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	bool                                               is_default;                                                 // 0x0004   (0x0001)  
	bool                                               is_deletable;                                               // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	FString                                            Name;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/XsollaLogin.XsollaUserDetails
/// Size: 0x0158 (344 bytes) (0x000000 - 0x000158) align 8 MaxSize: 0x0158
struct FXsollaUserDetails
{ 
	FXsollaUserBan                                     ban;                                                        // 0x0000   (0x0030)  
	FString                                            birthday;                                                   // 0x0030   (0x0010)  
	FString                                            connection_information;                                     // 0x0040   (0x0010)  
	FString                                            country;                                                    // 0x0050   (0x0010)  
	FString                                            email;                                                      // 0x0060   (0x0010)  
	FString                                            external_id;                                                // 0x0070   (0x0010)  
	FString                                            first_name;                                                 // 0x0080   (0x0010)  
	FString                                            gender;                                                     // 0x0090   (0x0010)  
	TArray<FXsollaUserGroup>                           Groups;                                                     // 0x00A0   (0x0010)  
	FString                                            ID;                                                         // 0x00B0   (0x0010)  
	bool                                               is_anonymous;                                               // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
	FString                                            last_login;                                                 // 0x00C8   (0x0010)  
	FString                                            last_name;                                                  // 0x00D8   (0x0010)  
	FString                                            Name;                                                       // 0x00E8   (0x0010)  
	FString                                            nickname;                                                   // 0x00F8   (0x0010)  
	FString                                            tag;                                                        // 0x0108   (0x0010)  
	FString                                            phone;                                                      // 0x0118   (0x0010)  
	FString                                            picture;                                                    // 0x0128   (0x0010)  
	FString                                            registered;                                                 // 0x0138   (0x0010)  
	FString                                            presence;                                                   // 0x0148   (0x0010)  
};

/// Struct /Script/XsollaLogin.XsollaFriendDetails
/// Size: 0x0180 (384 bytes) (0x000000 - 0x000180) align 8 MaxSize: 0x0180
struct FXsollaFriendDetails
{ 
	FString                                            status_incoming;                                            // 0x0000   (0x0010)  
	FString                                            status_outgoing;                                            // 0x0010   (0x0010)  
	int64_t                                            updated;                                                    // 0x0020   (0x0008)  
	FXsollaUserDetails                                 User;                                                       // 0x0028   (0x0158)  
};

/// Struct /Script/XsollaLogin.XsollaFriendsData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FXsollaFriendsData
{ 
	FString                                            next_after;                                                 // 0x0000   (0x0010)  
	FString                                            next_url;                                                   // 0x0010   (0x0010)  
	TArray<FXsollaFriendDetails>                       relationships;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/XsollaLogin.XsollaSocialFriend
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FXsollaSocialFriend
{ 
	FString                                            avatar;                                                     // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            platform;                                                   // 0x0020   (0x0010)  
	FString                                            tag;                                                        // 0x0030   (0x0010)  
	FString                                            user_id;                                                    // 0x0040   (0x0010)  
	FString                                            xl_uid;                                                     // 0x0050   (0x0010)  
};

/// Struct /Script/XsollaLogin.XsollaSocialFriendsData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FXsollaSocialFriendsData
{ 
	TArray<FXsollaSocialFriend>                        data;                                                       // 0x0000   (0x0010)  
	int32_t                                            limit;                                                      // 0x0010   (0x0004)  
	int32_t                                            Offset;                                                     // 0x0014   (0x0004)  
	FString                                            platform;                                                   // 0x0018   (0x0010)  
	int32_t                                            total_count;                                                // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/XsollaLogin.XsollaPublicProfile
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FXsollaPublicProfile
{ 
	FString                                            avatar;                                                     // 0x0000   (0x0010)  
	bool                                               is_me;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            last_login;                                                 // 0x0018   (0x0010)  
	FString                                            nickname;                                                   // 0x0028   (0x0010)  
	FString                                            tag;                                                        // 0x0038   (0x0010)  
	FString                                            registered;                                                 // 0x0048   (0x0010)  
	FString                                            user_id;                                                    // 0x0058   (0x0010)  
};

/// Struct /Script/XsollaLogin.XsollaUserSearchResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FXsollaUserSearchResult
{ 
	int32_t                                            Offset;                                                     // 0x0000   (0x0004)  
	int32_t                                            total_count;                                                // 0x0004   (0x0004)  
	TArray<FXsollaPublicProfile>                       users;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/XsollaLogin.XsollaCheckUserAgeResult
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FXsollaCheckUserAgeResult
{ 
	bool                                               accepted;                                                   // 0x0000   (0x0001)  
};

/// Struct /Script/XsollaLogin.XsollaUserDevice
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FXsollaUserDevice
{ 
	FString                                            device;                                                     // 0x0000   (0x0010)  
	int64_t                                            ID;                                                         // 0x0010   (0x0008)  
	FString                                            last_used_at;                                               // 0x0018   (0x0010)  
	FString                                            Type;                                                       // 0x0028   (0x0010)  
};

/// Struct /Script/XsollaLogin.XsollaProviderToken
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FXsollaProviderToken
{ 
	FString                                            access_token;                                               // 0x0000   (0x0010)  
	int64_t                                            expires_in;                                                 // 0x0010   (0x0008)  
	FString                                            refresh_token;                                              // 0x0018   (0x0010)  
	FString                                            token_type;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/XsollaLogin.XsollaLinkedSocialNetworkData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FXsollaLinkedSocialNetworkData
{ 
	FString                                            full_name;                                                  // 0x0000   (0x0010)  
	FString                                            nickname;                                                   // 0x0010   (0x0010)  
	FString                                            picture;                                                    // 0x0020   (0x0010)  
	FString                                            provider;                                                   // 0x0030   (0x0010)  
	FString                                            social_id;                                                  // 0x0040   (0x0010)  
};

/// Struct /Script/XsollaLogin.XsollaSocialAuthLink
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FXsollaSocialAuthLink
{ 
	FString                                            auth_url;                                                   // 0x0000   (0x0010)  
	FString                                            provider;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/XsollaLogin.XsollaUserAttribute
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FXsollaUserAttribute
{ 
	FString                                            Key;                                                        // 0x0000   (0x0010)  
	FString                                            permission;                                                 // 0x0010   (0x0010)  
	FString                                            Value;                                                      // 0x0020   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UXsollaLoginLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FXsollaAuthToken) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FXsollaLoginData) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UXsollaLoginSave) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UXsollaLoginSettings) == 0x0180); // 384 bytes (0x000028 - 0x000180)
static_assert(sizeof(UXsollaLoginSubsystem) == 0x02B8); // 696 bytes (0x000030 - 0x0002B8)
static_assert(sizeof(FXsollaUserBan) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FXsollaUserGroup) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FXsollaUserDetails) == 0x0158); // 344 bytes (0x000000 - 0x000158)
static_assert(sizeof(FXsollaFriendDetails) == 0x0180); // 384 bytes (0x000000 - 0x000180)
static_assert(sizeof(FXsollaFriendsData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FXsollaSocialFriend) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FXsollaSocialFriendsData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FXsollaPublicProfile) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FXsollaUserSearchResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FXsollaCheckUserAgeResult) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FXsollaUserDevice) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FXsollaProviderToken) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FXsollaLinkedSocialNetworkData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FXsollaSocialAuthLink) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FXsollaUserAttribute) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FXsollaAuthToken, JWT) == 0x0000);
static_assert(offsetof(FXsollaAuthToken, RefreshToken) == 0x0020);
static_assert(offsetof(FXsollaLoginData, AuthToken) == 0x0000);
static_assert(offsetof(FXsollaLoginData, Username) == 0x0030);
static_assert(offsetof(FXsollaLoginData, Password) == 0x0040);
static_assert(offsetof(UXsollaLoginSave, LoginData) == 0x0028);
static_assert(offsetof(UXsollaLoginSettings, ProjectId) == 0x0028);
static_assert(offsetof(UXsollaLoginSettings, LoginID) == 0x0038);
static_assert(offsetof(UXsollaLoginSettings, CallbackURL) == 0x0048);
static_assert(offsetof(UXsollaLoginSettings, UserDataStorage) == 0x0058);
static_assert(offsetof(UXsollaLoginSettings, OverrideBrowserWidgetClass) == 0x0060);
static_assert(offsetof(UXsollaLoginSettings, ClientId) == 0x0070);
static_assert(offsetof(UXsollaLoginSettings, XsollaSaveEncryptionKey) == 0x0088);
static_assert(offsetof(UXsollaLoginSettings, PasswordlessAuthURL) == 0x00A0);
static_assert(offsetof(UXsollaLoginSettings, DemoProjectID) == 0x00B0);
static_assert(offsetof(UXsollaLoginSettings, DemoLoginID) == 0x00C0);
static_assert(offsetof(UXsollaLoginSettings, DemoClientID) == 0x00D0);
static_assert(offsetof(UXsollaLoginSettings, AccountLinkingURL) == 0x00E8);
static_assert(offsetof(UXsollaLoginSettings, PlatformAuthenticationURL) == 0x00F8);
static_assert(offsetof(UXsollaLoginSettings, platform) == 0x0108);
static_assert(offsetof(UXsollaLoginSettings, PlatformAccountID) == 0x0110);
static_assert(offsetof(UXsollaLoginSettings, CustomAuthServerURL) == 0x0128);
static_assert(offsetof(UXsollaLoginSettings, FacebookAppId) == 0x0140);
static_assert(offsetof(UXsollaLoginSettings, GoogleAppId) == 0x0150);
static_assert(offsetof(UXsollaLoginSettings, WeChatAppId) == 0x0160);
static_assert(offsetof(UXsollaLoginSettings, QQAppId) == 0x0170);
static_assert(offsetof(UXsollaLoginSubsystem, DefaultBrowserWidgetClass) == 0x02B0);
static_assert(offsetof(FXsollaUserBan, date_from) == 0x0000);
static_assert(offsetof(FXsollaUserBan, date_to) == 0x0010);
static_assert(offsetof(FXsollaUserBan, Reason) == 0x0020);
static_assert(offsetof(FXsollaUserGroup, Name) == 0x0008);
static_assert(offsetof(FXsollaUserDetails, ban) == 0x0000);
static_assert(offsetof(FXsollaUserDetails, birthday) == 0x0030);
static_assert(offsetof(FXsollaUserDetails, connection_information) == 0x0040);
static_assert(offsetof(FXsollaUserDetails, country) == 0x0050);
static_assert(offsetof(FXsollaUserDetails, email) == 0x0060);
static_assert(offsetof(FXsollaUserDetails, external_id) == 0x0070);
static_assert(offsetof(FXsollaUserDetails, first_name) == 0x0080);
static_assert(offsetof(FXsollaUserDetails, gender) == 0x0090);
static_assert(offsetof(FXsollaUserDetails, Groups) == 0x00A0);
static_assert(offsetof(FXsollaUserDetails, ID) == 0x00B0);
static_assert(offsetof(FXsollaUserDetails, last_login) == 0x00C8);
static_assert(offsetof(FXsollaUserDetails, last_name) == 0x00D8);
static_assert(offsetof(FXsollaUserDetails, Name) == 0x00E8);
static_assert(offsetof(FXsollaUserDetails, nickname) == 0x00F8);
static_assert(offsetof(FXsollaUserDetails, tag) == 0x0108);
static_assert(offsetof(FXsollaUserDetails, phone) == 0x0118);
static_assert(offsetof(FXsollaUserDetails, picture) == 0x0128);
static_assert(offsetof(FXsollaUserDetails, registered) == 0x0138);
static_assert(offsetof(FXsollaUserDetails, presence) == 0x0148);
static_assert(offsetof(FXsollaFriendDetails, status_incoming) == 0x0000);
static_assert(offsetof(FXsollaFriendDetails, status_outgoing) == 0x0010);
static_assert(offsetof(FXsollaFriendDetails, User) == 0x0028);
static_assert(offsetof(FXsollaFriendsData, next_after) == 0x0000);
static_assert(offsetof(FXsollaFriendsData, next_url) == 0x0010);
static_assert(offsetof(FXsollaFriendsData, relationships) == 0x0020);
static_assert(offsetof(FXsollaSocialFriend, avatar) == 0x0000);
static_assert(offsetof(FXsollaSocialFriend, Name) == 0x0010);
static_assert(offsetof(FXsollaSocialFriend, platform) == 0x0020);
static_assert(offsetof(FXsollaSocialFriend, tag) == 0x0030);
static_assert(offsetof(FXsollaSocialFriend, user_id) == 0x0040);
static_assert(offsetof(FXsollaSocialFriend, xl_uid) == 0x0050);
static_assert(offsetof(FXsollaSocialFriendsData, data) == 0x0000);
static_assert(offsetof(FXsollaSocialFriendsData, platform) == 0x0018);
static_assert(offsetof(FXsollaPublicProfile, avatar) == 0x0000);
static_assert(offsetof(FXsollaPublicProfile, last_login) == 0x0018);
static_assert(offsetof(FXsollaPublicProfile, nickname) == 0x0028);
static_assert(offsetof(FXsollaPublicProfile, tag) == 0x0038);
static_assert(offsetof(FXsollaPublicProfile, registered) == 0x0048);
static_assert(offsetof(FXsollaPublicProfile, user_id) == 0x0058);
static_assert(offsetof(FXsollaUserSearchResult, users) == 0x0008);
static_assert(offsetof(FXsollaUserDevice, device) == 0x0000);
static_assert(offsetof(FXsollaUserDevice, last_used_at) == 0x0018);
static_assert(offsetof(FXsollaUserDevice, Type) == 0x0028);
static_assert(offsetof(FXsollaProviderToken, access_token) == 0x0000);
static_assert(offsetof(FXsollaProviderToken, refresh_token) == 0x0018);
static_assert(offsetof(FXsollaProviderToken, token_type) == 0x0028);
static_assert(offsetof(FXsollaLinkedSocialNetworkData, full_name) == 0x0000);
static_assert(offsetof(FXsollaLinkedSocialNetworkData, nickname) == 0x0010);
static_assert(offsetof(FXsollaLinkedSocialNetworkData, picture) == 0x0020);
static_assert(offsetof(FXsollaLinkedSocialNetworkData, provider) == 0x0030);
static_assert(offsetof(FXsollaLinkedSocialNetworkData, social_id) == 0x0040);
static_assert(offsetof(FXsollaSocialAuthLink, auth_url) == 0x0000);
static_assert(offsetof(FXsollaSocialAuthLink, provider) == 0x0010);
static_assert(offsetof(FXsollaUserAttribute, Key) == 0x0000);
static_assert(offsetof(FXsollaUserAttribute, permission) == 0x0010);
static_assert(offsetof(FXsollaUserAttribute, Value) == 0x0020);
