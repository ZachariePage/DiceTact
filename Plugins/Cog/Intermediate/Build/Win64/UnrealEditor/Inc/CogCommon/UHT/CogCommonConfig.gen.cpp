// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogCommonConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogCommonConfig() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_CogCommon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogCommonConfig *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogCommonConfig;
UClass* UCogCommonConfig::GetPrivateStaticClass()
{
	using TClass = UCogCommonConfig;
	if (!Z_Registration_Info_UClass_UCogCommonConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogCommonConfig"),
			Z_Registration_Info_UClass_UCogCommonConfig.InnerSingleton,
			StaticRegisterNativesUCogCommonConfig,
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
	return Z_Registration_Info_UClass_UCogCommonConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogCommonConfig_NoRegister()
{
	return UCogCommonConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogCommonConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CogCommonConfig.h" },
		{ "ModuleRelativePath", "Public/CogCommonConfig.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogCommonConfig constinit property declarations *************************
// ********** End Class UCogCommonConfig constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogCommonConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogCommonConfig_Statics
UObject* (*const Z_Construct_UClass_UCogCommonConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CogCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogCommonConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogCommonConfig_Statics::ClassParams = {
	&UCogCommonConfig::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogCommonConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogCommonConfig_Statics::Class_MetaDataParams)
};
void UCogCommonConfig::StaticRegisterNativesUCogCommonConfig()
{
}
UClass* Z_Construct_UClass_UCogCommonConfig()
{
	if (!Z_Registration_Info_UClass_UCogCommonConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogCommonConfig.OuterSingleton, Z_Construct_UClass_UCogCommonConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogCommonConfig.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogCommonConfig);
UCogCommonConfig::~UCogCommonConfig() {}
// ********** End Class UCogCommonConfig ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonConfig_h__Script_CogCommon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogCommonConfig, UCogCommonConfig::StaticClass, TEXT("UCogCommonConfig"), &Z_Registration_Info_UClass_UCogCommonConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogCommonConfig), 3285918264U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonConfig_h__Script_CogCommon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonConfig_h__Script_CogCommon_3611731000{
	TEXT("/Script/CogCommon"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonConfig_h__Script_CogCommon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonConfig_h__Script_CogCommon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
