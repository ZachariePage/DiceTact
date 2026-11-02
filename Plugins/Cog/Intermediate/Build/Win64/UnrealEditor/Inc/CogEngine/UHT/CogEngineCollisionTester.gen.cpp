// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineCollisionTester.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineCollisionTester() {}

// ********** Begin Cross Module References ********************************************************
COGENGINE_API UClass* Z_Construct_UClass_ACogEngineCollisionTester();
COGENGINE_API UClass* Z_Construct_UClass_ACogEngineCollisionTester_NoRegister();
COGENGINE_API UEnum* Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryBy();
COGENGINE_API UEnum* Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryOverlapMode();
COGENGINE_API UEnum* Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryShape();
COGENGINE_API UEnum* Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryTraceMode();
COGENGINE_API UEnum* Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryType();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECogEngine_CollisionQueryType *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECogEngine_CollisionQueryType;
static UEnum* ECogEngine_CollisionQueryType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECogEngine_CollisionQueryType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECogEngine_CollisionQueryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryType, (UObject*)Z_Construct_UPackage__Script_CogEngine(), TEXT("ECogEngine_CollisionQueryType"));
	}
	return Z_Registration_Info_UEnum_ECogEngine_CollisionQueryType.OuterSingleton;
}
template<> COGENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogEngine_CollisionQueryType>()
{
	return ECogEngine_CollisionQueryType_StaticEnum();
}
struct Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "LineTrace.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "LineTrace.Name", "ECogEngine_CollisionQueryType::LineTrace" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
		{ "Overlap.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Overlap.Name", "ECogEngine_CollisionQueryType::Overlap" },
		{ "Sweep.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Sweep.Name", "ECogEngine_CollisionQueryType::Sweep" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECogEngine_CollisionQueryType::Overlap", (int64)ECogEngine_CollisionQueryType::Overlap },
		{ "ECogEngine_CollisionQueryType::LineTrace", (int64)ECogEngine_CollisionQueryType::LineTrace },
		{ "ECogEngine_CollisionQueryType::Sweep", (int64)ECogEngine_CollisionQueryType::Sweep },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CogEngine,
	nullptr,
	"ECogEngine_CollisionQueryType",
	"ECogEngine_CollisionQueryType",
	Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryType()
{
	if (!Z_Registration_Info_UEnum_ECogEngine_CollisionQueryType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECogEngine_CollisionQueryType.InnerSingleton, Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECogEngine_CollisionQueryType.InnerSingleton;
}
// ********** End Enum ECogEngine_CollisionQueryType ***********************************************

// ********** Begin Enum ECogEngine_CollisionQueryTraceMode ****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECogEngine_CollisionQueryTraceMode;
static UEnum* ECogEngine_CollisionQueryTraceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECogEngine_CollisionQueryTraceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECogEngine_CollisionQueryTraceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryTraceMode, (UObject*)Z_Construct_UPackage__Script_CogEngine(), TEXT("ECogEngine_CollisionQueryTraceMode"));
	}
	return Z_Registration_Info_UEnum_ECogEngine_CollisionQueryTraceMode.OuterSingleton;
}
template<> COGENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogEngine_CollisionQueryTraceMode>()
{
	return ECogEngine_CollisionQueryTraceMode_StaticEnum();
}
struct Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryTraceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
		{ "Multi.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Multi.Name", "ECogEngine_CollisionQueryTraceMode::Multi" },
		{ "Single.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Single.Name", "ECogEngine_CollisionQueryTraceMode::Single" },
		{ "Test.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Test.Name", "ECogEngine_CollisionQueryTraceMode::Test" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECogEngine_CollisionQueryTraceMode::Single", (int64)ECogEngine_CollisionQueryTraceMode::Single },
		{ "ECogEngine_CollisionQueryTraceMode::Multi", (int64)ECogEngine_CollisionQueryTraceMode::Multi },
		{ "ECogEngine_CollisionQueryTraceMode::Test", (int64)ECogEngine_CollisionQueryTraceMode::Test },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryTraceMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryTraceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CogEngine,
	nullptr,
	"ECogEngine_CollisionQueryTraceMode",
	"ECogEngine_CollisionQueryTraceMode",
	Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryTraceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryTraceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryTraceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryTraceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryTraceMode()
{
	if (!Z_Registration_Info_UEnum_ECogEngine_CollisionQueryTraceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECogEngine_CollisionQueryTraceMode.InnerSingleton, Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryTraceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECogEngine_CollisionQueryTraceMode.InnerSingleton;
}
// ********** End Enum ECogEngine_CollisionQueryTraceMode ******************************************

// ********** Begin Enum ECogEngine_CollisionQueryOverlapMode **************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECogEngine_CollisionQueryOverlapMode;
static UEnum* ECogEngine_CollisionQueryOverlapMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECogEngine_CollisionQueryOverlapMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECogEngine_CollisionQueryOverlapMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryOverlapMode, (UObject*)Z_Construct_UPackage__Script_CogEngine(), TEXT("ECogEngine_CollisionQueryOverlapMode"));
	}
	return Z_Registration_Info_UEnum_ECogEngine_CollisionQueryOverlapMode.OuterSingleton;
}
template<> COGENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogEngine_CollisionQueryOverlapMode>()
{
	return ECogEngine_CollisionQueryOverlapMode_StaticEnum();
}
struct Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryOverlapMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnyTest.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "AnyTest.Name", "ECogEngine_CollisionQueryOverlapMode::AnyTest" },
		{ "BlockingTest.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "BlockingTest.Name", "ECogEngine_CollisionQueryOverlapMode::BlockingTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
		{ "Multi.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Multi.Name", "ECogEngine_CollisionQueryOverlapMode::Multi" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECogEngine_CollisionQueryOverlapMode::AnyTest", (int64)ECogEngine_CollisionQueryOverlapMode::AnyTest },
		{ "ECogEngine_CollisionQueryOverlapMode::BlockingTest", (int64)ECogEngine_CollisionQueryOverlapMode::BlockingTest },
		{ "ECogEngine_CollisionQueryOverlapMode::Multi", (int64)ECogEngine_CollisionQueryOverlapMode::Multi },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryOverlapMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryOverlapMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CogEngine,
	nullptr,
	"ECogEngine_CollisionQueryOverlapMode",
	"ECogEngine_CollisionQueryOverlapMode",
	Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryOverlapMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryOverlapMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryOverlapMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryOverlapMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryOverlapMode()
{
	if (!Z_Registration_Info_UEnum_ECogEngine_CollisionQueryOverlapMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECogEngine_CollisionQueryOverlapMode.InnerSingleton, Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryOverlapMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECogEngine_CollisionQueryOverlapMode.InnerSingleton;
}
// ********** End Enum ECogEngine_CollisionQueryOverlapMode ****************************************

// ********** Begin Enum ECogEngine_CollisionQueryBy ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECogEngine_CollisionQueryBy;
static UEnum* ECogEngine_CollisionQueryBy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECogEngine_CollisionQueryBy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECogEngine_CollisionQueryBy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryBy, (UObject*)Z_Construct_UPackage__Script_CogEngine(), TEXT("ECogEngine_CollisionQueryBy"));
	}
	return Z_Registration_Info_UEnum_ECogEngine_CollisionQueryBy.OuterSingleton;
}
template<> COGENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogEngine_CollisionQueryBy>()
{
	return ECogEngine_CollisionQueryBy_StaticEnum();
}
struct Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryBy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Channel.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Channel.Name", "ECogEngine_CollisionQueryBy::Channel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
		{ "ObjectType.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "ObjectType.Name", "ECogEngine_CollisionQueryBy::ObjectType" },
		{ "Profile.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Profile.Name", "ECogEngine_CollisionQueryBy::Profile" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECogEngine_CollisionQueryBy::Channel", (int64)ECogEngine_CollisionQueryBy::Channel },
		{ "ECogEngine_CollisionQueryBy::ObjectType", (int64)ECogEngine_CollisionQueryBy::ObjectType },
		{ "ECogEngine_CollisionQueryBy::Profile", (int64)ECogEngine_CollisionQueryBy::Profile },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryBy_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryBy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CogEngine,
	nullptr,
	"ECogEngine_CollisionQueryBy",
	"ECogEngine_CollisionQueryBy",
	Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryBy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryBy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryBy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryBy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryBy()
{
	if (!Z_Registration_Info_UEnum_ECogEngine_CollisionQueryBy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECogEngine_CollisionQueryBy.InnerSingleton, Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryBy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECogEngine_CollisionQueryBy.InnerSingleton;
}
// ********** End Enum ECogEngine_CollisionQueryBy *************************************************

// ********** Begin Enum ECogEngine_CollisionQueryShape ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECogEngine_CollisionQueryShape;
static UEnum* ECogEngine_CollisionQueryShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECogEngine_CollisionQueryShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECogEngine_CollisionQueryShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryShape, (UObject*)Z_Construct_UPackage__Script_CogEngine(), TEXT("ECogEngine_CollisionQueryShape"));
	}
	return Z_Registration_Info_UEnum_ECogEngine_CollisionQueryShape.OuterSingleton;
}
template<> COGENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogEngine_CollisionQueryShape>()
{
	return ECogEngine_CollisionQueryShape_StaticEnum();
}
struct Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Box.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Box.Name", "ECogEngine_CollisionQueryShape::Box" },
		{ "Capsule.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Capsule.Name", "ECogEngine_CollisionQueryShape::Capsule" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
		{ "Sphere.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Sphere.Name", "ECogEngine_CollisionQueryShape::Sphere" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECogEngine_CollisionQueryShape::Sphere", (int64)ECogEngine_CollisionQueryShape::Sphere },
		{ "ECogEngine_CollisionQueryShape::Box", (int64)ECogEngine_CollisionQueryShape::Box },
		{ "ECogEngine_CollisionQueryShape::Capsule", (int64)ECogEngine_CollisionQueryShape::Capsule },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryShape_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CogEngine,
	nullptr,
	"ECogEngine_CollisionQueryShape",
	"ECogEngine_CollisionQueryShape",
	Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryShape()
{
	if (!Z_Registration_Info_UEnum_ECogEngine_CollisionQueryShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECogEngine_CollisionQueryShape.InnerSingleton, Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECogEngine_CollisionQueryShape.InnerSingleton;
}
// ********** End Enum ECogEngine_CollisionQueryShape **********************************************

// ********** Begin Class ACogEngineCollisionTester ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACogEngineCollisionTester;
UClass* ACogEngineCollisionTester::GetPrivateStaticClass()
{
	using TClass = ACogEngineCollisionTester;
	if (!Z_Registration_Info_UClass_ACogEngineCollisionTester.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineCollisionTester"),
			Z_Registration_Info_UClass_ACogEngineCollisionTester.InnerSingleton,
			StaticRegisterNativesACogEngineCollisionTester,
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
	return Z_Registration_Info_UClass_ACogEngineCollisionTester.InnerSingleton;
}
UClass* Z_Construct_UClass_ACogEngineCollisionTester_NoRegister()
{
	return ACogEngineCollisionTester::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACogEngineCollisionTester_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineCollisionTester.h" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickInEditor_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceMode_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapMode_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_By_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceComplex_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypesToQuery_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeExtent_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawHitLocations_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawHitImpactPoints_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawHitShapes_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawHitNormals_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawHitImpactNormals_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawHitPrimitives_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawHitActorsNames_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitPointSize_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoHitColor_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitColor_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalColor_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactNormalColor_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartComponent_MetaData[] = {
		{ "Category", "Cog" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndComponent_MetaData[] = {
		{ "Category", "Cog" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CogEngineCollisionTester.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ACogEngineCollisionTester constinit property declarations ****************
	static void NewProp_TickInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TickInEditor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TraceMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverlapMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OverlapMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_By_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_By;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
	static void NewProp_TraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TraceComplex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectTypesToQuery;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeExtent;
	static void NewProp_DrawHitLocations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawHitLocations;
	static void NewProp_DrawHitImpactPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawHitImpactPoints;
	static void NewProp_DrawHitShapes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawHitShapes;
	static void NewProp_DrawHitNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawHitNormals;
	static void NewProp_DrawHitImpactNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawHitImpactNormals;
	static void NewProp_DrawHitPrimitives_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawHitPrimitives;
	static void NewProp_DrawHitActorsNames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawHitActorsNames;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitPointSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoHitColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactNormalColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACogEngineCollisionTester constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACogEngineCollisionTester>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACogEngineCollisionTester_Statics

// ********** Begin Class ACogEngineCollisionTester Property Definitions ***************************
void Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_TickInEditor_SetBit(void* Obj)
{
	((ACogEngineCollisionTester*)Obj)->TickInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_TickInEditor = { "TickInEditor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACogEngineCollisionTester), &Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_TickInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickInEditor_MetaData), NewProp_TickInEditor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineCollisionTester, Type), Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1734674224
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_TraceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_TraceMode = { "TraceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineCollisionTester, TraceMode), Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryTraceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceMode_MetaData), NewProp_TraceMode_MetaData) }; // 3061636650
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_OverlapMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_OverlapMode = { "OverlapMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineCollisionTester, OverlapMode), Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryOverlapMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapMode_MetaData), NewProp_OverlapMode_MetaData) }; // 3575182964
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_By_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_By = { "By", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineCollisionTester, By), Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_By_MetaData), NewProp_By_MetaData) }; // 244142930
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineCollisionTester, Shape), Z_Construct_UEnum_CogEngine_ECogEngine_CollisionQueryShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) }; // 2646430762
void Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_TraceComplex_SetBit(void* Obj)
{
	((ACogEngineCollisionTester*)Obj)->TraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_TraceComplex = { "TraceComplex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACogEngineCollisionTester), &Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_TraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceComplex_MetaData), NewProp_TraceComplex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_ObjectTypesToQuery = { "ObjectTypesToQuery", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineCollisionTester, ObjectTypesToQuery), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypesToQuery_MetaData), NewProp_ObjectTypesToQuery_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineCollisionTester, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 838391399
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_ProfileIndex = { "ProfileIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineCollisionTester, ProfileIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileIndex_MetaData), NewProp_ProfileIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_ShapeExtent = { "ShapeExtent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineCollisionTester, ShapeExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeExtent_MetaData), NewProp_ShapeExtent_MetaData) };
void Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitLocations_SetBit(void* Obj)
{
	((ACogEngineCollisionTester*)Obj)->DrawHitLocations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitLocations = { "DrawHitLocations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACogEngineCollisionTester), &Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitLocations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawHitLocations_MetaData), NewProp_DrawHitLocations_MetaData) };
void Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitImpactPoints_SetBit(void* Obj)
{
	((ACogEngineCollisionTester*)Obj)->DrawHitImpactPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitImpactPoints = { "DrawHitImpactPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACogEngineCollisionTester), &Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitImpactPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawHitImpactPoints_MetaData), NewProp_DrawHitImpactPoints_MetaData) };
void Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitShapes_SetBit(void* Obj)
{
	((ACogEngineCollisionTester*)Obj)->DrawHitShapes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitShapes = { "DrawHitShapes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACogEngineCollisionTester), &Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitShapes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawHitShapes_MetaData), NewProp_DrawHitShapes_MetaData) };
void Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitNormals_SetBit(void* Obj)
{
	((ACogEngineCollisionTester*)Obj)->DrawHitNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitNormals = { "DrawHitNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACogEngineCollisionTester), &Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawHitNormals_MetaData), NewProp_DrawHitNormals_MetaData) };
void Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitImpactNormals_SetBit(void* Obj)
{
	((ACogEngineCollisionTester*)Obj)->DrawHitImpactNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitImpactNormals = { "DrawHitImpactNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACogEngineCollisionTester), &Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitImpactNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawHitImpactNormals_MetaData), NewProp_DrawHitImpactNormals_MetaData) };
void Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitPrimitives_SetBit(void* Obj)
{
	((ACogEngineCollisionTester*)Obj)->DrawHitPrimitives = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitPrimitives = { "DrawHitPrimitives", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACogEngineCollisionTester), &Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitPrimitives_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawHitPrimitives_MetaData), NewProp_DrawHitPrimitives_MetaData) };
void Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitActorsNames_SetBit(void* Obj)
{
	((ACogEngineCollisionTester*)Obj)->DrawHitActorsNames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitActorsNames = { "DrawHitActorsNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACogEngineCollisionTester), &Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitActorsNames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawHitActorsNames_MetaData), NewProp_DrawHitActorsNames_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_HitPointSize = { "HitPointSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineCollisionTester, HitPointSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitPointSize_MetaData), NewProp_HitPointSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_NoHitColor = { "NoHitColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineCollisionTester, NoHitColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoHitColor_MetaData), NewProp_NoHitColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_HitColor = { "HitColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineCollisionTester, HitColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitColor_MetaData), NewProp_HitColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_NormalColor = { "NormalColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineCollisionTester, NormalColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalColor_MetaData), NewProp_NormalColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_ImpactNormalColor = { "ImpactNormalColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineCollisionTester, ImpactNormalColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactNormalColor_MetaData), NewProp_ImpactNormalColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_StartComponent = { "StartComponent", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineCollisionTester, StartComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartComponent_MetaData), NewProp_StartComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_EndComponent = { "EndComponent", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineCollisionTester, EndComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndComponent_MetaData), NewProp_EndComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACogEngineCollisionTester_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_TickInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_TraceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_TraceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_OverlapMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_OverlapMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_By_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_By,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_Shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_TraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_ObjectTypesToQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_ProfileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_ShapeExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitImpactPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitImpactNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitPrimitives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_DrawHitActorsNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_HitPointSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_NoHitColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_HitColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_NormalColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_ImpactNormalColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_StartComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineCollisionTester_Statics::NewProp_EndComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACogEngineCollisionTester_Statics::PropPointers) < 2048);
// ********** End Class ACogEngineCollisionTester Property Definitions *****************************
UObject* (*const Z_Construct_UClass_ACogEngineCollisionTester_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACogEngineCollisionTester_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACogEngineCollisionTester_Statics::ClassParams = {
	&ACogEngineCollisionTester::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACogEngineCollisionTester_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACogEngineCollisionTester_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACogEngineCollisionTester_Statics::Class_MetaDataParams), Z_Construct_UClass_ACogEngineCollisionTester_Statics::Class_MetaDataParams)
};
void ACogEngineCollisionTester::StaticRegisterNativesACogEngineCollisionTester()
{
}
UClass* Z_Construct_UClass_ACogEngineCollisionTester()
{
	if (!Z_Registration_Info_UClass_ACogEngineCollisionTester.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACogEngineCollisionTester.OuterSingleton, Z_Construct_UClass_ACogEngineCollisionTester_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACogEngineCollisionTester.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACogEngineCollisionTester);
ACogEngineCollisionTester::~ACogEngineCollisionTester() {}
// ********** End Class ACogEngineCollisionTester **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineCollisionTester_h__Script_CogEngine_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECogEngine_CollisionQueryType_StaticEnum, TEXT("ECogEngine_CollisionQueryType"), &Z_Registration_Info_UEnum_ECogEngine_CollisionQueryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1734674224U) },
		{ ECogEngine_CollisionQueryTraceMode_StaticEnum, TEXT("ECogEngine_CollisionQueryTraceMode"), &Z_Registration_Info_UEnum_ECogEngine_CollisionQueryTraceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3061636650U) },
		{ ECogEngine_CollisionQueryOverlapMode_StaticEnum, TEXT("ECogEngine_CollisionQueryOverlapMode"), &Z_Registration_Info_UEnum_ECogEngine_CollisionQueryOverlapMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3575182964U) },
		{ ECogEngine_CollisionQueryBy_StaticEnum, TEXT("ECogEngine_CollisionQueryBy"), &Z_Registration_Info_UEnum_ECogEngine_CollisionQueryBy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 244142930U) },
		{ ECogEngine_CollisionQueryShape_StaticEnum, TEXT("ECogEngine_CollisionQueryShape"), &Z_Registration_Info_UEnum_ECogEngine_CollisionQueryShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2646430762U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACogEngineCollisionTester, ACogEngineCollisionTester::StaticClass, TEXT("ACogEngineCollisionTester"), &Z_Registration_Info_UClass_ACogEngineCollisionTester, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACogEngineCollisionTester), 1489321266U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineCollisionTester_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineCollisionTester_h__Script_CogEngine_1775865947{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineCollisionTester_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineCollisionTester_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineCollisionTester_h__Script_CogEngine_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineCollisionTester_h__Script_CogEngine_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
