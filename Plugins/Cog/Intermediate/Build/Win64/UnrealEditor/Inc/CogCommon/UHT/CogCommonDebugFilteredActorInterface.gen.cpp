// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogCommonDebugFilteredActorInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogCommonDebugFilteredActorInterface() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonDebugFilteredActorInterface();
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonDebugFilteredActorInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_CogCommon();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UCogCommonDebugFilteredActorInterface ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogCommonDebugFilteredActorInterface;
UClass* UCogCommonDebugFilteredActorInterface::GetPrivateStaticClass()
{
	using TClass = UCogCommonDebugFilteredActorInterface;
	if (!Z_Registration_Info_UClass_UCogCommonDebugFilteredActorInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogCommonDebugFilteredActorInterface"),
			Z_Registration_Info_UClass_UCogCommonDebugFilteredActorInterface.InnerSingleton,
			StaticRegisterNativesUCogCommonDebugFilteredActorInterface,
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
	return Z_Registration_Info_UClass_UCogCommonDebugFilteredActorInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogCommonDebugFilteredActorInterface_NoRegister()
{
	return UCogCommonDebugFilteredActorInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogCommonDebugFilteredActorInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CogCommonDebugFilteredActorInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UCogCommonDebugFilteredActorInterface constinit property declarations 
// ********** End Interface UCogCommonDebugFilteredActorInterface constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICogCommonDebugFilteredActorInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogCommonDebugFilteredActorInterface_Statics
UObject* (*const Z_Construct_UClass_UCogCommonDebugFilteredActorInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CogCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogCommonDebugFilteredActorInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogCommonDebugFilteredActorInterface_Statics::ClassParams = {
	&UCogCommonDebugFilteredActorInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogCommonDebugFilteredActorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogCommonDebugFilteredActorInterface_Statics::Class_MetaDataParams)
};
void UCogCommonDebugFilteredActorInterface::StaticRegisterNativesUCogCommonDebugFilteredActorInterface()
{
}
UClass* Z_Construct_UClass_UCogCommonDebugFilteredActorInterface()
{
	if (!Z_Registration_Info_UClass_UCogCommonDebugFilteredActorInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogCommonDebugFilteredActorInterface.OuterSingleton, Z_Construct_UClass_UCogCommonDebugFilteredActorInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogCommonDebugFilteredActorInterface.OuterSingleton;
}
UCogCommonDebugFilteredActorInterface::UCogCommonDebugFilteredActorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogCommonDebugFilteredActorInterface);
// ********** End Interface UCogCommonDebugFilteredActorInterface **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonDebugFilteredActorInterface_h__Script_CogCommon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogCommonDebugFilteredActorInterface, UCogCommonDebugFilteredActorInterface::StaticClass, TEXT("UCogCommonDebugFilteredActorInterface"), &Z_Registration_Info_UClass_UCogCommonDebugFilteredActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogCommonDebugFilteredActorInterface), 3908120625U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonDebugFilteredActorInterface_h__Script_CogCommon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonDebugFilteredActorInterface_h__Script_CogCommon_4166197187{
	TEXT("/Script/CogCommon"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonDebugFilteredActorInterface_h__Script_CogCommon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonDebugFilteredActorInterface_h__Script_CogCommon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
