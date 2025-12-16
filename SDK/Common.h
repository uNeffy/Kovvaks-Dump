
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Slate
/// dependency: SlateCore
/// dependency: UMG
/// dependency: XsollaUIBuilder

#pragma pack(push, 0x1)

/// Enum /Xsolla/Common/Misc/XsollaColorHighlightType.XsollaColorHighlightType
/// Size: 0x01 (1 bytes)
enum class XsollaColorHighlightType : uint8_t
{
	XsollaColorHighlightType__NewEnumerator0                                         = 0,
	XsollaColorHighlightType__NewEnumerator1                                         = 1,
	XsollaColorHighlightType__NewEnumerator2                                         = 2
};

/// Class /Xsolla/Common/Components/Interface/BPI_PrimitivesCheckbox.BPI_PrimitivesCheckbox_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_PrimitivesCheckbox_C : public UInterface
{ 
public:


	/// Functions
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesCheckbox.BPI_PrimitivesCheckbox_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewTheme);                                                                                // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesCheckbox.BPI_PrimitivesCheckbox_C.GetThemeData
	// void GetThemeData(FS_ThemeData& CheckboxThemeData);                                                                      // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesCheckbox.BPI_PrimitivesCheckbox_C.ConstructCheckbox
	// void ConstructCheckbox(FText Text, int32_t TextFontSize, bool IsChecked);                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesCheckbox.BPI_PrimitivesCheckbox_C.GetWidget
	// void GetWidget(class UCheckBox*& CheckboxWidget);                                                                        // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesCheckbox.BPI_PrimitivesCheckbox_C.IsTickHovered
	// void IsTickHovered(bool& IsHovered);                                                                                     // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesCheckbox.BPI_PrimitivesCheckbox_C.GetIsChecked
	// void GetIsChecked(bool& IsChecked);                                                                                      // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesCheckbox.BPI_PrimitivesCheckbox_C.SetIsChecked
	// void SetIsChecked(bool IsChecked);                                                                                       // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesCheckbox.BPI_PrimitivesCheckbox_C.GetText
	// void GetText(FText& Text);                                                                                               // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesCheckbox.BPI_PrimitivesCheckbox_C.SetText
	// void SetText(FText Text);                                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Interface/BPI_PrimitivesImage.BPI_PrimitivesImage_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_PrimitivesImage_C : public UInterface
{ 
public:


	/// Functions
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesImage.BPI_PrimitivesImage_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewValue);                                                                                // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesImage.BPI_PrimitivesImage_C.ConstructImage
	// void ConstructImage(FSlateBrush Image, TEnumAsByte<XsollaColorHighlightType> HighlightType);                             // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesImage.BPI_PrimitivesImage_C.GetThemeData
	// void GetThemeData(FS_ThemeData& ImageThemeData);                                                                         // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesImage.BPI_PrimitivesImage_C.GetWidget
	// void GetWidget(class UImage*& Widget);                                                                                   // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesImage.BPI_PrimitivesImage_C.GetImage
	// void GetImage(FSlateBrush& Image);                                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesImage.BPI_PrimitivesImage_C.SetImage
	// void SetImage(FSlateBrush Image);                                                                                        // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Interface/BPI_PrimitivesButton.BPI_PrimitivesButton_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_PrimitivesButton_C : public UInterface
{ 
public:


	/// Functions
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesButton.BPI_PrimitivesButton_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewThemeData);                                                                            // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesButton.BPI_PrimitivesButton_C.IsButtonSelected
	// void IsButtonSelected(bool& IsSelected);                                                                                 // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesButton.BPI_PrimitivesButton_C.SetButtonText
	// void SetButtonText(FText ButtonText);                                                                                    // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesButton.BPI_PrimitivesButton_C.GetThemeData
	// void GetThemeData(FS_ThemeData& ButtonThemeData);                                                                        // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesButton.BPI_PrimitivesButton_C.SetButtonSelected
	// void SetButtonSelected(bool IsSelected);                                                                                 // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesButton.BPI_PrimitivesButton_C.SetIconData
	// void SetIconData(TArray<UTexture2D*>& IconData, FVector2D Size, FVector2D IconSpacing);                                  // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesButton.BPI_PrimitivesButton_C.SetExtraData
	// void SetExtraData(TArray<FString>& ExtraData);                                                                           // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesButton.BPI_PrimitivesButton_C.ConstructButton
	// void ConstructButton(FText Text, int32_t TextFontSize, bool IsMain, bool IsEnabled, bool IsIconShown);                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesButton.BPI_PrimitivesButton_C.GetWidget
	// void GetWidget(TArray<UButton*>& Widgets);                                                                               // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesButton.BPI_PrimitivesButton_C.IsButtonEnabled
	// void IsButtonEnabled(bool& IsEnabled);                                                                                   // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesButton.BPI_PrimitivesButton_C.SetButtonEnabled
	// void SetButtonEnabled(bool IsEnabled);                                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Interface/BPI_PrimitivesRichText.BPI_PrimitivesRichText_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_PrimitivesRichText_C : public UInterface
{ 
public:


	/// Functions
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesRichText.BPI_PrimitivesRichText_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewParam);                                                                                // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesRichText.BPI_PrimitivesRichText_C.GetThemeData
	// void GetThemeData(FS_ThemeData& RichTextThemeData);                                                                      // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesRichText.BPI_PrimitivesRichText_C.ConstructText
	// void ConstructText(FText Text, int32_t TextFontSize, TEnumAsByte<ETextJustify> Justification, TEnumAsByte<XsollaColorHighlightType> Type, bool IsBold, bool AutoWrap, bool IsCrossed, class UDataTable* StyleSet); // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesRichText.BPI_PrimitivesRichText_C.GetWidget
	// void GetWidget(class URichTextBlock*& Widget);                                                                           // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesRichText.BPI_PrimitivesRichText_C.SetText
	// void SetText(FText Text);                                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesRichText.BPI_PrimitivesRichText_C.GetText
	// void GetText(FText& Text);                                                                                               // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Interface/BPI_PrimitivesText.BPI_PrimitivesText_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_PrimitivesText_C : public UInterface
{ 
public:


	/// Functions
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesText.BPI_PrimitivesText_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewParam);                                                                                // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesText.BPI_PrimitivesText_C.GetThemeData
	// void GetThemeData(FS_ThemeData& TextThemeData);                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesText.BPI_PrimitivesText_C.ConstructText
	// void ConstructText(FText Text, int32_t TextFontSize, TEnumAsByte<ETextJustify> Justification, TEnumAsByte<XsollaColorHighlightType> Type, bool IsBold, bool AutoWrap, bool IsCrossed); // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesText.BPI_PrimitivesText_C.GetWidget
	// void GetWidget(class UTextBlock*& Widget);                                                                               // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesText.BPI_PrimitivesText_C.SetText
	// void SetText(FText Text);                                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesText.BPI_PrimitivesText_C.GetText
	// void GetText(FText& Text);                                                                                               // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Interface/BPI_PrimitivesInput.BPI_PrimitivesInput_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_PrimitivesInput_C : public UInterface
{ 
public:


	/// Functions
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesInput.BPI_PrimitivesInput_C.GetProceedButton
	// void GetProceedButton(class UW_ButtonIcon_C*& ProceedButton);                                                            // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesInput.BPI_PrimitivesInput_C.SetExecuted
	// void SetExecuted(bool bIsExecuted);                                                                                      // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesInput.BPI_PrimitivesInput_C.SetCanProcess
	// void SetCanProcess(bool IsCanProcess);                                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesInput.BPI_PrimitivesInput_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewParam);                                                                                // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesInput.BPI_PrimitivesInput_C.GetThemeData
	// void GetThemeData(FS_ThemeData& InputThemeData);                                                                         // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesInput.BPI_PrimitivesInput_C.ConstructInput
	// void ConstructInput(FText Hint, int32_t TextFontSize, bool IsPassword, TEnumAsByte<ETextJustify> Justification, bool IsTextBold, TEnumAsByte<XsollaColorHighlightType> ColorHighlightType); // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesInput.BPI_PrimitivesInput_C.GetWidget
	// void GetWidget(class UEditableTextBox*& InputWidget);                                                                    // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesInput.BPI_PrimitivesInput_C.SetupFocus
	// void SetupFocus();                                                                                                       // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesInput.BPI_PrimitivesInput_C.GetHint
	// void GetHint(FText& Hint);                                                                                               // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesInput.BPI_PrimitivesInput_C.SetHint
	// void SetHint(FText Hint);                                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesInput.BPI_PrimitivesInput_C.GetText
	// void GetText(FString& Text);                                                                                             // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Xsolla/Common/Components/Interface/BPI_PrimitivesInput.BPI_PrimitivesInput_C.SetText
	// void SetText(FString Text);                                                                                              // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C
/// Size: 0x02B7 (695 bytes) (0x000260 - 0x0002B7) align 8 MaxSize: 0x02B7
class UW_TextEdit_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UEditableTextBox*                            EditableText;                                               // 0x0268   (0x0008)  
	SDK_UNDEFINED(16,819) /* FMulticastInlineDelegate */ __um(OnTextCommited);                                     // 0x0270   (0x0010)  
	bool                                               OverrideDefaultTheme;                                       // 0x0280   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0281   (0x0007)  MISSED
	class UClass*                                      Theme;                                                      // 0x0288   (0x0008)  
	TEnumAsByte<EColorType>                            MainTextColor;                                              // 0x0290   (0x0001)  
	TEnumAsByte<EColorType>                            SecondaryTextColor;                                         // 0x0291   (0x0001)  
	TEnumAsByte<EColorType>                            AccentTextColor;                                            // 0x0292   (0x0001)  
	TEnumAsByte<EFontType>                             RegularTextFont;                                            // 0x0293   (0x0001)  
	TEnumAsByte<EFontType>                             BoldTextFont;                                               // 0x0294   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0295   (0x0003)  MISSED
	FText                                              HintText;                                                   // 0x0298   (0x0018)  
	int32_t                                            TextFontSize;                                               // 0x02B0   (0x0004)  
	TEnumAsByte<ETextJustify>                          TextJustification;                                          // 0x02B4   (0x0001)  
	TEnumAsByte<XsollaColorHighlightType>              Type;                                                       // 0x02B5   (0x0001)  
	bool                                               IsBold;                                                     // 0x02B6   (0x0001)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.GetProceedButton
	// void GetProceedButton(class UW_ButtonIcon_C*& ProceedButton);                                                            // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.GetThemeData
	// void GetThemeData(FS_ThemeData& InputThemeData);                                                                         // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.GetText
	// void GetText(FString& Text);                                                                                             // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.GetHint
	// void GetHint(FText& Hint);                                                                                               // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.GetWidget
	// void GetWidget(class UEditableTextBox*& InputWidget);                                                                    // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.UpdateDefaults
	// void UpdateDefaults(FText HintText, int32_t TextFontSize, TEnumAsByte<ETextJustify> Justification, bool IsBold, TEnumAsByte<XsollaColorHighlightType> Type); // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.UpdateWidgetStyle
	// void UpdateWidgetStyle();                                                                                                // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.GetWidgetFont
	// void GetWidgetFont(FSlateFontInfo& SlateFontInfo);                                                                       // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.GetWidgetColor
	// FSlateColor GetWidgetColor();                                                                                            // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.SetCanProcess
	// void SetCanProcess(bool IsCanProcess);                                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.SetExecuted
	// void SetExecuted(bool bIsExecuted);                                                                                      // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.BndEvt__EditableText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	// void BndEvt__EditableText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod); // [0x18d2100] HasOutParms|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.SetupFocus
	// void SetupFocus();                                                                                                       // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.SetHint
	// void SetHint(FText Hint);                                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.SetText
	// void SetText(FString Text);                                                                                              // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.ConstructInput
	// void ConstructInput(FText Hint, int32_t TextFontSize, bool IsPassword, TEnumAsByte<ETextJustify> Justification, bool IsTextBold, TEnumAsByte<XsollaColorHighlightType> ColorHighlightType); // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewParam);                                                                                // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.ExecuteUbergraph_W_TextEdit
	// void ExecuteUbergraph_W_TextEdit(int32_t EntryPoint);                                                                    // [0x18d2100] Final|HasDefaults    
	// Function /Xsolla/Common/Components/Primitives/W_TextEdit.W_TextEdit_C.OnTextCommited__DelegateSignature
	// void OnTextCommited__DelegateSignature(FText Text);                                                                      // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Primitives/W_Text.W_Text_C
/// Size: 0x02BB (699 bytes) (0x000260 - 0x0002BB) align 8 MaxSize: 0x02BB
class UW_Text_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UImage*                                      Image_CrossText;                                            // 0x0268   (0x0008)  
	class UScaleBox*                                   ScaleBox_Cross;                                             // 0x0270   (0x0008)  
	class UTextBlock*                                  TextBlock_Text;                                             // 0x0278   (0x0008)  
	bool                                               OverrideDefaultTheme;                                       // 0x0280   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0281   (0x0007)  MISSED
	class UClass*                                      Theme;                                                      // 0x0288   (0x0008)  
	TEnumAsByte<EColorType>                            MainTextColor;                                              // 0x0290   (0x0001)  
	TEnumAsByte<EColorType>                            SecondaryTextColor;                                         // 0x0291   (0x0001)  
	TEnumAsByte<EColorType>                            AccentTextColor;                                            // 0x0292   (0x0001)  
	TEnumAsByte<EFontType>                             RegularTextFont;                                            // 0x0293   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0294   (0x0004)  MISSED
	FText                                              Text;                                                       // 0x0298   (0x0018)  
	int32_t                                            TextFontSize;                                               // 0x02B0   (0x0004)  
	TEnumAsByte<ETextJustify>                          TextJustification;                                          // 0x02B4   (0x0001)  
	TEnumAsByte<XsollaColorHighlightType>              Type;                                                       // 0x02B5   (0x0001)  
	TEnumAsByte<EFontType>                             BoldTextFont;                                               // 0x02B6   (0x0001)  
	bool                                               IsBold;                                                     // 0x02B7   (0x0001)  
	bool                                               AutoWrapText;                                               // 0x02B8   (0x0001)  
	bool                                               ShowCross;                                                  // 0x02B9   (0x0001)  
	TEnumAsByte<EColorType>                            CrossColor;                                                 // 0x02BA   (0x0001)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.GetThemeData
	// void GetThemeData(FS_ThemeData& TextThemeData);                                                                          // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.GetText
	// void GetText(FText& Text);                                                                                               // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.GetWidget
	// void GetWidget(class UTextBlock*& Widget);                                                                               // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.UpdateDefaults
	// void UpdateDefaults(FText Text, int32_t TextFontSize, TEnumAsByte<ETextJustify> Justification, TEnumAsByte<XsollaColorHighlightType> Type, bool IsBold, bool AutoWrap, bool IsCrossed); // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.UpdateCross
	// void UpdateCross();                                                                                                      // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.UpdateTextWrapping
	// void UpdateTextWrapping();                                                                                               // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.UpdateTextColor
	// void UpdateTextColor();                                                                                                  // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.UpdateTextJustification
	// void UpdateTextJustification();                                                                                          // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.UpdateTextFont
	// void UpdateTextFont();                                                                                                   // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.SetText
	// void SetText(FText Text);                                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.ConstructText
	// void ConstructText(FText Text, int32_t TextFontSize, TEnumAsByte<ETextJustify> Justification, TEnumAsByte<XsollaColorHighlightType> Type, bool IsBold, bool AutoWrap, bool IsCrossed); // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewParam);                                                                                // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Text.W_Text_C.ExecuteUbergraph_W_Text
	// void ExecuteUbergraph_W_Text(int32_t EntryPoint);                                                                        // [0x18d2100] Final|HasDefaults    
};

