
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

#pragma pack(push, 0x1)

/// Enum /Script/Lobby.ELobbyBeaconJoinState
/// Size: 0x01 (1 bytes)
enum class ELobbyBeaconJoinState : uint8_t
{
	ELobbyBeaconJoinState__None                                                      = 0,
	ELobbyBeaconJoinState__SentJoinRequest                                           = 1,
	ELobbyBeaconJoinState__JoinRequestAcknowledged                                   = 2
};

/// Class /Script/Lobby.LobbyBeaconClient
/// Size: 0x0338 (824 bytes) (0x0002B0 - 0x000338) align 8 MaxSize: 0x0338
class ALobbyBeaconClient : public AOnlineBeaconClient
{ 
public:
	class ALobbyBeaconState*                           LobbyState;                                                 // 0x02B0   (0x0008)  
	class ALobbyBeaconPlayerState*                     PlayerState;                                                // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x02C0   (0x0001)  MISSED
	ELobbyBeaconJoinState                              LobbyJoinServerState;                                       // 0x02C1   (0x0001)  
	unsigned char                                      UnknownData01_7[0x76];                                      // 0x02C2   (0x0076)  MISSED


	/// Functions
	// Function /Script/Lobby.LobbyBeaconClient.ServerSetPartyOwner
	// void ServerSetPartyOwner(FUniqueNetIdRepl InUniqueId, FUniqueNetIdRepl InPartyOwnerId);                                  // [0x8836b0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
	// void ServerNotifyJoiningServer();                                                                                        // [0x883660] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerLoginPlayer
	// void ServerLoginPlayer(FString InSessionId, FUniqueNetIdRepl InUniqueId, FString UrlString);                             // [0x8834a0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerKickPlayer
	// void ServerKickPlayer(FUniqueNetIdRepl PlayerToKick, FText Reason);                                                      // [0x883300] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
	// void ServerDisconnectFromLobby();                                                                                        // [0x8832b0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerCheat
	// void ServerCheat(FString Msg);                                                                                           // [0x8831f0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ClientWasKicked
	// void ClientWasKicked(FText KickReason);                                                                                  // [0x883090] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientSetInviteFlags
	// void ClientSetInviteFlags(FJoinabilitySettings Settings);                                                                // [0x882ff0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientPlayerLeft
	// void ClientPlayerLeft(FUniqueNetIdRepl InUniqueId);                                                                      // [0x882f00] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientPlayerJoined
	// void ClientPlayerJoined(FText NewPlayerName, FUniqueNetIdRepl InUniqueId);                                               // [0x882d80] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientLoginComplete
	// void ClientLoginComplete(FUniqueNetIdRepl InUniqueId, bool bWasSuccessful);                                              // [0x882c50] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientJoinGame
	// void ClientJoinGame();                                                                                                   // [0x882c30] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientAckJoiningServer
	// void ClientAckJoiningServer();                                                                                           // [0x882c10] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/Lobby.LobbyBeaconHost
/// Size: 0x0280 (640 bytes) (0x000248 - 0x000280) align 8 MaxSize: 0x0280
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0248   (0x0008)  MISSED
	TSoftObjectPtr<class UClass*>                      LobbyStateClass;                                            // 0x0250   (0x0028)  
	class ALobbyBeaconState*                           LobbyState;                                                 // 0x0278   (0x0008)  
};

/// Class /Script/Lobby.LobbyBeaconPlayerState
/// Size: 0x02E0 (736 bytes) (0x000220 - 0x0002E0) align 8 MaxSize: 0x02E0
class ALobbyBeaconPlayerState : public AInfo
{ 
public:
	FText                                              DisplayName;                                                // 0x0220   (0x0018)  
	FUniqueNetIdRepl                                   UniqueId;                                                   // 0x0238   (0x0028)  
	FUniqueNetIdRepl                                   PartyOwnerUniqueId;                                         // 0x0260   (0x0028)  
	bool                                               bInLobby;                                                   // 0x0288   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0289   (0x0007)  MISSED
	class AOnlineBeaconClient*                         ClientActor;                                                // 0x0290   (0x0008)  
	unsigned char                                      UnknownData01_7[0x48];                                      // 0x0298   (0x0048)  MISSED


	/// Functions
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
	// void OnRep_UniqueId();                                                                                                   // [0x8831b0] Final|Native|Protected 
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
	// void OnRep_PartyOwner();                                                                                                 // [0x883190] Final|Native|Protected 
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_InLobby
	// void OnRep_InLobby();                                                                                                    // [0x883150] Final|Native|Protected 
};

