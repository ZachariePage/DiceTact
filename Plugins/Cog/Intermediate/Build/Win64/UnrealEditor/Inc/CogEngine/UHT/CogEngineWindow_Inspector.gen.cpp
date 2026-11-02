// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_Inspector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_Inspector() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_Inspector();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_Inspector_NoRegister();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogEngineConfig_Inspector ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineConfig_Inspector;
UClass* UCogEngineConfig_Inspector::GetPrivateStaticClass()
{
	using TClass = UCogEngineConfig_Inspector;
	if (!Z_Registration_Info_UClass_UCogEngineConfig_Inspector.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineConfig_Inspector"),
			Z_Registration_Info_UClass_UCogEngineConfig_Inspector.InnerSingleton,
			StaticRegisterNativesUCogEngineConfig_Inspector,
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
	return Z_Registration_Info_UClass_UCogEngineConfig_Inspector.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineConfig_Inspector_NoRegister()
{
	return UCogEngineConfig_Inspector::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineConfig_Inspector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_Inspector.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_Inspector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSyncWithSelection_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Inspector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Inspector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowRowBackground_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Inspector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowBorders_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Inspector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowCategories_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Inspector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSortByName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Inspector.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineConfig_Inspector constinit property declarations ***************
	static void NewProp_bSyncWithSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncWithSelection;
	static void NewProp_bShowDisplayName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDisplayName;
	static void NewProp_bShowRowBackground_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRowBackground;
	static void NewProp_bShowBorders_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBorders;
	static void NewProp_bShowCategories_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCategories;
	static void NewProp_bSortByName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortByName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineConfig_Inspector constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineConfig_Inspector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineConfig_Inspector_Statics

// ********** Begin Class UCogEngineConfig_Inspector Property Definitions **************************
void Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bSyncWithSelection_SetBit(void* Obj)
{
	((UCogEngineConfig_Inspector*)Obj)->bSyncWithSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bSyncWithSelection = { "bSyncWithSelection", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Inspector), &Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bSyncWithSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSyncWithSelection_MetaData), NewProp_bSyncWithSelection_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bShowDisplayName_SetBit(void* Obj)
{
	((UCogEngineConfig_Inspector*)Obj)->bShowDisplayName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bShowDisplayName = { "bShowDisplayName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Inspector), &Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bShowDisplayName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDisplayName_MetaData), NewProp_bShowDisplayName_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bShowRowBackground_SetBit(void* Obj)
{
	((UCogEngineConfig_Inspector*)Obj)->bShowRowBackground = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bShowRowBackground = { "bShowRowBackground", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Inspector), &Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bShowRowBackground_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowRowBackground_MetaData), NewProp_bShowRowBackground_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bShowBorders_SetBit(void* Obj)
{
	((UCogEngineConfig_Inspector*)Obj)->bShowBorders = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bShowBorders = { "bShowBorders", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Inspector), &Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bShowBorders_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowBorders_MetaData), NewProp_bShowBorders_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bShowCategories_SetBit(void* Obj)
{
	((UCogEngineConfig_Inspector*)Obj)->bShowCategories = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bShowCategories = { "bShowCategories", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Inspector), &Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bShowCategories_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowCategories_MetaData), NewProp_bShowCategories_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bSortByName_SetBit(void* Obj)
{
	((UCogEngineConfig_Inspector*)Obj)->bSortByName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bSortByName = { "bSortByName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Inspector), &Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bSortByName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSortByName_MetaData), NewProp_bSortByName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bSyncWithSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bShowDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bShowRowBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bShowBorders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bShowCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::NewProp_bSortByName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineConfig_Inspector Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::ClassParams = {
	&UCogEngineConfig_Inspector::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::Class_MetaDataParams)
};
void UCogEngineConfig_Inspector::StaticRegisterNativesUCogEngineConfig_Inspector()
{
}
UClass* Z_Construct_UClass_UCogEngineConfig_Inspector()
{
	if (!Z_Registration_Info_UClass_UCogEngineConfig_Inspector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineConfig_Inspector.OuterSingleton, Z_Construct_UClass_UCogEngineConfig_Inspector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineConfig_Inspector.OuterSingleton;
}
UCogEngineConfig_Inspector::UCogEngineConfig_Inspector() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineConfig_Inspector);
UCogEngineConfig_Inspector::~UCogEngineConfig_Inspector() {}
// ********** End Class UCogEngineConfig_Inspector *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Inspector_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineConfig_Inspector, UCogEngineConfig_Inspector::StaticClass, TEXT("UCogEngineConfig_Inspector"), &Z_Registration_Info_UClass_UCogEngineConfig_Inspector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineConfig_Inspector), 516866514U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Inspector_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Inspector_h__Script_CogEngine_691139248{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Inspector_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Inspector_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
