// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogDebugSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogDebugSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COGDEBUG_API UClass* Z_Construct_UClass_UCogDebugPluginSubsystem();
COGDEBUG_API UClass* Z_Construct_UClass_UCogDebugSubsystem();
COGDEBUG_API UClass* Z_Construct_UClass_UCogDebugSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_CogDebug();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogDebugSubsystem *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogDebugSubsystem;
UClass* UCogDebugSubsystem::GetPrivateStaticClass()
{
	using TClass = UCogDebugSubsystem;
	if (!Z_Registration_Info_UClass_UCogDebugSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogDebugSubsystem"),
			Z_Registration_Info_UClass_UCogDebugSubsystem.InnerSingleton,
			StaticRegisterNativesUCogDebugSubsystem,
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
	return Z_Registration_Info_UClass_UCogDebugSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogDebugSubsystem_NoRegister()
{
	return UCogDebugSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogDebugSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CogDebugSubsystem.h" },
		{ "ModuleRelativePath", "Public/CogDebugSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogDebugSubsystem constinit property declarations ***********************
// ********** End Class UCogDebugSubsystem constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogDebugSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogDebugSubsystem_Statics
UObject* (*const Z_Construct_UClass_UCogDebugSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogDebugPluginSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CogDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogDebugSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogDebugSubsystem_Statics::ClassParams = {
	&UCogDebugSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogDebugSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogDebugSubsystem_Statics::Class_MetaDataParams)
};
void UCogDebugSubsystem::StaticRegisterNativesUCogDebugSubsystem()
{
}
UClass* Z_Construct_UClass_UCogDebugSubsystem()
{
	if (!Z_Registration_Info_UClass_UCogDebugSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogDebugSubsystem.OuterSingleton, Z_Construct_UClass_UCogDebugSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogDebugSubsystem.OuterSingleton;
}
UCogDebugSubsystem::UCogDebugSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogDebugSubsystem);
UCogDebugSubsystem::~UCogDebugSubsystem() {}
// ********** End Class UCogDebugSubsystem *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugSubsystem_h__Script_CogDebug_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogDebugSubsystem, UCogDebugSubsystem::StaticClass, TEXT("UCogDebugSubsystem"), &Z_Registration_Info_UClass_UCogDebugSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogDebugSubsystem), 2523689890U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugSubsystem_h__Script_CogDebug_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugSubsystem_h__Script_CogDebug_516033154{
	TEXT("/Script/CogDebug"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugSubsystem_h__Script_CogDebug_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugSubsystem_h__Script_CogDebug_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
