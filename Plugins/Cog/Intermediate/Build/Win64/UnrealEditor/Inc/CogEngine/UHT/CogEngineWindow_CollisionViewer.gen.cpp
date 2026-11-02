// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_CollisionViewer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_CollisionViewer() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_CollisionViewer();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_CollisionViewer_NoRegister();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogEngineConfig_CollisionViewer *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineConfig_CollisionViewer;
UClass* UCogEngineConfig_CollisionViewer::GetPrivateStaticClass()
{
	using TClass = UCogEngineConfig_CollisionViewer;
	if (!Z_Registration_Info_UClass_UCogEngineConfig_CollisionViewer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineConfig_CollisionViewer"),
			Z_Registration_Info_UClass_UCogEngineConfig_CollisionViewer.InnerSingleton,
			StaticRegisterNativesUCogEngineConfig_CollisionViewer,
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
	return Z_Registration_Info_UClass_UCogEngineConfig_CollisionViewer.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineConfig_CollisionViewer_NoRegister()
{
	return UCogEngineConfig_CollisionViewer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_CollisionViewer.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypesToQuery_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryType_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryThickness_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseComplexCollisions_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowActorsNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionViewer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineConfig_CollisionViewer constinit property declarations *********
	static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectTypesToQuery;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_QueryDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_QueryThickness;
	static void NewProp_UseComplexCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseComplexCollisions;
	static void NewProp_ShowActorsNames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowActorsNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineConfig_CollisionViewer constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineConfig_CollisionViewer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics

// ********** Begin Class UCogEngineConfig_CollisionViewer Property Definitions ********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_ObjectTypesToQuery = { "ObjectTypesToQuery", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionViewer, ObjectTypesToQuery), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypesToQuery_MetaData), NewProp_ObjectTypesToQuery_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_ProfileIndex = { "ProfileIndex", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionViewer, ProfileIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileIndex_MetaData), NewProp_ProfileIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_QueryType = { "QueryType", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionViewer, QueryType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryType_MetaData), NewProp_QueryType_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_QueryDistance = { "QueryDistance", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionViewer, QueryDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryDistance_MetaData), NewProp_QueryDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_QueryThickness = { "QueryThickness", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionViewer, QueryThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryThickness_MetaData), NewProp_QueryThickness_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_UseComplexCollisions_SetBit(void* Obj)
{
	((UCogEngineConfig_CollisionViewer*)Obj)->UseComplexCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_UseComplexCollisions = { "UseComplexCollisions", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_CollisionViewer), &Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_UseComplexCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseComplexCollisions_MetaData), NewProp_UseComplexCollisions_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_ShowActorsNames_SetBit(void* Obj)
{
	((UCogEngineConfig_CollisionViewer*)Obj)->ShowActorsNames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_ShowActorsNames = { "ShowActorsNames", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_CollisionViewer), &Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_ShowActorsNames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowActorsNames_MetaData), NewProp_ShowActorsNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_ObjectTypesToQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_ProfileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_QueryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_QueryDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_QueryThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_UseComplexCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::NewProp_ShowActorsNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineConfig_CollisionViewer Property Definitions **********************
UObject* (*const Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::ClassParams = {
	&UCogEngineConfig_CollisionViewer::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::Class_MetaDataParams)
};
void UCogEngineConfig_CollisionViewer::StaticRegisterNativesUCogEngineConfig_CollisionViewer()
{
}
UClass* Z_Construct_UClass_UCogEngineConfig_CollisionViewer()
{
	if (!Z_Registration_Info_UClass_UCogEngineConfig_CollisionViewer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineConfig_CollisionViewer.OuterSingleton, Z_Construct_UClass_UCogEngineConfig_CollisionViewer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineConfig_CollisionViewer.OuterSingleton;
}
UCogEngineConfig_CollisionViewer::UCogEngineConfig_CollisionViewer() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineConfig_CollisionViewer);
UCogEngineConfig_CollisionViewer::~UCogEngineConfig_CollisionViewer() {}
// ********** End Class UCogEngineConfig_CollisionViewer *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_CollisionViewer_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineConfig_CollisionViewer, UCogEngineConfig_CollisionViewer::StaticClass, TEXT("UCogEngineConfig_CollisionViewer"), &Z_Registration_Info_UClass_UCogEngineConfig_CollisionViewer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineConfig_CollisionViewer), 3967838196U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_CollisionViewer_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_CollisionViewer_h__Script_CogEngine_3119924956{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_CollisionViewer_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_CollisionViewer_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
