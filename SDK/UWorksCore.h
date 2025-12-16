
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

/// Enum /Script/UWorksCore.EUWorksResult
/// Size: 0x01 (1 bytes)
enum class EUWorksResult : uint8_t
{
	EUWorksResult__None                                                              = 0,
	EUWorksResult__OK                                                                = 1,
	EUWorksResult__Fail                                                              = 2,
	EUWorksResult__NoConnection                                                      = 3,
	EUWorksResult__InvalidPassword                                                   = 5,
	EUWorksResult__LoggedInElsewhere                                                 = 6,
	EUWorksResult__InvalidProtocolVer                                                = 7,
	EUWorksResult__InvalidParam                                                      = 8,
	EUWorksResult__FileNotFound                                                      = 9,
	EUWorksResult__Busy                                                              = 10,
	EUWorksResult__InvalidState                                                      = 11,
	EUWorksResult__InvalidName                                                       = 12,
	EUWorksResult__InvalidEmail                                                      = 13,
	EUWorksResult__DuplicateName                                                     = 14,
	EUWorksResult__AccessDenied                                                      = 15,
	EUWorksResult__Timeout                                                           = 16,
	EUWorksResult__Banned                                                            = 17,
	EUWorksResult__AccountNotFound                                                   = 18,
	EUWorksResult__InvalidSteamID                                                    = 19,
	EUWorksResult__ServiceUnavailable                                                = 20,
	EUWorksResult__NotLoggedOn                                                       = 21,
	EUWorksResult__Pending                                                           = 22,
	EUWorksResult__EncryptionFailure                                                 = 23,
	EUWorksResult__InsufficientPrivilege                                             = 24,
	EUWorksResult__LimitExceeded                                                     = 25,
	EUWorksResult__Revoked                                                           = 26,
	EUWorksResult__Expired                                                           = 27,
	EUWorksResult__AlreadyRedeemed                                                   = 28,
	EUWorksResult__DuplicateRequest                                                  = 29,
	EUWorksResult__AlreadyOwned                                                      = 30,
	EUWorksResult__IPNotFound                                                        = 31,
	EUWorksResult__PersistFailed                                                     = 32,
	EUWorksResult__LockingFailed                                                     = 33,
	EUWorksResult__LogonSessionReplaced                                              = 34,
	EUWorksResult__ConnectFailed                                                     = 35,
	EUWorksResult__HandshakeFailed                                                   = 36,
	EUWorksResult__IOFailure                                                         = 37,
	EUWorksResult__RemoteDisconnect                                                  = 38,
	EUWorksResult__ShoppingCartNotFound                                              = 39,
	EUWorksResult__Blocked                                                           = 40,
	EUWorksResult__Ignored                                                           = 41,
	EUWorksResult__NoMatch                                                           = 42,
	EUWorksResult__AccountDisabled                                                   = 43,
	EUWorksResult__ServiceReadOnly                                                   = 44,
	EUWorksResult__AccountNotFeatured                                                = 45,
	EUWorksResult__AdministratorOK                                                   = 46,
	EUWorksResult__ContentVersion                                                    = 47,
	EUWorksResult__TryAnotherCM                                                      = 48,
	EUWorksResult__PasswordRequiredToKickSession                                     = 49,
	EUWorksResult__AlreadyLoggedInElsewhere                                          = 50,
	EUWorksResult__Suspended                                                         = 51,
	EUWorksResult__Cancelled                                                         = 52,
	EUWorksResult__DataCorruption                                                    = 53,
	EUWorksResult__DiskFull                                                          = 54,
	EUWorksResult__RemoteCallFailed                                                  = 55,
	EUWorksResult__PasswordUnset                                                     = 56,
	EUWorksResult__ExternalAccountUnlinked                                           = 57,
	EUWorksResult__PSNTicketInvalid                                                  = 58,
	EUWorksResult__ExternalAccountAlreadyLinked                                      = 59,
	EUWorksResult__RemoteFileConflict                                                = 60,
	EUWorksResult__IllegalPassword                                                   = 61,
	EUWorksResult__SameAsPreviousValue                                               = 62,
	EUWorksResult__AccountLogonDenied                                                = 63,
	EUWorksResult__CannotUseOldPassword                                              = 64,
	EUWorksResult__InvalidLoginAuthCode                                              = 65,
	EUWorksResult__AccountLogonDeniedNoMail                                          = 66,
	EUWorksResult__HardwareNotCapableOfIPT                                           = 67,
	EUWorksResult__IPTInitError                                                      = 68,
	EUWorksResult__ParentalControlRestricted                                         = 69,
	EUWorksResult__FacebookQueryError                                                = 70,
	EUWorksResult__ExpiredLoginAuthCode                                              = 71,
	EUWorksResult__IPLoginRestrictionFailed                                          = 72,
	EUWorksResult__AccountLockedDown                                                 = 73,
	EUWorksResult__AccountLogonDeniedVerifiedEmailRequired                           = 74,
	EUWorksResult__NoMatchingURL                                                     = 75,
	EUWorksResult__BadResponse                                                       = 76,
	EUWorksResult__RequirePasswordReEntry                                            = 77,
	EUWorksResult__ValueOutOfRange                                                   = 78,
	EUWorksResult__UnexpectedError                                                   = 79,
	EUWorksResult__Disabled                                                          = 80,
	EUWorksResult__InvalidCEGSubmission                                              = 81,
	EUWorksResult__RestrictedDevice                                                  = 82,
	EUWorksResult__RegionLocked                                                      = 83,
	EUWorksResult__RateLimitExceeded                                                 = 84,
	EUWorksResult__AccountLoginDeniedNeedTwoFactor                                   = 85,
	EUWorksResult__ItemDeleted                                                       = 86,
	EUWorksResult__AccountLoginDeniedThrottle                                        = 87,
	EUWorksResult__TwoFactorCodeMismatch                                             = 88,
	EUWorksResult__TwoFactorActivationCodeMismatch                                   = 89,
	EUWorksResult__AccountAssociatedToMultiplePartners                               = 90,
	EUWorksResult__NotModified                                                       = 91,
	EUWorksResult__NoMobileDevice                                                    = 92,
	EUWorksResult__TimeNotSynced                                                     = 93,
	EUWorksResult__SmsCodeFailed                                                     = 94,
	EUWorksResult__AccountLimitExceeded                                              = 95,
	EUWorksResult__AccountActivityLimitExceeded                                      = 96,
	EUWorksResult__PhoneActivityLimitExceeded                                        = 97,
	EUWorksResult__RefundToWallet                                                    = 98,
	EUWorksResult__EmailSendFailure                                                  = 99,
	EUWorksResult__NotSettled                                                        = 100,
	EUWorksResult__NeedCaptcha                                                       = 101,
	EUWorksResult__GSLTDenied                                                        = 102,
	EUWorksResult__GSOwnerDenied                                                     = 103,
	EUWorksResult__InvalidItemType                                                   = 104,
	EUWorksResult__IPBanned                                                          = 105,
	EUWorksResult__GSLTExpired                                                       = 106
};

/// Enum /Script/UWorksCore.EUWorksChatRoomEnterResponse
/// Size: 0x01 (1 bytes)
enum class EUWorksChatRoomEnterResponse : uint8_t
{
	EUWorksChatRoomEnterResponse__None                                               = 0,
	EUWorksChatRoomEnterResponse__Success                                            = 1,
	EUWorksChatRoomEnterResponse__DoesntExist                                        = 2,
	EUWorksChatRoomEnterResponse__NotAllowed                                         = 3,
	EUWorksChatRoomEnterResponse__Full                                               = 4,
	EUWorksChatRoomEnterResponse__Error                                              = 5,
	EUWorksChatRoomEnterResponse__Banned                                             = 6,
	EUWorksChatRoomEnterResponse__Limited                                            = 7,
	EUWorksChatRoomEnterResponse__ClanDisabled                                       = 8,
	EUWorksChatRoomEnterResponse__CommunityBan                                       = 9,
	EUWorksChatRoomEnterResponse__MemberBlockedYou                                   = 10,
	EUWorksChatRoomEnterResponse__YouBlockedMember                                   = 11
};

/// Enum /Script/UWorksCore.EUWorksPersonaChange
/// Size: 0x01 (1 bytes)
enum class EUWorksPersonaChange : uint8_t
{
	EUWorksPersonaChange__Name                                                       = 0,
	EUWorksPersonaChange__Status                                                     = 1,
	EUWorksPersonaChange__ComeOnline                                                 = 2,
	EUWorksPersonaChange__GoneOffline                                                = 3,
	EUWorksPersonaChange__GamePlayed                                                 = 4,
	EUWorksPersonaChange__GameServer                                                 = 5,
	EUWorksPersonaChange__Avatar                                                     = 6,
	EUWorksPersonaChange__JoinedSource                                               = 7,
	EUWorksPersonaChange__LeftSource                                                 = 8,
	EUWorksPersonaChange__RelationshipChanged                                        = 9,
	EUWorksPersonaChange__NameFirstSet                                               = 10,
	EUWorksPersonaChange__FacebookInfo                                               = 11,
	EUWorksPersonaChange__Nickname                                                   = 12,
	EUWorksPersonaChange__SteamLevel                                                 = 13
};

/// Enum /Script/UWorksCore.EUWorksAuthSessionResponse
/// Size: 0x01 (1 bytes)
enum class EUWorksAuthSessionResponse : uint8_t
{
	EUWorksAuthSessionResponse__OK                                                   = 0,
	EUWorksAuthSessionResponse__UserNotConnectedToSteam                              = 1,
	EUWorksAuthSessionResponse__NoLicenseOrExpired                                   = 2,
	EUWorksAuthSessionResponse__VACBanned                                            = 3,
	EUWorksAuthSessionResponse__LoggedInElseWhere                                    = 4,
	EUWorksAuthSessionResponse__VACCheckTimedOut                                     = 5,
	EUWorksAuthSessionResponse__AuthTicketCanceled                                   = 6,
	EUWorksAuthSessionResponse__AuthTicketInvalidAlreadyUsed                         = 7,
	EUWorksAuthSessionResponse__AuthTicketInvalid                                    = 8,
	EUWorksAuthSessionResponse__PublisherIssuedBan                                   = 9
};

/// Enum /Script/UWorksCore.EUWorksFavoriteFlags
/// Size: 0x01 (1 bytes)
enum class EUWorksFavoriteFlags : uint8_t
{
	EUWorksFavoriteFlags__None                                                       = 0,
	EUWorksFavoriteFlags__Favorite                                                   = 1,
	EUWorksFavoriteFlags__History                                                    = 2
};

/// Enum /Script/UWorksCore.EUWorksChatMemberStateChange
/// Size: 0x01 (1 bytes)
enum class EUWorksChatMemberStateChange : uint8_t
{
	EUWorksChatMemberStateChange__Entered                                            = 0,
	EUWorksChatMemberStateChange__Left                                               = 1,
	EUWorksChatMemberStateChange__Disconnected                                       = 2,
	EUWorksChatMemberStateChange__Kicked                                             = 3,
	EUWorksChatMemberStateChange__Banned                                             = 4
};

/// Enum /Script/UWorksCore.EUWorksChatEntryType
/// Size: 0x01 (1 bytes)
enum class EUWorksChatEntryType : uint8_t
{
	EUWorksChatEntryType__Invalid                                                    = 0,
	EUWorksChatEntryType__ChatMessage                                                = 1,
	EUWorksChatEntryType__Typing                                                     = 2,
	EUWorksChatEntryType__InviteGame                                                 = 3,
	EUWorksChatEntryType__Emote                                                      = 4,
	EUWorksChatEntryType__LeftConversation                                           = 6,
	EUWorksChatEntryType__Entered                                                    = 7,
	EUWorksChatEntryType__WasKicked                                                  = 8,
	EUWorksChatEntryType__WasBanned                                                  = 9,
	EUWorksChatEntryType__Disconnected                                               = 10,
	EUWorksChatEntryType__HistoricalChat                                             = 11,
	EUWorksChatEntryType__LinkBlocked                                                = 14
};

/// Enum /Script/UWorksCore.EUWorksP2PSessionError
/// Size: 0x01 (1 bytes)
enum class EUWorksP2PSessionError : uint8_t
{
	EUWorksP2PSessionError__None                                                     = 0,
	EUWorksP2PSessionError__NotRunningApp                                            = 1,
	EUWorksP2PSessionError__NoRightsToApp                                            = 2,
	EUWorksP2PSessionError__DestinationNotLoggedIn                                   = 3,
	EUWorksP2PSessionError__Timeout                                                  = 4,
	EUWorksP2PSessionError__Max                                                      = 5
};

/// Enum /Script/UWorksCore.EUWorksDenyReason
/// Size: 0x01 (1 bytes)
enum class EUWorksDenyReason : uint8_t
{
	EUWorksDenyReason__Invalid                                                       = 0,
	EUWorksDenyReason__InvalidVersion                                                = 1,
	EUWorksDenyReason__Generic                                                       = 2,
	EUWorksDenyReason__NotLoggedOn                                                   = 3,
	EUWorksDenyReason__NoLicense                                                     = 4,
	EUWorksDenyReason__Cheater                                                       = 5,
	EUWorksDenyReason__LoggedInElseWhere                                             = 6,
	EUWorksDenyReason__UnknownText                                                   = 7,
	EUWorksDenyReason__IncompatibleAnticheat                                         = 8,
	EUWorksDenyReason__MemoryCorruption                                              = 9,
	EUWorksDenyReason__IncompatibleSoftware                                          = 10,
	EUWorksDenyReason__SteamConnectionLost                                           = 11,
	EUWorksDenyReason__SteamConnectionError                                          = 12,
	EUWorksDenyReason__SteamResponseTimedOut                                         = 13,
	EUWorksDenyReason__SteamValidationStalled                                        = 14,
	EUWorksDenyReason__SteamOwnerLeftGuestUser                                       = 15
};

/// Enum /Script/UWorksCore.EUWorksFailureType
/// Size: 0x01 (1 bytes)
enum class EUWorksFailureType : uint8_t
{
	EUWorksFailureType__FlushedCallbackQueue                                         = 0,
	EUWorksFailureType__PipeFail                                                     = 1
};

/// Enum /Script/UWorksCore.EUWorksBroadcastUploadResult
/// Size: 0x01 (1 bytes)
enum class EUWorksBroadcastUploadResult : uint8_t
{
	EUWorksBroadcastUploadResult__None                                               = 0,
	EUWorksBroadcastUploadResult__OK                                                 = 1,
	EUWorksBroadcastUploadResult__InitFailed                                         = 2,
	EUWorksBroadcastUploadResult__FrameFailed                                        = 3,
	EUWorksBroadcastUploadResult__Timeout                                            = 4,
	EUWorksBroadcastUploadResult__BandwidthExceeded                                  = 5,
	EUWorksBroadcastUploadResult__LowFPS                                             = 6,
	EUWorksBroadcastUploadResult__MissingKeyFrames                                   = 7,
	EUWorksBroadcastUploadResult__NoConnection                                       = 8,
	EUWorksBroadcastUploadResult__RelayFailed                                        = 9,
	EUWorksBroadcastUploadResult__SettingsChanged                                    = 10,
	EUWorksBroadcastUploadResult__MissingAudio                                       = 11,
	EUWorksBroadcastUploadResult__TooFarBehind                                       = 12,
	EUWorksBroadcastUploadResult__TranscodeBehind                                    = 13
};

/// Enum /Script/UWorksCore.EUWorksSteamControllerPad
/// Size: 0x01 (1 bytes)
enum class EUWorksSteamControllerPad : uint8_t
{
	EUWorksSteamControllerPad__Left                                                  = 0,
	EUWorksSteamControllerPad__Right                                                 = 1
};

/// Enum /Script/UWorksCore.EUWorksSteamControllerLEDFlag
/// Size: 0x01 (1 bytes)
enum class EUWorksSteamControllerLEDFlag : uint8_t
{
	EUWorksSteamControllerLEDFlag__SetColor                                          = 0,
	EUWorksSteamControllerLEDFlag__RestoreUserDefault                                = 1
};

/// Enum /Script/UWorksCore.EUWorksControllerSourceMode
/// Size: 0x01 (1 bytes)
enum class EUWorksControllerSourceMode : uint8_t
{
	EUWorksControllerSourceMode__None                                                = 0,
	EUWorksControllerSourceMode__Dpad                                                = 1,
	EUWorksControllerSourceMode__Buttons                                             = 2,
	EUWorksControllerSourceMode__FourButtons                                         = 3,
	EUWorksControllerSourceMode__AbsoluteMouse                                       = 4,
	EUWorksControllerSourceMode__RelativeMouse                                       = 5,
	EUWorksControllerSourceMode__JoystickMove                                        = 6,
	EUWorksControllerSourceMode__JoystickMouse                                       = 7,
	EUWorksControllerSourceMode__JoystickCamera                                      = 8,
	EUWorksControllerSourceMode__ScrollWheel                                         = 9,
	EUWorksControllerSourceMode__Trigger                                             = 10,
	EUWorksControllerSourceMode__TouchMenu                                           = 11,
	EUWorksControllerSourceMode__MouseJoystick                                       = 12,
	EUWorksControllerSourceMode__MouseRegion                                         = 13,
	EUWorksControllerSourceMode__RadialMenu                                          = 14,
	EUWorksControllerSourceMode__Switches                                            = 15
};

/// Enum /Script/UWorksCore.EUWorksControllerSource
/// Size: 0x01 (1 bytes)
enum class EUWorksControllerSource : uint8_t
{
	EUWorksControllerSource__None                                                    = 0,
	EUWorksControllerSource__LeftTrackpad                                            = 1,
	EUWorksControllerSource__RightTrackpad                                           = 2,
	EUWorksControllerSource__Joystick                                                = 3,
	EUWorksControllerSource__ABXY                                                    = 4,
	EUWorksControllerSource__Switch                                                  = 5,
	EUWorksControllerSource__LeftTrigger                                             = 6,
	EUWorksControllerSource__RightTrigger                                            = 7,
	EUWorksControllerSource__Gyro                                                    = 8,
	EUWorksControllerSource__CenterTrackpad                                          = 9,
	EUWorksControllerSource__RightJoystick                                           = 10,
	EUWorksControllerSource__DPad                                                    = 11,
	EUWorksControllerSource__Count                                                   = 12
};

