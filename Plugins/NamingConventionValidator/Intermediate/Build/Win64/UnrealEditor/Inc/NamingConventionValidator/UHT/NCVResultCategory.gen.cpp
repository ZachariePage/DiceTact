// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NamingConventionValidator/Widgets/NCVResultCategory.h"
#include "AssetRegistry/AssetData.h"
#include "NamingConventionValidator/NCVEditorSettings.h"
#include "NamingConventionValidator/Widgets/EditorNCVTool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNCVResultCategory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UNCVResultCategory();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UNCVResultCategory_NoRegister();
NAMINGCONVENTIONVALIDATOR_API UScriptStruct* Z_Construct_UScriptStruct_FNamingConvention();
NAMINGCONVENTIONVALIDATOR_API UScriptStruct* Z_Construct_UScriptStruct_FNCValidationResult();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NamingConventionValidator();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNCVResultCategory Function InitializeCategory ***************************
struct NCVResultCategory_eventInitializeCategory_Parms
{
	TSubclassOf<UObject> ClassCategory;
};
static FName NAME_UNCVResultCategory_InitializeCategory = FName(TEXT("InitializeCategory"));
void UNCVResultCategory::InitializeCategory(TSubclassOf<UObject> ClassCategory)
{
	NCVResultCategory_eventInitializeCategory_Parms Parms;
	Parms.ClassCategory=ClassCategory;
	UFunction* Func = FindFunctionChecked(NAME_UNCVResultCategory_InitializeCategory);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNCVResultCategory_InitializeCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Result Category" },
		{ "ModuleRelativePath", "Widgets/NCVResultCategory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeCategory constinit property declarations ********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassCategory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeCategory constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeCategory Property Definitions *******************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNCVResultCategory_InitializeCategory_Statics::NewProp_ClassCategory = { "ClassCategory", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NCVResultCategory_eventInitializeCategory_Parms, ClassCategory), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNCVResultCategory_InitializeCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVResultCategory_InitializeCategory_Statics::NewProp_ClassCategory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVResultCategory_InitializeCategory_Statics::PropPointers) < 2048);
// ********** End Function InitializeCategory Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNCVResultCategory_InitializeCategory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNCVResultCategory, nullptr, "InitializeCategory", 	Z_Construct_UFunction_UNCVResultCategory_InitializeCategory_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVResultCategory_InitializeCategory_Statics::PropPointers), 
sizeof(NCVResultCategory_eventInitializeCategory_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVResultCategory_InitializeCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNCVResultCategory_InitializeCategory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(NCVResultCategory_eventInitializeCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNCVResultCategory_InitializeCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNCVResultCategory_InitializeCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UNCVResultCategory Function InitializeCategory *****************************

// ********** Begin Class UNCVResultCategory Function OnEntryAdded *********************************
struct NCVResultCategory_eventOnEntryAdded_Parms
{
	FAssetData AssetData;
	FNamingConvention NamingConvention;
	FNCValidationResult ValidationResult;
};
static FName NAME_UNCVResultCategory_OnEntryAdded = FName(TEXT("OnEntryAdded"));
void UNCVResultCategory::OnEntryAdded(FAssetData const& AssetData, FNamingConvention const& NamingConvention, FNCValidationResult const& ValidationResult)
{
	NCVResultCategory_eventOnEntryAdded_Parms Parms;
	Parms.AssetData=AssetData;
	Parms.NamingConvention=NamingConvention;
	Parms.ValidationResult=ValidationResult;
	UFunction* Func = FindFunctionChecked(NAME_UNCVResultCategory_OnEntryAdded);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/NCVResultCategory.h" },
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

// ********** Begin Function OnEntryAdded constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NamingConvention;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValidationResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnEntryAdded constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnEntryAdded Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NCVResultCategory_eventOnEntryAdded_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetData_MetaData), NewProp_AssetData_MetaData) }; // 3308834901
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded_Statics::NewProp_NamingConvention = { "NamingConvention", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NCVResultCategory_eventOnEntryAdded_Parms, NamingConvention), Z_Construct_UScriptStruct_FNamingConvention, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamingConvention_MetaData), NewProp_NamingConvention_MetaData) }; // 1596572204
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded_Statics::NewProp_ValidationResult = { "ValidationResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NCVResultCategory_eventOnEntryAdded_Parms, ValidationResult), Z_Construct_UScriptStruct_FNCValidationResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationResult_MetaData), NewProp_ValidationResult_MetaData) }; // 2653459255
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded_Statics::NewProp_AssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded_Statics::NewProp_NamingConvention,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded_Statics::NewProp_ValidationResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded_Statics::PropPointers) < 2048);
// ********** End Function OnEntryAdded Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNCVResultCategory, nullptr, "OnEntryAdded", 	Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded_Statics::PropPointers), 
sizeof(NCVResultCategory_eventOnEntryAdded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(NCVResultCategory_eventOnEntryAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UNCVResultCategory Function OnEntryAdded ***********************************

// ********** Begin Class UNCVResultCategory Function OnRemoveEntries ******************************
static FName NAME_UNCVResultCategory_OnRemoveEntries = FName(TEXT("OnRemoveEntries"));
void UNCVResultCategory::OnRemoveEntries()
{
	UFunction* Func = FindFunctionChecked(NAME_UNCVResultCategory_OnRemoveEntries);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNCVResultCategory_OnRemoveEntries_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/NCVResultCategory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRemoveEntries constinit property declarations ***********************
// ********** End Function OnRemoveEntries constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNCVResultCategory_OnRemoveEntries_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNCVResultCategory, nullptr, "OnRemoveEntries", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVResultCategory_OnRemoveEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNCVResultCategory_OnRemoveEntries_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UNCVResultCategory_OnRemoveEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNCVResultCategory_OnRemoveEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UNCVResultCategory Function OnRemoveEntries ********************************

// ********** Begin Class UNCVResultCategory Function RemoveEntries ********************************
struct Z_Construct_UFunction_UNCVResultCategory_RemoveEntries_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Result Category" },
		{ "ModuleRelativePath", "Widgets/NCVResultCategory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveEntries constinit property declarations *************************
// ********** End Function RemoveEntries constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNCVResultCategory_RemoveEntries_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNCVResultCategory, nullptr, "RemoveEntries", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVResultCategory_RemoveEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNCVResultCategory_RemoveEntries_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UNCVResultCategory_RemoveEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNCVResultCategory_RemoveEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNCVResultCategory::execRemoveEntries)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveEntries();
	P_NATIVE_END;
}
// ********** End Class UNCVResultCategory Function RemoveEntries **********************************

// ********** Begin Class UNCVResultCategory *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UNCVResultCategory;
UClass* UNCVResultCategory::GetPrivateStaticClass()
{
	using TClass = UNCVResultCategory;
	if (!Z_Registration_Info_UClass_UNCVResultCategory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NCVResultCategory"),
			Z_Registration_Info_UClass_UNCVResultCategory.InnerSingleton,
			StaticRegisterNativesUNCVResultCategory,
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
	return Z_Registration_Info_UClass_UNCVResultCategory.InnerSingleton;
}
UClass* Z_Construct_UClass_UNCVResultCategory_NoRegister()
{
	return UNCVResultCategory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNCVResultCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/NCVResultCategory.h" },
		{ "ModuleRelativePath", "Widgets/NCVResultCategory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UNCVResultCategory constinit property declarations ***********************
// ********** End Class UNCVResultCategory constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RemoveEntries"), .Pointer = &UNCVResultCategory::execRemoveEntries },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNCVResultCategory_InitializeCategory, "InitializeCategory" }, // 1833246462
		{ &Z_Construct_UFunction_UNCVResultCategory_OnEntryAdded, "OnEntryAdded" }, // 2635720041
		{ &Z_Construct_UFunction_UNCVResultCategory_OnRemoveEntries, "OnRemoveEntries" }, // 2511868950
		{ &Z_Construct_UFunction_UNCVResultCategory_RemoveEntries, "RemoveEntries" }, // 4017964304
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNCVResultCategory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UNCVResultCategory_Statics
UObject* (*const Z_Construct_UClass_UNCVResultCategory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NamingConventionValidator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNCVResultCategory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNCVResultCategory_Statics::ClassParams = {
	&UNCVResultCategory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNCVResultCategory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNCVResultCategory_Statics::Class_MetaDataParams)
};
void UNCVResultCategory::StaticRegisterNativesUNCVResultCategory()
{
	UClass* Class = UNCVResultCategory::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UNCVResultCategory_Statics::Funcs));
}
UClass* Z_Construct_UClass_UNCVResultCategory()
{
	if (!Z_Registration_Info_UClass_UNCVResultCategory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNCVResultCategory.OuterSingleton, Z_Construct_UClass_UNCVResultCategory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNCVResultCategory.OuterSingleton;
}
UNCVResultCategory::UNCVResultCategory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNCVResultCategory);
UNCVResultCategory::~UNCVResultCategory() {}
// ********** End Class UNCVResultCategory *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NCVResultCategory_h__Script_NamingConventionValidator_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNCVResultCategory, UNCVResultCategory::StaticClass, TEXT("UNCVResultCategory"), &Z_Registration_Info_UClass_UNCVResultCategory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNCVResultCategory), 3797443607U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NCVResultCategory_h__Script_NamingConventionValidator_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NCVResultCategory_h__Script_NamingConventionValidator_1222363989{
	TEXT("/Script/NamingConventionValidator"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NCVResultCategory_h__Script_NamingConventionValidator_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NCVResultCategory_h__Script_NamingConventionValidator_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
