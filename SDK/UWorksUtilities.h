
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: UWorks
/// dependency: UWorksCore

#pragma pack(push, 0x1)

/// Class /Script/UWorksUtilities.UWorksLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksLibrary : public UUWorks
{ 
public:
};

/// Class /Script/UWorksUtilities.UWorksLibraryConversions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksLibraryConversions : public UUWorksLibrary
{ 
public:


	/// Functions
	// Function /Script/UWorksUtilities.UWorksLibraryConversions.GetCurrentProcessId
	// FString GetCurrentProcessId();                                                                                           // [0xac38e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryConversions.ConvertStringToBytes
	// TArray<char> ConvertStringToBytes(FString data);                                                                         // [0xac37b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryConversions.ConvertBytesToString
	// FString ConvertBytesToString(TArray<char> data);                                                                         // [0xac3690] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/UWorksUtilities.UWorksLibraryGameID
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksLibraryGameID : public UUWorksLibrary
{ 
public:


	/// Functions
	// Function /Script/UWorksUtilities.UWorksLibraryGameID.SetIdentifier
	// void SetIdentifier(FUWorksGameID& GameID, FString Identifier);                                                           // [0xac4580] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksUtilities.UWorksLibraryGameID.Reset
	// void Reset(FUWorksGameID& GameID);                                                                                       // [0xac4500] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksUtilities.UWorksLibraryGameID.IsValid
	// bool IsValid(FUWorksGameID GameID);                                                                                      // [0xac4470] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryGameID.IsSteamApp
	// bool IsSteamApp(FUWorksGameID GameID);                                                                                   // [0xac43e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryGameID.IsShortcut
	// bool IsShortcut(FUWorksGameID GameID);                                                                                   // [0xac4350] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryGameID.IsP2PFile
	// bool IsP2PFile(FUWorksGameID GameID);                                                                                    // [0xac42c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryGameID.IsMod
	// bool IsMod(FUWorksGameID GameID);                                                                                        // [0xac4230] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryGameID.IsIdenticalWith
	// bool IsIdenticalWith(FUWorksGameID A, FUWorksGameID B);                                                                  // [0xac4160] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryGameID.GetModID
	// int32_t GetModID(FUWorksGameID GameID);                                                                                  // [0xac40d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryGameID.GetIdentifier
	// FString GetIdentifier(FUWorksGameID GameID);                                                                             // [0xac4000] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryGameID.GetAppID
	// int32_t GetAppID(FUWorksGameID GameID);                                                                                  // [0xac3f70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersC
	// FUWorksGameID ConstructFromParametersC(int32_t AppID, int32_t ModID);                                                    // [0xac3eb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersB
	// FUWorksGameID ConstructFromParametersB(int32_t AppID);                                                                   // [0xac3e20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersA
	// FUWorksGameID ConstructFromParametersA(FString Identifier);                                                              // [0xac3d30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/UWorksUtilities.UWorksLibraryLex
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksLibraryLex : public UUWorksLibrary
{ 
public:


	/// Functions
	// Function /Script/UWorksUtilities.UWorksLibraryLex.WriteUGCUpdateHandle
	// FUWorksUGCUpdateHandle WriteUGCUpdateHandle(FString Value);                                                              // [0xac52c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.WriteUGCQueryHandle
	// FUWorksUGCQueryHandle WriteUGCQueryHandle(FString Value);                                                                // [0xac52c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.WriteUGCHandle
	// FUWorksUGCHandle WriteUGCHandle(FString Value);                                                                          // [0xac52c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.WriteUGCFileWriteStreamHandle
	// FUWorksUGCFileWriteStreamHandle WriteUGCFileWriteStreamHandle(FString Value);                                            // [0xac52c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.WriteTicketHandle
	// FUWorksTicketHandle WriteTicketHandle(FString Value);                                                                    // [0xac54a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.WriteSteamUser
	// FUWorksSteamUser WriteSteamUser(FString Value);                                                                          // [0xac5590] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.WriteSteamPipe
	// FUWorksSteamPipe WriteSteamPipe(FString Value);                                                                          // [0xac5590] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.WriteSteamLeaderboardEntries
	// FUWorksSteamLeaderboardEntries WriteSteamLeaderboardEntries(FString Value);                                              // [0xac52c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.WriteSteamLeaderboard
	// FUWorksSteamLeaderboard WriteSteamLeaderboard(FString Value);                                                            // [0xac52c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.WriteSteamInventoryResult
	// FUWorksSteamInventoryResult WriteSteamInventoryResult(FString Value);                                                    // [0xac5590] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.WriteScreenshotHandle
	// FUWorksScreenshotHandle WriteScreenshotHandle(FString Value);                                                            // [0xac54a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.WriteFriendsGroupID
	// FUWorksFriendsGroupID WriteFriendsGroupID(FString Value);                                                                // [0xac53b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.WriteControllerHandle
	// FUWorksControllerHandle WriteControllerHandle(FString Value);                                                            // [0xac52c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.WriteControllerDigitalActionHandle
	// FUWorksControllerDigitalActionHandle WriteControllerDigitalActionHandle(FString Value);                                  // [0xac52c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.WriteControllerAnalogActionHandle
	// FUWorksControllerAnalogActionHandle WriteControllerAnalogActionHandle(FString Value);                                    // [0xac52c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.WriteControllerActionSetHandle
	// FUWorksControllerActionSetHandle WriteControllerActionSetHandle(FString Value);                                          // [0xac52c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.ReadUGCUpdateHandle
	// FString ReadUGCUpdateHandle(FUWorksUGCUpdateHandle Value);                                                               // [0xac4de0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.ReadUGCQueryHandle
	// FString ReadUGCQueryHandle(FUWorksUGCQueryHandle Value);                                                                 // [0xac4de0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.ReadUGCHandle
	// FString ReadUGCHandle(FUWorksUGCHandle Value);                                                                           // [0xac51f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.ReadUGCFileWriteStreamHandle
	// FString ReadUGCFileWriteStreamHandle(FUWorksUGCFileWriteStreamHandle Value);                                             // [0xac4de0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.ReadTicketHandle
	// FString ReadTicketHandle(FUWorksTicketHandle Value);                                                                     // [0xac4f80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.ReadSteamUser
	// FString ReadSteamUser(FUWorksSteamUser Value);                                                                           // [0xac5120] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.ReadSteamPipe
	// FString ReadSteamPipe(FUWorksSteamPipe Value);                                                                           // [0xac5120] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.ReadSteamLeaderboardEntries
	// FString ReadSteamLeaderboardEntries(FUWorksSteamLeaderboardEntries Value);                                               // [0xac4de0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.ReadSteamLeaderboard
	// FString ReadSteamLeaderboard(FUWorksSteamLeaderboard Value);                                                             // [0xac4de0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.ReadSteamInventoryResult
	// FString ReadSteamInventoryResult(FUWorksSteamInventoryResult Value);                                                     // [0xac5050] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.ReadScreenshotHandle
	// FString ReadScreenshotHandle(FUWorksScreenshotHandle Value);                                                             // [0xac4f80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.ReadFriendsGroupID
	// FString ReadFriendsGroupID(FUWorksFriendsGroupID Value);                                                                 // [0xac4eb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.ReadControllerHandle
	// FString ReadControllerHandle(FUWorksControllerHandle Value);                                                             // [0xac4de0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.ReadControllerDigitalActionHandle
	// FString ReadControllerDigitalActionHandle(FUWorksControllerDigitalActionHandle Value);                                   // [0xac4de0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.ReadControllerAnalogActionHandle
	// FString ReadControllerAnalogActionHandle(FUWorksControllerAnalogActionHandle Value);                                     // [0xac4de0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibraryLex.ReadControllerActionSetHandle
	// FString ReadControllerActionSetHandle(FUWorksControllerActionSetHandle Value);                                           // [0xac4de0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/UWorksUtilities.UWorksLibrarySteamID
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksLibrarySteamID : public UUWorksLibrary
{ 
public:


	/// Functions
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.SetUniverse
	// void SetUniverse(FUWorksSteamID& SteamID, EUWorksUniverse Universe);                                                     // [0xac7820] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.SetParametersC
	// void SetParametersC(FUWorksSteamID& SteamID, EUWorksUniverse Universe, EUWorksAccountType AccountType, FString AccountID, FString AccountInstance); // [0xac75e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.SetParametersB
	// void SetParametersB(FUWorksSteamID& SteamID, EUWorksUniverse Universe, EUWorksAccountType AccountType, FString AccountID); // [0xac7430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.SetParametersA
	// void SetParametersA(FUWorksSteamID& SteamID, EUWorksUniverse Universe, EUWorksAccountType AccountType, FString Identifier); // [0xac7280] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.SetIdentifier
	// void SetIdentifier(FUWorksSteamID& SteamID, FString Identifier);                                                         // [0xac7150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.SetAccountInstance
	// void SetAccountInstance(FUWorksSteamID& SteamID, FString AccountInstance);                                               // [0xac7020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.SetAccountID
	// void SetAccountID(FUWorksSteamID& SteamID, FString AccountID);                                                           // [0xac6ef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.IsValid
	// bool IsValid(FUWorksSteamID SteamID);                                                                                    // [0xac6e60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.IsPersistentGameServerAccount
	// bool IsPersistentGameServerAccount(FUWorksSteamID SteamID);                                                              // [0xac6dd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.IsLobby
	// bool IsLobby(FUWorksSteamID SteamID);                                                                                    // [0xac6d40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.IsIndividualAccount
	// bool IsIndividualAccount(FUWorksSteamID SteamID);                                                                        // [0xac6cb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.IsIdenticalWith
	// bool IsIdenticalWith(FUWorksSteamID A, FUWorksSteamID B);                                                                // [0xac4160] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.IsGameServerAccount
	// bool IsGameServerAccount(FUWorksSteamID SteamID);                                                                        // [0xac6c20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.IsContentServerAccount
	// bool IsContentServerAccount(FUWorksSteamID SteamID);                                                                     // [0xac6b90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.IsConsoleUserAccount
	// bool IsConsoleUserAccount(FUWorksSteamID SteamID);                                                                       // [0xac6b00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.IsClanAccount
	// bool IsClanAccount(FUWorksSteamID SteamID);                                                                              // [0xac6a70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.IsChatAccount
	// bool IsChatAccount(FUWorksSteamID SteamID);                                                                              // [0xac69e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.IsBlankAnonAccount
	// bool IsBlankAnonAccount(FUWorksSteamID SteamID);                                                                         // [0xac6950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.IsAnonUserAccount
	// bool IsAnonUserAccount(FUWorksSteamID SteamID);                                                                          // [0xac68c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.IsAnonGameServerAccount
	// bool IsAnonGameServerAccount(FUWorksSteamID SteamID);                                                                    // [0xac6830] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.IsAnonAccount
	// bool IsAnonAccount(FUWorksSteamID SteamID);                                                                              // [0xac67a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.GetUniverse
	// EUWorksUniverse GetUniverse(FUWorksSteamID SteamID);                                                                     // [0xac6710] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.GetStaticAccountKey
	// FString GetStaticAccountKey(FUWorksSteamID SteamID);                                                                     // [0xac6640] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.GetIdentifier
	// FString GetIdentifier(FUWorksSteamID SteamID);                                                                           // [0xac4000] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.GetAccountType
	// EUWorksAccountType GetAccountType(FUWorksSteamID SteamID);                                                               // [0xac65b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.GetAccountInstance
	// FString GetAccountInstance(FUWorksSteamID SteamID);                                                                      // [0xac64e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.GetAccountID
	// FString GetAccountID(FUWorksSteamID SteamID);                                                                            // [0xac6410] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.CreateBlankAnonUserLogon
	// void CreateBlankAnonUserLogon(FUWorksSteamID& SteamID, EUWorksUniverse Universe);                                        // [0xac6340] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.CreateBlankAnonLogon
	// void CreateBlankAnonLogon(FUWorksSteamID& SteamID, EUWorksUniverse Universe);                                            // [0xac6270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersC
	// FUWorksSteamID ConstructFromParametersC(EUWorksUniverse Universe, EUWorksAccountType AccountType, FString AccountID, FString AccountInstance); // [0xac6080] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersB
	// FUWorksSteamID ConstructFromParametersB(EUWorksUniverse Universe, EUWorksAccountType AccountType, FString AccountID);    // [0xac5f10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersA
	// FUWorksSteamID ConstructFromParametersA(FString Identifier);                                                             // [0xac3d30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.ClearIndividualInstance
	// void ClearIndividualInstance(FUWorksSteamID& SteamID);                                                                   // [0xac5e90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UWorksUtilities.UWorksLibrarySteamID.Clear
	// void Clear(FUWorksSteamID& SteamID);                                                                                     // [0xac5e10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UWorksUtilities.UWorksLibraryTickets
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksLibraryTickets : public UUWorksLibrary
{ 
public:
};

/// Class /Script/UWorksUtilities.UWorksManager
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUWorksManager : public UUWorks
{ 
public:
};

/// Class /Script/UWorksUtilities.UWorksManagerNetwork
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UUWorksManagerNetwork : public UUWorksManager
{ 
public:
	unsigned char                                      UnknownData00_8[0x58];                                      // 0x0028   (0x0058)  MISSED
	SDK_UNDEFINED(16,986) /* FMulticastInlineDelegate */ __um(RefreshComplete);                                    // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/UWorksUtilities.UWorksManagerNetwork.Refresh
	// void Refresh();                                                                                                          // [0xac7df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UWorksUtilities.UWorksManagerNetwork.GetNetDriverClassName
	// FString GetNetDriverClassName();                                                                                         // [0xac7d70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksManagerNetwork.GetManagerNetwork
	// class UUWorksManagerNetwork* GetManagerNetwork();                                                                        // [0xac7d40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UWorksUtilities.UWorksManagerNetwork.CreateSessionUWorks
	// void CreateSessionUWorks(FName SessionName, int32_t NumPublicConnections, bool bIsLANMatch);                             // [0xac7c30] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UUWorksLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksLibraryConversions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksLibraryGameID) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksLibraryLex) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksLibrarySteamID) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksLibraryTickets) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUWorksManagerNetwork) == 0x0090); // 144 bytes (0x000028 - 0x000090)
