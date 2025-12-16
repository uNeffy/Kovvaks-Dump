
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FirstPersonBP
/// dependency: GameSkillsTrainer
/// dependency: KovaaKCoreModels
/// dependency: KovaaKProfileModels
/// dependency: SlateCore
/// dependency: UMG
/// dependency: XsollaWebBrowser

#pragma pack(push, 0x1)

/// Class /Game/UI/MetaGraphWidget.MetaGraphWidget_C
/// Size: 0x0350 (848 bytes) (0x000350 - 0x000350) align 8 MaxSize: 0x0350
class UMetaGraphWidget_C : public UTheMetaUIView
{ 
public:
};

/// Class /Game/UI/WBP_XsollaWebBrowser.WBP_XsollaWebBrowser_C
/// Size: 0x02B0 (688 bytes) (0x000288 - 0x0002B0) align 8 MaxSize: 0x02B0
class UWBP_XsollaWebBrowser_C : public UXsollaWebBrowserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0288   (0x0008)  
	class UImage*                                      BlurColor;                                                  // 0x0290   (0x0008)  
	class UXsollaWebBrowser*                           Browser;                                                    // 0x0298   (0x0008)  
	class UUIR_SmallButton_C*                          CloseButton;                                                // 0x02A0   (0x0008)  
	class UUIR_TextBlock_C*                            ErrorText;                                                  // 0x02A8   (0x0008)  


	/// Functions
	// Function /Game/UI/WBP_XsollaWebBrowser.WBP_XsollaWebBrowser_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/WBP_XsollaWebBrowser.WBP_XsollaWebBrowser_C.LoadUrl
	// void LoadUrl(FString URL);                                                                                               // [0x18d2100] Event|Public|BlueprintEvent 
	// Function /Game/UI/WBP_XsollaWebBrowser.WBP_XsollaWebBrowser_C.ShowError
	// void ShowError();                                                                                                        // [0x18d2100] Event|Public|BlueprintEvent 
	// Function /Game/UI/WBP_XsollaWebBrowser.WBP_XsollaWebBrowser_C.OnUrlChanged_Event
	// void OnUrlChanged_Event(FText& Text);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/WBP_XsollaWebBrowser.WBP_XsollaWebBrowser_C.BndEvt__WBP_XsollaWebBrowser_UIR_SmallButton_C_120_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__WBP_XsollaWebBrowser_UIR_SmallButton_C_120_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // [0x18d2100] BlueprintEvent       
	// Function /Game/UI/WBP_XsollaWebBrowser.WBP_XsollaWebBrowser_C.OnBeforePopup_Event
	// void OnBeforePopup_Event(FString URL, FString Frame);                                                                    // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/WBP_XsollaWebBrowser.WBP_XsollaWebBrowser_C.ExecuteUbergraph_WBP_XsollaWebBrowser
	// void ExecuteUbergraph_WBP_XsollaWebBrowser(int32_t EntryPoint);                                                          // [0x18d2100] Final|HasDefaults    
};