/// Class /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C
/// Size: 0x02C8 (712 bytes) (0x000260 - 0x0002C8) align 8 MaxSize: 0x02C8
class UW_RichText_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UImage*                                      Image_CrossText;                                            // 0x0268   (0x0008)  
	class URichTextBlock*                              RichTextBlock_Text;                                         // 0x0270   (0x0008)  
	class UScaleBox*                                   ScaleBox_Cross;                                             // 0x0278   (0x0008)  
	bool                                               OverrideDefaultTheme;                                       // 0x0280   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0281   (0x0007)  MISSED
	class UClass*                                      Theme;                                                      // 0x0288   (0x0008)  
	TEnumAsByte<EColorType>                            MainTextColor;                                              // 0x0290   (0x0001)  
	TEnumAsByte<EColorType>                            SecondaryTextColor;                                         // 0x0291   (0x0001)  
	TEnumAsByte<EColorType>                            AccentTextColor;                                            // 0x0292   (0x0001)  
	TEnumAsByte<EFontType>                             RegularTextFont;                                            // 0x0293   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0294   (0x0004)  MISSED
	FText                                              Text;                                                       // 0x0298   (0x0018)  
	int32_t                                            TextFontSize;                                               // 0x02B0   (0x0004)  
	TEnumAsByte<ETextJustify>                          TextJustification;                                          // 0x02B4   (0x0001)  
	TEnumAsByte<XsollaColorHighlightType>              Type;                                                       // 0x02B5   (0x0001)  
	TEnumAsByte<EFontType>                             BoldTextFont;                                               // 0x02B6   (0x0001)  
	bool                                               IsBold;                                                     // 0x02B7   (0x0001)  
	bool                                               AutoWrapText;                                               // 0x02B8   (0x0001)  
	bool                                               ShowCross;                                                  // 0x02B9   (0x0001)  
	TEnumAsByte<EColorType>                            CrossColor;                                                 // 0x02BA   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x02BB   (0x0005)  MISSED
	class UDataTable*                                  TextStyleSet;                                               // 0x02C0   (0x0008)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.GetThemeData
	// void GetThemeData(FS_ThemeData& RichTextThemeData);                                                                      // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.GetText
	// void GetText(FText& Text);                                                                                               // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.GetWidget
	// void GetWidget(class URichTextBlock*& Widget);                                                                           // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.UpdateDefaults
	// void UpdateDefaults(FText Text, int32_t TextFontSize, TEnumAsByte<ETextJustify> Justification, TEnumAsByte<XsollaColorHighlightType> Type, bool IsBold, bool AutoWrap, bool IsCrossed); // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.UpdateCross
	// void UpdateCross();                                                                                                      // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.UpdateTextWrapping
	// void UpdateTextWrapping();                                                                                               // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.UpdateTextColor
	// void UpdateTextColor();                                                                                                  // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.UpdateTextJustification
	// void UpdateTextJustification();                                                                                          // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.UpdateTextFont
	// void UpdateTextFont();                                                                                                   // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.SetText
	// void SetText(FText Text);                                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.ConstructText
	// void ConstructText(FText Text, int32_t TextFontSize, TEnumAsByte<ETextJustify> Justification, TEnumAsByte<XsollaColorHighlightType> Type, bool IsBold, bool AutoWrap, bool IsCrossed, class UDataTable* StyleSet); // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewParam);                                                                                // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_RichText.W_RichText_C.ExecuteUbergraph_W_RichText
	// void ExecuteUbergraph_W_RichText(int32_t EntryPoint);                                                                    // [0x18d2100] Final|HasDefaults    
};

/// Class /Xsolla/Common/Components/Primitives/W_Link.W_Link_C
/// Size: 0x02C0 (704 bytes) (0x000260 - 0x0002C0) align 8 MaxSize: 0x02C0
class UW_Link_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UButton*                                     Button_Link;                                                // 0x0268   (0x0008)  
	class UImage*                                      Image_Underline;                                            // 0x0270   (0x0008)  
	class UTextBlock*                                  TextBlock_LinkText;                                         // 0x0278   (0x0008)  
	SDK_UNDEFINED(16,820) /* FMulticastInlineDelegate */ __um(OnLinkClicked);                                      // 0x0280   (0x0010)  
	FText                                              Text;                                                       // 0x0290   (0x0018)  
	bool                                               OverrideDefaultTheme;                                       // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02A9   (0x0007)  MISSED
	class UClass*                                      Theme;                                                      // 0x02B0   (0x0008)  
	TEnumAsByte<EColorType>                            LinkTextColor;                                              // 0x02B8   (0x0001)  
	TEnumAsByte<EColorType>                            LinkTextHoverColor;                                         // 0x02B9   (0x0001)  
	TEnumAsByte<EFontType>                             LinkTextFont;                                               // 0x02BA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x02BB   (0x0001)  MISSED
	int32_t                                            TextFontSize;                                               // 0x02BC   (0x0004)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.IsButtonSelected
	// void IsButtonSelected(bool& IsSelected);                                                                                 // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.GetThemeData
	// void GetThemeData(FS_ThemeData& ButtonThemeData);                                                                        // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.IsButtonEnabled
	// void IsButtonEnabled(bool& IsEnabled);                                                                                   // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.GetWidget
	// void GetWidget(TArray<UButton*>& Widgets);                                                                               // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.SetText
	// void SetText(FText InText);                                                                                              // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.UpdateDefaults
	// void UpdateDefaults(FText Text, int32_t InputPin);                                                                       // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.UpdateLinkFont
	// void UpdateLinkFont();                                                                                                   // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.LinkTextColorBinding
	// FSlateColor LinkTextColorBinding();                                                                                      // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.ImageUnderlineVisibilityBinding
	// ESlateVisibility ImageUnderlineVisibilityBinding();                                                                      // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.SetButtonEnabled
	// void SetButtonEnabled(bool IsEnabled);                                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.SetExtraData
	// void SetExtraData(TArray<FString>& ExtraData);                                                                           // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.SetIconData
	// void SetIconData(TArray<UTexture2D*>& IconData, FVector2D Size, FVector2D IconSpacing);                                  // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.SetButtonSelected
	// void SetButtonSelected(bool IsSelected);                                                                                 // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.BndEvt__Button_Link_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Link_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                         // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.ConstructButton
	// void ConstructButton(FText Text, int32_t TextFontSize, bool IsMain, bool IsEnabled, bool IsIconShown);                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.SetButtonText
	// void SetButtonText(FText ButtonText);                                                                                    // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewThemeData);                                                                            // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.ExecuteUbergraph_W_Link
	// void ExecuteUbergraph_W_Link(int32_t EntryPoint);                                                                        // [0x18d2100] Final|HasDefaults    
	// Function /Xsolla/Common/Components/Primitives/W_Link.W_Link_C.OnLinkClicked__DelegateSignature
	// void OnLinkClicked__DelegateSignature();                                                                                 // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C
/// Size: 0x02EA (746 bytes) (0x000260 - 0x0002EA) align 8 MaxSize: 0x02EA
class UW_InputSearch_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UEditableTextBox*                            EditableTextBox_Input;                                      // 0x0268   (0x0008)  
	class UImage*                                      Image_SearchIcon;                                           // 0x0270   (0x0008)  
	class USizeBox*                                    SizeBox_Clear;                                              // 0x0278   (0x0008)  
	class UW_ButtonIcon_C*                             W_ButtonIcon_Clear;                                         // 0x0280   (0x0008)  
	SDK_UNDEFINED(16,821) /* FMulticastInlineDelegate */ __um(OnInputTextChanged);                                 // 0x0288   (0x0010)  
	FText                                              Hint;                                                       // 0x0298   (0x0018)  
	TEnumAsByte<ETextJustify>                          Justification;                                              // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02B1   (0x0007)  MISSED
	SDK_UNDEFINED(16,822) /* FMulticastInlineDelegate */ __um(OnInputTextCommited);                                // 0x02B8   (0x0010)  
	bool                                               OverrideDefaultTheme;                                       // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x02C9   (0x0007)  MISSED
	class UClass*                                      Theme;                                                      // 0x02D0   (0x0008)  
	TEnumAsByte<EBrushThemeType>                       InputInitial;                                               // 0x02D8   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       InputHover;                                                 // 0x02D9   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       InputActive;                                                // 0x02DA   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       InputDisabled;                                              // 0x02DB   (0x0001)  
	TEnumAsByte<EFontType>                             InputTextFont;                                              // 0x02DC   (0x0001)  
	TEnumAsByte<EColorType>                            InputTextColor;                                             // 0x02DD   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x02DE   (0x0002)  MISSED
	int32_t                                            TextFontSize;                                               // 0x02E0   (0x0004)  
	TEnumAsByte<EColorType>                            SearchIconColorInitial;                                     // 0x02E4   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       ClearButtonInitial;                                         // 0x02E5   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       ClearButtonHover;                                           // 0x02E6   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       ClearButtonPressed;                                         // 0x02E7   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       ClearButtonDisabled;                                        // 0x02E8   (0x0001)  
	TEnumAsByte<EColorType>                            ClearContentColor;                                          // 0x02E9   (0x0001)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.GetProceedButton
	// void GetProceedButton(class UW_ButtonIcon_C*& ProceedButton);                                                            // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.GetThemeData
	// void GetThemeData(FS_ThemeData& InputThemeData);                                                                         // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.GetText
	// void GetText(FString& Text);                                                                                             // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.GetHint
	// void GetHint(FText& Hint);                                                                                               // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.GetWidget
	// void GetWidget(class UEditableTextBox*& InputWidget);                                                                    // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.UpdateDefaults
	// void UpdateDefaults(FText Hint, int32_t TextFontSize, TEnumAsByte<ETextJustify> Justification);                          // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.SearchIconColorBinding
	// FLinearColor SearchIconColorBinding();                                                                                   // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.SetCanProcess
	// void SetCanProcess(bool IsCanProcess);                                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.SetExecuted
	// void SetExecuted(bool bIsExecuted);                                                                                      // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.OnTextChange
	// void OnTextChange(FText& Text);                                                                                          // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.OnTextCommited
	// void OnTextCommited(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);                                                 // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.SetupFocus
	// void SetupFocus();                                                                                                       // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.SetHint
	// void SetHint(FText Hint);                                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.SetText
	// void SetText(FString Text);                                                                                              // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.ConstructInput
	// void ConstructInput(FText Hint, int32_t TextFontSize, bool IsPassword, TEnumAsByte<ETextJustify> Justification, bool IsTextBold, TEnumAsByte<XsollaColorHighlightType> ColorHighlightType); // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.BndEvt__W_InputSearch_W_ButtonIcon_Clear_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	// void BndEvt__W_InputSearch_W_ButtonIcon_Clear_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();               // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewParam);                                                                                // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.ExecuteUbergraph_W_InputSearch
	// void ExecuteUbergraph_W_InputSearch(int32_t EntryPoint);                                                                 // [0x18d2100] Final|HasDefaults    
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.OnInputTextCommited__DelegateSignature
	// void OnInputTextCommited__DelegateSignature();                                                                           // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputSearch.W_InputSearch_C.OnInputTextChanged__DelegateSignature
	// void OnInputTextChanged__DelegateSignature();                                                                            // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C
