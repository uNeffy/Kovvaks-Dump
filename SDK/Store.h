
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
/// dependency: XsollaWebBrowser

#pragma pack(push, 0x1)

/// Class /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C
/// Size: 0x02C9 (713 bytes) (0x000260 - 0x0002C9) align 8 MaxSize: 0x02C9
class UW_StoreBrowser_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UButton*                                     Button_Back;                                                // 0x0268   (0x0008)  
	class UButton*                                     Button_Close;                                               // 0x0270   (0x0008)  
	class UCircularThrobber*                           CircularThrobber_Loader;                                    // 0x0278   (0x0008)  
	class UXsollaWebBrowser*                           XsollaWebBrowser_Browser;                                   // 0x0280   (0x0008)  
	SDK_UNDEFINED(16,966) /* FMulticastInlineDelegate */ __um(Broswer_Closed);                                     // 0x0288   (0x0010)  
	int32_t                                            RemainingAttempt;                                           // 0x0298   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x029C   (0x0004)  MISSED
	FTimerHandle                                       AttemptTimer;                                               // 0x02A0   (0x0008)  
	FString                                            CurrentPayStationUrl;                                       // 0x02A8   (0x0010)  
	FString                                            PopupUrl;                                                   // 0x02B8   (0x0010)  
	bool                                               ShowBackButtonAfterLoad;                                    // 0x02C8   (0x0001)  


	/// Functions
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.ShowLoadedBrowser
	// void ShowLoadedBrowser();                                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.HideLoader
	// void HideLoader();                                                                                                       // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.ShowBrowser
	// void ShowBrowser();                                                                                                      // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.ProcessFirstLoading
	// void ProcessFirstLoading();                                                                                              // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.PrintDebugInfo
	// void PrintDebugInfo();                                                                                                   // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.StartAttemptStatusTimer
	// void StartAttemptStatusTimer();                                                                                          // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.IsAnyStatusInUrl
	// void IsAnyStatusInUrl(bool& bIsAnyStatus);                                                                               // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.IsUrlStatusDone
	// void IsUrlStatusDone(bool& bIsDone);                                                                                     // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.FinishAttemptBySuccess
	// void FinishAttemptBySuccess();                                                                                           // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.FinishAttemptByCount
	// void FinishAttemptByCount();                                                                                             // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.ProcessAttemptTick
	// void ProcessAttemptTick();                                                                                               // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.ClearAttemptTimer
	// void ClearAttemptTimer();                                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.FinishPurchaseByExit
	// void FinishPurchaseByExit();                                                                                             // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.RefreshWidget
	// void RefreshWidget();                                                                                                    // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.HasPurchaseFinished
	// void HasPurchaseFinished(bool& bReturnValue);                                                                            // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.CheckAndHandleDonePurchase
	// void CheckAndHandleDonePurchase();                                                                                       // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.BndEvt__Button_171_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_171_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                          // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.CheckAndHandleUrlStatus
	// void CheckAndHandleUrlStatus();                                                                                          // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.CheckAndHandleAttempt
	// void CheckAndHandleAttempt();                                                                                            // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.EventVisibilityChanged
	// void EventVisibilityChanged(ESlateVisibility InVisibility);                                                              // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.BndEvt__XsollaWebBrowser_Browser_K2Node_ComponentBoundEvent_1_OnPageLoaded__DelegateSignature
	// void BndEvt__XsollaWebBrowser_Browser_K2Node_ComponentBoundEvent_1_OnPageLoaded__DelegateSignature();                    // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.BndEvt__W_StoreBrowser_XsollaWebBrowser_Browser_K2Node_ComponentBoundEvent_2_OnUrlChanged__DelegateSignature
	// void BndEvt__W_StoreBrowser_XsollaWebBrowser_Browser_K2Node_ComponentBoundEvent_2_OnUrlChanged__DelegateSignature(FText& Text); // [0x18d2100] HasOutParms|BlueprintEvent 
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.BndEvt__W_StoreBrowser_XsollaWebBrowser_Browser_K2Node_ComponentBoundEvent_3_OnBeforePopup__DelegateSignature
	// void BndEvt__W_StoreBrowser_XsollaWebBrowser_Browser_K2Node_ComponentBoundEvent_3_OnBeforePopup__DelegateSignature(FString URL, FString Frame); // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.BndEvt__W_StoreBrowser_Button_Back_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__W_StoreBrowser_Button_Back_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();          // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.ExecuteUbergraph_W_StoreBrowser
	// void ExecuteUbergraph_W_StoreBrowser(int32_t EntryPoint);                                                                // [0x18d2100] Final|HasDefaults    
	// Function /Xsolla/Store/Components/W_StoreBrowser.W_StoreBrowser_C.Broswer Closed__DelegateSignature
	// void BroswerClosed__DelegateSignature();                                                                                 // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(UW_StoreBrowser_C) == 0x02C9); // 713 bytes (0x000260 - 0x0002C9)
static_assert(offsetof(UW_StoreBrowser_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_StoreBrowser_C, Button_Back) == 0x0268);
static_assert(offsetof(UW_StoreBrowser_C, Button_Close) == 0x0270);
static_assert(offsetof(UW_StoreBrowser_C, CircularThrobber_Loader) == 0x0278);
static_assert(offsetof(UW_StoreBrowser_C, XsollaWebBrowser_Browser) == 0x0280);
static_assert(offsetof(UW_StoreBrowser_C, AttemptTimer) == 0x02A0);
static_assert(offsetof(UW_StoreBrowser_C, CurrentPayStationUrl) == 0x02A8);
static_assert(offsetof(UW_StoreBrowser_C, PopupUrl) == 0x02B8);