/// Class /Game/UI/BP_GameplayHud.BP_GameplayHud_C
/// Size: 0x0730 (1840 bytes) (0x000720 - 0x000730) align 8 MaxSize: 0x0730
class ABP_GameplayHud_C : public AMetaGameplayHud
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0720   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0728   (0x0008)  


	/// Functions
	// Function /Game/UI/BP_GameplayHud.BP_GameplayHud_C.PauseGame
	// void PauseGame();                                                                                                        // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/BP_GameplayHud.BP_GameplayHud_C.ShowSandboxPauseMenu
	// void ShowSandboxPauseMenu();                                                                                             // [0x18d2100] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/BP_GameplayHud.BP_GameplayHud_C.PlayerUIHotbarSetSlots
	// void PlayerUIHotbarSetSlots();                                                                                           // [0x18d2100] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/BP_GameplayHud.BP_GameplayHud_C.DisplayAccuracyKillSessionStats
	// void DisplayAccuracyKillSessionStats(float DamageDone, float DamagePossible, int32_t SessionHits, int32_t SessionShots, float KillCount); // [0x18d2100] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/BP_GameplayHud.BP_GameplayHud_C.SetChargeBorderVisibility
	// void SetChargeBorderVisibility(ESlateVisibility Value);                                                                  // [0x18d2100] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/BP_GameplayHud.BP_GameplayHud_C.SetScopeChoice
	// void SetScopeChoice(EScopeChoicesNative ScopeChoice);                                                                    // [0x18d2100] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/BP_GameplayHud.BP_GameplayHud_C.DisplayAccuracy
	// void DisplayAccuracy(float DamageDone, float DamagePossible, int32_t KillHits, int32_t KillShots, int32_t OverShots, FWeaponProfileNative& WeaponProfile, FTimespan& TTK); // [0x18d2100] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/BP_GameplayHud.BP_GameplayHud_C.KillToast
	// void KillToast(FText& Text);                                                                                             // [0x18d2100] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/BP_GameplayHud.BP_GameplayHud_C.DisplayChallengeEndScreen
	// void DisplayChallengeEndScreen(FScoreNative& Score, float PreviousBestScore, bool bHasPrevBestScore, bool bCheatsDetected); // [0x18d2100] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/BP_GameplayHud.BP_GameplayHud_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x18d2100] Event|Protected|BlueprintEvent 
	// Function /Game/UI/BP_GameplayHud.BP_GameplayHud_C.ExecuteUbergraph_BP_GameplayHud
	// void ExecuteUbergraph_BP_GameplayHud(int32_t EntryPoint);                                                                // [0x18d2100] Final                
};

/// Class /Game/UI/Messages/BP_MessageEqu8Widget.BP_MessageEqu8Widget_C
/// Size: 0x0278 (632 bytes) (0x000268 - 0x000278) align 8 MaxSize: 0x0278
class UBP_MessageEqu8Widget_C : public UMessageEqu8Widget
{ 
public:
	class UPalettedBorderWidget_C*                     PalettedBorderWidget;                                       // 0x0268   (0x0008)  
	class UUIR_SmallText_C*                            UIR_SmallText_C;                                            // 0x0270   (0x0008)  
};

/// Class /Game/UI/WBP_FreeWeekPopup.WBP_FreeWeekPopup_C
/// Size: 0x0290 (656 bytes) (0x000260 - 0x000290) align 8 MaxSize: 0x0290
class UWBP_FreeWeekPopup_C : public UFreeWeekPopupWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UPalettedBorderWidget_C*                     Border;                                                     // 0x0268   (0x0008)  
	class UPalettedBoxButtonWidget_C*                  CloseButton;                                                // 0x0270   (0x0008)  
	class UDraggableHeaderBar_C*                       DraggableHeaderBar;                                         // 0x0278   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0280   (0x0008)  
	class UImage*                                      Image0;                                                     // 0x0288   (0x0008)  


	/// Functions
	// Function /Game/UI/WBP_FreeWeekPopup.WBP_FreeWeekPopup_C.ClickOnImage
	// FEventReply ClickOnImage(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                               // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/WBP_FreeWeekPopup.WBP_FreeWeekPopup_C.BndEvt__WBP_FreeWeekPopup_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	// void BndEvt__WBP_FreeWeekPopup_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();                  // [0x18d2100] BlueprintEvent       
	// Function /Game/UI/WBP_FreeWeekPopup.WBP_FreeWeekPopup_C.GoToSteamPage
	// void GoToSteamPage();                                                                                                    // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/WBP_FreeWeekPopup.WBP_FreeWeekPopup_C.ExecuteUbergraph_WBP_FreeWeekPopup
	// void ExecuteUbergraph_WBP_FreeWeekPopup(int32_t EntryPoint);                                                             // [0x18d2100] Final                
};

