// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JUE/UI/JUEActionContext.h"
#include "Engine/DataTable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeJUEActionContext() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActionWidget_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
JUE_API UClass* Z_Construct_UClass_UJUEActionContext();
JUE_API UClass* Z_Construct_UClass_UJUEActionContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_JUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UJUEActionContext Function SetInputActions *******************************
struct Z_Construct_UFunction_UJUEActionContext_SetInputActions_Statics
{
	struct JUEActionContext_eventSetInputActions_Parms
	{
		TArray<FDataTableRowHandle> NewInputActions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Action Context" },
		{ "ModuleRelativePath", "UI/JUEActionContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewInputActions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetInputActions constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewInputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetInputActions constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetInputActions Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJUEActionContext_SetInputActions_Statics::NewProp_NewInputActions_Inner = { "NewInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(0, nullptr) }; // 395055942
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJUEActionContext_SetInputActions_Statics::NewProp_NewInputActions = { "NewInputActions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEActionContext_eventSetInputActions_Parms, NewInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewInputActions_MetaData), NewProp_NewInputActions_MetaData) }; // 395055942
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEActionContext_SetInputActions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEActionContext_SetInputActions_Statics::NewProp_NewInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEActionContext_SetInputActions_Statics::NewProp_NewInputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEActionContext_SetInputActions_Statics::PropPointers) < 2048);
// ********** End Function SetInputActions Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEActionContext_SetInputActions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEActionContext, nullptr, "SetInputActions", 	Z_Construct_UFunction_UJUEActionContext_SetInputActions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEActionContext_SetInputActions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEActionContext_SetInputActions_Statics::JUEActionContext_eventSetInputActions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEActionContext_SetInputActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEActionContext_SetInputActions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEActionContext_SetInputActions_Statics::JUEActionContext_eventSetInputActions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEActionContext_SetInputActions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEActionContext_SetInputActions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEActionContext::execSetInputActions)
{
	P_GET_TARRAY_REF(FDataTableRowHandle,Z_Param_Out_NewInputActions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInputActions(Z_Param_Out_NewInputActions);
	P_NATIVE_END;
}
// ********** End Class UJUEActionContext Function SetInputActions *********************************

// ********** Begin Class UJUEActionContext ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UJUEActionContext;
UClass* UJUEActionContext::GetPrivateStaticClass()
{
	using TClass = UJUEActionContext;
	if (!Z_Registration_Info_UClass_UJUEActionContext.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("JUEActionContext"),
			Z_Registration_Info_UClass_UJUEActionContext.InnerSingleton,
			StaticRegisterNativesUJUEActionContext,
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
	return Z_Registration_Info_UClass_UJUEActionContext.InnerSingleton;
}
UClass* Z_Construct_UClass_UJUEActionContext_NoRegister()
{
	return UJUEActionContext::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UJUEActionContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/JUEActionContext.h" },
		{ "ModuleRelativePath", "UI/JUEActionContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BindedWidgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/JUEActionContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionTextWidget_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "BindedWidgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/JUEActionContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[] = {
		{ "Category", "Action Context Parameters" },
		{ "EditCondition", "ActionTextWidget != nullptr" },
		{ "ModuleRelativePath", "UI/JUEActionContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActions_MetaData[] = {
		{ "Category", "Action Context Parameters" },
		{ "ModuleRelativePath", "UI/JUEActionContext.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UJUEActionContext constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionTextWidget;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UJUEActionContext constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetInputActions"), .Pointer = &UJUEActionContext::execSetInputActions },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJUEActionContext_SetInputActions, "SetInputActions" }, // 3970806541
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJUEActionContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UJUEActionContext_Statics

// ********** Begin Class UJUEActionContext Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJUEActionContext_Statics::NewProp_ActionWidget = { "ActionWidget", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJUEActionContext, ActionWidget), Z_Construct_UClass_UCommonActionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionWidget_MetaData), NewProp_ActionWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJUEActionContext_Statics::NewProp_ActionTextWidget = { "ActionTextWidget", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJUEActionContext, ActionTextWidget), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionTextWidget_MetaData), NewProp_ActionTextWidget_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UJUEActionContext_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJUEActionContext, ActionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionName_MetaData), NewProp_ActionName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJUEActionContext_Statics::NewProp_InputActions_Inner = { "InputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(0, nullptr) }; // 395055942
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJUEActionContext_Statics::NewProp_InputActions = { "InputActions", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJUEActionContext, InputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActions_MetaData), NewProp_InputActions_MetaData) }; // 395055942
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJUEActionContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJUEActionContext_Statics::NewProp_ActionWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJUEActionContext_Statics::NewProp_ActionTextWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJUEActionContext_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJUEActionContext_Statics::NewProp_InputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJUEActionContext_Statics::NewProp_InputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJUEActionContext_Statics::PropPointers) < 2048);
// ********** End Class UJUEActionContext Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UJUEActionContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_JUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJUEActionContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJUEActionContext_Statics::ClassParams = {
	&UJUEActionContext::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UJUEActionContext_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UJUEActionContext_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJUEActionContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UJUEActionContext_Statics::Class_MetaDataParams)
};
void UJUEActionContext::StaticRegisterNativesUJUEActionContext()
{
	UClass* Class = UJUEActionContext::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UJUEActionContext_Statics::Funcs));
}
UClass* Z_Construct_UClass_UJUEActionContext()
{
	if (!Z_Registration_Info_UClass_UJUEActionContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJUEActionContext.OuterSingleton, Z_Construct_UClass_UJUEActionContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJUEActionContext.OuterSingleton;
}
UJUEActionContext::UJUEActionContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UJUEActionContext);
UJUEActionContext::~UJUEActionContext() {}
// ********** End Class UJUEActionContext **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEActionContext_h__Script_JUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJUEActionContext, UJUEActionContext::StaticClass, TEXT("UJUEActionContext"), &Z_Registration_Info_UClass_UJUEActionContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJUEActionContext), 1031580261U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEActionContext_h__Script_JUE_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEActionContext_h__Script_JUE_3112242359{
	TEXT("/Script/JUE"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEActionContext_h__Script_JUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEActionContext_h__Script_JUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