/// Size: 0x031A (794 bytes) (0x000260 - 0x00031A) align 8 MaxSize: 0x031A
class UW_InputExecute_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UEditableTextBox*                            EditableTextBox_Input;                                      // 0x0268   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0270   (0x0008)  
	class USizeBox*                                    SizeBox_Process;                                            // 0x0278   (0x0008)  
	class USizeBox*                                    SizeBox_Success;                                            // 0x0280   (0x0008)  
	class UW_ButtonIcon_C*                             W_SmallIconButton_Proceed;                                  // 0x0288   (0x0008)  
	class UWidgetSwitcher*                             WidgetSwitcher_Button;                                      // 0x0290   (0x0008)  
	SDK_UNDEFINED(16,823) /* FMulticastInlineDelegate */ __um(OnInputTextChanged);                                 // 0x0298   (0x0010)  
	FText                                              Hint;                                                       // 0x02A8   (0x0018)  
	TEnumAsByte<ETextJustify>                          Justification;                                              // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02C1   (0x0007)  MISSED
	SDK_UNDEFINED(16,824) /* FMulticastInlineDelegate */ __um(OnInputTextCommited);                                // 0x02C8   (0x0010)  
	class UImage*                                      IconProceed;                                                // 0x02D8   (0x0008)  
	class UImage*                                      IconSuccess;                                                // 0x02E0   (0x0008)  
	SDK_UNDEFINED(16,825) /* FMulticastInlineDelegate */ __um(OnProceedClicked);                                   // 0x02E8   (0x0010)  
	bool                                               bIsCanProcess;                                              // 0x02F8   (0x0001)  
	bool                                               bIsExecuted;                                                // 0x02F9   (0x0001)  
	bool                                               OverrideDefaultTheme;                                       // 0x02FA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x02FB   (0x0005)  MISSED
	class UClass*                                      Theme;                                                      // 0x0300   (0x0008)  
	TEnumAsByte<EBrushThemeType>                       InputInitial;                                               // 0x0308   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       InputHover;                                                 // 0x0309   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       InputActive;                                                // 0x030A   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       InputDisabled;                                              // 0x030B   (0x0001)  
	TEnumAsByte<EFontType>                             InputTextFont;                                              // 0x030C   (0x0001)  
	TEnumAsByte<EColorType>                            InputTextColor;                                             // 0x030D   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x030E   (0x0002)  MISSED
	int32_t                                            TextFontSize;                                               // 0x0310   (0x0004)  
	TEnumAsByte<EColorType>                            IconColor;                                                  // 0x0314   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       ProceedButtonInitial;                                       // 0x0315   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       ProceedButtonHover;                                         // 0x0316   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       ProceedButtonPressed;                                       // 0x0317   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       ProceedButtonDisabled;                                      // 0x0318   (0x0001)  
	TEnumAsByte<EColorType>                            ProceedContentColor;                                        // 0x0319   (0x0001)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.GetProceedButton
	// void GetProceedButton(class UW_ButtonIcon_C*& ProceedButton);                                                            // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.GetThemeData
	// void GetThemeData(FS_ThemeData& InputThemeData);                                                                         // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.GetText
	// void GetText(FString& Text);                                                                                             // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.GetHint
	// void GetHint(FText& Hint);                                                                                               // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.GetWidget
	// void GetWidget(class UEditableTextBox*& InputWidget);                                                                    // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.UpdateDefaults
	// void UpdateDefaults(FText Hint, int32_t TextFontSize, TEnumAsByte<ETextJustify> Justification);                          // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.GetColorAndOpacity
	// FLinearColor GetColorAndOpacity();                                                                                       // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.OnTextChange
	// void OnTextChange(FText& Text);                                                                                          // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.OnTextCommited
	// void OnTextCommited(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);                                                 // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.SetupFocus
	// void SetupFocus();                                                                                                       // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.SetHint
	// void SetHint(FText Hint);                                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.SetText
	// void SetText(FString Text);                                                                                              // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.ConstructInput
	// void ConstructInput(FText Hint, int32_t TextFontSize, bool IsPassword, TEnumAsByte<ETextJustify> Justification, bool IsTextBold, TEnumAsByte<XsollaColorHighlightType> ColorHighlightType); // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.BndEvt__W_InputExecute_W_SmallIconButton_Proceed_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	// void BndEvt__W_InputExecute_W_SmallIconButton_Proceed_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();       // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewParam);                                                                                // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.SetCanProcess
	// void SetCanProcess(bool IsCanProcess);                                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.SetExecuted
	// void SetExecuted(bool bIsExecuted);                                                                                      // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.ExecuteUbergraph_W_InputExecute
	// void ExecuteUbergraph_W_InputExecute(int32_t EntryPoint);                                                                // [0x18d2100] Final|HasDefaults    
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.OnProceedClicked__DelegateSignature
	// void OnProceedClicked__DelegateSignature();                                                                              // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.OnInputTextCommited__DelegateSignature
	// void OnInputTextCommited__DelegateSignature();                                                                           // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_InputExecute.W_InputExecute_C.OnInputTextChanged__DelegateSignature
	// void OnInputTextChanged__DelegateSignature();                                                                            // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Primitives/W_Input.W_Input_C
/// Size: 0x02E4 (740 bytes) (0x000260 - 0x0002E4) align 8 MaxSize: 0x02E4
class UW_Input_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UButton*                                     Button_RevealPassword;                                      // 0x0268   (0x0008)  
	class UEditableTextBox*                            EditableTextBox_Input;                                      // 0x0270   (0x0008)  
	class UImage*                                      Image_Eye;                                                  // 0x0278   (0x0008)  
	bool                                               IsPassword;                                                 // 0x0280   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0281   (0x0007)  MISSED
	SDK_UNDEFINED(16,826) /* FMulticastInlineDelegate */ __um(OnInputTextChanged);                                 // 0x0288   (0x0010)  
	FText                                              Hint;                                                       // 0x0298   (0x0018)  
	TEnumAsByte<ETextJustify>                          Justification;                                              // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x02B1   (0x0007)  MISSED
	SDK_UNDEFINED(16,827) /* FMulticastInlineDelegate */ __um(OnInputTextCommited);                                // 0x02B8   (0x0010)  
	bool                                               OverrideDefaultTheme;                                       // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x02C9   (0x0007)  MISSED
	class UClass*                                      Theme;                                                      // 0x02D0   (0x0008)  
	TEnumAsByte<EBrushThemeType>                       InputInitial;                                               // 0x02D8   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       InputHover;                                                 // 0x02D9   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       InputActive;                                                // 0x02DA   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       InputDisabled;                                              // 0x02DB   (0x0001)  
	int32_t                                            TextFontSize;                                               // 0x02DC   (0x0004)  
	TEnumAsByte<EFontType>                             InputTextFont;                                              // 0x02E0   (0x0001)  
	TEnumAsByte<EColorType>                            InputTextColor;                                             // 0x02E1   (0x0001)  
	TEnumAsByte<EColorType>                            IconColorInitial;                                           // 0x02E2   (0x0001)  
	TEnumAsByte<EColorType>                            IconColorHover;                                             // 0x02E3   (0x0001)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.GetProceedButton
	// void GetProceedButton(class UW_ButtonIcon_C*& ProceedButton);                                                            // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.GetThemeData
	// void GetThemeData(FS_ThemeData& InputThemeData);                                                                         // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.GetText
	// void GetText(FString& Text);                                                                                             // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.GetHint
	// void GetHint(FText& Hint);                                                                                               // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.GetWidget
	// void GetWidget(class UEditableTextBox*& InputWidget);                                                                    // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.UpdateDefaults
	// void UpdateDefaults(FText Hint, int32_t TextFontSize, bool IsPassword, TEnumAsByte<ETextJustify> Justification);         // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.RevealIconColorBinding
	// FLinearColor RevealIconColorBinding();                                                                                   // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.SetCanProcess
	// void SetCanProcess(bool IsCanProcess);                                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.SetExecuted
	// void SetExecuted(bool bIsExecuted);                                                                                      // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.BndEvt__Button_RevealPassword_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	// void BndEvt__Button_RevealPassword_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();               // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.BndEvt__Button_RevealPassword_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	// void BndEvt__Button_RevealPassword_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();              // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.OnTextChange
	// void OnTextChange(FText& Text);                                                                                          // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.OnTextCommited
	// void OnTextCommited(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);                                                 // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.SetHint
	// void SetHint(FText Hint);                                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.SetText
	// void SetText(FString Text);                                                                                              // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.SetupFocus
	// void SetupFocus();                                                                                                       // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.ConstructInput
	// void ConstructInput(FText Hint, int32_t TextFontSize, bool IsPassword, TEnumAsByte<ETextJustify> Justification, bool IsTextBold, TEnumAsByte<XsollaColorHighlightType> ColorHighlightType); // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewParam);                                                                                // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.ExecuteUbergraph_W_Input
	// void ExecuteUbergraph_W_Input(int32_t EntryPoint);                                                                       // [0x18d2100] Final|HasDefaults    
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.OnInputTextCommited__DelegateSignature
	// void OnInputTextCommited__DelegateSignature();                                                                           // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Input.W_Input_C.OnInputTextChanged__DelegateSignature
	// void OnInputTextChanged__DelegateSignature();                                                                            // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Primitives/W_Image.W_Image_C
/// Size: 0x0310 (784 bytes) (0x000260 - 0x000310) align 8 MaxSize: 0x0310
class UW_Image_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UImage*                                      Image_Main;                                                 // 0x0268   (0x0008)  
	bool                                               OverrideDefaultTheme;                                       // 0x0270   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0271   (0x0007)  MISSED
	class UClass*                                      Theme;                                                      // 0x0278   (0x0008)  
	TEnumAsByte<EBrushThemeType>                       ImageBrush;                                                 // 0x0280   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0281   (0x0007)  MISSED
	FSlateBrush                                        DefaultImage;                                               // 0x0288   (0x0088)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_Image.W_Image_C.GetThemeData
	// void GetThemeData(FS_ThemeData& ImageThemeData);                                                                         // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Image.W_Image_C.GetImage
	// void GetImage(FSlateBrush& Image);                                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Image.W_Image_C.GetWidget
	// void GetWidget(class UImage*& Widget);                                                                                   // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Image.W_Image_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Image.W_Image_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_Image.W_Image_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Image.W_Image_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Image.W_Image_C.SetImage
	// void SetImage(FSlateBrush Image);                                                                                        // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Image.W_Image_C.ConstructImage
	// void ConstructImage(FSlateBrush Image, TEnumAsByte<XsollaColorHighlightType> HighlightType);                             // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Image.W_Image_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewValue);                                                                                // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Image.W_Image_C.ExecuteUbergraph_W_Image
	// void ExecuteUbergraph_W_Image(int32_t EntryPoint);                                                                       // [0x18d2100] Final|HasDefaults    
};

