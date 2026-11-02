// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_Metrics.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_Metrics() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_Metrics();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_Metrics_NoRegister();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogEngineConfig_Metrics *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineConfig_Metrics;
UClass* UCogEngineConfig_Metrics::GetPrivateStaticClass()
{
	using TClass = UCogEngineConfig_Metrics;
	if (!Z_Registration_Info_UClass_UCogEngineConfig_Metrics.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineConfig_Metrics"),
			Z_Registration_Info_UClass_UCogEngineConfig_Metrics.InnerSingleton,
			StaticRegisterNativesUCogEngineConfig_Metrics,
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
	return Z_Registration_Info_UClass_UCogEngineConfig_Metrics.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineConfig_Metrics_NoRegister()
{
	return UCogEngineConfig_Metrics::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineConfig_Metrics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_Metrics.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_Metrics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDurationSetting_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Metrics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartDelaySetting_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Metrics.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineConfig_Metrics constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDurationSetting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RestartDelaySetting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineConfig_Metrics constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineConfig_Metrics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineConfig_Metrics_Statics

// ********** Begin Class UCogEngineConfig_Metrics Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogEngineConfig_Metrics_Statics::NewProp_MaxDurationSetting = { "MaxDurationSetting", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Metrics, MaxDurationSetting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDurationSetting_MetaData), NewProp_MaxDurationSetting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogEngineConfig_Metrics_Statics::NewProp_RestartDelaySetting = { "RestartDelaySetting", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Metrics, RestartDelaySetting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartDelaySetting_MetaData), NewProp_RestartDelaySetting_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineConfig_Metrics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Metrics_Statics::NewProp_MaxDurationSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Metrics_Statics::NewProp_RestartDelaySetting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Metrics_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineConfig_Metrics Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UCogEngineConfig_Metrics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Metrics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineConfig_Metrics_Statics::ClassParams = {
	&UCogEngineConfig_Metrics::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineConfig_Metrics_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Metrics_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Metrics_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineConfig_Metrics_Statics::Class_MetaDataParams)
};
void UCogEngineConfig_Metrics::StaticRegisterNativesUCogEngineConfig_Metrics()
{
}
UClass* Z_Construct_UClass_UCogEngineConfig_Metrics()
{
	if (!Z_Registration_Info_UClass_UCogEngineConfig_Metrics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineConfig_Metrics.OuterSingleton, Z_Construct_UClass_UCogEngineConfig_Metrics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineConfig_Metrics.OuterSingleton;
}
UCogEngineConfig_Metrics::UCogEngineConfig_Metrics() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineConfig_Metrics);
UCogEngineConfig_Metrics::~UCogEngineConfig_Metrics() {}
// ********** End Class UCogEngineConfig_Metrics ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Metrics_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineConfig_Metrics, UCogEngineConfig_Metrics::StaticClass, TEXT("UCogEngineConfig_Metrics"), &Z_Registration_Info_UClass_UCogEngineConfig_Metrics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineConfig_Metrics), 4246032403U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Metrics_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Metrics_h__Script_CogEngine_3754822679{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Metrics_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Metrics_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
