// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_Levels.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_Levels() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_NoRegister();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogEngineWindowConfig_LevelLoader ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineWindowConfig_LevelLoader;
UClass* UCogEngineWindowConfig_LevelLoader::GetPrivateStaticClass()
{
	using TClass = UCogEngineWindowConfig_LevelLoader;
	if (!Z_Registration_Info_UClass_UCogEngineWindowConfig_LevelLoader.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineWindowConfig_LevelLoader"),
			Z_Registration_Info_UClass_UCogEngineWindowConfig_LevelLoader.InnerSingleton,
			StaticRegisterNativesUCogEngineWindowConfig_LevelLoader,
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
	return Z_Registration_Info_UClass_UCogEngineWindowConfig_LevelLoader.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_NoRegister()
{
	return UCogEngineWindowConfig_LevelLoader::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_Levels.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_Levels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortByName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Levels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Levels.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineWindowConfig_LevelLoader constinit property declarations *******
	static void NewProp_SortByName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SortByName;
	static void NewProp_ShowPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineWindowConfig_LevelLoader constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineWindowConfig_LevelLoader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics

// ********** Begin Class UCogEngineWindowConfig_LevelLoader Property Definitions ******************
void Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::NewProp_SortByName_SetBit(void* Obj)
{
	((UCogEngineWindowConfig_LevelLoader*)Obj)->SortByName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::NewProp_SortByName = { "SortByName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineWindowConfig_LevelLoader), &Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::NewProp_SortByName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortByName_MetaData), NewProp_SortByName_MetaData) };
void Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::NewProp_ShowPath_SetBit(void* Obj)
{
	((UCogEngineWindowConfig_LevelLoader*)Obj)->ShowPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::NewProp_ShowPath = { "ShowPath", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineWindowConfig_LevelLoader), &Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::NewProp_ShowPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowPath_MetaData), NewProp_ShowPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::NewProp_SortByName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::NewProp_ShowPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineWindowConfig_LevelLoader Property Definitions ********************
UObject* (*const Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::ClassParams = {
	&UCogEngineWindowConfig_LevelLoader::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::Class_MetaDataParams)
};
void UCogEngineWindowConfig_LevelLoader::StaticRegisterNativesUCogEngineWindowConfig_LevelLoader()
{
}
UClass* Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader()
{
	if (!Z_Registration_Info_UClass_UCogEngineWindowConfig_LevelLoader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineWindowConfig_LevelLoader.OuterSingleton, Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineWindowConfig_LevelLoader.OuterSingleton;
}
UCogEngineWindowConfig_LevelLoader::UCogEngineWindowConfig_LevelLoader() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineWindowConfig_LevelLoader);
UCogEngineWindowConfig_LevelLoader::~UCogEngineWindowConfig_LevelLoader() {}
// ********** End Class UCogEngineWindowConfig_LevelLoader *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Levels_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineWindowConfig_LevelLoader, UCogEngineWindowConfig_LevelLoader::StaticClass, TEXT("UCogEngineWindowConfig_LevelLoader"), &Z_Registration_Info_UClass_UCogEngineWindowConfig_LevelLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineWindowConfig_LevelLoader), 88763861U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Levels_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Levels_h__Script_CogEngine_3058959372{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Levels_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Levels_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
