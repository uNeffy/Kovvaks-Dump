
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: Character
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FirstPersonBP
/// dependency: Tools

#pragma pack(push, 0x1)

/// Class /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C
/// Size: 0x40D8 (16600 bytes) (0x0002B8 - 0x0040D8) align 16 MaxSize: 0x40D8
class US_AnimeFPSChar_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02C8   (0x0008)  MISSED
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x02D0   (0x01E0)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x04B0   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x04D0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x04F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0520   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x0548   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x0570   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x0598   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult5;                            // 0x05C0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult6;                            // 0x05E8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult7;                            // 0x0610   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult8;                            // 0x0638   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult9;                            // 0x0660   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult10;                           // 0x0688   (0x0028)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x06B0   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer11;                           // 0x0798   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer12;                           // 0x0880   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer13;                           // 0x0968   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer14;                           // 0x0A50   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer15;                           // 0x0B38   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer16;                           // 0x0C20   (0x00E8)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x0D08   (0x00B0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer17;                           // 0x0DB8   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer18;                           // 0x0EA0   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer19;                           // 0x0F88   (0x00E8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1070   (0x0080)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x10F0   (0x00C8)  
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator;                            // 0x11B8   (0x0050)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive20;                              // 0x1208   (0x00C8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x12D0   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer21;                           // 0x1300   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer22;                           // 0x13E8   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer23;                           // 0x14D0   (0x00E8)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum24;                            // 0x15B8   (0x00B0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer25;                           // 0x1668   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer26;                           // 0x1750   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer27;                           // 0x1838   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer28;                           // 0x1920   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer29;                           // 0x1A08   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer30;                           // 0x1AF0   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer31;                           // 0x1BD8   (0x00E8)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x1CC0   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer32;                           // 0x1D88   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer33;                           // 0x1E70   (0x00E8)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive34;                              // 0x1F58   (0x00C8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult35;                                // 0x2020   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer36;                           // 0x2050   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer37;                           // 0x2138   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer38;                           // 0x2220   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer39;                           // 0x2308   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer40;                           // 0x23F0   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer41;                           // 0x24D8   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer42;                           // 0x25C0   (0x00E8)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum43;                            // 0x26A8   (0x00B0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer44;                           // 0x2758   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer45;                           // 0x2840   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer46;                           // 0x2928   (0x00E8)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend47;                                // 0x2A10   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer48;                           // 0x2AD8   (0x00E8)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive49;                              // 0x2BC0   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer50;                           // 0x2C88   (0x00E8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult51;                                // 0x2D70   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer52;                           // 0x2DA0   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer53;                           // 0x2E88   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer54;                           // 0x2F70   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer55;                           // 0x3058   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer56;                           // 0x3140   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer57;                           // 0x3228   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer58;                           // 0x3310   (0x00E8)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum59;                            // 0x33F8   (0x00B0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer60;                           // 0x34A8   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer61;                           // 0x3590   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer62;                           // 0x3678   (0x00E8)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x3760   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone63;                                 // 0x3868   (0x0108)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace64;                      // 0x3970   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x3990   (0x0020)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend65;                                // 0x39B0   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer66;                             // 0x3A78   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer67;                             // 0x3AF8   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer68;                             // 0x3B78   (0x0080)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive69;                              // 0x3BF8   (0x00C8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x3CC0   (0x00A0)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive70;                              // 0x3D60   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer71;                             // 0x3E28   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult72;                                // 0x3EA8   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x3ED8   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x3F88   (0x0030)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace73;                      // 0x3FB8   (0x0020)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x3FD8   (0x0048)  
	float                                              Direction;                                                  // 0x4020   (0x0004)  
	float                                              Speed;                                                      // 0x4024   (0x0004)  
	float                                              Z_Angle_Idle;                                               // 0x4028   (0x0004)  
	float                                              Y_Angle_Idle;                                               // 0x402C   (0x0004)  
	bool                                               TurnRight_Left;                                             // 0x4030   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x4031   (0x0003)  MISSED
	float                                              Turn_Rate;                                                  // 0x4034   (0x0004)  
	float                                              Stand_Crouch_Alpha;                                         // 0x4038   (0x0004)  
	bool                                               Is_Falling;                                                 // 0x403C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x403D   (0x0003)  MISSED
	float                                              Landing;                                                    // 0x4040   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x4044   (0x0004)  MISSED
	SDK_UNDEFINED(16,964) /* TScriptInterface<BlueprintGeneratedClass> */ __um(Owner);                             // 0x4048   (0x0010)  
	TEnumAsByte<E_WeaponType>                          WeaponType;                                                 // 0x4058   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x4059   (0x0003)  MISSED
	FVector                                            GunBase;                                                    // 0x405C   (0x000C)  
	FRotator                                           GunBaseRotation;                                            // 0x4068   (0x000C)  
	FVector                                            GunBaseOffset;                                              // 0x4074   (0x000C)  
	FRotator                                           Character_Rotation;                                         // 0x4080   (0x000C)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x408C   (0x0004)  MISSED
	class UPoseableMeshComponent*                      NewVar;                                                     // 0x4090   (0x0008)  
	float                                              Jump_Pose_Alpha;                                            // 0x4098   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x409C   (0x0004)  MISSED
	class AFPSCharacter_C*                             FPSCharacter;                                               // 0x40A0   (0x0008)  
	float                                              DeltaSeconds;                                               // 0x40A8   (0x0004)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x40AC   (0x0004)  MISSED
	class UObject*                                     TEST_ThirdPersonPlayer;                                     // 0x40B0   (0x0008)  
	class ABP_3_Meso_C*                                TEST_ThirdPersonPlayer1;                                    // 0x40B8   (0x0008)  
	class ABP_3_Anime_C*                               BP_3_Anime;                                                 // 0x40C0   (0x0008)  
	SDK_UNDEFINED(16,965) /* FMulticastInlineDelegate */ __um(FinishLoadingAnimation);                             // 0x40C8   (0x0010)  


	/// Functions
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TransitionResult_4348A56842E397DCB5FF29A6FE9EB81F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TransitionResult_4348A56842E397DCB5FF29A6FE9EB81F(); // [0x18d2100] BlueprintEvent       
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TransitionResult_D3DF4B2E4A5D51AFD581D2B8A5D511B1
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TransitionResult_D3DF4B2E4A5D51AFD581D2B8A5D511B1(); // [0x18d2100] BlueprintEvent       
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TransitionResult_09FC4BFE4E04825083E4FF83306291F8
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TransitionResult_09FC4BFE4E04825083E4FF83306291F8(); // [0x18d2100] BlueprintEvent       
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TwoBoneIK_DB6E9B67472326CA0DDF1C8B0FA6053B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TwoBoneIK_DB6E9B67472326CA0DDF1C8B0FA6053B(); // [0x18d2100] BlueprintEvent       
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_SequencePlayer_34A593FE4400C9E7CF0064A399949E74
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_SequencePlayer_34A593FE4400C9E7CF0064A399949E74(); // [0x18d2100] BlueprintEvent       
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_SequencePlayer_30A081CF46A68C06A523B4AE6B673504
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_SequencePlayer_30A081CF46A68C06A523B4AE6B673504(); // [0x18d2100] BlueprintEvent       
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_ApplyAdditive_05233753405F8401EBFA8583BACA5204
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_ApplyAdditive_05233753405F8401EBFA8583BACA5204(); // [0x18d2100] BlueprintEvent       
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_BlendSpacePlayer_2ACCE73B4865E7566AC4EEA6052E39E0
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_BlendSpacePlayer_2ACCE73B4865E7566AC4EEA6052E39E0(); // [0x18d2100] BlueprintEvent       
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_BlendSpacePlayer_28883AAC46278AF59E52AFB17F935CA8
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_BlendSpacePlayer_28883AAC46278AF59E52AFB17F935CA8(); // [0x18d2100] BlueprintEvent       
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TransitionResult_B25AFA3D426691252C1E00AFC2A3E2E6
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TransitionResult_B25AFA3D426691252C1E00AFC2A3E2E6(); // [0x18d2100] BlueprintEvent       
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TransitionResult_7FAFD96C4710D192A71AE19EE4BD09F2
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TransitionResult_7FAFD96C4710D192A71AE19EE4BD09F2(); // [0x18d2100] BlueprintEvent       
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TransitionResult_A04E617F45F06E7367FA99B2CB996FAD
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TransitionResult_A04E617F45F06E7367FA99B2CB996FAD(); // [0x18d2100] BlueprintEvent       
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x18d2100] Event|Public|BlueprintEvent 
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                     // [0x18d2100] Event|Public|BlueprintEvent 
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TransitionResult_0865717E47721675A4F85DA926A7E96B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TransitionResult_0865717E47721675A4F85DA926A7E96B(); // [0x18d2100] BlueprintEvent       
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.ReInitWeapon
	// void ReInitWeapon();                                                                                                     // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TransitionResult_2E17FEBF4A633AE48C3031A4D5131005
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_S_AnimeFPSChar_ABP_AnimGraphNode_TransitionResult_2E17FEBF4A633AE48C3031A4D5131005(); // [0x18d2100] BlueprintEvent       
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.InvalidateWeaponType
	// void InvalidateWeaponType();                                                                                             // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.ReInitWeaponInternal
	// void ReInitWeaponInternal();                                                                                             // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.ReInitWeaponAlwaysTick
	// void ReInitWeaponAlwaysTick();                                                                                           // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.ExecuteUbergraph_S_AnimeFPSChar_ABP
	// void ExecuteUbergraph_S_AnimeFPSChar_ABP(int32_t EntryPoint);                                                            // [0x18d2100] Final|HasDefaults    
	// Function /Game/SourceArt/Characters/ThirdPerson/S_Anime/Animations/S_AnimeFPSChar_ABP.S_AnimeFPSChar_ABP_C.FinishLoadingAnimation__DelegateSignature
	// void FinishLoadingAnimation__DelegateSignature();                                                                        // [0x18d2100] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(US_AnimeFPSChar_ABP_C) == 0x40D8); // 16600 bytes (0x0002B8 - 0x0040D8)
