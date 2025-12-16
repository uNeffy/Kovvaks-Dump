
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/MeshDescription.EComputeNTBsOptions
/// Size: 0x01 (1 bytes)
enum class EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None                                                        = 0,
	EComputeNTBsOptions__Normals                                                     = 1,
	EComputeNTBsOptions__Tangents                                                    = 2,
	EComputeNTBsOptions__WeightedNTBs                                                = 4
};

/// Class /Script/MeshDescription.MeshDescription
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshDescription : public UObject
{ 
public:
};

/// Class /Script/MeshDescription.MeshDescriptionBase
/// Size: 0x0390 (912 bytes) (0x000028 - 0x000390) align 8 MaxSize: 0x0390
class UMeshDescriptionBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x368];                                     // 0x0028   (0x0368)  MISSED


	/// Functions
	// Function /Script/MeshDescription.MeshDescriptionBase.SetVertexPosition
	// void SetVertexPosition(FVertexID VertexID, FVector& Position);                                                           // [0x2a53550] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
	// void SetPolygonVertexInstance(FPolygonID PolygonID, int32_t PerimeterIndex, FVertexInstanceID VertexInstanceID);         // [0x2a53430] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
	// void SetPolygonPolygonGroup(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID);                                       // [0x2a53360] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReversePolygonFacing
	// void ReversePolygonFacing(FPolygonID PolygonID);                                                                         // [0x2a532e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertices
	// void ReserveNewVertices(int32_t NumberOfNewVertices);                                                                    // [0x2a53250] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
	// void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances);                                                      // [0x2a53010] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewTriangles
	// void ReserveNewTriangles(int32_t NumberOfNewTriangles);                                                                  // [0x2a531c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygons
	// void ReserveNewPolygons(int32_t NumberOfNewPolygons);                                                                    // [0x2a53130] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
	// void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups);                                                          // [0x2a530a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewEdges
	// void ReserveNewEdges(int32_t NumberOfNewEdges);                                                                          // [0x2a53010] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexValid
	// bool IsVertexValid(FVertexID VertexID);                                                                                  // [0x2a52f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexOrphaned
	// bool IsVertexOrphaned(FVertexID VertexID);                                                                               // [0x2a52ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
	// bool IsVertexInstanceValid(FVertexInstanceID VertexInstanceID);                                                          // [0x2a52e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsTriangleValid
	// bool IsTriangleValid(FTriangleID TriangleID);                                                                            // [0x2a52dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
	// bool IsTrianglePartOfNgon(FTriangleID TriangleID);                                                                       // [0x2a52d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonValid
	// bool IsPolygonValid(FPolygonID PolygonID);                                                                               // [0x2a52cb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
	// bool IsPolygonGroupValid(FPolygonGroupID PolygonGroupID);                                                                // [0x2a52c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEmpty
	// bool IsEmpty();                                                                                                          // [0x2a52bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeValid
	// bool IsEdgeValid(FEdgeID EdgeID);                                                                                        // [0x2a52b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
	// bool IsEdgeInternalToPolygon(FEdgeID EdgeID, FPolygonID PolygonID);                                                      // [0x2a52a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternal
	// bool IsEdgeInternal(FEdgeID EdgeID);                                                                                     // [0x2a529f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
	// void GetVertexVertexInstances(FVertexID VertexID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                      // [0x2a52900] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPosition
	// FVector GetVertexPosition(FVertexID VertexID);                                                                           // [0x2a52860] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPairEdge
	// FEdgeID GetVertexPairEdge(FVertexID VertexID0, FVertexID VertexID1);                                                     // [0x2a52780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
	// FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID);                                                   // [0x2a526e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
	// FEdgeID GetVertexInstancePairEdge(FVertexInstanceID VertexInstanceID0, FVertexInstanceID VertexInstanceID1);             // [0x2a52600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
	// FVertexInstanceID GetVertexInstanceForTriangleVertex(FTriangleID TriangleID, FVertexID VertexID);                        // [0x2a52520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
	// FVertexInstanceID GetVertexInstanceForPolygonVertex(FPolygonID PolygonID, FVertexID VertexID);                           // [0x2a52440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
	// void GetVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID, TArray<FTriangleID>& OutConnectedTriangleIDs); // [0x2a52350] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
	// void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs); // [0x2a52260] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
	// void GetVertexConnectedTriangles(FVertexID VertexID, TArray<FTriangleID>& OutConnectedTriangleIDs);                      // [0x2a52170] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
	// void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs);                         // [0x2a52080] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
	// void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutEdgeIDs);                                           // [0x2a51f90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
	// void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs);                             // [0x2a51ea0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertices
	// void GetTriangleVertices(FTriangleID TriangleID, TArray<FVertexID>& OutVertexIDs);                                       // [0x2a51db0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
	// void GetTriangleVertexInstances(FTriangleID TriangleID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                // [0x2a51cc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
	// FVertexInstanceID GetTriangleVertexInstance(FTriangleID TriangleID, int32_t Index);                                      // [0x2a51be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
	// FPolygonGroupID GetTrianglePolygonGroup(FTriangleID TriangleID);                                                         // [0x2a51b40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygon
	// FPolygonID GetTrianglePolygon(FTriangleID TriangleID);                                                                   // [0x2a51aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleEdges
	// void GetTriangleEdges(FTriangleID TriangleID, TArray<FEdgeID>& OutEdgeIDs);                                              // [0x2a519b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
	// void GetTriangleAdjacentTriangles(FTriangleID TriangleID, TArray<FTriangleID>& OutTriangleIDs);                          // [0x2a518c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertices
	// void GetPolygonVertices(FPolygonID PolygonID, TArray<FVertexID>& OutVertexIDs);                                          // [0x2a517d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
	// void GetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                   // [0x2a516e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonTriangles
	// void GetPolygonTriangles(FPolygonID PolygonID, TArray<FTriangleID>& OutTriangleIDs);                                     // [0x2a515f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
	// FPolygonGroupID GetPolygonPolygonGroup(FPolygonID PolygonID);                                                            // [0x2a51550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
	// void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs);                                        // [0x2a51460] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
	// void GetPolygonInternalEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs);                                         // [0x2a51370] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
	// void GetPolygonGroupPolygons(FPolygonGroupID PolygonGroupID, TArray<FPolygonID>& OutPolygonIDs);                         // [0x2a51280] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
	// void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutPolygonIDs);                                // [0x2a51190] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
	// int32_t GetNumVertexVertexInstances(FVertexID VertexID);                                                                 // [0x2a51100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
	// int32_t GetNumVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID);                                      // [0x2a51070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
	// int32_t GetNumVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID);                                       // [0x2a50fe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
	// int32_t GetNumVertexConnectedTriangles(FVertexID VertexID);                                                              // [0x2a50f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
	// int32_t GetNumVertexConnectedPolygons(FVertexID VertexID);                                                               // [0x2a50ec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
	// int32_t GetNumVertexConnectedEdges(FVertexID VertexID);                                                                  // [0x2a50e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
	// int32_t GetNumPolygonVertices(FPolygonID PolygonID);                                                                     // [0x2a50da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
	// int32_t GetNumPolygonTriangles(FPolygonID PolygonID);                                                                    // [0x2a50d10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
	// int32_t GetNumPolygonInternalEdges(FPolygonID PolygonID);                                                                // [0x2a50c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
	// int32_t GetNumPolygonGroupPolygons(FPolygonGroupID PolygonGroupID);                                                      // [0x2a50bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
	// int32_t GetNumEdgeConnectedTriangles(FEdgeID EdgeID);                                                                    // [0x2a50b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
	// int32_t GetNumEdgeConnectedPolygons(FEdgeID EdgeID);                                                                     // [0x2a50ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertices
	// void GetEdgeVertices(FEdgeID EdgeID, TArray<FVertexID>& OutVertexIDs);                                                   // [0x2a509e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertex
	// FVertexID GetEdgeVertex(FEdgeID EdgeID, int32_t VertexNumber);                                                           // [0x2a50900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
	// void GetEdgeConnectedTriangles(FEdgeID EdgeID, TArray<FTriangleID>& OutConnectedTriangleIDs);                            // [0x2a50810] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
	// void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs);                               // [0x2a50720] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.Empty
	// void Empty();                                                                                                            // [0x2a50700] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertexInstance
	// void DeleteVertexInstance(FVertexInstanceID VertexInstanceID, TArray<FVertexID>& OrphanedVertices);                      // [0x2a50610] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertex
	// void DeleteVertex(FVertexID VertexID);                                                                                   // [0x2a50590] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteTriangle
	// void DeleteTriangle(FTriangleID TriangleID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroupsPtr); // [0x2a503d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygonGroup
	// void DeletePolygonGroup(FPolygonGroupID PolygonGroupID);                                                                 // [0x2a50350] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygon
	// void DeletePolygon(FPolygonID PolygonID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroups); // [0x2a50190] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteEdge
	// void DeleteEdge(FEdgeID EdgeID, TArray<FVertexID>& OrphanedVertices);                                                    // [0x2a500a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexWithID
	// void CreateVertexWithID(FVertexID VertexID);                                                                             // [0x2a50020] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
	// void CreateVertexInstanceWithID(FVertexInstanceID VertexInstanceID, FVertexID VertexID);                                 // [0x2a4ff50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstance
	// FVertexInstanceID CreateVertexInstance(FVertexID VertexID);                                                              // [0x2a4feb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertex
	// FVertexID CreateVertex();                                                                                                // [0x2a4fe70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangleWithID
	// void CreateTriangleWithID(FTriangleID TriangleID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x2a4fcc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangle
	// FTriangleID CreateTriangle(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x2a4fb50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonWithID
	// void CreatePolygonWithID(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x2a4f9a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
	// void CreatePolygonGroupWithID(FPolygonGroupID PolygonGroupID);                                                           // [0x2a4f920] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroup
	// FPolygonGroupID CreatePolygonGroup();                                                                                    // [0x2a4f8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygon
	// FPolygonID CreatePolygon(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x2a4f770] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateEdgeWithID
	// void CreateEdgeWithID(FEdgeID EdgeID, FVertexID VertexID0, FVertexID VertexID1);                                         // [0x2a4f650] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateEdge
	// FEdgeID CreateEdge(FVertexID VertexID0, FVertexID VertexID1);                                                            // [0x2a4f570] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
	// void ComputePolygonTriangulation(FPolygonID PolygonID);                                                                  // [0x2a4f4f0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MeshDescription.ElementID
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FElementID
{ 
	int32_t                                            IDValue;                                                    // 0x0000   (0x0004)  
};

/// Struct /Script/MeshDescription.PolygonGroupID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FPolygonGroupID : FElementID
{ 
};

/// Struct /Script/MeshDescription.PolygonID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FPolygonID : FElementID
{ 
};

/// Struct /Script/MeshDescription.VertexID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FVertexID : FElementID
{ 
};

/// Struct /Script/MeshDescription.VertexInstanceID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FVertexInstanceID : FElementID
{ 
};

/// Struct /Script/MeshDescription.EdgeID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FEdgeID : FElementID
{ 
};

/// Struct /Script/MeshDescription.TriangleID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FTriangleID : FElementID
{ 
};

#pragma pack(pop)


static_assert(sizeof(UMeshDescription) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshDescriptionBase) == 0x0390); // 912 bytes (0x000028 - 0x000390)
static_assert(sizeof(FElementID) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPolygonGroupID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FPolygonID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FVertexID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FVertexInstanceID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FEdgeID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FTriangleID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
