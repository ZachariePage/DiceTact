// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogCommonPossessorInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogCommonPossessorInterface() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonPossessorInterface();
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonPossessorInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_CogCommon();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UCogCommonPossessorInterface *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogCommonPossessorInterface;
UClass* UCogCommonPossessorInterface::GetPrivateStaticClass()
{
	using TClass = UCogCommonPossessorInterface;
	if (!Z_Registration_Info_UClass_UCogCommonPossessorInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogCommonPossessorInterface"),
			Z_Registration_Info_UClass_UCogCommonPossessorInterface.InnerSingleton,
			StaticRegisterNativesUCogCommonPossessorInterface,
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
	return Z_Registration_Info_UClass_UCogCommonPossessorInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogCommonPossessorInterface_NoRegister()
{
	return UCogCommonPossessorInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogCommonPossessorInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CogCommonPossessorInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UCogCommonPossessorInterface constinit property declarations *********
// ********** End Interface UCogCommonPossessorInterface constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICogCommonPossessorInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogCommonPossessorInterface_Statics
UObject* (*const Z_Construct_UClass_UCogCommonPossessorInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CogCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogCommonPossessorInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogCommonPossessorInterface_Statics::ClassParams = {
	&UCogCommonPossessorInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogCommonPossessorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogCommonPossessorInterface_Statics::Class_MetaDataParams)
};
void UCogCommonPossessorInterface::StaticRegisterNativesUCogCommonPossessorInterface()
{
}
UClass* Z_Construct_UClass_UCogCommonPossessorInterface()
{
	if (!Z_Registration_Info_UClass_UCogCommonPossessorInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogCommonPossessorInterface.OuterSingleton, Z_Construct_UClass_UCogCommonPossessorInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogCommonPossessorInterface.OuterSingleton;
}
UCogCommonPossessorInterface::UCogCommonPossessorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogCommonPossessorInterface);
// ********** End Interface UCogCommonPossessorInterface *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonPossessorInterface_h__Script_CogCommon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogCommonPossessorInterface, UCogCommonPossessorInterface::StaticClass, TEXT("UCogCommonPossessorInterface"), &Z_Registration_Info_UClass_UCogCommonPossessorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogCommonPossessorInterface), 1105977026U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonPossessorInterface_h__Script_CogCommon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonPossessorInterface_h__Script_CogCommon_1640185847{
	TEXT("/Script/CogCommon"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonPossessorInterface_h__Script_CogCommon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonPossessorInterface_h__Script_CogCommon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
