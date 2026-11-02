// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogAIWindow_Blackboard.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogAIWindow_Blackboard() {}

// ********** Begin Cross Module References ********************************************************
COGAI_API UClass* Z_Construct_UClass_UCogAIConfig_Blackboard();
COGAI_API UClass* Z_Construct_UClass_UCogAIConfig_Blackboard_NoRegister();
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
UPackage* Z_Construct_UPackage__Script_CogAI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogAIConfig_Blackboard **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogAIConfig_Blackboard;
UClass* UCogAIConfig_Blackboard::GetPrivateStaticClass()
{
	using TClass = UCogAIConfig_Blackboard;
	if (!Z_Registration_Info_UClass_UCogAIConfig_Blackboard.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAIConfig_Blackboard"),
			Z_Registration_Info_UClass_UCogAIConfig_Blackboard.InnerSingleton,
			StaticRegisterNativesUCogAIConfig_Blackboard,
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
	return Z_Registration_Info_UClass_UCogAIConfig_Blackboard.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogAIConfig_Blackboard_NoRegister()
{
	return UCogAIConfig_Blackboard::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogAIConfig_Blackboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogAIWindow_Blackboard.h" },
		{ "ModuleRelativePath", "Public/CogAIWindow_Blackboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSortByName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAIWindow_Blackboard.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogAIConfig_Blackboard constinit property declarations ******************
	static void NewProp_bSortByName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortByName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogAIConfig_Blackboard constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogAIConfig_Blackboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogAIConfig_Blackboard_Statics

// ********** Begin Class UCogAIConfig_Blackboard Property Definitions *****************************
void Z_Construct_UClass_UCogAIConfig_Blackboard_Statics::NewProp_bSortByName_SetBit(void* Obj)
{
	((UCogAIConfig_Blackboard*)Obj)->bSortByName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAIConfig_Blackboard_Statics::NewProp_bSortByName = { "bSortByName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAIConfig_Blackboard), &Z_Construct_UClass_UCogAIConfig_Blackboard_Statics::NewProp_bSortByName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSortByName_MetaData), NewProp_bSortByName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogAIConfig_Blackboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAIConfig_Blackboard_Statics::NewProp_bSortByName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAIConfig_Blackboard_Statics::PropPointers) < 2048);
// ********** End Class UCogAIConfig_Blackboard Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UCogAIConfig_Blackboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAIConfig_Blackboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogAIConfig_Blackboard_Statics::ClassParams = {
	&UCogAIConfig_Blackboard::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogAIConfig_Blackboard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogAIConfig_Blackboard_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAIConfig_Blackboard_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogAIConfig_Blackboard_Statics::Class_MetaDataParams)
};
void UCogAIConfig_Blackboard::StaticRegisterNativesUCogAIConfig_Blackboard()
{
}
UClass* Z_Construct_UClass_UCogAIConfig_Blackboard()
{
	if (!Z_Registration_Info_UClass_UCogAIConfig_Blackboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogAIConfig_Blackboard.OuterSingleton, Z_Construct_UClass_UCogAIConfig_Blackboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogAIConfig_Blackboard.OuterSingleton;
}
UCogAIConfig_Blackboard::UCogAIConfig_Blackboard() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogAIConfig_Blackboard);
UCogAIConfig_Blackboard::~UCogAIConfig_Blackboard() {}
// ********** End Class UCogAIConfig_Blackboard ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIWindow_Blackboard_h__Script_CogAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogAIConfig_Blackboard, UCogAIConfig_Blackboard::StaticClass, TEXT("UCogAIConfig_Blackboard"), &Z_Registration_Info_UClass_UCogAIConfig_Blackboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogAIConfig_Blackboard), 990356993U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIWindow_Blackboard_h__Script_CogAI_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIWindow_Blackboard_h__Script_CogAI_1007877434{
	TEXT("/Script/CogAI"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIWindow_Blackboard_h__Script_CogAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAI_Source_CogAI_Public_CogAIWindow_Blackboard_h__Script_CogAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
