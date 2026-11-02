// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COGDEBUG_API UClass* Z_Construct_UClass_UCogDebugPluginSubsystem();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineSubsystem();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogEngineSubsystem ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineSubsystem;
UClass* UCogEngineSubsystem::GetPrivateStaticClass()
{
	using TClass = UCogEngineSubsystem;
	if (!Z_Registration_Info_UClass_UCogEngineSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineSubsystem"),
			Z_Registration_Info_UClass_UCogEngineSubsystem.InnerSingleton,
			StaticRegisterNativesUCogEngineSubsystem,
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
	return Z_Registration_Info_UClass_UCogEngineSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineSubsystem_NoRegister()
{
	return UCogEngineSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CogEngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/CogEngineSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineSubsystem constinit property declarations **********************
// ********** End Class UCogEngineSubsystem constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineSubsystem_Statics
UObject* (*const Z_Construct_UClass_UCogEngineSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogDebugPluginSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineSubsystem_Statics::ClassParams = {
	&UCogEngineSubsystem::StaticClass,
	nullptr,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineSubsystem_Statics::Class_MetaDataParams)
};
void UCogEngineSubsystem::StaticRegisterNativesUCogEngineSubsystem()
{
}
UClass* Z_Construct_UClass_UCogEngineSubsystem()
{
	if (!Z_Registration_Info_UClass_UCogEngineSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineSubsystem.OuterSingleton, Z_Construct_UClass_UCogEngineSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineSubsystem.OuterSingleton;
}
UCogEngineSubsystem::UCogEngineSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineSubsystem);
UCogEngineSubsystem::~UCogEngineSubsystem() {}
// ********** End Class UCogEngineSubsystem ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineSubsystem_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineSubsystem, UCogEngineSubsystem::StaticClass, TEXT("UCogEngineSubsystem"), &Z_Registration_Info_UClass_UCogEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineSubsystem), 13941780U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineSubsystem_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineSubsystem_h__Script_CogEngine_734592994{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineSubsystem_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineSubsystem_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
