// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NamingConventionValidator/Widgets/NamingConventionEntryWidget.h"
#include "AssetRegistry/AssetData.h"
#include "NamingConventionValidator/NCVEditorSettings.h"
#include "NamingConventionValidator/Widgets/EditorNCVTool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNamingConventionEntryWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UNamingConventionEntryWidget();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UNamingConventionEntryWidget_NoRegister();
NAMINGCONVENTIONVALIDATOR_API UScriptStruct* Z_Construct_UScriptStruct_FNamingConvention();
NAMINGCONVENTIONVALIDATOR_API UScriptStruct* Z_Construct_UScriptStruct_FNCValidationResult();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NamingConventionValidator();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNamingConventionEntryWidget Function BrowseToAsset **********************
struct Z_Construct_UFunction_UNamingConventionEntryWidget_BrowseToAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Entry" },
		{ "ModuleRelativePath", "Widgets/NamingConventionEntryWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BrowseToAsset constinit property declarations *************************
// ********** End Function BrowseToAsset constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNamingConventionEntryWidget_BrowseToAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNamingConventionEntryWidget, nullptr, "BrowseToAsset", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_BrowseToAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNamingConventionEntryWidget_BrowseToAsset_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UNamingConventionEntryWidget_BrowseToAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNamingConventionEntryWidget_BrowseToAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNamingConventionEntryWidget::execBrowseToAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BrowseToAsset();
	P_NATIVE_END;
}
// ********** End Class UNamingConventionEntryWidget Function BrowseToAsset ************************

// ********** Begin Class UNamingConventionEntryWidget Function GetEntryAssetData ******************
struct Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryAssetData_Statics
{
	struct NamingConventionEntryWidget_eventGetEntryAssetData_Parms
	{
		FAssetData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Entry" },
		{ "ModuleRelativePath", "Widgets/NamingConventionEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEntryAssetData constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEntryAssetData constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEntryAssetData Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryAssetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NamingConventionEntryWidget_eventGetEntryAssetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3308834901
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryAssetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryAssetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryAssetData_Statics::PropPointers) < 2048);
// ********** End Function GetEntryAssetData Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryAssetData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNamingConventionEntryWidget, nullptr, "GetEntryAssetData", 	Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryAssetData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryAssetData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryAssetData_Statics::NamingConventionEntryWidget_eventGetEntryAssetData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryAssetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryAssetData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryAssetData_Statics::NamingConventionEntryWidget_eventGetEntryAssetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryAssetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryAssetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNamingConventionEntryWidget::execGetEntryAssetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAssetData*)Z_Param__Result=P_THIS->GetEntryAssetData();
	P_NATIVE_END;
}
// ********** End Class UNamingConventionEntryWidget Function GetEntryAssetData ********************

// ********** Begin Class UNamingConventionEntryWidget Function GetEntryNamingConvention ***********
struct Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryNamingConvention_Statics
{
	struct NamingConventionEntryWidget_eventGetEntryNamingConvention_Parms
	{
		FNamingConvention ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Entry" },
		{ "ModuleRelativePath", "Widgets/NamingConventionEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEntryNamingConvention constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEntryNamingConvention constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEntryNamingConvention Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryNamingConvention_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NamingConventionEntryWidget_eventGetEntryNamingConvention_Parms, ReturnValue), Z_Construct_UScriptStruct_FNamingConvention, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1596572204
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryNamingConvention_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryNamingConvention_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryNamingConvention_Statics::PropPointers) < 2048);
// ********** End Function GetEntryNamingConvention Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryNamingConvention_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNamingConventionEntryWidget, nullptr, "GetEntryNamingConvention", 	Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryNamingConvention_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryNamingConvention_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryNamingConvention_Statics::NamingConventionEntryWidget_eventGetEntryNamingConvention_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryNamingConvention_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryNamingConvention_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryNamingConvention_Statics::NamingConventionEntryWidget_eventGetEntryNamingConvention_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryNamingConvention()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryNamingConvention_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNamingConventionEntryWidget::execGetEntryNamingConvention)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNamingConvention*)Z_Param__Result=P_THIS->GetEntryNamingConvention();
	P_NATIVE_END;
}
// ********** End Class UNamingConventionEntryWidget Function GetEntryNamingConvention *************