/// Enum /Script/UWorksCore.EUWorksControllerActionOrigin
/// Size: 0x01 (1 bytes)
enum class EUWorksControllerActionOrigin : uint8_t
{
	EUWorksControllerActionOrigin__None                                              = 0,
	EUWorksControllerActionOrigin__A                                                 = 1,
	EUWorksControllerActionOrigin__B                                                 = 2,
	EUWorksControllerActionOrigin__X                                                 = 3,
	EUWorksControllerActionOrigin__Y                                                 = 4,
	EUWorksControllerActionOrigin__LeftBumper                                        = 5,
	EUWorksControllerActionOrigin__RightBumper                                       = 6,
	EUWorksControllerActionOrigin__LeftGrip                                          = 7,
	EUWorksControllerActionOrigin__RightGrip                                         = 8,
	EUWorksControllerActionOrigin__Start                                             = 9,
	EUWorksControllerActionOrigin__Back                                              = 10,
	EUWorksControllerActionOrigin__LeftPad_Touch                                     = 11,
	EUWorksControllerActionOrigin__LeftPad_Swipe                                     = 12,
	EUWorksControllerActionOrigin__LeftPad_Click                                     = 13,
	EUWorksControllerActionOrigin__LeftPad_DPadNorth                                 = 14,
	EUWorksControllerActionOrigin__LeftPad_DPadSouth                                 = 15,
	EUWorksControllerActionOrigin__LeftPad_DPadWest                                  = 16,
	EUWorksControllerActionOrigin__LeftPad_DPadEast                                  = 17,
	EUWorksControllerActionOrigin__RightPad_Touch                                    = 18,
	EUWorksControllerActionOrigin__RightPad_Swipe                                    = 19,
	EUWorksControllerActionOrigin__RightPad_Click                                    = 20,
	EUWorksControllerActionOrigin__RightPad_DPadNorth                                = 21,
	EUWorksControllerActionOrigin__RightPad_DPadSouth                                = 22,
	EUWorksControllerActionOrigin__RightPad_DPadWest                                 = 23,
	EUWorksControllerActionOrigin__RightPad_DPadEast                                 = 24,
	EUWorksControllerActionOrigin__LeftTrigger_Pull                                  = 25,
	EUWorksControllerActionOrigin__LeftTrigger_Click                                 = 26,
	EUWorksControllerActionOrigin__RightTrigger_Pull                                 = 27,
	EUWorksControllerActionOrigin__RightTrigger_Click                                = 28,
	EUWorksControllerActionOrigin__LeftStick_Move                                    = 29,
	EUWorksControllerActionOrigin__LeftStick_Click                                   = 30,
	EUWorksControllerActionOrigin__LeftStick_DPadNorth                               = 31,
	EUWorksControllerActionOrigin__LeftStick_DPadSouth                               = 32,
	EUWorksControllerActionOrigin__LeftStick_DPadWest                                = 33,
	EUWorksControllerActionOrigin__LeftStick_DPadEast                                = 34,
	EUWorksControllerActionOrigin__Gyro_Move                                         = 35,
	EUWorksControllerActionOrigin__Gyro_Pitch                                        = 36,
	EUWorksControllerActionOrigin__Gyro_Yaw                                          = 37,
	EUWorksControllerActionOrigin__Gyro_Roll                                         = 38,
	EUWorksControllerActionOrigin__PS4_X                                             = 39,
	EUWorksControllerActionOrigin__PS4_Circle                                        = 40,
	EUWorksControllerActionOrigin__PS4_Triangle                                      = 41,
	EUWorksControllerActionOrigin__PS4_Square                                        = 42,
	EUWorksControllerActionOrigin__PS4_LeftBumper                                    = 43,
	EUWorksControllerActionOrigin__PS4_RightBumper                                   = 44,
	EUWorksControllerActionOrigin__PS4_Options                                       = 45,
	EUWorksControllerActionOrigin__PS4_Share                                         = 46,
	EUWorksControllerActionOrigin__PS4_LeftPad_Touch                                 = 47,
	EUWorksControllerActionOrigin__PS4_LeftPad_Swipe                                 = 48,
	EUWorksControllerActionOrigin__PS4_LeftPad_Click                                 = 49,
	EUWorksControllerActionOrigin__PS4_LeftPad_DPadNorth                             = 50,
	EUWorksControllerActionOrigin__PS4_LeftPad_DPadSouth                             = 51,
	EUWorksControllerActionOrigin__PS4_LeftPad_DPadWest                              = 52,
	EUWorksControllerActionOrigin__PS4_LeftPad_DPadEast                              = 53,
	EUWorksControllerActionOrigin__PS4_RightPad_Touch                                = 54,
	EUWorksControllerActionOrigin__PS4_RightPad_Swipe                                = 55,
	EUWorksControllerActionOrigin__PS4_RightPad_Click                                = 56,
	EUWorksControllerActionOrigin__PS4_RightPad_DPadNorth                            = 57,
	EUWorksControllerActionOrigin__PS4_RightPad_DPadSouth                            = 58,
	EUWorksControllerActionOrigin__PS4_RightPad_DPadWest                             = 59,
	EUWorksControllerActionOrigin__PS4_RightPad_DPadEast                             = 60,
	EUWorksControllerActionOrigin__PS4_CenterPad_Touch                               = 61,
	EUWorksControllerActionOrigin__PS4_CenterPad_Swipe                               = 62,
	EUWorksControllerActionOrigin__PS4_CenterPad_Click                               = 63,
	EUWorksControllerActionOrigin__PS4_CenterPad_DPadNorth                           = 64,
	EUWorksControllerActionOrigin__PS4_CenterPad_DPadSouth                           = 65,
	EUWorksControllerActionOrigin__PS4_CenterPad_DPadWest                            = 66,
	EUWorksControllerActionOrigin__PS4_CenterPad_DPadEast                            = 67,
	EUWorksControllerActionOrigin__PS4_LeftTrigger_Pull                              = 68,
	EUWorksControllerActionOrigin__PS4_LeftTrigger_Click                             = 69,
	EUWorksControllerActionOrigin__PS4_RightTrigger_Pull                             = 70,
	EUWorksControllerActionOrigin__PS4_RightTrigger_Click                            = 71,
	EUWorksControllerActionOrigin__PS4_LeftStick_Move                                = 72,
	EUWorksControllerActionOrigin__PS4_LeftStick_Click                               = 73,
	EUWorksControllerActionOrigin__PS4_LeftStick_DPadNorth                           = 74,
	EUWorksControllerActionOrigin__PS4_LeftStick_DPadSouth                           = 75,
	EUWorksControllerActionOrigin__PS4_LeftStick_DPadWest                            = 76,
	EUWorksControllerActionOrigin__PS4_LeftStick_DPadEast                            = 77,
	EUWorksControllerActionOrigin__PS4_RightStick_Move                               = 78,
	EUWorksControllerActionOrigin__PS4_RightStick_Click                              = 79,
	EUWorksControllerActionOrigin__PS4_RightStick_DPadNorth                          = 80,
	EUWorksControllerActionOrigin__PS4_RightStick_DPadSouth                          = 81,
	EUWorksControllerActionOrigin__PS4_RightStick_DPadWest                           = 82,
	EUWorksControllerActionOrigin__PS4_RightStick_DPadEast                           = 83,
	EUWorksControllerActionOrigin__PS4_DPad_North                                    = 84,
	EUWorksControllerActionOrigin__PS4_DPad_South                                    = 85,
	EUWorksControllerActionOrigin__PS4_DPad_West                                     = 86,
	EUWorksControllerActionOrigin__PS4_DPad_East                                     = 87,
	EUWorksControllerActionOrigin__PS4_Gyro_Move                                     = 88,
	EUWorksControllerActionOrigin__PS4_Gyro_Pitch                                    = 89,
	EUWorksControllerActionOrigin__PS4_Gyro_Yaw                                      = 90,
	EUWorksControllerActionOrigin__PS4_Gyro_Roll                                     = 91,
	EUWorksControllerActionOrigin__XBoxOne_A                                         = 92,
	EUWorksControllerActionOrigin__XBoxOne_B                                         = 93,
	EUWorksControllerActionOrigin__XBoxOne_X                                         = 94,
	EUWorksControllerActionOrigin__XBoxOne_Y                                         = 95,
	EUWorksControllerActionOrigin__XBoxOne_LeftBumper                                = 96,
	EUWorksControllerActionOrigin__XBoxOne_RightBumper                               = 97,
	EUWorksControllerActionOrigin__XBoxOne_Menu                                      = 98,
	EUWorksControllerActionOrigin__XBoxOne_View                                      = 99,
	EUWorksControllerActionOrigin__XBoxOne_LeftTrigger_Pull                          = 100,
	EUWorksControllerActionOrigin__XBoxOne_LeftTrigger_Click                         = 101,
	EUWorksControllerActionOrigin__XBoxOne_RightTrigger_Pull                         = 102,
	EUWorksControllerActionOrigin__XBoxOne_RightTrigger_Click                        = 103,
	EUWorksControllerActionOrigin__XBoxOne_LeftStick_Move                            = 104,
	EUWorksControllerActionOrigin__XBoxOne_LeftStick_Click                           = 105,
	EUWorksControllerActionOrigin__XBoxOne_LeftStick_DPadNorth                       = 106,
	EUWorksControllerActionOrigin__XBoxOne_LeftStick_DPadSouth                       = 107,
	EUWorksControllerActionOrigin__XBoxOne_LeftStick_DPadWest                        = 108,
	EUWorksControllerActionOrigin__XBoxOne_LeftStick_DPadEast                        = 109,
	EUWorksControllerActionOrigin__XBoxOne_RightStick_Move                           = 110,
	EUWorksControllerActionOrigin__XBoxOne_RightStick_Click                          = 111,
	EUWorksControllerActionOrigin__XBoxOne_RightStick_DPadNorth                      = 112,
	EUWorksControllerActionOrigin__XBoxOne_RightStick_DPadSouth                      = 113,
	EUWorksControllerActionOrigin__XBoxOne_RightStick_DPadWest                       = 114,
	EUWorksControllerActionOrigin__XBoxOne_RightStick_DPadEast                       = 115,
	EUWorksControllerActionOrigin__XBoxOne_DPad_North                                = 116,
	EUWorksControllerActionOrigin__XBoxOne_DPad_South                                = 117,
	EUWorksControllerActionOrigin__XBoxOne_DPad_West                                 = 118,
	EUWorksControllerActionOrigin__XBoxOne_DPad_East                                 = 119,
	EUWorksControllerActionOrigin__XBox360_A                                         = 120,
	EUWorksControllerActionOrigin__XBox360_B                                         = 121,
	EUWorksControllerActionOrigin__XBox360_X                                         = 122,
	EUWorksControllerActionOrigin__XBox360_Y                                         = 123,
	EUWorksControllerActionOrigin__XBox360_LeftBumper                                = 124,
	EUWorksControllerActionOrigin__XBox360_RightBumper                               = 125,
	EUWorksControllerActionOrigin__XBox360_Start                                     = 126,
	EUWorksControllerActionOrigin__XBox360_Back                                      = 127,
	EUWorksControllerActionOrigin__XBox360_LeftTrigger_Pull                          = 128,
	EUWorksControllerActionOrigin__XBox360_LeftTrigger_Click                         = 129,
	EUWorksControllerActionOrigin__XBox360_RightTrigger_Pull                         = 130,
	EUWorksControllerActionOrigin__XBox360_RightTrigger_Click                        = 131,
	EUWorksControllerActionOrigin__XBox360_LeftStick_Move                            = 132,
	EUWorksControllerActionOrigin__XBox360_LeftStick_Click                           = 133,
	EUWorksControllerActionOrigin__XBox360_LeftStick_DPadNorth                       = 134,
	EUWorksControllerActionOrigin__XBox360_LeftStick_DPadSouth                       = 135,
	EUWorksControllerActionOrigin__XBox360_LeftStick_DPadWest                        = 136,
	EUWorksControllerActionOrigin__XBox360_LeftStick_DPadEast                        = 137,
	EUWorksControllerActionOrigin__XBox360_RightStick_Move                           = 138,
	EUWorksControllerActionOrigin__XBox360_RightStick_Click                          = 139,
	EUWorksControllerActionOrigin__XBox360_RightStick_DPadNorth                      = 140,
	EUWorksControllerActionOrigin__XBox360_RightStick_DPadSouth                      = 141,
	EUWorksControllerActionOrigin__XBox360_RightStick_DPadWest                       = 142,
	EUWorksControllerActionOrigin__XBox360_RightStick_DPadEast                       = 143,
	EUWorksControllerActionOrigin__XBox360_DPad_North                                = 144,
	EUWorksControllerActionOrigin__XBox360_DPad_South                                = 145,
	EUWorksControllerActionOrigin__XBox360_DPad_West                                 = 146,
	EUWorksControllerActionOrigin__XBox360_DPad_East                                 = 147,
	EUWorksControllerActionOrigin__SteamV2_A                                         = 148,
	EUWorksControllerActionOrigin__SteamV2_B                                         = 149,
	EUWorksControllerActionOrigin__SteamV2_X                                         = 150,
	EUWorksControllerActionOrigin__SteamV2_Y                                         = 151,
	EUWorksControllerActionOrigin__SteamV2_LeftBumper                                = 152,
	EUWorksControllerActionOrigin__SteamV2_RightBumper                               = 153,
	EUWorksControllerActionOrigin__SteamV2_LeftGrip                                  = 154,
	EUWorksControllerActionOrigin__SteamV2_RightGrip                                 = 155,
	EUWorksControllerActionOrigin__SteamV2_Start                                     = 156,
	EUWorksControllerActionOrigin__SteamV2_Back                                      = 157,
	EUWorksControllerActionOrigin__SteamV2_LeftPad_Touch                             = 158,
	EUWorksControllerActionOrigin__SteamV2_LeftPad_Swipe                             = 159,
	EUWorksControllerActionOrigin__SteamV2_LeftPad_Click                             = 160,
	EUWorksControllerActionOrigin__SteamV2_LeftPad_DPadNorth                         = 161,
	EUWorksControllerActionOrigin__SteamV2_LeftPad_DPadSouth                         = 162,
	EUWorksControllerActionOrigin__SteamV2_LeftPad_DPadWest                          = 163,
	EUWorksControllerActionOrigin__SteamV2_LeftPad_DPadEast                          = 164,
	EUWorksControllerActionOrigin__SteamV2_RightPad_Touch                            = 165,
	EUWorksControllerActionOrigin__SteamV2_RightPad_Swipe                            = 166,
	EUWorksControllerActionOrigin__SteamV2_RightPad_Click                            = 167,
	EUWorksControllerActionOrigin__SteamV2_RightPad_DPadNorth                        = 168,
	EUWorksControllerActionOrigin__SteamV2_RightPad_DPadSouth                        = 169,
	EUWorksControllerActionOrigin__SteamV2_RightPad_DPadWest                         = 170,
	EUWorksControllerActionOrigin__SteamV2_RightPad_DPadEast                         = 171,
	EUWorksControllerActionOrigin__SteamV2_LeftTrigger_Pull                          = 172,
	EUWorksControllerActionOrigin__SteamV2_LeftTrigger_Click                         = 173,
	EUWorksControllerActionOrigin__SteamV2_RightTrigger_Pull                         = 174,
	EUWorksControllerActionOrigin__SteamV2_RightTrigger_Click                        = 175,
	EUWorksControllerActionOrigin__SteamV2_LeftStick_Move                            = 176,
	EUWorksControllerActionOrigin__SteamV2_LeftStick_Click                           = 177,
	EUWorksControllerActionOrigin__SteamV2_LeftStick_DPadNorth                       = 178,
	EUWorksControllerActionOrigin__SteamV2_LeftStick_DPadSouth                       = 179,
	EUWorksControllerActionOrigin__SteamV2_LeftStick_DPadWest                        = 180,
	EUWorksControllerActionOrigin__SteamV2_LeftStick_DPadEast                        = 181,
	EUWorksControllerActionOrigin__SteamV2_Gyro_Move                                 = 182,
	EUWorksControllerActionOrigin__SteamV2_Gyro_Pitch                                = 183,
	EUWorksControllerActionOrigin__SteamV2_Gyro_Yaw                                  = 184,
	EUWorksControllerActionOrigin__SteamV2_Gyro_Roll                                 = 185,
	EUWorksControllerActionOrigin__Count                                             = 186
};

/// Enum /Script/UWorksCore.EUWorksUserRestriction
/// Size: 0x01 (1 bytes)
enum class EUWorksUserRestriction : uint8_t
{
	EUWorksUserRestriction__Unknown                                                  = 0,
	EUWorksUserRestriction__AnyChat                                                  = 1,
	EUWorksUserRestriction__VoiceChat                                                = 2,
	EUWorksUserRestriction__GroupChat                                                = 3,
	EUWorksUserRestriction__Rating                                                   = 4,
	EUWorksUserRestriction__GameInvites                                              = 5,
	EUWorksUserRestriction__Trading                                                  = 6
};

/// Enum /Script/UWorksCore.EUWorksOverlaySpecific
/// Size: 0x01 (1 bytes)
enum class EUWorksOverlaySpecific : uint8_t
{
	EUWorksOverlaySpecific__SteamID                                                  = 0,
	EUWorksOverlaySpecific__Chat                                                     = 1,
	EUWorksOverlaySpecific__JoinTrade                                                = 2,
	EUWorksOverlaySpecific__Stats                                                    = 3,
	EUWorksOverlaySpecific__Achievements                                             = 4,
	EUWorksOverlaySpecific__FriendAdd                                                = 5,
	EUWorksOverlaySpecific__FriendRemove                                             = 6,
	EUWorksOverlaySpecific__FriendRequestAccept                                      = 7,
	EUWorksOverlaySpecific__FriendRequestIgnore                                      = 8
};

/// Enum /Script/UWorksCore.EUWorksOverlayGeneric
/// Size: 0x01 (1 bytes)
enum class EUWorksOverlayGeneric : uint8_t
{
	EUWorksOverlayGeneric__Friends                                                   = 0,
	EUWorksOverlayGeneric__Community                                                 = 1,
	EUWorksOverlayGeneric__Players                                                   = 2,
	EUWorksOverlayGeneric__Settings                                                  = 3,
	EUWorksOverlayGeneric__OfficialGameGroup                                         = 4,
	EUWorksOverlayGeneric__Stats                                                     = 5,
	EUWorksOverlayGeneric__Achievements                                              = 6
};

/// Enum /Script/UWorksCore.EUWorksPersonaState
/// Size: 0x01 (1 bytes)
enum class EUWorksPersonaState : uint8_t
{
	EUWorksPersonaState__Offline                                                     = 0,
	EUWorksPersonaState__Online                                                      = 1,
	EUWorksPersonaState__Busy                                                        = 2,
	EUWorksPersonaState__Away                                                        = 3,
	EUWorksPersonaState__Snooze                                                      = 4,
	EUWorksPersonaState__LookingToTrade                                              = 5,
	EUWorksPersonaState__LookingToPlay                                               = 6,
	EUWorksPersonaState__Max                                                         = 7
};

/// Enum /Script/UWorksCore.EUWorksOverlayToStoreFlag
/// Size: 0x01 (1 bytes)
enum class EUWorksOverlayToStoreFlag : uint8_t
{
	EUWorksOverlayToStoreFlag__None                                                  = 0,
	EUWorksOverlayToStoreFlag__AddToCart                                             = 1,
	EUWorksOverlayToStoreFlag__AddToCartAndShow                                      = 2
};

/// Enum /Script/UWorksCore.EUWorksFriendRelationship
/// Size: 0x01 (1 bytes)
enum class EUWorksFriendRelationship : uint8_t
{
	EUWorksFriendRelationship__None                                                  = 0,
	EUWorksFriendRelationship__Blocked                                               = 1,
	EUWorksFriendRelationship__RequestRecipient                                      = 2,
	EUWorksFriendRelationship__Friend                                                = 3,
	EUWorksFriendRelationship__RequestInitiator                                      = 4,
	EUWorksFriendRelationship__Ignored                                               = 5,
	EUWorksFriendRelationship__IgnoredFriend                                         = 6,
	EUWorksFriendRelationship__Max                                                   = 8
};

/// Enum /Script/UWorksCore.EUWorksFriendFlags
/// Size: 0x01 (1 bytes)
enum class EUWorksFriendFlags : uint8_t
{
	EUWorksFriendFlags__Blocked                                                      = 0,
	EUWorksFriendFlags__FriendshipRequested                                          = 1,
	EUWorksFriendFlags__Immediate                                                    = 2,
	EUWorksFriendFlags__ClanMember                                                   = 3,
	EUWorksFriendFlags__OnGameServer                                                 = 4,
	EUWorksFriendFlags__HasPlayedWith                                                = 5,
	EUWorksFriendFlags__FriendOfFriend                                               = 6,
	EUWorksFriendFlags__RequestingFriendship                                         = 7,
	EUWorksFriendFlags__RequestingInfo                                               = 8,
	EUWorksFriendFlags__Ignored                                                      = 9,
	EUWorksFriendFlags__IgnoredFriend                                                = 10,
	EUWorksFriendFlags__Suggested                                                    = 11,
	EUWorksFriendFlags__ChatMember                                                   = 12,
	EUWorksFriendFlags__All                                                          = 13
};

/// Enum /Script/UWorksCore.EUWorksSteamItemFlags
/// Size: 0x01 (1 bytes)
enum class EUWorksSteamItemFlags : uint8_t
{
	EUWorksSteamItemFlags__NoTrade                                                   = 0,
	EUWorksSteamItemFlags__Removed                                                   = 8,
	EUWorksSteamItemFlags__Consumed                                                  = 9
};

/// Enum /Script/UWorksCore.EUWorksLobbyType
/// Size: 0x01 (1 bytes)
enum class EUWorksLobbyType : uint8_t
{
	EUWorksLobbyType__Private                                                        = 0,
	EUWorksLobbyType__FriendsOnly                                                    = 1,
	EUWorksLobbyType__Public                                                         = 2,
	EUWorksLobbyType__Invisible                                                      = 3
};

/// Enum /Script/UWorksCore.EUWorksLobbyDistanceFilter
/// Size: 0x01 (1 bytes)
enum class EUWorksLobbyDistanceFilter : uint8_t
{
	EUWorksLobbyDistanceFilter__Close                                                = 0,
	EUWorksLobbyDistanceFilter__Default                                              = 1,
	EUWorksLobbyDistanceFilter__Far                                                  = 2,
	EUWorksLobbyDistanceFilter__Worldwide                                            = 3
};

/// Enum /Script/UWorksCore.EUWorksLobbyComparison
/// Size: 0x01 (1 bytes)
enum class EUWorksLobbyComparison : uint8_t
{
	EUWorksLobbyComparison__EqualToOrLessThan                                        = 0,
	EUWorksLobbyComparison__LessThan                                                 = 1,
	EUWorksLobbyComparison__Equal                                                    = 2,
	EUWorksLobbyComparison__GreaterThan                                              = 3,
	EUWorksLobbyComparison__EqualToOrGreaterThan                                     = 4,
	EUWorksLobbyComparison__NotEqual                                                 = 5
};

/// Enum /Script/UWorksCore.EUWorksServerQueryType
/// Size: 0x01 (1 bytes)
enum class EUWorksServerQueryType : uint8_t
{
	EUWorksServerQueryType__Internet                                                 = 0,
	EUWorksServerQueryType__LAN                                                      = 1,
	EUWorksServerQueryType__Friends                                                  = 2,
	EUWorksServerQueryType__Favorites                                                = 3,
	EUWorksServerQueryType__History                                                  = 4,
	EUWorksServerQueryType__Spectator                                                = 5
};

/// Enum /Script/UWorksCore.EUWorksAudioPlaybackStatus
/// Size: 0x01 (1 bytes)
enum class EUWorksAudioPlaybackStatus : uint8_t
{
	EUWorksAudioPlaybackStatus__Undefined                                            = 0,
	EUWorksAudioPlaybackStatus__Playing                                              = 1,
	EUWorksAudioPlaybackStatus__Paused                                               = 2,
	EUWorksAudioPlaybackStatus__Idle                                                 = 3
};

/// Enum /Script/UWorksCore.EUWorksP2PSend
/// Size: 0x01 (1 bytes)
enum class EUWorksP2PSend : uint8_t
{
	EUWorksP2PSend__Unreliable                                                       = 0,
	EUWorksP2PSend__UnreliableNoDelay                                                = 1,
	EUWorksP2PSend__Reliable                                                         = 2,
	EUWorksP2PSend__ReliableWithBuffering                                            = 3
};

/// Enum /Script/UWorksCore.EUWorksRemoteStoragePlatform
/// Size: 0x01 (1 bytes)
enum class EUWorksRemoteStoragePlatform : uint8_t
{
	EUWorksRemoteStoragePlatform__Windows                                            = 0,
	EUWorksRemoteStoragePlatform__OSX                                                = 1,
	EUWorksRemoteStoragePlatform__PS3                                                = 2,
	EUWorksRemoteStoragePlatform__Linux                                              = 3,
	EUWorksRemoteStoragePlatform__Reserved                                           = 4,
	EUWorksRemoteStoragePlatform__All                                                = 5
};

/// Enum /Script/UWorksCore.EUWorksVRScreenshotType
/// Size: 0x01 (1 bytes)
enum class EUWorksVRScreenshotType : uint8_t
{
	EUWorksVRScreenshotType__None                                                    = 0,
	EUWorksVRScreenshotType__Mono                                                    = 1,
	EUWorksVRScreenshotType__Stereo                                                  = 2,
	EUWorksVRScreenshotType__MonoCubemap                                             = 3,
	EUWorksVRScreenshotType__MonoPanorama                                            = 4,
	EUWorksVRScreenshotType__StereoPanorama                                          = 5
};

/// Enum /Script/UWorksCore.EUWorksWorkshopFileType
/// Size: 0x01 (1 bytes)
enum class EUWorksWorkshopFileType : uint8_t
{
	EUWorksWorkshopFileType__Community                                               = 0,
	EUWorksWorkshopFileType__Microtransaction                                        = 1,
	EUWorksWorkshopFileType__Collection                                              = 2,
	EUWorksWorkshopFileType__Art                                                     = 3,
	EUWorksWorkshopFileType__Video                                                   = 4,
	EUWorksWorkshopFileType__Screenshot                                              = 5,
	EUWorksWorkshopFileType__Game                                                    = 6,
	EUWorksWorkshopFileType__Software                                                = 7,
	EUWorksWorkshopFileType__Concept                                                 = 8,
	EUWorksWorkshopFileType__WebGuide                                                = 9,
	EUWorksWorkshopFileType__IntegratedGuide                                         = 10,
	EUWorksWorkshopFileType__Merch                                                   = 11,
	EUWorksWorkshopFileType__ControllerBinding                                       = 12,
	EUWorksWorkshopFileType__SteamworksAccessInvite                                  = 13,
	EUWorksWorkshopFileType__SteamVideo                                              = 14,
	EUWorksWorkshopFileType__GameManagedItem                                         = 15,
	EUWorksWorkshopFileType__Max                                                     = 16
};

/// Enum /Script/UWorksCore.EUWorksRemoteStoragePublishedFileVisibility
/// Size: 0x01 (1 bytes)
enum class EUWorksRemoteStoragePublishedFileVisibility : uint8_t
{
	EUWorksRemoteStoragePublishedFileVisibility__Public                              = 0,
	EUWorksRemoteStoragePublishedFileVisibility__FriendsOnly                         = 1,
	EUWorksRemoteStoragePublishedFileVisibility__Private                             = 2
};

/// Enum /Script/UWorksCore.EUWorksUserUGCListSortOrder
/// Size: 0x01 (1 bytes)
enum class EUWorksUserUGCListSortOrder : uint8_t
{
	EUWorksUserUGCListSortOrder__CreationOrderDesc                                   = 0,
	EUWorksUserUGCListSortOrder__CreationOrderAsc                                    = 1,
	EUWorksUserUGCListSortOrder__TitleAsc                                            = 2,
	EUWorksUserUGCListSortOrder__LastUpdatedDesc                                     = 3,
	EUWorksUserUGCListSortOrder__SubscriptionDateDesc                                = 4,
	EUWorksUserUGCListSortOrder__VoteScoreDesc                                       = 5,
	EUWorksUserUGCListSortOrder__ForModeration                                       = 6
};

/// Enum /Script/UWorksCore.EUWorksUserUGCList
/// Size: 0x01 (1 bytes)
enum class EUWorksUserUGCList : uint8_t
{
	EUWorksUserUGCList__Published                                                    = 0,
	EUWorksUserUGCList__VotedOn                                                      = 1,
	EUWorksUserUGCList__VotedUp                                                      = 2,
	EUWorksUserUGCList__VotedDown                                                    = 3,
	EUWorksUserUGCList__WillVoteLater                                                = 4,
	EUWorksUserUGCList__Favorited                                                    = 5,
	EUWorksUserUGCList__Subscribed                                                   = 6,
	EUWorksUserUGCList__UsedOrPlayed                                                 = 7,
	EUWorksUserUGCList__Followed                                                     = 8
};

/// Enum /Script/UWorksCore.EUWorksUGCQuery
/// Size: 0x01 (1 bytes)
enum class EUWorksUGCQuery : uint8_t
{
	EUWorksUGCQuery__RankedByVote                                                    = 0,
	EUWorksUGCQuery__RankedByPublicationDate                                         = 1,
	EUWorksUGCQuery__AcceptedForGameRankedByAcceptanceDate                           = 2,
	EUWorksUGCQuery__RankedByTrend                                                   = 3,
	EUWorksUGCQuery__FavoritedByFriendsRankedByPublicationDate                       = 4,
	EUWorksUGCQuery__CreatedByFriendsRankedByPublicationDate                         = 5,
	EUWorksUGCQuery__RankedByNumTimesReported                                        = 6,
	EUWorksUGCQuery__CreatedByFollowedUsersRankedByPublicationDate                   = 7,
	EUWorksUGCQuery__NotYetRated                                                     = 8,
	EUWorksUGCQuery__RankedByTotalVotesAsc                                           = 9,
	EUWorksUGCQuery__RankedByVotesUp                                                 = 10,
	EUWorksUGCQuery__RankedByTextSearch                                              = 11,
	EUWorksUGCQuery__RankedByTotalUniqueSubscriptions                                = 12,
	EUWorksUGCQuery__RankedByPlaytimeTrend                                           = 13,
	EUWorksUGCQuery__RankedByTotalPlaytime                                           = 14,
	EUWorksUGCQuery__RankedByAveragePlaytimeTrend                                    = 15,
	EUWorksUGCQuery__RankedByLifetimeAveragePlaytime                                 = 16,
	EUWorksUGCQuery__RankedByPlaytimeSessionsTrend                                   = 17,
	EUWorksUGCQuery__RankedByLifetimePlaytimeSessions                                = 18
};

/// Enum /Script/UWorksCore.EUWorksUGCMatchingUGCType
/// Size: 0x01 (1 bytes)
enum class EUWorksUGCMatchingUGCType : uint8_t
{
	EUWorksUGCMatchingUGCType__Items                                                 = 0,
	EUWorksUGCMatchingUGCType__Items_Mtx                                             = 1,
	EUWorksUGCMatchingUGCType__Items_ReadyToUse                                      = 2,
	EUWorksUGCMatchingUGCType__Collections                                           = 3,
	EUWorksUGCMatchingUGCType__Artwork                                               = 4,
	EUWorksUGCMatchingUGCType__Videos                                                = 5,
	EUWorksUGCMatchingUGCType__Screenshots                                           = 6,
	EUWorksUGCMatchingUGCType__AllGuides                                             = 7,
	EUWorksUGCMatchingUGCType__WebGuides                                             = 8,
	EUWorksUGCMatchingUGCType__IntegratedGuides                                      = 9,
	EUWorksUGCMatchingUGCType__UsableInGame                                          = 10,
	EUWorksUGCMatchingUGCType__ControllerBindings                                    = 11,
	EUWorksUGCMatchingUGCType__GameManagedItems                                      = 12,
	EUWorksUGCMatchingUGCType__All                                                   = 254
};

/// Enum /Script/UWorksCore.EUWorksItemUpdateStatus
/// Size: 0x01 (1 bytes)
enum class EUWorksItemUpdateStatus : uint8_t
{
	EUWorksItemUpdateStatus__Invalid                                                 = 0,
	EUWorksItemUpdateStatus__PreparingConfig                                         = 1,
	EUWorksItemUpdateStatus__PreparingContent                                        = 2,
	EUWorksItemUpdateStatus__UploadingContent                                        = 3,
	EUWorksItemUpdateStatus__UploadingPreviewFile                                    = 4,
	EUWorksItemUpdateStatus__CommittingChanges                                       = 5
};

/// Enum /Script/UWorksCore.EUWorksItemStatistic
/// Size: 0x01 (1 bytes)
enum class EUWorksItemStatistic : uint8_t
{
	EUWorksItemStatistic__NumSubscriptions                                           = 0,
	EUWorksItemStatistic__NumFavorites                                               = 1,
	EUWorksItemStatistic__NumFollowers                                               = 2,
	EUWorksItemStatistic__NumUniqueSubscriptions                                     = 3,
	EUWorksItemStatistic__NumUniqueFavorites                                         = 4,
	EUWorksItemStatistic__NumUniqueFollowers                                         = 5,
	EUWorksItemStatistic__NumUniqueWebsiteViews                                      = 6,
	EUWorksItemStatistic__ReportScore                                                = 7,
	EUWorksItemStatistic__NumSecondsPlayed                                           = 8,
	EUWorksItemStatistic__NumPlaytimeSessions                                        = 9,
	EUWorksItemStatistic__NumComments                                                = 10
};

