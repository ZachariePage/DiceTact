// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SplineWidget.h"
#include "Data/SlateSpline.h"
#include "Data/SlateSplineCurves.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSplineWidget() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_WidgetSplineSystem();
WIDGETSPLINESYSTEM_API UClass* Z_Construct_UClass_USplineWidget();
WIDGETSPLINESYSTEM_API UClass* Z_Construct_UClass_USplineWidget_NoRegister();
WIDGETSPLINESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSpline();
WIDGETSPLINESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSplineCurves();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USplineWidget Function UpdateSpline **************************************
struct Z_Construct_UFunction_USplineWidget_UpdateSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Public/SplineWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateSpline constinit property declarations **************************
// ********** End Function UpdateSpline constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineWidget_UpdateSpline_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplineWidget, nullptr, "UpdateSpline", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineWidget_UpdateSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineWidget_UpdateSpline_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USplineWidget_UpdateSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineWidget_UpdateSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplineWidget::execUpdateSpline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSpline();
	P_NATIVE_END;
}
// ********** End Class USplineWidget Function UpdateSpline ****************************************

// ********** Begin Class USplineWidget ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USplineWidget;
UClass* USplineWidget::GetPrivateStaticClass()
{
	using TClass = USplineWidget;
	if (!Z_Registration_Info_UClass_USplineWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SplineWidget"),
			Z_Registration_Info_UClass_USplineWidget.InnerSingleton,
			StaticRegisterNativesUSplineWidget,
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
	return Z_Registration_Info_UClass_USplineWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USplineWidget_NoRegister()
{
	return USplineWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USplineWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SplineWidget.h" },
		{ "ModuleRelativePath", "Public/SplineWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineData_MetaData[] = {
		{ "Category", "Spline Widget" },
		{ "ModuleRelativePath", "Public/SplineWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/SplineWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USplineWidget constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplineData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplineCurves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USplineWidget constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UpdateSpline"), .Pointer = &USplineWidget::execUpdateSpline },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USplineWidget_UpdateSpline, "UpdateSpline" }, // 2782305238
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplineWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USplineWidget_Statics

// ********** Begin Class USplineWidget Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineWidget_Statics::NewProp_SplineData = { "SplineData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplineWidget, SplineData), Z_Construct_UScriptStruct_FSlateSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineData_MetaData), NewProp_SplineData_MetaData) }; // 3570078223
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineWidget_Statics::NewProp_SplineCurves = { "SplineCurves", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplineWidget, SplineCurves), Z_Construct_UScriptStruct_FSlateSplineCurves, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineCurves_MetaData), NewProp_SplineCurves_MetaData) }; // 1428299407
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplineWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineWidget_Statics::NewProp_SplineData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineWidget_Statics::NewProp_SplineCurves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplineWidget_Statics::PropPointers) < 2048);
// ********** End Class USplineWidget Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_USplineWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetSplineSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplineWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USplineWidget_Statics::ClassParams = {
	&USplineWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USplineWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USplineWidget_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USplineWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USplineWidget_Statics::Class_MetaDataParams)
};
void USplineWidget::StaticRegisterNativesUSplineWidget()
{
	UClass* Class = USplineWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USplineWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_USplineWidget()
{
	if (!Z_Registration_Info_UClass_USplineWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplineWidget.OuterSingleton, Z_Construct_UClass_USplineWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USplineWidget.OuterSingleton;
}
USplineWidget::USplineWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USplineWidget);
USplineWidget::~USplineWidget() {}
// ********** End Class USplineWidget **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidget_h__Script_WidgetSplineSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USplineWidget, USplineWidget::StaticClass, TEXT("USplineWidget"), &Z_Registration_Info_UClass_USplineWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplineWidget), 281925908U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidget_h__Script_WidgetSplineSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidget_h__Script_WidgetSplineSystem_1193025499{
	TEXT("/Script/WidgetSplineSystem"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidget_h__Script_WidgetSplineSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidget_h__Script_WidgetSplineSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
