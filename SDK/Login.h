
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Common
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG
/// dependency: XsollaLogin
/// dependency: XsollaWebBrowser

#pragma pack(push, 0x1)

/// Class /Xsolla/Login/Components/W_LoginBrowser.W_LoginBrowser_C
/// Size: 0x0288 (648 bytes) (0x000260 - 0x000288) align 8 MaxSize: 0x0288
class UW_LoginBrowser_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UW_ButtonWrapper_C*                          W_ButtonWrapper_Close;                                      // 0x0268   (0x0008)  
	class UXsollaWebBrowser*                           XsollaWebBrowser;                                           // 0x0270   (0x0008)  
	SDK_UNDEFINED(16,955) /* FMulticastInlineDelegate */ __um(Browser_Closed);                                     // 0x0278   (0x0010)  


	/// Functions
	// Function /Xsolla/Login/Components/W_LoginBrowser.W_LoginBrowser_C.OnCodeExchangeSuccess
	// void OnCodeExchangeSuccess(FXsollaLoginData& LoginData);                                                                 // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Login/Components/W_LoginBrowser.W_LoginBrowser_C.OnCodeExchangeError
	// void OnCodeExchangeError(FString Code, FString Description);                                                             // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Login/Components/W_LoginBrowser.W_LoginBrowser_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Login/Components/W_LoginBrowser.W_LoginBrowser_C.BndEvt__XsollaWebBrowser_42_K2Node_ComponentBoundEvent_2_OnUrlChanged__DelegateSignature
	// void BndEvt__XsollaWebBrowser_42_K2Node_ComponentBoundEvent_2_OnUrlChanged__DelegateSignature(FText& Text);              // [0x18d2100] HasOutParms|BlueprintEvent 
	// Function /Xsolla/Login/Components/W_LoginBrowser.W_LoginBrowser_C.BndEvt__W_LoginBrowser_W_ButtonWrapper_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	// void BndEvt__W_LoginBrowser_W_ButtonWrapper_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();                 // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Login/Components/W_LoginBrowser.W_LoginBrowser_C.ExecuteUbergraph_W_LoginBrowser
	// void ExecuteUbergraph_W_LoginBrowser(int32_t EntryPoint);                                                                // [0x18d2100] Final|HasDefaults    
	// Function /Xsolla/Login/Components/W_LoginBrowser.W_LoginBrowser_C.Browser Closed__DelegateSignature
	// void BrowserClosed__DelegateSignature(bool AuthenticationCompleted);                                                     // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(UW_LoginBrowser_C) == 0x0288); // 648 bytes (0x000260 - 0x000288)
static_assert(offsetof(UW_LoginBrowser_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_LoginBrowser_C, W_ButtonWrapper_Close) == 0x0268);
static_assert(offsetof(UW_LoginBrowser_C, XsollaWebBrowser) == 0x0270);
