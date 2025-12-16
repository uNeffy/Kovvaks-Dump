
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AnimGraphRuntime
/// dependency: Character
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FirstPersonBP

#pragma pack(push, 0x1)

/// Class /Game/Weapons/WaveBooster/WaveBooster_ABP.WaveBooster_ABP_C
/// Size: 0x04A0 (1184 bytes) (0x0002B8 - 0x0004A0) align 16 MaxSize: 0x04A0
class UWaveBooster_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x02C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0348   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0378   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0428   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0458   (0x0048)  


	/// Functions
	// Function /Game/Weapons/WaveBooster/WaveBooster_ABP.WaveBooster_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/WaveBooster/WaveBooster_ABP.WaveBooster_ABP_C.ExecuteUbergraph_WaveBooster_ABP
	// void ExecuteUbergraph_WaveBooster_ABP(int32_t EntryPoint);                                                               // [0x18d2100] Final                
};

/// Class /Game/Weapons/TripleTapRifle/TripleTapRifle_ABP.TripleTapRifle_ABP_C
/// Size: 0x04A8 (1192 bytes) (0x0002B8 - 0x0004A8) align 16 MaxSize: 0x04A8
class UTripleTapRifle_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x02F8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0340   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x03C0   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x03F0   (0x00B0)  
	class AFPSPlayer_WeaponComponent_C*                ViewModel;                                                  // 0x04A0   (0x0008)  


	/// Functions
	// Function /Game/Weapons/TripleTapRifle/TripleTapRifle_ABP.TripleTapRifle_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/TripleTapRifle/TripleTapRifle_ABP.TripleTapRifle_ABP_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                     // [0x18d2100] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/TripleTapRifle/TripleTapRifle_ABP.TripleTapRifle_ABP_C.ExecuteUbergraph_TripleTapRifle_ABP
	// void ExecuteUbergraph_TripleTapRifle_ABP(int32_t EntryPoint);                                                            // [0x18d2100] Final                
};

/// Class /Game/Weapons/TempestBow/TempestBow_ABP.TempestBow_ABP_C
/// Size: 0x06A8 (1704 bytes) (0x0002B8 - 0x0006A8) align 16 MaxSize: 0x06A8
class UTempestBow_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x02C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x02F0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0318   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x0340   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0368   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x03E8   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer3;                              // 0x0418   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult4;                                 // 0x0498   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer5;                              // 0x04C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult6;                                 // 0x0548   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0578   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0628   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0658   (0x0048)  
	class AFPSPlayer_WeaponComponent_C*                ViewModel;                                                  // 0x06A0   (0x0008)  


	/// Functions
	// Function /Game/Weapons/TempestBow/TempestBow_ABP.TempestBow_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/TempestBow/TempestBow_ABP.TempestBow_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TempestBow_ABP_AnimGraphNode_TransitionResult_31239BFD471DCF44E179C98647293F08
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_TempestBow_ABP_AnimGraphNode_TransitionResult_31239BFD471DCF44E179C98647293F08(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/TempestBow/TempestBow_ABP.TempestBow_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TempestBow_ABP_AnimGraphNode_TransitionResult_BF6F1DBB4807CBAC42C833ABBC68CA76
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_TempestBow_ABP_AnimGraphNode_TransitionResult_BF6F1DBB4807CBAC42C833ABBC68CA76(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/TempestBow/TempestBow_ABP.TempestBow_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TempestBow_ABP_AnimGraphNode_TransitionResult_9B03DD4E4F8A358210D292979A5E5C35
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_TempestBow_ABP_AnimGraphNode_TransitionResult_9B03DD4E4F8A358210D292979A5E5C35(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/TempestBow/TempestBow_ABP.TempestBow_ABP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x18d2100] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/TempestBow/TempestBow_ABP.TempestBow_ABP_C.ExecuteUbergraph_TempestBow_ABP
	// void ExecuteUbergraph_TempestBow_ABP(int32_t EntryPoint);                                                                // [0x18d2100] Final                
};

/// Class /Game/Weapons/SurgePistols/SurgePistols_ABP.SurgePistols_ABP_C
/// Size: 0x04A0 (1184 bytes) (0x0002B8 - 0x0004A0) align 16 MaxSize: 0x04A0
class USurgePistols_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x02C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0348   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0378   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0428   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0458   (0x0048)  


	/// Functions
	// Function /Game/Weapons/SurgePistols/SurgePistols_ABP.SurgePistols_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/SurgePistols/SurgePistols_ABP.SurgePistols_ABP_C.ExecuteUbergraph_SurgePistols_ABP
	// void ExecuteUbergraph_SurgePistols_ABP(int32_t EntryPoint);                                                              // [0x18d2100] Final                
};

/// Class /Game/Weapons/StudGun/StudGun_ABP.StudGun_ABP_C
/// Size: 0x04A0 (1184 bytes) (0x0002B8 - 0x0004A0) align 16 MaxSize: 0x04A0
class UStudGun_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x02C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0348   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0378   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0428   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0458   (0x0048)  


	/// Functions
	// Function /Game/Weapons/StudGun/StudGun_ABP.StudGun_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/StudGun/StudGun_ABP.StudGun_ABP_C.ExecuteUbergraph_StudGun_ABP
	// void ExecuteUbergraph_StudGun_ABP(int32_t EntryPoint);                                                                   // [0x18d2100] Final                
};

