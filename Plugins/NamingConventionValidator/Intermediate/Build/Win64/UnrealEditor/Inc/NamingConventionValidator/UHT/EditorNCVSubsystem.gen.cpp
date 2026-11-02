// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NamingConventionValidator/EditorNCVSubsystem.h"
#include "AssetRegistry/AssetData.h"
#include "NamingConventionValidator/NCVEditorSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEditorNCVSubsystem() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilitySubsystem();
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UEditorNCVSubsystem();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UEditorNCVSubsystem_NoRegister();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UNCVEditorSettings_NoRegister();
NAMINGCONVENTIONVALIDATOR_API UScriptStruct* Z_Construct_UScriptStruct_FNamingConvention();
UPackage* Z_Construct_UPackage__Script_NamingConventionValidator();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEditorNCVSubsystem Function OpenAndPerformAutoValidation ****************
struct Z_Construct_UFunction_UEditorNCVSubsystem_OpenAndPerformAutoValidation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "EditorNCVSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenAndPerformAutoValidation constinit property declarations **********
// ********** End Function OpenAndPerformAutoValidation constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorNCVSubsystem_OpenAndPerformAutoValidation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEditorNCVSubsystem, nullptr, "OpenAndPerformAutoValidation", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorNCVSubsystem_OpenAndPerformAutoValidation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditorNCVSubsystem_OpenAndPerformAutoValidation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEditorNCVSubsystem_OpenAndPerformAutoValidation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorNCVSubsystem_OpenAndPerformAutoValidation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditorNCVSubsystem::execOpenAndPerformAutoValidation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenAndPerformAutoValidation();
	P_NATIVE_END;
}
// ********** End Class UEditorNCVSubsystem Function OpenAndPerformAutoValidation ******************

// ********** Begin Class UEditorNCVSubsystem Function OpenNCVWidgetTool ***************************
struct Z_Construct_UFunction_UEditorNCVSubsystem_OpenNCVWidgetTool_Statics
{
	struct EditorNCVSubsystem_eventOpenNCVWidgetTool_Parms
	{
		UEditorUtilityWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "EditorNCVSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenNCVWidgetTool constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenNCVWidgetTool constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenNCVWidgetTool Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorNCVSubsystem_OpenNCVWidgetTool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditorNCVSubsystem_eventOpenNCVWidgetTool_Parms, ReturnValue), Z_Construct_UClass_UEditorUtilityWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorNCVSubsystem_OpenNCVWidgetTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorNCVSubsystem_OpenNCVWidgetTool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorNCVSubsystem_OpenNCVWidgetTool_Statics::PropPointers) < 2048);
// ********** End Function OpenNCVWidgetTool Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorNCVSubsystem_OpenNCVWidgetTool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEditorNCVSubsystem, nullptr, "OpenNCVWidgetTool", 	Z_Construct_UFunction_UEditorNCVSubsystem_OpenNCVWidgetTool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorNCVSubsystem_OpenNCVWidgetTool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEditorNCVSubsystem_OpenNCVWidgetTool_Statics::EditorNCVSubsystem_eventOpenNCVWidgetTool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorNCVSubsystem_OpenNCVWidgetTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditorNCVSubsystem_OpenNCVWidgetTool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEditorNCVSubsystem_OpenNCVWidgetTool_Statics::EditorNCVSubsystem_eventOpenNCVWidgetTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditorNCVSubsystem_OpenNCVWidgetTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorNCVSubsystem_OpenNCVWidgetTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditorNCVSubsystem::execOpenNCVWidgetTool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEditorUtilityWidget**)Z_Param__Result=P_THIS->OpenNCVWidgetTool();
	P_NATIVE_END;
}
// ********** End Class UEditorNCVSubsystem Function OpenNCVWidgetTool *****************************

// ********** Begin Class UEditorNCVSubsystem Function PerformNamingValidationOnAsset **************
struct Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset_Statics
{
	struct EditorNCVSubsystem_eventPerformNamingValidationOnAsset_Parms
	{
		FAssetData AssetData;
		FNamingConvention FoundNamingConvention;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "EditorNCVSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoundNamingConvention_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PerformNamingValidationOnAsset constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoundNamingConvention;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PerformNamingValidationOnAsset constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PerformNamingValidationOnAsset Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditorNCVSubsystem_eventPerformNamingValidationOnAsset_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetData_MetaData), NewProp_AssetData_MetaData) }; // 3308834901
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset_Statics::NewProp_FoundNamingConvention = { "FoundNamingConvention", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditorNCVSubsystem_eventPerformNamingValidationOnAsset_Parms, FoundNamingConvention), Z_Construct_UScriptStruct_FNamingConvention, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoundNamingConvention_MetaData), NewProp_FoundNamingConvention_MetaData) }; // 1596572204
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset_Statics::NewProp_AssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset_Statics::NewProp_FoundNamingConvention,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset_Statics::PropPointers) < 2048);
// ********** End Function PerformNamingValidationOnAsset Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEditorNCVSubsystem, nullptr, "PerformNamingValidationOnAsset", 	Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset_Statics::EditorNCVSubsystem_eventPerformNamingValidationOnAsset_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset_Statics::EditorNCVSubsystem_eventPerformNamingValidationOnAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditorNCVSubsystem::execPerformNamingValidationOnAsset)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetData);
	P_GET_STRUCT_REF(FNamingConvention,Z_Param_Out_FoundNamingConvention);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformNamingValidationOnAsset(Z_Param_Out_AssetData,Z_Param_Out_FoundNamingConvention);
	P_NATIVE_END;
}
// ********** End Class UEditorNCVSubsystem Function PerformNamingValidationOnAsset ****************