// ********** Begin Class UNamingConventionEntryWidget Function GetEntryValidationResult ***********
struct Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryValidationResult_Statics
{
	struct NamingConventionEntryWidget_eventGetEntryValidationResult_Parms
	{
		FNCValidationResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Entry" },
		{ "ModuleRelativePath", "Widgets/NamingConventionEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEntryValidationResult constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEntryValidationResult constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEntryValidationResult Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryValidationResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NamingConventionEntryWidget_eventGetEntryValidationResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FNCValidationResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2653459255
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryValidationResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryValidationResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryValidationResult_Statics::PropPointers) < 2048);
// ********** End Function GetEntryValidationResult Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryValidationResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNamingConventionEntryWidget, nullptr, "GetEntryValidationResult", 	Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryValidationResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryValidationResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryValidationResult_Statics::NamingConventionEntryWidget_eventGetEntryValidationResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryValidationResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryValidationResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryValidationResult_Statics::NamingConventionEntryWidget_eventGetEntryValidationResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryValidationResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryValidationResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNamingConventionEntryWidget::execGetEntryValidationResult)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNCValidationResult*)Z_Param__Result=P_THIS->GetEntryValidationResult();
	P_NATIVE_END;
}
// ********** End Class UNamingConventionEntryWidget Function GetEntryValidationResult *************

// ********** Begin Class UNamingConventionEntryWidget Function InitializeEntry ********************
struct Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics
{
	struct NamingConventionEntryWidget_eventInitializeEntry_Parms
	{
		FAssetData AssetData;
		FNamingConvention NamingConvention;
		FNCValidationResult ValidationResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Entry" },
		{ "ModuleRelativePath", "Widgets/NamingConventionEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamingConvention_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeEntry constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NamingConvention;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValidationResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeEntry constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeEntry Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NamingConventionEntryWidget_eventInitializeEntry_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetData_MetaData), NewProp_AssetData_MetaData) }; // 3308834901
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics::NewProp_NamingConvention = { "NamingConvention", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NamingConventionEntryWidget_eventInitializeEntry_Parms, NamingConvention), Z_Construct_UScriptStruct_FNamingConvention, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamingConvention_MetaData), NewProp_NamingConvention_MetaData) }; // 1596572204
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics::NewProp_ValidationResult = { "ValidationResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NamingConventionEntryWidget_eventInitializeEntry_Parms, ValidationResult), Z_Construct_UScriptStruct_FNCValidationResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationResult_MetaData), NewProp_ValidationResult_MetaData) }; // 2653459255
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics::NewProp_AssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics::NewProp_NamingConvention,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics::NewProp_ValidationResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics::PropPointers) < 2048);
// ********** End Function InitializeEntry Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNamingConventionEntryWidget, nullptr, "InitializeEntry", 	Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics::NamingConventionEntryWidget_eventInitializeEntry_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics::NamingConventionEntryWidget_eventInitializeEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNamingConventionEntryWidget::execInitializeEntry)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetData);
	P_GET_STRUCT_REF(FNamingConvention,Z_Param_Out_NamingConvention);
	P_GET_STRUCT_REF(FNCValidationResult,Z_Param_Out_ValidationResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeEntry(Z_Param_Out_AssetData,Z_Param_Out_NamingConvention,Z_Param_Out_ValidationResult);
	P_NATIVE_END;
}
// ********** End Class UNamingConventionEntryWidget Function InitializeEntry **********************