/// Class /Game/Weapons/Spike/Spike_ABP.Spike_ABP_C
/// Size: 0x05A8 (1448 bytes) (0x0002B8 - 0x0005A8) align 16 MaxSize: 0x05A8
class USpike_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x02C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x02F0   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0318   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0398   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer1;                              // 0x03C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult2;                                 // 0x0448   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0478   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0528   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0558   (0x0048)  
	class AFPSPlayer_WeaponComponent_C*                ViewModel;                                                  // 0x05A0   (0x0008)  


	/// Functions
	// Function /Game/Weapons/Spike/Spike_ABP.Spike_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Spike/Spike_ABP.Spike_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Spike_ABP_AnimGraphNode_TransitionResult_3F6521884C245E98617D48A6F9503CE8
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Spike_ABP_AnimGraphNode_TransitionResult_3F6521884C245E98617D48A6F9503CE8(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/Spike/Spike_ABP.Spike_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Spike_ABP_AnimGraphNode_TransitionResult_4B253F414DCAB32C34390596441A5FA4
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Spike_ABP_AnimGraphNode_TransitionResult_4B253F414DCAB32C34390596441A5FA4(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/Spike/Spike_ABP.Spike_ABP_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                     // [0x18d2100] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Spike/Spike_ABP.Spike_ABP_C.ExecuteUbergraph_Spike_ABP
	// void ExecuteUbergraph_Spike_ABP(int32_t EntryPoint);                                                                     // [0x18d2100] Final                
};

/// Class /Game/Weapons/Spider/Spider_ABP.Spider_ABP_C
/// Size: 0x04A0 (1184 bytes) (0x0002B8 - 0x0004A0) align 16 MaxSize: 0x04A0
class USpider_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x02C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0348   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0378   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0428   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0458   (0x0048)  


	/// Functions
	// Function /Game/Weapons/Spider/Spider_ABP.Spider_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Spider/Spider_ABP.Spider_ABP_C.ExecuteUbergraph_Spider_ABP
	// void ExecuteUbergraph_Spider_ABP(int32_t EntryPoint);                                                                    // [0x18d2100] Final                
};

/// Class /Game/Weapons/RocketLauncher/RocketLauncher_ABP.RocketLauncher_ABP_C
/// Size: 0x0750 (1872 bytes) (0x0002B8 - 0x000750) align 16 MaxSize: 0x0750
class URocketLauncher_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x02C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0348   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0378   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0428   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0458   (0x0048)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x04A0   (0x0158)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x05F8   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x06B8   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot0;                                        // 0x06E0   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose1;                               // 0x0728   (0x0028)  


	/// Functions
	// Function /Game/Weapons/RocketLauncher/RocketLauncher_ABP.RocketLauncher_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/RocketLauncher/RocketLauncher_ABP.RocketLauncher_ABP_C.AnimNotify_AmmoNotify
	// void AnimNotify_AmmoNotify();                                                                                            // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/RocketLauncher/RocketLauncher_ABP.RocketLauncher_ABP_C.ExecuteUbergraph_RocketLauncher_ABP
	// void ExecuteUbergraph_RocketLauncher_ABP(int32_t EntryPoint);                                                            // [0x18d2100] Final                
};

/// Class /Game/Weapons/MoleculeCannon/MoleculeCannon_ABP.MoleculeCannon_ABP_C
/// Size: 0x0688 (1672 bytes) (0x0002B8 - 0x000688) align 16 MaxSize: 0x0688
class UMoleculeCannon_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x02C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x02F0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0318   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0340   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x03C0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer2;                              // 0x03F0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult3;                                 // 0x0470   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer4;                              // 0x04A0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult5;                                 // 0x0520   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0550   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0600   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0630   (0x0048)  
	class AFPSCharacter_C*                             FPSCharacter;                                               // 0x0678   (0x0008)  
	class AFPSPlayer_WeaponComponent_C*                ViewModel;                                                  // 0x0680   (0x0008)  


	/// Functions
	// Function /Game/Weapons/MoleculeCannon/MoleculeCannon_ABP.MoleculeCannon_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/MoleculeCannon/MoleculeCannon_ABP.MoleculeCannon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MoleculeCannon_ABP_AnimGraphNode_TransitionResult_78CA8D3446D6F856499CA2B0767D0834
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_MoleculeCannon_ABP_AnimGraphNode_TransitionResult_78CA8D3446D6F856499CA2B0767D0834(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/MoleculeCannon/MoleculeCannon_ABP.MoleculeCannon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MoleculeCannon_ABP_AnimGraphNode_TransitionResult_B72C8EB047FF5AB67166059D72E56764
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_MoleculeCannon_ABP_AnimGraphNode_TransitionResult_B72C8EB047FF5AB67166059D72E56764(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/MoleculeCannon/MoleculeCannon_ABP.MoleculeCannon_ABP_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                     // [0x18d2100] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/MoleculeCannon/MoleculeCannon_ABP.MoleculeCannon_ABP_C.ExecuteUbergraph_MoleculeCannon_ABP
	// void ExecuteUbergraph_MoleculeCannon_ABP(int32_t EntryPoint);                                                            // [0x18d2100] Final                
};

/// Class /Game/Weapons/MachinePistol/MachinePistol_ABP.MachinePistol_ABP_C
/// Size: 0x04A0 (1184 bytes) (0x0002B8 - 0x0004A0) align 16 MaxSize: 0x04A0
class UMachinePistol_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x02C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0348   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0378   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0428   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0458   (0x0048)  


	/// Functions
	// Function /Game/Weapons/MachinePistol/MachinePistol_ABP.MachinePistol_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/MachinePistol/MachinePistol_ABP.MachinePistol_ABP_C.ExecuteUbergraph_MachinePistol_ABP
	// void ExecuteUbergraph_MachinePistol_ABP(int32_t EntryPoint);                                                             // [0x18d2100] Final                
};