/// Class /Xsolla/Common/Components/Primitives/W_Icon.W_Icon_C
/// Size: 0x030B (779 bytes) (0x000260 - 0x00030B) align 8 MaxSize: 0x030B
class UW_Icon_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UImage*                                      Image_Icon;                                                 // 0x0268   (0x0008)  
	FSlateBrush                                        IconImage;                                                  // 0x0270   (0x0088)  
	TEnumAsByte<XsollaColorHighlightType>              Type;                                                       // 0x02F8   (0x0001)  
	bool                                               OverrideDefaultTheme;                                       // 0x02F9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x02FA   (0x0006)  MISSED
	class UClass*                                      Theme;                                                      // 0x0300   (0x0008)  
	TEnumAsByte<EColorType>                            MainIconColor;                                              // 0x0308   (0x0001)  
	TEnumAsByte<EColorType>                            SecondaryIconColor;                                         // 0x0309   (0x0001)  
	TEnumAsByte<EColorType>                            AccentIconColor;                                            // 0x030A   (0x0001)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_Icon.W_Icon_C.GetThemeData
	// void GetThemeData(FS_ThemeData& ImageThemeData);                                                                         // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Icon.W_Icon_C.GetImage
	// void GetImage(FSlateBrush& Image);                                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Icon.W_Icon_C.GetWidget
	// void GetWidget(class UImage*& Widget);                                                                                   // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Icon.W_Icon_C.UpdateDefaults
	// void UpdateDefaults(FSlateBrush IconImage, TEnumAsByte<XsollaColorHighlightType> Type);                                  // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Icon.W_Icon_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Icon.W_Icon_C.UpdateIconColor
	// void UpdateIconColor();                                                                                                  // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Icon.W_Icon_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_Icon.W_Icon_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Icon.W_Icon_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Icon.W_Icon_C.SetImage
	// void SetImage(FSlateBrush Image);                                                                                        // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Icon.W_Icon_C.ConstructImage
	// void ConstructImage(FSlateBrush Image, TEnumAsByte<XsollaColorHighlightType> HighlightType);                             // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Icon.W_Icon_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewValue);                                                                                // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Icon.W_Icon_C.ExecuteUbergraph_W_Icon
	// void ExecuteUbergraph_W_Icon(int32_t EntryPoint);                                                                        // [0x18d2100] Final|HasDefaults    
};

/// Class /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C
/// Size: 0x02D1 (721 bytes) (0x000260 - 0x0002D1) align 8 MaxSize: 0x02D1
class UW_Checkbox_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UCheckBox*                                   CheckBox_Tick;                                              // 0x0268   (0x0008)  
	class UTextBlock*                                  TextBlock_Checkbotext;                                      // 0x0270   (0x0008)  
	FText                                              Text;                                                       // 0x0278   (0x0018)  
	SDK_UNDEFINED(16,828) /* FMulticastInlineDelegate */ __um(OnCheckStateChanged);                                // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,829) /* FMulticastInlineDelegate */ __um(OnLostFocus);                                        // 0x02A0   (0x0010)  
	bool                                               IsChecked;                                                  // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02B1   (0x0003)  MISSED
	int32_t                                            TextFontSize;                                               // 0x02B4   (0x0004)  
	bool                                               OverrideDefaultTheme;                                       // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x02B9   (0x0007)  MISSED
	class UClass*                                      Theme;                                                      // 0x02C0   (0x0008)  
	TEnumAsByte<EBrushThemeType>                       UncheckedInitial;                                           // 0x02C8   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       UncheckedHover;                                             // 0x02C9   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       UncheckedPressed;                                           // 0x02CA   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       CheckedInitial;                                             // 0x02CB   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       CheckedHover;                                               // 0x02CC   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       CheckedPressed;                                             // 0x02CD   (0x0001)  
	TEnumAsByte<EFontType>                             CheckboxTextFont;                                           // 0x02CE   (0x0001)  
	TEnumAsByte<EColorType>                            CheckboxTextColor;                                          // 0x02CF   (0x0001)  
	TEnumAsByte<EColorType>                            CheckboxTextInactiveColor;                                  // 0x02D0   (0x0001)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.IsTickHovered
	// void IsTickHovered(bool& IsHovered);                                                                                     // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.GetThemeData
	// void GetThemeData(FS_ThemeData& CheckboxThemeData);                                                                      // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.GetText
	// void GetText(FText& Text);                                                                                               // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.GetIsChecked
	// void GetIsChecked(bool& IsChecked);                                                                                      // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.GetWidget
	// void GetWidget(class UCheckBox*& CheckboxWidget);                                                                        // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.UpdateDefaults
	// void UpdateDefaults(FText Text, int32_t TextFontSize, bool IsChecked);                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.UpdateTextFont
	// void UpdateTextFont();                                                                                                   // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.UpdateCheckboxStyle
	// void UpdateCheckboxStyle();                                                                                              // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.CheckboxTextColorBinding
	// FSlateColor CheckboxTextColorBinding();                                                                                  // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.BndEvt__CheckBox_Tick_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	// void BndEvt__CheckBox_Tick_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.OnFocusLost
	// void OnFocusLost(FFocusEvent InFocusEvent);                                                                              // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.SetIsChecked
	// void SetIsChecked(bool IsChecked);                                                                                       // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.SetText
	// void SetText(FText Text);                                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.ConstructCheckbox
	// void ConstructCheckbox(FText Text, int32_t TextFontSize, bool IsChecked);                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewTheme);                                                                                // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.ExecuteUbergraph_W_Checkbox
	// void ExecuteUbergraph_W_Checkbox(int32_t EntryPoint);                                                                    // [0x18d2100] Final|HasDefaults    
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.OnLostFocus__DelegateSignature
	// void OnLostFocus__DelegateSignature();                                                                                   // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Checkbox.W_Checkbox_C.OnCheckStateChanged__DelegateSignature
	// void OnCheckStateChanged__DelegateSignature(bool IsChecked);                                                             // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C
/// Size: 0x02D2 (722 bytes) (0x000260 - 0x0002D2) align 8 MaxSize: 0x02D2
class UW_ButtonToggle_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UButton*                                     Button_NotSelected;                                         // 0x0268   (0x0008)  
	class UButton*                                     Button_Selected;                                            // 0x0270   (0x0008)  
	class UImage*                                      Image_NotSelected;                                          // 0x0278   (0x0008)  
	class UImage*                                      Image_Selected;                                             // 0x0280   (0x0008)  
	class UWidgetSwitcher*                             WidgetSwitcher_ToggleButton;                                // 0x0288   (0x0008)  
	bool                                               IsSelected;                                                 // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0291   (0x0007)  MISSED
	SDK_UNDEFINED(16,830) /* FMulticastInlineDelegate */ __um(OnToggleButtonStateChanged);                         // 0x0298   (0x0010)  
	bool                                               OverrideDefaultTheme;                                       // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x02A9   (0x0007)  MISSED
	class UClass*                                      Theme;                                                      // 0x02B0   (0x0008)  
	TEnumAsByte<EBrushThemeType>                       NotSelectedButtonInitial;                                   // 0x02B8   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       NotSelectedButtonHover;                                     // 0x02B9   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       NotSelectedButtonPressed;                                   // 0x02BA   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       SelectedButtonInitial;                                      // 0x02BB   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       SelectedButtonHover;                                        // 0x02BC   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       SelectedButtonPressed;                                      // 0x02BD   (0x0001)  
	TEnumAsByte<EColorType>                            NotSelectedContentColor;                                    // 0x02BE   (0x0001)  
	TEnumAsByte<EColorType>                            NotSelectedContentHoverColor;                               // 0x02BF   (0x0001)  
	FVector2D                                          IconSize;                                                   // 0x02C0   (0x0008)  
	class UTexture2D*                                  Icon;                                                       // 0x02C8   (0x0008)  
	TEnumAsByte<EColorType>                            SelectedContentColor;                                       // 0x02D0   (0x0001)  
	TEnumAsByte<EColorType>                            SelectedContentHoverColor;                                  // 0x02D1   (0x0001)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.IsButtonSelected
	// void IsButtonSelected(bool& IsSelected);                                                                                 // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.GetThemeData
	// void GetThemeData(FS_ThemeData& ButtonThemeData);                                                                        // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.IsButtonEnabled
	// void IsButtonEnabled(bool& IsEnabled);                                                                                   // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.GetWidget
	// void GetWidget(TArray<UButton*>& Widgets);                                                                               // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.UpdateButtonIcon
	// void UpdateButtonIcon();                                                                                                 // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.SetButtonState
	// void SetButtonState(bool IsSelected);                                                                                    // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.ImageSelectedColorBinding
	// FLinearColor ImageSelectedColorBinding();                                                                                // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.ImageNotSelectedColorBinding
	// FLinearColor ImageNotSelectedColorBinding();                                                                             // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.SetButtonEnabled
	// void SetButtonEnabled(bool IsEnabled);                                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.SetExtraData
	// void SetExtraData(TArray<FString>& ExtraData);                                                                           // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.SetButtonText
	// void SetButtonText(FText ButtonText);                                                                                    // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.BndEvt__Button_NotInCart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_NotInCart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                    // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.BndEvt__Button_InCart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_InCart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();                       // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.ConstructButton
	// void ConstructButton(FText Text, int32_t TextFontSize, bool IsMain, bool IsEnabled, bool IsIconShown);                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.SetButtonSelected
	// void SetButtonSelected(bool IsSelected);                                                                                 // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.SetIconData
	// void SetIconData(TArray<UTexture2D*>& IconData, FVector2D Size, FVector2D IconSpacing);                                  // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewThemeData);                                                                            // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.ExecuteUbergraph_W_ButtonToggle
	// void ExecuteUbergraph_W_ButtonToggle(int32_t EntryPoint);                                                                // [0x18d2100] Final|HasDefaults    
	// Function /Xsolla/Common/Components/Primitives/W_ButtonToggle.W_ButtonToggle_C.OnToggleButtonStateChanged__DelegateSignature
	// void OnToggleButtonStateChanged__DelegateSignature(bool IsInCart);                                                       // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C
/// Size: 0x02CC (716 bytes) (0x000260 - 0x0002CC) align 8 MaxSize: 0x02CC
class UW_ButtonMenuMain_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UButton*                                     Button_Menu;                                                // 0x0268   (0x0008)  
	class UImage*                                      Image_MenuIcon;                                             // 0x0270   (0x0008)  
	class UTextBlock*                                  TextBlock_MenuText;                                         // 0x0278   (0x0008)  
	FText                                              Text;                                                       // 0x0280   (0x0018)  
	class UTexture2D*                                  Icon;                                                       // 0x0298   (0x0008)  
	SDK_UNDEFINED(16,831) /* FMulticastInlineDelegate */ __um(OnMenuButtonClicked);                                // 0x02A0   (0x0010)  
	int32_t                                            TextFontSize;                                               // 0x02B0   (0x0004)  
	bool                                               OverrideDefaultTheme;                                       // 0x02B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02B5   (0x0003)  MISSED
	class UClass*                                      Theme;                                                      // 0x02B8   (0x0008)  
	TEnumAsByte<EColorType>                            ContentColor;                                               // 0x02C0   (0x0001)  
	TEnumAsByte<EColorType>                            ContentHoverColor;                                          // 0x02C1   (0x0001)  
	TEnumAsByte<EFontType>                             ButtonTextFont;                                             // 0x02C2   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x02C3   (0x0001)  MISSED
	FVector2D                                          IconSize;                                                   // 0x02C4   (0x0008)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.IsButtonSelected
	// void IsButtonSelected(bool& IsSelected);                                                                                 // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.IsButtonEnabled
	// void IsButtonEnabled(bool& IsEnabled);                                                                                   // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.GetWidget
	// void GetWidget(TArray<UButton*>& Widgets);                                                                               // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.GetThemeData
	// void GetThemeData(FS_ThemeData& ButtonThemeData);                                                                        // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.SetText
	// void SetText(FText InText);                                                                                              // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.UpdateDefaults
	// void UpdateDefaults(FText Text, int32_t InputPin);                                                                       // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.UpdateIcon
	// void UpdateIcon();                                                                                                       // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.UpdateTextFont
	// void UpdateTextFont();                                                                                                   // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.GetIconDefaultTint
	// void GetIconDefaultTint(class UObject* Object, FSlateColor& SlateColor);                                                 // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.MenuColorBinding
	// FLinearColor MenuColorBinding();                                                                                         // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.SetButtonEnabled
	// void SetButtonEnabled(bool IsEnabled);                                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.SetExtraData
	// void SetExtraData(TArray<FString>& ExtraData);                                                                           // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.SetButtonSelected
	// void SetButtonSelected(bool IsSelected);                                                                                 // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.BndEvt__Button_Menu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Menu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                         // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.ConstructButton
	// void ConstructButton(FText Text, int32_t TextFontSize, bool IsMain, bool IsEnabled, bool IsIconShown);                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.SetIconData
	// void SetIconData(TArray<UTexture2D*>& IconData, FVector2D Size, FVector2D IconSpacing);                                  // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.SetButtonText
	// void SetButtonText(FText ButtonText);                                                                                    // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewThemeData);                                                                            // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.ExecuteUbergraph_W_ButtonMenuMain
	// void ExecuteUbergraph_W_ButtonMenuMain(int32_t EntryPoint);                                                              // [0x18d2100] Final|HasDefaults    
	// Function /Xsolla/Common/Components/Primitives/W_ButtonMenuMain.W_ButtonMenuMain_C.OnMenuButtonClicked__DelegateSignature
	// void OnMenuButtonClicked__DelegateSignature();                                                                           // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C