/// Enum /Script/UWorksCore.EUWorksItemState
/// Size: 0x01 (1 bytes)
enum class EUWorksItemState : uint8_t
{
	EUWorksItemState__None                                                           = 0,
	EUWorksItemState__Subscribed                                                     = 1,
	EUWorksItemState__LegacyItem                                                     = 2,
	EUWorksItemState__Installed                                                      = 3,
	EUWorksItemState__NeedsUpdate                                                    = 4,
	EUWorksItemState__Downloading                                                    = 5,
	EUWorksItemState__DownloadPending                                                = 6
};

/// Enum /Script/UWorksCore.EUWorksItemPreviewType
/// Size: 0x01 (1 bytes)
enum class EUWorksItemPreviewType : uint8_t
{
	EUWorksItemPreviewType__Image                                                    = 0,
	EUWorksItemPreviewType__YouTubeVideo                                             = 1,
	EUWorksItemPreviewType__Sketchfab                                                = 2,
	EUWorksItemPreviewType__EnvironmentMap_HorizontalCross                           = 3,
	EUWorksItemPreviewType__EnvironmentMap_LatLong                                   = 4,
	EUWorksItemPreviewType__ReservedMax                                              = 254
};

/// Enum /Script/UWorksCore.EUWorksVoiceResult
/// Size: 0x01 (1 bytes)
enum class EUWorksVoiceResult : uint8_t
{
	EUWorksVoiceResult__OK                                                           = 0,
	EUWorksVoiceResult__NotInitialized                                               = 1,
	EUWorksVoiceResult__NotRecording                                                 = 2,
	EUWorksVoiceResult__NoData                                                       = 3,
	EUWorksVoiceResult__BufferTooSmall                                               = 4,
	EUWorksVoiceResult__DataCorrupted                                                = 5,
	EUWorksVoiceResult__Restricted                                                   = 6,
	EUWorksVoiceResult__UnsupportedCodec                                             = 7,
	EUWorksVoiceResult__ReceiverOutOfDate                                            = 8,
	EUWorksVoiceResult__ReceiverDidNotAnswer                                         = 9
};

/// Enum /Script/UWorksCore.EUWorksLeaderboardUploadScoreMethod
/// Size: 0x01 (1 bytes)
enum class EUWorksLeaderboardUploadScoreMethod : uint8_t
{
	EUWorksLeaderboardUploadScoreMethod__None                                        = 0,
	EUWorksLeaderboardUploadScoreMethod__KeepBest                                    = 1,
	EUWorksLeaderboardUploadScoreMethod__ForceUpdate                                 = 2
};

/// Enum /Script/UWorksCore.EUWorksLeaderboardSortMethod
/// Size: 0x01 (1 bytes)
enum class EUWorksLeaderboardSortMethod : uint8_t
{
	EUWorksLeaderboardSortMethod__None                                               = 0,
	EUWorksLeaderboardSortMethod__Ascending                                          = 1,
	EUWorksLeaderboardSortMethod__Descending                                         = 2
};

/// Enum /Script/UWorksCore.EUWorksLeaderboardDisplayType
/// Size: 0x01 (1 bytes)
enum class EUWorksLeaderboardDisplayType : uint8_t
{
	EUWorksLeaderboardDisplayType__None                                              = 0,
	EUWorksLeaderboardDisplayType__Numeric                                           = 1,
	EUWorksLeaderboardDisplayType__TimeSeconds                                       = 2,
	EUWorksLeaderboardDisplayType__TimeMilliSeconds                                  = 3
};

/// Enum /Script/UWorksCore.EUWorksLeaderboardDataRequest
/// Size: 0x01 (1 bytes)
enum class EUWorksLeaderboardDataRequest : uint8_t
{
	EUWorksLeaderboardDataRequest__Global                                            = 0,
	EUWorksLeaderboardDataRequest__GlobalAroundUser                                  = 1,
	EUWorksLeaderboardDataRequest__Friends                                           = 2,
	EUWorksLeaderboardDataRequest__Users                                             = 3
};

/// Enum /Script/UWorksCore.EUWorksNotificationPosition
/// Size: 0x01 (1 bytes)
enum class EUWorksNotificationPosition : uint8_t
{
	EUWorksNotificationPosition__TopLeft                                             = 0,
	EUWorksNotificationPosition__TopRight                                            = 1,
	EUWorksNotificationPosition__BottomLeft                                          = 2,
	EUWorksNotificationPosition__BottomRight                                         = 3
};

/// Enum /Script/UWorksCore.EUWorksUniverse
/// Size: 0x01 (1 bytes)
enum class EUWorksUniverse : uint8_t
{
	EUWorksUniverse__Invalid                                                         = 0,
	EUWorksUniverse__Public                                                          = 1,
	EUWorksUniverse__Beta                                                            = 2,
	EUWorksUniverse__Internal                                                        = 3,
	EUWorksUniverse__Dev                                                             = 4,
	EUWorksUniverse__Max                                                             = 5
};

/// Enum /Script/UWorksCore.EUWorksGamepadTextInputMode
/// Size: 0x01 (1 bytes)
enum class EUWorksGamepadTextInputMode : uint8_t
{
	EUWorksGamepadTextInputMode__Normal                                              = 0,
	EUWorksGamepadTextInputMode__Password                                            = 1
};

/// Enum /Script/UWorksCore.EUWorksGamepadTextInputLineMode
/// Size: 0x01 (1 bytes)
enum class EUWorksGamepadTextInputLineMode : uint8_t
{
	EUWorksGamepadTextInputLineMode__SingleLine                                      = 0,
	EUWorksGamepadTextInputLineMode__MultipleLines                                   = 1
};

/// Enum /Script/UWorksCore.EUWorksCheckFileSignature
/// Size: 0x01 (1 bytes)
enum class EUWorksCheckFileSignature : uint8_t
{
	EUWorksCheckFileSignature__InvalidSignature                                      = 0,
	EUWorksCheckFileSignature__ValidSignature                                        = 1,
	EUWorksCheckFileSignature__FileNotFound                                          = 2,
	EUWorksCheckFileSignature__NoSignaturesFoundForThisApp                           = 3,
	EUWorksCheckFileSignature__NoSignaturesFoundForThisFile                          = 4
};

/// Enum /Script/UWorksCore.EUWorksUserHasLicenseForAppResult
/// Size: 0x01 (1 bytes)
enum class EUWorksUserHasLicenseForAppResult : uint8_t
{
	EUWorksUserHasLicenseForAppResult__HasLicense                                    = 0,
	EUWorksUserHasLicenseForAppResult__DoesNotHaveLicense                            = 1,
	EUWorksUserHasLicenseForAppResult__NoAuth                                        = 2
};

/// Enum /Script/UWorksCore.EUWorksBeginAuthSessionResult
/// Size: 0x01 (1 bytes)
enum class EUWorksBeginAuthSessionResult : uint8_t
{
	EUWorksBeginAuthSessionResult__OK                                                = 0,
	EUWorksBeginAuthSessionResult__InvalidTicket                                     = 1,
	EUWorksBeginAuthSessionResult__DuplicateRequest                                  = 2,
	EUWorksBeginAuthSessionResult__InvalidVersion                                    = 3,
	EUWorksBeginAuthSessionResult__GameMismatch                                      = 4,
	EUWorksBeginAuthSessionResult__ExpiredTicket                                     = 5
};

/// Enum /Script/UWorksCore.EUWorksAccountType
/// Size: 0x01 (1 bytes)
enum class EUWorksAccountType : uint8_t
{
	EUWorksAccountType__Invalid                                                      = 0,
	EUWorksAccountType__Individual                                                   = 1,
	EUWorksAccountType__Multiseat                                                    = 2,
	EUWorksAccountType__GameServer                                                   = 3,
	EUWorksAccountType__AnonGameServer                                               = 4,
	EUWorksAccountType__Pending                                                      = 5,
	EUWorksAccountType__ContentServer                                                = 6,
	EUWorksAccountType__Clan                                                         = 7,
	EUWorksAccountType__Chat                                                         = 8,
	EUWorksAccountType__ConsoleUser                                                  = 9,
	EUWorksAccountType__AnonUser                                                     = 10,
	EUWorksAccountType__Max                                                          = 11
};

/// Class /Script/UWorksCore.UWorksInterfaceCore
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceCore : public UUWorksInterface
{ 
public:
};

