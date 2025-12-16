
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/XsollaWebBrowser.XsollaWebBrowser
/// Size: 0x0160 (352 bytes) (0x000108 - 0x000160) align 8 MaxSize: 0x0160
class UXsollaWebBrowser : public UWidget
{ 
public:
	SDK_UNDEFINED(16,952) /* FMulticastInlineDelegate */ __um(OnUrlChanged);                                       // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,953) /* FMulticastInlineDelegate */ __um(OnBeforePopup);                                      // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,954) /* FMulticastInlineDelegate */ __um(OnPageLoaded);                                       // 0x0128   (0x0010)  
	FString                                            InitialURL;                                                 // 0x0138   (0x0010)  
	bool                                               bSupportsTransparency;                                      // 0x0148   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0149   (0x0017)  MISSED


	/// Functions
	// Function /Script/XsollaWebBrowser.XsollaWebBrowser.OnUrlChanged__DelegateSignature
	// void OnUrlChanged__DelegateSignature(FText& Text);                                                                       // [0x18d2100] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/XsollaWebBrowser.XsollaWebBrowser.OnPageLoaded__DelegateSignature
	// void OnPageLoaded__DelegateSignature();                                                                                  // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/XsollaWebBrowser.XsollaWebBrowser.OnBeforePopup__DelegateSignature
	// void OnBeforePopup__DelegateSignature(FString URL, FString Frame);                                                       // [0x18d2100] MulticastDelegate|Public|Delegate 
	// Function /Script/XsollaWebBrowser.XsollaWebBrowser.LoadUrl
	// void LoadUrl(FString NewURL);                                                                                            // [0xc21790] Final|Native|Public|BlueprintCallable 
	// Function /Script/XsollaWebBrowser.XsollaWebBrowser.LoadHtml
	// void LoadHtml(FString Contents, FString DummyURL);                                                                       // [0xc21610] Final|Native|Public|BlueprintCallable 
	// Function /Script/XsollaWebBrowser.XsollaWebBrowser.GoForward
	// void GoForward();                                                                                                        // [0xc215f0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/XsollaWebBrowser.XsollaWebBrowser.GoBack
	// void GoBack();                                                                                                           // [0xc215d0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/XsollaWebBrowser.XsollaWebBrowser.GetURL
	// FString GetURL();                                                                                                        // [0xc21550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XsollaWebBrowser.XsollaWebBrowser.ExecuteJavascript
	// void ExecuteJavascript(FString ScriptText);                                                                              // [0xc21460] Final|Native|Public|BlueprintCallable 
	// Function /Script/XsollaWebBrowser.XsollaWebBrowser.ClearCache
	// void ClearCache();                                                                                                       // [0xc21440] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/XsollaWebBrowser.XsollaWebBrowserAssetManager
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UXsollaWebBrowserAssetManager : public UObject
{ 
public:
	TWeakObjectPtr<class UMaterial*>                   DefaultMaterial;                                            // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0030   (0x0020)  MISSED
	TWeakObjectPtr<class UMaterial*>                   DefaultTranslucentMaterial;                                 // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0058   (0x0020)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UXsollaWebBrowser) == 0x0160); // 352 bytes (0x000108 - 0x000160)
static_assert(sizeof(UXsollaWebBrowserAssetManager) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(offsetof(UXsollaWebBrowser, InitialURL) == 0x0138);
static_assert(offsetof(UXsollaWebBrowserAssetManager, DefaultMaterial) == 0x0028);
static_assert(offsetof(UXsollaWebBrowserAssetManager, DefaultTranslucentMaterial) == 0x0050);