/// Size: 0x02E8 (744 bytes) (0x000260 - 0x0002E8) align 8 MaxSize: 0x02E8
class UW_ButtonIconText_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UButton*                                     Button_Main;                                                // 0x0268   (0x0008)  
	class UImage*                                      Image_ButtonIcon;                                           // 0x0270   (0x0008)  
	class USpacer*                                     Spacer_IconTextHorizontal;                                  // 0x0278   (0x0008)  
	class USpacer*                                     Spacer_IconVertical;                                        // 0x0280   (0x0008)  
	class UTextBlock*                                  TextBlock_ButtonText;                                       // 0x0288   (0x0008)  
	SDK_UNDEFINED(16,832) /* FMulticastInlineDelegate */ __um(OnButtonClicked);                                    // 0x0290   (0x0010)  
	FText                                              Text;                                                       // 0x02A0   (0x0018)  
	class UTexture2D*                                  Icon;                                                       // 0x02B8   (0x0008)  
	bool                                               OverrideDefaultTheme;                                       // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02C1   (0x0007)  MISSED
	class UClass*                                      Theme;                                                      // 0x02C8   (0x0008)  
	TEnumAsByte<EColorType>                            ContentColor;                                               // 0x02D0   (0x0001)  
	TEnumAsByte<EColorType>                            ContentHoverColor;                                          // 0x02D1   (0x0001)  
	TEnumAsByte<EFontType>                             ButtonTextFont;                                             // 0x02D2   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x02D3   (0x0001)  MISSED
	int32_t                                            TextFontSize;                                               // 0x02D4   (0x0004)  
	FVector2D                                          IconSize;                                                   // 0x02D8   (0x0008)  
	FVector2D                                          Icon_Spacing;                                               // 0x02E0   (0x0008)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.IsButtonSelected
	// void IsButtonSelected(bool& IsSelected);                                                                                 // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.GetThemeData
	// void GetThemeData(FS_ThemeData& ButtonThemeData);                                                                        // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.IsButtonEnabled
	// void IsButtonEnabled(bool& IsEnabled);                                                                                   // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.GetWidget
	// void GetWidget(TArray<UButton*>& Widgets);                                                                               // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.UpdateIconSpacing
	// void UpdateIconSpacing(FVector2D InSize);                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.SetText
	// void SetText(FText InText);                                                                                              // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.UpdateButtonIcon
	// void UpdateButtonIcon(FVector2D ImageSize, class UObject* Icon);                                                         // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.UpdateDefaults
	// void UpdateDefaults(FText Text, int32_t TextFontSize);                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.UpdateTextFont
	// void UpdateTextFont();                                                                                                   // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.ButtonColorBinding
	// FSlateColor ButtonColorBinding();                                                                                        // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.SetButtonEnabled
	// void SetButtonEnabled(bool IsEnabled);                                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.SetExtraData
	// void SetExtraData(TArray<FString>& ExtraData);                                                                           // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.SetButtonSelected
	// void SetButtonSelected(bool IsSelected);                                                                                 // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.BndEvt__Button_Link_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Link_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                         // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.ConstructButton
	// void ConstructButton(FText Text, int32_t TextFontSize, bool IsMain, bool IsEnabled, bool IsIconShown);                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.SetIconData
	// void SetIconData(TArray<UTexture2D*>& IconData, FVector2D Size, FVector2D IconSpacing);                                  // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.SetButtonText
	// void SetButtonText(FText ButtonText);                                                                                    // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewThemeData);                                                                            // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.ExecuteUbergraph_W_ButtonIconText
	// void ExecuteUbergraph_W_ButtonIconText(int32_t EntryPoint);                                                              // [0x18d2100] Final|HasDefaults    
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconText.W_ButtonIconText_C.OnButtonClicked__DelegateSignature
	// void OnButtonClicked__DelegateSignature();                                                                               // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C
/// Size: 0x02B4 (692 bytes) (0x000260 - 0x0002B4) align 8 MaxSize: 0x02B4
class UW_ButtonIconStates_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UButton*                                     Button;                                                     // 0x0268   (0x0008)  
	class UTexture2D*                                  IconInitial;                                                // 0x0270   (0x0008)  
	SDK_UNDEFINED(16,833) /* FMulticastInlineDelegate */ __um(OnIconButtonClicked);                                // 0x0278   (0x0010)  
	class UTexture2D*                                  IconHover;                                                  // 0x0288   (0x0008)  
	class UTexture2D*                                  IconPressed;                                                // 0x0290   (0x0008)  
	bool                                               OverrideDefaultTheme;                                       // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0299   (0x0007)  MISSED
	class UClass*                                      Theme;                                                      // 0x02A0   (0x0008)  
	TEnumAsByte<EColorType>                            IconColor;                                                  // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02A9   (0x0003)  MISSED
	FVector2D                                          IconSize;                                                   // 0x02AC   (0x0008)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.IsButtonSelected
	// void IsButtonSelected(bool& IsSelected);                                                                                 // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.IsButtonEnabled
	// void IsButtonEnabled(bool& IsEnabled);                                                                                   // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.GetWidget
	// void GetWidget(TArray<UButton*>& Widgets);                                                                               // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.GetThemeData
	// void GetThemeData(FS_ThemeData& ButtonThemeData);                                                                        // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.UpdateImage
	// void UpdateImage();                                                                                                      // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.SetButtonEnabled
	// void SetButtonEnabled(bool IsEnabled);                                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.SetExtraData
	// void SetExtraData(TArray<FString>& ExtraData);                                                                           // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.SetButtonSelected
	// void SetButtonSelected(bool IsSelected);                                                                                 // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.SetButtonText
	// void SetButtonText(FText ButtonText);                                                                                    // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                              // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.SetIconData
	// void SetIconData(TArray<UTexture2D*>& IconData, FVector2D Size, FVector2D IconSpacing);                                  // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.ConstructButton
	// void ConstructButton(FText Text, int32_t TextFontSize, bool IsMain, bool IsEnabled, bool IsIconShown);                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewThemeData);                                                                            // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.ExecuteUbergraph_W_ButtonIconStates
	// void ExecuteUbergraph_W_ButtonIconStates(int32_t EntryPoint);                                                            // [0x18d2100] Final|HasDefaults    
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIconStates.W_ButtonIconStates_C.OnIconButtonClicked__DelegateSignature
	// void OnIconButtonClicked__DelegateSignature();                                                                           // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C
/// Size: 0x02B0 (688 bytes) (0x000260 - 0x0002B0) align 8 MaxSize: 0x02B0
class UW_ButtonIcon_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UButton*                                     Button;                                                     // 0x0268   (0x0008)  
	class UImage*                                      Image_Icon;                                                 // 0x0270   (0x0008)  
	class UTexture2D*                                  Icon;                                                       // 0x0278   (0x0008)  
	SDK_UNDEFINED(16,834) /* FMulticastInlineDelegate */ __um(OnClicked);                                          // 0x0280   (0x0010)  
	bool                                               OverrideDefaultTheme;                                       // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0291   (0x0007)  MISSED
	class UClass*                                      Theme;                                                      // 0x0298   (0x0008)  
	TEnumAsByte<EBrushThemeType>                       IconButtonInitial;                                          // 0x02A0   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       IconButtonHover;                                            // 0x02A1   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       IconButtonPressed;                                          // 0x02A2   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       IconButtonDisabled;                                         // 0x02A3   (0x0001)  
	TEnumAsByte<EColorType>                            IconContentColor;                                           // 0x02A4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02A5   (0x0003)  MISSED
	FVector2D                                          IconSize;                                                   // 0x02A8   (0x0008)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.IsButtonSelected
	// void IsButtonSelected(bool& IsSelected);                                                                                 // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.GetThemeData
	// void GetThemeData(FS_ThemeData& ButtonThemeData);                                                                        // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.IsButtonEnabled
	// void IsButtonEnabled(bool& IsEnabled);                                                                                   // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.GetWidget
	// void GetWidget(TArray<UButton*>& Widgets);                                                                               // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.UpdateIcon
	// void UpdateIcon(FVector2D ImageSize, class UTexture2D* InputPin);                                                        // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.GetIconDefaultTint
	// void GetIconDefaultTint(class UTexture2D* InputPin, FSlateColor& SlateColor);                                            // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.SetButtonEnabled
	// void SetButtonEnabled(bool IsEnabled);                                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.SetExtraData
	// void SetExtraData(TArray<FString>& ExtraData);                                                                           // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.SetButtonSelected
	// void SetButtonSelected(bool IsSelected);                                                                                 // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.SetButtonText
	// void SetButtonText(FText ButtonText);                                                                                    // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                              // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.ConstructButton
	// void ConstructButton(FText Text, int32_t TextFontSize, bool IsMain, bool IsEnabled, bool IsIconShown);                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.SetIconData
	// void SetIconData(TArray<UTexture2D*>& IconData, FVector2D Size, FVector2D IconSpacing);                                  // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewThemeData);                                                                            // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.ExecuteUbergraph_W_ButtonIcon
	// void ExecuteUbergraph_W_ButtonIcon(int32_t EntryPoint);                                                                  // [0x18d2100] Final|HasDefaults    
	// Function /Xsolla/Common/Components/Primitives/W_ButtonIcon.W_ButtonIcon_C.OnClicked__DelegateSignature
	// void OnClicked__DelegateSignature();                                                                                     // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C
/// Size: 0x02D8 (728 bytes) (0x000260 - 0x0002D8) align 8 MaxSize: 0x02D8
class UW_ButtonCounter_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UButton*                                     Button_Cart;                                                // 0x0268   (0x0008)  
	class UCanvasPanel*                                CanvasPanel_Counter;                                        // 0x0270   (0x0008)  
	class UImage*                                      Image_Counter;                                              // 0x0278   (0x0008)  
	class UTextBlock*                                  TextBlock_Counter;                                          // 0x0280   (0x0008)  
	class UTextBlock*                                  TextBlock_Main;                                             // 0x0288   (0x0008)  
	SDK_UNDEFINED(16,835) /* FMulticastInlineDelegate */ __um(OnCartButtonClicked);                                // 0x0290   (0x0010)  
	bool                                               OverrideDefaultTheme;                                       // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02A1   (0x0007)  MISSED
	class UClass*                                      Theme;                                                      // 0x02A8   (0x0008)  
	TEnumAsByte<EBrushThemeType>                       ButtonInitial;                                              // 0x02B0   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       ButtonHover;                                                // 0x02B1   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       ButtonPressed;                                              // 0x02B2   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x02B3   (0x0001)  MISSED
	int32_t                                            TextFontSize;                                               // 0x02B4   (0x0004)  
	int32_t                                            CounterFontSize;                                            // 0x02B8   (0x0004)  
	TEnumAsByte<EFontType>                             ButtonTextFont;                                             // 0x02BC   (0x0001)  
	TEnumAsByte<EFontType>                             ButtonCounterFont;                                          // 0x02BD   (0x0001)  
	TEnumAsByte<EColorType>                            ContentColor;                                               // 0x02BE   (0x0001)  
	TEnumAsByte<EColorType>                            CounterContentColor;                                        // 0x02BF   (0x0001)  
	FText                                              ButtonText;                                                 // 0x02C0   (0x0018)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.IsButtonSelected
	// void IsButtonSelected(bool& IsSelected);                                                                                 // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.GetThemeData
	// void GetThemeData(FS_ThemeData& ButtonThemeData);                                                                        // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.IsButtonEnabled
	// void IsButtonEnabled(bool& IsEnabled);                                                                                   // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.GetWidget
	// void GetWidget(TArray<UButton*>& Widgets);                                                                               // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.SetText
	// void SetText(FText Text);                                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.UpdateDefaults
	// void UpdateDefaults(FText ButtonText, int32_t TextFontSize);                                                             // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.UpdateTextFont
	// void UpdateTextFont(class UTextBlock* Text, TEnumAsByte<EFontType> FontType, int32_t Size);                              // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.SetCounterValue
	// void SetCounterValue(int32_t Value);                                                                                     // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.SetButtonEnabled
	// void SetButtonEnabled(bool IsEnabled);                                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.SetIconData
	// void SetIconData(TArray<UTexture2D*>& IconData, FVector2D Size, FVector2D IconSpacing);                                  // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.SetButtonSelected
	// void SetButtonSelected(bool IsSelected);                                                                                 // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.BndEvt__Button_Cart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Cart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                         // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.ConstructButton
	// void ConstructButton(FText Text, int32_t TextFontSize, bool IsMain, bool IsEnabled, bool IsIconShown);                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.SetExtraData
	// void SetExtraData(TArray<FString>& ExtraData);                                                                           // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.SetButtonText
	// void SetButtonText(FText ButtonText);                                                                                    // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewThemeData);                                                                            // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.ExecuteUbergraph_W_ButtonCounter
	// void ExecuteUbergraph_W_ButtonCounter(int32_t EntryPoint);                                                               // [0x18d2100] Final|HasDefaults    
	// Function /Xsolla/Common/Components/Primitives/W_ButtonCounter.W_ButtonCounter_C.OnCartButtonClicked__DelegateSignature
	// void OnCartButtonClicked__DelegateSignature();                                                                           // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Primitives/W_Button.W_Button_C