/// Class /Script/UWorksCore.UWorksRequestCore
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UUWorksRequestCore : public UUWorksRequest
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreAppList
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UUWorksInterfaceCoreAppList : public UUWorksInterfaceCore
{ 
public:
	SDK_UNDEFINED(16,311) /* FMulticastInlineDelegate */ __um(SteamAppInstalled);                                  // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,312) /* FMulticastInlineDelegate */ __um(SteamAppUninstalled);                                // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreAppList.GetNumInstalledApps
	// int32_t GetNumInstalledApps();                                                                                           // [0x9af6e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreAppList.GetInstalledApps
	// int32_t GetInstalledApps(TArray<int32_t>& AppIDs, int32_t MaxAppIDs);                                                    // [0x9af5e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreAppList.GetAppName
	// int32_t GetAppName(int32_t AppID, FString& Name, int32_t NameMaxLength);                                                 // [0x9af4a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreAppList.GetAppList
	// class UUWorksInterfaceCoreAppList* GetAppList();                                                                         // [0x9af470] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksInterfaceCoreAppList.GetAppInstallDir
	// int32_t GetAppInstallDir(int32_t AppID, FString& Directory, int32_t DirectoryMaxLength);                                 // [0x9af330] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreAppList.GetAppBuildId
	// int32_t GetAppBuildId(int32_t AppID);                                                                                    // [0x9af290] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreApps
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UUWorksInterfaceCoreApps : public UUWorksInterfaceCore
{ 
public:
	SDK_UNDEFINED(16,313) /* FMulticastInlineDelegate */ __um(DlcInstalled);                                       // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,314) /* FMulticastInlineDelegate */ __um(NewLaunchQueryParameters);                           // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.UninstallDLC
	// void UninstallDLC(int32_t AppID);                                                                                        // [0x9b0d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.MarkContentCorrupt
	// bool MarkContentCorrupt(bool bMissingFilesOnly);                                                                         // [0x9b0c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.InstallDLC
	// void InstallDLC(int32_t AppID);                                                                                          // [0x9b0be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.GetLaunchQueryParam
	// FString GetLaunchQueryParam(FString Key);                                                                                // [0x9b0aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.GetInstalledDepots
	// int32_t GetInstalledDepots(int32_t AppID, TArray<int32_t>& Depots, int32_t MaxDepots);                                   // [0x9b0960] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.GetFileDetailsMinimal
	// void GetFileDetailsMinimal(FDelegateProperty& Completed, FString Filename);                                              // [0x9b0800] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.GetFileDetails
	// class UUWorksRequestCoreGetFileDetails* GetFileDetails();                                                                // [0x9b07d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.GetEarliestPurchaseUnixTime
	// int32_t GetEarliestPurchaseUnixTime(int32_t AppID);                                                                      // [0x9b0730] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.GetDlcDownloadProgress
	// bool GetDlcDownloadProgress(int32_t AppID, int32_t& BytesDownloaded, int32_t& BytesTotal);                               // [0x9b0610] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.GetDLCCount
	// int32_t GetDLCCount();                                                                                                   // [0x9b05e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.GetCurrentGameLanguage
	// FString GetCurrentGameLanguage();                                                                                        // [0x9b0560] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.GetCurrentBetaName
	// bool GetCurrentBetaName(FString& Name, int32_t NameMaxLength);                                                           // [0x9b0460] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.GetAvailableGameLanguages
	// FString GetAvailableGameLanguages();                                                                                     // [0x9b03e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.GetApps
	// class UUWorksInterfaceCoreApps* GetApps();                                                                               // [0x9b03b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.GetAppOwner
	// FUWorksSteamID GetAppOwner();                                                                                            // [0x9b0370] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.GetAppInstallDir
	// int32_t GetAppInstallDir(int32_t AppID, FString& Path, int32_t PathMaxLength);                                           // [0x9b0230] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.GetAppBuildId
	// int32_t GetAppBuildId();                                                                                                 // [0x9b0200] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.BIsVACBanned
	// bool BIsVACBanned();                                                                                                     // [0x9b01d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.BIsSubscribedFromFreeWeekend
	// bool BIsSubscribedFromFreeWeekend();                                                                                     // [0x9b01a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.BIsSubscribedApp
	// bool BIsSubscribedApp(int32_t AppID);                                                                                    // [0x9b0100] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.BIsSubscribed
	// bool BIsSubscribed();                                                                                                    // [0x9b00d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.BIsLowViolence
	// bool BIsLowViolence();                                                                                                   // [0x9b00a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.BIsDlcInstalled
	// bool BIsDlcInstalled(int32_t AppID);                                                                                     // [0x9b0000] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.BIsCybercafe
	// bool BIsCybercafe();                                                                                                     // [0x9affd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.BIsAppInstalled
	// bool BIsAppInstalled(int32_t AppID);                                                                                     // [0x9aff30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreApps.BGetDLCDataByIndex
	// bool BGetDLCDataByIndex(int32_t DLC, int32_t& AppID, bool& bAvailable, FString& Name, int32_t NameMaxLength);            // [0x9afd30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreController
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceCoreController : public UUWorksInterfaceCore
{ 
public:


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.TriggerVibration
	// void TriggerVibration(FUWorksControllerHandle ControllerHandle, int32_t LeftSpeed, int32_t RightSpeed);                  // [0x9b2660] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.TriggerRepeatedHapticPulse
	// void TriggerRepeatedHapticPulse(FUWorksControllerHandle ControllerHandle, EUWorksSteamControllerPad TargetPad, int32_t DurationMicroSec, int32_t OffMicroSec, int32_t Repeat, int32_t Flags); // [0x9b2490] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.TriggerHapticPulse
	// void TriggerHapticPulse(FUWorksControllerHandle ControllerHandle, EUWorksSteamControllerPad TargetPad, int32_t DurationMicroSec); // [0x9b2370] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.StopAnalogActionMomentum
	// void StopAnalogActionMomentum(FUWorksControllerHandle ControllerHandle, FUWorksControllerAnalogActionHandle Action);     // [0x9b22a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.Shutdown
	// bool Shutdown();                                                                                                         // [0x9b2270] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.ShowBindingPanel
	// bool ShowBindingPanel(FUWorksControllerHandle ControllerHandle);                                                         // [0x9b21e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.SetLEDColor
	// void SetLEDColor(FUWorksControllerHandle ControllerHandle, char ColorR, char ColorG, char ColorB, TArray<EUWorksSteamControllerLEDFlag> Flags); // [0x9b1ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.RunFrame
	// void RunFrame();                                                                                                         // [0x9b1fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.Init
	// bool Init();                                                                                                             // [0x9b1fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.GetStringForActionOrigin
	// FString GetStringForActionOrigin(EUWorksControllerActionOrigin Origin);                                                  // [0x9b1ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.GetMotionData
	// FUWorksControllerMotionData GetMotionData(FUWorksControllerHandle ControllerHandle);                                     // [0x9b1e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.GetGlyphForActionOrigin
	// FString GetGlyphForActionOrigin(EUWorksControllerActionOrigin Origin);                                                   // [0x9b1d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.GetGamepadIndexForController
	// int32_t GetGamepadIndexForController(FUWorksControllerHandle ControllerHandle);                                          // [0x9b1ca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.GetDigitalActionOrigins
	// int32_t GetDigitalActionOrigins(FUWorksControllerHandle ControllerHandle, FUWorksControllerActionSetHandle ActionSetHandle, FUWorksControllerDigitalActionHandle DigitalActionHandle, TArray<EUWorksControllerActionOrigin>& OriginsOut); // [0x9b1720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.GetDigitalActionHandle
	// FUWorksControllerDigitalActionHandle GetDigitalActionHandle(FString ActionName);                                         // [0x9b1bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.GetDigitalActionData
	// FUWorksControllerDigitalActionData GetDigitalActionData(FUWorksControllerHandle ControllerHandle, FUWorksControllerDigitalActionHandle DigitalActionHandle); // [0x9b1ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.GetCurrentActionSet
	// FUWorksControllerActionSetHandle GetCurrentActionSet(FUWorksControllerHandle ControllerHandle);                          // [0x9b1a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.GetControllerForGamepadIndex
	// FUWorksControllerHandle GetControllerForGamepadIndex(int32_t Index);                                                     // [0x9b19a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.GetController
	// class UUWorksInterfaceCoreController* GetController();                                                                   // [0x9b1970] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.GetConnectedControllers
	// int32_t GetConnectedControllers(TArray<FUWorksControllerHandle>& HandlesOut);                                            // [0x9b18b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.GetAnalogActionOrigins
	// int32_t GetAnalogActionOrigins(FUWorksControllerHandle ControllerHandle, FUWorksControllerActionSetHandle ActionSetHandle, FUWorksControllerAnalogActionHandle AnalogActionHandle, TArray<EUWorksControllerActionOrigin>& OriginsOut); // [0x9b1720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.GetAnalogActionHandle
	// FUWorksControllerAnalogActionHandle GetAnalogActionHandle(FString ActionName);                                           // [0x9b1630] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.GetAnalogActionData
	// FUWorksControllerAnalogActionData GetAnalogActionData(FUWorksControllerHandle ControllerHandle, FUWorksControllerAnalogActionHandle AnalogActionHandle); // [0x9b1540] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.GetActionSetHandle
	// FUWorksControllerActionSetHandle GetActionSetHandle(FString ActionSetName);                                              // [0x9b1450] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreController.ActivateActionSet
	// void ActivateActionSet(FUWorksControllerHandle ControllerHandle, FUWorksControllerActionSetHandle ActionSetHandle);      // [0x9b1380] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreFriends
/// Size: 0x00D8 (216 bytes) (0x000028 - 0x0000D8) align 8 MaxSize: 0x00D8
class UUWorksInterfaceCoreFriends : public UUWorksInterfaceCore
{ 
public:
	SDK_UNDEFINED(16,315) /* FMulticastInlineDelegate */ __um(PersonaStateChange);                                 // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,316) /* FMulticastInlineDelegate */ __um(GameOverlayActivated);                               // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,317) /* FMulticastInlineDelegate */ __um(GameServerChangeRequested);                          // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,318) /* FMulticastInlineDelegate */ __um(GameLobbyJoinRequested);                             // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,319) /* FMulticastInlineDelegate */ __um(AvatarImageLoaded);                                  // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,320) /* FMulticastInlineDelegate */ __um(FriendRichPresenceUpdate);                           // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,321) /* FMulticastInlineDelegate */ __um(GameRichPresenceJoinRequested);                      // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,322) /* FMulticastInlineDelegate */ __um(GameConnectedClanChatMsg);                           // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,323) /* FMulticastInlineDelegate */ __um(GameConnectedChatJoin);                              // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,324) /* FMulticastInlineDelegate */ __um(GameConnectedChatLeave);                             // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,325) /* FMulticastInlineDelegate */ __um(GameConnectedFriendChatMsg);                         // 0x00C8   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.SetRichPresence
	// bool SetRichPresence(FString Key, FString Value);                                                                        // [0x9b7250] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.SetPlayedWith
	// void SetPlayedWith(FUWorksSteamID SteamIDUserPlayedWith);                                                                // [0x9b71c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.SetPersonaNameMinimal
	// void SetPersonaNameMinimal(FDelegateProperty& Completed, FString Name);                                                  // [0x9b7060] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.SetPersonaName
	// class UUWorksRequestCoreSetPersonaName* SetPersonaName();                                                                // [0x9b7030] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.SetListenForFriendsMessages
	// bool SetListenForFriendsMessages(bool bInterceptEnabled);                                                                // [0x9b6f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.SetInGameVoiceSpeaking
	// void SetInGameVoiceSpeaking(FUWorksSteamID SteamIDUser, bool bSpeaking);                                                 // [0x9b6ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.SendClanChatMessage
	// bool SendClanChatMessage(FUWorksSteamID SteamIDClanChat, FString Text);                                                  // [0x9b6d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.RequestUserInformation
	// bool RequestUserInformation(FUWorksSteamID SteamIDUser, bool bRequireNameOnly);                                          // [0x9b6cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.RequestFriendRichPresence
	// void RequestFriendRichPresence(FUWorksSteamID SteamIDFriend);                                                            // [0x9b6c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.RequestClanOfficerListMinimal
	// void RequestClanOfficerListMinimal(FDelegateProperty& Completed, FUWorksSteamID SteamID);                                // [0x9b6b30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.RequestClanOfficerList
	// class UUWorksRequestCoreRequestClanOfficerList* RequestClanOfficerList();                                                // [0x9b6b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.ReplyToFriendMessage
	// bool ReplyToFriendMessage(FUWorksSteamID SteamIDFriend, FString MessageToSend);                                          // [0x9b69d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.OpenClanChatWindowInSteam
	// bool OpenClanChatWindowInSteam(FUWorksSteamID SteamIDClanChat);                                                          // [0x9b6930] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.LeaveClanChatRoom
	// bool LeaveClanChatRoom(FUWorksSteamID SteamIDClan);                                                                      // [0x9b6890] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.JoinClanChatRoomMinimal
	// void JoinClanChatRoomMinimal(FDelegateProperty& Completed, FUWorksSteamID SteamIDClan);                                  // [0x9b6790] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.JoinClanChatRoom
	// class UUWorksRequestCoreJoinClanChatRoom* JoinClanChatRoom();                                                            // [0x9b6760] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.IsUserInSource
	// bool IsUserInSource(FUWorksSteamID SteamIDUser, FUWorksSteamID SteamIDSource);                                           // [0x9b6690] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.IsFollowingMinimal
	// void IsFollowingMinimal(FDelegateProperty& Completed, FUWorksSteamID SteamID);                                           // [0x9b6590] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.IsFollowing
	// class UUWorksRequestCoreIsFollowing* IsFollowing();                                                                      // [0x9b6560] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.IsClanChatWindowOpenInSteam
	// bool IsClanChatWindowOpenInSteam(FUWorksSteamID SteamIDClanChat);                                                        // [0x9b64c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.IsClanChatAdmin
	// bool IsClanChatAdmin(FUWorksSteamID SteamIDClanChat, FUWorksSteamID SteamIDUser);                                        // [0x9b63f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.InviteUserToGame
	// bool InviteUserToGame(FUWorksSteamID SteamIDFriend, FString ConnectString);                                              // [0x9b62c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.HasFriend
	// bool HasFriend(FUWorksSteamID SteamIDFriend, TArray<EUWorksFriendFlags> FriendFlags);                                    // [0x9b6190] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetUserRestrictions
	// TArray<EUWorksUserRestriction> GetUserRestrictions();                                                                    // [0x9b6110] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetSmallFriendAvatar
	// class UTexture2D* GetSmallFriendAvatar(FUWorksSteamID SteamIDFriend);                                                    // [0x9b6070] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetPlayerNickname
	// FString GetPlayerNickname(FUWorksSteamID SteamIDPlayer);                                                                 // [0x9b5f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetPersonaState
	// EUWorksPersonaState GetPersonaState();                                                                                   // [0x9b5f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetPersonaName
	// FString GetPersonaName();                                                                                                // [0x9b5ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetMediumFriendAvatar
	// class UTexture2D* GetMediumFriendAvatar(FUWorksSteamID SteamIDFriend);                                                   // [0x9b5e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetLargeFriendAvatar
	// class UTexture2D* GetLargeFriendAvatar(FUWorksSteamID SteamIDFriend);                                                    // [0x9b5da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendSteamLevel
	// int32_t GetFriendSteamLevel(FUWorksSteamID SteamIDFriend);                                                               // [0x9b5970] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupName
	// FString GetFriendsGroupName(FUWorksFriendsGroupID FriendsGroupID);                                                       // [0x9b5cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupMembersList
	// void GetFriendsGroupMembersList(FUWorksFriendsGroupID FriendsGroupID, TArray<FUWorksSteamID>& SteamIDMembers, int32_t MembersCount); // [0x9b5b90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupMembersCount
	// int32_t GetFriendsGroupMembersCount(FUWorksFriendsGroupID FriendsGroupID);                                               // [0x9b5b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupIDByIndex
	// FUWorksFriendsGroupID GetFriendsGroupIDByIndex(int32_t FriendGroup);                                                     // [0x9b5a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupCount
	// int32_t GetFriendsGroupCount();                                                                                          // [0x9b5a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriends
	// class UUWorksInterfaceCoreFriends* GetFriends();                                                                         // [0x9b5a10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresenceKeyCount
	// int32_t GetFriendRichPresenceKeyCount(FUWorksSteamID SteamIDFriend);                                                     // [0x9b58d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresenceKeyByIndex
	// FString GetFriendRichPresenceKeyByIndex(FUWorksSteamID SteamIDFriend, int32_t Key);                                      // [0x9b57c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresence
	// FString GetFriendRichPresence(FUWorksSteamID SteamIDFriend, FString Key);                                                // [0x9b5650] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendRelationship
	// EUWorksFriendRelationship GetFriendRelationship(FUWorksSteamID SteamIDFriend);                                           // [0x9b55b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaState
	// EUWorksPersonaState GetFriendPersonaState(FUWorksSteamID SteamIDFriend);                                                 // [0x9b5510] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaNameHistory
	// FString GetFriendPersonaNameHistory(FUWorksSteamID SteamIDFriend, int32_t PersonaName);                                  // [0x9b5400] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaName
	// FString GetFriendPersonaName(FUWorksSteamID SteamIDFriend);                                                              // [0x9b5320] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendMessage
	// int32_t GetFriendMessage(FUWorksSteamID SteamIDFriend, int32_t MessageID, FString& Text, int32_t TextMaxLength, EUWorksChatEntryType& ChatEntryType); // [0x9b5130] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendGamePlayed
	// bool GetFriendGamePlayed(FUWorksSteamID SteamIDFriend, FUWorksGameID& GameID, FString& GameIP, int32_t& ConnectionPort, int32_t& QueryPort, FUWorksSteamID& SteamIDLobby); // [0x9b4f00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendFromSourceByIndex
	// FUWorksSteamID GetFriendFromSourceByIndex(FUWorksSteamID SteamIDSource, int32_t Friend);                                 // [0x9b4e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendCountFromSource
	// int32_t GetFriendCountFromSource(FUWorksSteamID SteamIDSource);                                                          // [0x9b4d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendCount
	// int32_t GetFriendCount(TArray<EUWorksFriendFlags> FriendFlags);                                                          // [0x9b4c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendCoplayTime
	// int32_t GetFriendCoplayTime(FUWorksSteamID SteamIDFriend);                                                               // [0x9b4bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendCoplayGame
	// int32_t GetFriendCoplayGame(FUWorksSteamID SteamIDFriend);                                                               // [0x9b4b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFriendByIndex
	// FUWorksSteamID GetFriendByIndex(int32_t Friend, TArray<EUWorksFriendFlags> FriendFlags);                                 // [0x9b4a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFollowerCountMinimal
	// void GetFollowerCountMinimal(FDelegateProperty& Completed, FUWorksSteamID SteamID);                                      // [0x9b4910] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetFollowerCount
	// class UUWorksRequestCoreGetFollowerCount* GetFollowerCount();                                                            // [0x9b48e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetCoplayFriendCount
	// int32_t GetCoplayFriendCount();                                                                                          // [0x9b48b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetCoplayFriend
	// FUWorksSteamID GetCoplayFriend(int32_t CoplayFriend);                                                                    // [0x9b4820] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetClanTag
	// FString GetClanTag(FUWorksSteamID SteamIDClan);                                                                          // [0x9b4740] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetClanOwner
	// FUWorksSteamID GetClanOwner(FUWorksSteamID SteamIDClan);                                                                 // [0x9b46b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetClanOfficerCount
	// int32_t GetClanOfficerCount(FUWorksSteamID SteamIDClan);                                                                 // [0x9b4610] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetClanOfficerByIndex
	// FUWorksSteamID GetClanOfficerByIndex(FUWorksSteamID SteamIDClan, int32_t Officer);                                       // [0x9b4540] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetClanName
	// FString GetClanName(FUWorksSteamID SteamIDClan);                                                                         // [0x9b4460] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetClanCount
	// int32_t GetClanCount();                                                                                                  // [0x9b4430] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetClanChatMessage
	// int32_t GetClanChatMessage(FUWorksSteamID SteamIDClanChat, int32_t MessageID, FString& Text, int32_t TextMax, EUWorksChatEntryType& ChatEntryType, FUWorksSteamID& SteamIDChatter); // [0x9b4220] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetClanChatMemberCount
	// int32_t GetClanChatMemberCount(FUWorksSteamID SteamIDClan);                                                              // [0x9b4180] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetClanByIndex
	// FUWorksSteamID GetClanByIndex(int32_t Clan);                                                                             // [0x9b40f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetClanActivityCounts
	// bool GetClanActivityCounts(FUWorksSteamID SteamIDClan, int32_t& Online, int32_t& InGame, int32_t& Chatting);             // [0x9b3f50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.GetChatMemberByIndex
	// FUWorksSteamID GetChatMemberByIndex(FUWorksSteamID SteamIDClan, int32_t User);                                           // [0x9b3e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.EnumerateFollowingListMinimal
	// void EnumerateFollowingListMinimal(FDelegateProperty& Completed, int32_t StartIndex);                                    // [0x9b3d80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.EnumerateFollowingList
	// class UUWorksRequestCoreEnumerateFollowingList* EnumerateFollowingList();                                                // [0x9b3d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.DownloadClanActivityCountsMinimal
	// void DownloadClanActivityCountsMinimal(FDelegateProperty& Completed, TArray<FUWorksSteamID> SteamIDClans);               // [0x9b3bf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.DownloadClanActivityCounts
	// class UUWorksRequestCoreDownloadClanActivityCounts* DownloadClanActivityCounts();                                        // [0x9b3bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.CloseClanChatWindowInSteam
	// bool CloseClanChatWindowInSteam(FUWorksSteamID SteamIDClanChat);                                                         // [0x9b3b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.ClearRichPresence
	// void ClearRichPresence();                                                                                                // [0x9b3b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToWebPage
	// void ActivateGameOverlayToWebPage(FString URL);                                                                          // [0x9b3a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToUser
	// void ActivateGameOverlayToUser(EUWorksOverlaySpecific Dialog, FUWorksSteamID SteamID);                                   // [0x9b3940] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToStore
	// void ActivateGameOverlayToStore(int32_t AppID, EUWorksOverlayToStoreFlag Flag);                                          // [0x9b3870] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayInviteDialog
	// void ActivateGameOverlayInviteDialog(FUWorksSteamID SteamIDLobby);                                                       // [0x9b37e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlay
	// void ActivateGameOverlay(EUWorksOverlayGeneric Dialog);                                                                  // [0x9b3760] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreGameServer
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UUWorksInterfaceCoreGameServer : public UUWorksInterfaceCore
{ 
public:
	SDK_UNDEFINED(16,326) /* FMulticastInlineDelegate */ __um(GSPolicyResponse);                                   // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,327) /* FMulticastInlineDelegate */ __um(GSClientGroupStatus);                                // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,328) /* FMulticastInlineDelegate */ __um(GSValidateAuthTicketResponse);                       // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.WasRestartRequested
	// bool WasRestartRequested();                                                                                              // [0x9b8a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.UserHasLicenseForApp
	// EUWorksUserHasLicenseForAppResult UserHasLicenseForApp(FUWorksSteamID SteamID, int32_t AppID);                           // [0x9b8980] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.SetServerName
	// void SetServerName(FString ServerName);                                                                                  // [0x9b8890] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.SetRegion
	// void SetRegion(FString Region);                                                                                          // [0x9b87a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.SetPasswordProtected
	// void SetPasswordProtected(bool bPasswordProtected);                                                                      // [0x9b8710] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.SetMaxPlayerCount
	// void SetMaxPlayerCount(int32_t PlayersMax);                                                                              // [0x9b8680] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.SetMapName
	// void SetMapName(FString MapName);                                                                                        // [0x9b8590] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.SetKeyValue
	// void SetKeyValue(FString Key, FString Value);                                                                            // [0x9b8410] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.SetGameTags
	// void SetGameTags(FString GameTags);                                                                                      // [0x9b8320] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.SetGameData
	// void SetGameData(FString GameData);                                                                                      // [0x9b8230] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.SetBotPlayerCount
	// void SetBotPlayerCount(int32_t BotPlayers);                                                                              // [0x9b81a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.RequestUserGroupStatus
	// bool RequestUserGroupStatus(FUWorksSteamID SteamIDUser, FUWorksSteamID SteamIDGroup);                                    // [0x9b80d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.GetSteamID
	// FUWorksSteamID GetSteamID();                                                                                             // [0x9b8090] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.GetGameServer
	// class UUWorksInterfaceCoreGameServer* GetGameServer();                                                                   // [0x9b8060] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.GetAuthSessionTicket
	// FUWorksTicketHandle GetAuthSessionTicket(TArray<char>& Ticket);                                                          // [0x9b7fa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.EndAuthSession
	// void EndAuthSession(FUWorksSteamID SteamID);                                                                             // [0x9b7f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.EnableHeartbeats
	// void EnableHeartbeats(bool bActive);                                                                                     // [0x9b7e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.ComputeNewPlayerCompatibilityMinimal
	// void ComputeNewPlayerCompatibilityMinimal(FDelegateProperty& Completed, FUWorksSteamID SteamIDNewPlayer);                // [0x9b7d80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.ComputeNewPlayerCompatibility
	// class UUWorksRequestCoreComputeNewPlayerCompatibility* ComputeNewPlayerCompatibility();                                  // [0x9b7d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.ClearAllKeyValues
	// void ClearAllKeyValues();                                                                                                // [0x9b7d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.CancelAuthTicket
	// void CancelAuthTicket(FUWorksTicketHandle TicketHandle);                                                                 // [0x9b7cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.BSecure
	// bool BSecure();                                                                                                          // [0x9b7b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.BLoggedOn
	// bool BLoggedOn();                                                                                                        // [0x9b7b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.BeginAuthSession
	// EUWorksBeginAuthSessionResult BeginAuthSession(TArray<char> Ticket, FUWorksSteamID SteamID);                             // [0x9b7b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.AssociateWithClanMinimal
	// void AssociateWithClanMinimal(FDelegateProperty& Completed, FUWorksSteamID SteamIDClan);                                 // [0x9b7a20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServer.AssociateWithClan
	// class UUWorksRequestCoreAssociateWithClan* AssociateWithClan();                                                          // [0x9b79f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreGameServerStats
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UUWorksInterfaceCoreGameServerStats : public UUWorksInterfaceCore
{ 
public:
	SDK_UNDEFINED(16,329) /* FMulticastInlineDelegate */ __um(GSStatsUnloaded);                                    // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServerStats.UpdateUserAvgRateStat
	// bool UpdateUserAvgRateStat(FUWorksSteamID SteamIDUser, FString Name, float CountThisSession, float SessionLength);       // [0x9b9ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServerStats.StoreUserStatsMinimal
	// void StoreUserStatsMinimal(FDelegateProperty& Completed, FUWorksSteamID SteamIDUser);                                    // [0x9b99c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServerStats.StoreUserStats
	// class UUWorksRequestCoreStoreUserStats* StoreUserStats();                                                                // [0x9b9990] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserStatFromInteger
	// bool SetUserStatFromInteger(FUWorksSteamID SteamIDUser, FString Name, int32_t data);                                     // [0x9b9820] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserStatFromFloat
	// bool SetUserStatFromFloat(FUWorksSteamID SteamIDUser, FString Name, float data);                                         // [0x9b96b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserAchievement
	// bool SetUserAchievement(FUWorksSteamID SteamIDUser, FString Name);                                                       // [0x9b9580] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServerStats.RequestUserStatsMinimal
	// void RequestUserStatsMinimal(FDelegateProperty& Completed, FUWorksSteamID SteamIDUser);                                  // [0x9b9480] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServerStats.RequestUserStats
	// class UUWorksRequestCoreRequestUserStatsGS* RequestUserStats();                                                          // [0x9b9450] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserStatAsInteger
	// bool GetUserStatAsInteger(FUWorksSteamID SteamIDUser, FString Name, int32_t& data);                                      // [0x9b92c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserStatAsFloat
	// bool GetUserStatAsFloat(FUWorksSteamID SteamIDUser, FString Name, float& data);                                          // [0x9b9130] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserAchievement
	// bool GetUserAchievement(FUWorksSteamID SteamIDUser, FString Name, bool& bAchieved);                                      // [0x9b8fa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServerStats.GetGameServerStats
	// class UUWorksInterfaceCoreGameServerStats* GetGameServerStats();                                                         // [0x9b8f70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksInterfaceCoreGameServerStats.ClearUserAchievement
	// bool ClearUserAchievement(FUWorksSteamID SteamIDUser, FString Name);                                                     // [0x9b8e40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreInventory
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UUWorksInterfaceCoreInventory : public UUWorksInterfaceCore
{ 
public:
	SDK_UNDEFINED(16,330) /* FMulticastInlineDelegate */ __um(SteamInventoryResultReady);                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,331) /* FMulticastInlineDelegate */ __um(SteamInventoryFullUpdate);                           // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,332) /* FMulticastInlineDelegate */ __um(SteamInventoryDefinitionUpdate);                     // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.TriggerItemDrop
	// bool TriggerItemDrop(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemDef ItemDefinition);                           // [0x9bbe70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.TransferItemQuantity
	// bool TransferItemQuantity(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemInstanceID ItemSourceInstanceID, int32_t ItemSourceQuantity, FUWorksSteamItemInstanceID ItemDestinationInstanceID); // [0x9bbcf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.TradeItems
	// bool TradeItems(FUWorksSteamInventoryResult& Handle, FUWorksSteamID SteamIDTradePartner, TArray<FUWorksSteamItemInstanceID> ItemsGiven, TArray<int32_t> ItemsGivenQuantities, TArray<FUWorksSteamItemInstanceID> ItemsReceived, TArray<int32_t> ItemsReceivedQuantities); // [0x9bb9b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.SerializeResult
	// bool SerializeResult(FUWorksSteamInventoryResult Handle, TArray<char>& Buffer);                                          // [0x9bb8b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.RequestEligiblePromoItemDefinitionsIDsMinimal
	// void RequestEligiblePromoItemDefinitionsIDsMinimal(FDelegateProperty& Completed, FUWorksSteamID SteamID);                // [0x9bb7b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.RequestEligiblePromoItemDefinitionsIDs
	// class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDs();                // [0x9bb780] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.LoadItemDefinitions
	// bool LoadItemDefinitions();                                                                                              // [0x9bb750] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.GrantPromoItems
	// bool GrantPromoItems(FUWorksSteamInventoryResult& Handle);                                                               // [0x9bb6a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.GetResultTimestamp
	// int32_t GetResultTimestamp(FUWorksSteamInventoryResult Handle);                                                          // [0x9bb610] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.GetResultStatus
	// EUWorksResult GetResultStatus(FUWorksSteamInventoryResult Handle);                                                       // [0x9bb580] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.GetResultItems
	// bool GetResultItems(FUWorksSteamInventoryResult Handle, TArray<FUWorksSteamItemDetails>& Items);                         // [0x9bb450] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.GetItemsByID
	// bool GetItemsByID(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemInstanceID> InstanceIDs);                  // [0x9bb300] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionPropertyValue
	// bool GetItemDefinitionPropertyValue(FUWorksSteamItemDef ItemDefinition, FString PropertyName, FString& PropertyValue);   // [0x9bb170] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionPropertiesNames
	// bool GetItemDefinitionPropertiesNames(FUWorksSteamItemDef ItemDefinition, TArray<FString>& PropertiesNames);             // [0x9bb050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionIDs
	// bool GetItemDefinitionIDs(TArray<FUWorksSteamItemDef>& ItemDefinitions);                                                 // [0x9baf90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.GetInventory
	// class UUWorksInterfaceCoreInventory* GetInventory();                                                                     // [0x9baf60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.GetEligiblePromoItemDefinitionIDs
	// bool GetEligiblePromoItemDefinitionIDs(FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef>& ItemDefinitions);            // [0x9bae60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.GetAllItems
	// bool GetAllItems(FUWorksSteamInventoryResult& Handle);                                                                   // [0x9badb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.GenerateItems
	// bool GenerateItems(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemDef> ItemDefinitions, TArray<int32_t> ItemQuantities); // [0x9babe0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.ExchangeItems
	// bool ExchangeItems(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemDef> ItemsGenerated, TArray<int32_t> ItemsGeneratedQuantities, TArray<FUWorksSteamItemInstanceID> ItemsDestroyed, TArray<int32_t> ItemsDestroyedQuantities); // [0x9ba8e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.DestroyResult
	// void DestroyResult(FUWorksSteamInventoryResult Handle);                                                                  // [0x9ba860] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.DeserializeResult
	// bool DeserializeResult(FUWorksSteamInventoryResult& Handle, TArray<char> Buffer, bool bReservedMustBeFalse);             // [0x9ba6c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.ConsumeItem
	// bool ConsumeItem(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemInstanceID ItemInstanceID, int32_t ItemQuantity);  // [0x9ba5a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.CheckResultSteamID
	// bool CheckResultSteamID(FUWorksSteamInventoryResult Handle, FUWorksSteamID SteamID);                                     // [0x9ba4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.AddPromoItems
	// bool AddPromoItems(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemDef> ItemDefinitions);                    // [0x9ba380] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreInventory.AddPromoItem
	// bool AddPromoItem(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemDef ItemDefinition);                              // [0x9ba290] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreMatchmaking
/// Size: 0x00B8 (184 bytes) (0x000028 - 0x0000B8) align 8 MaxSize: 0x00B8
class UUWorksInterfaceCoreMatchmaking : public UUWorksInterfaceCore
{ 
public:
	SDK_UNDEFINED(16,333) /* FMulticastInlineDelegate */ __um(FavoritesListChanged);                               // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,334) /* FMulticastInlineDelegate */ __um(LobbyInvite);                                        // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,335) /* FMulticastInlineDelegate */ __um(LobbyDataUpdate);                                    // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,336) /* FMulticastInlineDelegate */ __um(LobbyEnter);                                         // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,337) /* FMulticastInlineDelegate */ __um(LobbyChatUpdate);                                    // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,338) /* FMulticastInlineDelegate */ __um(LobbyChatMsg);                                       // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,339) /* FMulticastInlineDelegate */ __um(LobbyGameCreated);                                   // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,340) /* FMulticastInlineDelegate */ __um(LobbyKicked);                                        // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,341) /* FMulticastInlineDelegate */ __um(FavoritesListAccountsUpdated);                       // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyType
	// bool SetLobbyType(FUWorksSteamID SteamIDLobby, EUWorksLobbyType LobbyType);                                              // [0x9bf360] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyOwner
	// bool SetLobbyOwner(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDNewOwner);                                         // [0x9bf290] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyMemberLimit
	// bool SetLobbyMemberLimit(FUWorksSteamID SteamIDLobby, int32_t MaxMembers);                                               // [0x9bf1c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyMemberData
	// void SetLobbyMemberData(FUWorksSteamID SteamIDLobby, FString Key, FString Value);                                        // [0x9bf010] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyJoinable
	// bool SetLobbyJoinable(FUWorksSteamID SteamIDLobby, bool bLobbyJoinable);                                                 // [0x9bef40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyGameServer
	// void SetLobbyGameServer(FUWorksSteamID SteamIDLobby, FString GameServerIP, int32_t GameServerPort, FUWorksSteamID SteamIDGameServer); // [0x9beda0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyData
	// bool SetLobbyData(FUWorksSteamID SteamIDLobby, FString Key, FString Value);                                              // [0x9bebe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.SetLinkedLobby
	// bool SetLinkedLobby(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDLobbyDependent);                                  // [0x9beb10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.SendLobbyChatMsg
	// bool SendLobbyChatMsg(FUWorksSteamID SteamIDLobby, FString Message);                                                     // [0x9be9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyListMinimal
	// void RequestLobbyListMinimal(FDelegateProperty& Completed);                                                              // [0x9be930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyList
	// class UUWorksRequestCoreRequestLobbyList* RequestLobbyList();                                                            // [0x9be900] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyData
	// bool RequestLobbyData(FUWorksSteamID SteamIDLobby);                                                                      // [0x9be860] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.RemoveFavoriteGame
	// bool RemoveFavoriteGame(int32_t AppID, FString IP, int32_t ConnectionPort, int32_t QueryPort, TArray<EUWorksFavoriteFlags> Flags); // [0x9be630] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.LeaveLobby
	// void LeaveLobby(FUWorksSteamID SteamIDLobby);                                                                            // [0x9be5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.JoinLobbyMinimal
	// void JoinLobbyMinimal(FDelegateProperty& Completed, FUWorksSteamID SteamIDLobby);                                        // [0x9be4a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.JoinLobby
	// class UUWorksRequestCoreJoinLobby* JoinLobby();                                                                          // [0x9be470] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.InviteUserToLobby
	// bool InviteUserToLobby(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDInvitee);                                      // [0x9be3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.GetNumLobbyMembers
	// int32_t GetNumLobbyMembers(FUWorksSteamID SteamIDLobby);                                                                 // [0x9be300] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.GetMatchmaking
	// class UUWorksInterfaceCoreMatchmaking* GetMatchmaking();                                                                 // [0x9be2d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyOwner
	// FUWorksSteamID GetLobbyOwner(FUWorksSteamID SteamIDLobby);                                                               // [0x9be240] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberLimit
	// int32_t GetLobbyMemberLimit(FUWorksSteamID SteamIDLobby);                                                                // [0x9be1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberData
	// FString GetLobbyMemberData(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDUser, FString Key);                        // [0x9be000] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberByIndex
	// FUWorksSteamID GetLobbyMemberByIndex(FUWorksSteamID SteamIDLobby, int32_t Member);                                       // [0x9bdf30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyGameServer
	// bool GetLobbyGameServer(FUWorksSteamID SteamIDLobby, FString& GameServerIP, int32_t& GameServerPort, FUWorksSteamID& SteamIDGameServer); // [0x9bdd80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyDataCount
	// int32_t GetLobbyDataCount(FUWorksSteamID SteamIDLobby);                                                                  // [0x9bdce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyDataByIndex
	// bool GetLobbyDataByIndex(FUWorksSteamID SteamIDLobby, int32_t LobbyData, FString& Key, int32_t KeyMaxLength, FString& Value, int32_t ValueMaxLength); // [0x9bdad0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyData
	// FString GetLobbyData(FUWorksSteamID SteamIDLobby, FString Key);                                                          // [0x9bd960] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyChatEntry
	// int32_t GetLobbyChatEntry(FUWorksSteamID SteamIDLobby, int32_t MessageID, FUWorksSteamID& SteamIDUser, FString& Message, int32_t MessageMaxLength, EUWorksChatEntryType& ChatEntryType); // [0x9bd750] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyByIndex
	// FUWorksSteamID GetLobbyByIndex(int32_t Lobby);                                                                           // [0x9bd6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.GetFavoriteGameCount
	// int32_t GetFavoriteGameCount();                                                                                          // [0x9bd690] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.GetFavoriteGame
	// bool GetFavoriteGame(int32_t Game, int32_t& AppID, FString& IP, int32_t& ConnectionPort, int32_t& QueryPort, TArray<EUWorksFavoriteFlags>& Flags, int32_t& TimeLastPlayedOnServer); // [0x9bd400] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.DeleteLobbyData
	// bool DeleteLobbyData(FUWorksSteamID SteamIDLobby, FString Key);                                                          // [0x9bd2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.CreateLobbyMinimal
	// void CreateLobbyMinimal(FDelegateProperty& Completed, EUWorksLobbyType LobbyType, int32_t MaxMembers);                   // [0x9bd1a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.CreateLobby
	// class UUWorksRequestCoreCreateLobby* CreateLobby();                                                                      // [0x9bd170] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListStringFilter
	// void AddRequestLobbyListStringFilter(FString KeyToMatch, FString ValueToMatch, EUWorksLobbyComparison ComparisonType);   // [0x9bcfc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListResultCountFilter
	// void AddRequestLobbyListResultCountFilter(int32_t MaxResults);                                                           // [0x9bcf30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListNumericalFilter
	// void AddRequestLobbyListNumericalFilter(FString KeyToMatch, int32_t ValueToMatch, EUWorksLobbyComparison ComparisonType); // [0x9bcdd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListNearValueFilter
	// void AddRequestLobbyListNearValueFilter(FString KeyToMatch, int32_t ValueToBeCloseTo);                                   // [0x9bcca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListFilterSlotsAvailable
	// void AddRequestLobbyListFilterSlotsAvailable(int32_t SlotsAvailable);                                                    // [0x9bcc10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListDistanceFilter
	// void AddRequestLobbyListDistanceFilter(EUWorksLobbyDistanceFilter LobbyDistanceFilter);                                  // [0x9bcb90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListCompatibleMembersFilter
	// void AddRequestLobbyListCompatibleMembersFilter(FUWorksSteamID SteamIDLobby);                                            // [0x9bcb00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmaking.AddFavoriteGame
	// int32_t AddFavoriteGame(int32_t AppID, FString IP, int32_t ConnectionPort, int32_t QueryPort, TArray<EUWorksFavoriteFlags> Flags, int32_t TimeLastPlayedOnServer); // [0x9bc880] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreMatchmakingServers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceCoreMatchmakingServers : public UUWorksInterfaceCore
{ 
public:


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmakingServers.ServerListMinimal
	// void ServerListMinimal(FDelegateProperty& Completed, FDelegateProperty& updated, int32_t AppID, EUWorksServerQueryType QueryType); // [0x9bfd70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmakingServers.ServerList
	// class UUWorksRequestCoreServerList* ServerList();                                                                        // [0x9bfd40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmakingServers.RulesMinimal
	// void RulesMinimal(FDelegateProperty& Completed, FDelegateProperty& updated, FString IP, int32_t Port);                   // [0x9bfb50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmakingServers.Rules
	// class UUWorksRequestCoreRules* Rules();                                                                                  // [0x9bfb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmakingServers.PlayersMinimal
	// void PlayersMinimal(FDelegateProperty& Completed, FDelegateProperty& updated, FString IP, int32_t Port);                 // [0x9bf930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmakingServers.Players
	// class UUWorksRequestCorePlayers* Players();                                                                              // [0x9bf900] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmakingServers.PingMinimal
	// void PingMinimal(FDelegateProperty& Completed, FString IP, int32_t Port);                                                // [0x9bf770] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmakingServers.Ping
	// class UUWorksRequestCorePing* Ping();                                                                                    // [0x9bf740] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMatchmakingServers.GetMatchmakingServers
	// class UUWorksInterfaceCoreMatchmakingServers* GetMatchmakingServers();                                                   // [0x9bf710] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreMusic
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UUWorksInterfaceCoreMusic : public UUWorksInterfaceCore
{ 
public:
	SDK_UNDEFINED(16,342) /* FMulticastInlineDelegate */ __um(PlaybackStatusHasChanged);                           // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,343) /* FMulticastInlineDelegate */ __um(VolumeHasChanged);                                   // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreMusic.SetVolume
	// void SetVolume(float Volume);                                                                                            // [0x9c0390] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMusic.PlayPrevious
	// void PlayPrevious();                                                                                                     // [0x9c0370] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMusic.PlayNext
	// void PlayNext();                                                                                                         // [0x9c0350] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMusic.Play
	// void Play();                                                                                                             // [0x9c0330] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMusic.Pause
	// void Pause();                                                                                                            // [0x9c0310] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMusic.GetVolume
	// float GetVolume();                                                                                                       // [0x9c02e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMusic.GetPlaybackStatus
	// EUWorksAudioPlaybackStatus GetPlaybackStatus();                                                                          // [0x9c02b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMusic.GetMusic
	// class UUWorksInterfaceCoreMusic* GetMusic();                                                                             // [0x9c0280] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMusic.BIsPlaying
	// bool BIsPlaying();                                                                                                       // [0x9c0250] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreMusic.BIsEnabled
	// bool BIsEnabled();                                                                                                       // [0x9c0220] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreNetworking
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UUWorksInterfaceCoreNetworking : public UUWorksInterfaceCore
{ 
public:
	SDK_UNDEFINED(16,344) /* FMulticastInlineDelegate */ __um(P2PSessionRequest);                                  // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,345) /* FMulticastInlineDelegate */ __um(P2PSessionConnectFail);                              // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreNetworking.SendP2PPacket
	// bool SendP2PPacket(FUWorksSteamID SteamIDRemote, TArray<char> data, EUWorksP2PSend P2PSendType, int32_t Channel);        // [0x9c10f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreNetworking.SendP2PMessage
	// bool SendP2PMessage(FUWorksSteamID SteamIDRemote, FString data, EUWorksP2PSend P2PSendType, int32_t Channel);            // [0x9c0f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreNetworking.ReadP2PPacket
	// bool ReadP2PPacket(TArray<char>& data, int32_t DataMax, FUWorksSteamID& SteamIDRemote, int32_t Channel);                 // [0x9c0db0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreNetworking.ReadP2PMessage
	// bool ReadP2PMessage(FString& data, int32_t DataMax, FUWorksSteamID& SteamIDRemote, int32_t Channel);                     // [0x9c0c10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreNetworking.IsP2PPacketAvailable
	// bool IsP2PPacketAvailable(int32_t& DataSize, int32_t Channel);                                                           // [0x9c0b30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreNetworking.GetP2PSessionState
	// bool GetP2PSessionState(FUWorksSteamID SteamIDRemote, FUWorksP2PSessionState& ConnectionState);                          // [0x9c0a40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreNetworking.GetNetworking
	// class UUWorksInterfaceCoreNetworking* GetNetworking();                                                                   // [0x9c0a10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksInterfaceCoreNetworking.CloseP2PSessionWithUser
	// bool CloseP2PSessionWithUser(FUWorksSteamID SteamIDRemote);                                                              // [0x9c0970] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreNetworking.CloseP2PChannelWithUser
	// bool CloseP2PChannelWithUser(FUWorksSteamID SteamIDRemote, int32_t Channel);                                             // [0x9c08a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreNetworking.AllowP2PPacketRelay
	// bool AllowP2PPacketRelay(bool bAllow);                                                                                   // [0x9c0800] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreNetworking.AcceptP2PSessionWithUser
	// bool AcceptP2PSessionWithUser(FUWorksSteamID SteamIDRemote);                                                             // [0x9c0760] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksInterfaceCoreRemoteStorage : public UUWorksInterfaceCore
{ 
public:


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.SetSyncPlatforms
	// bool SetSyncPlatforms(FString File, EUWorksRemoteStoragePlatform RemoteStoragePlatform);                                 // [0x9c2d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.SetCloudEnabledForApp
	// void SetCloudEnabledForApp(bool bEnabled);                                                                               // [0x9c2cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.IsCloudEnabledForApp
	// bool IsCloudEnabledForApp();                                                                                             // [0x9c2c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.IsCloudEnabledForAccount
	// bool IsCloudEnabledForAccount();                                                                                         // [0x9c2c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.GetSyncPlatforms
	// EUWorksRemoteStoragePlatform GetSyncPlatforms(FString File);                                                             // [0x9c2b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.GetRemoteStorage
	// class UUWorksInterfaceCoreRemoteStorage* GetRemoteStorage();                                                             // [0x9c2b30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.GetQuota
	// bool GetQuota(FString& TotalBytes, FString& AvailableBytes);                                                             // [0x9c2a10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileTimestamp
	// int32_t GetFileTimestamp(FString File);                                                                                  // [0x9c2910] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileSize
	// int32_t GetFileSize(FString File);                                                                                       // [0x9c2810] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileNameAndSize
	// FString GetFileNameAndSize(int32_t File, int32_t& FileSizeInBytes);                                                      // [0x9c26f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileCount
	// int32_t GetFileCount();                                                                                                  // [0x9c26c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamWriteChunk
	// bool FileWriteStreamWriteChunk(FUWorksUGCFileWriteStreamHandle Handle, TArray<char> Buffer);                             // [0x9c2590] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamOpen
	// FUWorksUGCFileWriteStreamHandle FileWriteStreamOpen(FString File);                                                       // [0x9c24a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamClose
	// bool FileWriteStreamClose(FUWorksUGCFileWriteStreamHandle Handle);                                                       // [0x9c2410] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamCancel
	// bool FileWriteStreamCancel(FUWorksUGCFileWriteStreamHandle Handle);                                                      // [0x9c2380] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteAsyncMinimal
	// void FileWriteAsyncMinimal(FDelegateProperty& Completed, FString File, TArray<char> Buffer);                             // [0x9c21a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteAsync
	// class UUWorksRequestCoreFileWriteAsync* FileWriteAsync();                                                                // [0x9c2170] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWrite
	// bool FileWrite(FString File, TArray<char> Buffer);                                                                       // [0x9c1ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.FileReadAsyncMinimal
	// void FileReadAsyncMinimal(FDelegateProperty& Completed, FString File, int32_t Offset, int32_t BytesToRead);              // [0x9c1e30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.FileReadAsync
	// class UUWorksRequestCoreFileReadAsync* FileReadAsync();                                                                  // [0x9c1e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.FileRead
	// int32_t FileRead(FString File, TArray<char>& Buffer, int32_t BufferSize);                                                // [0x9c1c70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.FilePersisted
	// bool FilePersisted(FString File);                                                                                        // [0x9c1b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.FileForget
	// bool FileForget(FString File);                                                                                           // [0x9c1a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.FileExists
	// bool FileExists(FString File);                                                                                           // [0x9c1970] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreRemoteStorage.FileDelete
	// bool FileDelete(FString File);                                                                                           // [0x9c1870] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreScreenshots
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UUWorksInterfaceCoreScreenshots : public UUWorksInterfaceCore
{ 
public:
	SDK_UNDEFINED(16,346) /* FMulticastInlineDelegate */ __um(ScreenshotReady);                                    // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,347) /* FMulticastInlineDelegate */ __um(ScreenshotRequested);                                // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreScreenshots.WriteScreenshot
	// FUWorksScreenshotHandle WriteScreenshot(class UTexture2D* Image);                                                        // [0x9c3940] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreScreenshots.TriggerScreenshot
	// void TriggerScreenshot();                                                                                                // [0x9c3920] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreScreenshots.TagUser
	// bool TagUser(FUWorksScreenshotHandle Screenshot, FUWorksSteamID SteamID);                                                // [0x9c3850] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreScreenshots.TagPublishedFile
	// bool TagPublishedFile(FUWorksScreenshotHandle Screenshot, FUWorksPublishedFileID PublishedFileID);                       // [0x9c3780] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreScreenshots.SetLocation
	// bool SetLocation(FUWorksScreenshotHandle Screenshot, FString Location);                                                  // [0x9c3650] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreScreenshots.IsScreenshotsHooked
	// bool IsScreenshotsHooked();                                                                                              // [0x9c3620] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreScreenshots.HookScreenshots
	// void HookScreenshots(bool bHook);                                                                                        // [0x9c3590] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreScreenshots.GetScreenshots
	// class UUWorksInterfaceCoreScreenshots* GetScreenshots();                                                                 // [0x9c3560] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksInterfaceCoreScreenshots.AddVRScreenshotToLibrary
	// FUWorksScreenshotHandle AddVRScreenshotToLibrary(EUWorksVRScreenshotType Type, FString Filename, FString VRFileName);    // [0x9c33a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreScreenshots.AddScreenshotToLibrary
	// FUWorksScreenshotHandle AddScreenshotToLibrary(FString FileMame, FString ThumbnailFileName, int32_t Width, int32_t Height); // [0x9c31a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreUGC
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UUWorksInterfaceCoreUGC : public UUWorksInterfaceCore
{ 
public:
	SDK_UNDEFINED(16,348) /* FMulticastInlineDelegate */ __um(ItemInstalled);                                      // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,349) /* FMulticastInlineDelegate */ __um(DownloadItemResult);                                 // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0048   (0x0018)  MISSED


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.UpdateItemPreviewVideo
	// bool UpdateItemPreviewVideo(FUWorksUGCUpdateHandle Handle, int32_t Index, FString PreviewVideo);                         // [0x9c9aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.UpdateItemPreviewFile
	// bool UpdateItemPreviewFile(FUWorksUGCUpdateHandle Handle, int32_t Index, FString PreviewFile);                           // [0x9c9920] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.UnsubscribeItemMinimal
	// void UnsubscribeItemMinimal(FDelegateProperty& Completed, FUWorksPublishedFileID PublishedFileID);                       // [0x9c9820] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.UnsubscribeItem
	// class UUWorksRequestCoreUnsubscribeItem* UnsubscribeItem();                                                              // [0x9c97f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SuspendDownloads
	// void SuspendDownloads(bool bSuspend);                                                                                    // [0x9c9760] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SubscribeItemMinimal
	// void SubscribeItemMinimal(FDelegateProperty& Completed, FUWorksPublishedFileID PublishedFileID);                         // [0x9c9660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SubscribeItem
	// class UUWorksRequestCoreSubscribeItem* SubscribeItem();                                                                  // [0x9c9630] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SubmitItemUpdateMinimal
	// void SubmitItemUpdateMinimal(FDelegateProperty& Completed, FUWorksUGCUpdateHandle UGCUpdateHandle, FString ChangeNote);  // [0x9c94a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SubmitItemUpdate
	// class UUWorksRequestCoreSubmitItemUpdate* SubmitItemUpdate();                                                            // [0x9c9470] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingMinimal
	// void StopPlaytimeTrackingMinimal(FDelegateProperty& Completed, TArray<FUWorksPublishedFileID> PublishedFileIDs);         // [0x9c9310] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingForAllItemsMinimal
	// void StopPlaytimeTrackingForAllItemsMinimal(FDelegateProperty& Completed);                                               // [0x9c9260] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingForAllItems
	// class UUWorksRequestCoreStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItems();                              // [0x9c9230] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTracking
	// class UUWorksRequestCoreStopPlaytimeTracking* StopPlaytimeTracking();                                                    // [0x9c9200] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.StartPlaytimeTrackingMinimal
	// void StartPlaytimeTrackingMinimal(FDelegateProperty& Completed, TArray<FUWorksPublishedFileID> PublishedFileID);         // [0x9c90a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.StartPlaytimeTracking
	// class UUWorksRequestCoreStartPlaytimeTracking* StartPlaytimeTracking();                                                  // [0x9c9070] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.StartItemUpdate
	// FUWorksUGCUpdateHandle StartItemUpdate(int32_t ConsumerAppID, FUWorksPublishedFileID PublishedFileID);                   // [0x9c8fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetUserItemVoteMinimal
	// void SetUserItemVoteMinimal(FDelegateProperty& Completed, FUWorksPublishedFileID PublishedFileID, bool bVoteUp);         // [0x9c8e70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetUserItemVote
	// class UUWorksRequestCoreSetUserItemVote* SetUserItemVote();                                                              // [0x9c8e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetSearchText
	// bool SetSearchText(FUWorksUGCQueryHandle Handle, FString SearchText);                                                    // [0x9c8d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetReturnTotalOnly
	// bool SetReturnTotalOnly(FUWorksUGCQueryHandle Handle, bool bReturnTotalOnly);                                            // [0x9c8c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetReturnOnlyIDs
	// bool SetReturnOnlyIDs(FUWorksUGCQueryHandle Handle, bool bReturnOnlyIDs);                                                // [0x9c8b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetReturnMetadata
	// bool SetReturnMetadata(FUWorksUGCQueryHandle Handle, bool bReturnMetadata);                                              // [0x9c8a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetReturnLongDescription
	// bool SetReturnLongDescription(FUWorksUGCQueryHandle Handle, bool bReturnLongDescription);                                // [0x9c89c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetReturnKeyValueTags
	// bool SetReturnKeyValueTags(FUWorksUGCQueryHandle Handle, bool bReturnKeyValueTags);                                      // [0x9c88f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetReturnChildren
	// bool SetReturnChildren(FUWorksUGCQueryHandle Handle, bool bReturnChildren);                                              // [0x9c8820] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetReturnAdditionalPreviews
	// bool SetReturnAdditionalPreviews(FUWorksUGCQueryHandle Handle, bool bReturnAdditionalPreviews);                          // [0x9c8750] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetRankedByTrendDays
	// bool SetRankedByTrendDays(FUWorksUGCQueryHandle Handle, int32_t Days);                                                   // [0x9c8680] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetMatchAnyTag
	// bool SetMatchAnyTag(FUWorksUGCQueryHandle Handle, bool bMatchAnyTag);                                                    // [0x9c85b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetLanguage
	// bool SetLanguage(FUWorksUGCQueryHandle Handle, FString Language);                                                        // [0x9c8470] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetItemVisibility
	// bool SetItemVisibility(FUWorksUGCUpdateHandle Handle, EUWorksRemoteStoragePublishedFileVisibility Visibility);           // [0x9c8390] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetItemUpdateLanguage
	// bool SetItemUpdateLanguage(FUWorksUGCUpdateHandle Handle, FString Language);                                             // [0x9c8250] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetItemTitle
	// bool SetItemTitle(FUWorksUGCUpdateHandle Handle, FString Title);                                                         // [0x9c8110] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetItemTags
	// bool SetItemTags(FUWorksUGCUpdateHandle Handle, TArray<FString> Tags);                                                   // [0x9c7f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetItemPreview
	// bool SetItemPreview(FUWorksUGCUpdateHandle Handle, FString PreviewFile);                                                 // [0x9c7e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetItemMetadata
	// bool SetItemMetadata(FUWorksUGCUpdateHandle Handle, FString MetaData);                                                   // [0x9c7cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetItemDescription
	// bool SetItemDescription(FUWorksUGCUpdateHandle Handle, FString Description);                                             // [0x9c7b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetItemContent
	// bool SetItemContent(FUWorksUGCUpdateHandle Handle, FString ContentFolder);                                               // [0x9c7a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetCloudFileNameFilter
	// bool SetCloudFileNameFilter(FUWorksUGCQueryHandle Handle, FString MatchCloudFileName);                                   // [0x9c7900] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SetAllowCachedResponse
	// bool SetAllowCachedResponse(FUWorksUGCQueryHandle Handle, int32_t MaxAgeSeconds);                                        // [0x9c7830] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SendQueryUGCRequestMinimal
	// void SendQueryUGCRequestMinimal(FDelegateProperty& Completed, FUWorksUGCQueryHandle UGCQueryHandle);                     // [0x9c7730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.SendQueryUGCRequest
	// class UUWorksRequestCoreSendQueryUGCRequest* SendQueryUGCRequest();                                                      // [0x9c7700] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.RemoveItemPreview
	// bool RemoveItemPreview(FUWorksUGCUpdateHandle Handle, int32_t Index);                                                    // [0x9c7630] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.RemoveItemKeyValueTags
	// bool RemoveItemKeyValueTags(FUWorksUGCUpdateHandle Handle, FString Key);                                                 // [0x9c74f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.RemoveItemFromFavoritesMinimal
	// void RemoveItemFromFavoritesMinimal(FDelegateProperty& Completed, int32_t AppID, FUWorksPublishedFileID PublishedFileID); // [0x9c73c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.RemoveItemFromFavorites
	// class UUWorksRequestCoreRemoveItemFromFavorites* RemoveItemFromFavorites();                                              // [0x9c7390] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.ReleaseQueryUGCRequest
	// bool ReleaseQueryUGCRequest(FUWorksUGCQueryHandle Handle);                                                               // [0x9c7300] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetUserItemVoteMinimal
	// void GetUserItemVoteMinimal(FDelegateProperty& Completed, FUWorksPublishedFileID PublishedFileID);                       // [0x9c7200] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetUserItemVote
	// class UUWorksRequestCoreGetUserItemVote* GetUserItemVote();                                                              // [0x9c71d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetUGC
	// class UUWorksInterfaceCoreUGC* GetUGC();                                                                                 // [0x9c71a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetSubscribedItems
	// int32_t GetSubscribedItems(TArray<FUWorksPublishedFileID>& PublishedFileIDs, int32_t MaxEntries);                        // [0x9c70a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCStatistic
	// bool GetQueryUGCStatistic(FUWorksUGCQueryHandle Handle, int32_t Index, EUWorksItemStatistic StatType, FString& StatValue); // [0x9c6f20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCResult
	// bool GetQueryUGCResult(FUWorksUGCQueryHandle Handle, int32_t Index, FUWorksSteamUGCDetails& Details);                    // [0x9c6d60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCPreviewURL
	// bool GetQueryUGCPreviewURL(FUWorksUGCQueryHandle Handle, int32_t Index, FString& URL, int32_t URLMaxLength);             // [0x9c6bd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCNumKeyValueTags
	// int32_t GetQueryUGCNumKeyValueTags(FUWorksUGCQueryHandle Handle, int32_t Index);                                         // [0x9c6b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCNumAdditionalPreviews
	// int32_t GetQueryUGCNumAdditionalPreviews(FUWorksUGCQueryHandle Handle, int32_t Index);                                   // [0x9c6a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCMetadata
	// bool GetQueryUGCMetadata(FUWorksUGCQueryHandle Handle, int32_t Index, FString& MetaData, int32_t MetadataMaxLength);     // [0x9c68a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCKeyValueTag
	// bool GetQueryUGCKeyValueTag(FUWorksUGCQueryHandle Handle, int32_t Index, int32_t KeyValueTagIndex, FString& Key, int32_t KeyMaxLength, FString& Value, int32_t ValueMaxLength); // [0x9c6640] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCChildren
	// bool GetQueryUGCChildren(FUWorksUGCQueryHandle Handle, int32_t Index, TArray<FUWorksPublishedFileID>& PublishedFileIDs, int32_t MaxEntries); // [0x9c64b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCAdditionalPreview
	// bool GetQueryUGCAdditionalPreview(FUWorksUGCQueryHandle Handle, int32_t Index, int32_t PreviewIndex, FString& URLOrVideoID, int32_t URLOrVideoIDMaxLength, FString& OriginalFileName, int32_t OriginalFileNameMaxLength, EUWorksItemPreviewType& PreviewType); // [0x9c6200] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetNumSubscribedItems
	// int32_t GetNumSubscribedItems();                                                                                         // [0x9c61d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetItemUpdateProgress
	// EUWorksItemUpdateStatus GetItemUpdateProgress(FUWorksUGCUpdateHandle Handle, FString& BytesProcessed, FString& BytesTotal); // [0x9c6070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetItemState
	// int32_t GetItemState(FUWorksPublishedFileID PublishedFileID);                                                            // [0x9c5fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetItemInstallInfo
	// bool GetItemInstallInfo(FUWorksPublishedFileID PublishedFileID, FString& SizeOnDisk, FString& Path, int32_t PathMaxLength, int32_t& Timestamp); // [0x9c5df0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.GetItemDownloadInfo
	// bool GetItemDownloadInfo(FUWorksPublishedFileID PublishedFileID, FString& BytesDownloaded, FString& BytesTotal);         // [0x9c5c90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.DownloadItem
	// bool DownloadItem(FUWorksPublishedFileID PublishedFileID, bool bHighPriority);                                           // [0x9c5bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.CreateQueryUserUGCRequest
	// FUWorksUGCQueryHandle CreateQueryUserUGCRequest(FUWorksSteamID SteamID, EUWorksUserUGCList ListType, EUWorksUGCMatchingUGCType MatchingUGCType, EUWorksUserUGCListSortOrder SortOrder, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page); // [0x9c59a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.CreateQueryUGCDetailsRequest
	// FUWorksUGCQueryHandle CreateQueryUGCDetailsRequest(TArray<FUWorksPublishedFileID> PublishedFileIDs, int32_t NumPublishedFileIDs); // [0x9c5860] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.CreateQueryAllUGCRequest
	// FUWorksUGCQueryHandle CreateQueryAllUGCRequest(EUWorksUGCQuery QueryType, EUWorksUGCMatchingUGCType MatchingUGCTypeFileType, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page); // [0x9c56a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.CreateItemMinimal
	// void CreateItemMinimal(FDelegateProperty& Completed, int32_t ConsumerAppID, EUWorksWorkshopFileType FileType);           // [0x9c5570] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.CreateItem
	// class UUWorksRequestCoreCreateItem* CreateItem();                                                                        // [0x9c5540] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.BInitWorkshopForGameServer
	// bool BInitWorkshopForGameServer(int32_t WorkshopDepotID, FString Folder);                                                // [0x9c5410] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.AddRequiredTag
	// bool AddRequiredTag(FUWorksUGCQueryHandle Handle, FString TagName);                                                      // [0x9c52d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.AddRequiredKeyValueTag
	// bool AddRequiredKeyValueTag(FUWorksUGCQueryHandle Handle, FString Key, FString Value);                                   // [0x9c5110] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.AddItemToFavoritesMinimal
	// void AddItemToFavoritesMinimal(FDelegateProperty& Completed, int32_t AppID, FUWorksPublishedFileID PublishedFileID);     // [0x9c4fe0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.AddItemToFavorites
	// class UUWorksRequestCoreAddItemToFavorites* AddItemToFavorites();                                                        // [0x9c4fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.AddItemPreviewVideo
	// bool AddItemPreviewVideo(FUWorksUGCUpdateHandle Handle, FString VideoID);                                                // [0x9c4e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.AddItemPreviewFile
	// bool AddItemPreviewFile(FUWorksUGCUpdateHandle Handle, FString PreviewFile, EUWorksItemPreviewType Type);                // [0x9c4cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.AddItemKeyValueTag
	// bool AddItemKeyValueTag(FUWorksUGCUpdateHandle Handle, FString Key, FString Value);                                      // [0x9c4b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUGC.AddExcludedTag
	// bool AddExcludedTag(FUWorksUGCQueryHandle Handle, FString TagName);                                                      // [0x9c49f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreUser
/// Size: 0x0108 (264 bytes) (0x000028 - 0x000108) align 8 MaxSize: 0x0108
class UUWorksInterfaceCoreUser : public UUWorksInterfaceCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	SDK_UNDEFINED(16,350) /* FMulticastInlineDelegate */ __um(SteamServersConnected);                              // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0048   (0x0018)  MISSED
	SDK_UNDEFINED(16,351) /* FMulticastInlineDelegate */ __um(SteamServerConnectFailure);                          // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,352) /* FMulticastInlineDelegate */ __um(SteamServersDisconnected);                           // 0x0070   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0080   (0x0018)  MISSED
	SDK_UNDEFINED(16,353) /* FMulticastInlineDelegate */ __um(ClientGameServerDeny);                               // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,354) /* FMulticastInlineDelegate */ __um(IPCFailure);                                         // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,355) /* FMulticastInlineDelegate */ __um(LicensesUpdated);                                    // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,356) /* FMulticastInlineDelegate */ __um(ValidateAuthTicketResponse);                         // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,357) /* FMulticastInlineDelegate */ __um(MicroTxnAuthorizationResponse);                      // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,358) /* FMulticastInlineDelegate */ __um(GetAuthSessionTicketResponse);                       // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,359) /* FMulticastInlineDelegate */ __um(GameWebCallback);                                    // 0x00F8   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.UserHasLicenseForApp
	// EUWorksUserHasLicenseForAppResult UserHasLicenseForApp(FUWorksSteamID SteamID, int32_t AppID);                           // [0x9cb1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.StopVoiceRecording
	// void StopVoiceRecording();                                                                                               // [0x9cb1c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.StartVoiceRecording
	// void StartVoiceRecording();                                                                                              // [0x9cb1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.RequestStoreAuthURLMinimal
	// void RequestStoreAuthURLMinimal(FDelegateProperty& Completed, FString URL);                                              // [0x9cb040] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.RequestStoreAuthURL
	// class UUWorksRequestCoreRequestStoreAuthURL* RequestStoreAuthURL();                                                      // [0x9cb010] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.RequestEncryptedAppTicketMinimal
	// void RequestEncryptedAppTicketMinimal(FDelegateProperty& Completed, TArray<char> Buffer);                                // [0x9caeb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.RequestEncryptedAppTicket
	// class UUWorksRequestCoreRequestEncryptedAppTicket* RequestEncryptedAppTicket();                                          // [0x9cae80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.GetVoiceChannel
	// class UAudioComponent* GetVoiceChannel(int32_t Index);                                                                   // [0x9cade0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.GetVoice
	// EUWorksVoiceResult GetVoice(TArray<char>& data);                                                                         // [0x9cad20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.GetUser
	// class UUWorksInterfaceCoreUser* GetUser();                                                                               // [0x9cacf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.GetSteamID
	// FUWorksSteamID GetSteamID();                                                                                             // [0x9cacb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.GetPlayerSteamLevel
	// int32_t GetPlayerSteamLevel();                                                                                           // [0x9cac80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.GetHSteamUser
	// FUWorksSteamUser GetHSteamUser();                                                                                        // [0x9cac40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.GetGameBadgeLevel
	// int32_t GetGameBadgeLevel(int32_t Series, bool bFoil);                                                                   // [0x9cab70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.GetEncryptedAppTicket
	// bool GetEncryptedAppTicket(TArray<char>& Ticket);                                                                        // [0x9caab0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.GetAuthSessionTicket
	// FUWorksTicketHandle GetAuthSessionTicket(TArray<char>& Ticket);                                                          // [0x9ca9f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.EndAuthSession
	// void EndAuthSession(FUWorksSteamID SteamID);                                                                             // [0x9ca960] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.DecompressVoice
	// EUWorksVoiceResult DecompressVoice(TArray<char> CompressedBuffer, TArray<char>& UncompressedBuffer);                     // [0x9ca800] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.CancelAuthTicket
	// void CancelAuthTicket(FUWorksTicketHandle TicketHandle);                                                                 // [0x9ca780] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.BLoggedOn
	// bool BLoggedOn();                                                                                                        // [0x9ca620] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.BIsTwoFactorEnabled
	// bool BIsTwoFactorEnabled();                                                                                              // [0x9ca5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.BIsPhoneVerified
	// bool BIsPhoneVerified();                                                                                                 // [0x9ca5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.BIsPhoneRequiringVerification
	// bool BIsPhoneRequiringVerification();                                                                                    // [0x9ca590] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.BIsPhoneIdentifying
	// bool BIsPhoneIdentifying();                                                                                              // [0x9ca560] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.BIsBehindNAT
	// bool BIsBehindNAT();                                                                                                     // [0x9ca530] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.BeginAuthSession
	// EUWorksBeginAuthSessionResult BeginAuthSession(TArray<char> Ticket, FUWorksSteamID SteamID);                             // [0x9ca650] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.AdvertiseGame
	// void AdvertiseGame(FUWorksSteamID SteamIDGameServer, FString ServerIP, int32_t ServerPort);                              // [0x9ca3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUser.AddBufferToVoiceChannel
	// class UAudioComponent* AddBufferToVoiceChannel(TArray<char> Buffer, int32_t Index);                                      // [0x9ca2a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreUserStats
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UUWorksInterfaceCoreUserStats : public UUWorksInterfaceCore
{ 
public:
	SDK_UNDEFINED(16,360) /* FMulticastInlineDelegate */ __um(UserStatsReceived);                                  // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,361) /* FMulticastInlineDelegate */ __um(UserStatsStored);                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,362) /* FMulticastInlineDelegate */ __um(UserAchievementStored);                              // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,363) /* FMulticastInlineDelegate */ __um(UserStatsUnloaded);                                  // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,364) /* FMulticastInlineDelegate */ __um(UserAchievementIconFetched);                         // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.UploadLeaderboardScoreMinimal
	// void UploadLeaderboardScoreMinimal(FDelegateProperty& Completed, FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32_t Score, TArray<int32_t> ScoreDetails); // [0x9cf320] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.UploadLeaderboardScore
	// class UUWorksRequestCoreUploadLeaderboardScore* UploadLeaderboardScore();                                                // [0x9cf2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.UpdateAvgRateStat
	// bool UpdateAvgRateStat(FString Name, float CountThisSession, float SessionLength);                                       // [0x9cf170] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.StoreStats
	// bool StoreStats();                                                                                                       // [0x9cf140] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.SetStatAsInteger
	// bool SetStatAsInteger(FString Name, int32_t data);                                                                       // [0x9cf010] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.SetStatAsFloat
	// bool SetStatAsFloat(FString Name, float data);                                                                           // [0x9ceee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.SetAchievement
	// bool SetAchievement(FString Name);                                                                                       // [0x9cede0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.ResetAllStats
	// bool ResetAllStats(bool bAchievementsToo);                                                                               // [0x9ced40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.RequestUserStatsMinimal
	// void RequestUserStatsMinimal(FDelegateProperty& Completed, FUWorksSteamID SteamID);                                      // [0x9cec40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.RequestUserStats
	// class UUWorksRequestCoreRequestUserStats* RequestUserStats();                                                            // [0x9cec10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalStatsMinimal
	// void RequestGlobalStatsMinimal(FDelegateProperty& Completed, int32_t HistoryDays);                                       // [0x9ceb10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalStats
	// class UUWorksRequestCoreRequestGlobalStats* RequestGlobalStats();                                                        // [0x9ceae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalAchievementPercentagesMinimal
	// void RequestGlobalAchievementPercentagesMinimal(FDelegateProperty& Completed);                                           // [0x9cea30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalAchievementPercentages
	// class UUWorksRequestCoreRequestGlobalAchievementPercentages* RequestGlobalAchievementPercentages();                      // [0x9cea00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.RequestCurrentStats
	// bool RequestCurrentStats();                                                                                              // [0x9ce9d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.IndicateAchievementProgress
	// bool IndicateAchievementProgress(FString Name, int32_t CurrentProgress, int32_t MaxProgress);                            // [0x9ce860] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetUserStats
	// class UUWorksInterfaceCoreUserStats* GetUserStats();                                                                     // [0x9ce830] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetUserStatInteger
	// bool GetUserStatInteger(FUWorksSteamID SteamIDUser, FString Name, int32_t& data);                                        // [0x9ce6a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetUserStatFloat
	// bool GetUserStatFloat(FUWorksSteamID SteamIDUser, FString Name, float& data);                                            // [0x9ce510] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetUserAchievementAndUnlockTime
	// bool GetUserAchievementAndUnlockTime(FUWorksSteamID SteamIDUser, FString Name, bool& bAchieved, int32_t& UnlockTime);    // [0x9ce340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetUserAchievement
	// bool GetUserAchievement(FUWorksSteamID SteamIDUser, FString Name, bool& bAchieved);                                      // [0x9ce1b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetStatAsInteger
	// bool GetStatAsInteger(FString Name, int32_t& data);                                                                      // [0x9ce060] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetStatAsFloat
	// bool GetStatAsFloat(FString Name, float& data);                                                                          // [0x9cdf10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetNumberOfCurrentPlayersMinimal
	// void GetNumberOfCurrentPlayersMinimal(FDelegateProperty& Completed);                                                     // [0x9cde60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetNumberOfCurrentPlayers
	// class UUWorksRequestCoreGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayers();                                          // [0x9cde30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetNumAchievements
	// int32_t GetNumAchievements();                                                                                            // [0x9cde00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetNextMostAchievedAchievementInfo
	// int32_t GetNextMostAchievedAchievementInfo(int32_t IteratorPrevious, FString& Name, int32_t NameBufferLength, float& percent, bool& bAchieved); // [0x9cdc00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetMostAchievedAchievementInfo
	// int32_t GetMostAchievedAchievementInfo(FString& Name, int32_t NameBufferLength, float& percent, bool& bAchieved);        // [0x9cda50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardSortMethod
	// EUWorksLeaderboardSortMethod GetLeaderboardSortMethod(FUWorksSteamLeaderboard SteamLeaderboard);                         // [0x9cd9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardName
	// FString GetLeaderboardName(FUWorksSteamLeaderboard SteamLeaderboard);                                                    // [0x9cd8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardEntryCount
	// int32_t GetLeaderboardEntryCount(FUWorksSteamLeaderboard SteamLeaderboard);                                              // [0x9cd850] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardDisplayType
	// EUWorksLeaderboardDisplayType GetLeaderboardDisplayType(FUWorksSteamLeaderboard SteamLeaderboard);                       // [0x9cd7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatHistoryFromIntegers
	// int32_t GetGlobalStatHistoryFromIntegers(FString StatName, TArray<FString>& data, int32_t HistoryDays);                  // [0x9cd610] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatHistoryFromFloats
	// int32_t GetGlobalStatHistoryFromFloats(FString StatName, TArray<FString>& data, int32_t HistoryDays);                    // [0x9cd460] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatFromInteger
	// bool GetGlobalStatFromInteger(FString StatName, FString& data);                                                          // [0x9cd300] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatFromFloat
	// bool GetGlobalStatFromFloat(FString StatName, FString& data);                                                            // [0x9cd1a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetDownloadedLeaderboardEntry
	// bool GetDownloadedLeaderboardEntry(FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32_t Index, FUWorksLeaderboardEntry& LeaderboardEntry, TArray<int32_t>& Details, int32_t DetailsMax); // [0x9ccfa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementName
	// FString GetAchievementName(int32_t Achievement);                                                                         // [0x9ccec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementIcon
	// class UTexture2D* GetAchievementIcon(FString Name);                                                                      // [0x9ccdc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementDisplayAttribute
	// FString GetAchievementDisplayAttribute(FString Name, FString Key);                                                       // [0x9ccc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementAndUnlockTime
	// bool GetAchievementAndUnlockTime(FString Name, bool& bAchieved, int32_t& UnlockTime);                                    // [0x9cca50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementAchievedPercent
	// bool GetAchievementAchievedPercent(FString Name, float& percent);                                                        // [0x9cc900] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.GetAchievement
	// bool GetAchievement(FString Name, bool& bAchieved);                                                                      // [0x9cc7b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.FindOrCreateLeaderboardMinimal
	// void FindOrCreateLeaderboardMinimal(FDelegateProperty& Completed, FString LeaderboardName, EUWorksLeaderboardSortMethod LeaderboardSortMethod, EUWorksLeaderboardDisplayType LeaderboardDisplayType); // [0x9cc5f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.FindOrCreateLeaderboard
	// class UUWorksRequestCoreFindOrCreateLeaderboard* FindOrCreateLeaderboard();                                              // [0x9cc5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.FindLeaderboardMinimal
	// void FindLeaderboardMinimal(FDelegateProperty& Completed, FString LeaderboardName);                                      // [0x9cc460] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.FindLeaderboard
	// class UUWorksRequestCoreFindLeaderboard* FindLeaderboard();                                                              // [0x9cc430] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesMinimal
	// void DownloadLeaderboardEntriesMinimal(FDelegateProperty& Completed, FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32_t RangeStart, int32_t RangeEnd); // [0x9cc270] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesForUsersMinimal
	// void DownloadLeaderboardEntriesForUsersMinimal(FDelegateProperty& Completed, FUWorksSteamLeaderboard SteamLeaderboard, TArray<FUWorksSteamID> users); // [0x9cc0e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesForUsers
	// class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers* DownloadLeaderboardEntriesForUsers();                        // [0x9cc0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntries
	// class UUWorksRequestCoreDownloadLeaderboardEntries* DownloadLeaderboardEntries();                                        // [0x9cc080] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.ClearAchievement
	// bool ClearAchievement(FString Name);                                                                                     // [0x9cbf80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.AttachLeaderboardUGCMinimal
	// void AttachLeaderboardUGCMinimal(FDelegateProperty& Completed, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksUGCHandle UGCHandle); // [0x9cbe40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUserStats.AttachLeaderboardUGC
	// class UUWorksRequestCoreAttachLeaderboardUGC* AttachLeaderboardUGC();                                                    // [0x9cbe10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreUtils
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UUWorksInterfaceCoreUtils : public UUWorksInterfaceCore
{ 
public:
	SDK_UNDEFINED(16,365) /* FMulticastInlineDelegate */ __um(IPCountry);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,366) /* FMulticastInlineDelegate */ __um(LowBatteryPower);                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,367) /* FMulticastInlineDelegate */ __um(SteamShutdown);                                      // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,368) /* FMulticastInlineDelegate */ __um(GamepadTextInputDismissed);                          // 0x0058   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.StartVRDashboard
	// void StartVRDashboard();                                                                                                 // [0x9d0230] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.ShowGamepadTextInput
	// bool ShowGamepadTextInput(EUWorksGamepadTextInputMode InputMode, EUWorksGamepadTextInputLineMode LineInputMode, FString Description, int32_t CharMax, FString ExistingText); // [0x9cfff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.SetOverlayNotificationPosition
	// void SetOverlayNotificationPosition(EUWorksNotificationPosition NotificationPosition);                                   // [0x9cff70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.SetOverlayNotificationInset
	// void SetOverlayNotificationInset(int32_t HorizontalInset, int32_t VerticalInset);                                        // [0x9cfea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.IsSteamRunningInVR
	// bool IsSteamRunningInVR();                                                                                               // [0x9cfe70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.IsSteamInBigPictureMode
	// bool IsSteamInBigPictureMode();                                                                                          // [0x9cfe40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.IsOverlayEnabled
	// bool IsOverlayEnabled();                                                                                                 // [0x9cfe10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.GetUtils
	// class UUWorksInterfaceCoreUtils* GetUtils();                                                                             // [0x9cfde0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.GetSteamUILanguage
	// FString GetSteamUILanguage();                                                                                            // [0x9cfd60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.GetServerRealTime
	// int32_t GetServerRealTime();                                                                                             // [0x9cfd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.GetSecondsSinceComputerActive
	// int32_t GetSecondsSinceComputerActive();                                                                                 // [0x9cfd00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.GetSecondsSinceAppActive
	// int32_t GetSecondsSinceAppActive();                                                                                      // [0x9cfcd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.GetIPCountry
	// FString GetIPCountry();                                                                                                  // [0x9cfc50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.GetIPCCallCount
	// int32_t GetIPCCallCount();                                                                                               // [0x9cfc20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.GetEnteredGamepadTextLength
	// int32_t GetEnteredGamepadTextLength();                                                                                   // [0x9cfbf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.GetEnteredGamepadTextInput
	// bool GetEnteredGamepadTextInput(FString& Text, int32_t TextMaxLength);                                                   // [0x9cfaf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.GetCurrentBatteryPower
	// char GetCurrentBatteryPower();                                                                                           // [0x9cfac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.GetConnectedUniverse
	// EUWorksUniverse GetConnectedUniverse();                                                                                  // [0x9cfa90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.GetAppID
	// int32_t GetAppID();                                                                                                      // [0x9cfa60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreUtils.BOverlayNeedsPresent
	// bool BOverlayNeedsPresent();                                                                                             // [0x9cfa30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksInterfaceCoreVideo
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UUWorksInterfaceCoreVideo : public UUWorksInterfaceCore
{ 
public:
	SDK_UNDEFINED(16,369) /* FMulticastInlineDelegate */ __um(BroadcastUploadStart);                               // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,370) /* FMulticastInlineDelegate */ __um(BroadcastUploadStop);                                // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,371) /* FMulticastInlineDelegate */ __um(GetVideoURLResult);                                  // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksInterfaceCoreVideo.IsBroadcasting
	// bool IsBroadcasting(int32_t& NumViewers);                                                                                // [0x9d04e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreVideo.GetVideoURL
	// void GetVideoURL(int32_t VideoAppID);                                                                                    // [0x9d0450] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksInterfaceCoreVideo.GetVideo
	// class UUWorksInterfaceCoreVideo* GetVideo();                                                                             // [0x9d0420] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/UWorksCore.UWorksRequestCoreGetFileDetails
/// Size: 0x0090 (144 bytes) (0x000038 - 0x000090) align 8 MaxSize: 0x0090
class UUWorksRequestCoreGetFileDetails : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x0038   (0x0038)  MISSED
	SDK_UNDEFINED(16,372) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,373) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreGetFileDetails.SetInput
	// void SetInput(FString Filename);                                                                                         // [0x9d09d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreGetFileDetails.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreGetFileDetails.GetOutput
	// void GetOutput(EUWorksResult& Result, int32_t& FileSize, FString& FileSHA, TArray<int32_t>& FileFlags);                  // [0x9d07d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreGetFileDetails.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreGetFileDetails.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreSetPersonaName
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UUWorksRequestCoreSetPersonaName : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,374) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,375) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreSetPersonaName.SetInput
	// void SetInput(FString Name);                                                                                             // [0x9d09d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreSetPersonaName.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreSetPersonaName.GetOutput
	// void GetOutput(bool& bSuccess, bool& bLocalSuccess, EUWorksResult& Result);                                              // [0x9d20f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreSetPersonaName.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreSetPersonaName.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreDownloadClanActivityCounts
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UUWorksRequestCoreDownloadClanActivityCounts : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,376) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,377) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.SetInput
	// void SetInput(TArray<FUWorksSteamID> SteamIDClans);                                                                      // [0x9d2230] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.GetOutput
	// void GetOutput(bool& bSuccess);                                                                                          // [0x9d1a10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreRequestClanOfficerList
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UUWorksRequestCoreRequestClanOfficerList : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,378) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,379) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreRequestClanOfficerList.SetInput
	// void SetInput(FUWorksSteamID SteamID);                                                                                   // [0x9d23b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestClanOfficerList.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestClanOfficerList.GetOutput
	// void GetOutput(FUWorksSteamID& SteamIDClan, int32_t& Officers, bool& bSuccess);                                          // [0x9d1fb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestClanOfficerList.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestClanOfficerList.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreJoinClanChatRoom
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UUWorksRequestCoreJoinClanChatRoom : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,380) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,381) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreJoinClanChatRoom.SetInput
	// void SetInput(FUWorksSteamID SteamIDClan);                                                                               // [0x9d23b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreJoinClanChatRoom.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreJoinClanChatRoom.GetOutput
	// void GetOutput(FUWorksSteamID& SteamIDClanChat, EUWorksChatRoomEnterResponse& ChatRoomEnterResponse);                    // [0x9d1ed0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreJoinClanChatRoom.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreJoinClanChatRoom.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreGetFollowerCount
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UUWorksRequestCoreGetFollowerCount : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0038   (0x0020)  MISSED
	SDK_UNDEFINED(16,382) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,383) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreGetFollowerCount.SetInput
	// void SetInput(FUWorksSteamID SteamID);                                                                                   // [0x9d23b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreGetFollowerCount.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreGetFollowerCount.GetOutput
	// void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamID, int32_t& Count);                                          // [0x9d1c50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreGetFollowerCount.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreGetFollowerCount.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreIsFollowing
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UUWorksRequestCoreIsFollowing : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0038   (0x0020)  MISSED
	SDK_UNDEFINED(16,384) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,385) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreIsFollowing.SetInput
	// void SetInput(FUWorksSteamID SteamID);                                                                                   // [0x9d23b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreIsFollowing.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreIsFollowing.GetOutput
	// void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamID, bool& bIsFollowing);                                      // [0x9d1d90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreIsFollowing.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreIsFollowing.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreEnumerateFollowingList
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UUWorksRequestCoreEnumerateFollowingList : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0038   (0x0020)  MISSED
	SDK_UNDEFINED(16,386) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,387) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreEnumerateFollowingList.SetInput
	// void SetInput(int32_t StartIndex);                                                                                       // [0x9d2320] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreEnumerateFollowingList.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreEnumerateFollowingList.GetOutput
	// void GetOutput(EUWorksResult& Result, TArray<FUWorksSteamID>& SteamIDs, int32_t& ResultsReturned, int32_t& TotalResultCount); // [0x9d1aa0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreEnumerateFollowingList.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreEnumerateFollowingList.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreAssociateWithClan
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UUWorksRequestCoreAssociateWithClan : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0038   (0x0010)  MISSED
	SDK_UNDEFINED(16,388) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,389) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0058   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreAssociateWithClan.SetInput
	// void SetInput(FUWorksSteamID SteamIDClan);                                                                               // [0x9d23b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreAssociateWithClan.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreAssociateWithClan.GetOutput
	// void GetOutput(EUWorksResult& Result);                                                                                   // [0x9d28a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreAssociateWithClan.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreAssociateWithClan.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UUWorksRequestCoreComputeNewPlayerCompatibility : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0038   (0x0020)  MISSED
	SDK_UNDEFINED(16,390) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,391) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.SetInput
	// void SetInput(FUWorksSteamID SteamIDNewPlayer);                                                                          // [0x9d23b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.GetOutput
	// void GetOutput(EUWorksResult& Result, int32_t& PlayersThatDontLikeCandidate, int32_t& PlayersThatCandidateDoesntLike, int32_t& ClanPlayersThatDontLikeCandidate, FUWorksSteamID& SteamIDCandidate); // [0x9d2930] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreRequestUserStatsGS
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UUWorksRequestCoreRequestUserStatsGS : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,392) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,393) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreRequestUserStatsGS.SetInput
	// void SetInput(FUWorksSteamID SteamIDUser);                                                                               // [0x9d23b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestUserStatsGS.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestUserStatsGS.GetOutput
	// void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamIDUser);                                                      // [0x9d2f90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestUserStatsGS.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestUserStatsGS.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreStoreUserStats
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UUWorksRequestCoreStoreUserStats : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,394) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,395) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreStoreUserStats.SetInput
	// void SetInput(FUWorksSteamID SteamIDUser);                                                                               // [0x9d23b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreStoreUserStats.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreStoreUserStats.GetOutput
	// void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamIDUser);                                                      // [0x9d2f90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreStoreUserStats.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreStoreUserStats.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0038   (0x0020)  MISSED
	SDK_UNDEFINED(16,396) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,397) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.SetInput
	// void SetInput(FUWorksSteamID SteamID);                                                                                   // [0x9d23b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.GetOutput
	// void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamID, int32_t& NumEligiblePromoItemsDefinitionsIDs, bool& bCachedData); // [0x9d32a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreRequestLobbyList
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UUWorksRequestCoreRequestLobbyList : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	SDK_UNDEFINED(16,398) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,399) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0050   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreRequestLobbyList.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestLobbyList.GetOutput
	// void GetOutput(int32_t& LobbiesMatching);                                                                                // [0x9d3c60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestLobbyList.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestLobbyList.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreCreateLobby
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UUWorksRequestCoreCreateLobby : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,400) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,401) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreCreateLobby.SetInput
	// void SetInput(EUWorksLobbyType LobbyType, int32_t MaxMembers);                                                           // [0x9d3cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreCreateLobby.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreCreateLobby.GetOutput
	// void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamIDLobby);                                                     // [0x9d2f90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreCreateLobby.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreCreateLobby.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreJoinLobby
/// Size: 0x0080 (128 bytes) (0x000038 - 0x000080) align 8 MaxSize: 0x0080
class UUWorksRequestCoreJoinLobby : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0038   (0x0028)  MISSED
	SDK_UNDEFINED(16,402) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,403) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0070   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreJoinLobby.SetInput
	// void SetInput(FUWorksSteamID SteamIDLobby);                                                                              // [0x9d23b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreJoinLobby.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreJoinLobby.GetOutput
	// void GetOutput(FUWorksSteamID& SteamIDLobby, TArray<char>& ChatPermissions, bool& bLocked, EUWorksChatRoomEnterResponse& ChatRoomEnterResponse); // [0x9d3aa0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreJoinLobby.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreJoinLobby.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreServerList
/// Size: 0x0150 (336 bytes) (0x000038 - 0x000150) align 8 MaxSize: 0x0150
class UUWorksRequestCoreServerList : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0xD8];                                      // 0x0038   (0x00D8)  MISSED
	SDK_UNDEFINED(16,404) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,405) /* FMulticastInlineDelegate */ __um(OnRequestUpdated);                                   // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,406) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,407) /* FDelegateProperty */      __um(OnRequestUpdatedMinimal);                              // 0x0140   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.SetInput
	// void SetInput(int32_t AppID, EUWorksServerQueryType QueryType);                                                          // [0x9d5b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.GetOutput
	// void GetOutput(FUWorksServerInfo& UpdatedServer, TArray<FUWorksServerInfo>& Servers);                                    // [0x9d5800] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterSecure
	// void AddFilterSecure();                                                                                                  // [0x9d5440] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterOr
	// void AddFilterOr(int32_t Value);                                                                                         // [0x9d53b0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterNotFull
	// void AddFilterNotFull();                                                                                                 // [0x9d5390] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterNor
	// void AddFilterNor(int32_t Value);                                                                                        // [0x9d5300] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterNoPlayers
	// void AddFilterNoPlayers();                                                                                               // [0x9d52e0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterNand
	// void AddFilterNand(int32_t Value);                                                                                       // [0x9d5250] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterMap
	// void AddFilterMap(FString Value);                                                                                        // [0x9d5160] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterLinux
	// void AddFilterLinux();                                                                                                   // [0x9d5140] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterHasPlayers
	// void AddFilterHasPlayers();                                                                                              // [0x9d5120] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterGameTagsNor
	// void AddFilterGameTagsNor(FString Value);                                                                                // [0x9d5030] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterGameTagsAnd
	// void AddFilterGameTagsAnd(FString Value);                                                                                // [0x9d4f40] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataOr
	// void AddFilterGameDataOr(FString Value);                                                                                 // [0x9d4e50] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataNor
	// void AddFilterGameDataNor(FString Value);                                                                                // [0x9d4d60] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataAnd
	// void AddFilterGameDataAnd(FString Value);                                                                                // [0x9d4c70] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterGameAddr
	// void AddFilterGameAddr(FString Value);                                                                                   // [0x9d4b80] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterDedicated
	// void AddFilterDedicated();                                                                                               // [0x9d4b60] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterAnd
	// void AddFilterAnd(int32_t Value);                                                                                        // [0x9d4ad0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.AddFilterAddr
	// void AddFilterAddr(FString Value);                                                                                       // [0x9d49e0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreServerList.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCorePing
