// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogAIDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogAIDataAsset() {}

// ********** Begin Cross Module References ********************************************************
COGAI_API UClass* Z_Construct_UClass_UCogAIDataAsset();
COGAI_API UClass* Z_Construct_UClass_UCogAIDataAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
UPackage* Z_Construct_UPackage__Script_CogAI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogAIDataAsset **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogAIDataAsset;
UClass* UCogAIDataAsset::GetPrivateStaticClass()
{
	using TClass = UCogAIDataAsset;
	if (!Z_Registration_Info_UClass_UCogAIDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAIDataAsset"),
			Z_Registration_Info_UClass_UCogAIDataAsset.InnerSingleton,
			StaticRegisterNativesUCogAIDataAsset,
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
	return Z_Registration_Info_UClass_UCogAIDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogAIDataAsset_NoRegister()
{
	return UCogAIDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogAIDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CogAIDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CogAIDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogAIDataAsset constinit property declarations **************************
// ********** End Class UCogAIDataAsset constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogAIDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogAIDataAsset_Statics
UObject* (*const Z_Construct_UClass_UCogAIDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAIDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogAIDataAsset_Statics::ClassParams = {
	&UCogAIDataAsset::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAIDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogAIDataAsset_Statics::Class_MetaDataParams)
};
void UCogAIDataAsset::StaticRegisterNativesUCogAIDataAsset()
{
}
UClass* Z_Construct_UClass_UCogAIDataAsset()
{
	if (!Z_Registration_Info_UClass_UCogAIDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogAIDataAsset.OuterSingleton, Z_Construct_UClass_UCogAIDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogAIDataAsset.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogAIDataAsset);
UCogAIDataAsset::~UCogAIDataAsset() {}
// ********** End Class UCogAIDataAsset ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIDataAsset_h__Script_CogAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogAIDataAsset, UCogAIDataAsset::StaticClass, TEXT("UCogAIDataAsset"), &Z_Registration_Info_UClass_UCogAIDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogAIDataAsset), 2241560668U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIDataAsset_h__Script_CogAI_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIDataAsset_h__Script_CogAI_142310450{
	TEXT("/Script/CogAI"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIDataAsset_h__Script_CogAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIDataAsset_h__Script_CogAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
