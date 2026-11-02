// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NamingConventionValidator/Widgets/NCVResultsSorterWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNCVResultsSorterWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UNCVResultCategory_NoRegister();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UNCVResultsSorterWidget();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UNCVResultsSorterWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NamingConventionValidator();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNCVResultsSorterWidget Function IsEmpty *********************************
struct Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty_Statics
{
	struct NCVResultsSorterWidget_eventIsEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Results Sorter Widget" },
		{ "ModuleRelativePath", "Widgets/NCVResultsSorterWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsEmpty constinit property declarations *******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsEmpty constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsEmpty Property Definitions ******************************************
void Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NCVResultsSorterWidget_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NCVResultsSorterWidget_eventIsEmpty_Parms), &Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty_Statics::PropPointers) < 2048);
// ********** End Function IsEmpty Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNCVResultsSorterWidget, nullptr, "IsEmpty", 	Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty_Statics::NCVResultsSorterWidget_eventIsEmpty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty_Statics::NCVResultsSorterWidget_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNCVResultsSorterWidget::execIsEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEmpty();
	P_NATIVE_END;
}
// ********** End Class UNCVResultsSorterWidget Function IsEmpty ***********************************

// ********** Begin Class UNCVResultsSorterWidget Function OnCategoryAdded *************************
struct NCVResultsSorterWidget_eventOnCategoryAdded_Parms
{
	UNCVResultCategory* NewCategory;
};
static FName NAME_UNCVResultsSorterWidget_OnCategoryAdded = FName(TEXT("OnCategoryAdded"));
void UNCVResultsSorterWidget::OnCategoryAdded(UNCVResultCategory* NewCategory)
{
	NCVResultsSorterWidget_eventOnCategoryAdded_Parms Parms;
	Parms.NewCategory=NewCategory;
	UFunction* Func = FindFunctionChecked(NAME_UNCVResultsSorterWidget_OnCategoryAdded);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNCVResultsSorterWidget_OnCategoryAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/NCVResultsSorterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCategory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnCategoryAdded constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCategory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnCategoryAdded constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnCategoryAdded Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNCVResultsSorterWidget_OnCategoryAdded_Statics::NewProp_NewCategory = { "NewCategory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NCVResultsSorterWidget_eventOnCategoryAdded_Parms, NewCategory), Z_Construct_UClass_UNCVResultCategory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCategory_MetaData), NewProp_NewCategory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNCVResultsSorterWidget_OnCategoryAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVResultsSorterWidget_OnCategoryAdded_Statics::NewProp_NewCategory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVResultsSorterWidget_OnCategoryAdded_Statics::PropPointers) < 2048);
// ********** End Function OnCategoryAdded Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNCVResultsSorterWidget_OnCategoryAdded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNCVResultsSorterWidget, nullptr, "OnCategoryAdded", 	Z_Construct_UFunction_UNCVResultsSorterWidget_OnCategoryAdded_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVResultsSorterWidget_OnCategoryAdded_Statics::PropPointers), 
sizeof(NCVResultsSorterWidget_eventOnCategoryAdded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVResultsSorterWidget_OnCategoryAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNCVResultsSorterWidget_OnCategoryAdded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(NCVResultsSorterWidget_eventOnCategoryAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNCVResultsSorterWidget_OnCategoryAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNCVResultsSorterWidget_OnCategoryAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UNCVResultsSorterWidget Function OnCategoryAdded ***************************

// ********** Begin Class UNCVResultsSorterWidget **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UNCVResultsSorterWidget;
UClass* UNCVResultsSorterWidget::GetPrivateStaticClass()
{
	using TClass = UNCVResultsSorterWidget;
	if (!Z_Registration_Info_UClass_UNCVResultsSorterWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NCVResultsSorterWidget"),
			Z_Registration_Info_UClass_UNCVResultsSorterWidget.InnerSingleton,
			StaticRegisterNativesUNCVResultsSorterWidget,
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
	return Z_Registration_Info_UClass_UNCVResultsSorterWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UNCVResultsSorterWidget_NoRegister()
{
	return UNCVResultsSorterWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNCVResultsSorterWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/NCVResultsSorterWidget.h" },
		{ "ModuleRelativePath", "Widgets/NCVResultsSorterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredEntries_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/NCVResultsSorterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCategoryClass_MetaData[] = {
		{ "Category", "NCV Results Sorter Widget" },
		{ "ModuleRelativePath", "Widgets/NCVResultsSorterWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UNCVResultsSorterWidget constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredEntries_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RegisteredEntries_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredEntries;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ResultCategoryClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UNCVResultsSorterWidget constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("IsEmpty"), .Pointer = &UNCVResultsSorterWidget::execIsEmpty },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNCVResultsSorterWidget_IsEmpty, "IsEmpty" }, // 4216975778
		{ &Z_Construct_UFunction_UNCVResultsSorterWidget_OnCategoryAdded, "OnCategoryAdded" }, // 1269751870
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNCVResultsSorterWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UNCVResultsSorterWidget_Statics

// ********** Begin Class UNCVResultsSorterWidget Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNCVResultsSorterWidget_Statics::NewProp_RegisteredEntries_ValueProp = { "RegisteredEntries", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNCVResultCategory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNCVResultsSorterWidget_Statics::NewProp_RegisteredEntries_Key_KeyProp = { "RegisteredEntries_Key", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNCVResultsSorterWidget_Statics::NewProp_RegisteredEntries = { "RegisteredEntries", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNCVResultsSorterWidget, RegisteredEntries), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredEntries_MetaData), NewProp_RegisteredEntries_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNCVResultsSorterWidget_Statics::NewProp_ResultCategoryClass = { "ResultCategoryClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNCVResultsSorterWidget, ResultCategoryClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UNCVResultCategory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCategoryClass_MetaData), NewProp_ResultCategoryClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNCVResultsSorterWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNCVResultsSorterWidget_Statics::NewProp_RegisteredEntries_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNCVResultsSorterWidget_Statics::NewProp_RegisteredEntries_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNCVResultsSorterWidget_Statics::NewProp_RegisteredEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNCVResultsSorterWidget_Statics::NewProp_ResultCategoryClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNCVResultsSorterWidget_Statics::PropPointers) < 2048);
// ********** End Class UNCVResultsSorterWidget Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UNCVResultsSorterWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NamingConventionValidator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNCVResultsSorterWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNCVResultsSorterWidget_Statics::ClassParams = {
	&UNCVResultsSorterWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNCVResultsSorterWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNCVResultsSorterWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNCVResultsSorterWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNCVResultsSorterWidget_Statics::Class_MetaDataParams)
};
void UNCVResultsSorterWidget::StaticRegisterNativesUNCVResultsSorterWidget()
{
	UClass* Class = UNCVResultsSorterWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UNCVResultsSorterWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UNCVResultsSorterWidget()
{
	if (!Z_Registration_Info_UClass_UNCVResultsSorterWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNCVResultsSorterWidget.OuterSingleton, Z_Construct_UClass_UNCVResultsSorterWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNCVResultsSorterWidget.OuterSingleton;
}
UNCVResultsSorterWidget::UNCVResultsSorterWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNCVResultsSorterWidget);
UNCVResultsSorterWidget::~UNCVResultsSorterWidget() {}
// ********** End Class UNCVResultsSorterWidget ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NCVResultsSorterWidget_h__Script_NamingConventionValidator_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNCVResultsSorterWidget, UNCVResultsSorterWidget::StaticClass, TEXT("UNCVResultsSorterWidget"), &Z_Registration_Info_UClass_UNCVResultsSorterWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNCVResultsSorterWidget), 952214011U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NCVResultsSorterWidget_h__Script_NamingConventionValidator_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NCVResultsSorterWidget_h__Script_NamingConventionValidator_3552297276{
	TEXT("/Script/NamingConventionValidator"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NCVResultsSorterWidget_h__Script_NamingConventionValidator_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NCVResultsSorterWidget_h__Script_NamingConventionValidator_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
