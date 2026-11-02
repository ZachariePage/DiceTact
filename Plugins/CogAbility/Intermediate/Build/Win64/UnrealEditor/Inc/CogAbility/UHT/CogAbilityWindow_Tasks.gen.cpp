// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogAbilityWindow_Tasks.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogAbilityWindow_Tasks() {}

// ********** Begin Cross Module References ********************************************************
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityConfig_Tasks();
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityConfig_Tasks_NoRegister();
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
UPackage* Z_Construct_UPackage__Script_CogAbility();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogAbilityConfig_Tasks **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogAbilityConfig_Tasks;
UClass* UCogAbilityConfig_Tasks::GetPrivateStaticClass()
{
	using TClass = UCogAbilityConfig_Tasks;
	if (!Z_Registration_Info_UClass_UCogAbilityConfig_Tasks.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAbilityConfig_Tasks"),
			Z_Registration_Info_UClass_UCogAbilityConfig_Tasks.InnerSingleton,
			StaticRegisterNativesUCogAbilityConfig_Tasks,
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
	return Z_Registration_Info_UClass_UCogAbilityConfig_Tasks.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogAbilityConfig_Tasks_NoRegister()
{
	return UCogAbilityConfig_Tasks::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogAbilityWindow_Tasks.h" },
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortByName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowTicking_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowSimulating_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowUninitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowAwaitingActivation_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowPaused_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UninitializedColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AwaitingActivationColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PausedColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishedColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tasks.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogAbilityConfig_Tasks constinit property declarations ******************
	static void NewProp_SortByName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SortByName;
	static void NewProp_ShowTicking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowTicking;
	static void NewProp_ShowSimulating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowSimulating;
	static void NewProp_ShowUninitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowUninitialized;
	static void NewProp_ShowAwaitingActivation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowAwaitingActivation;
	static void NewProp_ShowActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowActive;
	static void NewProp_ShowPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowPaused;
	static void NewProp_ShowFinished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowFinished;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UninitializedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AwaitingActivationColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PausedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinishedColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogAbilityConfig_Tasks constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogAbilityConfig_Tasks>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics

// ********** Begin Class UCogAbilityConfig_Tasks Property Definitions *****************************
void Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_SortByName_SetBit(void* Obj)
{
	((UCogAbilityConfig_Tasks*)Obj)->SortByName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_SortByName = { "SortByName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Tasks), &Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_SortByName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortByName_MetaData), NewProp_SortByName_MetaData) };
void Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowTicking_SetBit(void* Obj)
{
	((UCogAbilityConfig_Tasks*)Obj)->ShowTicking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowTicking = { "ShowTicking", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Tasks), &Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowTicking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowTicking_MetaData), NewProp_ShowTicking_MetaData) };
void Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowSimulating_SetBit(void* Obj)
{
	((UCogAbilityConfig_Tasks*)Obj)->ShowSimulating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowSimulating = { "ShowSimulating", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Tasks), &Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowSimulating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowSimulating_MetaData), NewProp_ShowSimulating_MetaData) };
void Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowUninitialized_SetBit(void* Obj)
{
	((UCogAbilityConfig_Tasks*)Obj)->ShowUninitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowUninitialized = { "ShowUninitialized", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Tasks), &Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowUninitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowUninitialized_MetaData), NewProp_ShowUninitialized_MetaData) };
void Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowAwaitingActivation_SetBit(void* Obj)
{
	((UCogAbilityConfig_Tasks*)Obj)->ShowAwaitingActivation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowAwaitingActivation = { "ShowAwaitingActivation", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Tasks), &Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowAwaitingActivation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowAwaitingActivation_MetaData), NewProp_ShowAwaitingActivation_MetaData) };
void Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowActive_SetBit(void* Obj)
{
	((UCogAbilityConfig_Tasks*)Obj)->ShowActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowActive = { "ShowActive", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Tasks), &Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowActive_MetaData), NewProp_ShowActive_MetaData) };
void Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowPaused_SetBit(void* Obj)
{
	((UCogAbilityConfig_Tasks*)Obj)->ShowPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowPaused = { "ShowPaused", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Tasks), &Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowPaused_MetaData), NewProp_ShowPaused_MetaData) };
void Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowFinished_SetBit(void* Obj)
{
	((UCogAbilityConfig_Tasks*)Obj)->ShowFinished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowFinished = { "ShowFinished", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Tasks), &Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowFinished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowFinished_MetaData), NewProp_ShowFinished_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_UninitializedColor = { "UninitializedColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Tasks, UninitializedColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UninitializedColor_MetaData), NewProp_UninitializedColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_AwaitingActivationColor = { "AwaitingActivationColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Tasks, AwaitingActivationColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AwaitingActivationColor_MetaData), NewProp_AwaitingActivationColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ActiveColor = { "ActiveColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Tasks, ActiveColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveColor_MetaData), NewProp_ActiveColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_PausedColor = { "PausedColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Tasks, PausedColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PausedColor_MetaData), NewProp_PausedColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_FinishedColor = { "FinishedColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Tasks, FinishedColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishedColor_MetaData), NewProp_FinishedColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_SortByName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowTicking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowSimulating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowUninitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowAwaitingActivation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowPaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ShowFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_UninitializedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_AwaitingActivationColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_ActiveColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_PausedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::NewProp_FinishedColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::PropPointers) < 2048);
// ********** End Class UCogAbilityConfig_Tasks Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::ClassParams = {
	&UCogAbilityConfig_Tasks::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::Class_MetaDataParams)
};
void UCogAbilityConfig_Tasks::StaticRegisterNativesUCogAbilityConfig_Tasks()
{
}
UClass* Z_Construct_UClass_UCogAbilityConfig_Tasks()
{
	if (!Z_Registration_Info_UClass_UCogAbilityConfig_Tasks.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogAbilityConfig_Tasks.OuterSingleton, Z_Construct_UClass_UCogAbilityConfig_Tasks_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogAbilityConfig_Tasks.OuterSingleton;
}
UCogAbilityConfig_Tasks::UCogAbilityConfig_Tasks() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogAbilityConfig_Tasks);
UCogAbilityConfig_Tasks::~UCogAbilityConfig_Tasks() {}
// ********** End Class UCogAbilityConfig_Tasks ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Tasks_h__Script_CogAbility_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogAbilityConfig_Tasks, UCogAbilityConfig_Tasks::StaticClass, TEXT("UCogAbilityConfig_Tasks"), &Z_Registration_Info_UClass_UCogAbilityConfig_Tasks, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogAbilityConfig_Tasks), 1725170886U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Tasks_h__Script_CogAbility_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Tasks_h__Script_CogAbility_2777764286{
	TEXT("/Script/CogAbility"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Tasks_h__Script_CogAbility_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Tasks_h__Script_CogAbility_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
