// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogAbilitySubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogAbilitySubsystem() {}

// ********** Begin Cross Module References ********************************************************
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilitySubsystem();
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilitySubsystem_NoRegister();
COGDEBUG_API UClass* Z_Construct_UClass_UCogDebugPluginSubsystem();
UPackage* Z_Construct_UPackage__Script_CogAbility();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogAbilitySubsystem *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogAbilitySubsystem;
UClass* UCogAbilitySubsystem::GetPrivateStaticClass()
{
	using TClass = UCogAbilitySubsystem;
	if (!Z_Registration_Info_UClass_UCogAbilitySubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAbilitySubsystem"),
			Z_Registration_Info_UClass_UCogAbilitySubsystem.InnerSingleton,
			StaticRegisterNativesUCogAbilitySubsystem,
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
	return Z_Registration_Info_UClass_UCogAbilitySubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogAbilitySubsystem_NoRegister()
{
	return UCogAbilitySubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogAbilitySubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CogAbilitySubsystem.h" },
		{ "ModuleRelativePath", "Public/CogAbilitySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogAbilitySubsystem constinit property declarations *********************
// ********** End Class UCogAbilitySubsystem constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogAbilitySubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogAbilitySubsystem_Statics
UObject* (*const Z_Construct_UClass_UCogAbilitySubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogDebugPluginSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilitySubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogAbilitySubsystem_Statics::ClassParams = {
	&UCogAbilitySubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilitySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogAbilitySubsystem_Statics::Class_MetaDataParams)
};
void UCogAbilitySubsystem::StaticRegisterNativesUCogAbilitySubsystem()
{
}
UClass* Z_Construct_UClass_UCogAbilitySubsystem()
{
	if (!Z_Registration_Info_UClass_UCogAbilitySubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogAbilitySubsystem.OuterSingleton, Z_Construct_UClass_UCogAbilitySubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogAbilitySubsystem.OuterSingleton;
}
UCogAbilitySubsystem::UCogAbilitySubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogAbilitySubsystem);
UCogAbilitySubsystem::~UCogAbilitySubsystem() {}
// ********** End Class UCogAbilitySubsystem *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilitySubsystem_h__Script_CogAbility_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogAbilitySubsystem, UCogAbilitySubsystem::StaticClass, TEXT("UCogAbilitySubsystem"), &Z_Registration_Info_UClass_UCogAbilitySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogAbilitySubsystem), 2662421797U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilitySubsystem_h__Script_CogAbility_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilitySubsystem_h__Script_CogAbility_1279639914{
	TEXT("/Script/CogAbility"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilitySubsystem_h__Script_CogAbility_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilitySubsystem_h__Script_CogAbility_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
