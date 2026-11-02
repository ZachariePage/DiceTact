// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogAbilityCheat_Execution_ActivateAbility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogAbilityCheat_Execution_ActivateAbility() {}

// ********** Begin Cross Module References ********************************************************
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility();
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_NoRegister();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineCheat_Execution();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_CogAbility();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogAbilityCheat_Execution_ActivateAbility *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogAbilityCheat_Execution_ActivateAbility;
UClass* UCogAbilityCheat_Execution_ActivateAbility::GetPrivateStaticClass()
{
	using TClass = UCogAbilityCheat_Execution_ActivateAbility;
	if (!Z_Registration_Info_UClass_UCogAbilityCheat_Execution_ActivateAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAbilityCheat_Execution_ActivateAbility"),
			Z_Registration_Info_UClass_UCogAbilityCheat_Execution_ActivateAbility.InnerSingleton,
			StaticRegisterNativesUCogAbilityCheat_Execution_ActivateAbility,
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
	return Z_Registration_Info_UClass_UCogAbilityCheat_Execution_ActivateAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_NoRegister()
{
	return UCogAbilityCheat_Execution_ActivateAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "DisplayName", "Activate Ability" },
		{ "IncludePath", "CogAbilityCheat_Execution_ActivateAbility.h" },
		{ "ModuleRelativePath", "Public/CogAbilityCheat_Execution_ActivateAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityCheat_Execution_ActivateAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveAbilityOnEnd_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityCheat_Execution_ActivateAbility.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogAbilityCheat_Execution_ActivateAbility constinit property declarations 
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static void NewProp_RemoveAbilityOnEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveAbilityOnEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogAbilityCheat_Execution_ActivateAbility constinit property declarations *
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogAbilityCheat_Execution_ActivateAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics

// ********** Begin Class UCogAbilityCheat_Execution_ActivateAbility Property Definitions **********
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000011, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityCheat_Execution_ActivateAbility, Ability), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) };
void Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics::NewProp_RemoveAbilityOnEnd_SetBit(void* Obj)
{
	((UCogAbilityCheat_Execution_ActivateAbility*)Obj)->RemoveAbilityOnEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics::NewProp_RemoveAbilityOnEnd = { "RemoveAbilityOnEnd", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityCheat_Execution_ActivateAbility), &Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics::NewProp_RemoveAbilityOnEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveAbilityOnEnd_MetaData), NewProp_RemoveAbilityOnEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics::NewProp_RemoveAbilityOnEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics::PropPointers) < 2048);
// ********** End Class UCogAbilityCheat_Execution_ActivateAbility Property Definitions ************
UObject* (*const Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogEngineCheat_Execution,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics::ClassParams = {
	&UCogAbilityCheat_Execution_ActivateAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics::PropPointers),
	0,
	0x003130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics::Class_MetaDataParams)
};
void UCogAbilityCheat_Execution_ActivateAbility::StaticRegisterNativesUCogAbilityCheat_Execution_ActivateAbility()
{
}
UClass* Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility()
{
	if (!Z_Registration_Info_UClass_UCogAbilityCheat_Execution_ActivateAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogAbilityCheat_Execution_ActivateAbility.OuterSingleton, Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogAbilityCheat_Execution_ActivateAbility.OuterSingleton;
}
UCogAbilityCheat_Execution_ActivateAbility::UCogAbilityCheat_Execution_ActivateAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogAbilityCheat_Execution_ActivateAbility);
UCogAbilityCheat_Execution_ActivateAbility::~UCogAbilityCheat_Execution_ActivateAbility() {}
// ********** End Class UCogAbilityCheat_Execution_ActivateAbility *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityCheat_Execution_ActivateAbility_h__Script_CogAbility_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogAbilityCheat_Execution_ActivateAbility, UCogAbilityCheat_Execution_ActivateAbility::StaticClass, TEXT("UCogAbilityCheat_Execution_ActivateAbility"), &Z_Registration_Info_UClass_UCogAbilityCheat_Execution_ActivateAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogAbilityCheat_Execution_ActivateAbility), 509908723U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityCheat_Execution_ActivateAbility_h__Script_CogAbility_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityCheat_Execution_ActivateAbility_h__Script_CogAbility_1549145109{
	TEXT("/Script/CogAbility"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityCheat_Execution_ActivateAbility_h__Script_CogAbility_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityCheat_Execution_ActivateAbility_h__Script_CogAbility_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
