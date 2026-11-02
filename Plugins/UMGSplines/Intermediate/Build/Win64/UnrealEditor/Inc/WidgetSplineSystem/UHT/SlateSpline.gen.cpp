// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/SlateSpline.h"
#include "Data/SlateSplinePoint.h"
#include "Styling/SlateBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSlateSpline() {}

// ********** Begin Cross Module References ********************************************************
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UPackage* Z_Construct_UPackage__Script_WidgetSplineSystem();
WIDGETSPLINESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSpline();
WIDGETSPLINESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSplinePoint();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSlateSpline ******************************************************
struct Z_Construct_UScriptStruct_FSlateSpline_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSlateSpline); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSlateSpline); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/SlateSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLinear_MetaData[] = {
		{ "Category", "Spline Widget" },
		{ "ModuleRelativePath", "Public/Data/SlateSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsClosedLoop_MetaData[] = {
		{ "Category", "Spline Widget" },
		{ "ModuleRelativePath", "Public/Data/SlateSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "Spline Widget" },
		{ "ModuleRelativePath", "Public/Data/SlateSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
		{ "Category", "Spline Widget" },
		{ "ModuleRelativePath", "Public/Data/SlateSpline.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSlateSpline constinit property declarations **********************
	static void NewProp_bIsLinear_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLinear;
	static void NewProp_bIsClosedLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClosedLoop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSlateSpline constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateSpline>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSlateSpline_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSlateSpline;
class UScriptStruct* FSlateSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSlateSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSlateSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateSpline, (UObject*)Z_Construct_UPackage__Script_WidgetSplineSystem(), TEXT("SlateSpline"));
	}
	return Z_Registration_Info_UScriptStruct_FSlateSpline.OuterSingleton;
	}

// ********** Begin ScriptStruct FSlateSpline Property Definitions *********************************
void Z_Construct_UScriptStruct_FSlateSpline_Statics::NewProp_bIsLinear_SetBit(void* Obj)
{
	((FSlateSpline*)Obj)->bIsLinear = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSlateSpline_Statics::NewProp_bIsLinear = { "bIsLinear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSlateSpline), &Z_Construct_UScriptStruct_FSlateSpline_Statics::NewProp_bIsLinear_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLinear_MetaData), NewProp_bIsLinear_MetaData) };
void Z_Construct_UScriptStruct_FSlateSpline_Statics::NewProp_bIsClosedLoop_SetBit(void* Obj)
{
	((FSlateSpline*)Obj)->bIsClosedLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSlateSpline_Statics::NewProp_bIsClosedLoop = { "bIsClosedLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSlateSpline), &Z_Construct_UScriptStruct_FSlateSpline_Statics::NewProp_bIsClosedLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsClosedLoop_MetaData), NewProp_bIsClosedLoop_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateSpline_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSlateSplinePoint, METADATA_PARAMS(0, nullptr) }; // 3952925404
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSlateSpline_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateSpline, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) }; // 3952925404
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateSpline_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateSpline, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_MetaData), NewProp_Brush_MetaData) }; // 4278521822
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateSpline_Statics::NewProp_bIsLinear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateSpline_Statics::NewProp_bIsClosedLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateSpline_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateSpline_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateSpline_Statics::NewProp_Brush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateSpline_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSlateSpline Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateSpline_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetSplineSystem,
	nullptr,
	&NewStructOps,
	"SlateSpline",
	Z_Construct_UScriptStruct_FSlateSpline_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateSpline_Statics::PropPointers),
	sizeof(FSlateSpline),
	alignof(FSlateSpline),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateSpline_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlateSpline_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlateSpline()
{
	if (!Z_Registration_Info_UScriptStruct_FSlateSpline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSlateSpline.InnerSingleton, Z_Construct_UScriptStruct_FSlateSpline_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSlateSpline.InnerSingleton);
}
// ********** End ScriptStruct FSlateSpline ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_Data_SlateSpline_h__Script_WidgetSplineSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSlateSpline::StaticStruct, Z_Construct_UScriptStruct_FSlateSpline_Statics::NewStructOps, TEXT("SlateSpline"),&Z_Registration_Info_UScriptStruct_FSlateSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateSpline), 3570078223U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_Data_SlateSpline_h__Script_WidgetSplineSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_Data_SlateSpline_h__Script_WidgetSplineSystem_1620161402{
	TEXT("/Script/WidgetSplineSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_Data_SlateSpline_h__Script_WidgetSplineSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_Data_SlateSpline_h__Script_WidgetSplineSystem_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
