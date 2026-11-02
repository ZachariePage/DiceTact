// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SplineWidgetFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSplineWidgetFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_WidgetSplineSystem();
WIDGETSPLINESYSTEM_API UClass* Z_Construct_UClass_USplineWidget_NoRegister();
WIDGETSPLINESYSTEM_API UClass* Z_Construct_UClass_USplineWidgetFunctionLibrary();
WIDGETSPLINESYSTEM_API UClass* Z_Construct_UClass_USplineWidgetFunctionLibrary_NoRegister();
WIDGETSPLINESYSTEM_API UEnum* Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESlateSplineCoordinateSpace ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateSplineCoordinateSpace;
static UEnum* ESlateSplineCoordinateSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESlateSplineCoordinateSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESlateSplineCoordinateSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace, (UObject*)Z_Construct_UPackage__Script_WidgetSplineSystem(), TEXT("ESlateSplineCoordinateSpace"));
	}
	return Z_Registration_Info_UEnum_ESlateSplineCoordinateSpace.OuterSingleton;
}
template<> WIDGETSPLINESYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<ESlateSplineCoordinateSpace>()
{
	return ESlateSplineCoordinateSpace_StaticEnum();
}
struct Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Local.Name", "ESlateSplineCoordinateSpace::Local" },
		{ "ModuleRelativePath", "Public/SplineWidgetFunctionLibrary.h" },
		{ "Screen.Name", "ESlateSplineCoordinateSpace::Screen" },
		{ "Viewport.Name", "ESlateSplineCoordinateSpace::Viewport" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESlateSplineCoordinateSpace::Local", (int64)ESlateSplineCoordinateSpace::Local },
		{ "ESlateSplineCoordinateSpace::Viewport", (int64)ESlateSplineCoordinateSpace::Viewport },
		{ "ESlateSplineCoordinateSpace::Screen", (int64)ESlateSplineCoordinateSpace::Screen },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WidgetSplineSystem,
	nullptr,
	"ESlateSplineCoordinateSpace",
	"ESlateSplineCoordinateSpace",
	Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace()
{
	if (!Z_Registration_Info_UEnum_ESlateSplineCoordinateSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateSplineCoordinateSpace.InnerSingleton, Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESlateSplineCoordinateSpace.InnerSingleton;
}
// ********** End Enum ESlateSplineCoordinateSpace *************************************************

// ********** Begin Class USplineWidgetFunctionLibrary Function GetDirectionAtDistanceAlongSpline **
struct Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics
{
	struct SplineWidgetFunctionLibrary_eventGetDirectionAtDistanceAlongSpline_Parms
	{
		const USplineWidget* InSplineWidget;
		float Distance;
		ESlateSplineCoordinateSpace CoordinateSpace;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Given a distance along the length of this spline, return a unit direction vector of the spline tangent there. */" },
#endif
		{ "ModuleRelativePath", "Public/SplineWidgetFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given a distance along the length of this spline, return a unit direction vector of the spline tangent there." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSplineWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDirectionAtDistanceAlongSpline constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSplineWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CoordinateSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDirectionAtDistanceAlongSpline constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDirectionAtDistanceAlongSpline Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::NewProp_InSplineWidget = { "InSplineWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetDirectionAtDistanceAlongSpline_Parms, InSplineWidget), Z_Construct_UClass_USplineWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSplineWidget_MetaData), NewProp_InSplineWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetDirectionAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetDirectionAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // 4198513115
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetDirectionAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::NewProp_InSplineWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::PropPointers) < 2048);
// ********** End Function GetDirectionAtDistanceAlongSpline Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplineWidgetFunctionLibrary, nullptr, "GetDirectionAtDistanceAlongSpline", 	Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::SplineWidgetFunctionLibrary_eventGetDirectionAtDistanceAlongSpline_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::SplineWidgetFunctionLibrary_eventGetDirectionAtDistanceAlongSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplineWidgetFunctionLibrary::execGetDirectionAtDistanceAlongSpline)
{
	P_GET_OBJECT(USplineWidget,Z_Param_InSplineWidget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_ENUM(ESlateSplineCoordinateSpace,Z_Param_CoordinateSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USplineWidgetFunctionLibrary::GetDirectionAtDistanceAlongSpline(Z_Param_InSplineWidget,Z_Param_Distance,ESlateSplineCoordinateSpace(Z_Param_CoordinateSpace));
	P_NATIVE_END;
}
// ********** End Class USplineWidgetFunctionLibrary Function GetDirectionAtDistanceAlongSpline ****

// ********** Begin Class USplineWidgetFunctionLibrary Function GetDirectionAtSplineInputKey *******
struct Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics
{
	struct SplineWidgetFunctionLibrary_eventGetDirectionAtSplineInputKey_Parms
	{
		const USplineWidget* InSplineWidget;
		float InKey;
		ESlateSplineCoordinateSpace CoordinateSpace;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get unit direction along spline at the provided input key value */" },
#endif
		{ "ModuleRelativePath", "Public/SplineWidgetFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get unit direction along spline at the provided input key value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSplineWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDirectionAtSplineInputKey constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSplineWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CoordinateSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDirectionAtSplineInputKey constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDirectionAtSplineInputKey Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::NewProp_InSplineWidget = { "InSplineWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetDirectionAtSplineInputKey_Parms, InSplineWidget), Z_Construct_UClass_USplineWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSplineWidget_MetaData), NewProp_InSplineWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetDirectionAtSplineInputKey_Parms, InKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::NewProp_CoordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetDirectionAtSplineInputKey_Parms, CoordinateSpace), Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // 4198513115
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetDirectionAtSplineInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::NewProp_InSplineWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::NewProp_CoordinateSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::NewProp_CoordinateSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::PropPointers) < 2048);
// ********** End Function GetDirectionAtSplineInputKey Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplineWidgetFunctionLibrary, nullptr, "GetDirectionAtSplineInputKey", 	Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::SplineWidgetFunctionLibrary_eventGetDirectionAtSplineInputKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::SplineWidgetFunctionLibrary_eventGetDirectionAtSplineInputKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplineWidgetFunctionLibrary::execGetDirectionAtSplineInputKey)
{
	P_GET_OBJECT(USplineWidget,Z_Param_InSplineWidget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
	P_GET_ENUM(ESlateSplineCoordinateSpace,Z_Param_CoordinateSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USplineWidgetFunctionLibrary::GetDirectionAtSplineInputKey(Z_Param_InSplineWidget,Z_Param_InKey,ESlateSplineCoordinateSpace(Z_Param_CoordinateSpace));
	P_NATIVE_END;
}
// ********** End Class USplineWidgetFunctionLibrary Function GetDirectionAtSplineInputKey *********

// ********** Begin Class USplineWidgetFunctionLibrary Function GetDirectionAtSplinePoint **********
struct Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics
{
	struct SplineWidgetFunctionLibrary_eventGetDirectionAtSplinePoint_Parms
	{
		const USplineWidget* InSplineWidget;
		int32 PointIndex;
		ESlateSplineCoordinateSpace CoordinateSpace;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the direction at spline point */" },
#endif
		{ "ModuleRelativePath", "Public/SplineWidgetFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the direction at spline point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSplineWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDirectionAtSplinePoint constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSplineWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CoordinateSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDirectionAtSplinePoint constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDirectionAtSplinePoint Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::NewProp_InSplineWidget = { "InSplineWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetDirectionAtSplinePoint_Parms, InSplineWidget), Z_Construct_UClass_USplineWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSplineWidget_MetaData), NewProp_InSplineWidget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetDirectionAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::NewProp_CoordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetDirectionAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // 4198513115
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetDirectionAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::NewProp_InSplineWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::NewProp_PointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::NewProp_CoordinateSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::NewProp_CoordinateSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::PropPointers) < 2048);
// ********** End Function GetDirectionAtSplinePoint Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplineWidgetFunctionLibrary, nullptr, "GetDirectionAtSplinePoint", 	Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::SplineWidgetFunctionLibrary_eventGetDirectionAtSplinePoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::SplineWidgetFunctionLibrary_eventGetDirectionAtSplinePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplineWidgetFunctionLibrary::execGetDirectionAtSplinePoint)
{
	P_GET_OBJECT(USplineWidget,Z_Param_InSplineWidget);
	P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
	P_GET_ENUM(ESlateSplineCoordinateSpace,Z_Param_CoordinateSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USplineWidgetFunctionLibrary::GetDirectionAtSplinePoint(Z_Param_InSplineWidget,Z_Param_PointIndex,ESlateSplineCoordinateSpace(Z_Param_CoordinateSpace));
	P_NATIVE_END;
}
// ********** End Class USplineWidgetFunctionLibrary Function GetDirectionAtSplinePoint ************

// ********** Begin Class USplineWidgetFunctionLibrary Function GetDistanceAlongSplineAtSplineInputKey 
struct Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics
{
	struct SplineWidgetFunctionLibrary_eventGetDistanceAlongSplineAtSplineInputKey_Parms
	{
		const USplineWidget* InSplineWidget;
		float InKey;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get distance along the spline at the provided input key value */" },
#endif
		{ "ModuleRelativePath", "Public/SplineWidgetFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get distance along the spline at the provided input key value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSplineWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDistanceAlongSplineAtSplineInputKey constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSplineWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDistanceAlongSplineAtSplineInputKey constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDistanceAlongSplineAtSplineInputKey Property Definitions ***********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics::NewProp_InSplineWidget = { "InSplineWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetDistanceAlongSplineAtSplineInputKey_Parms, InSplineWidget), Z_Construct_UClass_USplineWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSplineWidget_MetaData), NewProp_InSplineWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetDistanceAlongSplineAtSplineInputKey_Parms, InKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetDistanceAlongSplineAtSplineInputKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics::NewProp_InSplineWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics::PropPointers) < 2048);
// ********** End Function GetDistanceAlongSplineAtSplineInputKey Property Definitions *************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplineWidgetFunctionLibrary, nullptr, "GetDistanceAlongSplineAtSplineInputKey", 	Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics::SplineWidgetFunctionLibrary_eventGetDistanceAlongSplineAtSplineInputKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics::SplineWidgetFunctionLibrary_eventGetDistanceAlongSplineAtSplineInputKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplineWidgetFunctionLibrary::execGetDistanceAlongSplineAtSplineInputKey)
{
	P_GET_OBJECT(USplineWidget,Z_Param_InSplineWidget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USplineWidgetFunctionLibrary::GetDistanceAlongSplineAtSplineInputKey(Z_Param_InSplineWidget,Z_Param_InKey);
	P_NATIVE_END;
}
// ********** End Class USplineWidgetFunctionLibrary Function GetDistanceAlongSplineAtSplineInputKey 

// ********** Begin Class USplineWidgetFunctionLibrary Function GetInputKeyAtDistanceAlongSpline ***
struct Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics
{
	struct SplineWidgetFunctionLibrary_eventGetInputKeyAtDistanceAlongSpline_Parms
	{
		const USplineWidget* InSplineWidget;
		float Distance;
		ESlateSplineCoordinateSpace CoordinateSpace;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Given a distance along the length of this spline, return the corresponding input key at that point */" },
#endif
		{ "ModuleRelativePath", "Public/SplineWidgetFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given a distance along the length of this spline, return the corresponding input key at that point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSplineWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInputKeyAtDistanceAlongSpline constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSplineWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CoordinateSpace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInputKeyAtDistanceAlongSpline constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInputKeyAtDistanceAlongSpline Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_InSplineWidget = { "InSplineWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetInputKeyAtDistanceAlongSpline_Parms, InSplineWidget), Z_Construct_UClass_USplineWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSplineWidget_MetaData), NewProp_InSplineWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetInputKeyAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetInputKeyAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // 4198513115
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetInputKeyAtDistanceAlongSpline_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_InSplineWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::PropPointers) < 2048);
// ********** End Function GetInputKeyAtDistanceAlongSpline Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplineWidgetFunctionLibrary, nullptr, "GetInputKeyAtDistanceAlongSpline", 	Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::SplineWidgetFunctionLibrary_eventGetInputKeyAtDistanceAlongSpline_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::SplineWidgetFunctionLibrary_eventGetInputKeyAtDistanceAlongSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplineWidgetFunctionLibrary::execGetInputKeyAtDistanceAlongSpline)
{
	P_GET_OBJECT(USplineWidget,Z_Param_InSplineWidget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_ENUM(ESlateSplineCoordinateSpace,Z_Param_CoordinateSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USplineWidgetFunctionLibrary::GetInputKeyAtDistanceAlongSpline(Z_Param_InSplineWidget,Z_Param_Distance,ESlateSplineCoordinateSpace(Z_Param_CoordinateSpace));
	P_NATIVE_END;
}
// ********** End Class USplineWidgetFunctionLibrary Function GetInputKeyAtDistanceAlongSpline *****

// ********** Begin Class USplineWidgetFunctionLibrary Function GetLocationAtDistanceAlongSpline ***
struct Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics
{
	struct SplineWidgetFunctionLibrary_eventGetLocationAtDistanceAlongSpline_Parms
	{
		const USplineWidget* InSplineWidget;
		float Distance;
		ESlateSplineCoordinateSpace CoordinateSpace;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Given a distance along the length of this spline, return the point in space where this puts you */" },
#endif
		{ "ModuleRelativePath", "Public/SplineWidgetFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given a distance along the length of this spline, return the point in space where this puts you" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSplineWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLocationAtDistanceAlongSpline constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSplineWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CoordinateSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLocationAtDistanceAlongSpline constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLocationAtDistanceAlongSpline Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::NewProp_InSplineWidget = { "InSplineWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetLocationAtDistanceAlongSpline_Parms, InSplineWidget), Z_Construct_UClass_USplineWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSplineWidget_MetaData), NewProp_InSplineWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetLocationAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetLocationAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // 4198513115
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetLocationAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::NewProp_InSplineWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::PropPointers) < 2048);
// ********** End Function GetLocationAtDistanceAlongSpline Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplineWidgetFunctionLibrary, nullptr, "GetLocationAtDistanceAlongSpline", 	Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::SplineWidgetFunctionLibrary_eventGetLocationAtDistanceAlongSpline_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::SplineWidgetFunctionLibrary_eventGetLocationAtDistanceAlongSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplineWidgetFunctionLibrary::execGetLocationAtDistanceAlongSpline)
{
	P_GET_OBJECT(USplineWidget,Z_Param_InSplineWidget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_ENUM(ESlateSplineCoordinateSpace,Z_Param_CoordinateSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USplineWidgetFunctionLibrary::GetLocationAtDistanceAlongSpline(Z_Param_InSplineWidget,Z_Param_Distance,ESlateSplineCoordinateSpace(Z_Param_CoordinateSpace));
	P_NATIVE_END;
}
// ********** End Class USplineWidgetFunctionLibrary Function GetLocationAtDistanceAlongSpline *****

// ********** Begin Class USplineWidgetFunctionLibrary Function GetLocationAtSplineInputKey ********
struct Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics
{
	struct SplineWidgetFunctionLibrary_eventGetLocationAtSplineInputKey_Parms
	{
		const USplineWidget* InSplineWidget;
		float InKey;
		ESlateSplineCoordinateSpace CoordinateSpace;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get location along spline at the provided input key value */" },
#endif
		{ "ModuleRelativePath", "Public/SplineWidgetFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get location along spline at the provided input key value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSplineWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLocationAtSplineInputKey constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSplineWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CoordinateSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLocationAtSplineInputKey constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLocationAtSplineInputKey Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::NewProp_InSplineWidget = { "InSplineWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetLocationAtSplineInputKey_Parms, InSplineWidget), Z_Construct_UClass_USplineWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSplineWidget_MetaData), NewProp_InSplineWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetLocationAtSplineInputKey_Parms, InKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::NewProp_CoordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetLocationAtSplineInputKey_Parms, CoordinateSpace), Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // 4198513115
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetLocationAtSplineInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::NewProp_InSplineWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::NewProp_CoordinateSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::NewProp_CoordinateSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::PropPointers) < 2048);
// ********** End Function GetLocationAtSplineInputKey Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplineWidgetFunctionLibrary, nullptr, "GetLocationAtSplineInputKey", 	Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::SplineWidgetFunctionLibrary_eventGetLocationAtSplineInputKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::SplineWidgetFunctionLibrary_eventGetLocationAtSplineInputKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplineWidgetFunctionLibrary::execGetLocationAtSplineInputKey)
{
	P_GET_OBJECT(USplineWidget,Z_Param_InSplineWidget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
	P_GET_ENUM(ESlateSplineCoordinateSpace,Z_Param_CoordinateSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USplineWidgetFunctionLibrary::GetLocationAtSplineInputKey(Z_Param_InSplineWidget,Z_Param_InKey,ESlateSplineCoordinateSpace(Z_Param_CoordinateSpace));
	P_NATIVE_END;
}
// ********** End Class USplineWidgetFunctionLibrary Function GetLocationAtSplineInputKey **********

// ********** Begin Class USplineWidgetFunctionLibrary Function GetLocationAtSplinePoint ***********
struct Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics
{
	struct SplineWidgetFunctionLibrary_eventGetLocationAtSplinePoint_Parms
	{
		const USplineWidget* InSplineWidget;
		int32 PointIndex;
		ESlateSplineCoordinateSpace CoordinateSpace;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the location at spline point */" },
#endif
		{ "ModuleRelativePath", "Public/SplineWidgetFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the location at spline point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSplineWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLocationAtSplinePoint constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSplineWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CoordinateSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLocationAtSplinePoint constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLocationAtSplinePoint Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::NewProp_InSplineWidget = { "InSplineWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetLocationAtSplinePoint_Parms, InSplineWidget), Z_Construct_UClass_USplineWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSplineWidget_MetaData), NewProp_InSplineWidget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetLocationAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::NewProp_CoordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetLocationAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // 4198513115
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetLocationAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::NewProp_InSplineWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::NewProp_PointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::NewProp_CoordinateSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::NewProp_CoordinateSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::PropPointers) < 2048);
// ********** End Function GetLocationAtSplinePoint Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplineWidgetFunctionLibrary, nullptr, "GetLocationAtSplinePoint", 	Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::SplineWidgetFunctionLibrary_eventGetLocationAtSplinePoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::SplineWidgetFunctionLibrary_eventGetLocationAtSplinePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplineWidgetFunctionLibrary::execGetLocationAtSplinePoint)
{
	P_GET_OBJECT(USplineWidget,Z_Param_InSplineWidget);
	P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
	P_GET_ENUM(ESlateSplineCoordinateSpace,Z_Param_CoordinateSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USplineWidgetFunctionLibrary::GetLocationAtSplinePoint(Z_Param_InSplineWidget,Z_Param_PointIndex,ESlateSplineCoordinateSpace(Z_Param_CoordinateSpace));
	P_NATIVE_END;
}
// ********** End Class USplineWidgetFunctionLibrary Function GetLocationAtSplinePoint *************

// ********** Begin Class USplineWidgetFunctionLibrary Function GetRotationAngleAtDistanceAlongSpline 
struct Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics
{
	struct SplineWidgetFunctionLibrary_eventGetRotationAngleAtDistanceAlongSpline_Parms
	{
		const USplineWidget* InSplineWidget;
		float Distance;
		ESlateSplineCoordinateSpace CoordinateSpace;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Given a distance along the length of this spline, return a rotation corresponding to the spline's rotation there. */" },
#endif
		{ "ModuleRelativePath", "Public/SplineWidgetFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given a distance along the length of this spline, return a rotation corresponding to the spline's rotation there." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSplineWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRotationAngleAtDistanceAlongSpline constinit property declarations *
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSplineWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CoordinateSpace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRotationAngleAtDistanceAlongSpline constinit property declarations ***
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRotationAngleAtDistanceAlongSpline Property Definitions ************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::NewProp_InSplineWidget = { "InSplineWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetRotationAngleAtDistanceAlongSpline_Parms, InSplineWidget), Z_Construct_UClass_USplineWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSplineWidget_MetaData), NewProp_InSplineWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetRotationAngleAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetRotationAngleAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // 4198513115
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetRotationAngleAtDistanceAlongSpline_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::NewProp_InSplineWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::PropPointers) < 2048);
// ********** End Function GetRotationAngleAtDistanceAlongSpline Property Definitions **************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplineWidgetFunctionLibrary, nullptr, "GetRotationAngleAtDistanceAlongSpline", 	Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::SplineWidgetFunctionLibrary_eventGetRotationAngleAtDistanceAlongSpline_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::SplineWidgetFunctionLibrary_eventGetRotationAngleAtDistanceAlongSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplineWidgetFunctionLibrary::execGetRotationAngleAtDistanceAlongSpline)
{
	P_GET_OBJECT(USplineWidget,Z_Param_InSplineWidget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_ENUM(ESlateSplineCoordinateSpace,Z_Param_CoordinateSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USplineWidgetFunctionLibrary::GetRotationAngleAtDistanceAlongSpline(Z_Param_InSplineWidget,Z_Param_Distance,ESlateSplineCoordinateSpace(Z_Param_CoordinateSpace));
	P_NATIVE_END;
}
// ********** End Class USplineWidgetFunctionLibrary Function GetRotationAngleAtDistanceAlongSpline 

// ********** Begin Class USplineWidgetFunctionLibrary Function GetRotationAngleAtSplineInputKey ***
struct Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics
{
	struct SplineWidgetFunctionLibrary_eventGetRotationAngleAtSplineInputKey_Parms
	{
		const USplineWidget* InSplineWidget;
		float InKey;
		ESlateSplineCoordinateSpace CoordinateSpace;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get rotator corresponding to rotation along spline at the provided input key value */" },
#endif
		{ "ModuleRelativePath", "Public/SplineWidgetFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get rotator corresponding to rotation along spline at the provided input key value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSplineWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRotationAngleAtSplineInputKey constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSplineWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CoordinateSpace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRotationAngleAtSplineInputKey constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRotationAngleAtSplineInputKey Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::NewProp_InSplineWidget = { "InSplineWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetRotationAngleAtSplineInputKey_Parms, InSplineWidget), Z_Construct_UClass_USplineWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSplineWidget_MetaData), NewProp_InSplineWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetRotationAngleAtSplineInputKey_Parms, InKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::NewProp_CoordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetRotationAngleAtSplineInputKey_Parms, CoordinateSpace), Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // 4198513115
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetRotationAngleAtSplineInputKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::NewProp_InSplineWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::NewProp_CoordinateSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::NewProp_CoordinateSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::PropPointers) < 2048);
// ********** End Function GetRotationAngleAtSplineInputKey Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplineWidgetFunctionLibrary, nullptr, "GetRotationAngleAtSplineInputKey", 	Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::SplineWidgetFunctionLibrary_eventGetRotationAngleAtSplineInputKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::SplineWidgetFunctionLibrary_eventGetRotationAngleAtSplineInputKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplineWidgetFunctionLibrary::execGetRotationAngleAtSplineInputKey)
{
	P_GET_OBJECT(USplineWidget,Z_Param_InSplineWidget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
	P_GET_ENUM(ESlateSplineCoordinateSpace,Z_Param_CoordinateSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USplineWidgetFunctionLibrary::GetRotationAngleAtSplineInputKey(Z_Param_InSplineWidget,Z_Param_InKey,ESlateSplineCoordinateSpace(Z_Param_CoordinateSpace));
	P_NATIVE_END;
}
// ********** End Class USplineWidgetFunctionLibrary Function GetRotationAngleAtSplineInputKey *****

// ********** Begin Class USplineWidgetFunctionLibrary Function GetSplineLength ********************
struct Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength_Statics
{
	struct SplineWidgetFunctionLibrary_eventGetSplineLength_Parms
	{
		const USplineWidget* InSplineWidget;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns total length along this spline */" },
#endif
		{ "ModuleRelativePath", "Public/SplineWidgetFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns total length along this spline" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSplineWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSplineLength constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSplineWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSplineLength constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSplineLength Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength_Statics::NewProp_InSplineWidget = { "InSplineWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetSplineLength_Parms, InSplineWidget), Z_Construct_UClass_USplineWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSplineWidget_MetaData), NewProp_InSplineWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetSplineLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength_Statics::NewProp_InSplineWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength_Statics::PropPointers) < 2048);
// ********** End Function GetSplineLength Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplineWidgetFunctionLibrary, nullptr, "GetSplineLength", 	Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength_Statics::SplineWidgetFunctionLibrary_eventGetSplineLength_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength_Statics::SplineWidgetFunctionLibrary_eventGetSplineLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplineWidgetFunctionLibrary::execGetSplineLength)
{
	P_GET_OBJECT(USplineWidget,Z_Param_InSplineWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USplineWidgetFunctionLibrary::GetSplineLength(Z_Param_InSplineWidget);
	P_NATIVE_END;
}
// ********** End Class USplineWidgetFunctionLibrary Function GetSplineLength **********************

// ********** Begin Class USplineWidgetFunctionLibrary Function GetTangentAtDistanceAlongSpline ****
struct Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics
{
	struct SplineWidgetFunctionLibrary_eventGetTangentAtDistanceAlongSpline_Parms
	{
		const USplineWidget* InSplineWidget;
		float Distance;
		ESlateSplineCoordinateSpace CoordinateSpace;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Given a distance along the length of this spline, return the tangent vector of the spline there. */" },
#endif
		{ "ModuleRelativePath", "Public/SplineWidgetFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given a distance along the length of this spline, return the tangent vector of the spline there." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSplineWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTangentAtDistanceAlongSpline constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSplineWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CoordinateSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTangentAtDistanceAlongSpline constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTangentAtDistanceAlongSpline Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::NewProp_InSplineWidget = { "InSplineWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetTangentAtDistanceAlongSpline_Parms, InSplineWidget), Z_Construct_UClass_USplineWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSplineWidget_MetaData), NewProp_InSplineWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetTangentAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetTangentAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // 4198513115
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetTangentAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::NewProp_InSplineWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::PropPointers) < 2048);
// ********** End Function GetTangentAtDistanceAlongSpline Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplineWidgetFunctionLibrary, nullptr, "GetTangentAtDistanceAlongSpline", 	Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::SplineWidgetFunctionLibrary_eventGetTangentAtDistanceAlongSpline_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::SplineWidgetFunctionLibrary_eventGetTangentAtDistanceAlongSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplineWidgetFunctionLibrary::execGetTangentAtDistanceAlongSpline)
{
	P_GET_OBJECT(USplineWidget,Z_Param_InSplineWidget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_ENUM(ESlateSplineCoordinateSpace,Z_Param_CoordinateSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USplineWidgetFunctionLibrary::GetTangentAtDistanceAlongSpline(Z_Param_InSplineWidget,Z_Param_Distance,ESlateSplineCoordinateSpace(Z_Param_CoordinateSpace));
	P_NATIVE_END;
}
// ********** End Class USplineWidgetFunctionLibrary Function GetTangentAtDistanceAlongSpline ******

// ********** Begin Class USplineWidgetFunctionLibrary Function GetTangentAtSplineInputKey *********
struct Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics
{
	struct SplineWidgetFunctionLibrary_eventGetTangentAtSplineInputKey_Parms
	{
		const USplineWidget* InSplineWidget;
		float InKey;
		ESlateSplineCoordinateSpace CoordinateSpace;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get tangent along spline at the provided input key value */" },
#endif
		{ "ModuleRelativePath", "Public/SplineWidgetFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get tangent along spline at the provided input key value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSplineWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTangentAtSplineInputKey constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSplineWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CoordinateSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTangentAtSplineInputKey constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTangentAtSplineInputKey Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::NewProp_InSplineWidget = { "InSplineWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetTangentAtSplineInputKey_Parms, InSplineWidget), Z_Construct_UClass_USplineWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSplineWidget_MetaData), NewProp_InSplineWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetTangentAtSplineInputKey_Parms, InKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::NewProp_CoordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetTangentAtSplineInputKey_Parms, CoordinateSpace), Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // 4198513115
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetTangentAtSplineInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::NewProp_InSplineWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::NewProp_CoordinateSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::NewProp_CoordinateSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::PropPointers) < 2048);
// ********** End Function GetTangentAtSplineInputKey Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplineWidgetFunctionLibrary, nullptr, "GetTangentAtSplineInputKey", 	Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::SplineWidgetFunctionLibrary_eventGetTangentAtSplineInputKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::SplineWidgetFunctionLibrary_eventGetTangentAtSplineInputKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplineWidgetFunctionLibrary::execGetTangentAtSplineInputKey)
{
	P_GET_OBJECT(USplineWidget,Z_Param_InSplineWidget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
	P_GET_ENUM(ESlateSplineCoordinateSpace,Z_Param_CoordinateSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USplineWidgetFunctionLibrary::GetTangentAtSplineInputKey(Z_Param_InSplineWidget,Z_Param_InKey,ESlateSplineCoordinateSpace(Z_Param_CoordinateSpace));
	P_NATIVE_END;
}
// ********** End Class USplineWidgetFunctionLibrary Function GetTangentAtSplineInputKey ***********

// ********** Begin Class USplineWidgetFunctionLibrary Function GetTangentAtSplinePoint ************
struct Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics
{
	struct SplineWidgetFunctionLibrary_eventGetTangentAtSplinePoint_Parms
	{
		const USplineWidget* InSplineWidget;
		int32 PointIndex;
		ESlateSplineCoordinateSpace CoordinateSpace;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the tangent at spline point. This fetches the Leave tangent of the point. */" },
#endif
		{ "ModuleRelativePath", "Public/SplineWidgetFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the tangent at spline point. This fetches the Leave tangent of the point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSplineWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTangentAtSplinePoint constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSplineWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CoordinateSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTangentAtSplinePoint constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTangentAtSplinePoint Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::NewProp_InSplineWidget = { "InSplineWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetTangentAtSplinePoint_Parms, InSplineWidget), Z_Construct_UClass_USplineWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSplineWidget_MetaData), NewProp_InSplineWidget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetTangentAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::NewProp_CoordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetTangentAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_WidgetSplineSystem_ESlateSplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // 4198513115
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineWidgetFunctionLibrary_eventGetTangentAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::NewProp_InSplineWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::NewProp_PointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::NewProp_CoordinateSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::NewProp_CoordinateSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::PropPointers) < 2048);
// ********** End Function GetTangentAtSplinePoint Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplineWidgetFunctionLibrary, nullptr, "GetTangentAtSplinePoint", 	Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::SplineWidgetFunctionLibrary_eventGetTangentAtSplinePoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::SplineWidgetFunctionLibrary_eventGetTangentAtSplinePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplineWidgetFunctionLibrary::execGetTangentAtSplinePoint)
{
	P_GET_OBJECT(USplineWidget,Z_Param_InSplineWidget);
	P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
	P_GET_ENUM(ESlateSplineCoordinateSpace,Z_Param_CoordinateSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USplineWidgetFunctionLibrary::GetTangentAtSplinePoint(Z_Param_InSplineWidget,Z_Param_PointIndex,ESlateSplineCoordinateSpace(Z_Param_CoordinateSpace));
	P_NATIVE_END;
}
// ********** End Class USplineWidgetFunctionLibrary Function GetTangentAtSplinePoint **************

// ********** Begin Class USplineWidgetFunctionLibrary *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USplineWidgetFunctionLibrary;
UClass* USplineWidgetFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = USplineWidgetFunctionLibrary;
	if (!Z_Registration_Info_UClass_USplineWidgetFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SplineWidgetFunctionLibrary"),
			Z_Registration_Info_UClass_USplineWidgetFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUSplineWidgetFunctionLibrary,
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
	return Z_Registration_Info_UClass_USplineWidgetFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USplineWidgetFunctionLibrary_NoRegister()
{
	return USplineWidgetFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USplineWidgetFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SplineWidgetFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SplineWidgetFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USplineWidgetFunctionLibrary constinit property declarations *************
// ********** End Class USplineWidgetFunctionLibrary constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetDirectionAtDistanceAlongSpline"), .Pointer = &USplineWidgetFunctionLibrary::execGetDirectionAtDistanceAlongSpline },
		{ .NameUTF8 = UTF8TEXT("GetDirectionAtSplineInputKey"), .Pointer = &USplineWidgetFunctionLibrary::execGetDirectionAtSplineInputKey },
		{ .NameUTF8 = UTF8TEXT("GetDirectionAtSplinePoint"), .Pointer = &USplineWidgetFunctionLibrary::execGetDirectionAtSplinePoint },
		{ .NameUTF8 = UTF8TEXT("GetDistanceAlongSplineAtSplineInputKey"), .Pointer = &USplineWidgetFunctionLibrary::execGetDistanceAlongSplineAtSplineInputKey },
		{ .NameUTF8 = UTF8TEXT("GetInputKeyAtDistanceAlongSpline"), .Pointer = &USplineWidgetFunctionLibrary::execGetInputKeyAtDistanceAlongSpline },
		{ .NameUTF8 = UTF8TEXT("GetLocationAtDistanceAlongSpline"), .Pointer = &USplineWidgetFunctionLibrary::execGetLocationAtDistanceAlongSpline },
		{ .NameUTF8 = UTF8TEXT("GetLocationAtSplineInputKey"), .Pointer = &USplineWidgetFunctionLibrary::execGetLocationAtSplineInputKey },
		{ .NameUTF8 = UTF8TEXT("GetLocationAtSplinePoint"), .Pointer = &USplineWidgetFunctionLibrary::execGetLocationAtSplinePoint },
		{ .NameUTF8 = UTF8TEXT("GetRotationAngleAtDistanceAlongSpline"), .Pointer = &USplineWidgetFunctionLibrary::execGetRotationAngleAtDistanceAlongSpline },
		{ .NameUTF8 = UTF8TEXT("GetRotationAngleAtSplineInputKey"), .Pointer = &USplineWidgetFunctionLibrary::execGetRotationAngleAtSplineInputKey },
		{ .NameUTF8 = UTF8TEXT("GetSplineLength"), .Pointer = &USplineWidgetFunctionLibrary::execGetSplineLength },
		{ .NameUTF8 = UTF8TEXT("GetTangentAtDistanceAlongSpline"), .Pointer = &USplineWidgetFunctionLibrary::execGetTangentAtDistanceAlongSpline },
		{ .NameUTF8 = UTF8TEXT("GetTangentAtSplineInputKey"), .Pointer = &USplineWidgetFunctionLibrary::execGetTangentAtSplineInputKey },
		{ .NameUTF8 = UTF8TEXT("GetTangentAtSplinePoint"), .Pointer = &USplineWidgetFunctionLibrary::execGetTangentAtSplinePoint },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtDistanceAlongSpline, "GetDirectionAtDistanceAlongSpline" }, // 2805046181
		{ &Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplineInputKey, "GetDirectionAtSplineInputKey" }, // 3841872389
		{ &Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDirectionAtSplinePoint, "GetDirectionAtSplinePoint" }, // 1593356375
		{ &Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey, "GetDistanceAlongSplineAtSplineInputKey" }, // 4261356529
		{ &Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetInputKeyAtDistanceAlongSpline, "GetInputKeyAtDistanceAlongSpline" }, // 3745226590
		{ &Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtDistanceAlongSpline, "GetLocationAtDistanceAlongSpline" }, // 377928772
		{ &Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplineInputKey, "GetLocationAtSplineInputKey" }, // 1144071807
		{ &Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetLocationAtSplinePoint, "GetLocationAtSplinePoint" }, // 1987292425
		{ &Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtDistanceAlongSpline, "GetRotationAngleAtDistanceAlongSpline" }, // 1786848668
		{ &Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetRotationAngleAtSplineInputKey, "GetRotationAngleAtSplineInputKey" }, // 286960803
		{ &Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetSplineLength, "GetSplineLength" }, // 3832793975
		{ &Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtDistanceAlongSpline, "GetTangentAtDistanceAlongSpline" }, // 3062263651
		{ &Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplineInputKey, "GetTangentAtSplineInputKey" }, // 1510071725
		{ &Z_Construct_UFunction_USplineWidgetFunctionLibrary_GetTangentAtSplinePoint, "GetTangentAtSplinePoint" }, // 3535395106
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplineWidgetFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USplineWidgetFunctionLibrary_Statics
UObject* (*const Z_Construct_UClass_USplineWidgetFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetSplineSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplineWidgetFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USplineWidgetFunctionLibrary_Statics::ClassParams = {
	&USplineWidgetFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USplineWidgetFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USplineWidgetFunctionLibrary_Statics::Class_MetaDataParams)
};
void USplineWidgetFunctionLibrary::StaticRegisterNativesUSplineWidgetFunctionLibrary()
{
	UClass* Class = USplineWidgetFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USplineWidgetFunctionLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USplineWidgetFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_USplineWidgetFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplineWidgetFunctionLibrary.OuterSingleton, Z_Construct_UClass_USplineWidgetFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USplineWidgetFunctionLibrary.OuterSingleton;
}
USplineWidgetFunctionLibrary::USplineWidgetFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USplineWidgetFunctionLibrary);
USplineWidgetFunctionLibrary::~USplineWidgetFunctionLibrary() {}
// ********** End Class USplineWidgetFunctionLibrary ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidgetFunctionLibrary_h__Script_WidgetSplineSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESlateSplineCoordinateSpace_StaticEnum, TEXT("ESlateSplineCoordinateSpace"), &Z_Registration_Info_UEnum_ESlateSplineCoordinateSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4198513115U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USplineWidgetFunctionLibrary, USplineWidgetFunctionLibrary::StaticClass, TEXT("USplineWidgetFunctionLibrary"), &Z_Registration_Info_UClass_USplineWidgetFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplineWidgetFunctionLibrary), 3645864913U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidgetFunctionLibrary_h__Script_WidgetSplineSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidgetFunctionLibrary_h__Script_WidgetSplineSystem_86909591{
	TEXT("/Script/WidgetSplineSystem"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidgetFunctionLibrary_h__Script_WidgetSplineSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidgetFunctionLibrary_h__Script_WidgetSplineSystem_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidgetFunctionLibrary_h__Script_WidgetSplineSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidgetFunctionLibrary_h__Script_WidgetSplineSystem_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
