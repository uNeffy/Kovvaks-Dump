
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

#pragma pack(push, 0x1)

/// Enum /Script/MapCreator.EMapCreatorSurfaceType
/// Size: 0x01 (1 bytes)
enum class EMapCreatorSurfaceType : uint8_t
{
	EMapCreatorSurfaceType__Ground                                                   = 0,
	EMapCreatorSurfaceType__Wall                                                     = 1,
	EMapCreatorSurfaceType__Ceiling                                                  = 2,
	EMapCreatorSurfaceType__Ramp                                                     = 3,
	EMapCreatorSurfaceType__Count                                                    = 4
};

/// Enum /Script/MapCreator.EMapCreatorPropertyType
/// Size: 0x01 (1 bytes)
enum class EMapCreatorPropertyType : uint8_t
{
	EMapCreatorPropertyType__Boolean                                                 = 0,
	EMapCreatorPropertyType__Uint32                                                  = 1,
	EMapCreatorPropertyType__Int32                                                   = 2,
	EMapCreatorPropertyType__Float                                                   = 3,
	EMapCreatorPropertyType__String                                                  = 4,
	EMapCreatorPropertyType__Color                                                   = 5
};

/// Enum /Script/MapCreator.EPlane
/// Size: 0x01 (1 bytes)
enum class EPlane : uint8_t
{
	EPlane__XY                                                                       = 0,
	EPlane__XZ                                                                       = 1,
	EPlane__YZ                                                                       = 2
};

/// Enum /Script/MapCreator.ETransformSpace
/// Size: 0x01 (1 bytes)
enum class ETransformSpace : uint8_t
{
	ETransformSpace__World                                                           = 0,
	ETransformSpace__Local                                                           = 1
};

/// Enum /Script/MapCreator.EGizmoType
/// Size: 0x01 (1 bytes)
enum class EGizmoType : uint8_t
{
	EGizmoType__Translation                                                          = 0,
	EGizmoType__Rotation                                                             = 1,
	EGizmoType__Scale                                                                = 2
};

/// Enum /Script/MapCreator.EComponent
/// Size: 0x01 (1 bytes)
enum class EComponent : uint8_t
{
	EComponent__Face                                                                 = 0,
	EComponent__Edge                                                                 = 1,
	EComponent__Vertex                                                               = 2
};

/// Enum /Script/MapCreator.EEditMode
/// Size: 0x01 (1 bytes)
enum class EEditMode : uint8_t
{
	EEditMode__Object                                                                = 0,
	EEditMode__Component                                                             = 1
};

/// Enum /Script/MapCreator.EAssetType
/// Size: 0x01 (1 bytes)
enum class EAssetType : uint8_t
{
	EAssetType__Invalid                                                              = 0,
	EAssetType__Brush                                                                = 1,
	EAssetType__GameObject                                                           = 2,
	EAssetType__Prop                                                                 = 3
};

/// Class /Script/MapCreator.MapCreatorBoxSelectActor
/// Size: 0x0298 (664 bytes) (0x000220 - 0x000298) align 8 MaxSize: 0x0298
class AMapCreatorBoxSelectActor : public AActor
{ 
public:
	class UMaterialInterface*                          InstanceMaterial;                                           // 0x0220   (0x0008)  
	class USceneCaptureComponent2D*                    CaptureComponent;                                           // 0x0228   (0x0008)  
	unsigned char                                      UnknownData00_7[0x68];                                      // 0x0230   (0x0068)  MISSED
};

/// Class /Script/MapCreator.MapCreatorDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMapCreatorDataInterface : public UInterface
{ 
public:
};