static_assert(offsetof(US_AnimeFPSChar_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_TwoBoneIK) == 0x02D0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_LocalToComponentSpace) == 0x04B0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_TransitionResult) == 0x04D0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_TransitionResult0) == 0x04F8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_TransitionResult1) == 0x0520);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_TransitionResult2) == 0x0548);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_TransitionResult3) == 0x0570);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_TransitionResult4) == 0x0598);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_TransitionResult5) == 0x05C0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_TransitionResult6) == 0x05E8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_TransitionResult7) == 0x0610);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_TransitionResult8) == 0x0638);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_TransitionResult9) == 0x0660);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_TransitionResult10) == 0x0688);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer) == 0x06B0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer11) == 0x0798);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer12) == 0x0880);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer13) == 0x0968);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer14) == 0x0A50);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer15) == 0x0B38);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer16) == 0x0C20);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendListByEnum) == 0x0D08);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer17) == 0x0DB8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer18) == 0x0EA0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer19) == 0x0F88);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_SequencePlayer) == 0x1070);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_ApplyAdditive) == 0x10F0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_SequenceEvaluator) == 0x11B8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_ApplyAdditive20) == 0x1208);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_StateResult) == 0x12D0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer21) == 0x1300);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer22) == 0x13E8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer23) == 0x14D0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendListByEnum24) == 0x15B8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer25) == 0x1668);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer26) == 0x1750);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer27) == 0x1838);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer28) == 0x1920);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer29) == 0x1A08);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer30) == 0x1AF0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer31) == 0x1BD8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_TwoWayBlend) == 0x1CC0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer32) == 0x1D88);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer33) == 0x1E70);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_ApplyAdditive34) == 0x1F58);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_StateResult35) == 0x2020);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer36) == 0x2050);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer37) == 0x2138);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer38) == 0x2220);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer39) == 0x2308);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer40) == 0x23F0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer41) == 0x24D8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer42) == 0x25C0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendListByEnum43) == 0x26A8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer44) == 0x2758);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer45) == 0x2840);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer46) == 0x2928);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_TwoWayBlend47) == 0x2A10);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer48) == 0x2AD8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_ApplyAdditive49) == 0x2BC0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer50) == 0x2C88);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_StateResult51) == 0x2D70);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer52) == 0x2DA0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer53) == 0x2E88);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer54) == 0x2F70);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer55) == 0x3058);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer56) == 0x3140);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer57) == 0x3228);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer58) == 0x3310);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendListByEnum59) == 0x33F8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer60) == 0x34A8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer61) == 0x3590);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendSpacePlayer62) == 0x3678);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_ModifyBone) == 0x3760);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_ModifyBone63) == 0x3868);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_LocalToComponentSpace64) == 0x3970);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_ComponentToLocalSpace) == 0x3990);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_TwoWayBlend65) == 0x39B0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_SequencePlayer66) == 0x3A78);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_SequencePlayer67) == 0x3AF8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_SequencePlayer68) == 0x3B78);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_ApplyAdditive69) == 0x3BF8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_BlendListByBool) == 0x3CC0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_ApplyAdditive70) == 0x3D60);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_SequencePlayer71) == 0x3E28);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_StateResult72) == 0x3EA8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_StateMachine) == 0x3ED8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_Root) == 0x3F88);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_ComponentToLocalSpace73) == 0x3FB8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, AnimGraphNode_Slot) == 0x3FD8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, WeaponType) == 0x4058);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, GunBase) == 0x405C);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, GunBaseRotation) == 0x4068);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, GunBaseOffset) == 0x4074);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, Character_Rotation) == 0x4080);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, NewVar) == 0x4090);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, FPSCharacter) == 0x40A0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, TEST_ThirdPersonPlayer) == 0x40B0);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, TEST_ThirdPersonPlayer1) == 0x40B8);
static_assert(offsetof(US_AnimeFPSChar_ABP_C, BP_3_Anime) == 0x40C0);
