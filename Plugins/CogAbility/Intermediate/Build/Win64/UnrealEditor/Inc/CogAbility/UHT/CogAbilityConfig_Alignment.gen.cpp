// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogAbilityConfig_Alignment.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogAbilityConfig_Alignment() {}

// ********** Begin Cross Module References ********************************************************
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityConfig_Alignment();
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityConfig_Alignment_NoRegister();
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
UPackage* Z_Construct_UPackage__Script_CogAbility();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogAbilityConfig_Alignment **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogAbilityConfig_Alignment;
UClass* UCogAbilityConfig_Alignment::GetPrivateStaticClass()
{
	using TClass = UCogAbilityConfig_Alignment;
	if (!Z_Registration_Info_UClass_UCogAbilityConfig_Alignment.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAbilityConfig_Alignment"),
			Z_Registration_Info_UClass_UCogAbilityConfig_Alignment.InnerSingleton,
			StaticRegisterNativesUCogAbilityConfig_Alignment,
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
	return Z_Registration_Info_UClass_UCogAbilityConfig_Alignment.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogAbilityConfig_Alignment_NoRegister()
{
	return UCogAbilityConfig_Alignment::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogAbilityConfig_Alignment.h" },
		{ "ModuleRelativePath", "Public/CogAbilityConfig_Alignment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositiveColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityConfig_Alignment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegativeColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityConfig_Alignment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeutralColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityConfig_Alignment.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogAbilityConfig_Alignment constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositiveColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NegativeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NeutralColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogAbilityConfig_Alignment constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogAbilityConfig_Alignment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics

// ********** Begin Class UCogAbilityConfig_Alignment Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics::NewProp_PositiveColor = { "PositiveColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Alignment, PositiveColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositiveColor_MetaData), NewProp_PositiveColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics::NewProp_NegativeColor = { "NegativeColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Alignment, NegativeColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegativeColor_MetaData), NewProp_NegativeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics::NewProp_NeutralColor = { "NeutralColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Alignment, NeutralColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeutralColor_MetaData), NewProp_NeutralColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics::NewProp_PositiveColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics::NewProp_NegativeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics::NewProp_NeutralColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics::PropPointers) < 2048);
// ********** End Class UCogAbilityConfig_Alignment Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics::ClassParams = {
	&UCogAbilityConfig_Alignment::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics::Class_MetaDataParams)
};
void UCogAbilityConfig_Alignment::StaticRegisterNativesUCogAbilityConfig_Alignment()
{
}
UClass* Z_Construct_UClass_UCogAbilityConfig_Alignment()
{
	if (!Z_Registration_Info_UClass_UCogAbilityConfig_Alignment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogAbilityConfig_Alignment.OuterSingleton, Z_Construct_UClass_UCogAbilityConfig_Alignment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogAbilityConfig_Alignment.OuterSingleton;
}
UCogAbilityConfig_Alignment::UCogAbilityConfig_Alignment() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogAbilityConfig_Alignment);
UCogAbilityConfig_Alignment::~UCogAbilityConfig_Alignment() {}
// ********** End Class UCogAbilityConfig_Alignment ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityConfig_Alignment_h__Script_CogAbility_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogAbilityConfig_Alignment, UCogAbilityConfig_Alignment::StaticClass, TEXT("UCogAbilityConfig_Alignment"), &Z_Registration_Info_UClass_UCogAbilityConfig_Alignment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogAbilityConfig_Alignment), 1596213327U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityConfig_Alignment_h__Script_CogAbility_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityConfig_Alignment_h__Script_CogAbility_2803317256{
	TEXT("/Script/CogAbility"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityConfig_Alignment_h__Script_CogAbility_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityConfig_Alignment_h__Script_CogAbility_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