/// Class /Script/MapCreator.MapCreatorGizmo
/// Size: 0x0288 (648 bytes) (0x000220 - 0x000288) align 8 MaxSize: 0x0288
class AMapCreatorGizmo : public AActor
{ 
public:
	class UStaticMeshComponent*                        Root;                                                       // 0x0220   (0x0008)  
	class UStaticMeshComponent*                        XAxis;                                                      // 0x0228   (0x0008)  
	class UStaticMeshComponent*                        YAxis;                                                      // 0x0230   (0x0008)  
	class UStaticMeshComponent*                        ZAxis;                                                      // 0x0238   (0x0008)  
	class UStaticMeshComponent*                        XYPlane;                                                    // 0x0240   (0x0008)  
	class UStaticMeshComponent*                        XZPlane;                                                    // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        YZPlane;                                                    // 0x0250   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0258   (0x0008)  MISSED
	class USceneComponent*                             GizmoRootComponent;                                         // 0x0260   (0x0008)  
	class UStaticMeshComponent*                        GrabbedGizmoComponent;                                      // 0x0268   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0270   (0x0018)  MISSED
};

/// Class /Script/MapCreator.MapCreatorGrid
/// Size: 0x0258 (600 bytes) (0x000220 - 0x000258) align 8 MaxSize: 0x0258
class AMapCreatorGrid : public AActor
{ 
public:
	class UStaticMeshComponent*                        GridMeshComponent;                                          // 0x0220   (0x0008)  
	bool                                               bDistanceSnapEnabled;                                       // 0x0228   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0229   (0x0003)  MISSED
	float                                              DistanceSnapMultiplier;                                     // 0x022C   (0x0004)  
	bool                                               bAngleSnapEnabled;                                          // 0x0230   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0231   (0x0003)  MISSED
	float                                              AngleSnapDegrees;                                           // 0x0234   (0x0004)  
	float                                              LineSize;                                                   // 0x0238   (0x0004)  
	unsigned char                                      UnknownData02_7[0x1C];                                      // 0x023C   (0x001C)  MISSED
};