/// Size: 0x0100 (256 bytes) (0x000038 - 0x000100) align 8 MaxSize: 0x0100
class UUWorksRequestCorePing : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0xA8];                                      // 0x0038   (0x00A8)  MISSED
	SDK_UNDEFINED(16,408) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,409) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x00F0   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCorePing.SetInput
	// void SetInput(FString IP, int32_t Port);                                                                                 // [0x9d59e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCorePing.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCorePing.GetOutput
	// void GetOutput(FUWorksServerInfo& Server);                                                                               // [0x9d5460] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCorePing.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCorePing.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCorePlayers
/// Size: 0x00B0 (176 bytes) (0x000038 - 0x0000B0) align 8 MaxSize: 0x00B0
class UUWorksRequestCorePlayers : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x0038   (0x0038)  MISSED
	SDK_UNDEFINED(16,410) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,411) /* FMulticastInlineDelegate */ __um(OnRequestUpdated);                                   // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,412) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,413) /* FDelegateProperty */      __um(OnRequestUpdatedMinimal);                              // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCorePlayers.SetInput
	// void SetInput(FString IP, int32_t Port);                                                                                 // [0x9d59e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCorePlayers.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCorePlayers.GetOutput
	// void GetOutput(FUWorksPlayerInfo& UpdatedPlayer, TArray<FUWorksPlayerInfo>& Players);                                    // [0x9d5560] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCorePlayers.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCorePlayers.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreRules
/// Size: 0x00B8 (184 bytes) (0x000038 - 0x0000B8) align 8 MaxSize: 0x00B8
class UUWorksRequestCoreRules : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x0038   (0x0040)  MISSED
	SDK_UNDEFINED(16,414) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,415) /* FMulticastInlineDelegate */ __um(OnRequestUpdated);                                   // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,416) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,417) /* FDelegateProperty */      __um(OnRequestUpdatedMinimal);                              // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreRules.SetInput
	// void SetInput(FString IP, int32_t Port);                                                                                 // [0x9d59e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRules.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRules.GetOutput
	// void GetOutput(FUWorksRuleInfo& UpdatedRule, TArray<FUWorksRuleInfo>& Rules);                                            // [0x9d56a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreRules.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRules.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreFileWriteAsync
