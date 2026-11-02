// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_Selection.h"
#include "CogInputChord.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_Selection() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_Selection();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_Selection_NoRegister();
COGIMGUI_API UScriptStruct* Z_Construct_UScriptStruct_FCogInputChord();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogEngineConfig_Selection ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineConfig_Selection;
UClass* UCogEngineConfig_Selection::GetPrivateStaticClass()
{
	using TClass = UCogEngineConfig_Selection;
	if (!Z_Registration_Info_UClass_UCogEngineConfig_Selection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineConfig_Selection"),
			Z_Registration_Info_UClass_UCogEngineConfig_Selection.InnerSingleton,
			StaticRegisterNativesUCogEngineConfig_Selection,
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
	return Z_Registration_Info_UClass_UCogEngineConfig_Selection.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineConfig_Selection_NoRegister()
{
	return UCogEngineConfig_Selection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineConfig_Selection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_Selection.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_Selection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReapplySelection_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Selection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Selection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedClassIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Selection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shortcut_ToggleSelection_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Selection.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineConfig_Selection constinit property declarations ***************
	static void NewProp_bReapplySelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReapplySelection;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedClassIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcut_ToggleSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineConfig_Selection constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineConfig_Selection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineConfig_Selection_Statics

// ********** Begin Class UCogEngineConfig_Selection Property Definitions **************************
void Z_Construct_UClass_UCogEngineConfig_Selection_Statics::NewProp_bReapplySelection_SetBit(void* Obj)
{
	((UCogEngineConfig_Selection*)Obj)->bReapplySelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Selection_Statics::NewProp_bReapplySelection = { "bReapplySelection", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Selection), &Z_Construct_UClass_UCogEngineConfig_Selection_Statics::NewProp_bReapplySelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReapplySelection_MetaData), NewProp_bReapplySelection_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCogEngineConfig_Selection_Statics::NewProp_SelectionName = { "SelectionName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Selection, SelectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionName_MetaData), NewProp_SelectionName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_Selection_Statics::NewProp_SelectedClassIndex = { "SelectedClassIndex", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Selection, SelectedClassIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedClassIndex_MetaData), NewProp_SelectedClassIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_Selection_Statics::NewProp_Shortcut_ToggleSelection = { "Shortcut_ToggleSelection", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Selection, Shortcut_ToggleSelection), Z_Construct_UScriptStruct_FCogInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shortcut_ToggleSelection_MetaData), NewProp_Shortcut_ToggleSelection_MetaData) }; // 3035783925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineConfig_Selection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Selection_Statics::NewProp_bReapplySelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Selection_Statics::NewProp_SelectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Selection_Statics::NewProp_SelectedClassIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Selection_Statics::NewProp_Shortcut_ToggleSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Selection_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineConfig_Selection Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UCogEngineConfig_Selection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Selection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineConfig_Selection_Statics::ClassParams = {
	&UCogEngineConfig_Selection::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineConfig_Selection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Selection_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Selection_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineConfig_Selection_Statics::Class_MetaDataParams)
};
void UCogEngineConfig_Selection::StaticRegisterNativesUCogEngineConfig_Selection()
{
}
UClass* Z_Construct_UClass_UCogEngineConfig_Selection()
{
	if (!Z_Registration_Info_UClass_UCogEngineConfig_Selection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineConfig_Selection.OuterSingleton, Z_Construct_UClass_UCogEngineConfig_Selection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineConfig_Selection.OuterSingleton;
}
UCogEngineConfig_Selection::UCogEngineConfig_Selection() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineConfig_Selection);
UCogEngineConfig_Selection::~UCogEngineConfig_Selection() {}
// ********** End Class UCogEngineConfig_Selection *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Selection_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineConfig_Selection, UCogEngineConfig_Selection::StaticClass, TEXT("UCogEngineConfig_Selection"), &Z_Registration_Info_UClass_UCogEngineConfig_Selection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineConfig_Selection), 1994921086U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Selection_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Selection_h__Script_CogEngine_570678745{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Selection_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Selection_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