/// Struct /Script/MapCreator.MapCreatorPropertyDescriptor
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FMapCreatorPropertyDescriptor
{ 
	EMapCreatorPropertyType                            PropertyType;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              PropertyName;                                               // 0x0004   (0x0008)  
	bool                                               bBooleanValue;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	int64_t                                            IntegerValue;                                               // 0x0010   (0x0008)  
	float                                              FloatValue;                                                 // 0x0018   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            StringValue;                                                // 0x0020   (0x0010)  
	FColor                                             ColorValue;                                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/MapCreator.MapCreatorMaterialPropertyDescriptor
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
struct FMapCreatorMaterialPropertyDescriptor : FMapCreatorPropertyDescriptor
{ 
	bool                                               bUseMaterialDefaults;                                       // 0x0038   (0x0001)  
	bool                                               bPlayerEditable;                                            // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/MapCreator.MapCreatorMaterialData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FMapCreatorMaterialData
{ 
	TArray<FMapCreatorMaterialPropertyDescriptor>      Properties;                                                 // 0x0000   (0x0010)  
	class UMaterialInterface*                          Material;                                                   // 0x0010   (0x0008)  
	class UTexture2D*                                  Thumbnail;                                                  // 0x0018   (0x0008)  
	FString                                            Tags;                                                       // 0x0020   (0x0010)  
	FName                                              DisplayName;                                                // 0x0030   (0x0008)  
	FName                                              Name;                                                       // 0x0038   (0x0008)  
};

/// Class /Script/MapCreator.MapCreatorMaterialPackDataAsset
/// Size: 0x00C8 (200 bytes) (0x000030 - 0x0000C8) align 8 MaxSize: 0x00C8
class UMapCreatorMaterialPackDataAsset : public UPrimaryDataAsset
{ 
public:
	FName                                              Name;                                                       // 0x0030   (0x0008)  
	char                                               NumSlotGroups;                                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FMapCreatorMaterialData>                    MaterialData;                                               // 0x0040   (0x0010)  
	TSoftObjectPtr<class UClass*>                      DLCPackBlueprint;                                           // 0x0050   (0x0028)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x0078   (0x0050)  MISSED
};

/// Class /Script/MapCreator.MapCreatorMessageHandlerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMapCreatorMessageHandlerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MapCreator.MapCreatorMessageHandlerInterface.OnExitToScenarioEditor
	// void OnExitToScenarioEditor();                                                                                           // [0x18d2100] Event|Public|BlueprintEvent 
	// Function /Script/MapCreator.MapCreatorMessageHandlerInterface.OnExitMapCreator
	// void OnExitMapCreator();                                                                                                 // [0x18d2100] Event|Public|BlueprintEvent 
};

/// Class /Script/MapCreator.MapCreatorPawn
/// Size: 0x0598 (1432 bytes) (0x000280 - 0x000598) align 8 MaxSize: 0x0598
class AMapCreatorPawn : public APawn
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0280   (0x0010)  MISSED
	class UFloatingPawnMovement*                       FloatingPawnMovement;                                       // 0x0290   (0x0008)  
	class UCameraComponent*                            Camera;                                                     // 0x0298   (0x0008)  
	class AMapCreatorGrid*                             Grid;                                                       // 0x02A0   (0x0008)  
	class UStaticMesh*                                 DefaultManipulationMesh;                                    // 0x02A8   (0x0008)  
	class UStaticMesh*                                 ManipulationMesh;                                           // 0x02B0   (0x0008)  
	class UMaterialInterface*                          DefaultManipulationMaterial;                                // 0x02B8   (0x0008)  
	TArray<class UMaterialInterface*>                  ManipulationMaterials;                                      // 0x02C0   (0x0010)  
	class UMaterialInterface*                          SelectionPostProcessMaterial;                               // 0x02D0   (0x0008)  
	class APostProcessVolume*                          SelectionPostProcessVolume;                                 // 0x02D8   (0x0008)  
	class UClass*                                      MultiSelectBoxActorClass;                                   // 0x02E0   (0x0008)  
	class AActor*                                      MultiSelectBoxActor;                                        // 0x02E8   (0x0008)  
	class AMapCreatorBoxSelectActor*                   BoxSelectActor;                                             // 0x02F0   (0x0008)  
	class UClass*                                      PaintWidgetClass;                                           // 0x02F8   (0x0008)  
	class UUserWidget*                                 PaintWidget;                                                // 0x0300   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0308   (0x0010)  MISSED
	float                                              BrushSpawnDistance;                                         // 0x0318   (0x0004)  
	EGizmoType                                         CurrentGizmoType;                                           // 0x031C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x113];                                     // 0x031D   (0x0113)  MISSED
	bool                                               bGizmosEnabled;                                             // 0x0430   (0x0001)  
	bool                                               bKeysEnabled;                                               // 0x0431   (0x0001)  
	bool                                               bPrimaryDown;                                               // 0x0432   (0x0001)  
	bool                                               bSecondaryDown;                                             // 0x0433   (0x0001)  
	unsigned char                                      UnknownData03_6[0xC4];                                      // 0x0434   (0x00C4)  MISSED
	float                                              PitchXYPlaneLimit;                                          // 0x04F8   (0x0004)  
	unsigned char                                      UnknownData04_6[0x7C];                                      // 0x04FC   (0x007C)  MISSED
	bool                                               bSpawnAtCamera;                                             // 0x0578   (0x0001)  
	unsigned char                                      UnknownData05_7[0x1F];                                      // 0x0579   (0x001F)  MISSED


	/// Functions
	// Function /Script/MapCreator.MapCreatorPawn.SpawnPropFromContentBrowser
	// int32_t SpawnPropFromContentBrowser(FName PropName, FVector2D& MousePosition);                                           // [0xb84da0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorPawn.SpawnGameObjectFromContentBrowser
	// int32_t SpawnGameObjectFromContentBrowser(FName GameObjectName, FVector2D& MousePosition);                               // [0xb84cd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorPawn.SpawnGameObjectAtCursor
	// int32_t SpawnGameObjectAtCursor(FName GameObjectName);                                                                   // [0xb84c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorPawn.SpawnBrushFromContentBrowser
	// int32_t SpawnBrushFromContentBrowser(FName BrushMeshName, FName BrushName, FVector2D& MousePosition);                    // [0xb84b10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorPawn.SpawnBrushAtCursor
	// int32_t SpawnBrushAtCursor(FName BrushMeshName, FName BrushName);                                                        // [0xb84a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorPawn.SetTransformSpace
	// void SetTransformSpace(ETransformSpace RequestTransformSpace);                                                           // [0xb849a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorPawn.SetMaterialSlotGroupSurfaceMaterial
	// void SetMaterialSlotGroupSurfaceMaterial(int32_t Group, EMapCreatorSurfaceType SurfaceType, FName& MaterialPackName, FName& MaterialName); // [0xb84830] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorPawn.SetMaterialGroupAndSurfaceSlotAtMousePosition
	// bool SetMaterialGroupAndSurfaceSlotAtMousePosition(int32_t GroupIndex, EMapCreatorSurfaceType SurfaceType, FVector2D& MousePosition); // [0xb84720] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorPawn.SetMaterialGroupAndSurfaceSlotAtCursor
	// bool SetMaterialGroupAndSurfaceSlotAtCursor(int32_t GroupIndex, EMapCreatorSurfaceType SurfaceType);                     // [0xb84650] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorPawn.ReplaceSelectedBrushes
	// void ReplaceSelectedBrushes(FName NewBrushName);                                                                         // [0xb84560] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorPawn.HasUnsavedChanges
	// bool HasUnsavedChanges();                                                                                                // [0xb840c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MapCreator.MapCreatorPawn.HasCurrentInteraction
	// bool HasCurrentInteraction();                                                                                            // [0xb84090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MapCreator.MapCreatorPawn.GridSetDistanceSnapMultiplier
	// void GridSetDistanceSnapMultiplier(int32_t SnapMultiplier);                                                              // [0xb84000] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorPawn.GridSetDistanceSnapEnabled
	// void GridSetDistanceSnapEnabled(bool bEnable);                                                                           // [0xb83f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorPawn.GridSetAngleSnapEnabled
	// void GridSetAngleSnapEnabled(bool bEnable);                                                                              // [0xb83ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorPawn.GridSetAngleSnapDegrees
	// void GridSetAngleSnapDegrees(float SnapDegrees);                                                                         // [0xb83e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorPawn.GetSelectedObjectIds
	// TArray<int32_t> GetSelectedObjectIds();                                                                                  // [0xb83c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MapCreator.MapCreatorPawn.GetEffectiveTransformSpace
	// ETransformSpace GetEffectiveTransformSpace();                                                                            // [0xb83c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MapCreator.MapCreatorPawn.GetEditMode
	// EEditMode GetEditMode();                                                                                                 // [0xb83c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MapCreator.MapCreatorPawn.EnableKeys
	// void EnableKeys();                                                                                                       // [0xb83ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorPawn.DisableKeys
	// void DisableKeys();                                                                                                      // [0xb83a90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MapCreator.MapCreatorPlayerController
/// Size: 0x0580 (1408 bytes) (0x000570 - 0x000580) align 8 MaxSize: 0x0580
class AMapCreatorPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0570   (0x0010)  MISSED
};