/// Size: 0x0348 (840 bytes) (0x000260 - 0x000348) align 8 MaxSize: 0x0348
class UW_Button_C : public UXsollaGenericPrimitive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UButton*                                     Button_Main_Disabled;                                       // 0x0268   (0x0008)  
	class UButton*                                     Button_Main_Enabled;                                        // 0x0270   (0x0008)  
	class UButton*                                     Button_Normal_Disabled;                                     // 0x0278   (0x0008)  
	class UButton*                                     Button_Normal_Enabled;                                      // 0x0280   (0x0008)  
	class UImage*                                      Image_Main_Disabled_Icon;                                   // 0x0288   (0x0008)  
	class UImage*                                      Image_Main_Enabled_Icon;                                    // 0x0290   (0x0008)  
	class UImage*                                      Image_Normal_Disabled_Icon;                                 // 0x0298   (0x0008)  
	class UImage*                                      Image_Normal_Enabled_Icon;                                  // 0x02A0   (0x0008)  
	class UTextBlock*                                  TextBlock_Main_Disabled;                                    // 0x02A8   (0x0008)  
	class UTextBlock*                                  TextBlock_Main_Enabled;                                     // 0x02B0   (0x0008)  
	class UTextBlock*                                  TextBlock_Normal_Disabled;                                  // 0x02B8   (0x0008)  
	class UTextBlock*                                  TextBlock_Normal_Enabled;                                   // 0x02C0   (0x0008)  
	class UWidgetSwitcher*                             WidgetSwitcher_ButtonStyle;                                 // 0x02C8   (0x0008)  
	class UWidgetSwitcher*                             WidgetSwitcher_Main_Style;                                  // 0x02D0   (0x0008)  
	class UWidgetSwitcher*                             WidgetSwitcher_Normal_Style;                                // 0x02D8   (0x0008)  
	SDK_UNDEFINED(16,836) /* FMulticastInlineDelegate */ __um(OnClicked);                                          // 0x02E0   (0x0010)  
	bool                                               OverrideDefaultTheme;                                       // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02F1   (0x0007)  MISSED
	class UClass*                                      Theme;                                                      // 0x02F8   (0x0008)  
	FText                                              ButtonText;                                                 // 0x0300   (0x0018)  
	bool                                               IsEnabled;                                                  // 0x0318   (0x0001)  
	bool                                               IsMainButton;                                               // 0x0319   (0x0001)  
	bool                                               UseCustomNormalButtonPressedStyle;                          // 0x031A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x031B   (0x0001)  MISSED
	int32_t                                            TextFontSize;                                               // 0x031C   (0x0004)  
	bool                                               ShowIcon;                                                   // 0x0320   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0321   (0x0007)  MISSED
	class UTexture2D*                                  OptionalIcon;                                               // 0x0328   (0x0008)  
	TEnumAsByte<EBrushThemeType>                       MainButtonInitial;                                          // 0x0330   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       MainButtonHover;                                            // 0x0331   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       MainButtonPressed;                                          // 0x0332   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       MainButtonDisabled;                                         // 0x0333   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       NormalButtonInitial;                                        // 0x0334   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       NormalButtonHover;                                          // 0x0335   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       NormalButtonPressed;                                        // 0x0336   (0x0001)  
	TEnumAsByte<EBrushThemeType>                       NormalButtonDisabled;                                       // 0x0337   (0x0001)  
	TEnumAsByte<EColorType>                            MainContentColor;                                           // 0x0338   (0x0001)  
	TEnumAsByte<EColorType>                            MainContentDisabledColor;                                   // 0x0339   (0x0001)  
	TEnumAsByte<EColorType>                            NormalContentColor;                                         // 0x033A   (0x0001)  
	TEnumAsByte<EColorType>                            NormalContentHoverColor;                                    // 0x033B   (0x0001)  
	TEnumAsByte<EColorType>                            NormalContentDisabledColor;                                 // 0x033C   (0x0001)  
	TEnumAsByte<EFontType>                             ButtonTextFont;                                             // 0x033D   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x033E   (0x0002)  MISSED
	FVector2D                                          IconSize;                                                   // 0x0340   (0x0008)  


	/// Functions
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.IsButtonSelected
	// void IsButtonSelected(bool& IsSelected);                                                                                 // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.GetThemeData
	// void GetThemeData(FS_ThemeData& ButtonThemeData);                                                                        // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.IsButtonEnabled
	// void IsButtonEnabled(bool& IsEnabled);                                                                                   // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.GetWidget
	// void GetWidget(TArray<UButton*>& Widgets);                                                                               // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.UpdateButtonIcon
	// void UpdateButtonIcon();                                                                                                 // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.UpdateDefaults
	// void UpdateDefaults(FText ButtonText, int32_t FontSize, bool IsMain, bool IsEnabled, bool ShowIcon);                     // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.UpdateThemeDefaults
	// void UpdateThemeDefaults(FS_ThemeData& ThemeData);                                                                       // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.GetWidgetTheme
	// class UClass* GetWidgetTheme();                                                                                          // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.UpdateNormalButtonPressedStyle
	// void UpdateNormalButtonPressedStyle();                                                                                   // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.SetFontSize
	// void SetFontSize(int32_t FontSize);                                                                                      // [0x18d2100] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.SetText
	// void SetText(FText Text);                                                                                                // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.SetIsMain
	// void SetIsMain(bool IsMain);                                                                                             // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.NormalIconColorBinding
	// FLinearColor NormalIconColorBinding();                                                                                   // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.MainIconColorBinding
	// FLinearColor MainIconColorBinding();                                                                                     // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.NormalTextBlockColorBinding
	// FSlateColor NormalTextBlockColorBinding();                                                                               // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.MainTextBlockColorBinding
	// FSlateColor MainTextBlockColorBinding();                                                                                 // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.SetExtraData
	// void SetExtraData(TArray<FString>& ExtraData);                                                                           // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.SetButtonSelected
	// void SetButtonSelected(bool IsSelected);                                                                                 // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.Construct
	// void Construct();                                                                                                        // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                         // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.BndEvt__Button_Normal_Enabled_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Normal_Enabled_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();               // [0x18d2100] BlueprintEvent       
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.SetButtonEnabled
	// void SetButtonEnabled(bool IsEnabled);                                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.ConstructButton
	// void ConstructButton(FText Text, int32_t TextFontSize, bool IsMain, bool IsEnabled, bool IsIconShown);                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.SetIconData
	// void SetIconData(TArray<UTexture2D*>& IconData, FVector2D Size, FVector2D IconSpacing);                                  // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.SetButtonText
	// void SetButtonText(FText ButtonText);                                                                                    // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewThemeData);                                                                            // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.ExecuteUbergraph_W_Button
	// void ExecuteUbergraph_W_Button(int32_t EntryPoint);                                                                      // [0x18d2100] Final|HasDefaults    
	// Function /Xsolla/Common/Components/Primitives/W_Button.W_Button_C.OnClicked__DelegateSignature
	// void OnClicked__DelegateSignature();                                                                                     // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C
/// Size: 0x0400 (1024 bytes) (0x000370 - 0x000400) align 8 MaxSize: 0x0400
class UW_ButtonWrapper_C : public UXsollaGenericWrapper
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  
	class UBorder*                                     Border_WidgetPlaceholder;                                   // 0x0378   (0x0008)  
	class UTextBlock*                                  TextBlock_NoWidgetMessage;                                  // 0x0380   (0x0008)  
	class UWidgetSwitcher*                             WidgetSwitcher_Widget;                                      // 0x0388   (0x0008)  
	SDK_UNDEFINED(16,837) /* TScriptInterface<BlueprintGeneratedClass> */ __um(Button);                            // 0x0390   (0x0010)  
	FText                                              ButtonText;                                                 // 0x03A0   (0x0018)  
	int32_t                                            TextFontSize;                                               // 0x03B8   (0x0004)  
	bool                                               IsMain;                                                     // 0x03BC   (0x0001)  
	bool                                               IsEnabled;                                                  // 0x03BD   (0x0001)  
	bool                                               IsIconShown;                                                // 0x03BE   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x03BF   (0x0001)  MISSED
	TArray<class UTexture2D*>                          IconData;                                                   // 0x03C0   (0x0010)  
	FVector2D                                          IconSize;                                                   // 0x03D0   (0x0008)  
	TArray<FString>                                    ExtraData;                                                  // 0x03D8   (0x0010)  
	SDK_UNDEFINED(16,838) /* FMulticastInlineDelegate */ __um(OnClicked);                                          // 0x03E8   (0x0010)  
	FVector2D                                          IconSpacing;                                                // 0x03F8   (0x0008)  


	/// Functions
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.IsButtonSelected
	// void IsButtonSelected(bool& IsSelected);                                                                                 // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.GetThemeData
	// void GetThemeData(FS_ThemeData& ButtonThemeData);                                                                        // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.IsButtonEnabled
	// void IsButtonEnabled(bool& IsEnabled);                                                                                   // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.GetWidget
	// void GetWidget(TArray<UButton*>& Widgets);                                                                               // [0x18d2100] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.GetWidgetInterface
	// void GetWidgetInterface(TScriptInterface<BlueprintGeneratedClass>& Button);                                              // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.InitializeButton
	// void InitializeButton();                                                                                                 // [0x18d2100] Private|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.UpdateThemeParams
	// void UpdateThemeParams();                                                                                                // [0x18d2100] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.UpdateTheme
	// void UpdateTheme(FS_ThemeData& NewThemeData);                                                                            // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x18d2100] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.SetButtonSelected
	// void SetButtonSelected(bool IsSelected);                                                                                 // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.SetIconData
	// void SetIconData(TArray<UTexture2D*>& IconData, FVector2D Size, FVector2D IconSpacing);                                  // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.SetExtraData
	// void SetExtraData(TArray<FString>& ExtraData);                                                                           // [0x18d2100] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.ConstructButton
	// void ConstructButton(FText Text, int32_t TextFontSize, bool IsMain, bool IsEnabled, bool IsIconShown);                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.SetButtonEnabled
	// void SetButtonEnabled(bool IsEnabled);                                                                                   // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.OnButtonClicked
	// void OnButtonClicked();                                                                                                  // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.SetButtonText
	// void SetButtonText(FText ButtonText);                                                                                    // [0x18d2100] Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.UpdateWrapperTheme
	// void UpdateWrapperTheme();                                                                                               // [0x18d2100] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.ExecuteUbergraph_W_ButtonWrapper
	// void ExecuteUbergraph_W_ButtonWrapper(int32_t EntryPoint);                                                               // [0x18d2100] Final|HasDefaults    
	// Function /Xsolla/Common/Components/Wrappers/W_ButtonWrapper.W_ButtonWrapper_C.OnClicked__DelegateSignature
	// void OnClicked__DelegateSignature();                                                                                     // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Struct /Xsolla/Common/Misc/S_ThemeData.S_ThemeData
/// Size: 0x0100 (256 bytes) (0x000000 - 0x000100) align 8 MaxSize: 0x0100
struct FS_ThemeData
{ 
	bool                                               OverrideDefaultTheme_1_537D572B46F85EDFDC025FBB31ED615A;    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UClass*                                      Theme_4_C54FFF394211EB579BB5BB9F3B90C27E;                   // 0x0008   (0x0008)  
	FThemeParameters                                   Parameters_15_E2D083664B255255C8AE999233550E7E;             // 0x0010   (0x00F0)  
};

