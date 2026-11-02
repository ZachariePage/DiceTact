// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COG_API UClass* Z_Construct_UClass_UCogSubsystem();
COG_API UClass* Z_Construct_UClass_UCogSubsystem_NoRegister();
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_Cog();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogSubsystem ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogSubsystem;
UClass* UCogSubsystem::GetPrivateStaticClass()
{
	using TClass = UCogSubsystem;
	if (!Z_Registration_Info_UClass_UCogSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogSubsystem"),
			Z_Registration_Info_UClass_UCogSubsystem.InnerSingleton,
			StaticRegisterNativesUCogSubsystem,
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
	return Z_Registration_Info_UClass_UCogSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogSubsystem_NoRegister()
{
	return UCogSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogSubsystem.h" },
		{ "ModuleRelativePath", "Public/CogSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Configs_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogSubsystem constinit property declarations ****************************
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentWorld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Configs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Configs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogSubsystem constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogSubsystem_Statics

// ********** Begin Class UCogSubsystem Property Definitions ***************************************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCogSubsystem_Statics::NewProp_CurrentWorld = { "CurrentWorld", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogSubsystem, CurrentWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWorld_MetaData), NewProp_CurrentWorld_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCogSubsystem_Statics::NewProp_Configs_Inner = { "Configs", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCogCommonConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogSubsystem_Statics::NewProp_Configs = { "Configs", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogSubsystem, Configs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Configs_MetaData), NewProp_Configs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCogSubsystem_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogSubsystem_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogSubsystem, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Assets_MetaData), NewProp_Assets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogSubsystem_Statics::NewProp_CurrentWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogSubsystem_Statics::NewProp_Configs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogSubsystem_Statics::NewProp_Configs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogSubsystem_Statics::NewProp_Assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogSubsystem_Statics::NewProp_Assets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogSubsystem_Statics::PropPointers) < 2048);
// ********** End Class UCogSubsystem Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UCogSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Cog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogSubsystem_Statics::ClassParams = {
	&UCogSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogSubsystem_Statics::Class_MetaDataParams)
};
void UCogSubsystem::StaticRegisterNativesUCogSubsystem()
{
}
UClass* Z_Construct_UClass_UCogSubsystem()
{
	if (!Z_Registration_Info_UClass_UCogSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogSubsystem.OuterSingleton, Z_Construct_UClass_UCogSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogSubsystem.OuterSingleton;
}
UCogSubsystem::UCogSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogSubsystem);
UCogSubsystem::~UCogSubsystem() {}
// ********** End Class UCogSubsystem **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogSubsystem_h__Script_Cog_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogSubsystem, UCogSubsystem::StaticClass, TEXT("UCogSubsystem"), &Z_Registration_Info_UClass_UCogSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogSubsystem), 141304680U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogSubsystem_h__Script_Cog_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogSubsystem_h__Script_Cog_1398425423{
	TEXT("/Script/Cog"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogSubsystem_h__Script_Cog_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogSubsystem_h__Script_Cog_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