/// Class /Game/Weapons/LawBringer/LawBringer_ABP.LawBringer_ABP_C
/// Size: 0x04A0 (1184 bytes) (0x0002B8 - 0x0004A0) align 16 MaxSize: 0x04A0
class ULawBringer_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x02C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0348   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0378   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0428   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0458   (0x0048)  


	/// Functions
	// Function /Game/Weapons/LawBringer/LawBringer_ABP.LawBringer_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/LawBringer/LawBringer_ABP.LawBringer_ABP_C.ExecuteUbergraph_LawBringer_ABP
	// void ExecuteUbergraph_LawBringer_ABP(int32_t EntryPoint);                                                                // [0x18d2100] Final                
};

/// Class /Game/Weapons/HeavySurgeRifle/HeavySurgeRifle_ABP.HeavySurgeRifle_ABP_C
/// Size: 0x04A0 (1184 bytes) (0x0002B8 - 0x0004A0) align 16 MaxSize: 0x04A0
class UHeavySurgeRifle_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x02C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0348   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0378   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0428   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0458   (0x0048)  


	/// Functions
	// Function /Game/Weapons/HeavySurgeRifle/HeavySurgeRifle_ABP.HeavySurgeRifle_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/HeavySurgeRifle/HeavySurgeRifle_ABP.HeavySurgeRifle_ABP_C.ExecuteUbergraph_HeavySurgeRifle_ABP
	// void ExecuteUbergraph_HeavySurgeRifle_ABP(int32_t EntryPoint);                                                           // [0x18d2100] Final                
};

/// Class /Game/Weapons/HealRifle/HealRifle_ABP.HealRifle_ABP_C
/// Size: 0x04A0 (1184 bytes) (0x0002B8 - 0x0004A0) align 16 MaxSize: 0x04A0
class UHealRifle_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x02C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0348   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0378   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0428   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0458   (0x0048)  


	/// Functions
	// Function /Game/Weapons/HealRifle/HealRifle_ABP.HealRifle_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/HealRifle/HealRifle_ABP.HealRifle_ABP_C.ExecuteUbergraph_HealRifle_ABP
	// void ExecuteUbergraph_HealRifle_ABP(int32_t EntryPoint);                                                                 // [0x18d2100] Final                
};

/// Class /Game/Weapons/FIssionDealer/FissionDealer_ABP.FissionDealer_ABP_C
/// Size: 0x04A0 (1184 bytes) (0x0002B8 - 0x0004A0) align 16 MaxSize: 0x04A0
class UFissionDealer_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x02C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0348   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0378   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0428   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0458   (0x0048)  


	/// Functions
	// Function /Game/Weapons/FIssionDealer/FissionDealer_ABP.FissionDealer_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FIssionDealer/FissionDealer_ABP.FissionDealer_ABP_C.ExecuteUbergraph_FissionDealer_ABP
	// void ExecuteUbergraph_FissionDealer_ABP(int32_t EntryPoint);                                                             // [0x18d2100] Final                
};

/// Class /Game/Weapons/Default_AK/Default_AK_ABP.Default_AK_ABP_C
/// Size: 0x04A0 (1184 bytes) (0x0002B8 - 0x0004A0) align 16 MaxSize: 0x04A0
class UDefault_AK_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x02F8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0340   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x03C0   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x03F0   (0x00B0)  


	/// Functions
	// Function /Game/Weapons/Default_AK/Default_AK_ABP.Default_AK_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Default_AK/Default_AK_ABP.Default_AK_ABP_C.ExecuteUbergraph_Default_AK_ABP
	// void ExecuteUbergraph_Default_AK_ABP(int32_t EntryPoint);                                                                // [0x18d2100] Final                
};

