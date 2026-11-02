// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_CollisionTester.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_CollisionTester() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_CollisionTester();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_CollisionTester_NoRegister();
COGENGINE_API UEnum* Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryBy();
COGENGINE_API UEnum* Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryShape();
COGENGINE_API UEnum* Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryTraceMode();
COGENGINE_API UEnum* Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryType();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogEngineConfig_CollisionTester *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineConfig_CollisionTester;
UClass* UCogEngineConfig_CollisionTester::GetPrivateStaticClass()
{
	using TClass = UCogEngineConfig_CollisionTester;
	if (!Z_Registration_Info_UClass_UCogEngineConfig_CollisionTester.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineConfig_CollisionTester"),
			Z_Registration_Info_UClass_UCogEngineConfig_CollisionTester.InnerSingleton,
			StaticRegisterNativesUCogEngineConfig_CollisionTester,
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
	return Z_Registration_Info_UClass_UCogEngineConfig_CollisionTester.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineConfig_CollisionTester_NoRegister()
{
	return UCogEngineConfig_CollisionTester::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_CollisionTester.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_By_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceComplex_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypesToQuery_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeExtent_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_CollisionTester.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineConfig_CollisionTester constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_By_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_By;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
	static void NewProp_TraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TraceComplex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectTypesToQuery;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeExtent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineConfig_CollisionTester constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineConfig_CollisionTester>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics

// ********** Begin Class UCogEngineConfig_CollisionTester Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_LocationStart = { "LocationStart", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionTester, LocationStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationStart_MetaData), NewProp_LocationStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_LocationEnd = { "LocationEnd", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionTester, LocationEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationEnd_MetaData), NewProp_LocationEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionTester, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionTester, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionTester, Type), Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1734674224
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionTester, Mode), Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryTraceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3061636650
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_By_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_By = { "By", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionTester, By), Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_By_MetaData), NewProp_By_MetaData) }; // 244142930
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionTester, Shape), Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) }; // 2646430762
void Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_TraceComplex_SetBit(void* Obj)
{
	((UCogEngineConfig_CollisionTester*)Obj)->TraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_TraceComplex = { "TraceComplex", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_CollisionTester), &Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_TraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceComplex_MetaData), NewProp_TraceComplex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_ObjectTypesToQuery = { "ObjectTypesToQuery", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionTester, ObjectTypesToQuery), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypesToQuery_MetaData), NewProp_ObjectTypesToQuery_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionTester, Channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) }; // 838391399
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_ProfileIndex = { "ProfileIndex", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionTester, ProfileIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileIndex_MetaData), NewProp_ProfileIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_ShapeExtent = { "ShapeExtent", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_CollisionTester, ShapeExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeExtent_MetaData), NewProp_ShapeExtent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_LocationStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_LocationEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_By_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_By,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_TraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_ObjectTypesToQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_ProfileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::NewProp_ShapeExtent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineConfig_CollisionTester Property Definitions **********************
UObject* (*const Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::ClassParams = {
	&UCogEngineConfig_CollisionTester::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::Class_MetaDataParams)
};
void UCogEngineConfig_CollisionTester::StaticRegisterNativesUCogEngineConfig_CollisionTester()
{
}
UClass* Z_Construct_UClass_UCogEngineConfig_CollisionTester()
{
	if (!Z_Registration_Info_UClass_UCogEngineConfig_CollisionTester.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineConfig_CollisionTester.OuterSingleton, Z_Construct_UClass_UCogEngineConfig_CollisionTester_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineConfig_CollisionTester.OuterSingleton;
}
UCogEngineConfig_CollisionTester::UCogEngineConfig_CollisionTester() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineConfig_CollisionTester);
UCogEngineConfig_CollisionTester::~UCogEngineConfig_CollisionTester() {}
// ********** End Class UCogEngineConfig_CollisionTester *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_CollisionTester_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineConfig_CollisionTester, UCogEngineConfig_CollisionTester::StaticClass, TEXT("UCogEngineConfig_CollisionTester"), &Z_Registration_Info_UClass_UCogEngineConfig_CollisionTester, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineConfig_CollisionTester), 2698085268U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_CollisionTester_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_CollisionTester_h__Script_CogEngine_1103147568{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_CollisionTester_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_CollisionTester_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
