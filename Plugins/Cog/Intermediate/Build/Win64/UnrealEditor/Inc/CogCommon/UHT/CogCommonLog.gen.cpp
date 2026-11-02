// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogCommonLog.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogCommonLog() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UEnum* Z_Construct_UEnum_CogCommon_ECogLogVerbosity();
COGCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FCogLogCategory();
UPackage* Z_Construct_UPackage__Script_CogCommon();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECogLogVerbosity **********************************************************
static_assert(!int64(ECogLogVerbosity::NoLogging)||!int64(ECogLogVerbosity::Fatal)||!int64(ECogLogVerbosity::Error)||!int64(ECogLogVerbosity::Warning)||!int64(ECogLogVerbosity::Display)||!int64(ECogLogVerbosity::Log)||!int64(ECogLogVerbosity::Verbose)||!int64(ECogLogVerbosity::VeryVerbose), "'ECogLogVerbosity' does not have a 0 entry!(This is a problem when the enum is initialized by default)");
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECogLogVerbosity;
static UEnum* ECogLogVerbosity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECogLogVerbosity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECogLogVerbosity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CogCommon_ECogLogVerbosity, (UObject*)Z_Construct_UPackage__Script_CogCommon(), TEXT("ECogLogVerbosity"));
	}
	return Z_Registration_Info_UEnum_ECogLogVerbosity.OuterSingleton;
}
template<> COGCOMMON_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogLogVerbosity>()
{
	return ECogLogVerbosity_StaticEnum();
}
struct Z_Construct_UEnum_CogCommon_ECogLogVerbosity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "Display.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Display.Name", "ECogLogVerbosity::Display" },
		{ "Error.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Error.Name", "ECogLogVerbosity::Error" },
		{ "Fatal.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Fatal.Name", "ECogLogVerbosity::Fatal" },
		{ "Log.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Log.Name", "ECogLogVerbosity::Log" },
		{ "ModuleRelativePath", "Public/CogCommonLog.h" },
		{ "NoLogging.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "NoLogging.Name", "ECogLogVerbosity::NoLogging" },
		{ "Verbose.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Verbose.Name", "ECogLogVerbosity::Verbose" },
		{ "VeryVerbose.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "VeryVerbose.Name", "ECogLogVerbosity::VeryVerbose" },
		{ "Warning.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Warning.Name", "ECogLogVerbosity::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECogLogVerbosity::NoLogging", (int64)ECogLogVerbosity::NoLogging },
		{ "ECogLogVerbosity::Fatal", (int64)ECogLogVerbosity::Fatal },
		{ "ECogLogVerbosity::Error", (int64)ECogLogVerbosity::Error },
		{ "ECogLogVerbosity::Warning", (int64)ECogLogVerbosity::Warning },
		{ "ECogLogVerbosity::Display", (int64)ECogLogVerbosity::Display },
		{ "ECogLogVerbosity::Log", (int64)ECogLogVerbosity::Log },
		{ "ECogLogVerbosity::Verbose", (int64)ECogLogVerbosity::Verbose },
		{ "ECogLogVerbosity::VeryVerbose", (int64)ECogLogVerbosity::VeryVerbose },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CogCommon_ECogLogVerbosity_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CogCommon_ECogLogVerbosity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CogCommon,
	nullptr,
	"ECogLogVerbosity",
	"ECogLogVerbosity",
	Z_Construct_UEnum_CogCommon_ECogLogVerbosity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CogCommon_ECogLogVerbosity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CogCommon_ECogLogVerbosity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CogCommon_ECogLogVerbosity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CogCommon_ECogLogVerbosity()
{
	if (!Z_Registration_Info_UEnum_ECogLogVerbosity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECogLogVerbosity.InnerSingleton, Z_Construct_UEnum_CogCommon_ECogLogVerbosity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECogLogVerbosity.InnerSingleton;
}
// ********** End Enum ECogLogVerbosity ************************************************************

// ********** Begin ScriptStruct FCogLogCategory ***************************************************
struct Z_Construct_UScriptStruct_FCogLogCategory_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogLogCategory); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogLogCategory); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogCommonLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogCommonLog.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogLogCategory constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCogLogCategory constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogLogCategory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogLogCategory_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogLogCategory;
class UScriptStruct* FCogLogCategory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogLogCategory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogLogCategory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogLogCategory, (UObject*)Z_Construct_UPackage__Script_CogCommon(), TEXT("CogLogCategory"));
	}
	return Z_Registration_Info_UScriptStruct_FCogLogCategory.OuterSingleton;
	}

// ********** Begin ScriptStruct FCogLogCategory Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCogLogCategory_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogLogCategory, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCogLogCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogLogCategory_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogLogCategory_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCogLogCategory Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogLogCategory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogCommon,
	nullptr,
	&NewStructOps,
	"CogLogCategory",
	Z_Construct_UScriptStruct_FCogLogCategory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogLogCategory_Statics::PropPointers),
	sizeof(FCogLogCategory),
	alignof(FCogLogCategory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogLogCategory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogLogCategory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogLogCategory()
{
	if (!Z_Registration_Info_UScriptStruct_FCogLogCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogLogCategory.InnerSingleton, Z_Construct_UScriptStruct_FCogLogCategory_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogLogCategory.InnerSingleton);
}
// ********** End ScriptStruct FCogLogCategory *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonLog_h__Script_CogCommon_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECogLogVerbosity_StaticEnum, TEXT("ECogLogVerbosity"), &Z_Registration_Info_UEnum_ECogLogVerbosity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3128917293U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCogLogCategory::StaticStruct, Z_Construct_UScriptStruct_FCogLogCategory_Statics::NewStructOps, TEXT("CogLogCategory"),&Z_Registration_Info_UScriptStruct_FCogLogCategory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogLogCategory), 3441748025U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonLog_h__Script_CogCommon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonLog_h__Script_CogCommon_3588961450{
	TEXT("/Script/CogCommon"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonLog_h__Script_CogCommon_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonLog_h__Script_CogCommon_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonLog_h__Script_CogCommon_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonLog_h__Script_CogCommon_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