/// Class /Script/MapCreator.MapCreatorRepository
/// Size: 0x0500 (1280 bytes) (0x000220 - 0x000500) align 8 MaxSize: 0x0500
class AMapCreatorRepository : public AActor
{ 
public:
	class UDataTable*                                  BrushMeshDataTable;                                         // 0x0220   (0x0008)  
	class UDataTable*                                  BrushDataTable;                                             // 0x0228   (0x0008)  
	class UDataTable*                                  GameObjectDataTable;                                        // 0x0230   (0x0008)  
	class UDataTable*                                  PropDataTable;                                              // 0x0238   (0x0008)  
	class UDataTable*                                  AnimePropDataTable;                                         // 0x0240   (0x0008)  
	TArray<class UMapCreatorMaterialPackDataAsset*>    MaterialPackDataAssets;                                     // 0x0248   (0x0010)  
	TArray<class URuntimeMeshComponentStatic*>         BakedRuntimeMeshComponents;                                 // 0x0258   (0x0010)  
	unsigned char                                      UnknownData00_7[0x298];                                     // 0x0268   (0x0298)  MISSED


	/// Functions
	// Function /Script/MapCreator.MapCreatorRepository.OnLevelLoadComplete
	// void OnLevelLoadComplete();                                                                                              // [0x18d2100] Event|Protected|BlueprintEvent 
	// Function /Script/MapCreator.MapCreatorRepository.OnAssetObjectRemoved
	// void OnAssetObjectRemoved(int32_t ObjectId, EAssetType AssetType, FName AssetName, class UObject* Object);               // [0x18d2100] Event|Protected|BlueprintEvent 
	// Function /Script/MapCreator.MapCreatorRepository.OnAssetObjectCreated
	// void OnAssetObjectCreated(int32_t ObjectId, EAssetType AssetType, FName AssetName, class UObject* Object);               // [0x18d2100] Event|Protected|BlueprintEvent 
};

