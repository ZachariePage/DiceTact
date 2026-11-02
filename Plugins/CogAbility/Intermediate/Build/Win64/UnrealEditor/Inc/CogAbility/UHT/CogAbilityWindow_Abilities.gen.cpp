// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogAbilityWindow_Abilities.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogAbilityWindow_Abilities() {}

// ********** Begin Cross Module References ********************************************************
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityConfig_Abilities();
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityConfig_Abilities_NoRegister();
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
UPackage* Z_Construct_UPackage__Script_CogAbility();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogAbilityConfig_Abilities **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogAbilityConfig_Abilities;
UClass* UCogAbilityConfig_Abilities::GetPrivateStaticClass()
{
	using TClass = UCogAbilityConfig_Abilities;
	if (!Z_Registration_Info_UClass_UCogAbilityConfig_Abilities.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAbilityConfig_Abilities"),
			Z_Registration_Info_UClass_UCogAbilityConfig_Abilities.InnerSingleton,
			StaticRegisterNativesUCogAbilityConfig_Abilities,
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
	return Z_Registration_Info_UClass_UCogAbilityConfig_Abilities.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogAbilityConfig_Abilities_NoRegister()
{
	return UCogAbilityConfig_Abilities::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogAbilityWindow_Abilities.h" },
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Abilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortByName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Abilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Abilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowInactive_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Abilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Abilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowBlocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Abilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAbilityColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Abilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveAbilityColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Abilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockedAbilityColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Abilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTagsColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Abilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockedTagsColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Abilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPressedColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Abilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogAbilityConfig_Abilities constinit property declarations **************
	static void NewProp_SortByName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SortByName;
	static void NewProp_ShowActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowActive;
	static void NewProp_ShowInactive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowInactive;
	static void NewProp_ShowPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowPressed;
	static void NewProp_ShowBlocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowBlocked;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveAbilityColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InactiveAbilityColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedAbilityColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTagsColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedTagsColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputPressedColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogAbilityConfig_Abilities constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogAbilityConfig_Abilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics

// ********** Begin Class UCogAbilityConfig_Abilities Property Definitions *************************
void Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_SortByName_SetBit(void* Obj)
{
	((UCogAbilityConfig_Abilities*)Obj)->SortByName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_SortByName = { "SortByName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Abilities), &Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_SortByName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortByName_MetaData), NewProp_SortByName_MetaData) };
void Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ShowActive_SetBit(void* Obj)
{
	((UCogAbilityConfig_Abilities*)Obj)->ShowActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ShowActive = { "ShowActive", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Abilities), &Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ShowActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowActive_MetaData), NewProp_ShowActive_MetaData) };
void Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ShowInactive_SetBit(void* Obj)
{
	((UCogAbilityConfig_Abilities*)Obj)->ShowInactive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ShowInactive = { "ShowInactive", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Abilities), &Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ShowInactive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowInactive_MetaData), NewProp_ShowInactive_MetaData) };
void Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ShowPressed_SetBit(void* Obj)
{
	((UCogAbilityConfig_Abilities*)Obj)->ShowPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ShowPressed = { "ShowPressed", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Abilities), &Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ShowPressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowPressed_MetaData), NewProp_ShowPressed_MetaData) };
void Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ShowBlocked_SetBit(void* Obj)
{
	((UCogAbilityConfig_Abilities*)Obj)->ShowBlocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ShowBlocked = { "ShowBlocked", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Abilities), &Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ShowBlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowBlocked_MetaData), NewProp_ShowBlocked_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ActiveAbilityColor = { "ActiveAbilityColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Abilities, ActiveAbilityColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveAbilityColor_MetaData), NewProp_ActiveAbilityColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_InactiveAbilityColor = { "InactiveAbilityColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Abilities, InactiveAbilityColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveAbilityColor_MetaData), NewProp_InactiveAbilityColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_BlockedAbilityColor = { "BlockedAbilityColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Abilities, BlockedAbilityColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockedAbilityColor_MetaData), NewProp_BlockedAbilityColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_DefaultTagsColor = { "DefaultTagsColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Abilities, DefaultTagsColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTagsColor_MetaData), NewProp_DefaultTagsColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_BlockedTagsColor = { "BlockedTagsColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Abilities, BlockedTagsColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockedTagsColor_MetaData), NewProp_BlockedTagsColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_InputPressedColor = { "InputPressedColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Abilities, InputPressedColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPressedColor_MetaData), NewProp_InputPressedColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_SortByName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ShowActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ShowInactive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ShowPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ShowBlocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_ActiveAbilityColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_InactiveAbilityColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_BlockedAbilityColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_DefaultTagsColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_BlockedTagsColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::NewProp_InputPressedColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::PropPointers) < 2048);
// ********** End Class UCogAbilityConfig_Abilities Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::ClassParams = {
	&UCogAbilityConfig_Abilities::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::Class_MetaDataParams)
};
void UCogAbilityConfig_Abilities::StaticRegisterNativesUCogAbilityConfig_Abilities()
{
}
UClass* Z_Construct_UClass_UCogAbilityConfig_Abilities()
{
	if (!Z_Registration_Info_UClass_UCogAbilityConfig_Abilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogAbilityConfig_Abilities.OuterSingleton, Z_Construct_UClass_UCogAbilityConfig_Abilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogAbilityConfig_Abilities.OuterSingleton;
}
UCogAbilityConfig_Abilities::UCogAbilityConfig_Abilities() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogAbilityConfig_Abilities);
UCogAbilityConfig_Abilities::~UCogAbilityConfig_Abilities() {}
// ********** End Class UCogAbilityConfig_Abilities ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Abilities_h__Script_CogAbility_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogAbilityConfig_Abilities, UCogAbilityConfig_Abilities::StaticClass, TEXT("UCogAbilityConfig_Abilities"), &Z_Registration_Info_UClass_UCogAbilityConfig_Abilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogAbilityConfig_Abilities), 1567927660U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Abilities_h__Script_CogAbility_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Abilities_h__Script_CogAbility_1311554616{
	TEXT("/Script/CogAbility"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Abilities_h__Script_CogAbility_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Abilities_h__Script_CogAbility_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