/// Size: 0x0080 (128 bytes) (0x000038 - 0x000080) align 8 MaxSize: 0x0080
class UUWorksRequestCoreFileWriteAsync : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0038   (0x0028)  MISSED
	SDK_UNDEFINED(16,418) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,419) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0070   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreFileWriteAsync.SetInput
	// void SetInput(FString File, TArray<char> Buffer);                                                                        // [0x9d6380] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreFileWriteAsync.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreFileWriteAsync.GetOutput
	// void GetOutput(EUWorksResult& Result);                                                                                   // [0x9d6190] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreFileWriteAsync.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreFileWriteAsync.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreFileReadAsync
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class UUWorksRequestCoreFileReadAsync : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0038   (0x0030)  MISSED
	SDK_UNDEFINED(16,420) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,421) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreFileReadAsync.SetInput
	// void SetInput(FString File, int32_t Offset, int32_t BytesToRead);                                                        // [0x9d6220] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreFileReadAsync.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreFileReadAsync.GetOutput
	// void GetOutput(EUWorksResult& Result, int32_t& Offset, TArray<char>& Buffer);                                            // [0x9d6040] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreFileReadAsync.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreFileReadAsync.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreSendQueryUGCRequest
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class UUWorksRequestCoreSendQueryUGCRequest : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0038   (0x0020)  MISSED
	SDK_UNDEFINED(16,422) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,423) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0078   (0x0010)  MISSED


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreSendQueryUGCRequest.SetInput
	// void SetInput(FUWorksUGCQueryHandle UGCQueryHandle);                                                                     // [0x9d88a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreSendQueryUGCRequest.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreSendQueryUGCRequest.GetOutput
	// void GetOutput(FUWorksUGCQueryHandle& UGCQueryHandle, EUWorksResult& Result, int32_t& NumResultsReturned, int32_t& TotalMatchingResults, bool& bCachedData); // [0x9d8390] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreSendQueryUGCRequest.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreSendQueryUGCRequest.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreCreateItem
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UUWorksRequestCoreCreateItem : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,424) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,425) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreCreateItem.SetInput
	// void SetInput(int32_t ConsumerAppID, EUWorksWorkshopFileType FileType);                                                  // [0x9d87d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreCreateItem.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreCreateItem.GetOutput
	// void GetOutput(EUWorksResult& Result, FUWorksPublishedFileID& PublishedFileID, bool& bUserNeedsToAcceptWorkshopLegalAgreement); // [0x9d8050] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreCreateItem.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreCreateItem.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreSubmitItemUpdate
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UUWorksRequestCoreSubmitItemUpdate : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0038   (0x0020)  MISSED
	SDK_UNDEFINED(16,426) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,427) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreSubmitItemUpdate.SetInput
	// void SetInput(FUWorksUGCUpdateHandle UGCUpdateHandle, FString ChangeNote);                                               // [0x9d89f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreSubmitItemUpdate.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreSubmitItemUpdate.GetOutput
	// void GetOutput(EUWorksResult& Result, bool& bUserNeedsToAcceptWorkshopLegalAgreement);                                   // [0x9d8620] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreSubmitItemUpdate.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreSubmitItemUpdate.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreSetUserItemVote
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UUWorksRequestCoreSetUserItemVote : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0038   (0x0020)  MISSED
	SDK_UNDEFINED(16,428) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,429) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreSetUserItemVote.SetInput
	// void SetInput(FUWorksPublishedFileID PublishedFileID, bool bVoteUp);                                                     // [0x9d8920] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreSetUserItemVote.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreSetUserItemVote.GetOutput
	// void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bVoteUp);                           // [0x9d7f10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreSetUserItemVote.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreSetUserItemVote.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreGetUserItemVote
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UUWorksRequestCoreGetUserItemVote : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,430) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,431) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreGetUserItemVote.SetInput
	// void SetInput(FUWorksPublishedFileID PublishedFileID);                                                                   // [0x9d23b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreGetUserItemVote.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreGetUserItemVote.GetOutput
	// void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bVotedUp, bool& bVotedDown, bool& bVoteSkipped); // [0x9d8190] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreGetUserItemVote.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreGetUserItemVote.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreAddItemToFavorites
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UUWorksRequestCoreAddItemToFavorites : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0038   (0x0020)  MISSED
	SDK_UNDEFINED(16,432) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,433) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreAddItemToFavorites.SetInput
	// void SetInput(int32_t AppID, FUWorksPublishedFileID PublishedFileID);                                                    // [0x9d8700] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreAddItemToFavorites.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreAddItemToFavorites.GetOutput
	// void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bWasAddRequest);                    // [0x9d7f10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreAddItemToFavorites.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreAddItemToFavorites.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreRemoveItemFromFavorites
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UUWorksRequestCoreRemoveItemFromFavorites : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0038   (0x0020)  MISSED
	SDK_UNDEFINED(16,434) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,435) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.SetInput
	// void SetInput(int32_t AppID, FUWorksPublishedFileID PublishedFileID);                                                    // [0x9d8700] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.GetOutput
	// void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bWasAddRequest);                    // [0x9d7f10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreSubscribeItem
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UUWorksRequestCoreSubscribeItem : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,436) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,437) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreSubscribeItem.SetInput
	// void SetInput(FUWorksPublishedFileID PublishedFileID);                                                                   // [0x9d23b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreSubscribeItem.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreSubscribeItem.GetOutput
	// void GetOutput(EUWorksResult& Result, FUWorksPublishedFileID& PublishedFileID);                                          // [0x9d2f90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreSubscribeItem.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreSubscribeItem.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreUnsubscribeItem
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UUWorksRequestCoreUnsubscribeItem : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,438) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,439) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreUnsubscribeItem.SetInput
	// void SetInput(FUWorksPublishedFileID PublishedFileID);                                                                   // [0x9d23b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreUnsubscribeItem.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreUnsubscribeItem.GetOutput
	// void GetOutput(EUWorksResult& Result, FUWorksPublishedFileID& PublishedFileID);                                          // [0x9d2f90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreUnsubscribeItem.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreUnsubscribeItem.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreStartPlaytimeTracking
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UUWorksRequestCoreStartPlaytimeTracking : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,440) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,441) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreStartPlaytimeTracking.SetInput
	// void SetInput(TArray<FUWorksPublishedFileID> PublishedFileID);                                                           // [0x9d2230] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreStartPlaytimeTracking.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreStartPlaytimeTracking.GetOutput
	// void GetOutput(EUWorksResult& Result);                                                                                   // [0x9d1a10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreStartPlaytimeTracking.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreStartPlaytimeTracking.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreStopPlaytimeTracking
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UUWorksRequestCoreStopPlaytimeTracking : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,442) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,443) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreStopPlaytimeTracking.SetInput
	// void SetInput(TArray<FUWorksPublishedFileID> PublishedFileIDs);                                                          // [0x9d2230] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreStopPlaytimeTracking.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreStopPlaytimeTracking.GetOutput
	// void GetOutput(EUWorksResult& Result);                                                                                   // [0x9d1a10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreStopPlaytimeTracking.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreStopPlaytimeTracking.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UUWorksRequestCoreStopPlaytimeTrackingForAllItems : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	SDK_UNDEFINED(16,444) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,445) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0050   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.GetOutput
	// void GetOutput(EUWorksResult& Result);                                                                                   // [0x9d8590] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UUWorksRequestCoreRequestEncryptedAppTicket : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,446) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,447) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.SetInput
	// void SetInput(TArray<char> Buffer);                                                                                      // [0x9d9030] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.GetOutput
	// void GetOutput(EUWorksResult& Result);                                                                                   // [0x9d1a10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreRequestStoreAuthURL
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UUWorksRequestCoreRequestStoreAuthURL : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0038   (0x0020)  MISSED
	SDK_UNDEFINED(16,448) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,449) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreRequestStoreAuthURL.SetInput
	// void SetInput(FString URL);                                                                                              // [0x9d09d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestStoreAuthURL.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestStoreAuthURL.GetOutput
	// void GetOutput(FString& URL);                                                                                            // [0x9d8f80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestStoreAuthURL.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestStoreAuthURL.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreRequestUserStats
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UUWorksRequestCoreRequestUserStats : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0038   (0x0020)  MISSED
	SDK_UNDEFINED(16,450) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,451) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreRequestUserStats.SetInput
	// void SetInput(FUWorksSteamID SteamID);                                                                                   // [0x9d23b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestUserStats.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestUserStats.GetOutput
	// void GetOutput(FUWorksGameID& GameID, EUWorksResult& Result, FUWorksSteamID& SteamID);                                   // [0x9dac40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestUserStats.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestUserStats.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard
/// Size: 0x0080 (128 bytes) (0x000038 - 0x000080) align 8 MaxSize: 0x0080
class UUWorksRequestCoreFindOrCreateLeaderboard : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0038   (0x0028)  MISSED
	SDK_UNDEFINED(16,452) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,453) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0070   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.SetInput
	// void SetInput(FString LeaderboardName, EUWorksLeaderboardSortMethod LeaderboardSortMethod, EUWorksLeaderboardDisplayType LeaderboardDisplayType); // [0x9db310] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.GetOutput
	// void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, bool& bLeaderboardFound);                                      // [0x9da9a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreFindLeaderboard
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UUWorksRequestCoreFindLeaderboard : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0038   (0x0020)  MISSED
	SDK_UNDEFINED(16,454) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,455) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreFindLeaderboard.SetInput
	// void SetInput(FString LeaderboardName);                                                                                  // [0x9d09d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreFindLeaderboard.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreFindLeaderboard.GetOutput
	// void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, bool& bLeaderboardFound);                                      // [0x9da8c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreFindLeaderboard.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreFindLeaderboard.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class UUWorksRequestCoreDownloadLeaderboardEntries : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0038   (0x0030)  MISSED
	SDK_UNDEFINED(16,456) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,457) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.SetInput
	// void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32_t RangeStart, int32_t RangeEnd); // [0x9db080] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.GetOutput
	// void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32_t& EntryCount); // [0x9da780] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0038   (0x0030)  MISSED
	SDK_UNDEFINED(16,458) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,459) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.SetInput
	// void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, TArray<FUWorksSteamID> users);                                   // [0x9db1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.GetOutput
	// void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32_t& EntryCount); // [0x9da780] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreUploadLeaderboardScore
/// Size: 0x0098 (152 bytes) (0x000038 - 0x000098) align 8 MaxSize: 0x0098
class UUWorksRequestCoreUploadLeaderboardScore : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x0038   (0x0040)  MISSED
	SDK_UNDEFINED(16,460) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,461) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0088   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreUploadLeaderboardScore.SetInput
	// void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32_t Score, TArray<int32_t> ScoreDetails); // [0x9db470] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreUploadLeaderboardScore.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreUploadLeaderboardScore.GetOutput
	// void GetOutput(bool& bSuccess, FUWorksSteamLeaderboard& SteamLeaderboard, int32_t& Score, bool& bScoreChanged, int32_t& GlobalRankNew, int32_t& GlobalRankPrevious); // [0x9dad80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreUploadLeaderboardScore.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreUploadLeaderboardScore.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreAttachLeaderboardUGC
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UUWorksRequestCoreAttachLeaderboardUGC : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0038   (0x0020)  MISSED
	SDK_UNDEFINED(16,462) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,463) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.SetInput
	// void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, FUWorksUGCHandle UGCHandle);                                     // [0x9dafb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.GetOutput
	// void GetOutput(EUWorksResult& Result, FUWorksSteamLeaderboard& SteamLeaderboard);                                        // [0x9da6a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UUWorksRequestCoreGetNumberOfCurrentPlayers : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	SDK_UNDEFINED(16,464) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,465) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0050   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.GetOutput
	// void GetOutput(bool& bSuccess, int32_t& Players);                                                                        // [0x9daa80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UUWorksRequestCoreRequestGlobalAchievementPercentages : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0038   (0x0010)  MISSED
	SDK_UNDEFINED(16,466) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,467) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0058   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.GetOutput
	// void GetOutput(FUWorksGameID& GameID, EUWorksResult& Result);                                                            // [0x9dab60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.UWorksRequestCoreRequestGlobalStats
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UUWorksRequestCoreRequestGlobalStats : public UUWorksRequestCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,468) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,469) /* FDelegateProperty */      __um(OnRequestCompletedMinimal);                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.UWorksRequestCoreRequestGlobalStats.SetInput
	// void SetInput(int32_t HistoryDays);                                                                                      // [0x9d2320] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestGlobalStats.IsActive
	// bool IsActive();                                                                                                         // [0x9d09a0] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestGlobalStats.GetOutput
	// void GetOutput(FUWorksGameID& GameID, EUWorksResult& Result);                                                            // [0x9d1ed0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestGlobalStats.Deactivate
	// void Deactivate();                                                                                                       // [0x968540] Native|Public|BlueprintCallable 
	// Function /Script/UWorksCore.UWorksRequestCoreRequestGlobalStats.Activate
	// void Activate();                                                                                                         // [0x9d07b0] Native|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreGetFileDetailsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreGetFileDetailsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,470) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreGetFileDetailsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32_t FileSize, FString FileSHA, TArray<int32_t>& FileFlags); // [0x9db930] Final|Native|Public|HasOutParms 
	// Function /Script/UWorksCore.CoreGetFileDetailsNode.GetFileDetailsNode
	// class UCoreGetFileDetailsNode* GetFileDetailsNode(FString Filename);                                                     // [0x9db840] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreSetPersonaNameNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreSetPersonaNameNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,471) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreSetPersonaNameNode.SetPersonaNameNode
	// class UCoreSetPersonaNameNode* SetPersonaNameNode(FString Name);                                                         // [0x9dd360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreSetPersonaNameNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, bool bSuccess, bool bLocalSuccess, EUWorksResult Result);                      // [0x9dd150] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreDownloadClanActivityCountsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreDownloadClanActivityCountsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,472) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreDownloadClanActivityCountsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, bool bSuccess);                                                                // [0x9dc970] Final|Native|Public  
	// Function /Script/UWorksCore.CoreDownloadClanActivityCountsNode.DownloadClanActivityCountsNode
	// class UCoreDownloadClanActivityCountsNode* DownloadClanActivityCountsNode(TArray<FUWorksSteamID> SteamIDClans);          // [0x9dc640] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreRequestClanOfficerListNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreRequestClanOfficerListNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,473) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreRequestClanOfficerListNode.RequestClanOfficerListNode
	// class UCoreRequestClanOfficerListNode* RequestClanOfficerListNode(FUWorksSteamID SteamID);                               // [0x9dd2d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreRequestClanOfficerListNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDClan, int32_t Officers, bool bSuccess);                  // [0x9dcff0] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreJoinClanChatRoomNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreJoinClanChatRoomNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,474) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreJoinClanChatRoomNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDClanChat, EUWorksChatRoomEnterResponse ChatRoomEnterResponse); // [0x9dcee0] Final|Native|Public  
	// Function /Script/UWorksCore.CoreJoinClanChatRoomNode.JoinClanChatRoomNode
	// class UCoreJoinClanChatRoomNode* JoinClanChatRoomNode(FUWorksSteamID SteamIDClan);                                       // [0x9dc8e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreGetFollowerCountNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreGetFollowerCountNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,475) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreGetFollowerCountNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32_t Count);                  // [0x9dcc20] Final|Native|Public  
	// Function /Script/UWorksCore.CoreGetFollowerCountNode.GetFollowerCountNode
	// class UCoreGetFollowerCountNode* GetFollowerCountNode(FUWorksSteamID SteamID);                                           // [0x9dc7c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreIsFollowingNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreIsFollowingNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,476) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreIsFollowingNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, bool bIsFollowing);              // [0x9dcd80] Final|Native|Public  
	// Function /Script/UWorksCore.CoreIsFollowingNode.IsFollowingNode
	// class UCoreIsFollowingNode* IsFollowingNode(FUWorksSteamID SteamID);                                                     // [0x9dc850] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreEnumerateFollowingListNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreEnumerateFollowingListNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,477) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreEnumerateFollowingListNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, TArray<FUWorksSteamID>& SteamIDs, int32_t ResultsReturned, int32_t TotalResultCount); // [0x9dca40] Final|Native|Public|HasOutParms 
	// Function /Script/UWorksCore.CoreEnumerateFollowingListNode.EnumerateFollowingListNode
	// class UCoreEnumerateFollowingListNode* EnumerateFollowingListNode(int32_t StartIndex);                                   // [0x9dc730] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreAssociateWithClanNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreAssociateWithClanNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,478) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreAssociateWithClanNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);                                                         // [0x9dd890] Final|Native|Public  
	// Function /Script/UWorksCore.CoreAssociateWithClanNode.AssociateWithClanNode
	// class UCoreAssociateWithClanNode* AssociateWithClanNode(FUWorksSteamID SteamIDClan);                                     // [0x9dd770] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreComputeNewPlayerCompatibilityNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreComputeNewPlayerCompatibilityNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,479) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreComputeNewPlayerCompatibilityNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32_t PlayersThatDontLikeCandidate, int32_t PlayersThatCandidateDoesntLike, int32_t ClanPlayersThatDontLikeCandidate, FUWorksSteamID SteamIDCandidate); // [0x9dd960] Final|Native|Public  
	// Function /Script/UWorksCore.CoreComputeNewPlayerCompatibilityNode.ComputeNewPlayerCompatibilityNode
	// class UCoreComputeNewPlayerCompatibilityNode* ComputeNewPlayerCompatibilityNode(FUWorksSteamID SteamIDNewPlayer);        // [0x9dd800] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreRequestUserStatsGSNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreRequestUserStatsGSNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,480) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreRequestUserStatsGSNode.RequestUserStatsGSNode
	// class UCoreRequestUserStatsGSNode* RequestUserStatsGSNode(FUWorksSteamID SteamIDUser);                                   // [0x9ddf70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreRequestUserStatsGSNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);                             // [0x9dde60] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreStoreUserStatsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreStoreUserStatsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,481) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreStoreUserStatsNode.StoreUserStatsNode
	// class UCoreStoreUserStatsNode* StoreUserStatsNode(FUWorksSteamID SteamIDUser);                                           // [0x9de000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreStoreUserStatsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);                             // [0x9dde60] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreRequestEligiblePromoItemDefinitionsIDsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,482) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode.RequestEligiblePromoItemDefinitionsIDsNode
	// class UCoreRequestEligiblePromoItemDefinitionsIDsNode* RequestEligiblePromoItemDefinitionsIDsNode(FUWorksSteamID SteamID); // [0x9de3c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32_t NumEligiblePromoItemsDefinitionsIDs, bool bCachedData); // [0x9de220] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreRequestLobbyListNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreRequestLobbyListNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,483) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreRequestLobbyListNode.RequestLobbyListNode
	// class UCoreRequestLobbyListNode* RequestLobbyListNode();                                                                 // [0x9ded20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreRequestLobbyListNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, int32_t LobbiesMatching);                                                      // [0x9dec50] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreCreateLobbyNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreCreateLobbyNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,484) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreCreateLobbyNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDLobby);                            // [0x9dde60] Final|Native|Public  
	// Function /Script/UWorksCore.CoreCreateLobbyNode.CreateLobbyNode
	// class UCoreCreateLobbyNode* CreateLobbyNode(EUWorksLobbyType LobbyType, int32_t MaxMembers);                             // [0x9de900] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreJoinLobbyNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreJoinLobbyNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,485) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreJoinLobbyNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDLobby, TArray<char>& ChatPermissions, bool bLocked, EUWorksChatRoomEnterResponse ChatRoomEnterResponse); // [0x9dea60] Final|Native|Public|HasOutParms 
	// Function /Script/UWorksCore.CoreJoinLobbyNode.JoinLobbyNode
	// class UCoreJoinLobbyNode* JoinLobbyNode(FUWorksSteamID SteamIDLobby);                                                    // [0x9de9d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreServerListNode
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UCoreServerListNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,486) /* FMulticastInlineDelegate */ __um(updated);                                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED


	/// Functions
	// Function /Script/UWorksCore.CoreServerListNode.ServerListNode
	// class UCoreServerListNode* ServerListNode(int32_t AppID, EUWorksServerQueryType QueryType, int32_t MaxUpdates);          // [0x9dfd10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreServerListNode.OnRequestUpdated
	// void OnRequestUpdated(bool bSuccessful, FUWorksServerInfo Server);                                                       // [0x9df7c0] Final|Native|Public  
};

/// Class /Script/UWorksCore.CorePingNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCorePingNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,487) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CorePingNode.PingNode
	// class UCorePingNode* PingNode(FString IP, int32_t Port);                                                                 // [0x9df920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CorePingNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FUWorksServerInfo Server);                                                     // [0x9df430] Final|Native|Public  
};

