
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG
/// dependency: XsollaUIBuilder

#pragma pack(push, 0x1)

/// Class /Xsolla/UIBuilder/BP_DefaultTheme.BP_DefaultTheme_C
/// Size: 0x0118 (280 bytes) (0x000118 - 0x000118) align 8 MaxSize: 0x0118
class UBP_DefaultTheme_C : public UXsollaUIBuilderTheme
{ 
public:
};

/// Class /Xsolla/UIBuilder/BP_ThemeUtils.BP_ThemeUtils_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBP_ThemeUtils_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Xsolla/UIBuilder/BP_ThemeUtils.BP_ThemeUtils_C.UpdateInputFieldThemeStyle
	// void UpdateInputFieldThemeStyle(class UClass* Theme, TEnumAsByte<EBrushThemeType> NormalStateBrush, TEnumAsByte<EBrushThemeType> HoverStateBrush, TEnumAsByte<EBrushThemeType> ActiveStateBrush, TEnumAsByte<EBrushThemeType> DisabledStateBrush, TEnumAsByte<EFontType> FontType, int32_t FontSize, TEnumAsByte<EColorType> TextColor, class UEditableTextBox* InputField, class UObject* __WorldContext); // [0x18d2100] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/UIBuilder/BP_ThemeUtils.BP_ThemeUtils_C.UpdateButtonThemeStyle
	// void UpdateButtonThemeStyle(class UClass* Theme, TEnumAsByte<EBrushThemeType> NormalStateType, TEnumAsByte<EBrushThemeType> HoverStateType, TEnumAsByte<EBrushThemeType> PressedStateType, TEnumAsByte<EBrushThemeType> DisabledStateType, class UButton* Button, class UObject* __WorldContext); // [0x18d2100] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/UIBuilder/BP_ThemeUtils.BP_ThemeUtils_C.GetFont
	// FSlateFontInfo GetFont(class UClass* Theme, TEnumAsByte<EFontType> FontType, FSlateFontInfo DefaultFont, class UObject* __WorldContext); // [0x18d2100] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/UIBuilder/BP_ThemeUtils.BP_ThemeUtils_C.GetColor
	// void GetColor(class UClass* Theme, TEnumAsByte<EColorType> colorType, FSlateColor DefaultColor, class UObject* __WorldContext, FSlateColor& Color); // [0x18d2100] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Xsolla/UIBuilder/BP_DefaultWidgetsLibrary.BP_DefaultWidgetsLibrary_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UBP_DefaultWidgetsLibrary_C : public UXsollaUIBuilderWidgetsLibrary
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UBP_DefaultTheme_C) == 0x0118); // 280 bytes (0x000118 - 0x000118)
static_assert(sizeof(UBP_ThemeUtils_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBP_DefaultWidgetsLibrary_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