/// Class /Game/Weapons/BeamThrowerNew/BeanThrowerNew_ABP.BeanThrowerNew_ABP_C
/// Size: 0x0820 (2080 bytes) (0x0002B8 - 0x000820) align 16 MaxSize: 0x0820
class UBeanThrowerNew_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x02F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0320   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0348   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x0370   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x0398   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x03C0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0440   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer4;                              // 0x0470   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult5;                                 // 0x04F0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer6;                              // 0x0520   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult7;                                 // 0x05A0   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x05D0   (0x00B0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0680   (0x0108)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0788   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x07A8   (0x0020)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x07C8   (0x0048)  
	float                                              RotateCannon;                                               // 0x0810   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0814   (0x0004)  MISSED
	class AFPSPlayer_WeaponComponent_C*                ViewModel;                                                  // 0x0818   (0x0008)  


	/// Functions
	// Function /Game/Weapons/BeamThrowerNew/BeanThrowerNew_ABP.BeanThrowerNew_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/BeamThrowerNew/BeanThrowerNew_ABP.BeanThrowerNew_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BeanThrowerNew_ABP_AnimGraphNode_ModifyBone_495B5D41464E6A6FF352459FA905AB42
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BeanThrowerNew_ABP_AnimGraphNode_ModifyBone_495B5D41464E6A6FF352459FA905AB42(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/BeamThrowerNew/BeanThrowerNew_ABP.BeanThrowerNew_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BeanThrowerNew_ABP_AnimGraphNode_TransitionResult_F130609D4B7413B20B3E729E7EA0DD34
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BeanThrowerNew_ABP_AnimGraphNode_TransitionResult_F130609D4B7413B20B3E729E7EA0DD34(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/BeamThrowerNew/BeanThrowerNew_ABP.BeanThrowerNew_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BeanThrowerNew_ABP_AnimGraphNode_TransitionResult_36A20DE14ABEF147FF39F29BF351F141
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BeanThrowerNew_ABP_AnimGraphNode_TransitionResult_36A20DE14ABEF147FF39F29BF351F141(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/BeamThrowerNew/BeanThrowerNew_ABP.BeanThrowerNew_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BeanThrowerNew_ABP_AnimGraphNode_TransitionResult_8841757D483CE4B3ADD4ADA23C80E524
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BeanThrowerNew_ABP_AnimGraphNode_TransitionResult_8841757D483CE4B3ADD4ADA23C80E524(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/BeamThrowerNew/BeanThrowerNew_ABP.BeanThrowerNew_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BeanThrowerNew_ABP_AnimGraphNode_TransitionResult_B467C8AA467A55A73F05C2973F55D2B1
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BeanThrowerNew_ABP_AnimGraphNode_TransitionResult_B467C8AA467A55A73F05C2973F55D2B1(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/BeamThrowerNew/BeanThrowerNew_ABP.BeanThrowerNew_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BeanThrowerNew_ABP_AnimGraphNode_TransitionResult_76A693964BE5FCB534FBB691AF6AD676
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BeanThrowerNew_ABP_AnimGraphNode_TransitionResult_76A693964BE5FCB534FBB691AF6AD676(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/BeamThrowerNew/BeanThrowerNew_ABP.BeanThrowerNew_ABP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x18d2100] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/BeamThrowerNew/BeanThrowerNew_ABP.BeanThrowerNew_ABP_C.AnimNotify_StartRotateCannon
	// void AnimNotify_StartRotateCannon();                                                                                     // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/BeamThrowerNew/BeanThrowerNew_ABP.BeanThrowerNew_ABP_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                     // [0x18d2100] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/BeamThrowerNew/BeanThrowerNew_ABP.BeanThrowerNew_ABP_C.AnimNotify_EndRotateCannon
	// void AnimNotify_EndRotateCannon();                                                                                       // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/BeamThrowerNew/BeanThrowerNew_ABP.BeanThrowerNew_ABP_C.ExecuteUbergraph_BeanThrowerNew_ABP
	// void ExecuteUbergraph_BeanThrowerNew_ABP(int32_t EntryPoint);                                                            // [0x18d2100] Final                
};

/// Class /Game/Weapons/BeamThrower/BeamThrower_ABP.BeamThrower_ABP_C
/// Size: 0x0820 (2080 bytes) (0x0002B8 - 0x000820) align 16 MaxSize: 0x0820
class UBeamThrower_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x02C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x02F0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0318   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x0340   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x0368   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0390   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0410   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer4;                              // 0x0440   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult5;                                 // 0x04C0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer6;                              // 0x04F0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult7;                                 // 0x0570   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x05A0   (0x00B0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0650   (0x0108)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0758   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0778   (0x0020)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0798   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x07C8   (0x0048)  
	float                                              RotateCannon;                                               // 0x0810   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0814   (0x0004)  MISSED
	class AFPSPlayer_WeaponComponent_C*                ViewModel;                                                  // 0x0818   (0x0008)  


	/// Functions
	// Function /Game/Weapons/BeamThrower/BeamThrower_ABP.BeamThrower_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/BeamThrower/BeamThrower_ABP.BeamThrower_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BeamThrower_ABP_AnimGraphNode_ModifyBone_AEB06565458AB8C2C0B04787B65A52E1
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BeamThrower_ABP_AnimGraphNode_ModifyBone_AEB06565458AB8C2C0B04787B65A52E1(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/BeamThrower/BeamThrower_ABP.BeamThrower_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BeamThrower_ABP_AnimGraphNode_TransitionResult_831DC48F449814161AE9BB863C94AC69
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BeamThrower_ABP_AnimGraphNode_TransitionResult_831DC48F449814161AE9BB863C94AC69(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/BeamThrower/BeamThrower_ABP.BeamThrower_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BeamThrower_ABP_AnimGraphNode_TransitionResult_1EF285E5436E88CD099189B4B2038106
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BeamThrower_ABP_AnimGraphNode_TransitionResult_1EF285E5436E88CD099189B4B2038106(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/BeamThrower/BeamThrower_ABP.BeamThrower_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BeamThrower_ABP_AnimGraphNode_TransitionResult_49E107624B3971173ABC6D9685126757
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BeamThrower_ABP_AnimGraphNode_TransitionResult_49E107624B3971173ABC6D9685126757(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/BeamThrower/BeamThrower_ABP.BeamThrower_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BeamThrower_ABP_AnimGraphNode_TransitionResult_2ABF19AD462D798FDE4C2489DDE78502
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BeamThrower_ABP_AnimGraphNode_TransitionResult_2ABF19AD462D798FDE4C2489DDE78502(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/BeamThrower/BeamThrower_ABP.BeamThrower_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BeamThrower_ABP_AnimGraphNode_TransitionResult_ED3B8A834A5526A779C3E09E15DC9E65
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BeamThrower_ABP_AnimGraphNode_TransitionResult_ED3B8A834A5526A779C3E09E15DC9E65(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/BeamThrower/BeamThrower_ABP.BeamThrower_ABP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x18d2100] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/BeamThrower/BeamThrower_ABP.BeamThrower_ABP_C.AnimNotify_StartRotateCannon
	// void AnimNotify_StartRotateCannon();                                                                                     // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/BeamThrower/BeamThrower_ABP.BeamThrower_ABP_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                     // [0x18d2100] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/BeamThrower/BeamThrower_ABP.BeamThrower_ABP_C.AnimNotify_EndRotateCannon
	// void AnimNotify_EndRotateCannon();                                                                                       // [0x18d2100] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/BeamThrower/BeamThrower_ABP.BeamThrower_ABP_C.ExecuteUbergraph_BeamThrower_ABP
	// void ExecuteUbergraph_BeamThrower_ABP(int32_t EntryPoint);                                                               // [0x18d2100] Final                
};

/// Class /Game/Weapons/Asp/Asp_ABP.Asp_ABP_C
/// Size: 0x05A8 (1448 bytes) (0x0002B8 - 0x0005A8) align 16 MaxSize: 0x05A8
class UAsp_ABP_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x02C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x02F0   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0318   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0398   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer1;                              // 0x03C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult2;                                 // 0x0448   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0478   (0x00B0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0528   (0x0048)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0570   (0x0030)  
	class AFPSPlayer_WeaponComponent_C*                ViewModel;                                                  // 0x05A0   (0x0008)  


	/// Functions
	// Function /Game/Weapons/Asp/Asp_ABP.Asp_ABP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x18d2100] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Asp/Asp_ABP.Asp_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Asp_ABP_AnimGraphNode_TransitionResult_7D50E2DA435DE389E9647D9B2EC61BCD
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Asp_ABP_AnimGraphNode_TransitionResult_7D50E2DA435DE389E9647D9B2EC61BCD(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/Asp/Asp_ABP.Asp_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Asp_ABP_AnimGraphNode_TransitionResult_F3FD1474474C07946AD9B5BC586BD5E8
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Asp_ABP_AnimGraphNode_TransitionResult_F3FD1474474C07946AD9B5BC586BD5E8(); // [0x18d2100] BlueprintEvent       
	// Function /Game/Weapons/Asp/Asp_ABP.Asp_ABP_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                     // [0x18d2100] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Asp/Asp_ABP.Asp_ABP_C.ExecuteUbergraph_Asp_ABP
	// void ExecuteUbergraph_Asp_ABP(int32_t EntryPoint);                                                                       // [0x18d2100] Final                
};

#pragma pack(pop)


static_assert(sizeof(UWaveBooster_ABP_C) == 0x04A0); // 1184 bytes (0x0002B8 - 0x0004A0)
static_assert(sizeof(UTripleTapRifle_ABP_C) == 0x04A8); // 1192 bytes (0x0002B8 - 0x0004A8)
static_assert(sizeof(UTempestBow_ABP_C) == 0x06A8); // 1704 bytes (0x0002B8 - 0x0006A8)
static_assert(sizeof(USurgePistols_ABP_C) == 0x04A0); // 1184 bytes (0x0002B8 - 0x0004A0)
static_assert(sizeof(UStudGun_ABP_C) == 0x04A0); // 1184 bytes (0x0002B8 - 0x0004A0)
static_assert(sizeof(USpike_ABP_C) == 0x05A8); // 1448 bytes (0x0002B8 - 0x0005A8)
static_assert(sizeof(USpider_ABP_C) == 0x04A0); // 1184 bytes (0x0002B8 - 0x0004A0)
static_assert(sizeof(URocketLauncher_ABP_C) == 0x0750); // 1872 bytes (0x0002B8 - 0x000750)
static_assert(sizeof(UMoleculeCannon_ABP_C) == 0x0688); // 1672 bytes (0x0002B8 - 0x000688)
static_assert(sizeof(UMachinePistol_ABP_C) == 0x04A0); // 1184 bytes (0x0002B8 - 0x0004A0)
static_assert(sizeof(ULawBringer_ABP_C) == 0x04A0); // 1184 bytes (0x0002B8 - 0x0004A0)
static_assert(sizeof(UHeavySurgeRifle_ABP_C) == 0x04A0); // 1184 bytes (0x0002B8 - 0x0004A0)
static_assert(sizeof(UHealRifle_ABP_C) == 0x04A0); // 1184 bytes (0x0002B8 - 0x0004A0)
static_assert(sizeof(UFissionDealer_ABP_C) == 0x04A0); // 1184 bytes (0x0002B8 - 0x0004A0)
static_assert(sizeof(UDefault_AK_ABP_C) == 0x04A0); // 1184 bytes (0x0002B8 - 0x0004A0)
static_assert(sizeof(UBeanThrowerNew_ABP_C) == 0x0820); // 2080 bytes (0x0002B8 - 0x000820)
static_assert(sizeof(UBeamThrower_ABP_C) == 0x0820); // 2080 bytes (0x0002B8 - 0x000820)
static_assert(sizeof(UAsp_ABP_C) == 0x05A8); // 1448 bytes (0x0002B8 - 0x0005A8)
static_assert(offsetof(UWaveBooster_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UWaveBooster_ABP_C, AnimGraphNode_SequencePlayer) == 0x02C8);
static_assert(offsetof(UWaveBooster_ABP_C, AnimGraphNode_StateResult) == 0x0348);
static_assert(offsetof(UWaveBooster_ABP_C, AnimGraphNode_StateMachine) == 0x0378);
static_assert(offsetof(UWaveBooster_ABP_C, AnimGraphNode_Root) == 0x0428);
static_assert(offsetof(UWaveBooster_ABP_C, AnimGraphNode_Slot) == 0x0458);
static_assert(offsetof(UTripleTapRifle_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UTripleTapRifle_ABP_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UTripleTapRifle_ABP_C, AnimGraphNode_Slot) == 0x02F8);
static_assert(offsetof(UTripleTapRifle_ABP_C, AnimGraphNode_SequencePlayer) == 0x0340);
static_assert(offsetof(UTripleTapRifle_ABP_C, AnimGraphNode_StateResult) == 0x03C0);
static_assert(offsetof(UTripleTapRifle_ABP_C, AnimGraphNode_StateMachine) == 0x03F0);
static_assert(offsetof(UTripleTapRifle_ABP_C, ViewModel) == 0x04A0);
static_assert(offsetof(UTempestBow_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UTempestBow_ABP_C, AnimGraphNode_TransitionResult) == 0x02C8);
static_assert(offsetof(UTempestBow_ABP_C, AnimGraphNode_TransitionResult0) == 0x02F0);
static_assert(offsetof(UTempestBow_ABP_C, AnimGraphNode_TransitionResult1) == 0x0318);
static_assert(offsetof(UTempestBow_ABP_C, AnimGraphNode_TransitionResult2) == 0x0340);
static_assert(offsetof(UTempestBow_ABP_C, AnimGraphNode_SequencePlayer) == 0x0368);
static_assert(offsetof(UTempestBow_ABP_C, AnimGraphNode_StateResult) == 0x03E8);
static_assert(offsetof(UTempestBow_ABP_C, AnimGraphNode_SequencePlayer3) == 0x0418);
static_assert(offsetof(UTempestBow_ABP_C, AnimGraphNode_StateResult4) == 0x0498);
static_assert(offsetof(UTempestBow_ABP_C, AnimGraphNode_SequencePlayer5) == 0x04C8);
static_assert(offsetof(UTempestBow_ABP_C, AnimGraphNode_StateResult6) == 0x0548);
static_assert(offsetof(UTempestBow_ABP_C, AnimGraphNode_StateMachine) == 0x0578);
static_assert(offsetof(UTempestBow_ABP_C, AnimGraphNode_Root) == 0x0628);
static_assert(offsetof(UTempestBow_ABP_C, AnimGraphNode_Slot) == 0x0658);
static_assert(offsetof(UTempestBow_ABP_C, ViewModel) == 0x06A0);
static_assert(offsetof(USurgePistols_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(USurgePistols_ABP_C, AnimGraphNode_SequencePlayer) == 0x02C8);
static_assert(offsetof(USurgePistols_ABP_C, AnimGraphNode_StateResult) == 0x0348);
static_assert(offsetof(USurgePistols_ABP_C, AnimGraphNode_StateMachine) == 0x0378);
static_assert(offsetof(USurgePistols_ABP_C, AnimGraphNode_Root) == 0x0428);
static_assert(offsetof(USurgePistols_ABP_C, AnimGraphNode_Slot) == 0x0458);
static_assert(offsetof(UStudGun_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UStudGun_ABP_C, AnimGraphNode_SequencePlayer) == 0x02C8);
static_assert(offsetof(UStudGun_ABP_C, AnimGraphNode_StateResult) == 0x0348);
static_assert(offsetof(UStudGun_ABP_C, AnimGraphNode_StateMachine) == 0x0378);
static_assert(offsetof(UStudGun_ABP_C, AnimGraphNode_Root) == 0x0428);
static_assert(offsetof(UStudGun_ABP_C, AnimGraphNode_Slot) == 0x0458);
static_assert(offsetof(USpike_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(USpike_ABP_C, AnimGraphNode_TransitionResult) == 0x02C8);
static_assert(offsetof(USpike_ABP_C, AnimGraphNode_TransitionResult0) == 0x02F0);
static_assert(offsetof(USpike_ABP_C, AnimGraphNode_SequencePlayer) == 0x0318);
static_assert(offsetof(USpike_ABP_C, AnimGraphNode_StateResult) == 0x0398);
static_assert(offsetof(USpike_ABP_C, AnimGraphNode_SequencePlayer1) == 0x03C8);
static_assert(offsetof(USpike_ABP_C, AnimGraphNode_StateResult2) == 0x0448);
static_assert(offsetof(USpike_ABP_C, AnimGraphNode_StateMachine) == 0x0478);
static_assert(offsetof(USpike_ABP_C, AnimGraphNode_Root) == 0x0528);
static_assert(offsetof(USpike_ABP_C, AnimGraphNode_Slot) == 0x0558);
static_assert(offsetof(USpike_ABP_C, ViewModel) == 0x05A0);
static_assert(offsetof(USpider_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(USpider_ABP_C, AnimGraphNode_SequencePlayer) == 0x02C8);
static_assert(offsetof(USpider_ABP_C, AnimGraphNode_StateResult) == 0x0348);
static_assert(offsetof(USpider_ABP_C, AnimGraphNode_StateMachine) == 0x0378);
static_assert(offsetof(USpider_ABP_C, AnimGraphNode_Root) == 0x0428);
static_assert(offsetof(USpider_ABP_C, AnimGraphNode_Slot) == 0x0458);
static_assert(offsetof(URocketLauncher_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(URocketLauncher_ABP_C, AnimGraphNode_SequencePlayer) == 0x02C8);
static_assert(offsetof(URocketLauncher_ABP_C, AnimGraphNode_StateResult) == 0x0348);
static_assert(offsetof(URocketLauncher_ABP_C, AnimGraphNode_StateMachine) == 0x0378);
static_assert(offsetof(URocketLauncher_ABP_C, AnimGraphNode_Root) == 0x0428);
static_assert(offsetof(URocketLauncher_ABP_C, AnimGraphNode_Slot) == 0x0458);
static_assert(offsetof(URocketLauncher_ABP_C, AnimGraphNode_SaveCachedPose) == 0x04A0);
static_assert(offsetof(URocketLauncher_ABP_C, AnimGraphNode_LayeredBoneBlend) == 0x05F8);
static_assert(offsetof(URocketLauncher_ABP_C, AnimGraphNode_UseCachedPose) == 0x06B8);
static_assert(offsetof(URocketLauncher_ABP_C, AnimGraphNode_Slot0) == 0x06E0);
static_assert(offsetof(URocketLauncher_ABP_C, AnimGraphNode_UseCachedPose1) == 0x0728);
static_assert(offsetof(UMoleculeCannon_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UMoleculeCannon_ABP_C, AnimGraphNode_TransitionResult) == 0x02C8);
static_assert(offsetof(UMoleculeCannon_ABP_C, AnimGraphNode_TransitionResult0) == 0x02F0);
static_assert(offsetof(UMoleculeCannon_ABP_C, AnimGraphNode_TransitionResult1) == 0x0318);
static_assert(offsetof(UMoleculeCannon_ABP_C, AnimGraphNode_SequencePlayer) == 0x0340);
static_assert(offsetof(UMoleculeCannon_ABP_C, AnimGraphNode_StateResult) == 0x03C0);
static_assert(offsetof(UMoleculeCannon_ABP_C, AnimGraphNode_SequencePlayer2) == 0x03F0);
static_assert(offsetof(UMoleculeCannon_ABP_C, AnimGraphNode_StateResult3) == 0x0470);
static_assert(offsetof(UMoleculeCannon_ABP_C, AnimGraphNode_SequencePlayer4) == 0x04A0);
static_assert(offsetof(UMoleculeCannon_ABP_C, AnimGraphNode_StateResult5) == 0x0520);
static_assert(offsetof(UMoleculeCannon_ABP_C, AnimGraphNode_StateMachine) == 0x0550);
static_assert(offsetof(UMoleculeCannon_ABP_C, AnimGraphNode_Root) == 0x0600);
static_assert(offsetof(UMoleculeCannon_ABP_C, AnimGraphNode_Slot) == 0x0630);
static_assert(offsetof(UMoleculeCannon_ABP_C, FPSCharacter) == 0x0678);
static_assert(offsetof(UMoleculeCannon_ABP_C, ViewModel) == 0x0680);
static_assert(offsetof(UMachinePistol_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UMachinePistol_ABP_C, AnimGraphNode_SequencePlayer) == 0x02C8);
static_assert(offsetof(UMachinePistol_ABP_C, AnimGraphNode_StateResult) == 0x0348);
static_assert(offsetof(UMachinePistol_ABP_C, AnimGraphNode_StateMachine) == 0x0378);
static_assert(offsetof(UMachinePistol_ABP_C, AnimGraphNode_Root) == 0x0428);
static_assert(offsetof(UMachinePistol_ABP_C, AnimGraphNode_Slot) == 0x0458);
static_assert(offsetof(ULawBringer_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(ULawBringer_ABP_C, AnimGraphNode_SequencePlayer) == 0x02C8);
static_assert(offsetof(ULawBringer_ABP_C, AnimGraphNode_StateResult) == 0x0348);
static_assert(offsetof(ULawBringer_ABP_C, AnimGraphNode_StateMachine) == 0x0378);
static_assert(offsetof(ULawBringer_ABP_C, AnimGraphNode_Root) == 0x0428);
static_assert(offsetof(ULawBringer_ABP_C, AnimGraphNode_Slot) == 0x0458);
static_assert(offsetof(UHeavySurgeRifle_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UHeavySurgeRifle_ABP_C, AnimGraphNode_SequencePlayer) == 0x02C8);
static_assert(offsetof(UHeavySurgeRifle_ABP_C, AnimGraphNode_StateResult) == 0x0348);
static_assert(offsetof(UHeavySurgeRifle_ABP_C, AnimGraphNode_StateMachine) == 0x0378);
static_assert(offsetof(UHeavySurgeRifle_ABP_C, AnimGraphNode_Root) == 0x0428);
static_assert(offsetof(UHeavySurgeRifle_ABP_C, AnimGraphNode_Slot) == 0x0458);
static_assert(offsetof(UHealRifle_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UHealRifle_ABP_C, AnimGraphNode_SequencePlayer) == 0x02C8);
static_assert(offsetof(UHealRifle_ABP_C, AnimGraphNode_StateResult) == 0x0348);
static_assert(offsetof(UHealRifle_ABP_C, AnimGraphNode_StateMachine) == 0x0378);
static_assert(offsetof(UHealRifle_ABP_C, AnimGraphNode_Root) == 0x0428);
static_assert(offsetof(UHealRifle_ABP_C, AnimGraphNode_Slot) == 0x0458);
static_assert(offsetof(UFissionDealer_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UFissionDealer_ABP_C, AnimGraphNode_SequencePlayer) == 0x02C8);
static_assert(offsetof(UFissionDealer_ABP_C, AnimGraphNode_StateResult) == 0x0348);
static_assert(offsetof(UFissionDealer_ABP_C, AnimGraphNode_StateMachine) == 0x0378);
static_assert(offsetof(UFissionDealer_ABP_C, AnimGraphNode_Root) == 0x0428);
static_assert(offsetof(UFissionDealer_ABP_C, AnimGraphNode_Slot) == 0x0458);
static_assert(offsetof(UDefault_AK_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UDefault_AK_ABP_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UDefault_AK_ABP_C, AnimGraphNode_Slot) == 0x02F8);
static_assert(offsetof(UDefault_AK_ABP_C, AnimGraphNode_SequencePlayer) == 0x0340);
static_assert(offsetof(UDefault_AK_ABP_C, AnimGraphNode_StateResult) == 0x03C0);
static_assert(offsetof(UDefault_AK_ABP_C, AnimGraphNode_StateMachine) == 0x03F0);
static_assert(offsetof(UBeanThrowerNew_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_TransitionResult) == 0x02F8);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_TransitionResult0) == 0x0320);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_TransitionResult1) == 0x0348);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_TransitionResult2) == 0x0370);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_TransitionResult3) == 0x0398);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_SequencePlayer) == 0x03C0);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_StateResult) == 0x0440);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_SequencePlayer4) == 0x0470);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_StateResult5) == 0x04F0);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_SequencePlayer6) == 0x0520);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_StateResult7) == 0x05A0);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_StateMachine) == 0x05D0);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_ModifyBone) == 0x0680);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_LocalToComponentSpace) == 0x0788);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_ComponentToLocalSpace) == 0x07A8);
static_assert(offsetof(UBeanThrowerNew_ABP_C, AnimGraphNode_Slot) == 0x07C8);
static_assert(offsetof(UBeanThrowerNew_ABP_C, ViewModel) == 0x0818);
static_assert(offsetof(UBeamThrower_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_TransitionResult) == 0x02C8);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_TransitionResult0) == 0x02F0);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_TransitionResult1) == 0x0318);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_TransitionResult2) == 0x0340);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_TransitionResult3) == 0x0368);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_SequencePlayer) == 0x0390);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_StateResult) == 0x0410);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_SequencePlayer4) == 0x0440);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_StateResult5) == 0x04C0);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_SequencePlayer6) == 0x04F0);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_StateResult7) == 0x0570);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_StateMachine) == 0x05A0);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_ModifyBone) == 0x0650);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_LocalToComponentSpace) == 0x0758);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_ComponentToLocalSpace) == 0x0778);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_Root) == 0x0798);
static_assert(offsetof(UBeamThrower_ABP_C, AnimGraphNode_Slot) == 0x07C8);
static_assert(offsetof(UBeamThrower_ABP_C, ViewModel) == 0x0818);
static_assert(offsetof(UAsp_ABP_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UAsp_ABP_C, AnimGraphNode_TransitionResult) == 0x02C8);
static_assert(offsetof(UAsp_ABP_C, AnimGraphNode_TransitionResult0) == 0x02F0);
static_assert(offsetof(UAsp_ABP_C, AnimGraphNode_SequencePlayer) == 0x0318);
static_assert(offsetof(UAsp_ABP_C, AnimGraphNode_StateResult) == 0x0398);
static_assert(offsetof(UAsp_ABP_C, AnimGraphNode_SequencePlayer1) == 0x03C8);
static_assert(offsetof(UAsp_ABP_C, AnimGraphNode_StateResult2) == 0x0448);
static_assert(offsetof(UAsp_ABP_C, AnimGraphNode_StateMachine) == 0x0478);
static_assert(offsetof(UAsp_ABP_C, AnimGraphNode_Slot) == 0x0528);
static_assert(offsetof(UAsp_ABP_C, AnimGraphNode_Root) == 0x0570);
static_assert(offsetof(UAsp_ABP_C, ViewModel) == 0x05A0);
