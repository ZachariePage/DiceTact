// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_DebugSettings.h"
#include "CogDebugSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_DebugSettings() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FCogDebugSettings();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_DebugSettings();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_DebugSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogEngineConfig_DebugSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineConfig_DebugSettings;
UClass* UCogEngineConfig_DebugSettings::GetPrivateStaticClass()
{
	using TClass = UCogEngineConfig_DebugSettings;
	if (!Z_Registration_Info_UClass_UCogEngineConfig_DebugSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineConfig_DebugSettings"),
			Z_Registration_Info_UClass_UCogEngineConfig_DebugSettings.InnerSingleton,
			StaticRegisterNativesUCogEngineConfig_DebugSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCogEngineConfig_DebugSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineConfig_DebugSettings_NoRegister()
{
	return UCogEngineConfig_DebugSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineConfig_DebugSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_DebugSettings.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_DebugSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_DebugSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineConfig_DebugSettings constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineConfig_DebugSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineConfig_DebugSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineConfig_DebugSettings_Statics

// ********** Begin Class UCogEngineConfig_DebugSettings Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_DebugSettings_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_DebugSettings, Data), Z_Construct_UScriptStruct_FCogDebugSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 911952502
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineConfig_DebugSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_DebugSettings_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_DebugSettings_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineConfig_DebugSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UCogEngineConfig_DebugSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_DebugSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineConfig_DebugSettings_Statics::ClassParams = {
	&UCogEngineConfig_DebugSettings::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineConfig_DebugSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_DebugSettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_DebugSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineConfig_DebugSettings_Statics::Class_MetaDataParams)
};
void UCogEngineConfig_DebugSettings::StaticRegisterNativesUCogEngineConfig_DebugSettings()
{
}
UClass* Z_Construct_UClass_UCogEngineConfig_DebugSettings()
{
	if (!Z_Registration_Info_UClass_UCogEngineConfig_DebugSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineConfig_DebugSettings.OuterSingleton, Z_Construct_UClass_UCogEngineConfig_DebugSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineConfig_DebugSettings.OuterSingleton;
}
UCogEngineConfig_DebugSettings::UCogEngineConfig_DebugSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineConfig_DebugSettings);
UCogEngineConfig_DebugSettings::~UCogEngineConfig_DebugSettings() {}
// ********** End Class UCogEngineConfig_DebugSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_DebugSettings_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineConfig_DebugSettings, UCogEngineConfig_DebugSettings::StaticClass, TEXT("UCogEngineConfig_DebugSettings"), &Z_Registration_Info_UClass_UCogEngineConfig_DebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineConfig_DebugSettings), 335185684U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_DebugSettings_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_DebugSettings_h__Script_CogEngine_1358389384{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_DebugSettings_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_DebugSettings_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