// ********** Begin Class UEditorNCVSubsystem Function StartQuickValidation ************************
struct Z_Construct_UFunction_UEditorNCVSubsystem_StartQuickValidation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Very mid function, maybe should recreate it because it's not very useful\n" },
#endif
		{ "ModuleRelativePath", "EditorNCVSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Very mid function, maybe should recreate it because it's not very useful" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StartQuickValidation constinit property declarations ******************
// ********** End Function StartQuickValidation constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorNCVSubsystem_StartQuickValidation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEditorNCVSubsystem, nullptr, "StartQuickValidation", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorNCVSubsystem_StartQuickValidation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditorNCVSubsystem_StartQuickValidation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEditorNCVSubsystem_StartQuickValidation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorNCVSubsystem_StartQuickValidation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditorNCVSubsystem::execStartQuickValidation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartQuickValidation();
	P_NATIVE_END;
}
// ********** End Class UEditorNCVSubsystem Function StartQuickValidation **************************

// ********** Begin Class UEditorNCVSubsystem ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEditorNCVSubsystem;
UClass* UEditorNCVSubsystem::GetPrivateStaticClass()
{
	using TClass = UEditorNCVSubsystem;
	if (!Z_Registration_Info_UClass_UEditorNCVSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EditorNCVSubsystem"),
			Z_Registration_Info_UClass_UEditorNCVSubsystem.InnerSingleton,
			StaticRegisterNativesUEditorNCVSubsystem,
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
	return Z_Registration_Info_UClass_UEditorNCVSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UEditorNCVSubsystem_NoRegister()
{
	return UEditorNCVSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEditorNCVSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n */" },
#endif
		{ "IncludePath", "EditorNCVSubsystem.h" },
		{ "ModuleRelativePath", "EditorNCVSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NCVEditorSettings_MetaData[] = {
		{ "ModuleRelativePath", "EditorNCVSubsystem.h" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEditorNCVSubsystem constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NCVEditorSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEditorNCVSubsystem constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OpenAndPerformAutoValidation"), .Pointer = &UEditorNCVSubsystem::execOpenAndPerformAutoValidation },
		{ .NameUTF8 = UTF8TEXT("OpenNCVWidgetTool"), .Pointer = &UEditorNCVSubsystem::execOpenNCVWidgetTool },
		{ .NameUTF8 = UTF8TEXT("PerformNamingValidationOnAsset"), .Pointer = &UEditorNCVSubsystem::execPerformNamingValidationOnAsset },
		{ .NameUTF8 = UTF8TEXT("StartQuickValidation"), .Pointer = &UEditorNCVSubsystem::execStartQuickValidation },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorNCVSubsystem_OpenAndPerformAutoValidation, "OpenAndPerformAutoValidation" }, // 1296920637
		{ &Z_Construct_UFunction_UEditorNCVSubsystem_OpenNCVWidgetTool, "OpenNCVWidgetTool" }, // 422418428
		{ &Z_Construct_UFunction_UEditorNCVSubsystem_PerformNamingValidationOnAsset, "PerformNamingValidationOnAsset" }, // 369578461
		{ &Z_Construct_UFunction_UEditorNCVSubsystem_StartQuickValidation, "StartQuickValidation" }, // 2150992794
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorNCVSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEditorNCVSubsystem_Statics

// ********** Begin Class UEditorNCVSubsystem Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorNCVSubsystem_Statics::NewProp_NCVEditorSettings = { "NCVEditorSettings", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditorNCVSubsystem, NCVEditorSettings), Z_Construct_UClass_UNCVEditorSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NCVEditorSettings_MetaData), NewProp_NCVEditorSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorNCVSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorNCVSubsystem_Statics::NewProp_NCVEditorSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorNCVSubsystem_Statics::PropPointers) < 2048);
// ********** End Class UEditorNCVSubsystem Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UEditorNCVSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilitySubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_NamingConventionValidator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorNCVSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorNCVSubsystem_Statics::ClassParams = {
	&UEditorNCVSubsystem::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEditorNCVSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEditorNCVSubsystem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorNCVSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorNCVSubsystem_Statics::Class_MetaDataParams)
};
void UEditorNCVSubsystem::StaticRegisterNativesUEditorNCVSubsystem()
{
	UClass* Class = UEditorNCVSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UEditorNCVSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_UEditorNCVSubsystem()
{
	if (!Z_Registration_Info_UClass_UEditorNCVSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorNCVSubsystem.OuterSingleton, Z_Construct_UClass_UEditorNCVSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditorNCVSubsystem.OuterSingleton;
}
UEditorNCVSubsystem::UEditorNCVSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEditorNCVSubsystem);
UEditorNCVSubsystem::~UEditorNCVSubsystem() {}
// ********** End Class UEditorNCVSubsystem ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_EditorNCVSubsystem_h__Script_NamingConventionValidator_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditorNCVSubsystem, UEditorNCVSubsystem::StaticClass, TEXT("UEditorNCVSubsystem"), &Z_Registration_Info_UClass_UEditorNCVSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorNCVSubsystem), 3595280307U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_EditorNCVSubsystem_h__Script_NamingConventionValidator_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_EditorNCVSubsystem_h__Script_NamingConventionValidator_3840090415{
	TEXT("/Script/NamingConventionValidator"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_EditorNCVSubsystem_h__Script_NamingConventionValidator_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_EditorNCVSubsystem_h__Script_NamingConventionValidator_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
