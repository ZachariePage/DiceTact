// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NamingConventionValidator/Widgets/EditorNCVTool.h"
#include "NamingConventionValidator/NCValidationParameters.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEditorNCVTool() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UEditorNCVTool();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UEditorNCVTool_NoRegister();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UNCVEditorSettings_NoRegister();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UNCVResultsSorterWidget_NoRegister();
NAMINGCONVENTIONVALIDATOR_API UEnum* Z_Construct_UEnum_NamingConventionValidator_EValidationResult();
NAMINGCONVENTIONVALIDATOR_API UScriptStruct* Z_Construct_UScriptStruct_FNCValidationParameters();
NAMINGCONVENTIONVALIDATOR_API UScriptStruct* Z_Construct_UScriptStruct_FNCValidationResult();
SCRIPTABLEEDITORWIDGETS_API UClass* Z_Construct_UClass_UDetailsView_NoRegister();
UPackage* Z_Construct_UPackage__Script_NamingConventionValidator();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EValidationResult *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EValidationResult;
static UEnum* EValidationResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EValidationResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EValidationResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NamingConventionValidator_EValidationResult, (UObject*)Z_Construct_UPackage__Script_NamingConventionValidator(), TEXT("EValidationResult"));
	}
	return Z_Registration_Info_UEnum_EValidationResult.OuterSingleton;
}
template<> NAMINGCONVENTIONVALIDATOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EValidationResult>()
{
	return EValidationResult_StaticEnum();
}
struct Z_Construct_UEnum_NamingConventionValidator_EValidationResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Error.Name", "EValidationResult::Error" },
		{ "ModuleRelativePath", "Widgets/EditorNCVTool.h" },
		{ "Success.Name", "EValidationResult::Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EValidationResult::Error", (int64)EValidationResult::Error },
		{ "EValidationResult::Success", (int64)EValidationResult::Success },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_NamingConventionValidator_EValidationResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NamingConventionValidator_EValidationResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NamingConventionValidator,
	nullptr,
	"EValidationResult",
	"EValidationResult",
	Z_Construct_UEnum_NamingConventionValidator_EValidationResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NamingConventionValidator_EValidationResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NamingConventionValidator_EValidationResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NamingConventionValidator_EValidationResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NamingConventionValidator_EValidationResult()
{
	if (!Z_Registration_Info_UEnum_EValidationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EValidationResult.InnerSingleton, Z_Construct_UEnum_NamingConventionValidator_EValidationResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EValidationResult.InnerSingleton;
}
// ********** End Enum EValidationResult ***********************************************************

// ********** Begin ScriptStruct FNCValidationResult ***********************************************
struct Z_Construct_UScriptStruct_FNCValidationResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FNCValidationResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FNCValidationResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Widgets/EditorNCVTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrefixResult_MetaData[] = {
		{ "Category", "Validation Result" },
		{ "ModuleRelativePath", "Widgets/EditorNCVTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuffixResult_MetaData[] = {
		{ "Category", "Validation Result" },
		{ "ModuleRelativePath", "Widgets/EditorNCVTool.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FNCValidationResult constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrefixResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrefixResult;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SuffixResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SuffixResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FNCValidationResult constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNCValidationResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FNCValidationResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNCValidationResult;
class UScriptStruct* FNCValidationResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNCValidationResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNCValidationResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNCValidationResult, (UObject*)Z_Construct_UPackage__Script_NamingConventionValidator(), TEXT("NCValidationResult"));
	}
	return Z_Registration_Info_UScriptStruct_FNCValidationResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FNCValidationResult Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNCValidationResult_Statics::NewProp_PrefixResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNCValidationResult_Statics::NewProp_PrefixResult = { "PrefixResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNCValidationResult, PrefixResult), Z_Construct_UEnum_NamingConventionValidator_EValidationResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrefixResult_MetaData), NewProp_PrefixResult_MetaData) }; // 1078697202
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNCValidationResult_Statics::NewProp_SuffixResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNCValidationResult_Statics::NewProp_SuffixResult = { "SuffixResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNCValidationResult, SuffixResult), Z_Construct_UEnum_NamingConventionValidator_EValidationResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuffixResult_MetaData), NewProp_SuffixResult_MetaData) }; // 1078697202
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNCValidationResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCValidationResult_Statics::NewProp_PrefixResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCValidationResult_Statics::NewProp_PrefixResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCValidationResult_Statics::NewProp_SuffixResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCValidationResult_Statics::NewProp_SuffixResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCValidationResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FNCValidationResult Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNCValidationResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NamingConventionValidator,
	nullptr,
	&NewStructOps,
	"NCValidationResult",
	Z_Construct_UScriptStruct_FNCValidationResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCValidationResult_Statics::PropPointers),
	sizeof(FNCValidationResult),
	alignof(FNCValidationResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCValidationResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNCValidationResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNCValidationResult()
{
	if (!Z_Registration_Info_UScriptStruct_FNCValidationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNCValidationResult.InnerSingleton, Z_Construct_UScriptStruct_FNCValidationResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FNCValidationResult.InnerSingleton);
}
// ********** End ScriptStruct FNCValidationResult *************************************************

// ********** Begin Class UEditorNCVTool Function FixUpAllRedirectors ******************************
struct Z_Construct_UFunction_UEditorNCVTool_FixUpAllRedirectors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Tool" },
		{ "ModuleRelativePath", "Widgets/EditorNCVTool.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FixUpAllRedirectors constinit property declarations *******************
// ********** End Function FixUpAllRedirectors constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorNCVTool_FixUpAllRedirectors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEditorNCVTool, nullptr, "FixUpAllRedirectors", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorNCVTool_FixUpAllRedirectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditorNCVTool_FixUpAllRedirectors_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEditorNCVTool_FixUpAllRedirectors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorNCVTool_FixUpAllRedirectors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditorNCVTool::execFixUpAllRedirectors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FixUpAllRedirectors();
	P_NATIVE_END;
}
// ********** End Class UEditorNCVTool Function FixUpAllRedirectors ********************************

// ********** Begin Class UEditorNCVTool Function OnDirectoryValidation ****************************
struct EditorNCVTool_eventOnDirectoryValidation_Parms
{
	EValidationResult Result;
};
static FName NAME_UEditorNCVTool_OnDirectoryValidation = FName(TEXT("OnDirectoryValidation"));
void UEditorNCVTool::OnDirectoryValidation(EValidationResult Result)
{
	EditorNCVTool_eventOnDirectoryValidation_Parms Parms;
	Parms.Result=Result;
	UFunction* Func = FindFunctionChecked(NAME_UEditorNCVTool_OnDirectoryValidation);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UEditorNCVTool_OnDirectoryValidation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/EditorNCVTool.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnDirectoryValidation constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnDirectoryValidation constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnDirectoryValidation Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorNCVTool_OnDirectoryValidation_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorNCVTool_OnDirectoryValidation_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditorNCVTool_eventOnDirectoryValidation_Parms, Result), Z_Construct_UEnum_NamingConventionValidator_EValidationResult, METADATA_PARAMS(0, nullptr) }; // 1078697202
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorNCVTool_OnDirectoryValidation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorNCVTool_OnDirectoryValidation_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorNCVTool_OnDirectoryValidation_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorNCVTool_OnDirectoryValidation_Statics::PropPointers) < 2048);
// ********** End Function OnDirectoryValidation Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorNCVTool_OnDirectoryValidation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEditorNCVTool, nullptr, "OnDirectoryValidation", 	Z_Construct_UFunction_UEditorNCVTool_OnDirectoryValidation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorNCVTool_OnDirectoryValidation_Statics::PropPointers), 
sizeof(EditorNCVTool_eventOnDirectoryValidation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorNCVTool_OnDirectoryValidation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditorNCVTool_OnDirectoryValidation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(EditorNCVTool_eventOnDirectoryValidation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditorNCVTool_OnDirectoryValidation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorNCVTool_OnDirectoryValidation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UEditorNCVTool Function OnDirectoryValidation ******************************

// ********** Begin Class UEditorNCVTool Function StartValidation **********************************
struct Z_Construct_UFunction_UEditorNCVTool_StartValidation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Tool" },
		{ "ModuleRelativePath", "Widgets/EditorNCVTool.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartValidation constinit property declarations ***********************
// ********** End Function StartValidation constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorNCVTool_StartValidation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEditorNCVTool, nullptr, "StartValidation", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorNCVTool_StartValidation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditorNCVTool_StartValidation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEditorNCVTool_StartValidation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorNCVTool_StartValidation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditorNCVTool::execStartValidation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartValidation();
	P_NATIVE_END;
}
// ********** End Class UEditorNCVTool Function StartValidation ************************************

// ********** Begin Class UEditorNCVTool ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEditorNCVTool;
UClass* UEditorNCVTool::GetPrivateStaticClass()
{
	using TClass = UEditorNCVTool;
	if (!Z_Registration_Info_UClass_UEditorNCVTool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EditorNCVTool"),
			Z_Registration_Info_UClass_UEditorNCVTool.InnerSingleton,
			StaticRegisterNativesUEditorNCVTool,
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
	return Z_Registration_Info_UClass_UEditorNCVTool.InnerSingleton;
}
UClass* Z_Construct_UClass_UEditorNCVTool_NoRegister()
{
	return UEditorNCVTool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEditorNCVTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Could have been a UEditorValidator \n */" },
#endif
		{ "IncludePath", "Widgets/EditorNCVTool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Widgets/EditorNCVTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Could have been a UEditorValidator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationParametersDetailsView_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "NCV Tool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Member properties */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/EditorNCVTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Member properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationParameters_MetaData[] = {
		{ "Category", "NCV Tool" },
		{ "ModuleRelativePath", "Widgets/EditorNCVTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VResultsSorterWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "NCV Tool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/EditorNCVTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NCVEditorSettings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Settings\n" },
#endif
		{ "ModuleRelativePath", "Widgets/EditorNCVTool.h" },
		{ "NativeConst", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UEditorNCVTool constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValidationParametersDetailsView;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValidationParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VResultsSorterWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NCVEditorSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEditorNCVTool constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FixUpAllRedirectors"), .Pointer = &UEditorNCVTool::execFixUpAllRedirectors },
		{ .NameUTF8 = UTF8TEXT("StartValidation"), .Pointer = &UEditorNCVTool::execStartValidation },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorNCVTool_FixUpAllRedirectors, "FixUpAllRedirectors" }, // 3097785357
		{ &Z_Construct_UFunction_UEditorNCVTool_OnDirectoryValidation, "OnDirectoryValidation" }, // 2916161754
		{ &Z_Construct_UFunction_UEditorNCVTool_StartValidation, "StartValidation" }, // 3089461076
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorNCVTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEditorNCVTool_Statics

// ********** Begin Class UEditorNCVTool Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorNCVTool_Statics::NewProp_ValidationParametersDetailsView = { "ValidationParametersDetailsView", nullptr, (EPropertyFlags)0x01240800000b001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditorNCVTool, ValidationParametersDetailsView), Z_Construct_UClass_UDetailsView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationParametersDetailsView_MetaData), NewProp_ValidationParametersDetailsView_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorNCVTool_Statics::NewProp_ValidationParameters = { "ValidationParameters", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditorNCVTool, ValidationParameters), Z_Construct_UScriptStruct_FNCValidationParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationParameters_MetaData), NewProp_ValidationParameters_MetaData) }; // 1210258946
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorNCVTool_Statics::NewProp_VResultsSorterWidget = { "VResultsSorterWidget", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditorNCVTool, VResultsSorterWidget), Z_Construct_UClass_UNCVResultsSorterWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VResultsSorterWidget_MetaData), NewProp_VResultsSorterWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorNCVTool_Statics::NewProp_NCVEditorSettings = { "NCVEditorSettings", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditorNCVTool, NCVEditorSettings), Z_Construct_UClass_UNCVEditorSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NCVEditorSettings_MetaData), NewProp_NCVEditorSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorNCVTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorNCVTool_Statics::NewProp_ValidationParametersDetailsView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorNCVTool_Statics::NewProp_ValidationParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorNCVTool_Statics::NewProp_VResultsSorterWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorNCVTool_Statics::NewProp_NCVEditorSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorNCVTool_Statics::PropPointers) < 2048);
// ********** End Class UEditorNCVTool Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_UEditorNCVTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NamingConventionValidator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorNCVTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorNCVTool_Statics::ClassParams = {
	&UEditorNCVTool::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEditorNCVTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEditorNCVTool_Statics::PropPointers),
	0,
	0x00B030A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorNCVTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorNCVTool_Statics::Class_MetaDataParams)
};
void UEditorNCVTool::StaticRegisterNativesUEditorNCVTool()
{
	UClass* Class = UEditorNCVTool::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UEditorNCVTool_Statics::Funcs));
}
UClass* Z_Construct_UClass_UEditorNCVTool()
{
	if (!Z_Registration_Info_UClass_UEditorNCVTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorNCVTool.OuterSingleton, Z_Construct_UClass_UEditorNCVTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditorNCVTool.OuterSingleton;
}
UEditorNCVTool::UEditorNCVTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEditorNCVTool);
UEditorNCVTool::~UEditorNCVTool() {}
// ********** End Class UEditorNCVTool *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h__Script_NamingConventionValidator_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EValidationResult_StaticEnum, TEXT("EValidationResult"), &Z_Registration_Info_UEnum_EValidationResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1078697202U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNCValidationResult::StaticStruct, Z_Construct_UScriptStruct_FNCValidationResult_Statics::NewStructOps, TEXT("NCValidationResult"),&Z_Registration_Info_UScriptStruct_FNCValidationResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNCValidationResult), 2653459255U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditorNCVTool, UEditorNCVTool::StaticClass, TEXT("UEditorNCVTool"), &Z_Registration_Info_UClass_UEditorNCVTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorNCVTool), 441807668U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h__Script_NamingConventionValidator_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h__Script_NamingConventionValidator_3785486544{
	TEXT("/Script/NamingConventionValidator"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h__Script_NamingConventionValidator_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h__Script_NamingConventionValidator_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h__Script_NamingConventionValidator_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h__Script_NamingConventionValidator_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h__Script_NamingConventionValidator_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h__Script_NamingConventionValidator_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
