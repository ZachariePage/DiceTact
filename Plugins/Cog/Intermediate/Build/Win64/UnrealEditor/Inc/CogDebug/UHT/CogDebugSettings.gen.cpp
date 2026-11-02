// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogDebugSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogDebugSettings() {}

// ********** Begin Cross Module References ********************************************************
COGDEBUG_API UEnum* Z_Construct_UEnum_CogDebug_ECogDebugRecolorMode();
COGDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FCogDebugSettings();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_CogDebug();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECogDebugRecolorMode ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECogDebugRecolorMode;
static UEnum* ECogDebugRecolorMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECogDebugRecolorMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECogDebugRecolorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CogDebug_ECogDebugRecolorMode, (UObject*)Z_Construct_UPackage__Script_CogDebug(), TEXT("ECogDebugRecolorMode"));
	}
	return Z_Registration_Info_UEnum_ECogDebugRecolorMode.OuterSingleton;
}
template<> COGDEBUG_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogDebugRecolorMode>()
{
	return ECogDebugRecolorMode_StaticEnum();
}
struct Z_Construct_UEnum_CogDebug_ECogDebugRecolorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Color.Name", "ECogDebugRecolorMode::Color" },
		{ "HueOverFrames.Name", "ECogDebugRecolorMode::HueOverFrames" },
		{ "HueOverTime.Name", "ECogDebugRecolorMode::HueOverTime" },
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
		{ "None.Name", "ECogDebugRecolorMode::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECogDebugRecolorMode::None", (int64)ECogDebugRecolorMode::None },
		{ "ECogDebugRecolorMode::Color", (int64)ECogDebugRecolorMode::Color },
		{ "ECogDebugRecolorMode::HueOverTime", (int64)ECogDebugRecolorMode::HueOverTime },
		{ "ECogDebugRecolorMode::HueOverFrames", (int64)ECogDebugRecolorMode::HueOverFrames },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CogDebug_ECogDebugRecolorMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CogDebug_ECogDebugRecolorMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CogDebug,
	nullptr,
	"ECogDebugRecolorMode",
	"ECogDebugRecolorMode",
	Z_Construct_UEnum_CogDebug_ECogDebugRecolorMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CogDebug_ECogDebugRecolorMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CogDebug_ECogDebugRecolorMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CogDebug_ECogDebugRecolorMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CogDebug_ECogDebugRecolorMode()
{
	if (!Z_Registration_Info_UEnum_ECogDebugRecolorMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECogDebugRecolorMode.InnerSingleton, Z_Construct_UEnum_CogDebug_ECogDebugRecolorMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECogDebugRecolorMode.InnerSingleton;
}
// ********** End Enum ECogDebugRecolorMode ********************************************************

// ********** Begin ScriptStruct FCogDebugSettings *************************************************
struct Z_Construct_UScriptStruct_FCogDebugSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogDebugSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogDebugSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFilteringBySelection_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicateSelection_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Persistent_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextShadow_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fade2D_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthPriority_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerThickness_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerColorMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxesScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecolorMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecolorIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecolorColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecolorTimeSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecolorFrameCycle_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorNameUseLabel_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoSupportContextMenu_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoUseLocalSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoZLow_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoZHigh_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoThicknessZLow_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoThicknessZHigh_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoCursorDraggingThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoCursorSelectionThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoTranslationAxisLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoTranslationSnapEnable_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoTranslationSnapValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoTranslationPlaneOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoTranslationPlaneExtent_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoRotationSnapEnable_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoRotationSnapValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoRotationSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoRotationRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoRotationSegments_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoScaleSnapEnable_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoScaleSnapValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoScaleBoxOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoScaleBoxExtent_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoScaleSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoScaleMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoGroundRaycastLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoGroundRaycastChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoGroundRaycastCircleRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoAxisColorsZHighX_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoAxisColorsZHighY_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoAxisColorsZHighZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoAxisColorsZHighW_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoAxisColorsZLowX_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoAxisColorsZLowY_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoAxisColorsZLowZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoAxisColorsZLowW_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoAxisColorsSelectionX_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoAxisColorsSelectionY_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoAxisColorsSelectionZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoAxisColorsSelectionW_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoGroundRaycastColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoGroundRaycastCircleColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoTextColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryHitColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryNoHitColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryDrawHitPrimitives_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryDrawHitPrimitiveActorsName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryHitPrimitiveActorsNameShadow_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryHitPrimitiveActorsNameSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryDrawHitLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryDrawHitImpactPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryDrawHitNormals_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryDrawHitImpactNormals_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryHitPointSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryNormalColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryImpactNormalColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryDrawHitShapes_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorWorldStatic_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorWorldDynamic_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorVisibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorCamera_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorPhysicsBody_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorVehicle_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorDestructible_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel1_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel2_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel3_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel4_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel5_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel6_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel7_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel8_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel9_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel10_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel11_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel12_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel13_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel14_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel15_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel16_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel17_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelColorGameTraceChannel18_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryBoneWildcards_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogDebugSettings constinit property declarations *****************
	static void NewProp_bIsFilteringBySelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFilteringBySelection;
	static void NewProp_ReplicateSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReplicateSelection;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static void NewProp_TextShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TextShadow;
	static void NewProp_Fade2D_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Fade2D;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DepthPriority;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Segments;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerColorMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxesScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RecolorMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RecolorMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecolorIntensity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecolorColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecolorTimeSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RecolorFrameCycle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextSize;
	static void NewProp_ActorNameUseLabel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActorNameUseLabel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoScale;
	static void NewProp_GizmoSupportContextMenu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GizmoSupportContextMenu;
	static void NewProp_GizmoUseLocalSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GizmoUseLocalSpace;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GizmoZLow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GizmoZHigh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoThicknessZLow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoThicknessZHigh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoCursorDraggingThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoCursorSelectionThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoTranslationAxisLength;
	static void NewProp_GizmoTranslationSnapEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GizmoTranslationSnapEnable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoTranslationSnapValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoTranslationPlaneOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoTranslationPlaneExtent;
	static void NewProp_GizmoRotationSnapEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GizmoRotationSnapEnable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoRotationSnapValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoRotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoRotationRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GizmoRotationSegments;
	static void NewProp_GizmoScaleSnapEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GizmoScaleSnapEnable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoScaleSnapValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoScaleBoxOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoScaleBoxExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoScaleSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoScaleMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoGroundRaycastLength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GizmoGroundRaycastChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoGroundRaycastCircleRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoAxisColorsZHighX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoAxisColorsZHighY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoAxisColorsZHighZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoAxisColorsZHighW;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoAxisColorsZLowX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoAxisColorsZLowY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoAxisColorsZLowZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoAxisColorsZLowW;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoAxisColorsSelectionX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoAxisColorsSelectionY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoAxisColorsSelectionZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoAxisColorsSelectionW;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoGroundRaycastColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoGroundRaycastCircleColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionQueryHitColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionQueryNoHitColor;
	static void NewProp_CollisionQueryDrawHitPrimitives_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CollisionQueryDrawHitPrimitives;
	static void NewProp_CollisionQueryDrawHitPrimitiveActorsName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CollisionQueryDrawHitPrimitiveActorsName;
	static void NewProp_CollisionQueryHitPrimitiveActorsNameShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CollisionQueryHitPrimitiveActorsNameShadow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionQueryHitPrimitiveActorsNameSize;
	static void NewProp_CollisionQueryDrawHitLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CollisionQueryDrawHitLocation;
	static void NewProp_CollisionQueryDrawHitImpactPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CollisionQueryDrawHitImpactPoints;
	static void NewProp_CollisionQueryDrawHitNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CollisionQueryDrawHitNormals;
	static void NewProp_CollisionQueryDrawHitImpactNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CollisionQueryDrawHitImpactNormals;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionQueryHitPointSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionQueryNormalColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionQueryImpactNormalColor;
	static void NewProp_CollisionQueryDrawHitShapes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CollisionQueryDrawHitShapes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorWorldStatic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorWorldDynamic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorPawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorVisibility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorCamera;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorPhysicsBody;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorVehicle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorDestructible;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel3;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel4;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel5;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel6;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel7;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel8;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel9;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel10;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel11;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel12;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel13;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel14;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel15;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel16;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel17;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelColorGameTraceChannel18;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SecondaryBoneWildcards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SecondaryBoneWildcards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCogDebugSettings constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogDebugSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogDebugSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogDebugSettings;
class UScriptStruct* FCogDebugSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogDebugSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogDebugSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogDebugSettings, (UObject*)Z_Construct_UPackage__Script_CogDebug(), TEXT("CogDebugSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FCogDebugSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FCogDebugSettings Property Definitions ****************************
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_bIsFilteringBySelection_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->bIsFilteringBySelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_bIsFilteringBySelection = { "bIsFilteringBySelection", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_bIsFilteringBySelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFilteringBySelection_MetaData), NewProp_bIsFilteringBySelection_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ReplicateSelection_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->ReplicateSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ReplicateSelection = { "ReplicateSelection", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ReplicateSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicateSelection_MetaData), NewProp_ReplicateSelection_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Persistent_MetaData), NewProp_Persistent_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_TextShadow_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->TextShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_TextShadow = { "TextShadow", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_TextShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextShadow_MetaData), NewProp_TextShadow_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_Fade2D_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->Fade2D = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_Fade2D = { "Fade2D", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_Fade2D_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fade2D_MetaData), NewProp_Fade2D_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, DepthPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthPriority_MetaData), NewProp_DepthPriority_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, Segments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Segments_MetaData), NewProp_Segments_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ServerThickness = { "ServerThickness", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ServerThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerThickness_MetaData), NewProp_ServerThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ServerColorMultiplier = { "ServerColorMultiplier", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ServerColorMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerColorMultiplier_MetaData), NewProp_ServerColorMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ArrowSize = { "ArrowSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ArrowSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowSize_MetaData), NewProp_ArrowSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_AxesScale = { "AxesScale", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, AxesScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxesScale_MetaData), NewProp_AxesScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_RecolorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_RecolorMode = { "RecolorMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, RecolorMode), Z_Construct_UEnum_CogDebug_ECogDebugRecolorMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecolorMode_MetaData), NewProp_RecolorMode_MetaData) }; // 3380220693
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_RecolorIntensity = { "RecolorIntensity", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, RecolorIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecolorIntensity_MetaData), NewProp_RecolorIntensity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_RecolorColor = { "RecolorColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, RecolorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecolorColor_MetaData), NewProp_RecolorColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_RecolorTimeSpeed = { "RecolorTimeSpeed", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, RecolorTimeSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecolorTimeSpeed_MetaData), NewProp_RecolorTimeSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_RecolorFrameCycle = { "RecolorFrameCycle", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, RecolorFrameCycle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecolorFrameCycle_MetaData), NewProp_RecolorFrameCycle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_TextSize = { "TextSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, TextSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextSize_MetaData), NewProp_TextSize_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ActorNameUseLabel_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->ActorNameUseLabel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ActorNameUseLabel = { "ActorNameUseLabel", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ActorNameUseLabel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorNameUseLabel_MetaData), NewProp_ActorNameUseLabel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoScale = { "GizmoScale", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoScale_MetaData), NewProp_GizmoScale_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoSupportContextMenu_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->GizmoSupportContextMenu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoSupportContextMenu = { "GizmoSupportContextMenu", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoSupportContextMenu_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoSupportContextMenu_MetaData), NewProp_GizmoSupportContextMenu_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoUseLocalSpace_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->GizmoUseLocalSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoUseLocalSpace = { "GizmoUseLocalSpace", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoUseLocalSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoUseLocalSpace_MetaData), NewProp_GizmoUseLocalSpace_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoZLow = { "GizmoZLow", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoZLow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoZLow_MetaData), NewProp_GizmoZLow_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoZHigh = { "GizmoZHigh", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoZHigh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoZHigh_MetaData), NewProp_GizmoZHigh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoThicknessZLow = { "GizmoThicknessZLow", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoThicknessZLow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoThicknessZLow_MetaData), NewProp_GizmoThicknessZLow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoThicknessZHigh = { "GizmoThicknessZHigh", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoThicknessZHigh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoThicknessZHigh_MetaData), NewProp_GizmoThicknessZHigh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoCursorDraggingThreshold = { "GizmoCursorDraggingThreshold", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoCursorDraggingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoCursorDraggingThreshold_MetaData), NewProp_GizmoCursorDraggingThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoCursorSelectionThreshold = { "GizmoCursorSelectionThreshold", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoCursorSelectionThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoCursorSelectionThreshold_MetaData), NewProp_GizmoCursorSelectionThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoTranslationAxisLength = { "GizmoTranslationAxisLength", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoTranslationAxisLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoTranslationAxisLength_MetaData), NewProp_GizmoTranslationAxisLength_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoTranslationSnapEnable_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->GizmoTranslationSnapEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoTranslationSnapEnable = { "GizmoTranslationSnapEnable", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoTranslationSnapEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoTranslationSnapEnable_MetaData), NewProp_GizmoTranslationSnapEnable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoTranslationSnapValue = { "GizmoTranslationSnapValue", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoTranslationSnapValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoTranslationSnapValue_MetaData), NewProp_GizmoTranslationSnapValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoTranslationPlaneOffset = { "GizmoTranslationPlaneOffset", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoTranslationPlaneOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoTranslationPlaneOffset_MetaData), NewProp_GizmoTranslationPlaneOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoTranslationPlaneExtent = { "GizmoTranslationPlaneExtent", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoTranslationPlaneExtent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoTranslationPlaneExtent_MetaData), NewProp_GizmoTranslationPlaneExtent_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoRotationSnapEnable_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->GizmoRotationSnapEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoRotationSnapEnable = { "GizmoRotationSnapEnable", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoRotationSnapEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoRotationSnapEnable_MetaData), NewProp_GizmoRotationSnapEnable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoRotationSnapValue = { "GizmoRotationSnapValue", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoRotationSnapValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoRotationSnapValue_MetaData), NewProp_GizmoRotationSnapValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoRotationSpeed = { "GizmoRotationSpeed", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoRotationSpeed_MetaData), NewProp_GizmoRotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoRotationRadius = { "GizmoRotationRadius", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoRotationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoRotationRadius_MetaData), NewProp_GizmoRotationRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoRotationSegments = { "GizmoRotationSegments", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoRotationSegments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoRotationSegments_MetaData), NewProp_GizmoRotationSegments_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoScaleSnapEnable_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->GizmoScaleSnapEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoScaleSnapEnable = { "GizmoScaleSnapEnable", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoScaleSnapEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoScaleSnapEnable_MetaData), NewProp_GizmoScaleSnapEnable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoScaleSnapValue = { "GizmoScaleSnapValue", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoScaleSnapValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoScaleSnapValue_MetaData), NewProp_GizmoScaleSnapValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoScaleBoxOffset = { "GizmoScaleBoxOffset", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoScaleBoxOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoScaleBoxOffset_MetaData), NewProp_GizmoScaleBoxOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoScaleBoxExtent = { "GizmoScaleBoxExtent", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoScaleBoxExtent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoScaleBoxExtent_MetaData), NewProp_GizmoScaleBoxExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoScaleSpeed = { "GizmoScaleSpeed", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoScaleSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoScaleSpeed_MetaData), NewProp_GizmoScaleSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoScaleMin = { "GizmoScaleMin", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoScaleMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoScaleMin_MetaData), NewProp_GizmoScaleMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoGroundRaycastLength = { "GizmoGroundRaycastLength", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoGroundRaycastLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoGroundRaycastLength_MetaData), NewProp_GizmoGroundRaycastLength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoGroundRaycastChannel = { "GizmoGroundRaycastChannel", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoGroundRaycastChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoGroundRaycastChannel_MetaData), NewProp_GizmoGroundRaycastChannel_MetaData) }; // 838391399
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoGroundRaycastCircleRadius = { "GizmoGroundRaycastCircleRadius", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoGroundRaycastCircleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoGroundRaycastCircleRadius_MetaData), NewProp_GizmoGroundRaycastCircleRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsZHighX = { "GizmoAxisColorsZHighX", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoAxisColorsZHighX), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoAxisColorsZHighX_MetaData), NewProp_GizmoAxisColorsZHighX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsZHighY = { "GizmoAxisColorsZHighY", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoAxisColorsZHighY), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoAxisColorsZHighY_MetaData), NewProp_GizmoAxisColorsZHighY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsZHighZ = { "GizmoAxisColorsZHighZ", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoAxisColorsZHighZ), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoAxisColorsZHighZ_MetaData), NewProp_GizmoAxisColorsZHighZ_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsZHighW = { "GizmoAxisColorsZHighW", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoAxisColorsZHighW), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoAxisColorsZHighW_MetaData), NewProp_GizmoAxisColorsZHighW_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsZLowX = { "GizmoAxisColorsZLowX", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoAxisColorsZLowX), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoAxisColorsZLowX_MetaData), NewProp_GizmoAxisColorsZLowX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsZLowY = { "GizmoAxisColorsZLowY", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoAxisColorsZLowY), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoAxisColorsZLowY_MetaData), NewProp_GizmoAxisColorsZLowY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsZLowZ = { "GizmoAxisColorsZLowZ", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoAxisColorsZLowZ), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoAxisColorsZLowZ_MetaData), NewProp_GizmoAxisColorsZLowZ_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsZLowW = { "GizmoAxisColorsZLowW", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoAxisColorsZLowW), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoAxisColorsZLowW_MetaData), NewProp_GizmoAxisColorsZLowW_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsSelectionX = { "GizmoAxisColorsSelectionX", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoAxisColorsSelectionX), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoAxisColorsSelectionX_MetaData), NewProp_GizmoAxisColorsSelectionX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsSelectionY = { "GizmoAxisColorsSelectionY", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoAxisColorsSelectionY), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoAxisColorsSelectionY_MetaData), NewProp_GizmoAxisColorsSelectionY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsSelectionZ = { "GizmoAxisColorsSelectionZ", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoAxisColorsSelectionZ), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoAxisColorsSelectionZ_MetaData), NewProp_GizmoAxisColorsSelectionZ_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsSelectionW = { "GizmoAxisColorsSelectionW", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoAxisColorsSelectionW), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoAxisColorsSelectionW_MetaData), NewProp_GizmoAxisColorsSelectionW_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoGroundRaycastColor = { "GizmoGroundRaycastColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoGroundRaycastColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoGroundRaycastColor_MetaData), NewProp_GizmoGroundRaycastColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoGroundRaycastCircleColor = { "GizmoGroundRaycastCircleColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoGroundRaycastCircleColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoGroundRaycastCircleColor_MetaData), NewProp_GizmoGroundRaycastCircleColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoTextColor = { "GizmoTextColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, GizmoTextColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoTextColor_MetaData), NewProp_GizmoTextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryHitColor = { "CollisionQueryHitColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, CollisionQueryHitColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryHitColor_MetaData), NewProp_CollisionQueryHitColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryNoHitColor = { "CollisionQueryNoHitColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, CollisionQueryNoHitColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryNoHitColor_MetaData), NewProp_CollisionQueryNoHitColor_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitPrimitives_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->CollisionQueryDrawHitPrimitives = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitPrimitives = { "CollisionQueryDrawHitPrimitives", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitPrimitives_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryDrawHitPrimitives_MetaData), NewProp_CollisionQueryDrawHitPrimitives_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitPrimitiveActorsName_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->CollisionQueryDrawHitPrimitiveActorsName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitPrimitiveActorsName = { "CollisionQueryDrawHitPrimitiveActorsName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitPrimitiveActorsName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryDrawHitPrimitiveActorsName_MetaData), NewProp_CollisionQueryDrawHitPrimitiveActorsName_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryHitPrimitiveActorsNameShadow_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->CollisionQueryHitPrimitiveActorsNameShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryHitPrimitiveActorsNameShadow = { "CollisionQueryHitPrimitiveActorsNameShadow", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryHitPrimitiveActorsNameShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryHitPrimitiveActorsNameShadow_MetaData), NewProp_CollisionQueryHitPrimitiveActorsNameShadow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryHitPrimitiveActorsNameSize = { "CollisionQueryHitPrimitiveActorsNameSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, CollisionQueryHitPrimitiveActorsNameSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryHitPrimitiveActorsNameSize_MetaData), NewProp_CollisionQueryHitPrimitiveActorsNameSize_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitLocation_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->CollisionQueryDrawHitLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitLocation = { "CollisionQueryDrawHitLocation", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryDrawHitLocation_MetaData), NewProp_CollisionQueryDrawHitLocation_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitImpactPoints_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->CollisionQueryDrawHitImpactPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitImpactPoints = { "CollisionQueryDrawHitImpactPoints", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitImpactPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryDrawHitImpactPoints_MetaData), NewProp_CollisionQueryDrawHitImpactPoints_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitNormals_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->CollisionQueryDrawHitNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitNormals = { "CollisionQueryDrawHitNormals", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryDrawHitNormals_MetaData), NewProp_CollisionQueryDrawHitNormals_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitImpactNormals_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->CollisionQueryDrawHitImpactNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitImpactNormals = { "CollisionQueryDrawHitImpactNormals", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitImpactNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryDrawHitImpactNormals_MetaData), NewProp_CollisionQueryDrawHitImpactNormals_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryHitPointSize = { "CollisionQueryHitPointSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, CollisionQueryHitPointSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryHitPointSize_MetaData), NewProp_CollisionQueryHitPointSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryNormalColor = { "CollisionQueryNormalColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, CollisionQueryNormalColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryNormalColor_MetaData), NewProp_CollisionQueryNormalColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryImpactNormalColor = { "CollisionQueryImpactNormalColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, CollisionQueryImpactNormalColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryImpactNormalColor_MetaData), NewProp_CollisionQueryImpactNormalColor_MetaData) };
void Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitShapes_SetBit(void* Obj)
{
	((FCogDebugSettings*)Obj)->CollisionQueryDrawHitShapes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitShapes = { "CollisionQueryDrawHitShapes", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCogDebugSettings), &Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitShapes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryDrawHitShapes_MetaData), NewProp_CollisionQueryDrawHitShapes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorWorldStatic = { "ChannelColorWorldStatic", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorWorldStatic), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorWorldStatic_MetaData), NewProp_ChannelColorWorldStatic_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorWorldDynamic = { "ChannelColorWorldDynamic", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorWorldDynamic), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorWorldDynamic_MetaData), NewProp_ChannelColorWorldDynamic_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorPawn = { "ChannelColorPawn", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorPawn), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorPawn_MetaData), NewProp_ChannelColorPawn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorVisibility = { "ChannelColorVisibility", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorVisibility), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorVisibility_MetaData), NewProp_ChannelColorVisibility_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorCamera = { "ChannelColorCamera", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorCamera), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorCamera_MetaData), NewProp_ChannelColorCamera_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorPhysicsBody = { "ChannelColorPhysicsBody", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorPhysicsBody), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorPhysicsBody_MetaData), NewProp_ChannelColorPhysicsBody_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorVehicle = { "ChannelColorVehicle", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorVehicle), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorVehicle_MetaData), NewProp_ChannelColorVehicle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorDestructible = { "ChannelColorDestructible", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorDestructible), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorDestructible_MetaData), NewProp_ChannelColorDestructible_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel1 = { "ChannelColorGameTraceChannel1", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel1), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel1_MetaData), NewProp_ChannelColorGameTraceChannel1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel2 = { "ChannelColorGameTraceChannel2", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel2), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel2_MetaData), NewProp_ChannelColorGameTraceChannel2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel3 = { "ChannelColorGameTraceChannel3", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel3), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel3_MetaData), NewProp_ChannelColorGameTraceChannel3_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel4 = { "ChannelColorGameTraceChannel4", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel4), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel4_MetaData), NewProp_ChannelColorGameTraceChannel4_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel5 = { "ChannelColorGameTraceChannel5", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel5), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel5_MetaData), NewProp_ChannelColorGameTraceChannel5_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel6 = { "ChannelColorGameTraceChannel6", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel6), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel6_MetaData), NewProp_ChannelColorGameTraceChannel6_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel7 = { "ChannelColorGameTraceChannel7", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel7), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel7_MetaData), NewProp_ChannelColorGameTraceChannel7_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel8 = { "ChannelColorGameTraceChannel8", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel8), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel8_MetaData), NewProp_ChannelColorGameTraceChannel8_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel9 = { "ChannelColorGameTraceChannel9", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel9), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel9_MetaData), NewProp_ChannelColorGameTraceChannel9_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel10 = { "ChannelColorGameTraceChannel10", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel10), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel10_MetaData), NewProp_ChannelColorGameTraceChannel10_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel11 = { "ChannelColorGameTraceChannel11", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel11), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel11_MetaData), NewProp_ChannelColorGameTraceChannel11_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel12 = { "ChannelColorGameTraceChannel12", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel12), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel12_MetaData), NewProp_ChannelColorGameTraceChannel12_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel13 = { "ChannelColorGameTraceChannel13", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel13), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel13_MetaData), NewProp_ChannelColorGameTraceChannel13_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel14 = { "ChannelColorGameTraceChannel14", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel14), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel14_MetaData), NewProp_ChannelColorGameTraceChannel14_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel15 = { "ChannelColorGameTraceChannel15", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel15), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel15_MetaData), NewProp_ChannelColorGameTraceChannel15_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel16 = { "ChannelColorGameTraceChannel16", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel16), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel16_MetaData), NewProp_ChannelColorGameTraceChannel16_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel17 = { "ChannelColorGameTraceChannel17", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel17), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel17_MetaData), NewProp_ChannelColorGameTraceChannel17_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel18 = { "ChannelColorGameTraceChannel18", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, ChannelColorGameTraceChannel18), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelColorGameTraceChannel18_MetaData), NewProp_ChannelColorGameTraceChannel18_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_SecondaryBoneWildcards_Inner = { "SecondaryBoneWildcards", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_SecondaryBoneWildcards = { "SecondaryBoneWildcards", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogDebugSettings, SecondaryBoneWildcards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryBoneWildcards_MetaData), NewProp_SecondaryBoneWildcards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCogDebugSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_bIsFilteringBySelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ReplicateSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_Persistent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_TextShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_Fade2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_DepthPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_Segments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ServerThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ServerColorMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ArrowSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_AxesScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_RecolorMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_RecolorMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_RecolorIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_RecolorColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_RecolorTimeSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_RecolorFrameCycle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_TextSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ActorNameUseLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoSupportContextMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoUseLocalSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoZLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoZHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoThicknessZLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoThicknessZHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoCursorDraggingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoCursorSelectionThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoTranslationAxisLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoTranslationSnapEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoTranslationSnapValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoTranslationPlaneOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoTranslationPlaneExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoRotationSnapEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoRotationSnapValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoRotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoRotationRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoRotationSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoScaleSnapEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoScaleSnapValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoScaleBoxOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoScaleBoxExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoScaleSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoScaleMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoGroundRaycastLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoGroundRaycastChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoGroundRaycastCircleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsZHighX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsZHighY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsZHighZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsZHighW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsZLowX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsZLowY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsZLowZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsZLowW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsSelectionX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsSelectionY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsSelectionZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoAxisColorsSelectionW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoGroundRaycastColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoGroundRaycastCircleColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_GizmoTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryHitColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryNoHitColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitPrimitives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitPrimitiveActorsName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryHitPrimitiveActorsNameShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryHitPrimitiveActorsNameSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitImpactPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitImpactNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryHitPointSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryNormalColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryImpactNormalColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_CollisionQueryDrawHitShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorWorldStatic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorWorldDynamic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorPhysicsBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorVehicle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorDestructible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel6,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel7,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel8,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel9,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel10,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel11,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel12,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel13,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel14,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel15,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel16,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel17,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_ChannelColorGameTraceChannel18,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_SecondaryBoneWildcards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewProp_SecondaryBoneWildcards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogDebugSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCogDebugSettings Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogDebugSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogDebug,
	nullptr,
	&NewStructOps,
	"CogDebugSettings",
	Z_Construct_UScriptStruct_FCogDebugSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogDebugSettings_Statics::PropPointers),
	sizeof(FCogDebugSettings),
	alignof(FCogDebugSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogDebugSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogDebugSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogDebugSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FCogDebugSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogDebugSettings.InnerSingleton, Z_Construct_UScriptStruct_FCogDebugSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogDebugSettings.InnerSingleton);
}
// ********** End ScriptStruct FCogDebugSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugSettings_h__Script_CogDebug_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECogDebugRecolorMode_StaticEnum, TEXT("ECogDebugRecolorMode"), &Z_Registration_Info_UEnum_ECogDebugRecolorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3380220693U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCogDebugSettings::StaticStruct, Z_Construct_UScriptStruct_FCogDebugSettings_Statics::NewStructOps, TEXT("CogDebugSettings"),&Z_Registration_Info_UScriptStruct_FCogDebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogDebugSettings), 911952502U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugSettings_h__Script_CogDebug_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugSettings_h__Script_CogDebug_4263513720{
	TEXT("/Script/CogDebug"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugSettings_h__Script_CogDebug_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugSettings_h__Script_CogDebug_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugSettings_h__Script_CogDebug_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugSettings_h__Script_CogDebug_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