/// Class /Game/UI/TheMetaUI.TheMetaUI_C
/// Size: 0x0370 (880 bytes) (0x000368 - 0x000370) align 8 MaxSize: 0x0370
class UTheMetaUI_C : public UTheMetaUiWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0368   (0x0008)  


	/// Functions
	// Function /Game/UI/TheMetaUI.TheMetaUI_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/TheMetaUI.TheMetaUI_C.ExecuteUbergraph_TheMetaUI
	// void ExecuteUbergraph_TheMetaUI(int32_t EntryPoint);                                                                     // [0x18d2100] Final                
};

/// Class /Game/UI/KMCUI.KMCUI_C
/// Size: 0x02C0 (704 bytes) (0x0002B8 - 0x0002C0) align 8 MaxSize: 0x02C0
class UKMCUI_C : public UKMCUIWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02B8   (0x0008)  


	/// Functions
	// Function /Game/UI/KMCUI.KMCUI_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/KMCUI.KMCUI_C.ExecuteUbergraph_KMCUI
	// void ExecuteUbergraph_KMCUI(int32_t EntryPoint);                                                                         // [0x18d2100] Final                
};

#pragma pack(pop)


static_assert(sizeof(UMetaGraphWidget_C) == 0x0350); // 848 bytes (0x000350 - 0x000350)
static_assert(sizeof(UWBP_XsollaWebBrowser_C) == 0x02B0); // 688 bytes (0x000288 - 0x0002B0)
static_assert(sizeof(ABP_GameplayHud_C) == 0x0730); // 1840 bytes (0x000720 - 0x000730)
static_assert(sizeof(UBP_MessageEqu8Widget_C) == 0x0278); // 632 bytes (0x000268 - 0x000278)
static_assert(sizeof(UWBP_FreeWeekPopup_C) == 0x0290); // 656 bytes (0x000260 - 0x000290)
static_assert(sizeof(UTheMetaUI_C) == 0x0370); // 880 bytes (0x000368 - 0x000370)
static_assert(sizeof(UKMCUI_C) == 0x02C0); // 704 bytes (0x0002B8 - 0x0002C0)
static_assert(offsetof(UWBP_XsollaWebBrowser_C, UberGraphFrame) == 0x0288);
static_assert(offsetof(UWBP_XsollaWebBrowser_C, BlurColor) == 0x0290);
static_assert(offsetof(UWBP_XsollaWebBrowser_C, Browser) == 0x0298);
static_assert(offsetof(UWBP_XsollaWebBrowser_C, CloseButton) == 0x02A0);
static_assert(offsetof(UWBP_XsollaWebBrowser_C, ErrorText) == 0x02A8);
static_assert(offsetof(ABP_GameplayHud_C, UberGraphFrame) == 0x0720);
static_assert(offsetof(ABP_GameplayHud_C, DefaultSceneRoot) == 0x0728);
static_assert(offsetof(UBP_MessageEqu8Widget_C, PalettedBorderWidget) == 0x0268);
static_assert(offsetof(UBP_MessageEqu8Widget_C, UIR_SmallText_C) == 0x0270);
static_assert(offsetof(UWBP_FreeWeekPopup_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_FreeWeekPopup_C, Border) == 0x0268);
static_assert(offsetof(UWBP_FreeWeekPopup_C, CloseButton) == 0x0270);
static_assert(offsetof(UWBP_FreeWeekPopup_C, DraggableHeaderBar) == 0x0278);
static_assert(offsetof(UWBP_FreeWeekPopup_C, Image) == 0x0280);
static_assert(offsetof(UWBP_FreeWeekPopup_C, Image0) == 0x0288);
static_assert(offsetof(UTheMetaUI_C, UberGraphFrame) == 0x0368);
static_assert(offsetof(UKMCUI_C, UberGraphFrame) == 0x02B8);
