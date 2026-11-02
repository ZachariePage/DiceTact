// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JUE/UI/JUESelectionTabData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeJUESelectionTabData() {}

// ********** Begin Cross Module References ********************************************************
JUE_API UScriptStruct* Z_Construct_UScriptStruct_FJUESelectionTabData();
UPackage* Z_Construct_UPackage__Script_JUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FJUESelectionTabData **********************************************
struct Z_Construct_UScriptStruct_FJUESelectionTabData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FJUESelectionTabData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FJUESelectionTabData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UI/JUESelectionTabData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabDisplayName_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "UI/JUESelectionTabData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The text that will be displayed on the tab." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabValue_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "UI/JUESelectionTabData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FJUESelectionTabData constinit property declarations **************
	static const UECodeGen_Private::FTextPropertyParams NewProp_TabDisplayName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TabValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FJUESelectionTabData constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJUESelectionTabData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FJUESelectionTabData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJUESelectionTabData;
class UScriptStruct* FJUESelectionTabData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJUESelectionTabData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJUESelectionTabData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJUESelectionTabData, (UObject*)Z_Construct_UPackage__Script_JUE(), TEXT("JUESelectionTabData"));
	}
	return Z_Registration_Info_UScriptStruct_FJUESelectionTabData.OuterSingleton;
	}

// ********** Begin ScriptStruct FJUESelectionTabData Property Definitions *************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FJUESelectionTabData_Statics::NewProp_TabDisplayName = { "TabDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJUESelectionTabData, TabDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabDisplayName_MetaData), NewProp_TabDisplayName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJUESelectionTabData_Statics::NewProp_TabValue = { "TabValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJUESelectionTabData, TabValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabValue_MetaData), NewProp_TabValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJUESelectionTabData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJUESelectionTabData_Statics::NewProp_TabDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJUESelectionTabData_Statics::NewProp_TabValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJUESelectionTabData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FJUESelectionTabData Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJUESelectionTabData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JUE,
	nullptr,
	&NewStructOps,
	"JUESelectionTabData",
	Z_Construct_UScriptStruct_FJUESelectionTabData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJUESelectionTabData_Statics::PropPointers),
	sizeof(FJUESelectionTabData),
	alignof(FJUESelectionTabData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJUESelectionTabData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJUESelectionTabData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJUESelectionTabData()
{
	if (!Z_Registration_Info_UScriptStruct_FJUESelectionTabData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJUESelectionTabData.InnerSingleton, Z_Construct_UScriptStruct_FJUESelectionTabData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FJUESelectionTabData.InnerSingleton);
}
// ********** End ScriptStruct FJUESelectionTabData ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUESelectionTabData_h__Script_JUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FJUESelectionTabData::StaticStruct, Z_Construct_UScriptStruct_FJUESelectionTabData_Statics::NewStructOps, TEXT("JUESelectionTabData"),&Z_Registration_Info_UScriptStruct_FJUESelectionTabData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJUESelectionTabData), 1819759010U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUESelectionTabData_h__Script_JUE_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUESelectionTabData_h__Script_JUE_2385542330{
	TEXT("/Script/JUE"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUESelectionTabData_h__Script_JUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUESelectionTabData_h__Script_JUE_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