/// Class /Script/UWorksCore.CorePlayersNode
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UCorePlayersNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,488) /* FMulticastInlineDelegate */ __um(updated);                                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED


	/// Functions
	// Function /Script/UWorksCore.CorePlayersNode.PlayersNode
	// class UCorePlayersNode* PlayersNode(FString IP, int32_t Port, int32_t MaxUpdates);                                       // [0x9dfa50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CorePlayersNode.OnRequestUpdated
	// void OnRequestUpdated(bool bSuccessful, FUWorksPlayerInfo Player);                                                       // [0x9df590] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreRulesNode
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UCoreRulesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,489) /* FMulticastInlineDelegate */ __um(updated);                                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED


	/// Functions
	// Function /Script/UWorksCore.CoreRulesNode.RulesNode
	// class UCoreRulesNode* RulesNode(FString IP, int32_t Port, int32_t MaxUpdates);                                           // [0x9dfbb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreRulesNode.OnRequestUpdated
	// void OnRequestUpdated(bool bSuccessful, FUWorksRuleInfo Rule);                                                           // [0x9df6a0] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreFileWriteAsyncNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreFileWriteAsyncNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,490) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreFileWriteAsyncNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);                                                         // [0x9dd890] Final|Native|Public  
	// Function /Script/UWorksCore.CoreFileWriteAsyncNode.FileWriteAsyncNode
	// class UCoreFileWriteAsyncNode* FileWriteAsyncNode(FString File, TArray<char> Buffer);                                    // [0x9e0290] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreFileReadAsyncNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreFileReadAsyncNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,491) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreFileReadAsyncNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32_t Offset, TArray<char>& Buffer);                   // [0x9e0400] Final|Native|Public|HasOutParms 
	// Function /Script/UWorksCore.CoreFileReadAsyncNode.FileReadAsyncNode
	// class UCoreFileReadAsyncNode* FileReadAsyncNode(FString File, int32_t Offset, int32_t BytesToRead);                      // [0x9e0130] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreSendQueryUGCRequestNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreSendQueryUGCRequestNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,492) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreSendQueryUGCRequestNode.SendQueryUGCRequestNode
	// class UCoreSendQueryUGCRequestNode* SendQueryUGCRequestNode(FUWorksUGCQueryHandle UGCQueryHandle);                       // [0x9e23a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreSendQueryUGCRequestNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FUWorksUGCQueryHandle UGCQueryHandle, EUWorksResult Result, int32_t NumResultsReturned, int32_t TotalMatchingResults, bool bCachedData); // [0x9e1fc0] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreCreateItemNode
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UCoreCreateItemNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,493) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0040   (0x0018)  MISSED


	/// Functions
	// Function /Script/UWorksCore.CoreCreateItemNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement); // [0x9e1c70] Final|Native|Public  
	// Function /Script/UWorksCore.CoreCreateItemNode.CreateItemNode
	// class UCoreCreateItemNode* CreateItemNode(int32_t ConsumerAppID, EUWorksWorkshopFileType FileType);                      // [0x9e19b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreSubmitItemUpdateNode
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UCoreSubmitItemUpdateNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,494) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0040   (0x0018)  MISSED


	/// Functions
	// Function /Script/UWorksCore.CoreSubmitItemUpdateNode.SubmitItemUpdateNode
	// class UCoreSubmitItemUpdateNode* SubmitItemUpdateNode(FUWorksUGCUpdateHandle UGCUpdateHandle, FString ChangeNote);       // [0x9e2700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreSubmitItemUpdateNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement);          // [0x9e21b0] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreSetUserItemVoteNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreSetUserItemVoteNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,495) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreSetUserItemVoteNode.SetUserItemVoteNode
	// class UCoreSetUserItemVoteNode* SetUserItemVoteNode(FUWorksPublishedFileID PublishedFileID, bool bVoteUp);               // [0x9e2420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreSetUserItemVoteNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVoteUp);   // [0x9e1b10] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreGetUserItemVoteNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreGetUserItemVoteNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,496) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreGetUserItemVoteNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped); // [0x9e1dd0] Final|Native|Public  
	// Function /Script/UWorksCore.CoreGetUserItemVoteNode.GetUserItemVoteNode
	// class UCoreGetUserItemVoteNode* GetUserItemVoteNode(FUWorksPublishedFileID PublishedFileID);                             // [0x9e1a80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreAddItemToFavoritesNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreAddItemToFavoritesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,497) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreAddItemToFavoritesNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest); // [0x9e1b10] Final|Native|Public  
	// Function /Script/UWorksCore.CoreAddItemToFavoritesNode.AddItemToFavoritesNode
	// class UCoreAddItemToFavoritesNode* AddItemToFavoritesNode(int32_t AppID, FUWorksPublishedFileID PublishedFileID);        // [0x9e18e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreRemoveItemFromFavoritesNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreRemoveItemFromFavoritesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,498) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreRemoveItemFromFavoritesNode.RemoveItemFromFavoritesNode
	// class UCoreRemoveItemFromFavoritesNode* RemoveItemFromFavoritesNode(int32_t AppID, FUWorksPublishedFileID PublishedFileID); // [0x9e22d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreRemoveItemFromFavoritesNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest); // [0x9e1b10] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreSubscribeItemNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreSubscribeItemNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,499) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreSubscribeItemNode.SubscribeItemNode
	// class UCoreSubscribeItemNode* SubscribeItemNode(FUWorksPublishedFileID PublishedFileID);                                 // [0x9e2830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreSubscribeItemNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);                 // [0x9dde60] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreUnsubscribeItemNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreUnsubscribeItemNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,500) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreUnsubscribeItemNode.UnsubscribeItemNode
	// class UCoreUnsubscribeItemNode* UnsubscribeItemNode(FUWorksPublishedFileID PublishedFileID);                             // [0x9e28c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreUnsubscribeItemNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);                 // [0x9dde60] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreStartPlaytimeTrackingNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreStartPlaytimeTrackingNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,501) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreStartPlaytimeTrackingNode.StartPlaytimeTrackingNode
	// class UCoreStartPlaytimeTrackingNode* StartPlaytimeTrackingNode(TArray<FUWorksPublishedFileID> PublishedFileID);         // [0x9e24f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreStartPlaytimeTrackingNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);                                                         // [0x9dd890] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreStopPlaytimeTrackingNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreStopPlaytimeTrackingNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,502) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreStopPlaytimeTrackingNode.StopPlaytimeTrackingNode
	// class UCoreStopPlaytimeTrackingNode* StopPlaytimeTrackingNode(TArray<FUWorksPublishedFileID> PublishedFileID);           // [0x9e2610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreStopPlaytimeTrackingNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);                                                         // [0x9dd890] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreStopPlaytimeTrackingForAllItemsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,503) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode.StopPlaytimeTrackingForAllItemsNode
	// class UCoreStopPlaytimeTrackingForAllItemsNode* StopPlaytimeTrackingForAllItemsNode();                                   // [0x9e25e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);                                                         // [0x9dd890] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreRequestEncryptedAppTicketNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreRequestEncryptedAppTicketNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,504) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreRequestEncryptedAppTicketNode.RequestEncryptedAppTicketNode
	// class UCoreRequestEncryptedAppTicketNode* RequestEncryptedAppTicketNode(TArray<char> Buffer);                            // [0x9e2da0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreRequestEncryptedAppTicketNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);                                                         // [0x9dd890] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreRequestStoreAuthURLNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreRequestStoreAuthURLNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,505) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreRequestStoreAuthURLNode.RequestStoreAuthURLNode
	// class UCoreRequestStoreAuthURLNode* RequestStoreAuthURLNode(FString URL);                                                // [0x9e2e90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreRequestStoreAuthURLNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FString URL);                                                                  // [0x9e2c70] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreRequestUserStatsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreRequestUserStatsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,506) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreRequestUserStatsNode.RequestUserStatsNode
	// class UCoreRequestUserStatsNode* RequestUserStatsNode(FUWorksSteamID SteamID);                                           // [0x9e4e10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreRequestUserStatsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result, FUWorksSteamID SteamID);           // [0x9e49b0] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreFindOrCreateLeaderboardNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreFindOrCreateLeaderboardNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,507) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreFindOrCreateLeaderboardNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);             // [0x9e4770] Final|Native|Public  
	// Function /Script/UWorksCore.CoreFindOrCreateLeaderboardNode.FindOrCreateLeaderboardNode
	// class UCoreFindOrCreateLeaderboardNode* FindOrCreateLeaderboardNode(FString LeaderboardName, EUWorksLeaderboardSortMethod LeaderboardSortMethod, EUWorksLeaderboardDisplayType LeaderboardDisplayType); // [0x9e4360] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreFindLeaderboardNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreFindLeaderboardNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,508) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreFindLeaderboardNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);             // [0x9e4770] Final|Native|Public  
	// Function /Script/UWorksCore.CoreFindLeaderboardNode.FindLeaderboardNode
	// class UCoreFindLeaderboardNode* FindLeaderboardNode(FString LeaderboardName);                                            // [0x9e4270] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreDownloadLeaderboardEntriesNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreDownloadLeaderboardEntriesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,509) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreDownloadLeaderboardEntriesNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32_t EntryCount); // [0x9e4610] Final|Native|Public  
	// Function /Script/UWorksCore.CoreDownloadLeaderboardEntriesNode.DownloadLeaderboardEntriesNode
	// class UCoreDownloadLeaderboardEntriesNode* DownloadLeaderboardEntriesNode(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32_t RangeStart, int32_t RangeEnd); // [0x9e4120] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreDownloadLeaderboardEntriesForUsersNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,510) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32_t EntryCount); // [0x9e4610] Final|Native|Public  
	// Function /Script/UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode.DownloadLeaderboardEntriesForUsersNode
	// class UCoreDownloadLeaderboardEntriesForUsersNode* DownloadLeaderboardEntriesForUsersNode(FUWorksSteamLeaderboard SteamLeaderboard, TArray<FUWorksSteamID> users); // [0x9e3ff0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreUploadLeaderboardScoreNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreUploadLeaderboardScoreNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,511) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreUploadLeaderboardScoreNode.UploadLeaderboardScoreNode
	// class UCoreUploadLeaderboardScoreNode* UploadLeaderboardScoreNode(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32_t Score, TArray<int32_t> ScoreDetails); // [0x9e4ea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreUploadLeaderboardScoreNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32_t Score, bool bScoreChanged, int32_t GlobalRankNew, int32_t GlobalRankPrevious); // [0x9e4b10] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreAttachLeaderboardUGCNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreAttachLeaderboardUGCNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,512) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreAttachLeaderboardUGCNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamLeaderboard SteamLeaderboard);               // [0x9e44f0] Final|Native|Public  
	// Function /Script/UWorksCore.CoreAttachLeaderboardUGCNode.AttachLeaderboardUGCNode
	// class UCoreAttachLeaderboardUGCNode* AttachLeaderboardUGCNode(FUWorksSteamLeaderboard SteamLeaderboard, FUWorksUGCHandle UGCHandle); // [0x9e3f20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreGetNumberOfCurrentPlayersNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreGetNumberOfCurrentPlayersNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,513) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreGetNumberOfCurrentPlayersNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, bool bSuccess, int32_t Players);                                               // [0x9e4890] Final|Native|Public  
	// Function /Script/UWorksCore.CoreGetNumberOfCurrentPlayersNode.GetNumberOfCurrentPlayersNode
	// class UCoreGetNumberOfCurrentPlayersNode* GetNumberOfCurrentPlayersNode();                                               // [0x9e44c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UWorksCore.CoreRequestGlobalAchievementPercentagesNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreRequestGlobalAchievementPercentagesNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,514) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreRequestGlobalAchievementPercentagesNode.RequestGlobalAchievementPercentagesNode
	// class UCoreRequestGlobalAchievementPercentagesNode* RequestGlobalAchievementPercentagesNode();                           // [0x9e4d50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreRequestGlobalAchievementPercentagesNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);                                   // [0x9dcee0] Final|Native|Public  
};

/// Class /Script/UWorksCore.CoreRequestGlobalStatsNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCoreRequestGlobalStatsNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,515) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UWorksCore.CoreRequestGlobalStatsNode.RequestGlobalStatsNode
	// class UCoreRequestGlobalStatsNode* RequestGlobalStatsNode(int32_t HistoryDays);                                          // [0x9e4d80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UWorksCore.CoreRequestGlobalStatsNode.OnRequestCompleted
	// void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);                                   // [0x9dcee0] Final|Native|Public  
};

/// Struct /Script/UWorksCore.UWorksSteamInventoryResult
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FUWorksSteamInventoryResult
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/UWorksCore.UWorksServerInfo
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FUWorksServerInfo
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            IP;                                                         // 0x0010   (0x0010)  
	int32_t                                            QueryPort;                                                  // 0x0020   (0x0004)  
	int32_t                                            ConnectionPort;                                             // 0x0024   (0x0004)  
	int32_t                                            Ping;                                                       // 0x0028   (0x0004)  
	bool                                               bHadSuccessfulResponse;                                     // 0x002C   (0x0001)  
	bool                                               bDoNotRefresh;                                              // 0x002D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002E   (0x0002)  MISSED
	FString                                            GameDir;                                                    // 0x0030   (0x0010)  
	FString                                            Map;                                                        // 0x0040   (0x0010)  
	FString                                            GameDescription;                                            // 0x0050   (0x0010)  
	int32_t                                            AppID;                                                      // 0x0060   (0x0004)  
	int32_t                                            Players;                                                    // 0x0064   (0x0004)  
	int32_t                                            MaxPlayers;                                                 // 0x0068   (0x0004)  
	int32_t                                            BotPlayers;                                                 // 0x006C   (0x0004)  
	bool                                               bPassword;                                                  // 0x0070   (0x0001)  
	bool                                               BSecure;                                                    // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0072   (0x0002)  MISSED
	int32_t                                            TimeLastPlayed;                                             // 0x0074   (0x0004)  
	int32_t                                            ServerVersion;                                              // 0x0078   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	FString                                            GameTags;                                                   // 0x0080   (0x0010)  
	FUWorksSteamID                                     SteamID;                                                    // 0x0090   (0x0008)  
};

/// Struct /Script/UWorksCore.UWorksPlayerInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FUWorksPlayerInfo
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	int32_t                                            Score;                                                      // 0x0010   (0x0004)  
	float                                              TimePlayed;                                                 // 0x0014   (0x0004)  
};

/// Struct /Script/UWorksCore.UWorksRuleInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FUWorksRuleInfo
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UWorksCore.UWorksScreenshotHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FUWorksScreenshotHandle
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/UWorksCore.UWorksUGCQueryHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUWorksUGCQueryHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/UWorksCore.UWorksTicketHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FUWorksTicketHandle
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/UWorksCore.UWorksSteamLeaderboard
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUWorksSteamLeaderboard
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/UWorksCore.UWorksSteamLeaderboardEntries
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUWorksSteamLeaderboardEntries
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreAppList
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreAppList
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreApps
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreApps
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksControllerHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUWorksControllerHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/UWorksCore.UWorksControllerDigitalActionHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUWorksControllerDigitalActionHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/UWorksCore.UWorksControllerAnalogActionHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUWorksControllerAnalogActionHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/UWorksCore.UWorksControllerActionSetHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUWorksControllerActionSetHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/UWorksCore.UWorksControllerMotionData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FUWorksControllerMotionData
{ 
	float                                              RotQuatX;                                                   // 0x0000   (0x0004)  
	float                                              RotQuatY;                                                   // 0x0004   (0x0004)  
	float                                              RotQuatZ;                                                   // 0x0008   (0x0004)  
	float                                              RotQuatW;                                                   // 0x000C   (0x0004)  
	float                                              PosAccelX;                                                  // 0x0010   (0x0004)  
	float                                              PosAccelY;                                                  // 0x0014   (0x0004)  
	float                                              PosAccelZ;                                                  // 0x0018   (0x0004)  
	float                                              RotVelX;                                                    // 0x001C   (0x0004)  
	float                                              RotVelY;                                                    // 0x0020   (0x0004)  
	float                                              RotVelZ;                                                    // 0x0024   (0x0004)  
};

/// Struct /Script/UWorksCore.UWorksControllerDigitalActionData
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FUWorksControllerDigitalActionData
{ 
	bool                                               bState;                                                     // 0x0000   (0x0001)  
	bool                                               bActive;                                                    // 0x0001   (0x0001)  
};

/// Struct /Script/UWorksCore.UWorksControllerAnalogActionData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FUWorksControllerAnalogActionData
{ 
	EUWorksControllerSourceMode                        Mode;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              X;                                                          // 0x0004   (0x0004)  
	float                                              Y;                                                          // 0x0008   (0x0004)  
	bool                                               bActive;                                                    // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreController
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreController
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksFriendsGroupID
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 2 MaxSize: 0x0002
struct FUWorksFriendsGroupID
{ 
	unsigned char                                      UnknownData00_2[0x2];                                       // 0x0000   (0x0002)  MISSED
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreFriends
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreFriends
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreGameServer
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreGameServer
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreGameServerStats
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreGameServerStats
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksSteamItemDetails
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FUWorksSteamItemDetails
{ 
	FUWorksSteamItemInstanceID                         InstanceID;                                                 // 0x0000   (0x0008)  
	FUWorksSteamItemDef                                Definition;                                                 // 0x0008   (0x0004)  
	int32_t                                            quantity;                                                   // 0x000C   (0x0004)  
	TArray<EUWorksSteamItemFlags>                      Flags;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreInventory
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreInventory
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreMatchmaking
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreMatchmaking
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreMatchmakingServers
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreMatchmakingServers
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreMusic
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreMusic
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksP2PSessionState
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FUWorksP2PSessionState
{ 
	bool                                               bConnectionActive;                                          // 0x0000   (0x0001)  
	bool                                               bConnecting;                                                // 0x0001   (0x0001)  
	EUWorksP2PSessionError                             P2PSessionError;                                            // 0x0002   (0x0001)  
	bool                                               bUsingRelay;                                                // 0x0003   (0x0001)  
	int32_t                                            BytesQueuedForSend;                                         // 0x0004   (0x0004)  
	int32_t                                            PacketsQueuedForSend;                                       // 0x0008   (0x0004)  
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreNetworking
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreNetworking
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksUGCFileWriteStreamHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUWorksUGCFileWriteStreamHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreRemoteStorage
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreRemoteStorage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreScreenshots
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreScreenshots
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksUGCHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUWorksUGCHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/UWorksCore.UWorksSteamUGCDetails
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FUWorksSteamUGCDetails
{ 
	FUWorksPublishedFileID                             PublishedFileID;                                            // 0x0000   (0x0008)  
	EUWorksResult                                      Result;                                                     // 0x0008   (0x0001)  
	EUWorksWorkshopFileType                            FileType;                                                   // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
	int32_t                                            CreatorAppID;                                               // 0x000C   (0x0004)  
	int32_t                                            ConsumerAppID;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            Title;                                                      // 0x0018   (0x0010)  
	FString                                            Description;                                                // 0x0028   (0x0010)  
	FUWorksSteamID                                     SteamIDOwner;                                               // 0x0038   (0x0008)  
	int32_t                                            TimeCreated;                                                // 0x0040   (0x0004)  
	int32_t                                            TimeUpdated;                                                // 0x0044   (0x0004)  
	int32_t                                            TimeAddedToUserList;                                        // 0x0048   (0x0004)  
	EUWorksRemoteStoragePublishedFileVisibility        Visibility;                                                 // 0x004C   (0x0001)  
	bool                                               bBanned;                                                    // 0x004D   (0x0001)  
	bool                                               bAcceptedForUse;                                            // 0x004E   (0x0001)  
	bool                                               bTagsTruncated;                                             // 0x004F   (0x0001)  
	TArray<FString>                                    Tags;                                                       // 0x0050   (0x0010)  
	FUWorksUGCHandle                                   File;                                                       // 0x0060   (0x0008)  
	FUWorksUGCHandle                                   PreviewFile;                                                // 0x0068   (0x0008)  
	FString                                            Filename;                                                   // 0x0070   (0x0010)  
	int32_t                                            FileSize;                                                   // 0x0080   (0x0004)  
	int32_t                                            PreviewFileSize;                                            // 0x0084   (0x0004)  
	FString                                            URL;                                                        // 0x0088   (0x0010)  
	int32_t                                            VotesUp;                                                    // 0x0098   (0x0004)  
	int32_t                                            VotesDown;                                                  // 0x009C   (0x0004)  
	float                                              Score;                                                      // 0x00A0   (0x0004)  
	int32_t                                            NumChildren;                                                // 0x00A4   (0x0004)  
};

/// Struct /Script/UWorksCore.UWorksUGCUpdateHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUWorksUGCUpdateHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreUGC
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreUGC
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreUser
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreUser
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksLeaderboardEntry
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FUWorksLeaderboardEntry
{ 
	FUWorksSteamID                                     SteamID;                                                    // 0x0000   (0x0008)  
	int32_t                                            GlobalRank;                                                 // 0x0008   (0x0004)  
	int32_t                                            Score;                                                      // 0x000C   (0x0004)  
	int32_t                                            Details;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FUWorksUGCHandle                                   UGCHandle;                                                  // 0x0018   (0x0008)  
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreUserStats
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreUserStats
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreUtils
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreUtils
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksAnnexCoreVideo
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUWorksAnnexCoreVideo
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UWorksCore.UWorksSteamPipe
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FUWorksSteamPipe
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/UWorksCore.UWorksSteamUser
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FUWorksSteamUser
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UUWorksInterfaceCore) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksRequestCore) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UUWorksInterfaceCoreAppList) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UUWorksInterfaceCoreApps) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UUWorksInterfaceCoreController) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceCoreFriends) == 0x00D8); // 216 bytes (0x000028 - 0x0000D8)
static_assert(sizeof(UUWorksInterfaceCoreGameServer) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UUWorksInterfaceCoreGameServerStats) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UUWorksInterfaceCoreInventory) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UUWorksInterfaceCoreMatchmaking) == 0x00B8); // 184 bytes (0x000028 - 0x0000B8)
static_assert(sizeof(UUWorksInterfaceCoreMatchmakingServers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceCoreMusic) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UUWorksInterfaceCoreNetworking) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UUWorksInterfaceCoreRemoteStorage) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksInterfaceCoreScreenshots) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UUWorksInterfaceCoreUGC) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UUWorksInterfaceCoreUser) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(sizeof(UUWorksInterfaceCoreUserStats) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UUWorksInterfaceCoreUtils) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UUWorksInterfaceCoreVideo) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UUWorksRequestCoreGetFileDetails) == 0x0090); // 144 bytes (0x000038 - 0x000090)
static_assert(sizeof(UUWorksRequestCoreSetPersonaName) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UUWorksRequestCoreDownloadClanActivityCounts) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UUWorksRequestCoreRequestClanOfficerList) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UUWorksRequestCoreJoinClanChatRoom) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UUWorksRequestCoreGetFollowerCount) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UUWorksRequestCoreIsFollowing) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UUWorksRequestCoreEnumerateFollowingList) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UUWorksRequestCoreAssociateWithClan) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UUWorksRequestCoreComputeNewPlayerCompatibility) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UUWorksRequestCoreRequestUserStatsGS) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UUWorksRequestCoreStoreUserStats) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UUWorksRequestCoreRequestLobbyList) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UUWorksRequestCoreCreateLobby) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UUWorksRequestCoreJoinLobby) == 0x0080); // 128 bytes (0x000038 - 0x000080)
static_assert(sizeof(UUWorksRequestCoreServerList) == 0x0150); // 336 bytes (0x000038 - 0x000150)
static_assert(sizeof(UUWorksRequestCorePing) == 0x0100); // 256 bytes (0x000038 - 0x000100)
static_assert(sizeof(UUWorksRequestCorePlayers) == 0x00B0); // 176 bytes (0x000038 - 0x0000B0)
static_assert(sizeof(UUWorksRequestCoreRules) == 0x00B8); // 184 bytes (0x000038 - 0x0000B8)
static_assert(sizeof(UUWorksRequestCoreFileWriteAsync) == 0x0080); // 128 bytes (0x000038 - 0x000080)
static_assert(sizeof(UUWorksRequestCoreFileReadAsync) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UUWorksRequestCoreSendQueryUGCRequest) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UUWorksRequestCoreCreateItem) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UUWorksRequestCoreSubmitItemUpdate) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UUWorksRequestCoreSetUserItemVote) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UUWorksRequestCoreGetUserItemVote) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UUWorksRequestCoreAddItemToFavorites) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UUWorksRequestCoreRemoveItemFromFavorites) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UUWorksRequestCoreSubscribeItem) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UUWorksRequestCoreUnsubscribeItem) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UUWorksRequestCoreStartPlaytimeTracking) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UUWorksRequestCoreStopPlaytimeTracking) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UUWorksRequestCoreStopPlaytimeTrackingForAllItems) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UUWorksRequestCoreRequestEncryptedAppTicket) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UUWorksRequestCoreRequestStoreAuthURL) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UUWorksRequestCoreRequestUserStats) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UUWorksRequestCoreFindOrCreateLeaderboard) == 0x0080); // 128 bytes (0x000038 - 0x000080)
static_assert(sizeof(UUWorksRequestCoreFindLeaderboard) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UUWorksRequestCoreDownloadLeaderboardEntries) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UUWorksRequestCoreDownloadLeaderboardEntriesForUsers) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UUWorksRequestCoreUploadLeaderboardScore) == 0x0098); // 152 bytes (0x000038 - 0x000098)
static_assert(sizeof(UUWorksRequestCoreAttachLeaderboardUGC) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UUWorksRequestCoreGetNumberOfCurrentPlayers) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UUWorksRequestCoreRequestGlobalAchievementPercentages) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UUWorksRequestCoreRequestGlobalStats) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UCoreGetFileDetailsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreSetPersonaNameNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreDownloadClanActivityCountsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreRequestClanOfficerListNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreJoinClanChatRoomNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreGetFollowerCountNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreIsFollowingNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreEnumerateFollowingListNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreAssociateWithClanNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreComputeNewPlayerCompatibilityNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreRequestUserStatsGSNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreStoreUserStatsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreRequestEligiblePromoItemDefinitionsIDsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreRequestLobbyListNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreCreateLobbyNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreJoinLobbyNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreServerListNode) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UCorePingNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCorePlayersNode) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UCoreRulesNode) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UCoreFileWriteAsyncNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreFileReadAsyncNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreSendQueryUGCRequestNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreCreateItemNode) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UCoreSubmitItemUpdateNode) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UCoreSetUserItemVoteNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreGetUserItemVoteNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreAddItemToFavoritesNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreRemoveItemFromFavoritesNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreSubscribeItemNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreUnsubscribeItemNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreStartPlaytimeTrackingNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreStopPlaytimeTrackingNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreStopPlaytimeTrackingForAllItemsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreRequestEncryptedAppTicketNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreRequestStoreAuthURLNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreRequestUserStatsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreFindOrCreateLeaderboardNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreFindLeaderboardNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreDownloadLeaderboardEntriesNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreDownloadLeaderboardEntriesForUsersNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreUploadLeaderboardScoreNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreAttachLeaderboardUGCNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreGetNumberOfCurrentPlayersNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreRequestGlobalAchievementPercentagesNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCoreRequestGlobalStatsNode) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FUWorksSteamInventoryResult) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FUWorksServerInfo) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FUWorksPlayerInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FUWorksRuleInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FUWorksScreenshotHandle) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FUWorksUGCQueryHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUWorksTicketHandle) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FUWorksSteamLeaderboard) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUWorksSteamLeaderboardEntries) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUWorksAnnexCoreAppList) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexCoreApps) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksControllerHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUWorksControllerDigitalActionHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUWorksControllerAnalogActionHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUWorksControllerActionSetHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUWorksControllerMotionData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FUWorksControllerDigitalActionData) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FUWorksControllerAnalogActionData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FUWorksAnnexCoreController) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksFriendsGroupID) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FUWorksAnnexCoreFriends) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexCoreGameServer) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexCoreGameServerStats) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksSteamItemDetails) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FUWorksAnnexCoreInventory) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexCoreMatchmaking) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexCoreMatchmakingServers) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexCoreMusic) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksP2PSessionState) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FUWorksAnnexCoreNetworking) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksUGCFileWriteStreamHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUWorksAnnexCoreRemoteStorage) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexCoreScreenshots) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksUGCHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUWorksSteamUGCDetails) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FUWorksUGCUpdateHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUWorksAnnexCoreUGC) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexCoreUser) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksLeaderboardEntry) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FUWorksAnnexCoreUserStats) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexCoreUtils) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksAnnexCoreVideo) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUWorksSteamPipe) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FUWorksSteamUser) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(offsetof(FUWorksServerInfo, Name) == 0x0000);
static_assert(offsetof(FUWorksServerInfo, IP) == 0x0010);
static_assert(offsetof(FUWorksServerInfo, GameDir) == 0x0030);
static_assert(offsetof(FUWorksServerInfo, Map) == 0x0040);
static_assert(offsetof(FUWorksServerInfo, GameDescription) == 0x0050);
static_assert(offsetof(FUWorksServerInfo, GameTags) == 0x0080);
static_assert(offsetof(FUWorksServerInfo, SteamID) == 0x0090);
static_assert(offsetof(FUWorksPlayerInfo, Name) == 0x0000);
static_assert(offsetof(FUWorksRuleInfo, Name) == 0x0000);
static_assert(offsetof(FUWorksRuleInfo, Value) == 0x0010);
static_assert(offsetof(FUWorksControllerAnalogActionData, Mode) == 0x0000);
static_assert(offsetof(FUWorksSteamItemDetails, InstanceID) == 0x0000);
static_assert(offsetof(FUWorksSteamItemDetails, Definition) == 0x0008);
static_assert(offsetof(FUWorksSteamItemDetails, Flags) == 0x0010);
static_assert(offsetof(FUWorksP2PSessionState, P2PSessionError) == 0x0002);
static_assert(offsetof(FUWorksSteamUGCDetails, PublishedFileID) == 0x0000);
static_assert(offsetof(FUWorksSteamUGCDetails, Result) == 0x0008);
static_assert(offsetof(FUWorksSteamUGCDetails, FileType) == 0x0009);
static_assert(offsetof(FUWorksSteamUGCDetails, Title) == 0x0018);
static_assert(offsetof(FUWorksSteamUGCDetails, Description) == 0x0028);
static_assert(offsetof(FUWorksSteamUGCDetails, SteamIDOwner) == 0x0038);
static_assert(offsetof(FUWorksSteamUGCDetails, Visibility) == 0x004C);
static_assert(offsetof(FUWorksSteamUGCDetails, Tags) == 0x0050);
static_assert(offsetof(FUWorksSteamUGCDetails, File) == 0x0060);
static_assert(offsetof(FUWorksSteamUGCDetails, PreviewFile) == 0x0068);
static_assert(offsetof(FUWorksSteamUGCDetails, Filename) == 0x0070);
static_assert(offsetof(FUWorksSteamUGCDetails, URL) == 0x0088);
static_assert(offsetof(FUWorksLeaderboardEntry, SteamID) == 0x0000);
static_assert(offsetof(FUWorksLeaderboardEntry, UGCHandle) == 0x0018);
