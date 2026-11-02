// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_Cheats.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_Cheats() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_Cheats();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_Cheats_NoRegister();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogEngineConfig_Cheats **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineConfig_Cheats;
UClass* UCogEngineConfig_Cheats::GetPrivateStaticClass()
{
	using TClass = UCogEngineConfig_Cheats;
	if (!Z_Registration_Info_UClass_UCogEngineConfig_Cheats.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineConfig_Cheats"),
			Z_Registration_Info_UClass_UCogEngineConfig_Cheats.InnerSingleton,
			StaticRegisterNativesUCogEngineConfig_Cheats,
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
	return Z_Registration_Info_UClass_UCogEngineConfig_Cheats.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineConfig_Cheats_NoRegister()
{
	return UCogEngineConfig_Cheats::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineConfig_Cheats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_Cheats.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_Cheats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroupByCategories_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Cheats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReapplyCheatsBetweenPlays_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Cheats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReapplyCheatsBetweenLaunches_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Cheats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTwoColumns_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Cheats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppliedCheats_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Cheats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCategories_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Cheats.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineConfig_Cheats constinit property declarations ******************
	static void NewProp_bGroupByCategories_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupByCategories;
	static void NewProp_bReapplyCheatsBetweenPlays_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReapplyCheatsBetweenPlays;
	static void NewProp_bReapplyCheatsBetweenLaunches_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReapplyCheatsBetweenLaunches;
	static void NewProp_bUseTwoColumns_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTwoColumns;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppliedCheats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AppliedCheats;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedCategories_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_SelectedCategories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineConfig_Cheats constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineConfig_Cheats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineConfig_Cheats_Statics

// ********** Begin Class UCogEngineConfig_Cheats Property Definitions *****************************
void Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_bGroupByCategories_SetBit(void* Obj)
{
	((UCogEngineConfig_Cheats*)Obj)->bGroupByCategories = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_bGroupByCategories = { "bGroupByCategories", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Cheats), &Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_bGroupByCategories_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroupByCategories_MetaData), NewProp_bGroupByCategories_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_bReapplyCheatsBetweenPlays_SetBit(void* Obj)
{
	((UCogEngineConfig_Cheats*)Obj)->bReapplyCheatsBetweenPlays = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_bReapplyCheatsBetweenPlays = { "bReapplyCheatsBetweenPlays", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Cheats), &Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_bReapplyCheatsBetweenPlays_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReapplyCheatsBetweenPlays_MetaData), NewProp_bReapplyCheatsBetweenPlays_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_bReapplyCheatsBetweenLaunches_SetBit(void* Obj)
{
	((UCogEngineConfig_Cheats*)Obj)->bReapplyCheatsBetweenLaunches = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_bReapplyCheatsBetweenLaunches = { "bReapplyCheatsBetweenLaunches", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Cheats), &Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_bReapplyCheatsBetweenLaunches_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReapplyCheatsBetweenLaunches_MetaData), NewProp_bReapplyCheatsBetweenLaunches_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_bUseTwoColumns_SetBit(void* Obj)
{
	((UCogEngineConfig_Cheats*)Obj)->bUseTwoColumns = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_bUseTwoColumns = { "bUseTwoColumns", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Cheats), &Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_bUseTwoColumns_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTwoColumns_MetaData), NewProp_bUseTwoColumns_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_AppliedCheats_Inner = { "AppliedCheats", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_AppliedCheats = { "AppliedCheats", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Cheats, AppliedCheats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppliedCheats_MetaData), NewProp_AppliedCheats_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_SelectedCategories_ElementProp = { "SelectedCategories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_SelectedCategories = { "SelectedCategories", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Cheats, SelectedCategories), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedCategories_MetaData), NewProp_SelectedCategories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_bGroupByCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_bReapplyCheatsBetweenPlays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_bReapplyCheatsBetweenLaunches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_bUseTwoColumns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_AppliedCheats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_AppliedCheats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_SelectedCategories_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::NewProp_SelectedCategories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineConfig_Cheats Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::ClassParams = {
	&UCogEngineConfig_Cheats::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::Class_MetaDataParams)
};
void UCogEngineConfig_Cheats::StaticRegisterNativesUCogEngineConfig_Cheats()
{
}
UClass* Z_Construct_UClass_UCogEngineConfig_Cheats()
{
	if (!Z_Registration_Info_UClass_UCogEngineConfig_Cheats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineConfig_Cheats.OuterSingleton, Z_Construct_UClass_UCogEngineConfig_Cheats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineConfig_Cheats.OuterSingleton;
}
UCogEngineConfig_Cheats::UCogEngineConfig_Cheats() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineConfig_Cheats);
UCogEngineConfig_Cheats::~UCogEngineConfig_Cheats() {}
// ********** End Class UCogEngineConfig_Cheats ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Cheats_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineConfig_Cheats, UCogEngineConfig_Cheats::StaticClass, TEXT("UCogEngineConfig_Cheats"), &Z_Registration_Info_UClass_UCogEngineConfig_Cheats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineConfig_Cheats), 524471332U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Cheats_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Cheats_h__Script_CogEngine_2432924025{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Cheats_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Cheats_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
