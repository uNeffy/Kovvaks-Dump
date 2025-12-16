
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/RuntimeMeshComponent.ERuntimeMeshCollisionFaceSourceType
/// Size: 0x01 (1 bytes)
enum class ERuntimeMeshCollisionFaceSourceType : uint8_t
{
	ERuntimeMeshCollisionFaceSourceType__Collision                                   = 0,
	ERuntimeMeshCollisionFaceSourceType__Renderable                                  = 1
};

/// Enum /Script/RuntimeMeshComponent.ERuntimeMeshThreadingPriority
/// Size: 0x01 (1 bytes)
enum class ERuntimeMeshThreadingPriority : uint8_t
{
	ERuntimeMeshThreadingPriority__Normal                                            = 0,
	ERuntimeMeshThreadingPriority__AboveNormal                                       = 1,
	ERuntimeMeshThreadingPriority__BelowNormal                                       = 2,
	ERuntimeMeshThreadingPriority__Highest                                           = 3,
	ERuntimeMeshThreadingPriority__Lowest                                            = 4,
	ERuntimeMeshThreadingPriority__SlightlyBelowNormal                               = 5,
	ERuntimeMeshThreadingPriority__TimeCritical                                      = 6
};

/// Enum /Script/RuntimeMeshComponent.ERuntimeMeshCollisionCookingMode
/// Size: 0x01 (1 bytes)
enum class ERuntimeMeshCollisionCookingMode : uint8_t
{
	ERuntimeMeshCollisionCookingMode__CollisionPerformance                           = 0,
	ERuntimeMeshCollisionCookingMode__CookingPerformance                             = 1
};

/// Enum /Script/RuntimeMeshComponent.ERuntimeMeshUpdateFrequency
/// Size: 0x01 (1 bytes)
enum class ERuntimeMeshUpdateFrequency : uint8_t
{
	ERuntimeMeshUpdateFrequency__Average                                             = 0,
	ERuntimeMeshUpdateFrequency__Frequent                                            = 1,
	ERuntimeMeshUpdateFrequency__Infrequent                                          = 2
};

/// Enum /Script/RuntimeMeshComponent.ERuntimeMeshMobility
/// Size: 0x01 (1 bytes)
enum class ERuntimeMeshMobility : uint8_t
{
	ERuntimeMeshMobility__Movable                                                    = 0,
	ERuntimeMeshMobility__Stationary                                                 = 1,
	ERuntimeMeshMobility__Static                                                     = 2
};

