﻿#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class FSDEngine.TerrainMaterialBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTerrainMaterialBase : public UPrimaryDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.TerrainMaterialCore
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UTerrainMaterialCore : public UTerrainMaterialBase
	{
	public:
		class UTerrainMaterialCore*                                BurntMaterial;                                           // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTerrainMaterialCore*                                BulletBurntMaterial;                                     // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PathfinderDanger : 1;                                    // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PathfinderPreventSpawning : 1;                           // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CU2A[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  ScannerMaterial;                                         // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RenderMaterial[0x28];                                    // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGBake
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class UCSGBake : public UDataAsset
	{
	public:
		struct FBakeSettings                                       BakeSettings;                                            // 0x0030(0x0010) Edit, NativeAccessSpecifierPublic
		int32_t                                                    NumVariations;                                           // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InitialSeed;                                             // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CSG[0x28];                                               // 0x0048(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class FString                                              Status;                                                  // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCoreUObject_FBox                                   CombinedAABB;                                            // 0x0080(0x001C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CH30[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBakeEntry>                                  Entries;                                                 // 0x00A0(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		bool                                                       IsBaking;                                                // 0x00B0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVHY[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBakeConfig*>                                 CurrentBakeConfigs;                                      // 0x00B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class ACSGBuilder*                                         CDO;                                                     // 0x00C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void BakeCSG();
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.BuilderBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBuilderBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGBase
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UCSGBase : public UBuilderBase
	{
	public:
		struct FMeshBaseProperties                                 BaseProperties;                                          // 0x0028(0x0001) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T98U[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeTransform;                                       // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGBakedChildInstance
	 * Size -> 0x00B0 (FullSize[0x0110] - InheritedSize[0x0060])
	 */
	class UCSGBakedChildInstance : public UCSGBase
	{
	public:
		struct FCSGBakedChildInstanceProperties                    Properties;                                              // 0x0060(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FCoreUObject_FBox                                   ChildLocalSpaceBoundingBox;                              // 0x0070(0x001C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCoreUObject_FBox                                   WorldSpaceBoundingBox;                                   // 0x008C(0x001C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NDA1[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMatrix                                             TransformMatInv;                                         // 0x00B0(0x0040) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FDeepCSGFloatTree                                   TempTree;                                                // 0x00F0(0x0018) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G50F[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGBuilderBaseSceneComponent
	 * Size -> 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
	 */
	class UCSGBuilderBaseSceneComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_DDCR[0x8];                                   // 0x01F8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGBaseComponent
	 * Size -> 0x0000 (FullSize[0x0200] - InheritedSize[0x0200])
	 */
	class UCSGBaseComponent : public UCSGBuilderBaseSceneComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGBakedChildInstanceComponent
	 * Size -> 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
	 */
	class UCSGBakedChildInstanceComponent : public UCSGBaseComponent
	{
	public:
		struct FCSGBakedChildInstanceProperties                    Properties;                                              // 0x0200(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGSingleChildBase
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UCSGSingleChildBase : public UCSGBase
	{
	public:
		class UCSGBase*                                            Child;                                                   // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGDuplicateSingleChildBase
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UCSGDuplicateSingleChildBase : public UCSGBase
	{
	public:
		TArray<class UCSGBase*>                                    Children;                                                // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGBuilderBase
	 * Size -> 0x0068 (FullSize[0x0288] - InheritedSize[0x0220])
	 */
	class ACSGBuilderBase : public AActor
	{
	public:
		struct FCoreUObject_FBox                                   BoundingBox;                                             // 0x0220(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    PreviewSeed;                                             // 0x023C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBakeSettings                                       PreviewSettings;                                         // 0x0240(0x0010) Edit, NativeAccessSpecifierPublic
		class UTerrainMaterialCore*                                EmptyMat;                                                // 0x0250(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTerrainMaterialCore*                                ErrorMat;                                                // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTerrainMaterialCore*                                SolidMat;                                                // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTerrainMaterialCore*                                BurnedMat;                                               // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCSGPreviewComponent*                                PreviewComponent;                                        // 0x0270(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZ3S[0x10];                                  // 0x0278(0x0010) MISSED OFFSET (PADDING)

	public:
		void PreGenerate(class UBakeConfig* builder);
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGBuilder
	 * Size -> 0x0038 (FullSize[0x02C0] - InheritedSize[0x0288])
	 */
	class ACSGBuilder : public ACSGBuilderBase
	{
	public:
		class UCSGGroupComponent*                                  CSGRoot;                                                 // 0x0288(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UTerrainMaterialCore*>                        UsedMaterials;                                           // 0x0290(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class UCSGBase*                                            CurrentRoot;                                             // 0x02A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCSGBase*                                            CurrentPreviewRoot;                                      // 0x02A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBakeConfig*                                         CurrentPreviewConfig;                                    // 0x02B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCSGPreviewScene*                                    PreviewScene;                                            // 0x02B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.BakeConfig
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UBakeConfig : public UObject
	{
	public:
		unsigned char                                              UnknownData_57L0[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBakeSettings                                       Settings;                                                // 0x0030(0x0010) Transient, NativeAccessSpecifierPublic
		TMap<class FName, class UBuilderBase*>                     Objects;                                                 // 0x0040(0x0050) Transient, NativeAccessSpecifierPublic
		TArray<class FString>                                      Warnings;                                                // 0x0090(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic

	public:
		struct FVector GetVectorSetting(const class FName& Name, const struct FVector& defaultVal);
		struct FRandomStream GetRandomStream();
		class UBuilderBase* GetObject(const class FName& Name);
		int32_t GetIntSetting(const class FName& Name, int32_t defaultVal);
		float GetFloatSetting(const class FName& Name, float defaultVal);
		bool GetBoolSetting(const class FName& Name, bool defaultVal);
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGCellNoise
	 * Size -> 0x00A0 (FullSize[0x0100] - InheritedSize[0x0060])
	 */
	class UCSGCellNoise : public UCSGBase
	{
	public:
		struct FMeshCellNoiseProperties                            Properties;                                              // 0x0060(0x001C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D4LR[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBinaryTerrainMaterialCombiner                      Materials;                                               // 0x0080(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector                                             ReciprocalCellSize;                                      // 0x00B0(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_01K4[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDeepCSGFloatTree                                   ApplyTree;                                               // 0x00C0(0x0018) Transient, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     CellPositions;                                           // 0x00D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FDeepCSGNode>                                CellLeaves;                                              // 0x00E8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SX7[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGCellNoiseComponent
	 * Size -> 0x0050 (FullSize[0x0250] - InheritedSize[0x0200])
	 */
	class UCSGCellNoiseComponent : public UCSGBaseComponent
	{
	public:
		struct FMeshCellNoiseProperties                            Properties;                                              // 0x0200(0x001C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJ89[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBinaryTerrainMaterialCombiner                      Materials;                                               // 0x0220(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGChildInstance
	 * Size -> 0x0160 (FullSize[0x01C0] - InheritedSize[0x0060])
	 */
	class UCSGChildInstance : public UCSGBase
	{
	public:
		struct FCSGChildInstanceProperties                         Properties;                                              // 0x0060(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGeneralTerrainMaterialCombiner                     Materials;                                               // 0x0080(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UCSGBase*                                            CSGChildInstanceRoot;                                    // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBakeConfig*                                         CurrentBakeConfig;                                       // 0x00D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCoreUObject_FBox                                   ChildLocalSpaceBoundingBox;                              // 0x00E0(0x001C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCoreUObject_FBox                                   WorldSpaceBoundingBox;                                   // 0x00FC(0x001C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FDeepCSGFloatTree                                   BoundingTree;                                            // 0x0118(0x0018) Transient, NativeAccessSpecifierPublic
		struct FMatrix                                             TransformMatInv;                                         // 0x0130(0x0040) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FDeepCSGTree                                        TempTree;                                                // 0x0170(0x0048) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3MAX[0x8];                                   // 0x01B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGChildInstanceComponent
	 * Size -> 0x0070 (FullSize[0x0270] - InheritedSize[0x0200])
	 */
	class UCSGChildInstanceComponent : public UCSGBaseComponent
	{
	public:
		struct FCSGChildInstanceProperties                         Properties;                                              // 0x0200(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGeneralTerrainMaterialCombiner                     Materials;                                               // 0x0220(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SimpleMeshWithCachedTree
	 * Size -> 0x0070 (FullSize[0x00D0] - InheritedSize[0x0060])
	 */
	class USimpleMeshWithCachedTree : public UCSGBase
	{
	public:
		unsigned char                                              UnknownData_QZGB[0x38];                                  // 0x0060(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBinaryTerrainMaterialCombiner                      Materials;                                               // 0x0098(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       InvertCSG;                                               // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOKS[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.ConvexMeshWithCachedTree
	 * Size -> 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
	 */
	class UConvexMeshWithCachedTree : public USimpleMeshWithCachedTree
	{
	public:
		struct FConvexNoiseProperties                              Noise;                                                   // 0x00D0(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WFEC[0x44];                                  // 0x00DC(0x0044) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGConvexCollider
	 * Size -> 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
	 */
	class UCSGConvexCollider : public UConvexMeshWithCachedTree
	{
	public:
		struct FCSGConvexColliderProperties                        Properties;                                              // 0x0120(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IS9D[0x18];                                  // 0x0128(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SimpleMeshWithCachedTreeComponent
	 * Size -> 0x0038 (FullSize[0x0238] - InheritedSize[0x0200])
	 */
	class USimpleMeshWithCachedTreeComponent : public UCSGBaseComponent
	{
	public:
		struct FBinaryTerrainMaterialCombiner                      Materials;                                               // 0x0200(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       InvertCSG;                                               // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P467[0x7];                                   // 0x0231(0x0007) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.ConvexMeshWithCachedTreeComponent
	 * Size -> 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
	 */
	class UConvexMeshWithCachedTreeComponent : public USimpleMeshWithCachedTreeComponent
	{
	public:
		struct FConvexNoiseProperties                              Noise;                                                   // 0x0238(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JY5Q[0x4];                                   // 0x0244(0x0004) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGConvexColliderComponent
	 * Size -> 0x0008 (FullSize[0x0250] - InheritedSize[0x0248])
	 */
	class UCSGConvexColliderComponent : public UConvexMeshWithCachedTreeComponent
	{
	public:
		struct FCSGConvexColliderProperties                        Properties;                                              // 0x0248(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGGroup
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UCSGGroup : public UCSGBase
	{
	public:
		TArray<class UCSGBase*>                                    Children;                                                // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGGroupComponent
	 * Size -> 0x0000 (FullSize[0x0200] - InheritedSize[0x0200])
	 */
	class UCSGGroupComponent : public UCSGBaseComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGLayer
	 * Size -> 0x0140 (FullSize[0x01B0] - InheritedSize[0x0070])
	 */
	class UCSGLayer : public UCSGGroup
	{
	public:
		struct FMeshLayerProperties                                Properties;                                              // 0x0070(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FGeneralTerrainMaterialCombiner                     Materials;                                               // 0x0098(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FCoreUObject_FBox                                   WorldSpaceBoundingBox;                                   // 0x00E8(0x001C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1MX[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDeepCSGFloatTree                                   BoundingTree;                                            // 0x0108(0x0018) Transient, NativeAccessSpecifierPublic
		struct FDeepCSGTree                                        TempTree;                                                // 0x0120(0x0048) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZDO[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMatrix                                             TransformMatInv;                                         // 0x0170(0x0040) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGLayerComponent
	 * Size -> 0x0080 (FullSize[0x0280] - InheritedSize[0x0200])
	 */
	class UCSGLayerComponent : public UCSGGroupComponent
	{
	public:
		struct FMeshLayerProperties                                Properties;                                              // 0x0200(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FGeneralTerrainMaterialCombiner                     Materials;                                               // 0x0228(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KDB2[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGAddMaterialLayers
	 * Size -> 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
	 */
	class UCSGAddMaterialLayers : public UCSGSingleChildBase
	{
	public:
		struct FCSGAddMaterialLayersProperties                     Properties;                                              // 0x0068(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TMXA[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGAddMaterialLayersComponent
	 * Size -> 0x0040 (FullSize[0x0240] - InheritedSize[0x0200])
	 */
	class UCSGAddMaterialLayersComponent : public UCSGBaseComponent
	{
	public:
		struct FCSGAddMaterialLayersProperties                     Properties;                                              // 0x0200(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGRandomizeTransform
	 * Size -> 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
	 */
	class UCSGRandomizeTransform : public UCSGSingleChildBase
	{
	public:
		struct FCSGRandomizeTransformProperties                    Properties;                                              // 0x0068(0x0054) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNTP[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGRandomizeTransformComponent
	 * Size -> 0x0060 (FullSize[0x0260] - InheritedSize[0x0200])
	 */
	class UCSGRandomizeTransformComponent : public UCSGBaseComponent
	{
	public:
		struct FCSGRandomizeTransformProperties                    Properties;                                              // 0x0200(0x0054) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1W77[0xC];                                   // 0x0254(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGRandomDisable
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UCSGRandomDisable : public UCSGSingleChildBase
	{
	public:
		unsigned char                                              UnknownData_FAYQ[0x8];                                   // 0x0068(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGRandomDisableComponent
	 * Size -> 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
	 */
	class UCSGRandomDisableComponent : public UCSGBaseComponent
	{
	public:
		struct FCSGRandomDisableProperties                         Properties;                                              // 0x0200(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LBKQ[0xC];                                   // 0x0204(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGGridDuplicator
	 * Size -> 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
	 */
	class UCSGGridDuplicator : public UCSGDuplicateSingleChildBase
	{
	public:
		struct FCSGGridDuplicatorProperties                        Properties;                                              // 0x0070(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGGridDuplicatorComponent
	 * Size -> 0x0020 (FullSize[0x0220] - InheritedSize[0x0200])
	 */
	class UCSGGridDuplicatorComponent : public UCSGBaseComponent
	{
	public:
		struct FCSGGridDuplicatorProperties                        Properties;                                              // 0x0200(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGCircleDuplicator
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UCSGCircleDuplicator : public UCSGDuplicateSingleChildBase
	{
	public:
		struct FCSGCircleDuplicatorProperties                      Properties;                                              // 0x0070(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E1EE[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGCircleDuplicatorComponent
	 * Size -> 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
	 */
	class UCSGCircleDuplicatorComponent : public UCSGBaseComponent
	{
	public:
		struct FCSGCircleDuplicatorProperties                      Properties;                                              // 0x0200(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSWH[0x8];                                   // 0x0208(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGPreviewComponent
	 * Size -> 0x0098 (FullSize[0x0290] - InheritedSize[0x01F8])
	 */
	class UCSGPreviewComponent : public USceneComponent
	{
	public:
		class ACSGBuilderBase*                                     BaseBuilder;                                             // 0x01F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBakeConfig*                                         CurrentBakeConfig;                                       // 0x0200(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FChunkId, class UDeepProceduralMeshComponent*> Meshes;                                                  // 0x0208(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       UsePreviewScene;                                         // 0x0258(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2FHW[0x2B];                                  // 0x0259(0x002B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ChangeCount;                                             // 0x0284(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MYG7[0x8];                                   // 0x0288(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGPreviewScene
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UCSGPreviewScene : public UDataAsset
	{
	public:
		class UClass*                                              Mesh;                                                    // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBakeSettings                                       Settings;                                                // 0x0038(0x0010) Edit, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P22G[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTerrainMaterialCore*                                TerrainMaterial;                                         // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGPlane
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UCSGPlane : public UConvexMeshWithCachedTree
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGPlaneComponent
	 * Size -> 0x0008 (FullSize[0x0250] - InheritedSize[0x0248])
	 */
	class UCSGPlaneComponent : public UConvexMeshWithCachedTreeComponent
	{
	public:
		unsigned char                                              UnknownData_9FL9[0x8];                                   // 0x0248(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGBox
	 * Size -> 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
	 */
	class UCSGBox : public UConvexMeshWithCachedTree
	{
	public:
		struct FMeshBoxProperties                                  Properties;                                              // 0x0120(0x0014) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJ9F[0xC];                                   // 0x0134(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGBoxComponent
	 * Size -> 0x0018 (FullSize[0x0260] - InheritedSize[0x0248])
	 */
	class UCSGBoxComponent : public UConvexMeshWithCachedTreeComponent
	{
	public:
		struct FMeshBoxProperties                                  Properties;                                              // 0x0248(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U8GK[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGCylinder
	 * Size -> 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
	 */
	class UCSGCylinder : public UConvexMeshWithCachedTree
	{
	public:
		struct FCSGCylinderProperties                              Properties;                                              // 0x0120(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5YM[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGCylinderComponent
	 * Size -> 0x0018 (FullSize[0x0260] - InheritedSize[0x0248])
	 */
	class UCSGCylinderComponent : public UConvexMeshWithCachedTreeComponent
	{
	public:
		struct FCSGCylinderProperties                              Properties;                                              // 0x0248(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZG2R[0xC];                                   // 0x0254(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGCone
	 * Size -> 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
	 */
	class UCSGCone : public UConvexMeshWithCachedTree
	{
	public:
		struct FCSGConeProperties                                  Properties;                                              // 0x0120(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGConeComponent
	 * Size -> 0x0018 (FullSize[0x0260] - InheritedSize[0x0248])
	 */
	class UCSGConeComponent : public UConvexMeshWithCachedTreeComponent
	{
	public:
		struct FCSGConeProperties                                  Properties;                                              // 0x0248(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_489V[0x8];                                   // 0x0258(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGSphere
	 * Size -> 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
	 */
	class UCSGSphere : public UConvexMeshWithCachedTree
	{
	public:
		struct FCSGSphereProperties                                Properties;                                              // 0x0120(0x0014) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DX5[0xC];                                   // 0x0134(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGSphereComponent
	 * Size -> 0x0018 (FullSize[0x0260] - InheritedSize[0x0248])
	 */
	class UCSGSphereComponent : public UConvexMeshWithCachedTreeComponent
	{
	public:
		struct FCSGSphereProperties                                Properties;                                              // 0x0248(0x0014) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XC1N[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGWarped
	 * Size -> 0x00E8 (FullSize[0x0150] - InheritedSize[0x0068])
	 */
	class UCSGWarped : public UCSGSingleChildBase
	{
	public:
		struct FWarpedProperties                                   Properties;                                              // 0x0068(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGMC[0xC0];                                  // 0x0090(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGWarpedComponent
	 * Size -> 0x0028 (FullSize[0x0228] - InheritedSize[0x0200])
	 */
	class UCSGWarpedComponent : public UCSGBaseComponent
	{
	public:
		struct FWarpedProperties                                   Properties;                                              // 0x0200(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGSplineWarp
	 * Size -> 0x00F0 (FullSize[0x0240] - InheritedSize[0x0150])
	 */
	class UCSGSplineWarp : public UCSGWarped
	{
	public:
		struct FSplineWarpProperties                               SplineProperties;                                        // 0x0150(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSplineCurves                                       SplineCurves;                                            // 0x0170(0x0070) NativeAccessSpecifierPublic
		TArray<struct FCoreUObject_FBox>                           AABBs;                                                   // 0x01E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              Keys;                                                    // 0x01F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector4>                                    planes;                                                  // 0x0200(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FCoreUObject_FBox                                   TotalAABB;                                               // 0x0210(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQQV[0x14];                                  // 0x022C(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGSplineWarpComponent
	 * Size -> 0x0028 (FullSize[0x0250] - InheritedSize[0x0228])
	 */
	class UCSGSplineWarpComponent : public UCSGWarpedComponent
	{
	public:
		struct FSplineWarpProperties                               SplineProperties;                                        // 0x0228(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JVEI[0x8];                                   // 0x0248(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGSDFInstance
	 * Size -> 0x01B0 (FullSize[0x0210] - InheritedSize[0x0060])
	 */
	class UCSGSDFInstance : public UCSGBase
	{
	public:
		struct FCSGSDFInstanceProperties                           Properties;                                              // 0x0060(0x0028) Edit, NativeAccessSpecifierPublic
		struct FBinaryTerrainMaterialCombiner                      Materials;                                               // 0x0088(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USDFBase*                                            CSGSDFInstanceRoot;                                      // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBakeConfig*                                         CurrentBakeConfig;                                       // 0x00C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCoreUObject_FBox                                   ChildLocalSpaceBoundingBox;                              // 0x00C8(0x001C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCoreUObject_FBox                                   WorldSpaceBoundingBox;                                   // 0x00E4(0x001C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FDeepCSGFloatTree                                   BoundingTree;                                            // 0x0100(0x0018) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TRJ[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMatrix                                             TransformMatInv;                                         // 0x0120(0x0040) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OB0P[0xB0];                                  // 0x0160(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGSDFInstanceComponent
	 * Size -> 0x0060 (FullSize[0x0260] - InheritedSize[0x0200])
	 */
	class UCSGSDFInstanceComponent : public UCSGBaseComponent
	{
	public:
		struct FCSGSDFInstanceProperties                           Properties;                                              // 0x0200(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBinaryTerrainMaterialCombiner                      Materials;                                               // 0x0228(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_31NQ[0x8];                                   // 0x0258(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGModulatedSDFInstance
	 * Size -> 0x01B0 (FullSize[0x0210] - InheritedSize[0x0060])
	 */
	class UCSGModulatedSDFInstance : public UCSGBase
	{
	public:
		struct FCSGSDFModulatedInstanceProperties                  Properties;                                              // 0x0060(0x0050) Edit, NativeAccessSpecifierPublic
		struct FBinaryTerrainMaterialCombiner                      Materials;                                               // 0x00B0(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USDFBase*                                            CSGSDFInstanceRoot;                                      // 0x00E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBakeConfig*                                         CurrentBakeConfig;                                       // 0x00E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USDFBase*                                            CSGSDFModulatedInstanceRoot;                             // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBakeConfig*                                         CurrentModulatedBakeConfig;                              // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCoreUObject_FBox                                   ChildLocalSpaceBoundingBox;                              // 0x0100(0x001C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCoreUObject_FBox                                   WorldSpaceBoundingBox;                                   // 0x011C(0x001C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FDeepCSGFloatTree                                   BoundingTree;                                            // 0x0138(0x0018) Transient, NativeAccessSpecifierPublic
		struct FMatrix                                             TransformMatInv;                                         // 0x0150(0x0040) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VKE[0x80];                                  // 0x0190(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGModulatedSDFInstanceComponent
	 * Size -> 0x0080 (FullSize[0x0280] - InheritedSize[0x0200])
	 */
	class UCSGModulatedSDFInstanceComponent : public UCSGBaseComponent
	{
	public:
		struct FCSGSDFModulatedInstanceProperties                  Properties;                                              // 0x0200(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBinaryTerrainMaterialCombiner                      Materials;                                               // 0x0250(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGVoronoi
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	class UCSGVoronoi : public USimpleMeshWithCachedTree
	{
	public:
		struct FVoronoiProperties                                  Properties;                                              // 0x00D0(0x001C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W60W[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGVoronoiComponent
	 * Size -> 0x0028 (FullSize[0x0260] - InheritedSize[0x0238])
	 */
	class UCSGVoronoiComponent : public USimpleMeshWithCachedTreeComponent
	{
	public:
		struct FVoronoiProperties                                  Properties;                                              // 0x0238(0x001C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AINA[0xC];                                   // 0x0254(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGSTL
	 * Size -> 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
	 */
	class UCSGSTL : public USimpleMeshWithCachedTree
	{
	public:
		struct FCSGSTLProperties                                   Properties;                                              // 0x00D0(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9S98[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.CSGSTLComponent
	 * Size -> 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
	 */
	class UCSGSTLComponent : public USimpleMeshWithCachedTreeComponent
	{
	public:
		struct FCSGSTLProperties                                   Properties;                                              // 0x0238(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.DeepCSGSection
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class ADeepCSGSection : public AActor
	{
	public:
		class UDeepProceduralMeshComponent*                        DeepMesh;                                                // 0x0220(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.DeepProceduralMeshComponent
	 * Size -> 0x0058 (FullSize[0x04D0] - InheritedSize[0x0478])
	 */
	class UDeepProceduralMeshComponent : public UMeshComponent
	{
	public:
		class UBodySetup*                                          ProcMeshBodySetup;                                       // 0x0478(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9LV5[0x50];                                  // 0x0480(0x0050) MISSED OFFSET (PADDING)

	public:
		class UTerrainMaterialCore* FindTerrainMaterialFromPhysicalMaterial(class UPhysicalMaterial* Material);
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFBuilder
	 * Size -> 0x0020 (FullSize[0x02A8] - InheritedSize[0x0288])
	 */
	class ASDFBuilder : public ACSGBuilderBase
	{
	public:
		EPreviewCellSize                                           PreviewSize;                                             // 0x0288(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJ5F[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTerrainMaterialCore*                                PreviewMaterial;                                         // 0x0290(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USDFBase*                                            CurrentRoot;                                             // 0x0298(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USDFUnionOpComponent*                                SDFRoot;                                                 // 0x02A0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.HeightMapWithMinMaxQuadTree
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class UHeightMapWithMinMaxQuadTree : public UDataAsset
	{
	public:
		class FString                                              Status;                                                  // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              InputRenderTarget[0x28];                                 // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              InputTexture[0x28];                                      // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FHMMinMaxLevel>                              MinMaxTree;                                              // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      MinHeight;                                               // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHeight;                                               // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              Heights;                                                 // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Dimensions;                                              // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Initialized;                                             // 0x00BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EIT[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (PADDING)

	public:
		void Generate();
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFBase
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class USDFBase : public UBuilderBase
	{
	public:
		struct FSDFBaseProperties                                  BaseProperties;                                          // 0x0028(0x0001) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XJUR[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeTransform;                                       // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFHeightMap
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class USDFHeightMap : public USDFBase
	{
	public:
		struct FSDFHeightMaproperties                              Properties;                                              // 0x0060(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TTMM[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHeightMapWithMinMaxQuadTree*                        Heightmap;                                               // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CTDX[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFBaseComponent
	 * Size -> 0x0000 (FullSize[0x0200] - InheritedSize[0x0200])
	 */
	class USDFBaseComponent : public UCSGBuilderBaseSceneComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFHeightMapComponent
	 * Size -> 0x0020 (FullSize[0x0220] - InheritedSize[0x0200])
	 */
	class USDFHeightMapComponent : public USDFBaseComponent
	{
	public:
		struct FSDFHeightMaproperties                              Properties;                                              // 0x0200(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I3F4[0x4];                                   // 0x020C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHeightMapWithMinMaxQuadTree*                        Heightmap;                                               // 0x0210(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XRMR[0x8];                                   // 0x0218(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFSingleChildBase
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class USDFSingleChildBase : public USDFBase
	{
	public:
		class USDFBase*                                            Child;                                                   // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFModifier
	 * Size -> 0x0078 (FullSize[0x00E0] - InheritedSize[0x0068])
	 */
	class USDFModifier : public USDFSingleChildBase
	{
	public:
		struct FSDFModifierProperties                              Properties;                                              // 0x0068(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUHE[0x40];                                  // 0x00A0(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFModifierComponent
	 * Size -> 0x0040 (FullSize[0x0240] - InheritedSize[0x0200])
	 */
	class USDFModifierComponent : public USDFBaseComponent
	{
	public:
		struct FSDFModifierProperties                              Properties;                                              // 0x0200(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUCJ[0x8];                                   // 0x0238(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFUnionOp
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class USDFUnionOp : public USDFBase
	{
	public:
		struct FSDFSmoothingProperties                             Properties;                                              // 0x0060(0x0008) NoDestructor, NativeAccessSpecifierPublic
		TArray<class USDFBase*>                                    Arguments;                                               // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_81VQ[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFUnionOpComponent
	 * Size -> 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
	 */
	class USDFUnionOpComponent : public USDFBaseComponent
	{
	public:
		struct FSDFSmoothingProperties                             Properties;                                              // 0x0200(0x0008) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E4WS[0x8];                                   // 0x0208(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFIntersectOp
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class USDFIntersectOp : public USDFBase
	{
	public:
		struct FSDFSmoothingProperties                             Properties;                                              // 0x0060(0x0008) NoDestructor, NativeAccessSpecifierPublic
		TArray<class USDFBase*>                                    Arguments;                                               // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XU3X[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFIntersectOpComponent
	 * Size -> 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
	 */
	class USDFIntersectOpComponent : public USDFBaseComponent
	{
	public:
		struct FSDFSmoothingProperties                             Properties;                                              // 0x0200(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KP5F[0x8];                                   // 0x0208(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFSubOp
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class USDFSubOp : public USDFBase
	{
	public:
		struct FSDFSmoothingProperties                             Properties;                                              // 0x0060(0x0008) NoDestructor, NativeAccessSpecifierPublic
		class USDFBase*                                            A;                                                       // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USDFBase*                                            B;                                                       // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGYA[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFSubOpComponent
	 * Size -> 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
	 */
	class USDFSubOpComponent : public USDFBaseComponent
	{
	public:
		struct FSDFSmoothingProperties                             Properties;                                              // 0x0200(0x0008) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KBWI[0x8];                                   // 0x0208(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFOnion
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class USDFOnion : public USDFBase
	{
	public:
		struct FSDFOnionProperties                                 Properties;                                              // 0x0060(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZCUW[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USDFBase*                                            Argument;                                                // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFOnionComponent
	 * Size -> 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
	 */
	class USDFOnionComponent : public USDFBaseComponent
	{
	public:
		struct FSDFOnionProperties                                 Properties;                                              // 0x0200(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NA3N[0xC];                                   // 0x0204(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFRandomizeTransform
	 * Size -> 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
	 */
	class USDFRandomizeTransform : public USDFSingleChildBase
	{
	public:
		struct FSDFRandomizeTransformProperties                    Properties;                                              // 0x0068(0x0054) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_47ZR[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFRandomizeTransformComponent
	 * Size -> 0x0060 (FullSize[0x0260] - InheritedSize[0x0200])
	 */
	class USDFRandomizeTransformComponent : public USDFBaseComponent
	{
	public:
		struct FSDFRandomizeTransformProperties                    Properties;                                              // 0x0200(0x0054) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWT0[0xC];                                   // 0x0254(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFRandomDisable
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class USDFRandomDisable : public USDFSingleChildBase
	{
	public:
		unsigned char                                              UnknownData_USQ0[0x8];                                   // 0x0068(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFRandomDisableComponent
	 * Size -> 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
	 */
	class USDFRandomDisableComponent : public USDFBaseComponent
	{
	public:
		struct FSDFRandomDisableProperties                         Properties;                                              // 0x0200(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HYED[0xC];                                   // 0x0204(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFBaseWithTransform
	 * Size -> 0x00D0 (FullSize[0x0130] - InheritedSize[0x0060])
	 */
	class USDFBaseWithTransform : public USDFBase
	{
	public:
		unsigned char                                              UnknownData_EUPL[0xD0];                                  // 0x0060(0x00D0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFBaseWithTransformComponent
	 * Size -> 0x0000 (FullSize[0x0200] - InheritedSize[0x0200])
	 */
	class USDFBaseWithTransformComponent : public USDFBaseComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFSphere
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class USDFSphere : public USDFBaseWithTransform
	{
	public:
		struct FSDFSphereProperties                                Properties;                                              // 0x0130(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HAU3[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFSphereComponent
	 * Size -> 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
	 */
	class USDFSphereComponent : public USDFBaseWithTransformComponent
	{
	public:
		struct FSDFSphereProperties                                Properties;                                              // 0x0200(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5DA[0x4];                                   // 0x020C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFPlane
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class USDFPlane : public USDFBaseWithTransform
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFPlaneComponent
	 * Size -> 0x0000 (FullSize[0x0200] - InheritedSize[0x0200])
	 */
	class USDFPlaneComponent : public USDFBaseWithTransformComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFBox
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class USDFBox : public USDFBaseWithTransform
	{
	public:
		struct FSDFBoxProperties                                   Properties;                                              // 0x0130(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V9RV[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFBoxComponent
	 * Size -> 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
	 */
	class USDFBoxComponent : public USDFBaseWithTransformComponent
	{
	public:
		struct FSDFBoxProperties                                   Properties;                                              // 0x0200(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X1R8[0x4];                                   // 0x020C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFCylinder
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class USDFCylinder : public USDFBaseWithTransform
	{
	public:
		struct FSDFCylinderProperties                              Properties;                                              // 0x0130(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A21I[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFCylinderComponent
	 * Size -> 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
	 */
	class USDFCylinderComponent : public USDFBaseWithTransformComponent
	{
	public:
		struct FSDFCylinderProperties                              Properties;                                              // 0x0200(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWII[0x8];                                   // 0x0208(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFCapsule
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class USDFCapsule : public USDFBaseWithTransform
	{
	public:
		struct FSDFCapsuleProperties                               Properties;                                              // 0x0130(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JTOO[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFCapsuleComponent
	 * Size -> 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
	 */
	class USDFCapsuleComponent : public USDFBaseWithTransformComponent
	{
	public:
		struct FSDFCapsuleProperties                               Properties;                                              // 0x0200(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0U1[0x8];                                   // 0x0208(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFTorus
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class USDFTorus : public USDFBaseWithTransform
	{
	public:
		struct FSDFTorusProperties                                 Properties;                                              // 0x0130(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.SDFTorusComponent
	 * Size -> 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
	 */
	class USDFTorusComponent : public USDFBaseWithTransformComponent
	{
	public:
		struct FSDFTorusProperties                                 Properties;                                              // 0x0200(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FSDEngine.StaticMeshCarver
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	class UStaticMeshCarver : public UDataAsset
	{
	public:
		class FString                                              Status;                                                  // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Mesh[0x28];                                              // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FCoreUObject_FBox                                   AABB;                                                    // 0x0068(0x001C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AWTD[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDeepCSGFloatTree                                   BSPTree;                                                 // 0x0088(0x0018) NativeAccessSpecifierPublic
		struct FDeepCSGFloatTreePacked                             BSPTreePacked;                                           // 0x00A0(0x0018) NativeAccessSpecifierPublic

	public:
		void Generate();
		void ExportPreviewMesh();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
