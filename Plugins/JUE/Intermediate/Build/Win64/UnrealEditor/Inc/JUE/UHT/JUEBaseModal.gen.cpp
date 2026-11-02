// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JUE/UI/JUEBaseModal.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeJUEBaseModal() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
JUE_API UClass* Z_Construct_UClass_UJUEBaseModal();
JUE_API UClass* Z_Construct_UClass_UJUEBaseModal_NoRegister();
JUE_API UEnum* Z_Construct_UEnum_JUE_EModalConfirmationResult();
JUE_API UFunction* Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_JUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EModalConfirmationResult **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModalConfirmationResult;
static UEnum* EModalConfirmationResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModalConfirmationResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModalConfirmationResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JUE_EModalConfirmationResult, (UObject*)Z_Construct_UPackage__Script_JUE(), TEXT("EModalConfirmationResult"));
	}
	return Z_Registration_Info_UEnum_EModalConfirmationResult.OuterSingleton;
}
template<> JUE_NON_ATTRIBUTED_API UEnum* StaticEnum<EModalConfirmationResult>()
{
	return EModalConfirmationResult_StaticEnum();
}
struct Z_Construct_UEnum_JUE_EModalConfirmationResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Affirmative.Comment", "/**\n * \n */" },
		{ "Affirmative.Name", "EModalConfirmationResult::Affirmative" },
		{ "Affirmative.ToolTip", "The modal's option was Confirmed.\nYes, Confirm, Apply, Etc..." },
		{ "BlueprintType", "true" },
		{ "Cancelled.Comment", "/**\n * \n */" },
		{ "Cancelled.Name", "EModalConfirmationResult::Cancelled" },
		{ "Cancelled.ToolTip", "The modal was cancelled, usually by pressing escape, or the X button at the top-right corner.\nNo option was chosen." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/JUEBaseModal.h" },
		{ "Negative.Comment", "/**\n * \n */" },
		{ "Negative.Name", "EModalConfirmationResult::Negative" },
		{ "Negative.ToolTip", "The modal's option was denied.\nNo, Return, sometimes Cancel is also used, etc..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModalConfirmationResult::Affirmative", (int64)EModalConfirmationResult::Affirmative },
		{ "EModalConfirmationResult::Negative", (int64)EModalConfirmationResult::Negative },
		{ "EModalConfirmationResult::Cancelled", (int64)EModalConfirmationResult::Cancelled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_JUE_EModalConfirmationResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JUE_EModalConfirmationResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_JUE,
	nullptr,
	"EModalConfirmationResult",
	"EModalConfirmationResult",
	Z_Construct_UEnum_JUE_EModalConfirmationResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_JUE_EModalConfirmationResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_JUE_EModalConfirmationResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_JUE_EModalConfirmationResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_JUE_EModalConfirmationResult()
{
	if (!Z_Registration_Info_UEnum_EModalConfirmationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModalConfirmationResult.InnerSingleton, Z_Construct_UEnum_JUE_EModalConfirmationResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModalConfirmationResult.InnerSingleton;
}
// ********** End Enum EModalConfirmationResult ****************************************************

// ********** Begin Delegate FModalConfirmation ****************************************************
struct Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature_Statics
{
	struct _Script_JUE_eventModalConfirmation_Parms
	{
		EModalConfirmationResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/JUEBaseModal.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FModalConfirmation constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FModalConfirmation constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FModalConfirmation Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_JUE_eventModalConfirmation_Parms, Result), Z_Construct_UEnum_JUE_EModalConfirmationResult, METADATA_PARAMS(0, nullptr) }; // 2268307598
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FModalConfirmation Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_JUE, nullptr, "ModalConfirmation__DelegateSignature", 	Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature_Statics::_Script_JUE_eventModalConfirmation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature_Statics::_Script_JUE_eventModalConfirmation_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FModalConfirmation_DelegateWrapper(const FMulticastScriptDelegate& ModalConfirmation, EModalConfirmationResult Result)
{
	struct _Script_JUE_eventModalConfirmation_Parms
	{
		EModalConfirmationResult Result;
	};
	_Script_JUE_eventModalConfirmation_Parms Parms;
	Parms.Result=Result;
	ModalConfirmation.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FModalConfirmation ******************************************************

// ********** Begin Class UJUEBaseModal Function ConfirmModal **************************************
struct Z_Construct_UFunction_UJUEBaseModal_ConfirmModal_Statics
{
	struct JUEBaseModal_eventConfirmModal_Parms
	{
		EModalConfirmationResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/JUEBaseModal.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConfirmModal constinit property declarations **************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConfirmModal constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConfirmModal Property Definitions *************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJUEBaseModal_ConfirmModal_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJUEBaseModal_ConfirmModal_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEBaseModal_eventConfirmModal_Parms, Result), Z_Construct_UEnum_JUE_EModalConfirmationResult, METADATA_PARAMS(0, nullptr) }; // 2268307598
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEBaseModal_ConfirmModal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEBaseModal_ConfirmModal_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEBaseModal_ConfirmModal_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEBaseModal_ConfirmModal_Statics::PropPointers) < 2048);
// ********** End Function ConfirmModal Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEBaseModal_ConfirmModal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEBaseModal, nullptr, "ConfirmModal", 	Z_Construct_UFunction_UJUEBaseModal_ConfirmModal_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEBaseModal_ConfirmModal_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEBaseModal_ConfirmModal_Statics::JUEBaseModal_eventConfirmModal_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEBaseModal_ConfirmModal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEBaseModal_ConfirmModal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEBaseModal_ConfirmModal_Statics::JUEBaseModal_eventConfirmModal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEBaseModal_ConfirmModal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEBaseModal_ConfirmModal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEBaseModal::execConfirmModal)
{
	P_GET_ENUM(EModalConfirmationResult,Z_Param_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfirmModal(EModalConfirmationResult(Z_Param_Result));
	P_NATIVE_END;
}
// ********** End Class UJUEBaseModal Function ConfirmModal ****************************************

// ********** Begin Class UJUEBaseModal ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UJUEBaseModal;
UClass* UJUEBaseModal::GetPrivateStaticClass()
{
	using TClass = UJUEBaseModal;
	if (!Z_Registration_Info_UClass_UJUEBaseModal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("JUEBaseModal"),
			Z_Registration_Info_UClass_UJUEBaseModal.InnerSingleton,
			StaticRegisterNativesUJUEBaseModal,
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
	return Z_Registration_Info_UClass_UJUEBaseModal.InnerSingleton;
}
UClass* Z_Construct_UClass_UJUEBaseModal_NoRegister()
{
	return UJUEBaseModal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UJUEBaseModal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/JUEBaseModal.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/JUEBaseModal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnModalConfirmation_MetaData[] = {
		{ "ModuleRelativePath", "UI/JUEBaseModal.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UJUEBaseModal constinit property declarations ****************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnModalConfirmation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UJUEBaseModal constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConfirmModal"), .Pointer = &UJUEBaseModal::execConfirmModal },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJUEBaseModal_ConfirmModal, "ConfirmModal" }, // 2657830294
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJUEBaseModal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UJUEBaseModal_Statics

// ********** Begin Class UJUEBaseModal Property Definitions ***************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJUEBaseModal_Statics::NewProp_OnModalConfirmation = { "OnModalConfirmation", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJUEBaseModal, OnModalConfirmation), Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnModalConfirmation_MetaData), NewProp_OnModalConfirmation_MetaData) }; // 2135173934
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJUEBaseModal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJUEBaseModal_Statics::NewProp_OnModalConfirmation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJUEBaseModal_Statics::PropPointers) < 2048);
// ********** End Class UJUEBaseModal Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UJUEBaseModal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_JUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJUEBaseModal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJUEBaseModal_Statics::ClassParams = {
	&UJUEBaseModal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UJUEBaseModal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UJUEBaseModal_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJUEBaseModal_Statics::Class_MetaDataParams), Z_Construct_UClass_UJUEBaseModal_Statics::Class_MetaDataParams)
};
void UJUEBaseModal::StaticRegisterNativesUJUEBaseModal()
{
	UClass* Class = UJUEBaseModal::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UJUEBaseModal_Statics::Funcs));
}
UClass* Z_Construct_UClass_UJUEBaseModal()
{
	if (!Z_Registration_Info_UClass_UJUEBaseModal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJUEBaseModal.OuterSingleton, Z_Construct_UClass_UJUEBaseModal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJUEBaseModal.OuterSingleton;
}
UJUEBaseModal::UJUEBaseModal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UJUEBaseModal);
UJUEBaseModal::~UJUEBaseModal() {}
// ********** End Class UJUEBaseModal **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h__Script_JUE_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModalConfirmationResult_StaticEnum, TEXT("EModalConfirmationResult"), &Z_Registration_Info_UEnum_EModalConfirmationResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2268307598U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJUEBaseModal, UJUEBaseModal::StaticClass, TEXT("UJUEBaseModal"), &Z_Registration_Info_UClass_UJUEBaseModal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJUEBaseModal), 494478559U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h__Script_JUE_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h__Script_JUE_1321564568{
	TEXT("/Script/JUE"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h__Script_JUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h__Script_JUE_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h__Script_JUE_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h__Script_JUE_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
