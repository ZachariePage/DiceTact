// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogAbilityCheat_Execution_ApplyEffect.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogAbilityCheat_Execution_ApplyEffect() {}

// ********** Begin Cross Module References ********************************************************
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect();
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect_NoRegister();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineCheat_Execution();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_CogAbility();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogAbilityCheat_Execution_ApplyEffect ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogAbilityCheat_Execution_ApplyEffect;
UClass* UCogAbilityCheat_Execution_ApplyEffect::GetPrivateStaticClass()
{
	using TClass = UCogAbilityCheat_Execution_ApplyEffect;
	if (!Z_Registration_Info_UClass_UCogAbilityCheat_Execution_ApplyEffect.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAbilityCheat_Execution_ApplyEffect"),
			Z_Registration_Info_UClass_UCogAbilityCheat_Execution_ApplyEffect.InnerSingleton,
			StaticRegisterNativesUCogAbilityCheat_Execution_ApplyEffect,
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
	return Z_Registration_Info_UClass_UCogAbilityCheat_Execution_ApplyEffect.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect_NoRegister()
{
	return UCogAbilityCheat_Execution_ApplyEffect::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "DisplayName", "Apply Effect" },
		{ "IncludePath", "CogAbilityCheat_Execution_ApplyEffect.h" },
		{ "ModuleRelativePath", "Public/CogAbilityCheat_Execution_ApplyEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityCheat_Execution_ApplyEffect.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogAbilityCheat_Execution_ApplyEffect constinit property declarations ***
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogAbilityCheat_Execution_ApplyEffect constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogAbilityCheat_Execution_ApplyEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect_Statics

// ********** Begin Class UCogAbilityCheat_Execution_ApplyEffect Property Definitions **************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000011, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityCheat_Execution_ApplyEffect, Effect), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effect_MetaData), NewProp_Effect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect_Statics::NewProp_Effect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect_Statics::PropPointers) < 2048);
// ********** End Class UCogAbilityCheat_Execution_ApplyEffect Property Definitions ****************
UObject* (*const Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogEngineCheat_Execution,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect_Statics::ClassParams = {
	&UCogAbilityCheat_Execution_ApplyEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect_Statics::PropPointers),
	0,
	0x003130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect_Statics::Class_MetaDataParams)
};
void UCogAbilityCheat_Execution_ApplyEffect::StaticRegisterNativesUCogAbilityCheat_Execution_ApplyEffect()
{
}
UClass* Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect()
{
	if (!Z_Registration_Info_UClass_UCogAbilityCheat_Execution_ApplyEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogAbilityCheat_Execution_ApplyEffect.OuterSingleton, Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogAbilityCheat_Execution_ApplyEffect.OuterSingleton;
}
UCogAbilityCheat_Execution_ApplyEffect::UCogAbilityCheat_Execution_ApplyEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogAbilityCheat_Execution_ApplyEffect);
UCogAbilityCheat_Execution_ApplyEffect::~UCogAbilityCheat_Execution_ApplyEffect() {}
// ********** End Class UCogAbilityCheat_Execution_ApplyEffect *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityCheat_Execution_ApplyEffect_h__Script_CogAbility_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogAbilityCheat_Execution_ApplyEffect, UCogAbilityCheat_Execution_ApplyEffect::StaticClass, TEXT("UCogAbilityCheat_Execution_ApplyEffect"), &Z_Registration_Info_UClass_UCogAbilityCheat_Execution_ApplyEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogAbilityCheat_Execution_ApplyEffect), 2102235443U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityCheat_Execution_ApplyEffect_h__Script_CogAbility_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityCheat_Execution_ApplyEffect_h__Script_CogAbility_3732659559{
	TEXT("/Script/CogAbility"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityCheat_Execution_ApplyEffect_h__Script_CogAbility_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityCheat_Execution_ApplyEffect_h__Script_CogAbility_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
