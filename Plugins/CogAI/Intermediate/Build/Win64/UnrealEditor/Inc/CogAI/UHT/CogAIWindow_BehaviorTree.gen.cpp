// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogAIWindow_BehaviorTree.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogAIWindow_BehaviorTree() {}

// ********** Begin Cross Module References ********************************************************
COGAI_API UClass* Z_Construct_UClass_UCogAIConfig_BehaviorTree();
COGAI_API UClass* Z_Construct_UClass_UCogAIConfig_BehaviorTree_NoRegister();
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
UPackage* Z_Construct_UPackage__Script_CogAI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogAIConfig_BehaviorTree ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogAIConfig_BehaviorTree;
UClass* UCogAIConfig_BehaviorTree::GetPrivateStaticClass()
{
	using TClass = UCogAIConfig_BehaviorTree;
	if (!Z_Registration_Info_UClass_UCogAIConfig_BehaviorTree.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAIConfig_BehaviorTree"),
			Z_Registration_Info_UClass_UCogAIConfig_BehaviorTree.InnerSingleton,
			StaticRegisterNativesUCogAIConfig_BehaviorTree,
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
	return Z_Registration_Info_UClass_UCogAIConfig_BehaviorTree.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogAIConfig_BehaviorTree_NoRegister()
{
	return UCogAIConfig_BehaviorTree::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogAIConfig_BehaviorTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogAIWindow_BehaviorTree.h" },
		{ "ModuleRelativePath", "Public/CogAIWindow_BehaviorTree.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAIWindow_BehaviorTree.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAIWindow_BehaviorTree.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogAIConfig_BehaviorTree constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InactiveColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogAIConfig_BehaviorTree constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogAIConfig_BehaviorTree>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogAIConfig_BehaviorTree_Statics

// ********** Begin Class UCogAIConfig_BehaviorTree Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAIConfig_BehaviorTree_Statics::NewProp_ActiveColor = { "ActiveColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAIConfig_BehaviorTree, ActiveColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveColor_MetaData), NewProp_ActiveColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAIConfig_BehaviorTree_Statics::NewProp_InactiveColor = { "InactiveColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAIConfig_BehaviorTree, InactiveColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveColor_MetaData), NewProp_InactiveColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogAIConfig_BehaviorTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAIConfig_BehaviorTree_Statics::NewProp_ActiveColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAIConfig_BehaviorTree_Statics::NewProp_InactiveColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAIConfig_BehaviorTree_Statics::PropPointers) < 2048);
// ********** End Class UCogAIConfig_BehaviorTree Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UCogAIConfig_BehaviorTree_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAIConfig_BehaviorTree_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogAIConfig_BehaviorTree_Statics::ClassParams = {
	&UCogAIConfig_BehaviorTree::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogAIConfig_BehaviorTree_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogAIConfig_BehaviorTree_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAIConfig_BehaviorTree_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogAIConfig_BehaviorTree_Statics::Class_MetaDataParams)
};
void UCogAIConfig_BehaviorTree::StaticRegisterNativesUCogAIConfig_BehaviorTree()
{
}
UClass* Z_Construct_UClass_UCogAIConfig_BehaviorTree()
{
	if (!Z_Registration_Info_UClass_UCogAIConfig_BehaviorTree.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogAIConfig_BehaviorTree.OuterSingleton, Z_Construct_UClass_UCogAIConfig_BehaviorTree_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogAIConfig_BehaviorTree.OuterSingleton;
}
UCogAIConfig_BehaviorTree::UCogAIConfig_BehaviorTree() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogAIConfig_BehaviorTree);
UCogAIConfig_BehaviorTree::~UCogAIConfig_BehaviorTree() {}
// ********** End Class UCogAIConfig_BehaviorTree **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIWindow_BehaviorTree_h__Script_CogAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogAIConfig_BehaviorTree, UCogAIConfig_BehaviorTree::StaticClass, TEXT("UCogAIConfig_BehaviorTree"), &Z_Registration_Info_UClass_UCogAIConfig_BehaviorTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogAIConfig_BehaviorTree), 853381050U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIWindow_BehaviorTree_h__Script_CogAI_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIWindow_BehaviorTree_h__Script_CogAI_932468760{
	TEXT("/Script/CogAI"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIWindow_BehaviorTree_h__Script_CogAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIWindow_BehaviorTree_h__Script_CogAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
