// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/SlateSplineCurves.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSlateSplineCurves() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveFloat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector2D();
UPackage* Z_Construct_UPackage__Script_WidgetSplineSystem();
WIDGETSPLINESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSplineCurves();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSlateSplineCurves ************************************************
struct Z_Construct_UScriptStruct_FSlateSplineCurves_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSlateSplineCurves); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSlateSplineCurves); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Based on FSplineCurves from SplineComponent.h\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SlateSplineCurves.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Based on FSplineCurves from SplineComponent.h" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spline built from position data. */" },
#endif
		{ "ModuleRelativePath", "Public/Data/SlateSplineCurves.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spline built from position data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReparamTable_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input: distance along curve, output: parameter that puts you there. */" },
#endif
		{ "ModuleRelativePath", "Public/Data/SlateSplineCurves.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input: distance along curve, output: parameter that puts you there." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReparamStepsPerSegment_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/SlateSplineCurves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/SlateSplineCurves.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSlateSplineCurves constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReparamTable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReparamStepsPerSegment;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSlateSplineCurves constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateSplineCurves>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSlateSplineCurves_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSlateSplineCurves;
class UScriptStruct* FSlateSplineCurves::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSlateSplineCurves.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSlateSplineCurves.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateSplineCurves, (UObject*)Z_Construct_UPackage__Script_WidgetSplineSystem(), TEXT("SlateSplineCurves"));
	}
	return Z_Registration_Info_UScriptStruct_FSlateSplineCurves.OuterSingleton;
	}

// ********** Begin ScriptStruct FSlateSplineCurves Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateSplineCurves, Position), Z_Construct_UScriptStruct_FInterpCurveVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::NewProp_ReparamTable = { "ReparamTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateSplineCurves, ReparamTable), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReparamTable_MetaData), NewProp_ReparamTable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::NewProp_ReparamStepsPerSegment = { "ReparamStepsPerSegment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateSplineCurves, ReparamStepsPerSegment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReparamStepsPerSegment_MetaData), NewProp_ReparamStepsPerSegment_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateSplineCurves, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::NewProp_ReparamTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::NewProp_ReparamStepsPerSegment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSlateSplineCurves Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetSplineSystem,
	nullptr,
	&NewStructOps,
	"SlateSplineCurves",
	Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::PropPointers),
	sizeof(FSlateSplineCurves),
	alignof(FSlateSplineCurves),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlateSplineCurves()
{
	if (!Z_Registration_Info_UScriptStruct_FSlateSplineCurves.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSlateSplineCurves.InnerSingleton, Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSlateSplineCurves.InnerSingleton);
}
// ********** End ScriptStruct FSlateSplineCurves **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_Data_SlateSplineCurves_h__Script_WidgetSplineSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSlateSplineCurves::StaticStruct, Z_Construct_UScriptStruct_FSlateSplineCurves_Statics::NewStructOps, TEXT("SlateSplineCurves"),&Z_Registration_Info_UScriptStruct_FSlateSplineCurves, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateSplineCurves), 1428299407U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_Data_SlateSplineCurves_h__Script_WidgetSplineSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_Data_SlateSplineCurves_h__Script_WidgetSplineSystem_2029309254{
	TEXT("/Script/WidgetSplineSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_Data_SlateSplineCurves_h__Script_WidgetSplineSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_Data_SlateSplineCurves_h__Script_WidgetSplineSystem_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
