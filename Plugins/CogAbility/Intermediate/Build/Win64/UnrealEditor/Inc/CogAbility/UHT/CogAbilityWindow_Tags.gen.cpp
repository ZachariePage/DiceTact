// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogAbilityWindow_Tags.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogAbilityWindow_Tags() {}

// ********** Begin Cross Module References ********************************************************
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityConfig_BlockedAbilitiesTags();
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityConfig_BlockedAbilitiesTags_NoRegister();
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityConfig_OwnedTags();
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityConfig_OwnedTags_NoRegister();
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityConfig_Tags();
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityConfig_Tags_NoRegister();
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
UPackage* Z_Construct_UPackage__Script_CogAbility();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogAbilityConfig_Tags ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogAbilityConfig_Tags;
UClass* UCogAbilityConfig_Tags::GetPrivateStaticClass()
{
	using TClass = UCogAbilityConfig_Tags;
	if (!Z_Registration_Info_UClass_UCogAbilityConfig_Tags.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAbilityConfig_Tags"),
			Z_Registration_Info_UClass_UCogAbilityConfig_Tags.InnerSingleton,
			StaticRegisterNativesUCogAbilityConfig_Tags,
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
	return Z_Registration_Info_UClass_UCogAbilityConfig_Tags.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogAbilityConfig_Tags_NoRegister()
{
	return UCogAbilityConfig_Tags::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogAbilityConfig_Tags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogAbilityWindow_Tags.h" },
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tags.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortByName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tags.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogAbilityConfig_Tags constinit property declarations *******************
	static void NewProp_SortByName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SortByName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogAbilityConfig_Tags constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogAbilityConfig_Tags>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogAbilityConfig_Tags_Statics

// ********** Begin Class UCogAbilityConfig_Tags Property Definitions ******************************
void Z_Construct_UClass_UCogAbilityConfig_Tags_Statics::NewProp_SortByName_SetBit(void* Obj)
{
	((UCogAbilityConfig_Tags*)Obj)->SortByName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogAbilityConfig_Tags_Statics::NewProp_SortByName = { "SortByName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogAbilityConfig_Tags), &Z_Construct_UClass_UCogAbilityConfig_Tags_Statics::NewProp_SortByName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortByName_MetaData), NewProp_SortByName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogAbilityConfig_Tags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityConfig_Tags_Statics::NewProp_SortByName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Tags_Statics::PropPointers) < 2048);
// ********** End Class UCogAbilityConfig_Tags Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UCogAbilityConfig_Tags_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Tags_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogAbilityConfig_Tags_Statics::ClassParams = {
	&UCogAbilityConfig_Tags::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogAbilityConfig_Tags_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Tags_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_Tags_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogAbilityConfig_Tags_Statics::Class_MetaDataParams)
};
void UCogAbilityConfig_Tags::StaticRegisterNativesUCogAbilityConfig_Tags()
{
}
UClass* Z_Construct_UClass_UCogAbilityConfig_Tags()
{
	if (!Z_Registration_Info_UClass_UCogAbilityConfig_Tags.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogAbilityConfig_Tags.OuterSingleton, Z_Construct_UClass_UCogAbilityConfig_Tags_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogAbilityConfig_Tags.OuterSingleton;
}
UCogAbilityConfig_Tags::UCogAbilityConfig_Tags() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogAbilityConfig_Tags);
UCogAbilityConfig_Tags::~UCogAbilityConfig_Tags() {}
// ********** End Class UCogAbilityConfig_Tags *****************************************************

// ********** Begin Class UCogAbilityConfig_OwnedTags **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogAbilityConfig_OwnedTags;
UClass* UCogAbilityConfig_OwnedTags::GetPrivateStaticClass()
{
	using TClass = UCogAbilityConfig_OwnedTags;
	if (!Z_Registration_Info_UClass_UCogAbilityConfig_OwnedTags.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAbilityConfig_OwnedTags"),
			Z_Registration_Info_UClass_UCogAbilityConfig_OwnedTags.InnerSingleton,
			StaticRegisterNativesUCogAbilityConfig_OwnedTags,
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
	return Z_Registration_Info_UClass_UCogAbilityConfig_OwnedTags.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogAbilityConfig_OwnedTags_NoRegister()
{
	return UCogAbilityConfig_OwnedTags::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogAbilityConfig_OwnedTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogAbilityWindow_Tags.h" },
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tags.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogAbilityConfig_OwnedTags constinit property declarations **************
// ********** End Class UCogAbilityConfig_OwnedTags constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogAbilityConfig_OwnedTags>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogAbilityConfig_OwnedTags_Statics
UObject* (*const Z_Construct_UClass_UCogAbilityConfig_OwnedTags_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogAbilityConfig_Tags,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_OwnedTags_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogAbilityConfig_OwnedTags_Statics::ClassParams = {
	&UCogAbilityConfig_OwnedTags::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_OwnedTags_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogAbilityConfig_OwnedTags_Statics::Class_MetaDataParams)
};
void UCogAbilityConfig_OwnedTags::StaticRegisterNativesUCogAbilityConfig_OwnedTags()
{
}
UClass* Z_Construct_UClass_UCogAbilityConfig_OwnedTags()
{
	if (!Z_Registration_Info_UClass_UCogAbilityConfig_OwnedTags.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogAbilityConfig_OwnedTags.OuterSingleton, Z_Construct_UClass_UCogAbilityConfig_OwnedTags_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogAbilityConfig_OwnedTags.OuterSingleton;
}
UCogAbilityConfig_OwnedTags::UCogAbilityConfig_OwnedTags() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogAbilityConfig_OwnedTags);
UCogAbilityConfig_OwnedTags::~UCogAbilityConfig_OwnedTags() {}
// ********** End Class UCogAbilityConfig_OwnedTags ************************************************

// ********** Begin Class UCogAbilityConfig_BlockedAbilitiesTags ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogAbilityConfig_BlockedAbilitiesTags;
UClass* UCogAbilityConfig_BlockedAbilitiesTags::GetPrivateStaticClass()
{
	using TClass = UCogAbilityConfig_BlockedAbilitiesTags;
	if (!Z_Registration_Info_UClass_UCogAbilityConfig_BlockedAbilitiesTags.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAbilityConfig_BlockedAbilitiesTags"),
			Z_Registration_Info_UClass_UCogAbilityConfig_BlockedAbilitiesTags.InnerSingleton,
			StaticRegisterNativesUCogAbilityConfig_BlockedAbilitiesTags,
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
	return Z_Registration_Info_UClass_UCogAbilityConfig_BlockedAbilitiesTags.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogAbilityConfig_BlockedAbilitiesTags_NoRegister()
{
	return UCogAbilityConfig_BlockedAbilitiesTags::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogAbilityConfig_BlockedAbilitiesTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogAbilityWindow_Tags.h" },
		{ "ModuleRelativePath", "Public/CogAbilityWindow_Tags.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogAbilityConfig_BlockedAbilitiesTags constinit property declarations ***
// ********** End Class UCogAbilityConfig_BlockedAbilitiesTags constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogAbilityConfig_BlockedAbilitiesTags>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogAbilityConfig_BlockedAbilitiesTags_Statics
UObject* (*const Z_Construct_UClass_UCogAbilityConfig_BlockedAbilitiesTags_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogAbilityConfig_Tags,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_BlockedAbilitiesTags_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogAbilityConfig_BlockedAbilitiesTags_Statics::ClassParams = {
	&UCogAbilityConfig_BlockedAbilitiesTags::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityConfig_BlockedAbilitiesTags_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogAbilityConfig_BlockedAbilitiesTags_Statics::Class_MetaDataParams)
};
void UCogAbilityConfig_BlockedAbilitiesTags::StaticRegisterNativesUCogAbilityConfig_BlockedAbilitiesTags()
{
}
UClass* Z_Construct_UClass_UCogAbilityConfig_BlockedAbilitiesTags()
{
	if (!Z_Registration_Info_UClass_UCogAbilityConfig_BlockedAbilitiesTags.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogAbilityConfig_BlockedAbilitiesTags.OuterSingleton, Z_Construct_UClass_UCogAbilityConfig_BlockedAbilitiesTags_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogAbilityConfig_BlockedAbilitiesTags.OuterSingleton;
}
UCogAbilityConfig_BlockedAbilitiesTags::UCogAbilityConfig_BlockedAbilitiesTags() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogAbilityConfig_BlockedAbilitiesTags);
UCogAbilityConfig_BlockedAbilitiesTags::~UCogAbilityConfig_BlockedAbilitiesTags() {}
// ********** End Class UCogAbilityConfig_BlockedAbilitiesTags *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Tags_h__Script_CogAbility_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogAbilityConfig_Tags, UCogAbilityConfig_Tags::StaticClass, TEXT("UCogAbilityConfig_Tags"), &Z_Registration_Info_UClass_UCogAbilityConfig_Tags, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogAbilityConfig_Tags), 3994449773U) },
		{ Z_Construct_UClass_UCogAbilityConfig_OwnedTags, UCogAbilityConfig_OwnedTags::StaticClass, TEXT("UCogAbilityConfig_OwnedTags"), &Z_Registration_Info_UClass_UCogAbilityConfig_OwnedTags, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogAbilityConfig_OwnedTags), 3831623360U) },
		{ Z_Construct_UClass_UCogAbilityConfig_BlockedAbilitiesTags, UCogAbilityConfig_BlockedAbilitiesTags::StaticClass, TEXT("UCogAbilityConfig_BlockedAbilitiesTags"), &Z_Registration_Info_UClass_UCogAbilityConfig_BlockedAbilitiesTags, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogAbilityConfig_BlockedAbilitiesTags), 2128889808U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Tags_h__Script_CogAbility_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Tags_h__Script_CogAbility_3954982245{
	TEXT("/Script/CogAbility"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Tags_h__Script_CogAbility_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityWindow_Tags_h__Script_CogAbility_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
