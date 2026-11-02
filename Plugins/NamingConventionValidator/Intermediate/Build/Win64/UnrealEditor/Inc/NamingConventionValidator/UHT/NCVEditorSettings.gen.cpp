// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NamingConventionValidator/NCVEditorSettings.h"
#include "NamingConventionValidator/NCValidationParameters.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNCVEditorSettings() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UNCVEditorSettings();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UNCVEditorSettings_NoRegister();
NAMINGCONVENTIONVALIDATOR_API UScriptStruct* Z_Construct_UScriptStruct_FNamingConvention();
NAMINGCONVENTIONVALIDATOR_API UScriptStruct* Z_Construct_UScriptStruct_FNCValidationParameters();
UPackage* Z_Construct_UPackage__Script_NamingConventionValidator();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FNamingConvention *************************************************
struct Z_Construct_UScriptStruct_FNamingConvention_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FNamingConvention); }
	static inline consteval int16 GetStructAlignment() { return alignof(FNamingConvention); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "NCVEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Naming convention of a type. Add an underscore (_) at the end or beginning." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowValidation_MetaData[] = {
		{ "Category", "Convention Parameters" },
		{ "DisplayName", "Allow Validation on this naming convention" },
		{ "ModuleRelativePath", "NCVEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedPrefixes_MetaData[] = {
		{ "Category", "Convention Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, DisplayName=\"Validates this classes\")\n//bool bValidateSubClasses = false;\n" },
#endif
		{ "ModuleRelativePath", "NCVEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, DisplayName=\"Validates this classes\")\nbool bValidateSubClasses = false;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedSuffixes_MetaData[] = {
		{ "Category", "Convention Parameters" },
		{ "ModuleRelativePath", "NCVEditorSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FNamingConvention constinit property declarations *****************
	static void NewProp_bAllowValidation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowValidation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AllowedPrefixes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedPrefixes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AllowedSuffixes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedSuffixes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FNamingConvention constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamingConvention>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FNamingConvention_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNamingConvention;
class UScriptStruct* FNamingConvention::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNamingConvention.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNamingConvention.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamingConvention, (UObject*)Z_Construct_UPackage__Script_NamingConventionValidator(), TEXT("NamingConvention"));
	}
	return Z_Registration_Info_UScriptStruct_FNamingConvention.OuterSingleton;
	}

// ********** Begin ScriptStruct FNamingConvention Property Definitions ****************************
void Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_bAllowValidation_SetBit(void* Obj)
{
	((FNamingConvention*)Obj)->bAllowValidation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_bAllowValidation = { "bAllowValidation", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNamingConvention), &Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_bAllowValidation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowValidation_MetaData), NewProp_bAllowValidation_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_AllowedPrefixes_Inner = { "AllowedPrefixes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_AllowedPrefixes = { "AllowedPrefixes", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamingConvention, AllowedPrefixes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedPrefixes_MetaData), NewProp_AllowedPrefixes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_AllowedSuffixes_Inner = { "AllowedSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_AllowedSuffixes = { "AllowedSuffixes", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamingConvention, AllowedSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedSuffixes_MetaData), NewProp_AllowedSuffixes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamingConvention_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_bAllowValidation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_AllowedPrefixes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_AllowedPrefixes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_AllowedSuffixes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_AllowedSuffixes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamingConvention_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FNamingConvention Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamingConvention_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NamingConventionValidator,
	nullptr,
	&NewStructOps,
	"NamingConvention",
	Z_Construct_UScriptStruct_FNamingConvention_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamingConvention_Statics::PropPointers),
	sizeof(FNamingConvention),
	alignof(FNamingConvention),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamingConvention_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNamingConvention_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNamingConvention()
{
	if (!Z_Registration_Info_UScriptStruct_FNamingConvention.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNamingConvention.InnerSingleton, Z_Construct_UScriptStruct_FNamingConvention_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FNamingConvention.InnerSingleton);
}
// ********** End ScriptStruct FNamingConvention ***************************************************

// ********** Begin Class UNCVEditorSettings Function GetNamingConventions *************************
struct Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics
{
	struct NCVEditorSettings_eventGetNamingConventions_Parms
	{
		TMap<TSubclassOf<UObject>,FNamingConvention> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Editor Settings" },
		{ "ModuleRelativePath", "NCVEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNamingConventions constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNamingConventions constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNamingConventions Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNamingConvention, METADATA_PARAMS(0, nullptr) }; // 1596572204
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NCVEditorSettings_eventGetNamingConventions_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1596572204
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics::PropPointers) < 2048);
// ********** End Function GetNamingConventions Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNCVEditorSettings, nullptr, "GetNamingConventions", 	Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics::NCVEditorSettings_eventGetNamingConventions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics::NCVEditorSettings_eventGetNamingConventions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNCVEditorSettings::execGetNamingConventions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<TSubclassOf<UObject>,FNamingConvention>*)Z_Param__Result=P_THIS->GetNamingConventions();
	P_NATIVE_END;
}
// ********** End Class UNCVEditorSettings Function GetNamingConventions ***************************

// ********** Begin Class UNCVEditorSettings Function GetNCVWidgetTool *****************************
struct Z_Construct_UFunction_UNCVEditorSettings_GetNCVWidgetTool_Statics
{
	struct NCVEditorSettings_eventGetNCVWidgetTool_Parms
	{
		UEditorUtilityWidgetBlueprint* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Editor Settings" },
		{ "ModuleRelativePath", "NCVEditorSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNCVWidgetTool constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNCVWidgetTool constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNCVWidgetTool Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNCVEditorSettings_GetNCVWidgetTool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NCVEditorSettings_eventGetNCVWidgetTool_Parms, ReturnValue), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNCVEditorSettings_GetNCVWidgetTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVEditorSettings_GetNCVWidgetTool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_GetNCVWidgetTool_Statics::PropPointers) < 2048);
// ********** End Function GetNCVWidgetTool Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNCVEditorSettings_GetNCVWidgetTool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNCVEditorSettings, nullptr, "GetNCVWidgetTool", 	Z_Construct_UFunction_UNCVEditorSettings_GetNCVWidgetTool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_GetNCVWidgetTool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNCVEditorSettings_GetNCVWidgetTool_Statics::NCVEditorSettings_eventGetNCVWidgetTool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_GetNCVWidgetTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNCVEditorSettings_GetNCVWidgetTool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNCVEditorSettings_GetNCVWidgetTool_Statics::NCVEditorSettings_eventGetNCVWidgetTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNCVEditorSettings_GetNCVWidgetTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNCVEditorSettings_GetNCVWidgetTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNCVEditorSettings::execGetNCVWidgetTool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEditorUtilityWidgetBlueprint**)Z_Param__Result=P_THIS->GetNCVWidgetTool();
	P_NATIVE_END;
}
// ********** End Class UNCVEditorSettings Function GetNCVWidgetTool *******************************

// ********** Begin Class UNCVEditorSettings Function GetTargetValidationDirectory *****************
struct Z_Construct_UFunction_UNCVEditorSettings_GetTargetValidationDirectory_Statics
{
	struct NCVEditorSettings_eventGetTargetValidationDirectory_Parms
	{
		FDirectoryPath ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Editor Settings" },
		{ "ModuleRelativePath", "NCVEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTargetValidationDirectory constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTargetValidationDirectory constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTargetValidationDirectory Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNCVEditorSettings_GetTargetValidationDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NCVEditorSettings_eventGetTargetValidationDirectory_Parms, ReturnValue), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1225349189
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNCVEditorSettings_GetTargetValidationDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVEditorSettings_GetTargetValidationDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_GetTargetValidationDirectory_Statics::PropPointers) < 2048);
// ********** End Function GetTargetValidationDirectory Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNCVEditorSettings_GetTargetValidationDirectory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNCVEditorSettings, nullptr, "GetTargetValidationDirectory", 	Z_Construct_UFunction_UNCVEditorSettings_GetTargetValidationDirectory_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_GetTargetValidationDirectory_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNCVEditorSettings_GetTargetValidationDirectory_Statics::NCVEditorSettings_eventGetTargetValidationDirectory_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_GetTargetValidationDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNCVEditorSettings_GetTargetValidationDirectory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNCVEditorSettings_GetTargetValidationDirectory_Statics::NCVEditorSettings_eventGetTargetValidationDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNCVEditorSettings_GetTargetValidationDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNCVEditorSettings_GetTargetValidationDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNCVEditorSettings::execGetTargetValidationDirectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDirectoryPath*)Z_Param__Result=P_THIS->GetTargetValidationDirectory();
	P_NATIVE_END;
}
// ********** End Class UNCVEditorSettings Function GetTargetValidationDirectory *******************

// ********** Begin Class UNCVEditorSettings Function ShouldCheckSubDirectories ********************
struct Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories_Statics
{
	struct NCVEditorSettings_eventShouldCheckSubDirectories_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Editor Settings" },
		{ "ModuleRelativePath", "NCVEditorSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShouldCheckSubDirectories constinit property declarations *************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShouldCheckSubDirectories constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShouldCheckSubDirectories Property Definitions ************************
void Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NCVEditorSettings_eventShouldCheckSubDirectories_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NCVEditorSettings_eventShouldCheckSubDirectories_Parms), &Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories_Statics::PropPointers) < 2048);
// ********** End Function ShouldCheckSubDirectories Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNCVEditorSettings, nullptr, "ShouldCheckSubDirectories", 	Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories_Statics::NCVEditorSettings_eventShouldCheckSubDirectories_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories_Statics::NCVEditorSettings_eventShouldCheckSubDirectories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNCVEditorSettings::execShouldCheckSubDirectories)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldCheckSubDirectories();
	P_NATIVE_END;
}
// ********** End Class UNCVEditorSettings Function ShouldCheckSubDirectories **********************

// ********** Begin Class UNCVEditorSettings Function ShouldLogMatchingConventions *****************
struct Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions_Statics
{
	struct NCVEditorSettings_eventShouldLogMatchingConventions_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Editor Settings" },
		{ "ModuleRelativePath", "NCVEditorSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShouldLogMatchingConventions constinit property declarations **********
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShouldLogMatchingConventions constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShouldLogMatchingConventions Property Definitions *********************
void Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NCVEditorSettings_eventShouldLogMatchingConventions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NCVEditorSettings_eventShouldLogMatchingConventions_Parms), &Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions_Statics::PropPointers) < 2048);
// ********** End Function ShouldLogMatchingConventions Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNCVEditorSettings, nullptr, "ShouldLogMatchingConventions", 	Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions_Statics::NCVEditorSettings_eventShouldLogMatchingConventions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions_Statics::NCVEditorSettings_eventShouldLogMatchingConventions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNCVEditorSettings::execShouldLogMatchingConventions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldLogMatchingConventions();
	P_NATIVE_END;
}
// ********** End Class UNCVEditorSettings Function ShouldLogMatchingConventions *******************