/// Class /Script/MapCreator.MapCreatorRotationGizmo
/// Size: 0x0298 (664 bytes) (0x000288 - 0x000298) align 8 MaxSize: 0x0298
class AMapCreatorRotationGizmo : public AMapCreatorGizmo
{ 
public:
	class UStaticMesh*                                 QuarterCircleStaticMesh;                                    // 0x0288   (0x0008)  
	class UStaticMesh*                                 FullCircleStaticMesh;                                       // 0x0290   (0x0008)  
};

/// Class /Script/MapCreator.MapCreatorScaleGizmo
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class AMapCreatorScaleGizmo : public AMapCreatorGizmo
{ 
public:
};

/// Class /Script/MapCreator.MapCreatorSingleton
/// Size: 0x03B0 (944 bytes) (0x000028 - 0x0003B0) align 8 MaxSize: 0x03B0
class UMapCreatorSingleton : public UObject
{ 
public:
	class AMapCreatorPawn*                             MapCreatorPawn;                                             // 0x0028   (0x0008)  
	class APlayerController*                           GamePlayerController;                                       // 0x0030   (0x0008)  
	class AMapCreatorRepository*                       Repository;                                                 // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0040   (0x0060)  MISSED
	SDK_UNDEFINED(16,309) /* FMulticastInlineDelegate */ __um(OnEnterEditor);                                      // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,310) /* FMulticastInlineDelegate */ __um(OnExitEditor);                                       // 0x00B0   (0x0010)  
	class UClass*                                      MapCreatorPawnClass;                                        // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x2E8];                                     // 0x00C8   (0x02E8)  MISSED


