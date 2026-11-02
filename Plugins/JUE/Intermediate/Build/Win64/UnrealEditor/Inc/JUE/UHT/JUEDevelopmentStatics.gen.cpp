// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JUE/System/JUEDevelopmentStatics.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeJUEDevelopmentStatics() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
JUE_API UClass* Z_Construct_UClass_UJUEDevelopmentStatics();
JUE_API UClass* Z_Construct_UClass_UJUEDevelopmentStatics_NoRegister();
UPackage* Z_Construct_UPackage__Script_JUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UJUEDevelopmentStatics Function ReportDebugMessage ***********************
struct Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics
{
	struct JUEDevelopmentStatics_eventReportDebugMessage_Parms
	{
		FString DebugMessage;
		const UObject* WorldContextObject;
		FLinearColor CustomColor;
		int32 MessageKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Development Statics" },
		{ "CPP_Default_CustomColor", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_MessageKey", "-1" },
		{ "CPP_Default_WorldContextObject", "None" },
		{ "ModuleRelativePath", "System/JUEDevelopmentStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReportDebugMessage constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_DebugMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReportDebugMessage constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportDebugMessage Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::NewProp_DebugMessage = { "DebugMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEDevelopmentStatics_eventReportDebugMessage_Parms, DebugMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugMessage_MetaData), NewProp_DebugMessage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEDevelopmentStatics_eventReportDebugMessage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::NewProp_CustomColor = { "CustomColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEDevelopmentStatics_eventReportDebugMessage_Parms, CustomColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::NewProp_MessageKey = { "MessageKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEDevelopmentStatics_eventReportDebugMessage_Parms, MessageKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::NewProp_DebugMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::NewProp_CustomColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::NewProp_MessageKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::PropPointers) < 2048);
// ********** End Function ReportDebugMessage Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEDevelopmentStatics, nullptr, "ReportDebugMessage", 	Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::JUEDevelopmentStatics_eventReportDebugMessage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::JUEDevelopmentStatics_eventReportDebugMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEDevelopmentStatics::execReportDebugMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DebugMessage);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLinearColor,Z_Param_CustomColor);
	P_GET_PROPERTY(FIntProperty,Z_Param_MessageKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	UJUEDevelopmentStatics::ReportDebugMessage(Z_Param_DebugMessage,Z_Param_WorldContextObject,Z_Param_CustomColor,Z_Param_MessageKey);
	P_NATIVE_END;
}
// ********** End Class UJUEDevelopmentStatics Function ReportDebugMessage *************************

// ********** Begin Class UJUEDevelopmentStatics Function ReportErrorMessage ***********************
struct Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics
{
	struct JUEDevelopmentStatics_eventReportErrorMessage_Parms
	{
		FString ErrorMessage;
		const UObject* WorldContextObject;
		int32 MessageKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Development Statics" },
		{ "CPP_Default_MessageKey", "-1" },
		{ "CPP_Default_WorldContextObject", "None" },
		{ "ModuleRelativePath", "System/JUEDevelopmentStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReportErrorMessage constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReportErrorMessage constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportErrorMessage Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEDevelopmentStatics_eventReportErrorMessage_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEDevelopmentStatics_eventReportErrorMessage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics::NewProp_MessageKey = { "MessageKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEDevelopmentStatics_eventReportErrorMessage_Parms, MessageKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics::NewProp_ErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics::NewProp_MessageKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics::PropPointers) < 2048);
// ********** End Function ReportErrorMessage Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEDevelopmentStatics, nullptr, "ReportErrorMessage", 	Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics::JUEDevelopmentStatics_eventReportErrorMessage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics::JUEDevelopmentStatics_eventReportErrorMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEDevelopmentStatics::execReportErrorMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_MessageKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	UJUEDevelopmentStatics::ReportErrorMessage(Z_Param_ErrorMessage,Z_Param_WorldContextObject,Z_Param_MessageKey);
	P_NATIVE_END;
}
// ********** End Class UJUEDevelopmentStatics Function ReportErrorMessage *************************

// ********** Begin Class UJUEDevelopmentStatics Function ReportWarningMessage *********************
struct Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics
{
	struct JUEDevelopmentStatics_eventReportWarningMessage_Parms
	{
		FString WarningMessage;
		const UObject* WorldContextObject;
		int32 MessageKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Development Statics" },
		{ "CPP_Default_MessageKey", "-1" },
		{ "CPP_Default_WorldContextObject", "None" },
		{ "ModuleRelativePath", "System/JUEDevelopmentStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarningMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReportWarningMessage constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_WarningMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReportWarningMessage constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportWarningMessage Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics::NewProp_WarningMessage = { "WarningMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEDevelopmentStatics_eventReportWarningMessage_Parms, WarningMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarningMessage_MetaData), NewProp_WarningMessage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEDevelopmentStatics_eventReportWarningMessage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics::NewProp_MessageKey = { "MessageKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEDevelopmentStatics_eventReportWarningMessage_Parms, MessageKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics::NewProp_WarningMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics::NewProp_MessageKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics::PropPointers) < 2048);
// ********** End Function ReportWarningMessage Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEDevelopmentStatics, nullptr, "ReportWarningMessage", 	Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics::JUEDevelopmentStatics_eventReportWarningMessage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics::JUEDevelopmentStatics_eventReportWarningMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEDevelopmentStatics::execReportWarningMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_WarningMessage);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_MessageKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	UJUEDevelopmentStatics::ReportWarningMessage(Z_Param_WarningMessage,Z_Param_WorldContextObject,Z_Param_MessageKey);
	P_NATIVE_END;
}
// ********** End Class UJUEDevelopmentStatics Function ReportWarningMessage ***********************

// ********** Begin Class UJUEDevelopmentStatics ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UJUEDevelopmentStatics;
UClass* UJUEDevelopmentStatics::GetPrivateStaticClass()
{
	using TClass = UJUEDevelopmentStatics;
	if (!Z_Registration_Info_UClass_UJUEDevelopmentStatics.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("JUEDevelopmentStatics"),
			Z_Registration_Info_UClass_UJUEDevelopmentStatics.InnerSingleton,
			StaticRegisterNativesUJUEDevelopmentStatics,
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
	return Z_Registration_Info_UClass_UJUEDevelopmentStatics.InnerSingleton;
}
UClass* Z_Construct_UClass_UJUEDevelopmentStatics_NoRegister()
{
	return UJUEDevelopmentStatics::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UJUEDevelopmentStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Various static functions for Enhanced development.\n */" },
#endif
		{ "IncludePath", "System/JUEDevelopmentStatics.h" },
		{ "ModuleRelativePath", "System/JUEDevelopmentStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Various static functions for Enhanced development." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UJUEDevelopmentStatics constinit property declarations *******************
// ********** End Class UJUEDevelopmentStatics constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ReportDebugMessage"), .Pointer = &UJUEDevelopmentStatics::execReportDebugMessage },
		{ .NameUTF8 = UTF8TEXT("ReportErrorMessage"), .Pointer = &UJUEDevelopmentStatics::execReportErrorMessage },
		{ .NameUTF8 = UTF8TEXT("ReportWarningMessage"), .Pointer = &UJUEDevelopmentStatics::execReportWarningMessage },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJUEDevelopmentStatics_ReportDebugMessage, "ReportDebugMessage" }, // 1441073293
		{ &Z_Construct_UFunction_UJUEDevelopmentStatics_ReportErrorMessage, "ReportErrorMessage" }, // 3254964789
		{ &Z_Construct_UFunction_UJUEDevelopmentStatics_ReportWarningMessage, "ReportWarningMessage" }, // 2839477035
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJUEDevelopmentStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UJUEDevelopmentStatics_Statics
UObject* (*const Z_Construct_UClass_UJUEDevelopmentStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_JUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJUEDevelopmentStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJUEDevelopmentStatics_Statics::ClassParams = {
	&UJUEDevelopmentStatics::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJUEDevelopmentStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UJUEDevelopmentStatics_Statics::Class_MetaDataParams)
};
void UJUEDevelopmentStatics::StaticRegisterNativesUJUEDevelopmentStatics()
{
	UClass* Class = UJUEDevelopmentStatics::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UJUEDevelopmentStatics_Statics::Funcs));
}
UClass* Z_Construct_UClass_UJUEDevelopmentStatics()
{
	if (!Z_Registration_Info_UClass_UJUEDevelopmentStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJUEDevelopmentStatics.OuterSingleton, Z_Construct_UClass_UJUEDevelopmentStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJUEDevelopmentStatics.OuterSingleton;
}
UJUEDevelopmentStatics::UJUEDevelopmentStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UJUEDevelopmentStatics);
UJUEDevelopmentStatics::~UJUEDevelopmentStatics() {}
// ********** End Class UJUEDevelopmentStatics *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_JUEDevelopmentStatics_h__Script_JUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJUEDevelopmentStatics, UJUEDevelopmentStatics::StaticClass, TEXT("UJUEDevelopmentStatics"), &Z_Registration_Info_UClass_UJUEDevelopmentStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJUEDevelopmentStatics), 3038962982U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_JUEDevelopmentStatics_h__Script_JUE_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_JUEDevelopmentStatics_h__Script_JUE_3114204819{
	TEXT("/Script/JUE"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_JUEDevelopmentStatics_h__Script_JUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_JUEDevelopmentStatics_h__Script_JUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
