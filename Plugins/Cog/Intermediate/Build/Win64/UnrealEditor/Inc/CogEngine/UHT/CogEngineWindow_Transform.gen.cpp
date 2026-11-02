// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_Transform.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_Transform() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_Transform();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_Transform_NoRegister();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogEngineConfig_Transform ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineConfig_Transform;
UClass* UCogEngineConfig_Transform::GetPrivateStaticClass()
{
	using TClass = UCogEngineConfig_Transform;
	if (!Z_Registration_Info_UClass_UCogEngineConfig_Transform.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineConfig_Transform"),
			Z_Registration_Info_UClass_UCogEngineConfig_Transform.InnerSingleton,
			StaticRegisterNativesUCogEngineConfig_Transform,
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
	return Z_Registration_Info_UClass_UCogEngineConfig_Transform.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineConfig_Transform_NoRegister()
{
	return UCogEngineConfig_Transform::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineConfig_Transform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_Transform.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_Transform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Transform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Transform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Transform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Transform.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineConfig_Transform constinit property declarations ***************
	static void NewProp_ShowGizmo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowGizmo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineConfig_Transform constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineConfig_Transform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineConfig_Transform_Statics

// ********** Begin Class UCogEngineConfig_Transform Property Definitions **************************
void Z_Construct_UClass_UCogEngineConfig_Transform_Statics::NewProp_ShowGizmo_SetBit(void* Obj)
{
	((UCogEngineConfig_Transform*)Obj)->ShowGizmo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Transform_Statics::NewProp_ShowGizmo = { "ShowGizmo", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Transform), &Z_Construct_UClass_UCogEngineConfig_Transform_Statics::NewProp_ShowGizmo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowGizmo_MetaData), NewProp_ShowGizmo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogEngineConfig_Transform_Statics::NewProp_LocationSpeed = { "LocationSpeed", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Transform, LocationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationSpeed_MetaData), NewProp_LocationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogEngineConfig_Transform_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Transform, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogEngineConfig_Transform_Statics::NewProp_ScaleSpeed = { "ScaleSpeed", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Transform, ScaleSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleSpeed_MetaData), NewProp_ScaleSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineConfig_Transform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Transform_Statics::NewProp_ShowGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Transform_Statics::NewProp_LocationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Transform_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Transform_Statics::NewProp_ScaleSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Transform_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineConfig_Transform Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UCogEngineConfig_Transform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Transform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineConfig_Transform_Statics::ClassParams = {
	&UCogEngineConfig_Transform::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineConfig_Transform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Transform_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Transform_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineConfig_Transform_Statics::Class_MetaDataParams)
};
void UCogEngineConfig_Transform::StaticRegisterNativesUCogEngineConfig_Transform()
{
}
UClass* Z_Construct_UClass_UCogEngineConfig_Transform()
{
	if (!Z_Registration_Info_UClass_UCogEngineConfig_Transform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineConfig_Transform.OuterSingleton, Z_Construct_UClass_UCogEngineConfig_Transform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineConfig_Transform.OuterSingleton;
}
UCogEngineConfig_Transform::UCogEngineConfig_Transform() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineConfig_Transform);
UCogEngineConfig_Transform::~UCogEngineConfig_Transform() {}
// ********** End Class UCogEngineConfig_Transform *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Transform_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineConfig_Transform, UCogEngineConfig_Transform::StaticClass, TEXT("UCogEngineConfig_Transform"), &Z_Registration_Info_UClass_UCogEngineConfig_Transform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineConfig_Transform), 1855289545U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Transform_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Transform_h__Script_CogEngine_55189803{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Transform_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Transform_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
