// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogCommonUI_ActionRouter.h"
#include "Engine/LocalPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogCommonUI_ActionRouter() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMONUI_API UClass* Z_Construct_UClass_UCogCommonUI_ActionRouter();
COGCOMMONUI_API UClass* Z_Construct_UClass_UCogCommonUI_ActionRouter_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonUIActionRouterBase();
UPackage* Z_Construct_UPackage__Script_CogCommonUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogCommonUI_ActionRouter ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogCommonUI_ActionRouter;
UClass* UCogCommonUI_ActionRouter::GetPrivateStaticClass()
{
	using TClass = UCogCommonUI_ActionRouter;
	if (!Z_Registration_Info_UClass_UCogCommonUI_ActionRouter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogCommonUI_ActionRouter"),
			Z_Registration_Info_UClass_UCogCommonUI_ActionRouter.InnerSingleton,
			StaticRegisterNativesUCogCommonUI_ActionRouter,
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
	return Z_Registration_Info_UClass_UCogCommonUI_ActionRouter.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogCommonUI_ActionRouter_NoRegister()
{
	return UCogCommonUI_ActionRouter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogCommonUI_ActionRouter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CogCommonUI_ActionRouter.h" },
		{ "ModuleRelativePath", "Public/CogCommonUI_ActionRouter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogCommonUI_ActionRouter constinit property declarations ****************
// ********** End Class UCogCommonUI_ActionRouter constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogCommonUI_ActionRouter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogCommonUI_ActionRouter_Statics
UObject* (*const Z_Construct_UClass_UCogCommonUI_ActionRouter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUIActionRouterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CogCommonUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogCommonUI_ActionRouter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogCommonUI_ActionRouter_Statics::ClassParams = {
	&UCogCommonUI_ActionRouter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogCommonUI_ActionRouter_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogCommonUI_ActionRouter_Statics::Class_MetaDataParams)
};
void UCogCommonUI_ActionRouter::StaticRegisterNativesUCogCommonUI_ActionRouter()
{
}
UClass* Z_Construct_UClass_UCogCommonUI_ActionRouter()
{
	if (!Z_Registration_Info_UClass_UCogCommonUI_ActionRouter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogCommonUI_ActionRouter.OuterSingleton, Z_Construct_UClass_UCogCommonUI_ActionRouter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogCommonUI_ActionRouter.OuterSingleton;
}
UCogCommonUI_ActionRouter::UCogCommonUI_ActionRouter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogCommonUI_ActionRouter);
UCogCommonUI_ActionRouter::~UCogCommonUI_ActionRouter() {}
// ********** End Class UCogCommonUI_ActionRouter **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogCommonUI_Source_CogCommonUI_Public_CogCommonUI_ActionRouter_h__Script_CogCommonUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogCommonUI_ActionRouter, UCogCommonUI_ActionRouter::StaticClass, TEXT("UCogCommonUI_ActionRouter"), &Z_Registration_Info_UClass_UCogCommonUI_ActionRouter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogCommonUI_ActionRouter), 1692536681U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogCommonUI_Source_CogCommonUI_Public_CogCommonUI_ActionRouter_h__Script_CogCommonUI_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogCommonUI_Source_CogCommonUI_Public_CogCommonUI_ActionRouter_h__Script_CogCommonUI_1187083313{
	TEXT("/Script/CogCommonUI"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogCommonUI_Source_CogCommonUI_Public_CogCommonUI_ActionRouter_h__Script_CogCommonUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogCommonUI_Source_CogCommonUI_Public_CogCommonUI_ActionRouter_h__Script_CogCommonUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
