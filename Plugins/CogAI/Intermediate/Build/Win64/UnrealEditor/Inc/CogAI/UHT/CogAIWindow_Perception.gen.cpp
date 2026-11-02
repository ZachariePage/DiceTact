// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogAIWindow_Perception.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogAIWindow_Perception() {}

// ********** Begin Cross Module References ********************************************************
COGAI_API UClass* Z_Construct_UClass_UCogAIConfig_Perception();
COGAI_API UClass* Z_Construct_UClass_UCogAIConfig_Perception_NoRegister();
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UPackage* Z_Construct_UPackage__Script_CogAI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogAIConfig_Perception **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogAIConfig_Perception;
UClass* UCogAIConfig_Perception::GetPrivateStaticClass()
{
	using TClass = UCogAIConfig_Perception;
	if (!Z_Registration_Info_UClass_UCogAIConfig_Perception.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAIConfig_Perception"),
			Z_Registration_Info_UClass_UCogAIConfig_Perception.InnerSingleton,
			StaticRegisterNativesUCogAIConfig_Perception,
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
	return Z_Registration_Info_UClass_UCogAIConfig_Perception.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogAIConfig_Perception_NoRegister()
{
	return UCogAIConfig_Perception::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogAIConfig_Perception_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CogAIWindow_Perception.h" },
		{ "ModuleRelativePath", "Public/CogAIWindow_Perception.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveColor_MetaData[] = {
		{ "Category", "CogAIConfig_Perception" },
		{ "ModuleRelativePath", "Public/CogAIWindow_Perception.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveColor_MetaData[] = {
		{ "Category", "CogAIConfig_Perception" },
		{ "ModuleRelativePath", "Public/CogAIWindow_Perception.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightSenseColor_MetaData[] = {
		{ "Category", "CogAIConfig_Perception" },
		{ "ModuleRelativePath", "Public/CogAIWindow_Perception.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingSenseColor_MetaData[] = {
		{ "Category", "CogAIConfig_Perception" },
		{ "ModuleRelativePath", "Public/CogAIWindow_Perception.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageSenseColor_MetaData[] = {
		{ "Category", "CogAIConfig_Perception" },
		{ "ModuleRelativePath", "Public/CogAIWindow_Perception.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchSenseColor_MetaData[] = {
		{ "Category", "CogAIConfig_Perception" },
		{ "ModuleRelativePath", "Public/CogAIWindow_Perception.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamSenseColor_MetaData[] = {
		{ "Category", "CogAIConfig_Perception" },
		{ "ModuleRelativePath", "Public/CogAIWindow_Perception.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictionSenseColor_MetaData[] = {
		{ "Category", "CogAIConfig_Perception" },
		{ "ModuleRelativePath", "Public/CogAIWindow_Perception.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSenseColor_MetaData[] = {
		{ "Category", "CogAIConfig_Perception" },
		{ "ModuleRelativePath", "Public/CogAIWindow_Perception.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogAIConfig_Perception constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InactiveColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SightSenseColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HearingSenseColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageSenseColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TouchSenseColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TeamSenseColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionSenseColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSenseColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogAIConfig_Perception constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogAIConfig_Perception>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogAIConfig_Perception_Statics

// ********** Begin Class UCogAIConfig_Perception Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_ActiveColor = { "ActiveColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAIConfig_Perception, ActiveColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveColor_MetaData), NewProp_ActiveColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_InactiveColor = { "InactiveColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAIConfig_Perception, InactiveColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveColor_MetaData), NewProp_InactiveColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_SightSenseColor = { "SightSenseColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAIConfig_Perception, SightSenseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightSenseColor_MetaData), NewProp_SightSenseColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_HearingSenseColor = { "HearingSenseColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAIConfig_Perception, HearingSenseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingSenseColor_MetaData), NewProp_HearingSenseColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_DamageSenseColor = { "DamageSenseColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAIConfig_Perception, DamageSenseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageSenseColor_MetaData), NewProp_DamageSenseColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_TouchSenseColor = { "TouchSenseColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAIConfig_Perception, TouchSenseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchSenseColor_MetaData), NewProp_TouchSenseColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_TeamSenseColor = { "TeamSenseColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAIConfig_Perception, TeamSenseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamSenseColor_MetaData), NewProp_TeamSenseColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_PredictionSenseColor = { "PredictionSenseColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAIConfig_Perception, PredictionSenseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictionSenseColor_MetaData), NewProp_PredictionSenseColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_DefaultSenseColor = { "DefaultSenseColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAIConfig_Perception, DefaultSenseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSenseColor_MetaData), NewProp_DefaultSenseColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogAIConfig_Perception_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_ActiveColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_InactiveColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_SightSenseColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_HearingSenseColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_DamageSenseColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_TouchSenseColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_TeamSenseColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_PredictionSenseColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAIConfig_Perception_Statics::NewProp_DefaultSenseColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAIConfig_Perception_Statics::PropPointers) < 2048);
// ********** End Class UCogAIConfig_Perception Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UCogAIConfig_Perception_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAIConfig_Perception_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogAIConfig_Perception_Statics::ClassParams = {
	&UCogAIConfig_Perception::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogAIConfig_Perception_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogAIConfig_Perception_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAIConfig_Perception_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogAIConfig_Perception_Statics::Class_MetaDataParams)
};
void UCogAIConfig_Perception::StaticRegisterNativesUCogAIConfig_Perception()
{
}
UClass* Z_Construct_UClass_UCogAIConfig_Perception()
{
	if (!Z_Registration_Info_UClass_UCogAIConfig_Perception.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogAIConfig_Perception.OuterSingleton, Z_Construct_UClass_UCogAIConfig_Perception_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogAIConfig_Perception.OuterSingleton;
}
UCogAIConfig_Perception::UCogAIConfig_Perception() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogAIConfig_Perception);
UCogAIConfig_Perception::~UCogAIConfig_Perception() {}
// ********** End Class UCogAIConfig_Perception ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIWindow_Perception_h__Script_CogAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogAIConfig_Perception, UCogAIConfig_Perception::StaticClass, TEXT("UCogAIConfig_Perception"), &Z_Registration_Info_UClass_UCogAIConfig_Perception, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogAIConfig_Perception), 2538009517U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIWindow_Perception_h__Script_CogAI_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIWindow_Perception_h__Script_CogAI_330503312{
	TEXT("/Script/CogAI"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIWindow_Perception_h__Script_CogAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIWindow_Perception_h__Script_CogAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
