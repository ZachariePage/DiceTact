// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/SlateSplinePoint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSlateSplinePoint() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_WidgetSplineSystem();
WIDGETSPLINESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSplinePoint();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSlateSplinePoint *************************************************
struct Z_Construct_UScriptStruct_FSlateSplinePoint_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSlateSplinePoint); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSlateSplinePoint); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/SlateSplinePoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Spline Widget" },
		{ "ModuleRelativePath", "Public/Data/SlateSplinePoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Spline Widget" },
		{ "ModuleRelativePath", "Public/Data/SlateSplinePoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSlateSplinePoint constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSlateSplinePoint constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateSplinePoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSlateSplinePoint_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSlateSplinePoint;
class UScriptStruct* FSlateSplinePoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSlateSplinePoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSlateSplinePoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateSplinePoint, (UObject*)Z_Construct_UPackage__Script_WidgetSplineSystem(), TEXT("SlateSplinePoint"));
	}
	return Z_Registration_Info_UScriptStruct_FSlateSplinePoint.OuterSingleton;
	}

// ********** Begin ScriptStruct FSlateSplinePoint Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateSplinePoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateSplinePoint, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateSplinePoint_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateSplinePoint, Direction), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateSplinePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateSplinePoint_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateSplinePoint_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateSplinePoint_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSlateSplinePoint Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateSplinePoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetSplineSystem,
	nullptr,
	&NewStructOps,
	"SlateSplinePoint",
	Z_Construct_UScriptStruct_FSlateSplinePoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateSplinePoint_Statics::PropPointers),
	sizeof(FSlateSplinePoint),
	alignof(FSlateSplinePoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateSplinePoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlateSplinePoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlateSplinePoint()
{
	if (!Z_Registration_Info_UScriptStruct_FSlateSplinePoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSlateSplinePoint.InnerSingleton, Z_Construct_UScriptStruct_FSlateSplinePoint_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSlateSplinePoint.InnerSingleton);
}
// ********** End ScriptStruct FSlateSplinePoint ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_Data_SlateSplinePoint_h__Script_WidgetSplineSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSlateSplinePoint::StaticStruct, Z_Construct_UScriptStruct_FSlateSplinePoint_Statics::NewStructOps, TEXT("SlateSplinePoint"),&Z_Registration_Info_UScriptStruct_FSlateSplinePoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateSplinePoint), 3952925404U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_Data_SlateSplinePoint_h__Script_WidgetSplineSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_Data_SlateSplinePoint_h__Script_WidgetSplineSystem_3847256117{
	TEXT("/Script/WidgetSplineSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_Data_SlateSplinePoint_h__Script_WidgetSplineSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_Data_SlateSplinePoint_h__Script_WidgetSplineSystem_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
