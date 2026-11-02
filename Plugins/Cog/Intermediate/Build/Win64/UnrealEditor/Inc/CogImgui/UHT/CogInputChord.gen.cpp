// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogInputChord.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogInputChord() {}

// ********** Begin Cross Module References ********************************************************
COGIMGUI_API UScriptStruct* Z_Construct_UScriptStruct_FCogInputChord();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
UPackage* Z_Construct_UPackage__Script_CogImgui();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCogInputChord ****************************************************
struct Z_Construct_UScriptStruct_FCogInputChord_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogInputChord); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogInputChord); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogInputChord.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogInputChord constinit property declarations ********************
// ********** End ScriptStruct FCogInputChord constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogInputChord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogInputChord_Statics
static_assert(std::is_polymorphic<FCogInputChord>() == std::is_polymorphic<FInputChord>(), "USTRUCT FCogInputChord cannot be polymorphic unless super FInputChord is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogInputChord;
class UScriptStruct* FCogInputChord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogInputChord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogInputChord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogInputChord, (UObject*)Z_Construct_UPackage__Script_CogImgui(), TEXT("CogInputChord"));
	}
	return Z_Registration_Info_UScriptStruct_FCogInputChord.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogInputChord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogImgui,
	Z_Construct_UScriptStruct_FInputChord,
	&NewStructOps,
	"CogInputChord",
	nullptr,
	0,
	sizeof(FCogInputChord),
	alignof(FCogInputChord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogInputChord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogInputChord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogInputChord()
{
	if (!Z_Registration_Info_UScriptStruct_FCogInputChord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogInputChord.InnerSingleton, Z_Construct_UScriptStruct_FCogInputChord_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogInputChord.InnerSingleton);
}
// ********** End ScriptStruct FCogInputChord ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogImgui_Public_CogInputChord_h__Script_CogImgui_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCogInputChord::StaticStruct, Z_Construct_UScriptStruct_FCogInputChord_Statics::NewStructOps, TEXT("CogInputChord"),&Z_Registration_Info_UScriptStruct_FCogInputChord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogInputChord), 3035783925U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogImgui_Public_CogInputChord_h__Script_CogImgui_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogImgui_Public_CogInputChord_h__Script_CogImgui_548170359{
	TEXT("/Script/CogImgui"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogImgui_Public_CogInputChord_h__Script_CogImgui_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogImgui_Public_CogInputChord_h__Script_CogImgui_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