// ********** Begin Class UNamingConventionEntryWidget Function OnEntryInitialized *****************
struct NamingConventionEntryWidget_eventOnEntryInitialized_Parms
{
	FAssetData AssetData;
	FNamingConvention NamingConvention;
	FNCValidationResult ValidationResult;
};
static FName NAME_UNamingConventionEntryWidget_OnEntryInitialized = FName(TEXT("OnEntryInitialized"));
void UNamingConventionEntryWidget::OnEntryInitialized(FAssetData const& AssetData, FNamingConvention const& NamingConvention, FNCValidationResult const& ValidationResult)
{
	NamingConventionEntryWidget_eventOnEntryInitialized_Parms Parms;
	Parms.AssetData=AssetData;
	Parms.NamingConvention=NamingConvention;
	Parms.ValidationResult=ValidationResult;
	UFunction* Func = FindFunctionChecked(NAME_UNamingConventionEntryWidget_OnEntryInitialized);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Called for updates in blueprints when the internal functions are done. */" },
#endif
		{ "ModuleRelativePath", "Widgets/NamingConventionEntryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called for updates in blueprints when the internal functions are done." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamingConvention_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnEntryInitialized constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NamingConvention;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValidationResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnEntryInitialized constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnEntryInitialized Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NamingConventionEntryWidget_eventOnEntryInitialized_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetData_MetaData), NewProp_AssetData_MetaData) }; // 3308834901
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized_Statics::NewProp_NamingConvention = { "NamingConvention", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NamingConventionEntryWidget_eventOnEntryInitialized_Parms, NamingConvention), Z_Construct_UScriptStruct_FNamingConvention, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamingConvention_MetaData), NewProp_NamingConvention_MetaData) }; // 1596572204
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized_Statics::NewProp_ValidationResult = { "ValidationResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NamingConventionEntryWidget_eventOnEntryInitialized_Parms, ValidationResult), Z_Construct_UScriptStruct_FNCValidationResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationResult_MetaData), NewProp_ValidationResult_MetaData) }; // 2653459255
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized_Statics::NewProp_AssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized_Statics::NewProp_NamingConvention,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized_Statics::NewProp_ValidationResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized_Statics::PropPointers) < 2048);
// ********** End Function OnEntryInitialized Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNamingConventionEntryWidget, nullptr, "OnEntryInitialized", 	Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized_Statics::PropPointers), 
sizeof(NamingConventionEntryWidget_eventOnEntryInitialized_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(NamingConventionEntryWidget_eventOnEntryInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UNamingConventionEntryWidget Function OnEntryInitialized *******************

// ********** Begin Class UNamingConventionEntryWidget Function OnEntryUpdated *********************
static FName NAME_UNamingConventionEntryWidget_OnEntryUpdated = FName(TEXT("OnEntryUpdated"));
void UNamingConventionEntryWidget::OnEntryUpdated()
{
	UFunction* Func = FindFunctionChecked(NAME_UNamingConventionEntryWidget_OnEntryUpdated);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/NamingConventionEntryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called after trying to fix an asset. Also Updates the AssetData's location." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnEntryUpdated constinit property declarations ************************
// ********** End Function OnEntryUpdated constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNamingConventionEntryWidget, nullptr, "OnEntryUpdated", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryUpdated_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UNamingConventionEntryWidget Function OnEntryUpdated ***********************

// ********** Begin Class UNamingConventionEntryWidget Function RemoveEntry ************************
struct Z_Construct_UFunction_UNamingConventionEntryWidget_RemoveEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Entry" },
		{ "ModuleRelativePath", "Widgets/NamingConventionEntryWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveEntry constinit property declarations ***************************
// ********** End Function RemoveEntry constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNamingConventionEntryWidget_RemoveEntry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNamingConventionEntryWidget, nullptr, "RemoveEntry", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_RemoveEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNamingConventionEntryWidget_RemoveEntry_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UNamingConventionEntryWidget_RemoveEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNamingConventionEntryWidget_RemoveEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNamingConventionEntryWidget::execRemoveEntry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveEntry();
	P_NATIVE_END;
}
// ********** End Class UNamingConventionEntryWidget Function RemoveEntry **************************

// ********** Begin Class UNamingConventionEntryWidget Function RenameAsset ************************
struct Z_Construct_UFunction_UNamingConventionEntryWidget_RenameAsset_Statics
{
	struct NamingConventionEntryWidget_eventRenameAsset_Parms
	{
		FString NewAssetName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Entry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This is the exposed function when trying to force rename the asset.\n\x09 * When calling it, it will update the asset,\n\x09 * then call Updates functions (OnEntryUpdated).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Widgets/NamingConventionEntryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the exposed function when trying to force rename the asset.\n       * When calling it, it will update the asset,\n       * then call Updates functions (OnEntryUpdated)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RenameAsset constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewAssetName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RenameAsset constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RenameAsset Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNamingConventionEntryWidget_RenameAsset_Statics::NewProp_NewAssetName = { "NewAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NamingConventionEntryWidget_eventRenameAsset_Parms, NewAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAssetName_MetaData), NewProp_NewAssetName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNamingConventionEntryWidget_RenameAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNamingConventionEntryWidget_RenameAsset_Statics::NewProp_NewAssetName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_RenameAsset_Statics::PropPointers) < 2048);
// ********** End Function RenameAsset Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNamingConventionEntryWidget_RenameAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNamingConventionEntryWidget, nullptr, "RenameAsset", 	Z_Construct_UFunction_UNamingConventionEntryWidget_RenameAsset_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_RenameAsset_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNamingConventionEntryWidget_RenameAsset_Statics::NamingConventionEntryWidget_eventRenameAsset_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_RenameAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNamingConventionEntryWidget_RenameAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNamingConventionEntryWidget_RenameAsset_Statics::NamingConventionEntryWidget_eventRenameAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNamingConventionEntryWidget_RenameAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNamingConventionEntryWidget_RenameAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNamingConventionEntryWidget::execRenameAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewAssetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RenameAsset(Z_Param_NewAssetName);
	P_NATIVE_END;
}
// ********** End Class UNamingConventionEntryWidget Function RenameAsset **************************

// ********** Begin Class UNamingConventionEntryWidget Function TryMatchAssetToConvention **********
struct Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics
{
	struct NamingConventionEntryWidget_eventTryMatchAssetToConvention_Parms
	{
		FString TargetConvention;
		bool bSuffix;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Entry" },
		{ "ModuleRelativePath", "Widgets/NamingConventionEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetConvention_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryMatchAssetToConvention constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetConvention;
	static void NewProp_bSuffix_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuffix;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryMatchAssetToConvention constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryMatchAssetToConvention Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics::NewProp_TargetConvention = { "TargetConvention", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NamingConventionEntryWidget_eventTryMatchAssetToConvention_Parms, TargetConvention), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetConvention_MetaData), NewProp_TargetConvention_MetaData) };
void Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics::NewProp_bSuffix_SetBit(void* Obj)
{
	((NamingConventionEntryWidget_eventTryMatchAssetToConvention_Parms*)Obj)->bSuffix = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics::NewProp_bSuffix = { "bSuffix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NamingConventionEntryWidget_eventTryMatchAssetToConvention_Parms), &Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics::NewProp_bSuffix_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics::NewProp_TargetConvention,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics::NewProp_bSuffix,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics::PropPointers) < 2048);
// ********** End Function TryMatchAssetToConvention Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNamingConventionEntryWidget, nullptr, "TryMatchAssetToConvention", 	Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics::NamingConventionEntryWidget_eventTryMatchAssetToConvention_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics::NamingConventionEntryWidget_eventTryMatchAssetToConvention_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNamingConventionEntryWidget::execTryMatchAssetToConvention)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TargetConvention);
	P_GET_UBOOL(Z_Param_bSuffix);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryMatchAssetToConvention(Z_Param_TargetConvention,Z_Param_bSuffix);
	P_NATIVE_END;
}
// ********** End Class UNamingConventionEntryWidget Function TryMatchAssetToConvention ************

// ********** Begin Class UNamingConventionEntryWidget *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UNamingConventionEntryWidget;
UClass* UNamingConventionEntryWidget::GetPrivateStaticClass()
{
	using TClass = UNamingConventionEntryWidget;
	if (!Z_Registration_Info_UClass_UNamingConventionEntryWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NamingConventionEntryWidget"),
			Z_Registration_Info_UClass_UNamingConventionEntryWidget.InnerSingleton,
			StaticRegisterNativesUNamingConventionEntryWidget,
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
	return Z_Registration_Info_UClass_UNamingConventionEntryWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UNamingConventionEntryWidget_NoRegister()
{
	return UNamingConventionEntryWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNamingConventionEntryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/NamingConventionEntryWidget.h" },
		{ "ModuleRelativePath", "Widgets/NamingConventionEntryWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UNamingConventionEntryWidget constinit property declarations *************
// ********** End Class UNamingConventionEntryWidget constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BrowseToAsset"), .Pointer = &UNamingConventionEntryWidget::execBrowseToAsset },
		{ .NameUTF8 = UTF8TEXT("GetEntryAssetData"), .Pointer = &UNamingConventionEntryWidget::execGetEntryAssetData },
		{ .NameUTF8 = UTF8TEXT("GetEntryNamingConvention"), .Pointer = &UNamingConventionEntryWidget::execGetEntryNamingConvention },
		{ .NameUTF8 = UTF8TEXT("GetEntryValidationResult"), .Pointer = &UNamingConventionEntryWidget::execGetEntryValidationResult },
		{ .NameUTF8 = UTF8TEXT("InitializeEntry"), .Pointer = &UNamingConventionEntryWidget::execInitializeEntry },
		{ .NameUTF8 = UTF8TEXT("RemoveEntry"), .Pointer = &UNamingConventionEntryWidget::execRemoveEntry },
		{ .NameUTF8 = UTF8TEXT("RenameAsset"), .Pointer = &UNamingConventionEntryWidget::execRenameAsset },
		{ .NameUTF8 = UTF8TEXT("TryMatchAssetToConvention"), .Pointer = &UNamingConventionEntryWidget::execTryMatchAssetToConvention },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNamingConventionEntryWidget_BrowseToAsset, "BrowseToAsset" }, // 3297725733
		{ &Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryAssetData, "GetEntryAssetData" }, // 2998857912
		{ &Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryNamingConvention, "GetEntryNamingConvention" }, // 1362221015
		{ &Z_Construct_UFunction_UNamingConventionEntryWidget_GetEntryValidationResult, "GetEntryValidationResult" }, // 1115520578
		{ &Z_Construct_UFunction_UNamingConventionEntryWidget_InitializeEntry, "InitializeEntry" }, // 580681167
		{ &Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryInitialized, "OnEntryInitialized" }, // 1494062346
		{ &Z_Construct_UFunction_UNamingConventionEntryWidget_OnEntryUpdated, "OnEntryUpdated" }, // 2470709292
		{ &Z_Construct_UFunction_UNamingConventionEntryWidget_RemoveEntry, "RemoveEntry" }, // 447371197
		{ &Z_Construct_UFunction_UNamingConventionEntryWidget_RenameAsset, "RenameAsset" }, // 3583736360
		{ &Z_Construct_UFunction_UNamingConventionEntryWidget_TryMatchAssetToConvention, "TryMatchAssetToConvention" }, // 2788897583
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNamingConventionEntryWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UNamingConventionEntryWidget_Statics
UObject* (*const Z_Construct_UClass_UNamingConventionEntryWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NamingConventionValidator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNamingConventionEntryWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNamingConventionEntryWidget_Statics::ClassParams = {
	&UNamingConventionEntryWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNamingConventionEntryWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNamingConventionEntryWidget_Statics::Class_MetaDataParams)
};
void UNamingConventionEntryWidget::StaticRegisterNativesUNamingConventionEntryWidget()
{
	UClass* Class = UNamingConventionEntryWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UNamingConventionEntryWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UNamingConventionEntryWidget()
{
	if (!Z_Registration_Info_UClass_UNamingConventionEntryWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNamingConventionEntryWidget.OuterSingleton, Z_Construct_UClass_UNamingConventionEntryWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNamingConventionEntryWidget.OuterSingleton;
}
UNamingConventionEntryWidget::UNamingConventionEntryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNamingConventionEntryWidget);
UNamingConventionEntryWidget::~UNamingConventionEntryWidget() {}
// ********** End Class UNamingConventionEntryWidget ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NamingConventionEntryWidget_h__Script_NamingConventionValidator_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNamingConventionEntryWidget, UNamingConventionEntryWidget::StaticClass, TEXT("UNamingConventionEntryWidget"), &Z_Registration_Info_UClass_UNamingConventionEntryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNamingConventionEntryWidget), 3447695134U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NamingConventionEntryWidget_h__Script_NamingConventionValidator_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NamingConventionEntryWidget_h__Script_NamingConventionValidator_3040759675{
	TEXT("/Script/NamingConventionValidator"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NamingConventionEntryWidget_h__Script_NamingConventionValidator_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NamingConventionEntryWidget_h__Script_NamingConventionValidator_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