/// Struct /Script/Lobby.LobbyPlayerStateActorInfo
/// Size: 0x0018 (24 bytes) (0x00000C - 0x000018) align 8 MaxSize: 0x0018
struct FLobbyPlayerStateActorInfo : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x000C   (0x0004)  MISSED
	class ALobbyBeaconPlayerState*                     LobbyPlayerState;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/Lobby.LobbyPlayerStateInfoArray
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000120) align 8 MaxSize: 0x0120
struct FLobbyPlayerStateInfoArray : FFastArraySerializer
{ 
	TArray<FLobbyPlayerStateActorInfo>                 Players;                                                    // 0x0108   (0x0010)  
	class ALobbyBeaconState*                           ParentState;                                                // 0x0118   (0x0008)  
};

/// Class /Script/Lobby.LobbyBeaconState
/// Size: 0x03C8 (968 bytes) (0x000220 - 0x0003C8) align 8 MaxSize: 0x03C8
class ALobbyBeaconState : public AInfo
{ 
public:
	int32_t                                            MaxPlayers;                                                 // 0x0220   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0224   (0x0004)  MISSED
	class UClass*                                      LobbyBeaconPlayerStateClass;                                // 0x0228   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0230   (0x0008)  MISSED
	bool                                               bLobbyStarted;                                              // 0x0238   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0239   (0x0003)  MISSED
	float                                              WaitForPlayersTimeRemaining;                                // 0x023C   (0x0004)  
	FLobbyPlayerStateInfoArray                         Players;                                                    // 0x0240   (0x0120)  
	unsigned char                                      UnknownData03_7[0x68];                                      // 0x0360   (0x0068)  MISSED


	/// Functions
	// Function /Script/Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
	// void OnRep_WaitForPlayersTimeRemaining();                                                                                // [0x8831d0] Final|Native|Protected 
	// Function /Script/Lobby.LobbyBeaconState.OnRep_LobbyStarted
	// void OnRep_LobbyStarted();                                                                                               // [0x883170] Final|Native|Protected 
};

#pragma pack(pop)


static_assert(sizeof(ALobbyBeaconClient) == 0x0338); // 824 bytes (0x0002B0 - 0x000338)
static_assert(sizeof(ALobbyBeaconHost) == 0x0280); // 640 bytes (0x000248 - 0x000280)
static_assert(sizeof(ALobbyBeaconPlayerState) == 0x02E0); // 736 bytes (0x000220 - 0x0002E0)
static_assert(sizeof(FLobbyPlayerStateActorInfo) == 0x0018); // 24 bytes (0x00000C - 0x000018)
static_assert(sizeof(FLobbyPlayerStateInfoArray) == 0x0120); // 288 bytes (0x000108 - 0x000120)
static_assert(sizeof(ALobbyBeaconState) == 0x03C8); // 968 bytes (0x000220 - 0x0003C8)
static_assert(offsetof(ALobbyBeaconClient, LobbyState) == 0x02B0);
static_assert(offsetof(ALobbyBeaconClient, PlayerState) == 0x02B8);
static_assert(offsetof(ALobbyBeaconClient, LobbyJoinServerState) == 0x02C1);
static_assert(offsetof(ALobbyBeaconHost, LobbyStateClass) == 0x0250);
static_assert(offsetof(ALobbyBeaconHost, LobbyState) == 0x0278);
static_assert(offsetof(ALobbyBeaconPlayerState, DisplayName) == 0x0220);
static_assert(offsetof(ALobbyBeaconPlayerState, UniqueId) == 0x0238);
static_assert(offsetof(ALobbyBeaconPlayerState, PartyOwnerUniqueId) == 0x0260);
static_assert(offsetof(ALobbyBeaconPlayerState, ClientActor) == 0x0290);
static_assert(offsetof(FLobbyPlayerStateActorInfo, LobbyPlayerState) == 0x0010);
static_assert(offsetof(FLobbyPlayerStateInfoArray, Players) == 0x0108);
static_assert(offsetof(FLobbyPlayerStateInfoArray, ParentState) == 0x0118);
static_assert(offsetof(ALobbyBeaconState, LobbyBeaconPlayerStateClass) == 0x0228);
static_assert(offsetof(ALobbyBeaconState, Players) == 0x0240);