	/// Functions
	// Function /Script/MapCreator.MapCreatorSingleton.SetUIInitialized
	// void SetUIInitialized();                                                                                                 // [0xb84a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorSingleton.SaveChanges
	// void SaveChanges();                                                                                                      // [0xb84630] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorSingleton.SaveAs
	// void SaveAs();                                                                                                           // [0xb84610] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorSingleton.Reset
	// void Reset();                                                                                                            // [0xb845f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorSingleton.NewMap
	// void NewMap();                                                                                                           // [0xb84540] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorSingleton.IsInitialized
	// bool IsInitialized();                                                                                                    // [0xb84510] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MapCreator.MapCreatorSingleton.IsEditorActive
	// bool IsEditorActive();                                                                                                   // [0xb84390] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MapCreator.MapCreatorSingleton.Get
	// class UMapCreatorSingleton* Get();                                                                                       // [0xb83c00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MapCreator.MapCreatorSingleton.ExitEditor
	// void ExitEditor();                                                                                                       // [0xb83be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorSingleton.EnterEditorUI
	// void EnterEditorUI();                                                                                                    // [0xb83bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorSingleton.EnterEditor
	// void EnterEditor(class APlayerController* GameController, float CustomFOV);                                              // [0xb83af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MapCreator.MapCreatorSingleton.DiscardChanges
	// void DiscardChanges();                                                                                                   // [0xb83ab0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MapCreator.MapCreatorTranslationGizmo
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class AMapCreatorTranslationGizmo : public AMapCreatorGizmo
{ 
public:
};

/// Class /Script/MapCreator.MapCreatorPropDataTableFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMapCreatorPropDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MapCreator.MapCreatorPropDataTableFunctionLibrary.IsFreeDLCProp
	// bool IsFreeDLCProp(FMapCreatorPropDataTableRow& It);                                                                     // [0xb843c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MapCreator.MapCreatorPropDataTableFunctionLibrary.IsDLCAvailable
	// bool IsDLCAvailable(FMapCreatorPropDataTableRow& It);                                                                    // [0xb84240] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MapCreator.MapCreatorPropDataTableFunctionLibrary.IsAvailable
	// bool IsAvailable(FMapCreatorPropDataTableRow& It);                                                                       // [0xb840f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MapCreator.MapCreatorPropDataTableFunctionLibrary.GetStaticMesh
	// class UStaticMesh* GetStaticMesh(FMapCreatorPropDataTableRow& It);                                                       // [0xb83d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/MapCreator.MapCreatorAssetDataTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FMapCreatorAssetDataTableRow : FTableRowBase
{ 
	TArray<FMapCreatorPropertyDescriptor>              PrivateProperties;                                          // 0x0008   (0x0010)  
	TArray<FMapCreatorPropertyDescriptor>              PublicProperties;                                           // 0x0018   (0x0010)  
	bool                                               bCanDeform;                                                 // 0x0028   (0x0001)  
	bool                                               bCanScale;                                                  // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x002A   (0x0006)  MISSED
	TSoftObjectPtr<class UClass*>                      OwningDLCPack;                                              // 0x0030   (0x0028)  
};

/// Struct /Script/MapCreator.MapCreatorPropDataTableRow
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align 8 MaxSize: 0x0068
struct FMapCreatorPropDataTableRow : FMapCreatorAssetDataTableRow
{ 
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0058   (0x0008)  
	class UStaticMesh*                                 LockedStaticMesh;                                           // 0x0060   (0x0008)  
};

/// Struct /Script/MapCreator.MapCreatorGameObjectDataTableRow
/// Size: 0x0070 (112 bytes) (0x000058 - 0x000070) align 8 MaxSize: 0x0070
struct FMapCreatorGameObjectDataTableRow : FMapCreatorAssetDataTableRow
{ 
	class UClass*                                      ActorClass;                                                 // 0x0058   (0x0008)  
	bool                                               bKeepNativeScale;                                           // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0061   (0x000F)  MISSED
};

/// Struct /Script/MapCreator.MapCreatorBrushDataTableRow
/// Size: 0x0078 (120 bytes) (0x000058 - 0x000078) align 8 MaxSize: 0x0078
struct FMapCreatorBrushDataTableRow : FMapCreatorAssetDataTableRow
{ 
	bool                                               bVisible;                                                   // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	FName                                              CollisionProfile;                                           // 0x005C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0068   (0x0008)  
	class UMaterialInterface*                          EditorMaterial;                                             // 0x0070   (0x0008)  
};

/// Struct /Script/MapCreator.MapCreatorBrushMeshDataTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FMapCreatorBrushMeshDataTableRow : FTableRowBase
{ 
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0008   (0x0008)  
	FVector                                            SpawnSnapMultiplier;                                        // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<EMapCreatorSurfaceType>                     FaceSurfaceTypes;                                           // 0x0020   (0x0010)  
};

/// Struct /Script/MapCreator.MapCreatorBrushMeshSurfaceDataDesc
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMapCreatorBrushMeshSurfaceDataDesc
{ 
	EMapCreatorSurfaceType                             SurfaceType;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            TriangleIndices;                                            // 0x0008   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(AMapCreatorBoxSelectActor) == 0x0298); // 664 bytes (0x000220 - 0x000298)
static_assert(sizeof(UMapCreatorDataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AMapCreatorGizmo) == 0x0288); // 648 bytes (0x000220 - 0x000288)
static_assert(sizeof(AMapCreatorGrid) == 0x0258); // 600 bytes (0x000220 - 0x000258)
static_assert(sizeof(FMapCreatorPropertyDescriptor) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMapCreatorMaterialPropertyDescriptor) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FMapCreatorMaterialData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UMapCreatorMaterialPackDataAsset) == 0x00C8); // 200 bytes (0x000030 - 0x0000C8)
static_assert(sizeof(UMapCreatorMessageHandlerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AMapCreatorPawn) == 0x0598); // 1432 bytes (0x000280 - 0x000598)
static_assert(sizeof(AMapCreatorPlayerController) == 0x0580); // 1408 bytes (0x000570 - 0x000580)
static_assert(sizeof(AMapCreatorRepository) == 0x0500); // 1280 bytes (0x000220 - 0x000500)
static_assert(sizeof(AMapCreatorRotationGizmo) == 0x0298); // 664 bytes (0x000288 - 0x000298)
static_assert(sizeof(AMapCreatorScaleGizmo) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UMapCreatorSingleton) == 0x03B0); // 944 bytes (0x000028 - 0x0003B0)
static_assert(sizeof(AMapCreatorTranslationGizmo) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UMapCreatorPropDataTableFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMapCreatorAssetDataTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FMapCreatorPropDataTableRow) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(FMapCreatorGameObjectDataTableRow) == 0x0070); // 112 bytes (0x000058 - 0x000070)
static_assert(sizeof(FMapCreatorBrushDataTableRow) == 0x0078); // 120 bytes (0x000058 - 0x000078)
static_assert(sizeof(FMapCreatorBrushMeshDataTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FMapCreatorBrushMeshSurfaceDataDesc) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(AMapCreatorBoxSelectActor, InstanceMaterial) == 0x0220);
static_assert(offsetof(AMapCreatorBoxSelectActor, CaptureComponent) == 0x0228);
static_assert(offsetof(AMapCreatorGizmo, Root) == 0x0220);
static_assert(offsetof(AMapCreatorGizmo, XAxis) == 0x0228);
static_assert(offsetof(AMapCreatorGizmo, YAxis) == 0x0230);
static_assert(offsetof(AMapCreatorGizmo, ZAxis) == 0x0238);
static_assert(offsetof(AMapCreatorGizmo, XYPlane) == 0x0240);
static_assert(offsetof(AMapCreatorGizmo, XZPlane) == 0x0248);
static_assert(offsetof(AMapCreatorGizmo, YZPlane) == 0x0250);
static_assert(offsetof(AMapCreatorGizmo, GizmoRootComponent) == 0x0260);
static_assert(offsetof(AMapCreatorGizmo, GrabbedGizmoComponent) == 0x0268);
static_assert(offsetof(AMapCreatorGrid, GridMeshComponent) == 0x0220);
static_assert(offsetof(FMapCreatorPropertyDescriptor, PropertyType) == 0x0000);
static_assert(offsetof(FMapCreatorPropertyDescriptor, PropertyName) == 0x0004);
static_assert(offsetof(FMapCreatorPropertyDescriptor, StringValue) == 0x0020);
static_assert(offsetof(FMapCreatorPropertyDescriptor, ColorValue) == 0x0030);
static_assert(offsetof(FMapCreatorMaterialData, Properties) == 0x0000);
static_assert(offsetof(FMapCreatorMaterialData, Material) == 0x0010);
static_assert(offsetof(FMapCreatorMaterialData, Thumbnail) == 0x0018);
static_assert(offsetof(FMapCreatorMaterialData, Tags) == 0x0020);
static_assert(offsetof(FMapCreatorMaterialData, DisplayName) == 0x0030);
static_assert(offsetof(FMapCreatorMaterialData, Name) == 0x0038);
static_assert(offsetof(UMapCreatorMaterialPackDataAsset, Name) == 0x0030);
static_assert(offsetof(UMapCreatorMaterialPackDataAsset, MaterialData) == 0x0040);
static_assert(offsetof(UMapCreatorMaterialPackDataAsset, DLCPackBlueprint) == 0x0050);
static_assert(offsetof(AMapCreatorPawn, FloatingPawnMovement) == 0x0290);
static_assert(offsetof(AMapCreatorPawn, Camera) == 0x0298);
static_assert(offsetof(AMapCreatorPawn, Grid) == 0x02A0);
static_assert(offsetof(AMapCreatorPawn, DefaultManipulationMesh) == 0x02A8);
static_assert(offsetof(AMapCreatorPawn, ManipulationMesh) == 0x02B0);
static_assert(offsetof(AMapCreatorPawn, DefaultManipulationMaterial) == 0x02B8);
static_assert(offsetof(AMapCreatorPawn, ManipulationMaterials) == 0x02C0);
static_assert(offsetof(AMapCreatorPawn, SelectionPostProcessMaterial) == 0x02D0);
static_assert(offsetof(AMapCreatorPawn, SelectionPostProcessVolume) == 0x02D8);
static_assert(offsetof(AMapCreatorPawn, MultiSelectBoxActorClass) == 0x02E0);
static_assert(offsetof(AMapCreatorPawn, MultiSelectBoxActor) == 0x02E8);
static_assert(offsetof(AMapCreatorPawn, BoxSelectActor) == 0x02F0);
static_assert(offsetof(AMapCreatorPawn, PaintWidgetClass) == 0x02F8);
static_assert(offsetof(AMapCreatorPawn, PaintWidget) == 0x0300);
static_assert(offsetof(AMapCreatorPawn, CurrentGizmoType) == 0x031C);
static_assert(offsetof(AMapCreatorRepository, BrushMeshDataTable) == 0x0220);
static_assert(offsetof(AMapCreatorRepository, BrushDataTable) == 0x0228);
static_assert(offsetof(AMapCreatorRepository, GameObjectDataTable) == 0x0230);
static_assert(offsetof(AMapCreatorRepository, PropDataTable) == 0x0238);
static_assert(offsetof(AMapCreatorRepository, AnimePropDataTable) == 0x0240);
static_assert(offsetof(AMapCreatorRepository, MaterialPackDataAssets) == 0x0248);
static_assert(offsetof(AMapCreatorRepository, BakedRuntimeMeshComponents) == 0x0258);
static_assert(offsetof(AMapCreatorRotationGizmo, QuarterCircleStaticMesh) == 0x0288);
static_assert(offsetof(AMapCreatorRotationGizmo, FullCircleStaticMesh) == 0x0290);
static_assert(offsetof(UMapCreatorSingleton, MapCreatorPawn) == 0x0028);
static_assert(offsetof(UMapCreatorSingleton, GamePlayerController) == 0x0030);
static_assert(offsetof(UMapCreatorSingleton, Repository) == 0x0038);
static_assert(offsetof(UMapCreatorSingleton, MapCreatorPawnClass) == 0x00C0);
static_assert(offsetof(FMapCreatorAssetDataTableRow, PrivateProperties) == 0x0008);
static_assert(offsetof(FMapCreatorAssetDataTableRow, PublicProperties) == 0x0018);
static_assert(offsetof(FMapCreatorAssetDataTableRow, OwningDLCPack) == 0x0030);
static_assert(offsetof(FMapCreatorPropDataTableRow, StaticMesh) == 0x0058);
static_assert(offsetof(FMapCreatorPropDataTableRow, LockedStaticMesh) == 0x0060);
static_assert(offsetof(FMapCreatorGameObjectDataTableRow, ActorClass) == 0x0058);
static_assert(offsetof(FMapCreatorBrushDataTableRow, CollisionProfile) == 0x005C);
static_assert(offsetof(FMapCreatorBrushDataTableRow, Material) == 0x0068);
static_assert(offsetof(FMapCreatorBrushDataTableRow, EditorMaterial) == 0x0070);
static_assert(offsetof(FMapCreatorBrushMeshDataTableRow, StaticMesh) == 0x0008);
static_assert(offsetof(FMapCreatorBrushMeshDataTableRow, SpawnSnapMultiplier) == 0x0010);
static_assert(offsetof(FMapCreatorBrushMeshDataTableRow, FaceSurfaceTypes) == 0x0020);
static_assert(offsetof(FMapCreatorBrushMeshSurfaceDataDesc, SurfaceType) == 0x0000);
static_assert(offsetof(FMapCreatorBrushMeshSurfaceDataDesc, TriangleIndices) == 0x0008);
