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
	 * Class Landscape.ControlPointMeshActor
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class AControlPointMeshActor : public AActor
	{
	public:
		class UControlPointMeshComponent*                          ControlPointMeshComponent;                               // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.ControlPointMeshComponent
	 * Size -> 0x0010 (FullSize[0x04F0] - InheritedSize[0x04E0])
	 */
	class UControlPointMeshComponent : public UStaticMeshComponent
	{
	public:
		float                                                      VirtualTextureMainPassMaxDrawDistance;                   // 0x04E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6BA[0xC];                                   // 0x04E4(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeProxy
	 * Size -> 0x0378 (FullSize[0x0598] - InheritedSize[0x0220])
	 */
	class ALandscapeProxy : public AActor
	{
	public:
		class ULandscapeSplinesComponent*                          SplineComponent;                                         // 0x0220(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               LandscapeGuid;                                           // 0x0228(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FIntPoint                                           LandscapeSectionOffset;                                  // 0x0238(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLODLevel;                                             // 0x0240(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LODDistanceFactor;                                       // 0x0244(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELandscapeLODFalloff                                       LODFalloff;                                              // 0x0248(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B5YA[0x3];                                   // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ComponentScreenSizeToUseSubSections;                     // 0x024C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LOD0ScreenSize;                                          // 0x0250(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LOD0DistributionSetting;                                 // 0x0254(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LODDistributionSetting;                                  // 0x0258(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TessellationComponentScreenSize;                         // 0x025C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseTessellationComponentScreenSizeFalloff;               // 0x0260(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2W6C[0x3];                                   // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TessellationComponentScreenSizeFalloff;                  // 0x0264(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OccluderGeometryLOD;                                     // 0x0268(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StaticLightingLOD;                                       // 0x026C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   DefaultPhysMaterial;                                     // 0x0270(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StreamingDistanceMultiplier;                             // 0x0278(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DHYP[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  LandscapeMaterial;                                       // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ULAF[0x20];                                  // 0x0288(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  LandscapeHoleMaterial;                                   // 0x02A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLandscapeProxyMaterialOverride>             LandscapeMaterialsOverride;                              // 0x02B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bMeshHoles;                                              // 0x02C0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MeshHolesMaxLod;                                         // 0x02C1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJ4N[0x6];                                   // 0x02C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class URuntimeVirtualTexture*>                      RuntimeVirtualTextures;                                  // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    VirtualTextureNumLods;                                   // 0x02D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VirtualTextureLodBias;                                   // 0x02DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERuntimeVirtualTextureMainPassType                         VirtualTextureRenderPassType;                            // 0x02E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M2T2[0x3];                                   // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NegativeZBoundsExtension;                                // 0x02E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositiveZBoundsExtension;                                // 0x02E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Z38[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ULandscapeComponent*>                         LandscapeComponents;                                     // 0x02F0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class ULandscapeHeightfieldCollisionComponent*>     CollisionComponents;                                     // 0x0300(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UHierarchicalInstancedStaticMeshComponent*>   FoliageComponents;                                       // 0x0310(0x0010) ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_62CH[0x64];                                  // 0x0320(0x0064) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHasLandscapeGrass;                                      // 0x0384(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UEFE[0x3];                                   // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StaticLightingResolution;                                // 0x0388(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CastShadow : 1;                                          // 0x038C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastDynamicShadow : 1;                                  // 0x038C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastStaticShadow : 1;                                   // 0x038C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5TY[0x3];                                   // 0x038D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bCastFarShadow : 1;                                      // 0x0390(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H1JY[0x3];                                   // 0x0391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bCastHiddenShadow : 1;                                   // 0x0394(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GOSS[0x3];                                   // 0x0395(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bCastShadowAsTwoSided : 1;                               // 0x0398(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XK5V[0x3];                                   // 0x0399(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAffectDistanceFieldLighting : 1;                        // 0x039C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightingChannels                                   LightingChannels;                                        // 0x039D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L7FO[0x2];                                   // 0x039E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseMaterialPositionOffsetInStaticLighting : 1;          // 0x03A0(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderCustomDepth : 1;                                  // 0x03A0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y55Q[0x3];                                   // 0x03A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ERendererStencilMask                                       CustomDepthStencilWriteMask;                             // 0x03A4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SUQH[0x3];                                   // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CustomDepthStencilValue;                                 // 0x03A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LDMaxDrawDistance;                                       // 0x03AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightmassPrimitiveSettings                         LightmassSettings;                                       // 0x03B0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    CollisionMipLevel;                                       // 0x03C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimpleCollisionMipLevel;                                 // 0x03CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionThickness;                                      // 0x03D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ITHL[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBodyInstance                                       BodyInstance;                                            // 0x03D8(0x0158) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bGenerateOverlapEvents : 1;                              // 0x0530(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBakeMaterialPositionOffsetIntoCollision : 1;            // 0x0530(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3V1K[0x3];                                   // 0x0531(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ComponentSizeQuads;                                      // 0x0534(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubsectionSizeQuads;                                     // 0x0538(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSubsections;                                          // 0x053C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsedForNavigation : 1;                                  // 0x0540(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFillCollisionUnderLandscapeForNavmesh : 1;              // 0x0540(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4HFV[0x3];                                   // 0x0541(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseDynamicMaterialInstance;                             // 0x0544(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENavDataGatheringMode                                      NavigationGeometryGatheringMode;                         // 0x0545(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLandscapeForCullingInvisibleHLODVertices;            // 0x0546(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasLayersContent;                                       // 0x0547(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UTexture2D*, class ULandscapeWeightmapUsage*>   WeightmapUsageMap;                                       // 0x0548(0x0050) Transient, NativeAccessSpecifierPublic

	public:
		void SetLandscapeMaterialVectorParameterValue(const class FName& ParameterName, const struct FLinearColor& Value);
		void SetLandscapeMaterialTextureParameterValue(const class FName& ParameterName, class UTexture* Value);
		void SetLandscapeMaterialScalarParameterValue(const class FName& ParameterName, float Value);
		bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies);
		void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);
		void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, const class FName& EditLayerName);
		void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
		void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
		void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
		void ChangeLODDistanceFactor(float InLODDistanceFactor);
		void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.Landscape
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class ALandscape : public ALandscapeProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeBlueprintBrushBase
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class ALandscapeBlueprintBrushBase : public AActor
	{
	public:
		void RequestLandscapeUpdate();
		class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, const class FName& InWeightmapLayerName);
		void Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize);
		void GetBlueprintRenderDependencies(TArray<class UObject*>* OutStreamableAssets);
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeLODStreamingProxy
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class ULandscapeLODStreamingProxy : public UStreamableRenderAsset
	{
	public:
		unsigned char                                              UnknownData_FN0J[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeComponent
	 * Size -> 0x0220 (FullSize[0x0670] - InheritedSize[0x0450])
	 */
	class ULandscapeComponent : public UPrimitiveComponent
	{
	public:
		int32_t                                                    SectionBaseX;                                            // 0x0450(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SectionBaseY;                                            // 0x0454(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ComponentSizeQuads;                                      // 0x0458(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubsectionSizeQuads;                                     // 0x045C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSubsections;                                          // 0x0460(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HKSB[0x4];                                   // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  OverrideMaterial;                                        // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  OverrideHoleMaterial;                                    // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLandscapeComponentMaterialOverride>         OverrideMaterials;                                       // 0x0478(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMaterialInstanceConstant*>                   MaterialInstances;                                       // 0x0488(0x0010) ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic
		TArray<class UMaterialInstanceDynamic*>                    MaterialInstancesDynamic;                                // 0x0498(0x0010) ZeroConstructor, Transient, TextExportTransient, NativeAccessSpecifierPublic
		TArray<int8_t>                                             LODIndexToMaterialIndex;                                 // 0x04A8(0x0010) ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic
		TArray<int8_t>                                             MaterialIndexToDisabledTessellationMaterial;             // 0x04B8(0x0010) ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic
		class UTexture2D*                                          XYOffsetmapTexture;                                      // 0x04C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            WeightmapScaleBias;                                      // 0x04D0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightmapSubsectionOffset;                               // 0x04E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5AOR[0xC];                                   // 0x04E4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            HeightmapScaleBias;                                      // 0x04F0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCoreUObject_FBox                                   CachedLocalBox;                                          // 0x0500(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                      // 0x051C(0x001C) ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          HeightmapTexture;                                        // 0x0538(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FWeightmapLayerAllocationInfo>               WeightmapLayerAllocations;                               // 0x0540(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UTexture2D*>                                  WeightmapTextures;                                       // 0x0550(0x0010) ZeroConstructor, TextExportTransient, NativeAccessSpecifierPrivate
		class ULandscapeLODStreamingProxy*                         LODStreamingProxy;                                       // 0x0560(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               MapBuildDataId;                                          // 0x0568(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       IrrelevantLights;                                        // 0x0578(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		int32_t                                                    CollisionMipLevel;                                       // 0x0588(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimpleCollisionMipLevel;                                 // 0x058C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NegativeZBoundsExtension;                                // 0x0590(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositiveZBoundsExtension;                                // 0x0594(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaticLightingResolution;                                // 0x0598(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ForcedLOD;                                               // 0x059C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LODBias;                                                 // 0x05A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               StateId;                                                 // 0x05A4(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               BakedTextureMaterialGuid;                                // 0x05B4(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJND[0x4];                                   // 0x05C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          GIBakedBaseColorTexture;                                 // 0x05C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MobileBlendableLayerMask;                                // 0x05D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UE5P[0x7];                                   // 0x05D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  MobileMaterialInterface;                                 // 0x05D8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          MobileMaterialInterfaces;                                // 0x05E0(0x0010) ZeroConstructor, NonPIEDuplicateTransient, NativeAccessSpecifierPublic
		TArray<class UTexture2D*>                                  MobileWeightmapTextures;                                 // 0x05F0(0x0010) ZeroConstructor, NonPIEDuplicateTransient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YGCF[0x70];                                  // 0x0600(0x0070) MISSED OFFSET (PADDING)

	public:
		class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);
		float EditorGetPaintLayerWeightByNameAtLocation(const struct FVector& InLocation, const class FName& InPaintLayerName);
		float EditorGetPaintLayerWeightAtLocation(const struct FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeGizmoActor
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class ALandscapeGizmoActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeGizmoActiveActor
	 * Size -> 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
	 */
	class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
	{
	public:
		unsigned char                                              UnknownData_T9SI[0x50];                                  // 0x0220(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeGizmoRenderComponent
	 * Size -> 0x0000 (FullSize[0x0450] - InheritedSize[0x0450])
	 */
	class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeGrassType
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class ULandscapeGrassType : public UObject
	{
	public:
		TArray<struct FGrassVariety>                               GrassVarieties;                                          // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnableDensityScaling : 1;                               // 0x0038(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EX88[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         GrassMesh;                                               // 0x0040(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrassDensity;                                            // 0x0048(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlacementJitter;                                         // 0x004C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartCullDistance;                                       // 0x0050(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndCullDistance;                                         // 0x0054(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RandomRotation;                                          // 0x0058(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AlignToSurface;                                          // 0x0059(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GU4D[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeHeightfieldCollisionComponent
	 * Size -> 0x00E0 (FullSize[0x0530] - InheritedSize[0x0450])
	 */
	class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
	{
	public:
		TArray<class ULandscapeLayerInfoObject*>                   ComponentLayerInfos;                                     // 0x0450(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    SectionBaseX;                                            // 0x0460(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SectionBaseY;                                            // 0x0464(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollisionSizeQuads;                                      // 0x0468(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionScale;                                          // 0x046C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimpleCollisionSizeQuads;                                // 0x0470(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSX5[0x4];                                   // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      CollisionQuadFlags;                                      // 0x0478(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               HeightfieldGuid;                                         // 0x0488(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCoreUObject_FBox                                   CachedLocalBox;                                          // 0x0498(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TLazyObjectPtr<class ULandscapeComponent>                  RenderComponent;                                         // 0x04B4(0x001C) ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GG4W[0x10];                                  // 0x04D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPhysicalMaterial*>                           CookedPhysicalMaterials;                                 // 0x04E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7UA[0x40];                                  // 0x04F0(0x0040) MISSED OFFSET (PADDING)

	public:
		class ULandscapeComponent* GetRenderComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeInfo
	 * Size -> 0x01E8 (FullSize[0x0210] - InheritedSize[0x0028])
	 */
	class ULandscapeInfo : public UObject
	{
	public:
		TLazyObjectPtr<class ALandscape>                           LandscapeActor;                                          // 0x0028(0x001C) IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               LandscapeGuid;                                           // 0x0044(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ComponentSizeQuads;                                      // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubsectionSizeQuads;                                     // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ComponentNumSubsections;                                 // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DrawScale;                                               // 0x0060(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FEXJ[0xA4];                                  // 0x006C(0x00A4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ALandscapeStreamingProxy*>                    Proxies;                                                 // 0x0110(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LP69[0xF0];                                  // 0x0120(0x00F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeInfoMap
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class ULandscapeInfoMap : public UObject
	{
	public:
		unsigned char                                              UnknownData_IFBS[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeLayerInfoObject
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class ULandscapeLayerInfoObject : public UObject
	{
	public:
		class FName                                                LayerName;                                               // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   PhysMaterial;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Hardness;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LayerUsageDebugColor;                                    // 0x003C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TA7C[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeMaterialInstanceConstant
	 * Size -> 0x0018 (FullSize[0x0330] - InheritedSize[0x0318])
	 */
	class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
	{
	public:
		TArray<struct FLandscapeMaterialTextureStreamingInfo>      TextureStreamingInfo;                                    // 0x0318(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsLayerThumbnail : 1;                                   // 0x0328(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableTessellation : 1;                                // 0x0328(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMobile : 1;                                             // 0x0328(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEditorToolUsage : 1;                                    // 0x0328(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FF14[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeMeshCollisionComponent
	 * Size -> 0x0020 (FullSize[0x0550] - InheritedSize[0x0530])
	 */
	class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
	{
	public:
		struct FGuid                                               MeshGuid;                                                // 0x0530(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YYA4[0x10];                                  // 0x0540(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeMeshProxyActor
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class ALandscapeMeshProxyActor : public AActor
	{
	public:
		class ULandscapeMeshProxyComponent*                        LandscapeMeshProxyComponent;                             // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeMeshProxyComponent
	 * Size -> 0x0030 (FullSize[0x0510] - InheritedSize[0x04E0])
	 */
	class ULandscapeMeshProxyComponent : public UStaticMeshComponent
	{
	public:
		struct FGuid                                               LandscapeGuid;                                           // 0x04E0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FIntPoint>                                   ProxyComponentBases;                                     // 0x04F0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		int8_t                                                     ProxyLOD;                                                // 0x0500(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q3SR[0xF];                                   // 0x0501(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class ULandscapeSettings : public UDeveloperSettings
	{
	public:
		int32_t                                                    MaxNumberOfLayers;                                       // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3CK9[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeSplinesComponent
	 * Size -> 0x0030 (FullSize[0x0480] - InheritedSize[0x0450])
	 */
	class ULandscapeSplinesComponent : public UPrimitiveComponent
	{
	public:
		TArray<class ULandscapeSplineControlPoint*>                ControlPoints;                                           // 0x0450(0x0010) ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected
		TArray<class ULandscapeSplineSegment*>                     Segments;                                                // 0x0460(0x0010) ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected
		TArray<class UMeshComponent*>                              CookedForeignMeshComponents;                             // 0x0470(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected

	public:
		TArray<class USplineMeshComponent*> GetSplineMeshComponents();
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeSplineControlPoint
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class ULandscapeSplineControlPoint : public UObject
	{
	public:
		struct FVector                                             Location;                                                // 0x0028(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0034(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Width;                                                   // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LayerWidthRatio;                                         // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SideFalloff;                                             // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeftSideFalloffFactor;                                   // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightSideFalloffFactor;                                  // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeftSideLayerFalloffFactor;                              // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightSideLayerFalloffFactor;                             // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndFalloff;                                              // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLandscapeSplineConnection>                  ConnectedSegments;                                       // 0x0060(0x0010) ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic
		TArray<struct FLandscapeSplineInterpPoint>                 Points;                                                  // 0x0070(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FCoreUObject_FBox                                   Bounds;                                                  // 0x0080(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4LY5[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UControlPointMeshComponent*                          LocalMeshComponent;                                      // 0x00A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeSplineSegment
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class ULandscapeSplineSegment : public UObject
	{
	public:
		struct FLandscapeSplineSegmentConnection                   Connections[0x2];                                        // 0x0028(0x0030) Edit, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
		struct FInterpCurveVector                                  SplineInfo;                                              // 0x0058(0x0018) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FLandscapeSplineInterpPoint>                 Points;                                                  // 0x0070(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FCoreUObject_FBox                                   Bounds;                                                  // 0x0080(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1BQU[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USplineMeshComponent*>                        LocalMeshComponents;                                     // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeStreamingProxy
	 * Size -> 0x0020 (FullSize[0x05B8] - InheritedSize[0x0598])
	 */
	class ALandscapeStreamingProxy : public ALandscapeProxy
	{
	public:
		TLazyObjectPtr<class ALandscape>                           LandscapeActor;                                          // 0x0598(0x001C) Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9J4O[0x4];                                   // 0x05B4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeSubsystem
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class ULandscapeSubsystem : public UTickableWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_OWO5[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeWeightmapUsage
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class ULandscapeWeightmapUsage : public UObject
	{
	public:
		class ULandscapeComponent*                                 ChannelUsage[0x4];                                       // 0x0028(0x0020) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               LayerGuid;                                               // 0x0048(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeGrassOutput
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
	{
	public:
		TArray<struct FGrassInput>                                 GrassTypes;                                              // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeLayerBlend
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
	{
	public:
		TArray<struct FLayerBlendInput>                            Layers;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               ExpressionGUID;                                          // 0x0050(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeLayerCoords
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
	{
	public:
		ETerrainCoordMappingType                                   MappingType;                                             // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELandscapeCustomizedCoordType                              CustomUVType;                                            // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H03I[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MappingScale;                                            // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MappingRotation;                                         // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MappingPanU;                                             // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MappingPanV;                                             // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GE9L[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeLayerSample
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
	{
	public:
		class FName                                                ParameterName;                                           // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreviewWeight;                                           // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExpressionGUID;                                          // 0x004C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H8TY[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeLayerSwitch
	 * Size -> 0x0048 (FullSize[0x0088] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
	{
	public:
		struct FExpressionInput                                    LayerUsed;                                               // 0x0040(0x0014) NoDestructor, NativeAccessSpecifierPublic
		struct FExpressionInput                                    LayerNotUsed;                                            // 0x0054(0x0014) NoDestructor, NativeAccessSpecifierPublic
		class FName                                                ParameterName;                                           // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PreviewUsed : 1;                                         // 0x0070(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ITR9[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ExpressionGUID;                                          // 0x0074(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FNIW[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeLayerWeight
	 * Size -> 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
	{
	public:
		struct FExpressionInput                                    Base;                                                    // 0x0040(0x0014) NoDestructor, NativeAccessSpecifierPublic
		struct FExpressionInput                                    Layer;                                                   // 0x0054(0x0014) NoDestructor, NativeAccessSpecifierPublic
		class FName                                                ParameterName;                                           // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreviewWeight;                                           // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ConstBase;                                               // 0x0074(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExpressionGUID;                                          // 0x0080(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
	{
	public:
		TArray<struct FPhysicalMaterialInput>                      Inputs;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeVisibilityMask
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
	{
	public:
		struct FGuid                                               ExpressionGUID;                                          // 0x0040(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
