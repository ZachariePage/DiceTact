// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogDebugPluginSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogDebugPluginSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COGDEBUG_API UClass* Z_Construct_UClass_UCogDebugPluginSubsystem();
COGDEBUG_API UClass* Z_Construct_UClass_UCogDebugPluginSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_CogDebug();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogDebugPluginSubsystem *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogDebugPluginSubsystem;
UClass* UCogDebugPluginSubsystem::GetPrivateStaticClass()
{
	using TClass = UCogDebugPluginSubsystem;
	if (!Z_Registration_Info_UClass_UCogDebugPluginSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogDebugPluginSubsystem"),
			Z_Registration_Info_UClass_UCogDebugPluginSubsystem.InnerSingleton,
			StaticRegisterNativesUCogDebugPluginSubsystem,
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
	return Z_Registration_Info_UClass_UCogDebugPluginSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogDebugPluginSubsystem_NoRegister()
{
	return UCogDebugPluginSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogDebugPluginSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CogDebugPluginSubsystem.h" },
		{ "ModuleRelativePath", "Public/CogDebugPluginSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogDebugPluginSubsystem constinit property declarations *****************
// ********** End Class UCogDebugPluginSubsystem constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogDebugPluginSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogDebugPluginSubsystem_Statics
UObject* (*const Z_Construct_UClass_UCogDebugPluginSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CogDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogDebugPluginSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogDebugPluginSubsystem_Statics::ClassParams = {
	&UCogDebugPluginSubsystem::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogDebugPluginSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogDebugPluginSubsystem_Statics::Class_MetaDataParams)
};
void UCogDebugPluginSubsystem::StaticRegisterNativesUCogDebugPluginSubsystem()
{
}
UClass* Z_Construct_UClass_UCogDebugPluginSubsystem()
{
	if (!Z_Registration_Info_UClass_UCogDebugPluginSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogDebugPluginSubsystem.OuterSingleton, Z_Construct_UClass_UCogDebugPluginSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogDebugPluginSubsystem.OuterSingleton;
}
UCogDebugPluginSubsystem::UCogDebugPluginSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogDebugPluginSubsystem);
UCogDebugPluginSubsystem::~UCogDebugPluginSubsystem() {}
// ********** End Class UCogDebugPluginSubsystem ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPluginSubsystem_h__Script_CogDebug_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogDebugPluginSubsystem, UCogDebugPluginSubsystem::StaticClass, TEXT("UCogDebugPluginSubsystem"), &Z_Registration_Info_UClass_UCogDebugPluginSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogDebugPluginSubsystem), 2231254469U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPluginSubsystem_h__Script_CogDebug_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPluginSubsystem_h__Script_CogDebug_2023735112{
	TEXT("/Script/CogDebug"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPluginSubsystem_h__Script_CogDebug_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPluginSubsystem_h__Script_CogDebug_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
