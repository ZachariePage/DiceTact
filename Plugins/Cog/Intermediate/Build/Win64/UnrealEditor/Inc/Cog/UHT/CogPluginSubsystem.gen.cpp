// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogPluginSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogPluginSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COG_API UClass* Z_Construct_UClass_UCogPluginSubsystem();
COG_API UClass* Z_Construct_UClass_UCogPluginSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_Cog();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogPluginSubsystem ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogPluginSubsystem;
UClass* UCogPluginSubsystem::GetPrivateStaticClass()
{
	using TClass = UCogPluginSubsystem;
	if (!Z_Registration_Info_UClass_UCogPluginSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogPluginSubsystem"),
			Z_Registration_Info_UClass_UCogPluginSubsystem.InnerSingleton,
			StaticRegisterNativesUCogPluginSubsystem,
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
	return Z_Registration_Info_UClass_UCogPluginSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogPluginSubsystem_NoRegister()
{
	return UCogPluginSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogPluginSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CogPluginSubsystem.h" },
		{ "ModuleRelativePath", "Public/CogPluginSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogPluginSubsystem constinit property declarations **********************
// ********** End Class UCogPluginSubsystem constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogPluginSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogPluginSubsystem_Statics
UObject* (*const Z_Construct_UClass_UCogPluginSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Cog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogPluginSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogPluginSubsystem_Statics::ClassParams = {
	&UCogPluginSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogPluginSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogPluginSubsystem_Statics::Class_MetaDataParams)
};
void UCogPluginSubsystem::StaticRegisterNativesUCogPluginSubsystem()
{
}
UClass* Z_Construct_UClass_UCogPluginSubsystem()
{
	if (!Z_Registration_Info_UClass_UCogPluginSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogPluginSubsystem.OuterSingleton, Z_Construct_UClass_UCogPluginSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogPluginSubsystem.OuterSingleton;
}
UCogPluginSubsystem::UCogPluginSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogPluginSubsystem);
UCogPluginSubsystem::~UCogPluginSubsystem() {}
// ********** End Class UCogPluginSubsystem ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogPluginSubsystem_h__Script_Cog_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogPluginSubsystem, UCogPluginSubsystem::StaticClass, TEXT("UCogPluginSubsystem"), &Z_Registration_Info_UClass_UCogPluginSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogPluginSubsystem), 1226612252U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogPluginSubsystem_h__Script_Cog_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogPluginSubsystem_h__Script_Cog_3466126228{
	TEXT("/Script/Cog"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogPluginSubsystem_h__Script_Cog_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogPluginSubsystem_h__Script_Cog_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