#pragma pack(pop)


static_assert(sizeof(UBPI_PrimitivesCheckbox_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBPI_PrimitivesImage_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBPI_PrimitivesButton_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBPI_PrimitivesRichText_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBPI_PrimitivesText_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBPI_PrimitivesInput_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UW_TextEdit_C) == 0x02B7); // 695 bytes (0x000260 - 0x0002B7)
static_assert(sizeof(UW_Text_C) == 0x02BB); // 699 bytes (0x000260 - 0x0002BB)
static_assert(sizeof(UW_RichText_C) == 0x02C8); // 712 bytes (0x000260 - 0x0002C8)
static_assert(sizeof(UW_Link_C) == 0x02C0); // 704 bytes (0x000260 - 0x0002C0)
static_assert(sizeof(UW_InputSearch_C) == 0x02EA); // 746 bytes (0x000260 - 0x0002EA)
static_assert(sizeof(UW_InputExecute_C) == 0x031A); // 794 bytes (0x000260 - 0x00031A)
static_assert(sizeof(UW_Input_C) == 0x02E4); // 740 bytes (0x000260 - 0x0002E4)
static_assert(sizeof(UW_Image_C) == 0x0310); // 784 bytes (0x000260 - 0x000310)
static_assert(sizeof(UW_Icon_C) == 0x030B); // 779 bytes (0x000260 - 0x00030B)
static_assert(sizeof(UW_Checkbox_C) == 0x02D1); // 721 bytes (0x000260 - 0x0002D1)
static_assert(sizeof(UW_ButtonToggle_C) == 0x02D2); // 722 bytes (0x000260 - 0x0002D2)
static_assert(sizeof(UW_ButtonMenuMain_C) == 0x02CC); // 716 bytes (0x000260 - 0x0002CC)
static_assert(sizeof(UW_ButtonIconText_C) == 0x02E8); // 744 bytes (0x000260 - 0x0002E8)
static_assert(sizeof(UW_ButtonIconStates_C) == 0x02B4); // 692 bytes (0x000260 - 0x0002B4)
static_assert(sizeof(UW_ButtonIcon_C) == 0x02B0); // 688 bytes (0x000260 - 0x0002B0)
static_assert(sizeof(UW_ButtonCounter_C) == 0x02D8); // 728 bytes (0x000260 - 0x0002D8)
static_assert(sizeof(UW_Button_C) == 0x0348); // 840 bytes (0x000260 - 0x000348)
static_assert(sizeof(UW_ButtonWrapper_C) == 0x0400); // 1024 bytes (0x000370 - 0x000400)
static_assert(sizeof(FS_ThemeData) == 0x0100); // 256 bytes (0x000000 - 0x000100)
static_assert(offsetof(UW_TextEdit_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_TextEdit_C, EditableText) == 0x0268);
static_assert(offsetof(UW_TextEdit_C, Theme) == 0x0288);
static_assert(offsetof(UW_TextEdit_C, MainTextColor) == 0x0290);
static_assert(offsetof(UW_TextEdit_C, SecondaryTextColor) == 0x0291);
static_assert(offsetof(UW_TextEdit_C, AccentTextColor) == 0x0292);
static_assert(offsetof(UW_TextEdit_C, RegularTextFont) == 0x0293);
static_assert(offsetof(UW_TextEdit_C, BoldTextFont) == 0x0294);
static_assert(offsetof(UW_TextEdit_C, HintText) == 0x0298);
static_assert(offsetof(UW_TextEdit_C, TextJustification) == 0x02B4);
static_assert(offsetof(UW_TextEdit_C, Type) == 0x02B5);
static_assert(offsetof(UW_Text_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_Text_C, Image_CrossText) == 0x0268);
static_assert(offsetof(UW_Text_C, ScaleBox_Cross) == 0x0270);
static_assert(offsetof(UW_Text_C, TextBlock_Text) == 0x0278);
static_assert(offsetof(UW_Text_C, Theme) == 0x0288);
static_assert(offsetof(UW_Text_C, MainTextColor) == 0x0290);
static_assert(offsetof(UW_Text_C, SecondaryTextColor) == 0x0291);
static_assert(offsetof(UW_Text_C, AccentTextColor) == 0x0292);
static_assert(offsetof(UW_Text_C, RegularTextFont) == 0x0293);
static_assert(offsetof(UW_Text_C, Text) == 0x0298);
static_assert(offsetof(UW_Text_C, TextJustification) == 0x02B4);
static_assert(offsetof(UW_Text_C, Type) == 0x02B5);
static_assert(offsetof(UW_Text_C, BoldTextFont) == 0x02B6);
static_assert(offsetof(UW_Text_C, CrossColor) == 0x02BA);
static_assert(offsetof(UW_RichText_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_RichText_C, Image_CrossText) == 0x0268);
static_assert(offsetof(UW_RichText_C, RichTextBlock_Text) == 0x0270);
static_assert(offsetof(UW_RichText_C, ScaleBox_Cross) == 0x0278);
static_assert(offsetof(UW_RichText_C, Theme) == 0x0288);
static_assert(offsetof(UW_RichText_C, MainTextColor) == 0x0290);
static_assert(offsetof(UW_RichText_C, SecondaryTextColor) == 0x0291);
static_assert(offsetof(UW_RichText_C, AccentTextColor) == 0x0292);
static_assert(offsetof(UW_RichText_C, RegularTextFont) == 0x0293);
static_assert(offsetof(UW_RichText_C, Text) == 0x0298);
static_assert(offsetof(UW_RichText_C, TextJustification) == 0x02B4);
static_assert(offsetof(UW_RichText_C, Type) == 0x02B5);
static_assert(offsetof(UW_RichText_C, BoldTextFont) == 0x02B6);
static_assert(offsetof(UW_RichText_C, CrossColor) == 0x02BA);
static_assert(offsetof(UW_RichText_C, TextStyleSet) == 0x02C0);
static_assert(offsetof(UW_Link_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_Link_C, Button_Link) == 0x0268);
static_assert(offsetof(UW_Link_C, Image_Underline) == 0x0270);
static_assert(offsetof(UW_Link_C, TextBlock_LinkText) == 0x0278);
static_assert(offsetof(UW_Link_C, Text) == 0x0290);
static_assert(offsetof(UW_Link_C, Theme) == 0x02B0);
static_assert(offsetof(UW_Link_C, LinkTextColor) == 0x02B8);
static_assert(offsetof(UW_Link_C, LinkTextHoverColor) == 0x02B9);
static_assert(offsetof(UW_Link_C, LinkTextFont) == 0x02BA);
static_assert(offsetof(UW_InputSearch_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_InputSearch_C, EditableTextBox_Input) == 0x0268);
static_assert(offsetof(UW_InputSearch_C, Image_SearchIcon) == 0x0270);
static_assert(offsetof(UW_InputSearch_C, SizeBox_Clear) == 0x0278);
static_assert(offsetof(UW_InputSearch_C, W_ButtonIcon_Clear) == 0x0280);
static_assert(offsetof(UW_InputSearch_C, Hint) == 0x0298);
static_assert(offsetof(UW_InputSearch_C, Justification) == 0x02B0);
static_assert(offsetof(UW_InputSearch_C, Theme) == 0x02D0);
static_assert(offsetof(UW_InputSearch_C, InputInitial) == 0x02D8);
static_assert(offsetof(UW_InputSearch_C, InputHover) == 0x02D9);
static_assert(offsetof(UW_InputSearch_C, InputActive) == 0x02DA);
static_assert(offsetof(UW_InputSearch_C, InputDisabled) == 0x02DB);
static_assert(offsetof(UW_InputSearch_C, InputTextFont) == 0x02DC);
static_assert(offsetof(UW_InputSearch_C, InputTextColor) == 0x02DD);
static_assert(offsetof(UW_InputSearch_C, SearchIconColorInitial) == 0x02E4);
static_assert(offsetof(UW_InputSearch_C, ClearButtonInitial) == 0x02E5);
static_assert(offsetof(UW_InputSearch_C, ClearButtonHover) == 0x02E6);
static_assert(offsetof(UW_InputSearch_C, ClearButtonPressed) == 0x02E7);
static_assert(offsetof(UW_InputSearch_C, ClearButtonDisabled) == 0x02E8);
static_assert(offsetof(UW_InputSearch_C, ClearContentColor) == 0x02E9);
static_assert(offsetof(UW_InputExecute_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_InputExecute_C, EditableTextBox_Input) == 0x0268);
static_assert(offsetof(UW_InputExecute_C, Image) == 0x0270);
static_assert(offsetof(UW_InputExecute_C, SizeBox_Process) == 0x0278);
static_assert(offsetof(UW_InputExecute_C, SizeBox_Success) == 0x0280);
static_assert(offsetof(UW_InputExecute_C, W_SmallIconButton_Proceed) == 0x0288);
static_assert(offsetof(UW_InputExecute_C, WidgetSwitcher_Button) == 0x0290);
static_assert(offsetof(UW_InputExecute_C, Hint) == 0x02A8);
static_assert(offsetof(UW_InputExecute_C, Justification) == 0x02C0);
static_assert(offsetof(UW_InputExecute_C, IconProceed) == 0x02D8);
static_assert(offsetof(UW_InputExecute_C, IconSuccess) == 0x02E0);
static_assert(offsetof(UW_InputExecute_C, Theme) == 0x0300);
static_assert(offsetof(UW_InputExecute_C, InputInitial) == 0x0308);
static_assert(offsetof(UW_InputExecute_C, InputHover) == 0x0309);
static_assert(offsetof(UW_InputExecute_C, InputActive) == 0x030A);
static_assert(offsetof(UW_InputExecute_C, InputDisabled) == 0x030B);
static_assert(offsetof(UW_InputExecute_C, InputTextFont) == 0x030C);
static_assert(offsetof(UW_InputExecute_C, InputTextColor) == 0x030D);
static_assert(offsetof(UW_InputExecute_C, IconColor) == 0x0314);
static_assert(offsetof(UW_InputExecute_C, ProceedButtonInitial) == 0x0315);
static_assert(offsetof(UW_InputExecute_C, ProceedButtonHover) == 0x0316);
static_assert(offsetof(UW_InputExecute_C, ProceedButtonPressed) == 0x0317);
static_assert(offsetof(UW_InputExecute_C, ProceedButtonDisabled) == 0x0318);
static_assert(offsetof(UW_InputExecute_C, ProceedContentColor) == 0x0319);
static_assert(offsetof(UW_Input_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_Input_C, Button_RevealPassword) == 0x0268);
static_assert(offsetof(UW_Input_C, EditableTextBox_Input) == 0x0270);
static_assert(offsetof(UW_Input_C, Image_Eye) == 0x0278);
static_assert(offsetof(UW_Input_C, Hint) == 0x0298);
static_assert(offsetof(UW_Input_C, Justification) == 0x02B0);
static_assert(offsetof(UW_Input_C, Theme) == 0x02D0);
static_assert(offsetof(UW_Input_C, InputInitial) == 0x02D8);
static_assert(offsetof(UW_Input_C, InputHover) == 0x02D9);
static_assert(offsetof(UW_Input_C, InputActive) == 0x02DA);
static_assert(offsetof(UW_Input_C, InputDisabled) == 0x02DB);
static_assert(offsetof(UW_Input_C, InputTextFont) == 0x02E0);
static_assert(offsetof(UW_Input_C, InputTextColor) == 0x02E1);
static_assert(offsetof(UW_Input_C, IconColorInitial) == 0x02E2);
static_assert(offsetof(UW_Input_C, IconColorHover) == 0x02E3);
static_assert(offsetof(UW_Image_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_Image_C, Image_Main) == 0x0268);
static_assert(offsetof(UW_Image_C, Theme) == 0x0278);
static_assert(offsetof(UW_Image_C, ImageBrush) == 0x0280);
static_assert(offsetof(UW_Image_C, DefaultImage) == 0x0288);
static_assert(offsetof(UW_Icon_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_Icon_C, Image_Icon) == 0x0268);
static_assert(offsetof(UW_Icon_C, IconImage) == 0x0270);
static_assert(offsetof(UW_Icon_C, Type) == 0x02F8);
static_assert(offsetof(UW_Icon_C, Theme) == 0x0300);
static_assert(offsetof(UW_Icon_C, MainIconColor) == 0x0308);
static_assert(offsetof(UW_Icon_C, SecondaryIconColor) == 0x0309);
static_assert(offsetof(UW_Icon_C, AccentIconColor) == 0x030A);
static_assert(offsetof(UW_Checkbox_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_Checkbox_C, CheckBox_Tick) == 0x0268);
static_assert(offsetof(UW_Checkbox_C, TextBlock_Checkbotext) == 0x0270);
static_assert(offsetof(UW_Checkbox_C, Text) == 0x0278);
static_assert(offsetof(UW_Checkbox_C, Theme) == 0x02C0);
static_assert(offsetof(UW_Checkbox_C, UncheckedInitial) == 0x02C8);
static_assert(offsetof(UW_Checkbox_C, UncheckedHover) == 0x02C9);
static_assert(offsetof(UW_Checkbox_C, UncheckedPressed) == 0x02CA);
static_assert(offsetof(UW_Checkbox_C, CheckedInitial) == 0x02CB);
static_assert(offsetof(UW_Checkbox_C, CheckedHover) == 0x02CC);
static_assert(offsetof(UW_Checkbox_C, CheckedPressed) == 0x02CD);
static_assert(offsetof(UW_Checkbox_C, CheckboxTextFont) == 0x02CE);
static_assert(offsetof(UW_Checkbox_C, CheckboxTextColor) == 0x02CF);
static_assert(offsetof(UW_Checkbox_C, CheckboxTextInactiveColor) == 0x02D0);
static_assert(offsetof(UW_ButtonToggle_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_ButtonToggle_C, Button_NotSelected) == 0x0268);
static_assert(offsetof(UW_ButtonToggle_C, Button_Selected) == 0x0270);
static_assert(offsetof(UW_ButtonToggle_C, Image_NotSelected) == 0x0278);
static_assert(offsetof(UW_ButtonToggle_C, Image_Selected) == 0x0280);
static_assert(offsetof(UW_ButtonToggle_C, WidgetSwitcher_ToggleButton) == 0x0288);
static_assert(offsetof(UW_ButtonToggle_C, Theme) == 0x02B0);
static_assert(offsetof(UW_ButtonToggle_C, NotSelectedButtonInitial) == 0x02B8);
static_assert(offsetof(UW_ButtonToggle_C, NotSelectedButtonHover) == 0x02B9);
static_assert(offsetof(UW_ButtonToggle_C, NotSelectedButtonPressed) == 0x02BA);
static_assert(offsetof(UW_ButtonToggle_C, SelectedButtonInitial) == 0x02BB);
static_assert(offsetof(UW_ButtonToggle_C, SelectedButtonHover) == 0x02BC);
static_assert(offsetof(UW_ButtonToggle_C, SelectedButtonPressed) == 0x02BD);
static_assert(offsetof(UW_ButtonToggle_C, NotSelectedContentColor) == 0x02BE);
static_assert(offsetof(UW_ButtonToggle_C, NotSelectedContentHoverColor) == 0x02BF);
static_assert(offsetof(UW_ButtonToggle_C, IconSize) == 0x02C0);
static_assert(offsetof(UW_ButtonToggle_C, Icon) == 0x02C8);
static_assert(offsetof(UW_ButtonToggle_C, SelectedContentColor) == 0x02D0);
static_assert(offsetof(UW_ButtonToggle_C, SelectedContentHoverColor) == 0x02D1);
static_assert(offsetof(UW_ButtonMenuMain_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_ButtonMenuMain_C, Button_Menu) == 0x0268);
static_assert(offsetof(UW_ButtonMenuMain_C, Image_MenuIcon) == 0x0270);
static_assert(offsetof(UW_ButtonMenuMain_C, TextBlock_MenuText) == 0x0278);
static_assert(offsetof(UW_ButtonMenuMain_C, Text) == 0x0280);
static_assert(offsetof(UW_ButtonMenuMain_C, Icon) == 0x0298);
static_assert(offsetof(UW_ButtonMenuMain_C, Theme) == 0x02B8);
static_assert(offsetof(UW_ButtonMenuMain_C, ContentColor) == 0x02C0);
static_assert(offsetof(UW_ButtonMenuMain_C, ContentHoverColor) == 0x02C1);
static_assert(offsetof(UW_ButtonMenuMain_C, ButtonTextFont) == 0x02C2);
static_assert(offsetof(UW_ButtonMenuMain_C, IconSize) == 0x02C4);
static_assert(offsetof(UW_ButtonIconText_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_ButtonIconText_C, Button_Main) == 0x0268);
static_assert(offsetof(UW_ButtonIconText_C, Image_ButtonIcon) == 0x0270);
static_assert(offsetof(UW_ButtonIconText_C, Spacer_IconTextHorizontal) == 0x0278);
static_assert(offsetof(UW_ButtonIconText_C, Spacer_IconVertical) == 0x0280);
static_assert(offsetof(UW_ButtonIconText_C, TextBlock_ButtonText) == 0x0288);
static_assert(offsetof(UW_ButtonIconText_C, Text) == 0x02A0);
static_assert(offsetof(UW_ButtonIconText_C, Icon) == 0x02B8);
static_assert(offsetof(UW_ButtonIconText_C, Theme) == 0x02C8);
static_assert(offsetof(UW_ButtonIconText_C, ContentColor) == 0x02D0);
static_assert(offsetof(UW_ButtonIconText_C, ContentHoverColor) == 0x02D1);
static_assert(offsetof(UW_ButtonIconText_C, ButtonTextFont) == 0x02D2);
static_assert(offsetof(UW_ButtonIconText_C, IconSize) == 0x02D8);
static_assert(offsetof(UW_ButtonIconText_C, Icon_Spacing) == 0x02E0);
static_assert(offsetof(UW_ButtonIconStates_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_ButtonIconStates_C, Button) == 0x0268);
static_assert(offsetof(UW_ButtonIconStates_C, IconInitial) == 0x0270);
static_assert(offsetof(UW_ButtonIconStates_C, IconHover) == 0x0288);
static_assert(offsetof(UW_ButtonIconStates_C, IconPressed) == 0x0290);
static_assert(offsetof(UW_ButtonIconStates_C, Theme) == 0x02A0);
static_assert(offsetof(UW_ButtonIconStates_C, IconColor) == 0x02A8);
static_assert(offsetof(UW_ButtonIconStates_C, IconSize) == 0x02AC);
static_assert(offsetof(UW_ButtonIcon_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_ButtonIcon_C, Button) == 0x0268);
static_assert(offsetof(UW_ButtonIcon_C, Image_Icon) == 0x0270);
static_assert(offsetof(UW_ButtonIcon_C, Icon) == 0x0278);
static_assert(offsetof(UW_ButtonIcon_C, Theme) == 0x0298);
static_assert(offsetof(UW_ButtonIcon_C, IconButtonInitial) == 0x02A0);
static_assert(offsetof(UW_ButtonIcon_C, IconButtonHover) == 0x02A1);
static_assert(offsetof(UW_ButtonIcon_C, IconButtonPressed) == 0x02A2);
static_assert(offsetof(UW_ButtonIcon_C, IconButtonDisabled) == 0x02A3);
static_assert(offsetof(UW_ButtonIcon_C, IconContentColor) == 0x02A4);
static_assert(offsetof(UW_ButtonIcon_C, IconSize) == 0x02A8);
static_assert(offsetof(UW_ButtonCounter_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_ButtonCounter_C, Button_Cart) == 0x0268);
static_assert(offsetof(UW_ButtonCounter_C, CanvasPanel_Counter) == 0x0270);
static_assert(offsetof(UW_ButtonCounter_C, Image_Counter) == 0x0278);
static_assert(offsetof(UW_ButtonCounter_C, TextBlock_Counter) == 0x0280);
static_assert(offsetof(UW_ButtonCounter_C, TextBlock_Main) == 0x0288);
static_assert(offsetof(UW_ButtonCounter_C, Theme) == 0x02A8);
static_assert(offsetof(UW_ButtonCounter_C, ButtonInitial) == 0x02B0);
static_assert(offsetof(UW_ButtonCounter_C, ButtonHover) == 0x02B1);
static_assert(offsetof(UW_ButtonCounter_C, ButtonPressed) == 0x02B2);
static_assert(offsetof(UW_ButtonCounter_C, ButtonTextFont) == 0x02BC);
static_assert(offsetof(UW_ButtonCounter_C, ButtonCounterFont) == 0x02BD);
static_assert(offsetof(UW_ButtonCounter_C, ContentColor) == 0x02BE);
static_assert(offsetof(UW_ButtonCounter_C, CounterContentColor) == 0x02BF);
static_assert(offsetof(UW_ButtonCounter_C, ButtonText) == 0x02C0);
static_assert(offsetof(UW_Button_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UW_Button_C, Button_Main_Disabled) == 0x0268);
static_assert(offsetof(UW_Button_C, Button_Main_Enabled) == 0x0270);
static_assert(offsetof(UW_Button_C, Button_Normal_Disabled) == 0x0278);
static_assert(offsetof(UW_Button_C, Button_Normal_Enabled) == 0x0280);
static_assert(offsetof(UW_Button_C, Image_Main_Disabled_Icon) == 0x0288);
static_assert(offsetof(UW_Button_C, Image_Main_Enabled_Icon) == 0x0290);
static_assert(offsetof(UW_Button_C, Image_Normal_Disabled_Icon) == 0x0298);
static_assert(offsetof(UW_Button_C, Image_Normal_Enabled_Icon) == 0x02A0);
static_assert(offsetof(UW_Button_C, TextBlock_Main_Disabled) == 0x02A8);
static_assert(offsetof(UW_Button_C, TextBlock_Main_Enabled) == 0x02B0);
static_assert(offsetof(UW_Button_C, TextBlock_Normal_Disabled) == 0x02B8);
static_assert(offsetof(UW_Button_C, TextBlock_Normal_Enabled) == 0x02C0);
static_assert(offsetof(UW_Button_C, WidgetSwitcher_ButtonStyle) == 0x02C8);
static_assert(offsetof(UW_Button_C, WidgetSwitcher_Main_Style) == 0x02D0);
static_assert(offsetof(UW_Button_C, WidgetSwitcher_Normal_Style) == 0x02D8);
static_assert(offsetof(UW_Button_C, Theme) == 0x02F8);
static_assert(offsetof(UW_Button_C, ButtonText) == 0x0300);
static_assert(offsetof(UW_Button_C, OptionalIcon) == 0x0328);
static_assert(offsetof(UW_Button_C, MainButtonInitial) == 0x0330);
static_assert(offsetof(UW_Button_C, MainButtonHover) == 0x0331);
static_assert(offsetof(UW_Button_C, MainButtonPressed) == 0x0332);
static_assert(offsetof(UW_Button_C, MainButtonDisabled) == 0x0333);
static_assert(offsetof(UW_Button_C, NormalButtonInitial) == 0x0334);
static_assert(offsetof(UW_Button_C, NormalButtonHover) == 0x0335);
static_assert(offsetof(UW_Button_C, NormalButtonPressed) == 0x0336);
static_assert(offsetof(UW_Button_C, NormalButtonDisabled) == 0x0337);
static_assert(offsetof(UW_Button_C, MainContentColor) == 0x0338);
static_assert(offsetof(UW_Button_C, MainContentDisabledColor) == 0x0339);
static_assert(offsetof(UW_Button_C, NormalContentColor) == 0x033A);
static_assert(offsetof(UW_Button_C, NormalContentHoverColor) == 0x033B);
static_assert(offsetof(UW_Button_C, NormalContentDisabledColor) == 0x033C);
static_assert(offsetof(UW_Button_C, ButtonTextFont) == 0x033D);
static_assert(offsetof(UW_Button_C, IconSize) == 0x0340);
static_assert(offsetof(UW_ButtonWrapper_C, UberGraphFrame) == 0x0370);
static_assert(offsetof(UW_ButtonWrapper_C, Border_WidgetPlaceholder) == 0x0378);
static_assert(offsetof(UW_ButtonWrapper_C, TextBlock_NoWidgetMessage) == 0x0380);
static_assert(offsetof(UW_ButtonWrapper_C, WidgetSwitcher_Widget) == 0x0388);
static_assert(offsetof(UW_ButtonWrapper_C, ButtonText) == 0x03A0);
static_assert(offsetof(UW_ButtonWrapper_C, IconData) == 0x03C0);
static_assert(offsetof(UW_ButtonWrapper_C, IconSize) == 0x03D0);
static_assert(offsetof(UW_ButtonWrapper_C, ExtraData) == 0x03D8);
static_assert(offsetof(UW_ButtonWrapper_C, IconSpacing) == 0x03F8);
static_assert(offsetof(FS_ThemeData, Theme_4_C54FFF394211EB579BB5BB9F3B90C27E) == 0x0008);
static_assert(offsetof(FS_ThemeData, Parameters_15_E2D083664B255255C8AE999233550E7E) == 0x0010);
