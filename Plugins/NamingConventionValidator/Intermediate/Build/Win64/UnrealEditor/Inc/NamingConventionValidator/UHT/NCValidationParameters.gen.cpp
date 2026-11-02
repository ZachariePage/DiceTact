// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NamingConventionValidator/NCValidationParameters.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNCValidationParameters() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
NAMINGCONVENTIONVALIDATOR_API UScriptStruct* Z_Construct_UScriptStruct_FNCValidationParameters();
UPackage* Z_Construct_UPackage__Script_NamingConventionValidator();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FNCValidationParameters *******************************************
struct Z_Construct_UScriptStruct_FNCValidationParameters_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FNCValidationParameters); }
	static inline consteval int16 GetStructAlignment() { return alignof(FNCValidationParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "NCValidationParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckSubDirectories_MetaData[] = {
		{ "Category", "Validation Parameters" },
		{ "ModuleRelativePath", "NCValidationParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetValidationDirectory_MetaData[] = {
		{ "Category", "Validation Parameters" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "NCValidationParameters.h" },
		{ "RelativeToGameContentDir", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogMatchingConventions_MetaData[] = {
		{ "Category", "Validation Parameters" },
		{ "ModuleRelativePath", "NCValidationParameters.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does the validator Log Assets that matches their convention (Will flood the message log if true)?" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FNCValidationParameters constinit property declarations ***********
	static void NewProp_bCheckSubDirectories_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckSubDirectories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetValidationDirectory;
	static void NewProp_bLogMatchingConventions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogMatchingConventions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FNCValidationParameters constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNCValidationParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FNCValidationParameters_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNCValidationParameters;
class UScriptStruct* FNCValidationParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNCValidationParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNCValidationParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNCValidationParameters, (UObject*)Z_Construct_UPackage__Script_NamingConventionValidator(), TEXT("NCValidationParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FNCValidationParameters.OuterSingleton;
	}

// ********** Begin ScriptStruct FNCValidationParameters Property Definitions **********************
void Z_Construct_UScriptStruct_FNCValidationParameters_Statics::NewProp_bCheckSubDirectories_SetBit(void* Obj)
{
	((FNCValidationParameters*)Obj)->bCheckSubDirectories = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNCValidationParameters_Statics::NewProp_bCheckSubDirectories = { "bCheckSubDirectories", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNCValidationParameters), &Z_Construct_UScriptStruct_FNCValidationParameters_Statics::NewProp_bCheckSubDirectories_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckSubDirectories_MetaData), NewProp_bCheckSubDirectories_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNCValidationParameters_Statics::NewProp_TargetValidationDirectory = { "TargetValidationDirectory", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNCValidationParameters, TargetValidationDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetValidationDirectory_MetaData), NewProp_TargetValidationDirectory_MetaData) }; // 1225349189
void Z_Construct_UScriptStruct_FNCValidationParameters_Statics::NewProp_bLogMatchingConventions_SetBit(void* Obj)
{
	((FNCValidationParameters*)Obj)->bLogMatchingConventions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNCValidationParameters_Statics::NewProp_bLogMatchingConventions = { "bLogMatchingConventions", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNCValidationParameters), &Z_Construct_UScriptStruct_FNCValidationParameters_Statics::NewProp_bLogMatchingConventions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogMatchingConventions_MetaData), NewProp_bLogMatchingConventions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNCValidationParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCValidationParameters_Statics::NewProp_bCheckSubDirectories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCValidationParameters_Statics::NewProp_TargetValidationDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCValidationParameters_Statics::NewProp_bLogMatchingConventions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCValidationParameters_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FNCValidationParameters Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNCValidationParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NamingConventionValidator,
	nullptr,
	&NewStructOps,
	"NCValidationParameters",
	Z_Construct_UScriptStruct_FNCValidationParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCValidationParameters_Statics::PropPointers),
	sizeof(FNCValidationParameters),
	alignof(FNCValidationParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCValidationParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNCValidationParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNCValidationParameters()
{
	if (!Z_Registration_Info_UScriptStruct_FNCValidationParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNCValidationParameters.InnerSingleton, Z_Construct_UScriptStruct_FNCValidationParameters_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FNCValidationParameters.InnerSingleton);
}
// ********** End ScriptStruct FNCValidationParameters *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCValidationParameters_h__Script_NamingConventionValidator_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNCValidationParameters::StaticStruct, Z_Construct_UScriptStruct_FNCValidationParameters_Statics::NewStructOps, TEXT("NCValidationParameters"),&Z_Registration_Info_UScriptStruct_FNCValidationParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNCValidationParameters), 1210258946U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCValidationParameters_h__Script_NamingConventionValidator_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCValidationParameters_h__Script_NamingConventionValidator_1776145761{
	TEXT("/Script/NamingConventionValidator"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCValidationParameters_h__Script_NamingConventionValidator_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCValidationParameters_h__Script_NamingConventionValidator_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
