
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UWorksCore

#pragma pack(push, 0x1)

/// Class /Script/KovaaKNetworkUtils.Send_SteamAuthTokenRequest
/// Size: 0x00D8 (216 bytes) (0x000030 - 0x0000D8) align 8 MaxSize: 0x00D8
class USend_SteamAuthTokenRequest : public UBlueprintAsyncActionBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x58];                                      // 0x0030   (0x0058)  MISSED
	SDK_UNDEFINED(16,907) /* FMulticastInlineDelegate */ __um(Receive_Success_K2);                                 // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,908) /* FMulticastInlineDelegate */ __um(Receive_Error_K2);                                   // 0x0098   (0x0010)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x00A8   (0x0030)  MISSED


	/// Functions
	// Function /Script/KovaaKNetworkUtils.Send_SteamAuthTokenRequest.Send_SteamAuthTokenRequest
	// class USend_SteamAuthTokenRequest* Send_SteamAuthTokenRequest(class UObject* WorldContextObject, float InTimeOutSeconds); // [0xed53c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KovaaKNetworkUtils.Send_SteamAuthTokenRequest.Invoke_Success
	// void Invoke_Success(FString InAuthToken);                                                                                // [0xed5320] Final|Native|Protected|BlueprintCallable 
	// Function /Script/KovaaKNetworkUtils.Send_SteamAuthTokenRequest.Invoke_Error
	// void Invoke_Error(EUWorksResult SteamServerErrorCode);                                                                   // [0xed52a0] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/KovaaKNetworkUtils.Send_SteamAuthTokenRequestParams
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSend_SteamAuthTokenRequestParams
{ 
	FTimespan                                          Timeout;                                                    // 0x0000   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(USend_SteamAuthTokenRequest) == 0x00D8); // 216 bytes (0x000030 - 0x0000D8)
static_assert(sizeof(FSend_SteamAuthTokenRequestParams) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(FSend_SteamAuthTokenRequestParams, Timeout) == 0x0000);