// ********** Begin Class UNCVEditorSettings Function ShouldPerformValidationOnLoad ****************
struct Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad_Statics
{
	struct NCVEditorSettings_eventShouldPerformValidationOnLoad_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Editor Settings" },
		{ "ModuleRelativePath", "NCVEditorSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShouldPerformValidationOnLoad constinit property declarations *********
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShouldPerformValidationOnLoad constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShouldPerformValidationOnLoad Property Definitions ********************
void Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NCVEditorSettings_eventShouldPerformValidationOnLoad_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NCVEditorSettings_eventShouldPerformValidationOnLoad_Parms), &Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad_Statics::PropPointers) < 2048);
// ********** End Function ShouldPerformValidationOnLoad Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNCVEditorSettings, nullptr, "ShouldPerformValidationOnLoad", 	Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad_Statics::NCVEditorSettings_eventShouldPerformValidationOnLoad_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad_Statics::NCVEditorSettings_eventShouldPerformValidationOnLoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNCVEditorSettings::execShouldPerformValidationOnLoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldPerformValidationOnLoad();
	P_NATIVE_END;
}
// ********** End Class UNCVEditorSettings Function ShouldPerformValidationOnLoad ******************

// ********** Begin Class UNCVEditorSettings *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UNCVEditorSettings;
UClass* UNCVEditorSettings::GetPrivateStaticClass()
{
	using TClass = UNCVEditorSettings;
	if (!Z_Registration_Info_UClass_UNCVEditorSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NCVEditorSettings"),
			Z_Registration_Info_UClass_UNCVEditorSettings.InnerSingleton,
			StaticRegisterNativesUNCVEditorSettings,
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
	return Z_Registration_Info_UClass_UNCVEditorSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UNCVEditorSettings_NoRegister()
{
	return UNCVEditorSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNCVEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * When finding the class, first find it in the map, then if not found, check if it is a subclass of it.\n */" },
#endif
		{ "IncludePath", "NCVEditorSettings.h" },
		{ "ModuleRelativePath", "NCVEditorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When finding the class, first find it in the map, then if not found, check if it is a subclass of it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerformValidationOnLoad_MetaData[] = {
		{ "Category", "On Project Loaded" },
		{ "DisplayName", "Perform validation on module Loaded" },
		{ "ModuleRelativePath", "NCVEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perform a validation on all assets after the project is launched." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValidationParameters_MetaData[] = {
		{ "Category", "Default Validation Parameters" },
		{ "ModuleRelativePath", "NCVEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EUWidget_MetaData[] = {
		{ "Category", "Default Validation Parameters" },
		{ "DisplayName", "Editor Utility Widget Validation Tool" },
		{ "ModuleRelativePath", "NCVEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamingConventions_MetaData[] = {
		{ "Category", "Naming conventions" },
		{ "ModuleRelativePath", "NCVEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add entries that should be scanned" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UNCVEditorSettings constinit property declarations ***********************
	static void NewProp_bPerformValidationOnLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformValidationOnLoad;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValidationParameters;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EUWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NamingConventions_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NamingConventions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NamingConventions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UNCVEditorSettings constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetNamingConventions"), .Pointer = &UNCVEditorSettings::execGetNamingConventions },
		{ .NameUTF8 = UTF8TEXT("GetNCVWidgetTool"), .Pointer = &UNCVEditorSettings::execGetNCVWidgetTool },
		{ .NameUTF8 = UTF8TEXT("GetTargetValidationDirectory"), .Pointer = &UNCVEditorSettings::execGetTargetValidationDirectory },
		{ .NameUTF8 = UTF8TEXT("ShouldCheckSubDirectories"), .Pointer = &UNCVEditorSettings::execShouldCheckSubDirectories },
		{ .NameUTF8 = UTF8TEXT("ShouldLogMatchingConventions"), .Pointer = &UNCVEditorSettings::execShouldLogMatchingConventions },
		{ .NameUTF8 = UTF8TEXT("ShouldPerformValidationOnLoad"), .Pointer = &UNCVEditorSettings::execShouldPerformValidationOnLoad },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNCVEditorSettings_GetNamingConventions, "GetNamingConventions" }, // 3529024342
		{ &Z_Construct_UFunction_UNCVEditorSettings_GetNCVWidgetTool, "GetNCVWidgetTool" }, // 584462589
		{ &Z_Construct_UFunction_UNCVEditorSettings_GetTargetValidationDirectory, "GetTargetValidationDirectory" }, // 1113410846
		{ &Z_Construct_UFunction_UNCVEditorSettings_ShouldCheckSubDirectories, "ShouldCheckSubDirectories" }, // 3081973732
		{ &Z_Construct_UFunction_UNCVEditorSettings_ShouldLogMatchingConventions, "ShouldLogMatchingConventions" }, // 3488779881
		{ &Z_Construct_UFunction_UNCVEditorSettings_ShouldPerformValidationOnLoad, "ShouldPerformValidationOnLoad" }, // 3002867693
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNCVEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UNCVEditorSettings_Statics

// ********** Begin Class UNCVEditorSettings Property Definitions **********************************
void Z_Construct_UClass_UNCVEditorSettings_Statics::NewProp_bPerformValidationOnLoad_SetBit(void* Obj)
{
	((UNCVEditorSettings*)Obj)->bPerformValidationOnLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNCVEditorSettings_Statics::NewProp_bPerformValidationOnLoad = { "bPerformValidationOnLoad", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNCVEditorSettings), &Z_Construct_UClass_UNCVEditorSettings_Statics::NewProp_bPerformValidationOnLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerformValidationOnLoad_MetaData), NewProp_bPerformValidationOnLoad_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNCVEditorSettings_Statics::NewProp_DefaultValidationParameters = { "DefaultValidationParameters", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNCVEditorSettings, DefaultValidationParameters), Z_Construct_UScriptStruct_FNCValidationParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValidationParameters_MetaData), NewProp_DefaultValidationParameters_MetaData) }; // 1210258946
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNCVEditorSettings_Statics::NewProp_EUWidget = { "EUWidget", nullptr, (EPropertyFlags)0x0024080000014001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNCVEditorSettings, EUWidget), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EUWidget_MetaData), NewProp_EUWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNCVEditorSettings_Statics::NewProp_NamingConventions_ValueProp = { "NamingConventions", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNamingConvention, METADATA_PARAMS(0, nullptr) }; // 1596572204
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNCVEditorSettings_Statics::NewProp_NamingConventions_Key_KeyProp = { "NamingConventions_Key", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNCVEditorSettings_Statics::NewProp_NamingConventions = { "NamingConventions", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNCVEditorSettings, NamingConventions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamingConventions_MetaData), NewProp_NamingConventions_MetaData) }; // 1596572204
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNCVEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNCVEditorSettings_Statics::NewProp_bPerformValidationOnLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNCVEditorSettings_Statics::NewProp_DefaultValidationParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNCVEditorSettings_Statics::NewProp_EUWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNCVEditorSettings_Statics::NewProp_NamingConventions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNCVEditorSettings_Statics::NewProp_NamingConventions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNCVEditorSettings_Statics::NewProp_NamingConventions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNCVEditorSettings_Statics::PropPointers) < 2048);
// ********** End Class UNCVEditorSettings Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UNCVEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_NamingConventionValidator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNCVEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNCVEditorSettings_Statics::ClassParams = {
	&UNCVEditorSettings::StaticClass,
	"NCVEditor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNCVEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNCVEditorSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNCVEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNCVEditorSettings_Statics::Class_MetaDataParams)
};
void UNCVEditorSettings::StaticRegisterNativesUNCVEditorSettings()
{
	UClass* Class = UNCVEditorSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UNCVEditorSettings_Statics::Funcs));
}
UClass* Z_Construct_UClass_UNCVEditorSettings()
{
	if (!Z_Registration_Info_UClass_UNCVEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNCVEditorSettings.OuterSingleton, Z_Construct_UClass_UNCVEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNCVEditorSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNCVEditorSettings);
UNCVEditorSettings::~UNCVEditorSettings() {}
// ********** End Class UNCVEditorSettings *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h__Script_NamingConventionValidator_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNamingConvention::StaticStruct, Z_Construct_UScriptStruct_FNamingConvention_Statics::NewStructOps, TEXT("NamingConvention"),&Z_Registration_Info_UScriptStruct_FNamingConvention, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamingConvention), 1596572204U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNCVEditorSettings, UNCVEditorSettings::StaticClass, TEXT("UNCVEditorSettings"), &Z_Registration_Info_UClass_UNCVEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNCVEditorSettings), 2220493999U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h__Script_NamingConventionValidator_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h__Script_NamingConventionValidator_1302162999{
	TEXT("/Script/NamingConventionValidator"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h__Script_NamingConventionValidator_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h__Script_NamingConventionValidator_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h__Script_NamingConventionValidator_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h__Script_NamingConventionValidator_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
