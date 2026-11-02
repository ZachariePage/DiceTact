// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogDebugDrawBlueprint.h"
#include "CogCommonLog.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogDebugDrawBlueprint() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FCogLogCategory();
COGDEBUG_API UClass* Z_Construct_UClass_UCogDebugDrawBlueprint();
COGDEBUG_API UClass* Z_Construct_UClass_UCogDebugDrawBlueprint_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_CogDebug();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawArrow ***************************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics
{
	struct CogDebugDrawBlueprint_eventDebugDrawArrow_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		FVector SegmentStart;
		FVector SegmentEnd;
		FLinearColor Color;
		bool Persistent;
		uint8 DepthPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawArrow constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawArrow constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawArrow Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawArrow_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawArrow_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::NewProp_SegmentStart = { "SegmentStart", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawArrow_Parms, SegmentStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentStart_MetaData), NewProp_SegmentStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::NewProp_SegmentEnd = { "SegmentEnd", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawArrow_Parms, SegmentEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentEnd_MetaData), NewProp_SegmentEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawArrow_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawArrow_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawArrow_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawArrow_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::NewProp_SegmentStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::NewProp_SegmentEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::NewProp_Persistent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::NewProp_DepthPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawArrow Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawArrow", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::CogDebugDrawBlueprint_eventDebugDrawArrow_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::CogDebugDrawBlueprint_eventDebugDrawArrow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawArrow)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_STRUCT(FVector,Z_Param_SegmentStart);
	P_GET_STRUCT(FVector,Z_Param_SegmentEnd);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_UBOOL(Z_Param_Persistent);
	P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawArrow(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_SegmentStart,Z_Param_SegmentEnd,Z_Param_Color,Z_Param_Persistent,Z_Param_DepthPriority);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawArrow *****************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawAxis ****************************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics
{
	struct CogDebugDrawBlueprint_eventDebugDrawAxis_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		FVector Location;
		FRotator Rotation;
		float Scale;
		bool Persistent;
		uint8 DepthPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawAxis constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawAxis constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawAxis Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawAxis_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawAxis_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawAxis_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawAxis_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawAxis_Parms, Scale), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawAxis_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawAxis_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawAxis_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::NewProp_Persistent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::NewProp_DepthPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawAxis Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawAxis", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::CogDebugDrawBlueprint_eventDebugDrawAxis_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::CogDebugDrawBlueprint_eventDebugDrawAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawAxis)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_UBOOL(Z_Param_Persistent);
	P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawAxis(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_Location,Z_Param_Rotation,Z_Param_Scale,Z_Param_Persistent,Z_Param_DepthPriority);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawAxis ******************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawBox *****************************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics
{
	struct CogDebugDrawBlueprint_eventDebugDrawBox_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		FVector Center;
		FVector Extent;
		FQuat Rotation;
		FLinearColor Color;
		bool Persistent;
		uint8 DepthPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawBox constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawBox constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawBox Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawBox_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extent_MetaData), NewProp_Extent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawBox_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawBox_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawBox_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawBox_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawBox_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_Extent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_Persistent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::NewProp_DepthPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawBox Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawBox", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::CogDebugDrawBlueprint_eventDebugDrawBox_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::CogDebugDrawBlueprint_eventDebugDrawBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawBox)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_STRUCT(FVector,Z_Param_Center);
	P_GET_STRUCT(FVector,Z_Param_Extent);
	P_GET_STRUCT(FQuat,Z_Param_Rotation);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_UBOOL(Z_Param_Persistent);
	P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawBox(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_Center,Z_Param_Extent,Z_Param_Rotation,Z_Param_Color,Z_Param_Persistent,Z_Param_DepthPriority);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawBox *******************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawCapsule *************************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics
{
	struct CogDebugDrawBlueprint_eventDebugDrawCapsule_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		FVector Center;
		float HalfHeight;
		float Radius;
		FQuat Rotation;
		FLinearColor Color;
		bool Persistent;
		uint8 DepthPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawCapsule constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawCapsule constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawCapsule Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCapsule_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCapsule_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCapsule_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCapsule_Parms, HalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfHeight_MetaData), NewProp_HalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCapsule_Parms, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCapsule_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCapsule_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawCapsule_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawCapsule_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCapsule_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_HalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_Persistent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::NewProp_DepthPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawCapsule Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawCapsule", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::CogDebugDrawBlueprint_eventDebugDrawCapsule_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::CogDebugDrawBlueprint_eventDebugDrawCapsule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawCapsule)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_STRUCT(FVector,Z_Param_Center);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT(FQuat,Z_Param_Rotation);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_UBOOL(Z_Param_Persistent);
	P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawCapsule(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_Center,Z_Param_HalfHeight,Z_Param_Radius,Z_Param_Rotation,Z_Param_Color,Z_Param_Persistent,Z_Param_DepthPriority);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawCapsule ***************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawCircle **************************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics
{
	struct FMatrix
	{
		FPlane XPlane;
		FPlane YPlane;
		FPlane ZPlane;
		FPlane WPlane;
	};

	struct CogDebugDrawBlueprint_eventDebugDrawCircle_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		FMatrix Matrix;
		float Radius;
		FLinearColor Color;
		bool Persistent;
		uint8 DepthPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Matrix_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawCircle constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Matrix;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawCircle constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawCircle Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircle_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::NewProp_Matrix = { "Matrix", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircle_Parms, Matrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Matrix_MetaData), NewProp_Matrix_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircle_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircle_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawCircle_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawCircle_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircle_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::NewProp_Matrix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::NewProp_Persistent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::NewProp_DepthPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawCircle Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawCircle", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::CogDebugDrawBlueprint_eventDebugDrawCircle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::CogDebugDrawBlueprint_eventDebugDrawCircle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawCircle)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_STRUCT_REF(FMatrix,Z_Param_Out_Matrix);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_UBOOL(Z_Param_Persistent);
	P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawCircle(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_Out_Matrix,Z_Param_Radius,Z_Param_Color,Z_Param_Persistent,Z_Param_DepthPriority);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawCircle ****************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawCircle2D ************************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics
{
	struct CogDebugDrawBlueprint_eventDebugDrawCircle2D_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		FVector2D Location;
		float Radius;
		FLinearColor Color;
		bool Persistent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawCircle2D constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawCircle2D constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawCircle2D Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircle2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircle2D_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircle2D_Parms, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircle2D_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircle2D_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawCircle2D_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawCircle2D_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::NewProp_Persistent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawCircle2D Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawCircle2D", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::CogDebugDrawBlueprint_eventDebugDrawCircle2D_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::CogDebugDrawBlueprint_eventDebugDrawCircle2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawCircle2D)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_STRUCT(FVector2D,Z_Param_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_UBOOL(Z_Param_Persistent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawCircle2D(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_Location,Z_Param_Radius,Z_Param_Color,Z_Param_Persistent);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawCircle2D **************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawCircleArc ***********************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics
{
	struct FMatrix
	{
		FPlane XPlane;
		FPlane YPlane;
		FPlane ZPlane;
		FPlane WPlane;
	};

	struct CogDebugDrawBlueprint_eventDebugDrawCircleArc_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		FMatrix Matrix;
		float InnerRadius;
		float OuterRadius;
		float Angle;
		FLinearColor Color;
		bool Persistent;
		uint8 DepthPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Matrix_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawCircleArc constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Matrix;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawCircleArc constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawCircleArc Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircleArc_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircleArc_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_Matrix = { "Matrix", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircleArc_Parms, Matrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Matrix_MetaData), NewProp_Matrix_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircleArc_Parms, InnerRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircleArc_Parms, OuterRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircleArc_Parms, Angle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircleArc_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawCircleArc_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawCircleArc_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawCircleArc_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_Matrix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_InnerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_OuterRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_Angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_Persistent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::NewProp_DepthPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawCircleArc Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawCircleArc", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::CogDebugDrawBlueprint_eventDebugDrawCircleArc_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::CogDebugDrawBlueprint_eventDebugDrawCircleArc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawCircleArc)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_STRUCT_REF(FMatrix,Z_Param_Out_Matrix);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InnerRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OuterRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_UBOOL(Z_Param_Persistent);
	P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawCircleArc(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_Out_Matrix,Z_Param_InnerRadius,Z_Param_OuterRadius,Z_Param_Angle,Z_Param_Color,Z_Param_Persistent,Z_Param_DepthPriority);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawCircleArc *************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawPath ****************************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics
{
	struct CogDebugDrawBlueprint_eventDebugDrawPath_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		TArray<FVector> Points;
		float PointSize;
		FLinearColor StartColor;
		FLinearColor EndColor;
		bool Persistent;
		uint8 DepthPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartColor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawPath constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndColor;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawPath constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawPath Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPath_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPath_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPath_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_PointSize = { "PointSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPath_Parms, PointSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_StartColor = { "StartColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPath_Parms, StartColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartColor_MetaData), NewProp_StartColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_EndColor = { "EndColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPath_Parms, EndColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndColor_MetaData), NewProp_EndColor_MetaData) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawPath_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawPath_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPath_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_PointSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_StartColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_EndColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_Persistent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::NewProp_DepthPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawPath Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawPath", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::CogDebugDrawBlueprint_eventDebugDrawPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::CogDebugDrawBlueprint_eventDebugDrawPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawPath)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PointSize);
	P_GET_STRUCT(FLinearColor,Z_Param_StartColor);
	P_GET_STRUCT(FLinearColor,Z_Param_EndColor);
	P_GET_UBOOL(Z_Param_Persistent);
	P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawPath(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_Out_Points,Z_Param_PointSize,Z_Param_StartColor,Z_Param_EndColor,Z_Param_Persistent,Z_Param_DepthPriority);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawPath ******************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawPoint ***************************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics
{
	struct CogDebugDrawBlueprint_eventDebugDrawPoint_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		FVector Location;
		float size;
		FLinearColor Color;
		bool Persistent;
		uint8 DepthPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawPoint constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawPoint constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawPoint Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPoint_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPoint_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPoint_Parms, size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPoint_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawPoint_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawPoint_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPoint_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::NewProp_size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::NewProp_Persistent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::NewProp_DepthPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawPoint Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawPoint", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::CogDebugDrawBlueprint_eventDebugDrawPoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::CogDebugDrawBlueprint_eventDebugDrawPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawPoint)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_size);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_UBOOL(Z_Param_Persistent);
	P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawPoint(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_Location,Z_Param_size,Z_Param_Color,Z_Param_Persistent,Z_Param_DepthPriority);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawPoint *****************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawPoints **************************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics
{
	struct CogDebugDrawBlueprint_eventDebugDrawPoints_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		TArray<FVector> Points;
		float Radius;
		FLinearColor StartColor;
		FLinearColor EndColor;
		bool Persistent;
		uint8 DepthPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartColor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawPoints constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndColor;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawPoints constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawPoints Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPoints_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPoints_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPoints_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPoints_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_StartColor = { "StartColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPoints_Parms, StartColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartColor_MetaData), NewProp_StartColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_EndColor = { "EndColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPoints_Parms, EndColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndColor_MetaData), NewProp_EndColor_MetaData) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawPoints_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawPoints_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawPoints_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_StartColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_EndColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_Persistent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::NewProp_DepthPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawPoints Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawPoints", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::CogDebugDrawBlueprint_eventDebugDrawPoints_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::CogDebugDrawBlueprint_eventDebugDrawPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawPoints)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT(FLinearColor,Z_Param_StartColor);
	P_GET_STRUCT(FLinearColor,Z_Param_EndColor);
	P_GET_UBOOL(Z_Param_Persistent);
	P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawPoints(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_Out_Points,Z_Param_Radius,Z_Param_StartColor,Z_Param_EndColor,Z_Param_Persistent,Z_Param_DepthPriority);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawPoints ****************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawRect2D **************************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics
{
	struct CogDebugDrawBlueprint_eventDebugDrawRect2D_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		FVector2D Min;
		FVector2D Max;
		FLinearColor Color;
		bool Persistent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawRect2D constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawRect2D constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawRect2D Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawRect2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawRect2D_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawRect2D_Parms, Min), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawRect2D_Parms, Max), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawRect2D_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawRect2D_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawRect2D_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::NewProp_Persistent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawRect2D Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawRect2D", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::CogDebugDrawBlueprint_eventDebugDrawRect2D_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::CogDebugDrawBlueprint_eventDebugDrawRect2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawRect2D)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_STRUCT(FVector2D,Z_Param_Min);
	P_GET_STRUCT(FVector2D,Z_Param_Max);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_UBOOL(Z_Param_Persistent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawRect2D(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_Min,Z_Param_Max,Z_Param_Color,Z_Param_Persistent);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawRect2D ****************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawSegment *************************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics
{
	struct CogDebugDrawBlueprint_eventDebugDrawSegment_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		FVector SegmentStart;
		FVector SegmentEnd;
		FLinearColor Color;
		bool Persistent;
		uint8 DepthPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawSegment constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawSegment constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawSegment Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSegment_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSegment_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::NewProp_SegmentStart = { "SegmentStart", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSegment_Parms, SegmentStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentStart_MetaData), NewProp_SegmentStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::NewProp_SegmentEnd = { "SegmentEnd", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSegment_Parms, SegmentEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentEnd_MetaData), NewProp_SegmentEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSegment_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawSegment_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawSegment_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSegment_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::NewProp_SegmentStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::NewProp_SegmentEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::NewProp_Persistent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::NewProp_DepthPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawSegment Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawSegment", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::CogDebugDrawBlueprint_eventDebugDrawSegment_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::CogDebugDrawBlueprint_eventDebugDrawSegment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawSegment)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_STRUCT(FVector,Z_Param_SegmentStart);
	P_GET_STRUCT(FVector,Z_Param_SegmentEnd);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_UBOOL(Z_Param_Persistent);
	P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawSegment(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_SegmentStart,Z_Param_SegmentEnd,Z_Param_Color,Z_Param_Persistent,Z_Param_DepthPriority);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawSegment ***************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawSegment2D ***********************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics
{
	struct CogDebugDrawBlueprint_eventDebugDrawSegment2D_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		FVector2D SegmentStart;
		FVector2D SegmentEnd;
		FLinearColor Color;
		bool Persistent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawSegment2D constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawSegment2D constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawSegment2D Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSegment2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSegment2D_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::NewProp_SegmentStart = { "SegmentStart", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSegment2D_Parms, SegmentStart), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentStart_MetaData), NewProp_SegmentStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::NewProp_SegmentEnd = { "SegmentEnd", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSegment2D_Parms, SegmentEnd), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentEnd_MetaData), NewProp_SegmentEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSegment2D_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawSegment2D_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawSegment2D_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::NewProp_SegmentStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::NewProp_SegmentEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::NewProp_Persistent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawSegment2D Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawSegment2D", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::CogDebugDrawBlueprint_eventDebugDrawSegment2D_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::CogDebugDrawBlueprint_eventDebugDrawSegment2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawSegment2D)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_STRUCT(FVector2D,Z_Param_SegmentStart);
	P_GET_STRUCT(FVector2D,Z_Param_SegmentEnd);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_UBOOL(Z_Param_Persistent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawSegment2D(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_SegmentStart,Z_Param_SegmentEnd,Z_Param_Color,Z_Param_Persistent);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawSegment2D *************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawSolidBox ************************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics
{
	struct CogDebugDrawBlueprint_eventDebugDrawSolidBox_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		FVector Center;
		FVector Extent;
		FQuat Rotation;
		FLinearColor Color;
		bool Persistent;
		uint8 DepthPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawSolidBox constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawSolidBox constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawSolidBox Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSolidBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSolidBox_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSolidBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSolidBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extent_MetaData), NewProp_Extent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSolidBox_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSolidBox_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawSolidBox_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawSolidBox_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSolidBox_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_Extent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_Persistent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::NewProp_DepthPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawSolidBox Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawSolidBox", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::CogDebugDrawBlueprint_eventDebugDrawSolidBox_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::CogDebugDrawBlueprint_eventDebugDrawSolidBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawSolidBox)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_STRUCT(FVector,Z_Param_Center);
	P_GET_STRUCT(FVector,Z_Param_Extent);
	P_GET_STRUCT(FQuat,Z_Param_Rotation);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_UBOOL(Z_Param_Persistent);
	P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawSolidBox(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_Center,Z_Param_Extent,Z_Param_Rotation,Z_Param_Color,Z_Param_Persistent,Z_Param_DepthPriority);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawSolidBox **************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawSphere **************************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics
{
	struct CogDebugDrawBlueprint_eventDebugDrawSphere_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		FVector Location;
		float Radius;
		FLinearColor Color;
		bool Persistent;
		uint8 DepthPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawSphere constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawSphere constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawSphere Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSphere_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSphere_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSphere_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSphere_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawSphere_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawSphere_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawSphere_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::NewProp_Persistent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::NewProp_DepthPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawSphere Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawSphere", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::CogDebugDrawBlueprint_eventDebugDrawSphere_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::CogDebugDrawBlueprint_eventDebugDrawSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawSphere)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_UBOOL(Z_Param_Persistent);
	P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawSphere(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_Location,Z_Param_Radius,Z_Param_Color,Z_Param_Persistent,Z_Param_DepthPriority);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawSphere ****************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawString **************************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics
{
	struct CogDebugDrawBlueprint_eventDebugDrawString_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		FString Text;
		FVector Location;
		FLinearColor Color;
		bool Persistent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawString constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawString constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawString Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawString_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawString_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawString_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawString_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawString_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawString_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::NewProp_Persistent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawString Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawString", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::CogDebugDrawBlueprint_eventDebugDrawString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::CogDebugDrawBlueprint_eventDebugDrawString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawString)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_UBOOL(Z_Param_Persistent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawString(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_Text,Z_Param_Location,Z_Param_Color,Z_Param_Persistent);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawString ****************************

// ********** Begin Class UCogDebugDrawBlueprint Function DebugDrawString2D ************************
struct Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics
{
	struct CogDebugDrawBlueprint_eventDebugDrawString2D_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		FString Text;
		FVector2D Location;
		FLinearColor Color;
		bool Persistent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugDrawString2D constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_Persistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Persistent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugDrawString2D constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugDrawString2D Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawString2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawString2D_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawString2D_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawString2D_Parms, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugDrawBlueprint_eventDebugDrawString2D_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::NewProp_Persistent_SetBit(void* Obj)
{
	((CogDebugDrawBlueprint_eventDebugDrawString2D_Parms*)Obj)->Persistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugDrawBlueprint_eventDebugDrawString2D_Parms), &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::NewProp_Persistent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::PropPointers) < 2048);
// ********** End Function DebugDrawString2D Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugDrawBlueprint, nullptr, "DebugDrawString2D", 	Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::CogDebugDrawBlueprint_eventDebugDrawString2D_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::CogDebugDrawBlueprint_eventDebugDrawString2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugDrawBlueprint::execDebugDrawString2D)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_STRUCT(FVector2D,Z_Param_Location);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_UBOOL(Z_Param_Persistent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugDrawBlueprint::DebugDrawString2D(Z_Param_WorldContextObject,Z_Param_LogCategory,Z_Param_Text,Z_Param_Location,Z_Param_Color,Z_Param_Persistent);
	P_NATIVE_END;
}
// ********** End Class UCogDebugDrawBlueprint Function DebugDrawString2D **************************

// ********** Begin Class UCogDebugDrawBlueprint ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogDebugDrawBlueprint;
UClass* UCogDebugDrawBlueprint::GetPrivateStaticClass()
{
	using TClass = UCogDebugDrawBlueprint;
	if (!Z_Registration_Info_UClass_UCogDebugDrawBlueprint.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogDebugDrawBlueprint"),
			Z_Registration_Info_UClass_UCogDebugDrawBlueprint.InnerSingleton,
			StaticRegisterNativesUCogDebugDrawBlueprint,
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
	return Z_Registration_Info_UClass_UCogDebugDrawBlueprint.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogDebugDrawBlueprint_NoRegister()
{
	return UCogDebugDrawBlueprint::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogDebugDrawBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogDebugDrawBlueprint.h" },
		{ "ModuleRelativePath", "Public/CogDebugDrawBlueprint.h" },
		{ "ScriptName", "CogDebugDrawBlueprint" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogDebugDrawBlueprint constinit property declarations *******************
// ********** End Class UCogDebugDrawBlueprint constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DebugDrawArrow"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawArrow },
		{ .NameUTF8 = UTF8TEXT("DebugDrawAxis"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawAxis },
		{ .NameUTF8 = UTF8TEXT("DebugDrawBox"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawBox },
		{ .NameUTF8 = UTF8TEXT("DebugDrawCapsule"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawCapsule },
		{ .NameUTF8 = UTF8TEXT("DebugDrawCircle"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawCircle },
		{ .NameUTF8 = UTF8TEXT("DebugDrawCircle2D"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawCircle2D },
		{ .NameUTF8 = UTF8TEXT("DebugDrawCircleArc"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawCircleArc },
		{ .NameUTF8 = UTF8TEXT("DebugDrawPath"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawPath },
		{ .NameUTF8 = UTF8TEXT("DebugDrawPoint"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawPoint },
		{ .NameUTF8 = UTF8TEXT("DebugDrawPoints"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawPoints },
		{ .NameUTF8 = UTF8TEXT("DebugDrawRect2D"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawRect2D },
		{ .NameUTF8 = UTF8TEXT("DebugDrawSegment"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawSegment },
		{ .NameUTF8 = UTF8TEXT("DebugDrawSegment2D"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawSegment2D },
		{ .NameUTF8 = UTF8TEXT("DebugDrawSolidBox"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawSolidBox },
		{ .NameUTF8 = UTF8TEXT("DebugDrawSphere"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawSphere },
		{ .NameUTF8 = UTF8TEXT("DebugDrawString"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawString },
		{ .NameUTF8 = UTF8TEXT("DebugDrawString2D"), .Pointer = &UCogDebugDrawBlueprint::execDebugDrawString2D },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawArrow, "DebugDrawArrow" }, // 2529729931
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawAxis, "DebugDrawAxis" }, // 1630146380
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawBox, "DebugDrawBox" }, // 29445170
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCapsule, "DebugDrawCapsule" }, // 1896999718
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle, "DebugDrawCircle" }, // 2592879886
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircle2D, "DebugDrawCircle2D" }, // 580903484
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawCircleArc, "DebugDrawCircleArc" }, // 2217459518
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPath, "DebugDrawPath" }, // 4242833160
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoint, "DebugDrawPoint" }, // 362220651
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawPoints, "DebugDrawPoints" }, // 717996084
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawRect2D, "DebugDrawRect2D" }, // 3954388642
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment, "DebugDrawSegment" }, // 3846638024
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSegment2D, "DebugDrawSegment2D" }, // 3000768338
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSolidBox, "DebugDrawSolidBox" }, // 1796683641
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawSphere, "DebugDrawSphere" }, // 1158969480
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString, "DebugDrawString" }, // 109062584
		{ &Z_Construct_UFunction_UCogDebugDrawBlueprint_DebugDrawString2D, "DebugDrawString2D" }, // 2027383500
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogDebugDrawBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogDebugDrawBlueprint_Statics
UObject* (*const Z_Construct_UClass_UCogDebugDrawBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CogDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogDebugDrawBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogDebugDrawBlueprint_Statics::ClassParams = {
	&UCogDebugDrawBlueprint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogDebugDrawBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogDebugDrawBlueprint_Statics::Class_MetaDataParams)
};
void UCogDebugDrawBlueprint::StaticRegisterNativesUCogDebugDrawBlueprint()
{
	UClass* Class = UCogDebugDrawBlueprint::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UCogDebugDrawBlueprint_Statics::Funcs));
}
UClass* Z_Construct_UClass_UCogDebugDrawBlueprint()
{
	if (!Z_Registration_Info_UClass_UCogDebugDrawBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogDebugDrawBlueprint.OuterSingleton, Z_Construct_UClass_UCogDebugDrawBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogDebugDrawBlueprint.OuterSingleton;
}
UCogDebugDrawBlueprint::UCogDebugDrawBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogDebugDrawBlueprint);
UCogDebugDrawBlueprint::~UCogDebugDrawBlueprint() {}
// ********** End Class UCogDebugDrawBlueprint *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugDrawBlueprint_h__Script_CogDebug_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogDebugDrawBlueprint, UCogDebugDrawBlueprint::StaticClass, TEXT("UCogDebugDrawBlueprint"), &Z_Registration_Info_UClass_UCogDebugDrawBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogDebugDrawBlueprint), 3909261324U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugDrawBlueprint_h__Script_CogDebug_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugDrawBlueprint_h__Script_CogDebug_4076951793{
	TEXT("/Script/CogDebug"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugDrawBlueprint_h__Script_CogDebug_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugDrawBlueprint_h__Script_CogDebug_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
