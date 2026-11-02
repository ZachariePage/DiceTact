// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogAbilityWindow_Attributes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogAbilityWindow_Attributes() {}

// ********** Begin Cross Module References ********************************************************
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityConfig_Attributes();
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityConfig_Attributes_NoRegister();
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
UPackage* Z_Construct_UPackage__Script_CogAbility();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogAbilityConfig_Attributes *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogAbilityConfig_Attributes;
UClass* UCogAbilityConfig_Attributes::GetPrivateStaticClass()
{
	using TClass = UCogAbilityConfig_Attributes;
	if (!Z_Registration_Info_UClass_UCogAbilityConfig_Attributes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAbilityConfig_Attributes"),
			Z_Registration_Info_UClass_UCogAbilityConfig_Attributes.InnerSingleton,
			StaticRegisterNativesUCogAbilityConfig_Attributes,
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
	return Z_Registration_Info_UClass_UCogAbilityConfig_Attributes.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogAbilityConfig_Attributes_NoRegister()
{
	return UCogAbilityConfig_Attributes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogAbilityWindow_Attributes.h" },
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Attributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortByName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Attributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupByAttributeSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Attributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupByCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Attributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowOnlyModified_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Attributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetPrefixes_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Attributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Attributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Attributes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogAbilityConfig_Attributes constinit property declarations *************
	static void NewProp_SortByName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SortByName;
	static void NewProp_GroupByAttributeSet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GroupByAttributeSet;
	static void NewProp_GroupByCategory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GroupByCategory;
	static void NewProp_ShowOnlyModified_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowOnlyModified;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeSetPrefixes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeSetColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogAbilityConfig_Attributes constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogAbilityConfig_Attributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics

// ********** Begin Class UCogAbilityConfig_Attributes Property Definitions ************************
void Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_SortByName_SetBit(void* Obj)
{
	((UCogAbilityConfig_Attributes*)Obj)->SortByName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_SortByName = { "SortByName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Attributes), &Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_SortByName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortByName_MetaData), NewProp_SortByName_MetaData) };
void Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_GroupByAttributeSet_SetBit(void* Obj)
{
	((UCogAbilityConfig_Attributes*)Obj)->GroupByAttributeSet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_GroupByAttributeSet = { "GroupByAttributeSet", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Attributes), &Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_GroupByAttributeSet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupByAttributeSet_MetaData), NewProp_GroupByAttributeSet_MetaData) };
void Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_GroupByCategory_SetBit(void* Obj)
{
	((UCogAbilityConfig_Attributes*)Obj)->GroupByCategory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_GroupByCategory = { "GroupByCategory", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Attributes), &Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_GroupByCategory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupByCategory_MetaData), NewProp_GroupByCategory_MetaData) };
void Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_ShowOnlyModified_SetBit(void* Obj)
{
	((UCogAbilityConfig_Attributes*)Obj)->ShowOnlyModified = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_ShowOnlyModified = { "ShowOnlyModified", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Attributes), &Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_ShowOnlyModified_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowOnlyModified_MetaData), NewProp_ShowOnlyModified_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_AttributeSetPrefixes = { "AttributeSetPrefixes", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Attributes, AttributeSetPrefixes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetPrefixes_MetaData), NewProp_AttributeSetPrefixes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_CategoryColor = { "CategoryColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Attributes, CategoryColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryColor_MetaData), NewProp_CategoryColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_AttributeSetColor = { "AttributeSetColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityConfig_Attributes, AttributeSetColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetColor_MetaData), NewProp_AttributeSetColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_SortByName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_GroupByAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_GroupByCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_ShowOnlyModified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_AttributeSetPrefixes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_CategoryColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::NewProp_AttributeSetColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::PropPointers) < 2048);
// ********** End Class UCogAbilityConfig_Attributes Property Definitions **************************
UObject* (*const Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::ClassParams = {
	&UCogAbilityConfig_Attributes::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::Class_MetaDataParams)
};
void UCogAbilityConfig_Attributes::StaticRegisterNativesUCogAbilityConfig_Attributes()
{
}
UClass* Z_Construct_UClass_UCogAbilityConfig_Attributes()
{
	if (!Z_Registration_Info_UClass_UCogAbilityConfig_Attributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogAbilityConfig_Attributes.OuterSingleton, Z_Construct_UClass_UCogAbilityConfig_Attributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogAbilityConfig_Attributes.OuterSingleton;
}
UCogAbilityConfig_Attributes::UCogAbilityConfig_Attributes() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogAbilityConfig_Attributes);
UCogAbilityConfig_Attributes::~UCogAbilityConfig_Attributes() {}
// ********** End Class UCogAbilityConfig_Attributes ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Attributes_h__Script_CogAbility_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogAbilityConfig_Attributes, UCogAbilityConfig_Attributes::StaticClass, TEXT("UCogAbilityConfig_Attributes"), &Z_Registration_Info_UClass_UCogAbilityConfig_Attributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogAbilityConfig_Attributes), 742163539U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Attributes_h__Script_CogAbility_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Attributes_h__Script_CogAbility_1341288350{
	TEXT("/Script/CogAbility"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Attributes_h__Script_CogAbility_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Attributes_h__Script_CogAbility_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
