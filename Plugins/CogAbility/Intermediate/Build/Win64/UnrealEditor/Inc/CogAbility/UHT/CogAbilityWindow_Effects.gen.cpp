// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogAbilityWindow_Effects.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogAbilityWindow_Effects() {}

// ********** Begin Cross Module References ********************************************************
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityConfig_Effects();
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityConfig_Effects_NoRegister();
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
UPackage* Z_Construct_UPackage__Script_CogAbility();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogAbilityConfig_Effects ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogAbilityConfig_Effects;
UClass* UCogAbilityConfig_Effects::GetPrivateStaticClass()
{
	using TClass = UCogAbilityConfig_Effects;
	if (!Z_Registration_Info_UClass_UCogAbilityConfig_Effects.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAbilityConfig_Effects"),
			Z_Registration_Info_UClass_UCogAbilityConfig_Effects.InnerSingleton,
			StaticRegisterNativesUCogAbilityConfig_Effects,
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
	return Z_Registration_Info_UClass_UCogAbilityConfig_Effects.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogAbilityConfig_Effects_NoRegister()
{
	return UCogAbilityConfig_Effects::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogAbilityConfig_Effects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogAbilityWindow_Effects.h" },
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Effects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortByName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Effects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortByAlignment_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Effects.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogAbilityConfig_Effects constinit property declarations ****************
	static void NewProp_SortByName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SortByName;
	static void NewProp_SortByAlignment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SortByAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogAbilityConfig_Effects constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogAbilityConfig_Effects>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogAbilityConfig_Effects_Statics

// ********** Begin Class UCogAbilityConfig_Effects Property Definitions ***************************
void Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::NewProp_SortByName_SetBit(void* Obj)
{
	((UCogAbilityConfig_Effects*)Obj)->SortByName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::NewProp_SortByName = { "SortByName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Effects), &Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::NewProp_SortByName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortByName_MetaData), NewProp_SortByName_MetaData) };
void Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::NewProp_SortByAlignment_SetBit(void* Obj)
{
	((UCogAbilityConfig_Effects*)Obj)->SortByAlignment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::NewProp_SortByAlignment = { "SortByAlignment", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Effects), &Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::NewProp_SortByAlignment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortByAlignment_MetaData), NewProp_SortByAlignment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::NewProp_SortByName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::NewProp_SortByAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::PropPointers) < 2048);
// ********** End Class UCogAbilityConfig_Effects Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::ClassParams = {
	&UCogAbilityConfig_Effects::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::Class_MetaDataParams)
};
void UCogAbilityConfig_Effects::StaticRegisterNativesUCogAbilityConfig_Effects()
{
}
UClass* Z_Construct_UClass_UCogAbilityConfig_Effects()
{
	if (!Z_Registration_Info_UClass_UCogAbilityConfig_Effects.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogAbilityConfig_Effects.OuterSingleton, Z_Construct_UClass_UCogAbilityConfig_Effects_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogAbilityConfig_Effects.OuterSingleton;
}
UCogAbilityConfig_Effects::UCogAbilityConfig_Effects() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogAbilityConfig_Effects);
UCogAbilityConfig_Effects::~UCogAbilityConfig_Effects() {}
// ********** End Class UCogAbilityConfig_Effects **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Effects_h__Script_CogAbility_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogAbilityConfig_Effects, UCogAbilityConfig_Effects::StaticClass, TEXT("UCogAbilityConfig_Effects"), &Z_Registration_Info_UClass_UCogAbilityConfig_Effects, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogAbilityConfig_Effects), 2707927299U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Effects_h__Script_CogAbility_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Effects_h__Script_CogAbility_3752979618{
	TEXT("/Script/CogAbility"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Effects_h__Script_CogAbility_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Effects_h__Script_CogAbility_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