/// Enum /Script/RuntimeMeshComponent.ERuntimeMeshSliceCapOption
/// Size: 0x01 (1 bytes)
enum class ERuntimeMeshSliceCapOption : uint8_t
{
	ERuntimeMeshSliceCapOption__NoCap                                                = 0,
	ERuntimeMeshSliceCapOption__CreateNewSectionForCap                               = 1,
	ERuntimeMeshSliceCapOption__UseLastSectionForCap                                 = 2
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URuntimeMeshProviderTargetInterface : public UObject
{ 
public:


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.SetupMaterialSlot
	// void SetupMaterialSlot(int32_t MaterialSlot, FName SlotName, class UMaterialInterface* InMaterial);                      // [0xbf5350] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.SetSectionVisibility
	// void SetSectionVisibility(int32_t LODIndex, int32_t SectionId, bool bIsVisible);                                         // [0xbf5240] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.SetSectionCastsShadow
	// void SetSectionCastsShadow(int32_t LODIndex, int32_t SectionId, bool bCastsShadow);                                      // [0xbf5130] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.SetLODScreenSize
	// void SetLODScreenSize(int32_t LODIndex, float ScreenSize);                                                               // [0xbf5060] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.RemoveSection
	// void RemoveSection(int32_t LODIndex, int32_t SectionId);                                                                 // [0xbf4f90] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.MarkSectionDirty
	// void MarkSectionDirty(int32_t LODIndex, int32_t SectionId);                                                              // [0xbf4ec0] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.MarkLODDirty
	// void MarkLODDirty(int32_t LODIndex);                                                                                     // [0xbf4e30] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.MarkCollisionDirty
	// void MarkCollisionDirty();                                                                                               // [0xbf4e10] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.MarkAllLODsDirty
	// void MarkAllLODsDirty();                                                                                                 // [0xbf4df0] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.IsMaterialSlotNameValid
	// bool IsMaterialSlotNameValid(FName MaterialSlotName);                                                                    // [0xbf4d50] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.GetNumMaterials
	// int32_t GetNumMaterials();                                                                                               // [0xbf4d20] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.GetMaterialSlots
	// TArray<FRuntimeMeshMaterialSlot> GetMaterialSlots();                                                                     // [0xbf4ca0] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.GetMaterialSlotNames
	// TArray<FName> GetMaterialSlotNames();                                                                                    // [0xbf4c20] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.GetMaterialSlot
	// FRuntimeMeshMaterialSlot GetMaterialSlot(int32_t SlotIndex);                                                             // [0xbf4b70] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.GetMaterialIndex
	// int32_t GetMaterialIndex(FName MaterialSlotName);                                                                        // [0xbf4ad0] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.GetMaterial
	// class UMaterialInterface* GetMaterial(int32_t SlotIndex);                                                                // [0xbf4a30] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.CreateSection
	// void CreateSection(int32_t LODIndex, int32_t SectionId, FRuntimeMeshSectionProperties& SectionProperties);               // [0xbf4910] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.ConfigureLODs
	// void ConfigureLODs(TArray<FRuntimeMeshLODProperties>& InLODs);                                                           // [0xbf40a0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderTargetInterface.ClearSection
	// void ClearSection(int32_t LODIndex, int32_t SectionId);                                                                  // [0xbf3fd0] Native|Public|BlueprintCallable 
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshCollisionSourceSectionInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FRuntimeMeshCollisionSourceSectionInfo
{ 
	int32_t                                            StartIndex;                                                 // 0x0000   (0x0004)  
	int32_t                                            EndIndex;                                                   // 0x0004   (0x0004)  
	TWeakObjectPtr<class URuntimeMeshProvider*>        SourceProvider;                                             // 0x0008   (0x0008)  
	int32_t                                            SectionId;                                                  // 0x0010   (0x0004)  
	ERuntimeMeshCollisionFaceSourceType                SourceType;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshAsyncBodySetupData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRuntimeMeshAsyncBodySetupData
{ 
	class UBodySetup*                                  BodySetup;                                                  // 0x0000   (0x0008)  
	TArray<FRuntimeMeshCollisionSourceSectionInfo>     CollisionSources;                                           // 0x0008   (0x0010)  
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshMaterialSlot
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRuntimeMeshMaterialSlot
{ 
	FName                                              SlotName;                                                   // 0x0000   (0x0008)  
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
};

/// Class /Script/RuntimeMeshComponent.RuntimeMesh
/// Size: 0x0470 (1136 bytes) (0x000028 - 0x000470) align 8 MaxSize: 0x0470
class URuntimeMesh : public URuntimeMeshProviderTargetInterface
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	class URuntimeMeshProvider*                        MeshProviderPtr;                                            // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0040   (0x0008)  MISSED
	class UBodySetup*                                  BodySetup;                                                  // 0x0048   (0x0008)  
	TArray<FRuntimeMeshCollisionSourceSectionInfo>     CollisionSource;                                            // 0x0050   (0x0010)  
	TArray<FRuntimeMeshAsyncBodySetupData>             AsyncBodySetupQueue;                                        // 0x0060   (0x0010)  
	unsigned char                                      UnknownData02_6[0x2F8];                                     // 0x0070   (0x02F8)  MISSED
	TArray<FRuntimeMeshMaterialSlot>                   MaterialSlots;                                              // 0x0368   (0x0010)  
	TMap<FName, int32_t>                               SlotNameLookup;                                             // 0x0378   (0x0050)  
	unsigned char                                      UnknownData03_6[0x98];                                      // 0x03C8   (0x0098)  MISSED
	SDK_UNDEFINED(16,958) /* FMulticastInlineDelegate */ __um(CollisionUpdated);                                   // 0x0460   (0x0010)  


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMesh.Reset
	// void Reset();                                                                                                            // [0xbe5ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMesh.IsInitialized
	// bool IsInitialized();                                                                                                    // [0xbe4c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMesh.Initialize
	// void Initialize(class URuntimeMeshProvider* provider);                                                                   // [0xbe4b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMesh.GetProviderPtr
	// class URuntimeMeshProvider* GetProviderPtr();                                                                            // [0xbe3c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMesh.GetLocalBounds
	// FBoxSphereBounds GetLocalBounds();                                                                                       // [0xbe3680] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMesh.GetHitSource
	// FRuntimeMeshCollisionHitInfo GetHitSource(int32_t FaceIndex);                                                            // [0xbe35d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMesh.GetBodySetup
	// class UBodySetup* GetBodySetup();                                                                                        // [0xbe1ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMesh.ForceCollisionUpdate
	// class UBodySetup* ForceCollisionUpdate(bool bForceCookNow);                                                              // [0xbe1bc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshActor
/// Size: 0x0228 (552 bytes) (0x000220 - 0x000228) align 8 MaxSize: 0x0228
class ARuntimeMeshActor : public AActor
{ 
public:
	class URuntimeMeshComponent*                       RuntimeMeshComponent;                                       // 0x0220   (0x0008)  


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshActor.SetRuntimeMeshMobility
	// void SetRuntimeMeshMobility(ERuntimeMeshMobility NewMobility);                                                           // [0xbe7380] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshActor.GetRuntimeMeshMobility
	// ERuntimeMeshMobility GetRuntimeMeshMobility();                                                                           // [0xbe3cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshActor.GetRuntimeMeshComponent
	// class URuntimeMeshComponent* GetRuntimeMeshComponent();                                                                  // [0xbe3c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URuntimeMeshBlueprintFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetVertexIndex
	// void SetVertexIndex(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32_t Index, int32_t NewIndex); // [0xbe77f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetTexCoord
	// void SetTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32_t Index, FVector2D NewTexCoord, int32_t ChannelId); // [0xbe5c90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetTangents
	// void SetTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32_t Index, FVector InTangentX, FVector InTangentY, FVector InTangentZ); // [0xbe75a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetTangent
	// void SetTangent(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32_t Index, FVector NewTangent); // [0xbe7400] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetPosition
	// void SetPosition(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32_t Index, FVector NewPosition); // [0xbe71f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetNumTriangles
	// void SetNumTriangles(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32_t NewNum, bool bAllowShrinking); // [0xbe7050] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetNumTexCoords
	// void SetNumTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32_t NewNum, bool bAllowShrinking); // [0xbe6eb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetNumTangents
	// void SetNumTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32_t NewNum, bool bAllowShrinking); // [0xbe6d20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetNumPositions
	// void SetNumPositions(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32_t NewNum, bool bAllowShrinking); // [0xbe6b90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetNumColors
	// void SetNumColors(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32_t NewNum, bool bAllowShrinking); // [0xbe6a00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetNumCollisionVertices
	// void SetNumCollisionVertices(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32_t NewNum, bool bAllowShrinking); // [0xbe6870] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetNumCollisionTriangles
	// void SetNumCollisionTriangles(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32_t NewNum, bool bAllowShrinking); // [0xbe66e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetNumCollisionTexCoords
	// void SetNumCollisionTexCoords(FRuntimeMeshCollisionTexCoordStream& Stream, FRuntimeMeshCollisionTexCoordStream& OutStream, int32_t NewNumChannels, int32_t NewNumTexCoords, bool bAllowShrinking); // [0xbe64d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetNumCollisionMaterialIndices
	// void SetNumCollisionMaterialIndices(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32_t NewNum, bool bAllowShrinking); // [0xbe6340] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetNormal
	// void SetNormal(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32_t Index, FVector NewNormal); // [0xbe61a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetColor
	// void SetColor(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32_t Index, FLinearColor NewColor); // [0xbe6000] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetCollisionVertex
	// void SetCollisionVertex(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32_t Index, FVector NewVertex); // [0xbe5e70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SetCollisionTexCoord
	// void SetCollisionTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32_t Index, FVector2D NewTexCoord, int32_t ChannelId); // [0xbe5c90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.SeCollisionMaterialIndex
	// void SeCollisionMaterialIndex(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32_t Index, int32_t NewIndex); // [0xbe5b00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.NumTriangles
	// void NumTriangles(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32_t& OutNumTriangles);  // [0xbe5970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.NumTexCoords
	// void NumTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32_t& OutNumTexCoords); // [0xbe57f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.NumTexCoordChannels
	// void NumTexCoordChannels(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32_t& OutNumTexCoordChannels); // [0xbe4d90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.NumTangents
	// void NumTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32_t& OutNumTangents); // [0xbe5680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.NumPositions
	// void NumPositions(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32_t& OutNumPositions); // [0xbe5520] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.NumIndices
	// void NumIndices(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32_t& OutNumIndices);      // [0xbe53b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.NumColors
	// void NumColors(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32_t& OutNumColors);  // [0xbe5250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.NumCollisionVertices
	// void NumCollisionVertices(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32_t& OutNumVertices); // [0xbe50f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.NumCollisionTriangles
	// void NumCollisionTriangles(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32_t& OutNumTriangles); // [0xbe50f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.NumCollisionTexCoords
	// void NumCollisionTexCoords(FRuntimeMeshCollisionTexCoordStream& Stream, FRuntimeMeshCollisionTexCoordStream& OutStream, int32_t ChannelId, int32_t& OutNumTexCoords); // [0xbe4f10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.NumCollisionTexCoordChannels
	// void NumCollisionTexCoordChannels(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32_t& OutNumTexCoordChannels); // [0xbe4d90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.NumCollisionMaterialIndices
	// void NumCollisionMaterialIndices(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32_t& OutNumIndices); // [0xbe4c30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetVertexIndex
	// void GetVertexIndex(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32_t Index, int32_t& OutIndex); // [0xbe49d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetTriangleStream
	// FRuntimeMeshTriangleStream GetTriangleStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData); // [0xbe4770] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetTexCoordStream
	// FRuntimeMeshVertexTexCoordStream GetTexCoordStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData); // [0xbe4510] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetTexCoord
	// void GetTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32_t Index, int32_t ChannelId, FVector2D& OutTexCoord); // [0xbe4320] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetTangentStream
	// FRuntimeMeshVertexTangentStream GetTangentStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData); // [0xbe3e90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetTangents
	// void GetTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32_t Index, FVector& OutTangentX, FVector& OutTangentY, FVector& OutTangentZ); // [0xbe40e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetTangent
	// void GetTangent(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32_t Index, FVector& OutTangent); // [0xbe3ce0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetPositionStream
	// FRuntimeMeshVertexPositionStream GetPositionStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData); // [0xbe3a20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetPosition
	// void GetPosition(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32_t Index, FVector& OutPosition); // [0xbe3880] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetNormal
	// void GetNormal(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32_t Index, FVector& OutNormal); // [0xbe36d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetColorStream
	// FRuntimeMeshVertexColorStream GetColorStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData); // [0xbe3380] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetColor
	// void GetColor(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32_t Index, FLinearColor& OutColor); // [0xbe31e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetCollisionVertexStream
	// FRuntimeMeshCollisionVertexStream GetCollisionVertexStream(FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData); // [0xbe2f70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetCollisionVertex
	// void GetCollisionVertex(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32_t Index, FVector& OutVertex); // [0xbe2dd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetCollisionTriangleStream
	// FRuntimeMeshCollisionTriangleStream GetCollisionTriangleStream(FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData); // [0xbe2b60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetCollisionTriangle
	// void GetCollisionTriangle(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32_t Index, int32_t& OutIndexA, int32_t& OutIndexB, int32_t& OutIndexC); // [0xbe2920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetCollisionTexCoordStream
	// FRuntimeMeshCollisionTexCoordStream GetCollisionTexCoordStream(FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData); // [0xbe2620] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetCollisionTexCoord
	// void GetCollisionTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32_t Index, FVector2D& OutTexCoord, int32_t ChannelId); // [0xbe2430] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetCollisionMaterialIndexStream
	// FRuntimeMeshCollisionMaterialIndexStream GetCollisionMaterialIndexStream(FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData); // [0xbe21d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetCollisionMaterialIndex
	// void GetCollisionMaterialIndex(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32_t Index, int32_t& OutIndex); // [0xbe2040] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetBounds
	// void GetBounds(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, FBox& OutBounds);  // [0xbe1ee0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.GetAdjacencyTriangleStream
	// FRuntimeMeshTriangleStream GetAdjacencyTriangleStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData); // [0xbe1c60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.EmptyTriangles
	// void EmptyTriangles(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32_t Slack);           // [0xbe1a60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.EmptyTexCoords
	// void EmptyTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32_t Slack); // [0xbe1370] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.EmptyTangents
	// void EmptyTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32_t Slack);  // [0xbe1900] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.EmptyPositions
	// void EmptyPositions(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32_t Slack); // [0xbe17a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.EmptyColors
	// void EmptyColors(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32_t Slack);        // [0xbe1640] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.EmptyCollisionVertices
	// void EmptyCollisionVertices(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32_t Slack); // [0xbe14e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.EmptyCollisionTriangles
	// void EmptyCollisionTriangles(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32_t Slack); // [0xbe14e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.EmptyCollisionTexCoords
	// void EmptyCollisionTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32_t Slack); // [0xbe1370] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.EmptyCollisionMaterialIndices
	// void EmptyCollisionMaterialIndices(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32_t Slack); // [0xbe1210] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.CreateRenderableMeshData
	// FRuntimeMeshRenderableMeshData CreateRenderableMeshData(bool bWantsHighPrecisionTangents, bool bWantsHighPrecisionTexCoords, char NumTexCoords, bool bWants32BitIndices); // [0xbe0ff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AppendTriangles
	// void AppendTriangles(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, FRuntimeMeshTriangleStream& InOther); // [0xbe0e70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AppendTexCoords
	// void AppendTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, FRuntimeMeshVertexTexCoordStream& InOther); // [0xbe0ce0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AppendTangents
	// void AppendTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, FRuntimeMeshVertexTangentStream& InOther); // [0xbe0b60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AppendPositions
	// void AppendPositions(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, FRuntimeMeshVertexPositionStream& InOther); // [0xbe09e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AppendColors
	// void AppendColors(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, FRuntimeMeshVertexColorStream& InOther); // [0xbe09e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AddTriangle
	// void AddTriangle(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32_t NewIndexA, int32_t NewIndexB, int32_t NewIndexC); // [0xbe0810] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AddTexCoord
	// void AddTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32_t& OutIndex, FVector2D InTexCoord, int32_t ChannelId); // [0xbe0620] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AddTangents
	// void AddTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, FVector InTangentX, FVector InTangentY, FVector InTangentZ, int32_t& OutIndex); // [0xbe03d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AddPosition
	// void AddPosition(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, FVector InPosition, int32_t& OutIndex); // [0xbe0230] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AddNormalAndTangent
	// void AddNormalAndTangent(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, FVector InNormal, FVector InTangent, int32_t& OutIndex); // [0xbe0030] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AddIndex
	// void AddIndex(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32_t NewIndex, int32_t& OutIndex); // [0xbdfe90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AddColor
	// void AddColor(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, FLinearColor InColor, int32_t& OutIndex); // [0xbdfce0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AddCollisionVertex
	// void AddCollisionVertex(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, FVector InVertex, int32_t& OutIndex); // [0xbdfb40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AddCollisionTriangle
	// void AddCollisionTriangle(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32_t NewIndexA, int32_t NewIndexB, int32_t NewIndexC, int32_t& OutTriangleIndex); // [0xbdf920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AddCollisionTexCoord
	// void AddCollisionTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, FVector2D InTexCoord, int32_t& OutIndex); // [0xbdf780] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AddCollisionSphere
	// void AddCollisionSphere(FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionSphere NewSphere); // [0xbdf560] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AddCollisionMaterialIndex
	// void AddCollisionMaterialIndex(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32_t NewIndex, int32_t& OutIndex); // [0xbdf3d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AddCollisionConvex
	// void AddCollisionConvex(FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionConvexMesh NewConvex); // [0xbdf130] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AddCollisionCapsule
	// void AddCollisionCapsule(FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionCapsule NewCapsule); // [0xbdeee0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshBlueprintFunctions.AddCollisionBox
	// void AddCollisionBox(FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionBox NewBox); // [0xbdec70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshComponent
/// Size: 0x0480 (1152 bytes) (0x000468 - 0x000480) align 16 MaxSize: 0x0480
class URuntimeMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0468   (0x0008)  MISSED
	class URuntimeMesh*                                RuntimeMeshReference;                                       // 0x0470   (0x0008)  
	bool                                               KeepMomentumOnCollisionUpdate;                              // 0x0478   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0479   (0x0007)  MISSED


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponent.SetupMaterialSlot
	// void SetupMaterialSlot(int32_t MaterialSlot, FName SlotName, class UMaterialInterface* InMaterial);                      // [0xbecc50] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponent.SetRuntimeMeshMobility
	// void SetRuntimeMeshMobility(ERuntimeMeshMobility NewMobility);                                                           // [0xbecbb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponent.SetRuntimeMesh
	// void SetRuntimeMesh(class URuntimeMesh* NewMesh);                                                                        // [0xbecb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponent.Initialize
	// void Initialize(class URuntimeMeshProvider* provider);                                                                   // [0xbec580] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponent.GetRuntimeMeshMobility
	// ERuntimeMeshMobility GetRuntimeMeshMobility();                                                                           // [0xbebea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponent.GetRuntimeMesh
	// class URuntimeMesh* GetRuntimeMesh();                                                                                    // [0xbebe40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponent.GetProvider
	// class URuntimeMeshProvider* GetProvider();                                                                               // [0xbebdb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponent.GetOrCreateRuntimeMesh
	// class URuntimeMesh* GetOrCreateRuntimeMesh();                                                                            // [0xbebd70] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponent.GetMaterialSlots
	// TArray<FRuntimeMeshMaterialSlot> GetMaterialSlots();                                                                     // [0xbebc50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponent.GetHitSource
	// FRuntimeMeshCollisionHitInfo GetHitSource(int32_t FaceIndex);                                                            // [0xbebad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshComponentEngineSubsystem
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 16 MaxSize: 0x0060
class URuntimeMeshComponentEngineSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshComponentSettings
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class URuntimeMeshComponentSettings : public UDeveloperSettings
{ 
public:
	ERuntimeMeshUpdateFrequency                        DefaultUpdateFrequency;                                     // 0x0038   (0x0001)  
	bool                                               bUse32BitIndicesByDefault;                                  // 0x0039   (0x0001)  
	bool                                               bUseHighPrecisionTexCoordsByDefault;                        // 0x003A   (0x0001)  
	bool                                               bUseHighPrecisionTangentsByDefault;                         // 0x003B   (0x0001)  
	bool                                               bCookCollisionAsync;                                        // 0x003C   (0x0001)  
	ERuntimeMeshCollisionCookingMode                   DefaultCookingMode;                                         // 0x003D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	FInt32Range                                        MinMaxThreadPoolThreads;                                    // 0x0040   (0x0010)  
	int32_t                                            SystemThreadDivisor;                                        // 0x0050   (0x0004)  
	ERuntimeMeshThreadingPriority                      ThreadPriority;                                             // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	int32_t                                            ThreadStackSize;                                            // 0x0058   (0x0004)  
	float                                              MaxAllowedTimePerTick;                                      // 0x005C   (0x0004)  
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic
/// Size: 0x04A0 (1184 bytes) (0x000480 - 0x0004A0) align 16 MaxSize: 0x04A0
class URuntimeMeshComponentStatic : public URuntimeMeshComponent
{ 
public:
	class URuntimeMesh*                                RuntimeMesh;                                                // 0x0480   (0x0008)  
	class URuntimeMeshProviderStatic*                  StaticProvider;                                             // 0x0488   (0x0008)  
	class URuntimeMeshModifierNormals*                 NormalsModifier;                                            // 0x0490   (0x0008)  
	class URuntimeMeshModifierAdjacency*               AdjacencyModifier;                                          // 0x0498   (0x0008)  


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.UpdateSectionFromComponents
	// void UpdateSectionFromComponents(int32_t LODIndex, int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FRuntimeMeshTangent>& Tangents); // [0xbecd70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.UpdateSection_Blueprint
	// void UpdateSection_Blueprint(int32_t LODIndex, int32_t SectionId, FRuntimeMeshRenderableMeshData& SectionData);          // [0xbed1e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.SetRenderableSectionAffectsCollision
	// void SetRenderableSectionAffectsCollision(int32_t SectionId, bool bCollisionEnabled);                                    // [0xbeca50] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.SetRenderableLODForCollision
	// void SetRenderableLODForCollision(int32_t LODIndex);                                                                     // [0xbec9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.SetCollisionSettings
	// void SetCollisionSettings(FRuntimeMeshCollisionSettings& NewCollisionSettings);                                          // [0xbec8c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.SetCollisionMesh
	// void SetCollisionMesh(FRuntimeMeshCollisionData& NewCollisionMesh);                                                      // [0xbec780] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.RemoveSection
	// void RemoveSection(int32_t LODIndex, int32_t SectionId);                                                                 // [0xbec6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.RemoveAllSectionsForLOD
	// void RemoveAllSectionsForLOD(int32_t LODIndex);                                                                          // [0xbec620] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.HasTessellationTriangleGenerationEnabled
	// bool HasTessellationTriangleGenerationEnabled();                                                                         // [0xbec550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.HasNormalTangentGenerationEnabled
	// bool HasNormalTangentGenerationEnabled();                                                                                // [0xbec520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.GetStaticProvider
	// class URuntimeMeshProviderStatic* GetStaticProvider();                                                                   // [0xbec4f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.GetSectionsForMeshCollision
	// TSet<int32_t> GetSectionsForMeshCollision();                                                                             // [0xbec420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.GetSectionRenderDataAndClear
	// FRuntimeMeshRenderableMeshData GetSectionRenderDataAndClear(int32_t LODIndex, int32_t SectionId);                        // [0xbec2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.GetSectionRenderData
	// FRuntimeMeshRenderableMeshData GetSectionRenderData(int32_t LODIndex, int32_t SectionId);                                // [0xbec160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.GetSectionProperties
	// FRuntimeMeshSectionProperties GetSectionProperties(int32_t LODIndex, int32_t SectionId);                                 // [0xbec090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.GetSectionIds
	// TArray<int32_t> GetSectionIds(int32_t LODIndex);                                                                         // [0xbebfb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.GetSectionBounds
	// FBoxSphereBounds GetSectionBounds(int32_t LODIndex, int32_t SectionId);                                                  // [0xbebed0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.GetLODForMeshCollision
	// int32_t GetLODForMeshCollision();                                                                                        // [0xbebb80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.GetLastSectionId
	// int32_t GetLastSectionId(int32_t LODIndex);                                                                              // [0xbebbb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.GetCollisionSettings
	// FRuntimeMeshCollisionSettings GetCollisionSettings();                                                                    // [0xbeb900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.GetCollisionMesh
	// FRuntimeMeshCollisionData GetCollisionMesh();                                                                            // [0xbeb840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.EnableNormalTangentGeneration
	// void EnableNormalTangentGeneration();                                                                                    // [0xbeb800] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.EnabledTessellationTrianglesGeneration
	// void EnabledTessellationTrianglesGeneration();                                                                           // [0xbeb820] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.DoesSectionHaveValidMeshData
	// bool DoesSectionHaveValidMeshData(int32_t LODIndex, int32_t SectionId);                                                  // [0xbeb730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.DisableTessellationTrianglesGeneration
	// void DisableTessellationTrianglesGeneration();                                                                           // [0xbeb710] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.DisableNormalTangentGeneration
	// void DisableNormalTangentGeneration();                                                                                   // [0xbeb6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.CreateSectionFromComponents
	// void CreateSectionFromComponents(int32_t LODIndex, int32_t SectionIndex, int32_t MaterialSlot, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FRuntimeMeshTangent>& Tangents, ERuntimeMeshUpdateFrequency UpdateFrequency, bool bCreateCollision); // [0xbeaf90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.CreateSection_Blueprint
	// void CreateSection_Blueprint(int32_t LODIndex, int32_t SectionId, FRuntimeMeshSectionProperties& SectionProperties, FRuntimeMeshRenderableMeshData& SectionData); // [0xbeb4e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshComponentStatic.ClearSection
	// void ClearSection(int32_t LODIndex, int32_t SectionId);                                                                  // [0xbeaec0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshModifier
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URuntimeMeshModifier : public UObject
{ 
public:


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshModifier.ApplyToMesh
	// void ApplyToMesh(FRuntimeMeshRenderableMeshData& MeshData);                                                              // [0xbead80] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshModifier.ApplyToCollisionMesh
	// void ApplyToCollisionMesh(FRuntimeMeshCollisionData& MeshData);                                                          // [0xbeac40] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshModifierAdjacency
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URuntimeMeshModifierAdjacency : public URuntimeMeshModifier
{ 
public:


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshModifierAdjacency.CalculateTessellationIndices
	// void CalculateTessellationIndices(FRuntimeMeshRenderableMeshData& MeshData);                                             // [0xbef4c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshModifierNormals
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class URuntimeMeshModifierNormals : public URuntimeMeshModifier
{ 
public:
	bool                                               bComputeSmoothNormals;                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshModifierNormals.CalculateNormalsTangents
	// void CalculateNormalsTangents(FRuntimeMeshRenderableMeshData& MeshData, bool bInComputeSmoothNormals);                   // [0xbef340] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshProvider
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class URuntimeMeshProvider : public URuntimeMeshProviderTargetInterface
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProvider.Shutdown
	// void Shutdown();                                                                                                         // [0xbf20e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProvider.IsThreadSafe
	// bool IsThreadSafe();                                                                                                     // [0xbf0fc0] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProvider.IsBound
	// bool IsBound();                                                                                                          // [0xbf0f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProvider.Initialize
	// void Initialize();                                                                                                       // [0xbf0f70] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProvider.HasCollisionMesh
	// bool HasCollisionMesh();                                                                                                 // [0xbf0f40] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProvider.GetSectionMeshForLOD
	// bool GetSectionMeshForLOD(int32_t LODIndex, int32_t SectionId, FRuntimeMeshRenderableMeshData& MeshData);                // [0xbf0890] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProvider.GetCollisionSettings
	// FRuntimeMeshCollisionSettings GetCollisionSettings();                                                                    // [0xbf0350] Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProvider.GetCollisionMesh
	// bool GetCollisionMesh(FRuntimeMeshCollisionData& CollisionData);                                                         // [0xbf0140] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProvider.GetBounds
	// FBoxSphereBounds GetBounds();                                                                                            // [0xbf0020] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProvider.GetAllSectionsMeshForLOD
	// bool GetAllSectionsMeshForLOD(int32_t LODIndex, TMap<int32_t, FRuntimeMeshSectionData>& MeshDatas);                      // [0xbefeb0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProvider.CollisionUpdateCompleted
	// void CollisionUpdateCompleted();                                                                                         // [0xbef610] Native|Public|BlueprintCallable 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshProviderPassthrough
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align 8 MaxSize: 0x0068
class URuntimeMeshProviderPassthrough : public URuntimeMeshProvider
{ 
public:
	class URuntimeMeshProvider*                        ChildProvider;                                              // 0x0058   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0060   (0x0008)  MISSED


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderPassthrough.SetChildProvider
	// void SetChildProvider(class URuntimeMeshProvider* InProvider);                                                           // [0xbf12c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderPassthrough.GetChildProvider
	// class URuntimeMeshProvider* GetChildProvider();                                                                          // [0xbf00e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshProviderBox
/// Size: 0x0098 (152 bytes) (0x000058 - 0x000098) align 8 MaxSize: 0x0098
class URuntimeMeshProviderBox : public URuntimeMeshProvider
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0058   (0x0028)  MISSED
	FVector                                            BoxRadius;                                                  // 0x0080   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0090   (0x0008)  


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderBox.SetBoxRadius
	// void SetBoxRadius(FVector& InRadius);                                                                                    // [0xbf1230] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderBox.SetBoxMaterial
	// void SetBoxMaterial(class UMaterialInterface* InMaterial);                                                               // [0xbf11a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderBox.GetBoxRadius
	// FVector GetBoxRadius();                                                                                                  // [0xbf00a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderBox.GetBoxMaterial
	// class UMaterialInterface* GetBoxMaterial();                                                                              // [0xbf0070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshCollisionVertexStream
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRuntimeMeshCollisionVertexStream
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshCollisionTriangleStream
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRuntimeMeshCollisionTriangleStream
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshCollisionTexCoordStream
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRuntimeMeshCollisionTexCoordStream
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshRenderableCollisionData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRuntimeMeshRenderableCollisionData
{ 
	FRuntimeMeshCollisionVertexStream                  Vertices;                                                   // 0x0000   (0x0010)  
	FRuntimeMeshCollisionTriangleStream                Triangles;                                                  // 0x0010   (0x0010)  
	FRuntimeMeshCollisionTexCoordStream                TexCoords;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshCollisionConvexMesh
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRuntimeMeshCollisionConvexMesh
{ 
	TArray<FVector>                                    VertexBuffer;                                               // 0x0000   (0x0010)  
	FBox                                               BoundingBox;                                                // 0x0010   (0x001C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshCollisionSphere
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRuntimeMeshCollisionSphere
{ 
	FVector                                            Center;                                                     // 0x0000   (0x000C)  
	float                                              Radius;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshCollisionBox
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FRuntimeMeshCollisionBox
{ 
	FVector                                            Center;                                                     // 0x0000   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x000C   (0x000C)  
	FVector                                            Extents;                                                    // 0x0018   (0x000C)  
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshCollisionCapsule
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FRuntimeMeshCollisionCapsule
{ 
	FVector                                            Center;                                                     // 0x0000   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x000C   (0x000C)  
	float                                              Radius;                                                     // 0x0018   (0x0004)  
	float                                              Length;                                                     // 0x001C   (0x0004)  
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshCollisionSettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRuntimeMeshCollisionSettings
{ 
	bool                                               bUseComplexAsSimple;                                        // 0x0000   (0x0001)  
	bool                                               bUseAsyncCooking;                                           // 0x0001   (0x0001)  
	ERuntimeMeshCollisionCookingMode                   CookingMode;                                                // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0003   (0x0005)  MISSED
	TArray<FRuntimeMeshCollisionConvexMesh>            ConvexElements;                                             // 0x0008   (0x0010)  
	TArray<FRuntimeMeshCollisionSphere>                Spheres;                                                    // 0x0018   (0x0010)  
	TArray<FRuntimeMeshCollisionBox>                   Boxes;                                                      // 0x0028   (0x0010)  
	TArray<FRuntimeMeshCollisionCapsule>               Capsules;                                                   // 0x0038   (0x0010)  
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshCollisionMaterialIndexStream
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRuntimeMeshCollisionMaterialIndexStream
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshCollisionData
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FRuntimeMeshCollisionData
{ 
	FRuntimeMeshCollisionVertexStream                  Vertices;                                                   // 0x0000   (0x0010)  
	FRuntimeMeshCollisionTriangleStream                Triangles;                                                  // 0x0010   (0x0010)  
	FRuntimeMeshCollisionTexCoordStream                TexCoords;                                                  // 0x0020   (0x0010)  
	FRuntimeMeshCollisionMaterialIndexStream           MaterialIndices;                                            // 0x0030   (0x0010)  
	TArray<FRuntimeMeshCollisionSourceSectionInfo>     CollisionSources;                                           // 0x0040   (0x0010)  
	bool                                               bFlipNormals;                                               // 0x0050   (0x0001)  
	bool                                               bDeformableMesh;                                            // 0x0051   (0x0001)  
	bool                                               bFastCook;                                                  // 0x0052   (0x0001)  
	bool                                               bDisableActiveEdgePrecompute;                               // 0x0053   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshProviderCollision
/// Size: 0x01D8 (472 bytes) (0x000068 - 0x0001D8) align 8 MaxSize: 0x01D8
class URuntimeMeshProviderCollision : public URuntimeMeshProviderPassthrough
{ 
public:
	int32_t                                            LODForMeshCollision;                                        // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	TMap<int32_t, FRuntimeMeshRenderableCollisionData> RenderableCollisionData;                                    // 0x0070   (0x0050)  
	SDK_UNDEFINED(80,959) /* TSet<int32_t> */          __um(SectionsAffectingCollision);                           // 0x00C0   (0x0050)  
	FRuntimeMeshCollisionSettings                      CollisionSettings;                                          // 0x0110   (0x0048)  
	FRuntimeMeshCollisionData                          CollisionMesh;                                              // 0x0158   (0x0058)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x01B0   (0x0028)  MISSED


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderCollision.SetRenderableSectionAffectsCollision
	// void SetRenderableSectionAffectsCollision(int32_t SectionId, bool bCollisionEnabled);                                    // [0xbf1cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderCollision.SetRenderableLODForCollision
	// void SetRenderableLODForCollision(int32_t LODIndex);                                                                     // [0xbf1bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderCollision.SetCollisionSettings
	// void SetCollisionSettings(FRuntimeMeshCollisionSettings& NewCollisionSettings);                                          // [0xbf15d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderCollision.SetCollisionMesh
	// void SetCollisionMesh(FRuntimeMeshCollisionData& NewCollisionMesh);                                                      // [0xbf1350] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshProviderMemoryCache
/// Size: 0x0218 (536 bytes) (0x000068 - 0x000218) align 8 MaxSize: 0x0218
class URuntimeMeshProviderMemoryCache : public URuntimeMeshProviderPassthrough
{ 
public:
	unsigned char                                      UnknownData00_1[0x1B0];                                     // 0x0068   (0x01B0)  MISSED


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderMemoryCache.ClearCache
	// void ClearCache();                                                                                                       // [0xbef5f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshProviderModifiers
/// Size: 0x0078 (120 bytes) (0x000068 - 0x000078) align 8 MaxSize: 0x0078
class URuntimeMeshProviderModifiers : public URuntimeMeshProviderPassthrough
{ 
public:
	TArray<class URuntimeMeshModifier*>                Modifiers;                                                  // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderModifiers.RemoveModifier
	// void RemoveModifier(class URuntimeMeshModifier* ModifierToRemove);                                                       // [0xbf1110] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderModifiers.AddModifier
	// void AddModifier(class URuntimeMeshModifier* NewModifier);                                                               // [0xbef2b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshProviderPlane
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align 8 MaxSize: 0x00F0
class URuntimeMeshProviderPlane : public URuntimeMeshProviderPassthrough
{ 
public:
	unsigned char                                      UnknownData00_8[0x2C];                                      // 0x0068   (0x002C)  MISSED
	FVector                                            LocationA;                                                  // 0x0094   (0x000C)  
	FVector                                            LocationB;                                                  // 0x00A0   (0x000C)  
	FVector                                            LocationC;                                                  // 0x00AC   (0x000C)  
	TArray<int32_t>                                    VertsAB;                                                    // 0x00B8   (0x0010)  
	TArray<int32_t>                                    VertsAC;                                                    // 0x00C8   (0x0010)  
	TArray<float>                                      ScreenSize;                                                 // 0x00D8   (0x0010)  
	class UMaterialInterface*                          Material;                                                   // 0x00E8   (0x0008)  
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshProviderSphere
/// Size: 0x00A8 (168 bytes) (0x000058 - 0x0000A8) align 8 MaxSize: 0x00A8
class URuntimeMeshProviderSphere : public URuntimeMeshProvider
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0058   (0x0028)  MISSED
	int32_t                                            MaxLOD;                                                     // 0x0080   (0x0004)  
	float                                              SphereRadius;                                               // 0x0084   (0x0004)  
	int32_t                                            MaxLatitudeSegments;                                        // 0x0088   (0x0004)  
	int32_t                                            MinLatitudeSegments;                                        // 0x008C   (0x0004)  
	int32_t                                            MaxLongitudeSegments;                                       // 0x0090   (0x0004)  
	int32_t                                            MinLongitudeSegments;                                       // 0x0094   (0x0004)  
	float                                              LODMultiplier;                                              // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	class UMaterialInterface*                          SphereMaterial;                                             // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderSphere.SetSphereRadius
	// void SetSphereRadius(float InSphereRadius);                                                                              // [0xbf1fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderSphere.SetSphereMaterial
	// void SetSphereMaterial(class UMaterialInterface* InSphereMaterial);                                                      // [0xbf1f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderSphere.SetMinLongitudeSegments
	// void SetMinLongitudeSegments(int32_t InMinLongitudeSegments);                                                            // [0xbf1b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderSphere.SetMinLatitudeSegments
	// void SetMinLatitudeSegments(int32_t InMinLatitudeSegments);                                                              // [0xbf1a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderSphere.SetMaxLongitudeSegments
	// void SetMaxLongitudeSegments(int32_t InMaxLongitudeSegments);                                                            // [0xbf1a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderSphere.SetMaxLatitudeSegments
	// void SetMaxLatitudeSegments(int32_t InMaxLatitudeSegments);                                                              // [0xbf1970] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderSphere.SetLODMultiplier
	// void SetLODMultiplier(float InLODMultiplier);                                                                            // [0xbf1860] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderSphere.GetSphereRadius
	// float GetSphereRadius();                                                                                                 // [0xbf0ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderSphere.GetSphereMaterial
	// class UMaterialInterface* GetSphereMaterial();                                                                           // [0xbf0eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderSphere.GetMinLongitudeSegments
	// int32_t GetMinLongitudeSegments();                                                                                       // [0xbf06a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderSphere.GetMinLatitudeSegments
	// int32_t GetMinLatitudeSegments();                                                                                        // [0xbf0670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderSphere.GetMaxLongitudeSegments
	// int32_t GetMaxLongitudeSegments();                                                                                       // [0xbf0640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderSphere.GetMaxLatitudeSegments
	// int32_t GetMaxLatitudeSegments();                                                                                        // [0xbf0610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderSphere.GetLODMultiplier
	// float GetLODMultiplier();                                                                                                // [0xbf0510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic
/// Size: 0x0258 (600 bytes) (0x000058 - 0x000258) align 8 MaxSize: 0x0258
class URuntimeMeshProviderStatic : public URuntimeMeshProvider
{ 
public:
	bool                                               StoreEditorGeneratedDataForGame;                            // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1EF];                                     // 0x0059   (0x01EF)  MISSED
	TArray<class URuntimeMeshModifier*>                CurrentMeshModifiers;                                       // 0x0248   (0x0010)  


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.UpdateSectionFromComponents
	// void UpdateSectionFromComponents(int32_t LODIndex, int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FRuntimeMeshTangent>& Tangents); // [0xbf2190] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.UpdateSection_Blueprint
	// void UpdateSection_Blueprint(int32_t LODIndex, int32_t SectionId, FRuntimeMeshRenderableMeshData& SectionData);          // [0xbf2600] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.UnRegisterModifier
	// void UnRegisterModifier(class URuntimeMeshModifier* Modifier);                                                           // [0xbf2100] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.SetShouldSerializeMeshData
	// void SetShouldSerializeMeshData(bool bIsSerialized);                                                                     // [0xbf1eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.SetRenderableSectionAffectsCollision
	// void SetRenderableSectionAffectsCollision(int32_t SectionId, bool bCollisionEnabled, bool bForceUpdate);                 // [0xbf1da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.SetRenderableLODForCollision
	// void SetRenderableLODForCollision(int32_t LODIndex);                                                                     // [0xbf1c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.SetCollisionSettings
	// void SetCollisionSettings(FRuntimeMeshCollisionSettings& NewCollisionSettings);                                          // [0xbf16d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.SetCollisionMesh
	// void SetCollisionMesh(FRuntimeMeshCollisionData& NewCollisionMesh);                                                      // [0xbf1490] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.RemoveAllSectionsForLOD
	// void RemoveAllSectionsForLOD(int32_t LODIndex);                                                                          // [0xbf1080] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.RegisterModifier
	// void RegisterModifier(class URuntimeMeshModifier* Modifier);                                                             // [0xbf0ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.GetSectionsForMeshCollision
	// TSet<int32_t> GetSectionsForMeshCollision();                                                                             // [0xbf0de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.GetSectionRenderDataAndClear
	// FRuntimeMeshRenderableMeshData GetSectionRenderDataAndClear(int32_t LODIndex, int32_t SectionId);                        // [0xbf0c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.GetSectionRenderData
	// FRuntimeMeshRenderableMeshData GetSectionRenderData(int32_t LODIndex, int32_t SectionId);                                // [0xbf0b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.GetSectionProperties
	// FRuntimeMeshSectionProperties GetSectionProperties(int32_t LODIndex, int32_t SectionId);                                 // [0xbf0a50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.GetSectionIds
	// TArray<int32_t> GetSectionIds(int32_t LODIndex);                                                                         // [0xbf07b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.GetSectionBounds
	// FBoxSphereBounds GetSectionBounds(int32_t LODIndex, int32_t SectionId);                                                  // [0xbf06d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.GetLODForMeshCollision
	// int32_t GetLODForMeshCollision();                                                                                        // [0xbf04e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.GetLastSectionId
	// int32_t GetLastSectionId(int32_t LODIndex);                                                                              // [0xbf0540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.GetCollisionSettingsStatic
	// FRuntimeMeshCollisionSettings GetCollisionSettingsStatic();                                                              // [0xbf0400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.GetCollisionMeshStatic
	// FRuntimeMeshCollisionData GetCollisionMeshStatic();                                                                      // [0xbf0290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.DoesSectionHaveValidMeshData
	// bool DoesSectionHaveValidMeshData(int32_t LODIndex, int32_t SectionId);                                                  // [0xbefde0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.CreateSectionFromComponents
	// void CreateSectionFromComponents(int32_t LODIndex, int32_t SectionIndex, int32_t MaterialSlot, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FRuntimeMeshTangent>& Tangents, ERuntimeMeshUpdateFrequency UpdateFrequency, bool bCreateCollision); // [0xbef630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStatic.CreateSection_Blueprint
	// void CreateSection_Blueprint(int32_t LODIndex, int32_t SectionId, FRuntimeMeshSectionProperties& SectionProperties, FRuntimeMeshRenderableMeshData& SectionData); // [0xbefb80] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshProviderStaticMesh
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align 8 MaxSize: 0x0068
class URuntimeMeshProviderStaticMesh : public URuntimeMeshProvider
{ 
public:
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0058   (0x0008)  
	int32_t                                            MaxLOD;                                                     // 0x0060   (0x0004)  
	int32_t                                            ComplexCollisionLOD;                                        // 0x0064   (0x0004)  


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStaticMesh.SetStaticMesh
	// void SetStaticMesh(class UStaticMesh* InStaticMesh);                                                                     // [0xbf2050] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStaticMesh.SetMaxLOD
	// void SetMaxLOD(int32_t InMaxLOD);                                                                                        // [0xbf18e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStaticMesh.SetComplexCollisionLOD
	// void SetComplexCollisionLOD(int32_t InLOD);                                                                              // [0xbf17d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStaticMesh.GetStaticMesh
	// class UStaticMesh* GetStaticMesh();                                                                                      // [0xbf0f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStaticMesh.GetMaxLOD
	// int32_t GetMaxLOD();                                                                                                     // [0xbf05e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshProviderStaticMesh.GetComplexCollisionLOD
	// int32_t GetComplexCollisionLOD();                                                                                        // [0xbf04b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshSlicer
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URuntimeMeshSlicer : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshSlicer.SliceRuntimeMeshData
	// bool SliceRuntimeMeshData(FRuntimeMeshRenderableMeshData& SourceSection, FPlane& SlicePlane, ERuntimeMeshSliceCapOption CapOption, FRuntimeMeshRenderableMeshData& NewSourceSection, FRuntimeMeshRenderableMeshData& NewSourceSectionCap, bool bCreateDestination, FRuntimeMeshRenderableMeshData& DestinationSection, FRuntimeMeshRenderableMeshData& NewDestinationSectionCap); // [0xbf56a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshSlicer.SliceRuntimeMesh
	// void SliceRuntimeMesh(class URuntimeMeshComponent* InRuntimeMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, class URuntimeMeshComponent*& OutOtherHalfRuntimeMesh, ERuntimeMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial); // [0xbf5450] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/RuntimeMeshComponent.RuntimeMeshStaticMeshConverter
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URuntimeMeshStaticMeshConverter : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RuntimeMeshComponent.RuntimeMeshStaticMeshConverter.CopyStaticMeshToRuntimeMesh
	// bool CopyStaticMeshToRuntimeMesh(class UStaticMesh* StaticMesh, class URuntimeMeshComponent* RuntimeMeshComponent, int32_t CollisionLODIndex, int32_t MaxLODToCopy); // [0xbf47d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshStaticMeshConverter.CopyStaticMeshSectionToRenderableMeshData
	// bool CopyStaticMeshSectionToRenderableMeshData(class UStaticMesh* StaticMesh, int32_t LODIndex, int32_t SectionId, FRuntimeMeshRenderableMeshData& OutMeshData, FRuntimeMeshSectionProperties& OutProperties); // [0xbf4590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshStaticMeshConverter.CopyStaticMeshLODToCollisionData
	// bool CopyStaticMeshLODToCollisionData(class UStaticMesh* StaticMesh, int32_t LODIndex, FRuntimeMeshCollisionData& OutCollisionData); // [0xbf43e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshStaticMeshConverter.CopyStaticMeshComponentToRuntimeMesh
	// bool CopyStaticMeshComponentToRuntimeMesh(class UStaticMeshComponent* StaticMeshComponent, class URuntimeMeshComponent* RuntimeMeshComponent, int32_t CollisionLODIndex, int32_t MaxLODToCopy); // [0xbf42a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RuntimeMeshComponent.RuntimeMeshStaticMeshConverter.CopyStaticMeshCollisionToCollisionSettings
	// bool CopyStaticMeshCollisionToCollisionSettings(class UStaticMesh* StaticMesh, FRuntimeMeshCollisionSettings& OutCollisionSettings); // [0xbf4150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshCollisionHitInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRuntimeMeshCollisionHitInfo
{ 
	TWeakObjectPtr<class URuntimeMeshProvider*>        SourceProvider;                                             // 0x0000   (0x0008)  
	ERuntimeMeshCollisionFaceSourceType                SourceType;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            SectionId;                                                  // 0x000C   (0x0004)  
	int32_t                                            FaceIndex;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0018   (0x0008)  
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshDistanceFieldData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRuntimeMeshDistanceFieldData
{ 
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshTangent
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRuntimeMeshTangent
{ 
	FVector                                            TangentX;                                                   // 0x0000   (0x000C)  
	bool                                               bFlipTangentY;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshSectionData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FRuntimeMeshSectionData
{ 
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshVertexPositionStream
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRuntimeMeshVertexPositionStream
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshVertexTangentStream
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRuntimeMeshVertexTangentStream
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshVertexTexCoordStream
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRuntimeMeshVertexTexCoordStream
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshVertexColorStream
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRuntimeMeshVertexColorStream
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshTriangleStream
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRuntimeMeshTriangleStream
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshRenderableMeshData
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FRuntimeMeshRenderableMeshData
{ 
	FRuntimeMeshVertexPositionStream                   Positions;                                                  // 0x0000   (0x0010)  
	FRuntimeMeshVertexTangentStream                    Tangents;                                                   // 0x0010   (0x0018)  
	FRuntimeMeshVertexTexCoordStream                   TexCoords;                                                  // 0x0028   (0x0018)  
	FRuntimeMeshVertexColorStream                      Colors;                                                     // 0x0040   (0x0010)  
	FRuntimeMeshTriangleStream                         Triangles;                                                  // 0x0050   (0x0018)  
	FRuntimeMeshTriangleStream                         AdjacencyTriangles;                                         // 0x0068   (0x0018)  
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshLODProperties
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FRuntimeMeshLODProperties
{ 
	float                                              ScreenSize;                                                 // 0x0000   (0x0004)  
	bool                                               bCanGetSectionsIndependently;                               // 0x0004   (0x0001)  
	bool                                               bCanGetAllSectionsAtOnce;                                   // 0x0005   (0x0001)  
	bool                                               bShouldMergeStaticSectionBuffers;                           // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x0007   (0x0001)  MISSED
};

/// Struct /Script/RuntimeMeshComponent.RuntimeMeshSectionProperties
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRuntimeMeshSectionProperties
{ 
	ERuntimeMeshUpdateFrequency                        UpdateFrequency;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            MaterialSlot;                                               // 0x0004   (0x0004)  
	bool                                               bIsVisible;                                                 // 0x0008   (0x0001)  
	bool                                               bIsMainPassRenderable;                                      // 0x0009   (0x0001)  
	bool                                               bCastsShadow;                                               // 0x000A   (0x0001)  
	bool                                               bForceOpaque;                                               // 0x000B   (0x0001)  
	bool                                               bUseHighPrecisionTangents;                                  // 0x000C   (0x0001)  
	bool                                               bUseHighPrecisionTexCoords;                                 // 0x000D   (0x0001)  
	char                                               NumTexCoords;                                               // 0x000E   (0x0001)  
	bool                                               bWants32BitIndices;                                         // 0x000F   (0x0001)  
};

#pragma pack(pop)


static_assert(sizeof(URuntimeMeshProviderTargetInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FRuntimeMeshCollisionSourceSectionInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRuntimeMeshAsyncBodySetupData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRuntimeMeshMaterialSlot) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(URuntimeMesh) == 0x0470); // 1136 bytes (0x000028 - 0x000470)
static_assert(sizeof(ARuntimeMeshActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(URuntimeMeshBlueprintFunctions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URuntimeMeshComponent) == 0x0480); // 1152 bytes (0x000468 - 0x000480)
static_assert(sizeof(URuntimeMeshComponentEngineSubsystem) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(URuntimeMeshComponentSettings) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(URuntimeMeshComponentStatic) == 0x04A0); // 1184 bytes (0x000480 - 0x0004A0)
static_assert(sizeof(URuntimeMeshModifier) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URuntimeMeshModifierAdjacency) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URuntimeMeshModifierNormals) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(URuntimeMeshProvider) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(URuntimeMeshProviderPassthrough) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(URuntimeMeshProviderBox) == 0x0098); // 152 bytes (0x000058 - 0x000098)
static_assert(sizeof(FRuntimeMeshCollisionVertexStream) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRuntimeMeshCollisionTriangleStream) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRuntimeMeshCollisionTexCoordStream) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRuntimeMeshRenderableCollisionData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRuntimeMeshCollisionConvexMesh) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRuntimeMeshCollisionSphere) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRuntimeMeshCollisionBox) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FRuntimeMeshCollisionCapsule) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRuntimeMeshCollisionSettings) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRuntimeMeshCollisionMaterialIndexStream) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRuntimeMeshCollisionData) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(URuntimeMeshProviderCollision) == 0x01D8); // 472 bytes (0x000068 - 0x0001D8)
static_assert(sizeof(URuntimeMeshProviderMemoryCache) == 0x0218); // 536 bytes (0x000068 - 0x000218)
static_assert(sizeof(URuntimeMeshProviderModifiers) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(URuntimeMeshProviderPlane) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(URuntimeMeshProviderSphere) == 0x00A8); // 168 bytes (0x000058 - 0x0000A8)
static_assert(sizeof(URuntimeMeshProviderStatic) == 0x0258); // 600 bytes (0x000058 - 0x000258)
static_assert(sizeof(URuntimeMeshProviderStaticMesh) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(URuntimeMeshSlicer) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URuntimeMeshStaticMeshConverter) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FRuntimeMeshCollisionHitInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRuntimeMeshDistanceFieldData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRuntimeMeshTangent) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRuntimeMeshSectionData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRuntimeMeshVertexPositionStream) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRuntimeMeshVertexTangentStream) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRuntimeMeshVertexTexCoordStream) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRuntimeMeshVertexColorStream) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRuntimeMeshTriangleStream) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRuntimeMeshRenderableMeshData) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FRuntimeMeshLODProperties) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRuntimeMeshSectionProperties) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FRuntimeMeshCollisionSourceSectionInfo, SourceProvider) == 0x0008);
static_assert(offsetof(FRuntimeMeshCollisionSourceSectionInfo, SourceType) == 0x0014);
static_assert(offsetof(FRuntimeMeshAsyncBodySetupData, BodySetup) == 0x0000);
static_assert(offsetof(FRuntimeMeshAsyncBodySetupData, CollisionSources) == 0x0008);
static_assert(offsetof(FRuntimeMeshMaterialSlot, SlotName) == 0x0000);
static_assert(offsetof(FRuntimeMeshMaterialSlot, Material) == 0x0008);
static_assert(offsetof(URuntimeMesh, MeshProviderPtr) == 0x0038);
static_assert(offsetof(URuntimeMesh, BodySetup) == 0x0048);
static_assert(offsetof(URuntimeMesh, CollisionSource) == 0x0050);
static_assert(offsetof(URuntimeMesh, AsyncBodySetupQueue) == 0x0060);
static_assert(offsetof(URuntimeMesh, MaterialSlots) == 0x0368);
static_assert(offsetof(URuntimeMesh, SlotNameLookup) == 0x0378);
static_assert(offsetof(ARuntimeMeshActor, RuntimeMeshComponent) == 0x0220);
static_assert(offsetof(URuntimeMeshComponent, RuntimeMeshReference) == 0x0470);
static_assert(offsetof(URuntimeMeshComponentSettings, DefaultUpdateFrequency) == 0x0038);
static_assert(offsetof(URuntimeMeshComponentSettings, DefaultCookingMode) == 0x003D);
static_assert(offsetof(URuntimeMeshComponentSettings, MinMaxThreadPoolThreads) == 0x0040);
static_assert(offsetof(URuntimeMeshComponentSettings, ThreadPriority) == 0x0054);
static_assert(offsetof(URuntimeMeshComponentStatic, RuntimeMesh) == 0x0480);
static_assert(offsetof(URuntimeMeshComponentStatic, StaticProvider) == 0x0488);
static_assert(offsetof(URuntimeMeshComponentStatic, NormalsModifier) == 0x0490);
static_assert(offsetof(URuntimeMeshComponentStatic, AdjacencyModifier) == 0x0498);
static_assert(offsetof(URuntimeMeshProviderPassthrough, ChildProvider) == 0x0058);
static_assert(offsetof(URuntimeMeshProviderBox, BoxRadius) == 0x0080);
static_assert(offsetof(URuntimeMeshProviderBox, Material) == 0x0090);
static_assert(offsetof(FRuntimeMeshRenderableCollisionData, Vertices) == 0x0000);
static_assert(offsetof(FRuntimeMeshRenderableCollisionData, Triangles) == 0x0010);
static_assert(offsetof(FRuntimeMeshRenderableCollisionData, TexCoords) == 0x0020);
static_assert(offsetof(FRuntimeMeshCollisionConvexMesh, VertexBuffer) == 0x0000);
static_assert(offsetof(FRuntimeMeshCollisionConvexMesh, BoundingBox) == 0x0010);
static_assert(offsetof(FRuntimeMeshCollisionSphere, Center) == 0x0000);
static_assert(offsetof(FRuntimeMeshCollisionBox, Center) == 0x0000);
static_assert(offsetof(FRuntimeMeshCollisionBox, Rotation) == 0x000C);
static_assert(offsetof(FRuntimeMeshCollisionBox, Extents) == 0x0018);
static_assert(offsetof(FRuntimeMeshCollisionCapsule, Center) == 0x0000);
static_assert(offsetof(FRuntimeMeshCollisionCapsule, Rotation) == 0x000C);
static_assert(offsetof(FRuntimeMeshCollisionSettings, CookingMode) == 0x0002);
static_assert(offsetof(FRuntimeMeshCollisionSettings, ConvexElements) == 0x0008);
static_assert(offsetof(FRuntimeMeshCollisionSettings, Spheres) == 0x0018);
static_assert(offsetof(FRuntimeMeshCollisionSettings, Boxes) == 0x0028);
static_assert(offsetof(FRuntimeMeshCollisionSettings, Capsules) == 0x0038);
static_assert(offsetof(FRuntimeMeshCollisionData, Vertices) == 0x0000);
static_assert(offsetof(FRuntimeMeshCollisionData, Triangles) == 0x0010);
static_assert(offsetof(FRuntimeMeshCollisionData, TexCoords) == 0x0020);
static_assert(offsetof(FRuntimeMeshCollisionData, MaterialIndices) == 0x0030);
static_assert(offsetof(FRuntimeMeshCollisionData, CollisionSources) == 0x0040);
static_assert(offsetof(URuntimeMeshProviderCollision, RenderableCollisionData) == 0x0070);
static_assert(offsetof(URuntimeMeshProviderCollision, CollisionSettings) == 0x0110);
static_assert(offsetof(URuntimeMeshProviderCollision, CollisionMesh) == 0x0158);
static_assert(offsetof(URuntimeMeshProviderModifiers, Modifiers) == 0x0068);
static_assert(offsetof(URuntimeMeshProviderPlane, LocationA) == 0x0094);
static_assert(offsetof(URuntimeMeshProviderPlane, LocationB) == 0x00A0);
static_assert(offsetof(URuntimeMeshProviderPlane, LocationC) == 0x00AC);
static_assert(offsetof(URuntimeMeshProviderPlane, VertsAB) == 0x00B8);
static_assert(offsetof(URuntimeMeshProviderPlane, VertsAC) == 0x00C8);
static_assert(offsetof(URuntimeMeshProviderPlane, ScreenSize) == 0x00D8);
static_assert(offsetof(URuntimeMeshProviderPlane, Material) == 0x00E8);
static_assert(offsetof(URuntimeMeshProviderSphere, SphereMaterial) == 0x00A0);
static_assert(offsetof(URuntimeMeshProviderStatic, CurrentMeshModifiers) == 0x0248);
static_assert(offsetof(URuntimeMeshProviderStaticMesh, StaticMesh) == 0x0058);
static_assert(offsetof(FRuntimeMeshCollisionHitInfo, SourceProvider) == 0x0000);
static_assert(offsetof(FRuntimeMeshCollisionHitInfo, SourceType) == 0x0008);
static_assert(offsetof(FRuntimeMeshCollisionHitInfo, Material) == 0x0018);
static_assert(offsetof(FRuntimeMeshTangent, TangentX) == 0x0000);
static_assert(offsetof(FRuntimeMeshRenderableMeshData, Positions) == 0x0000);
static_assert(offsetof(FRuntimeMeshRenderableMeshData, Tangents) == 0x0010);
static_assert(offsetof(FRuntimeMeshRenderableMeshData, TexCoords) == 0x0028);
static_assert(offsetof(FRuntimeMeshRenderableMeshData, Colors) == 0x0040);
static_assert(offsetof(FRuntimeMeshRenderableMeshData, Triangles) == 0x0050);
static_assert(offsetof(FRuntimeMeshRenderableMeshData, AdjacencyTriangles) == 0x0068);
static_assert(offsetof(FRuntimeMeshSectionProperties, UpdateFrequency) == 0x0000);
