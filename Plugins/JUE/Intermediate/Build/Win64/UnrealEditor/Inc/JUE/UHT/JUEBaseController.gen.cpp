// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JUE/JUEBaseController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeJUEBaseController() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
JUE_API UClass* Z_Construct_UClass_AJUEBaseController();
JUE_API UClass* Z_Construct_UClass_AJUEBaseController_NoRegister();
UPackage* Z_Construct_UPackage__Script_JUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AJUEBaseController Function GetRootLayout ********************************
struct Z_Construct_UFunction_AJUEBaseController_GetRootLayout_Statics
{
	struct JUEBaseController_eventGetRootLayout_Parms
	{
		UCommonUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JUE Base Controller" },
		{ "ModuleRelativePath", "JUEBaseController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRootLayout constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRootLayout constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRootLayout Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJUEBaseController_GetRootLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEBaseController_eventGetRootLayout_Parms, ReturnValue), Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJUEBaseController_GetRootLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJUEBaseController_GetRootLayout_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AJUEBaseController_GetRootLayout_Statics::PropPointers) < 2048);
// ********** End Function GetRootLayout Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJUEBaseController_GetRootLayout_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AJUEBaseController, nullptr, "GetRootLayout", 	Z_Construct_UFunction_AJUEBaseController_GetRootLayout_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AJUEBaseController_GetRootLayout_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AJUEBaseController_GetRootLayout_Statics::JUEBaseController_eventGetRootLayout_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AJUEBaseController_GetRootLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_AJUEBaseController_GetRootLayout_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AJUEBaseController_GetRootLayout_Statics::JUEBaseController_eventGetRootLayout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AJUEBaseController_GetRootLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJUEBaseController_GetRootLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AJUEBaseController::execGetRootLayout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCommonUserWidget**)Z_Param__Result=P_THIS->GetRootLayout();
	P_NATIVE_END;
}
// ********** End Class AJUEBaseController Function GetRootLayout **********************************

// ********** Begin Class AJUEBaseController *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AJUEBaseController;
UClass* AJUEBaseController::GetPrivateStaticClass()
{
	using TClass = AJUEBaseController;
	if (!Z_Registration_Info_UClass_AJUEBaseController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("JUEBaseController"),
			Z_Registration_Info_UClass_AJUEBaseController.InnerSingleton,
			StaticRegisterNativesAJUEBaseController,
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
	return Z_Registration_Info_UClass_AJUEBaseController.InnerSingleton;
}
UClass* Z_Construct_UClass_AJUEBaseController_NoRegister()
{
	return AJUEBaseController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AJUEBaseController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "JUEBaseController.h" },
		{ "ModuleRelativePath", "JUEBaseController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootLayout_MetaData[] = {
		{ "Category", "Widgets references" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JUEBaseController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AJUEBaseController constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootLayout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AJUEBaseController constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetRootLayout"), .Pointer = &AJUEBaseController::execGetRootLayout },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AJUEBaseController_GetRootLayout, "GetRootLayout" }, // 2597659602
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJUEBaseController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AJUEBaseController_Statics

// ********** Begin Class AJUEBaseController Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJUEBaseController_Statics::NewProp_RootLayout = { "RootLayout", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJUEBaseController, RootLayout), Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootLayout_MetaData), NewProp_RootLayout_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJUEBaseController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJUEBaseController_Statics::NewProp_RootLayout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJUEBaseController_Statics::PropPointers) < 2048);
// ********** End Class AJUEBaseController Property Definitions ************************************
UObject* (*const Z_Construct_UClass_AJUEBaseController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_JUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJUEBaseController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJUEBaseController_Statics::ClassParams = {
	&AJUEBaseController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AJUEBaseController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AJUEBaseController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJUEBaseController_Statics::Class_MetaDataParams), Z_Construct_UClass_AJUEBaseController_Statics::Class_MetaDataParams)
};
void AJUEBaseController::StaticRegisterNativesAJUEBaseController()
{
	UClass* Class = AJUEBaseController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AJUEBaseController_Statics::Funcs));
}
UClass* Z_Construct_UClass_AJUEBaseController()
{
	if (!Z_Registration_Info_UClass_AJUEBaseController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJUEBaseController.OuterSingleton, Z_Construct_UClass_AJUEBaseController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJUEBaseController.OuterSingleton;
}
AJUEBaseController::AJUEBaseController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AJUEBaseController);
AJUEBaseController::~AJUEBaseController() {}
// ********** End Class AJUEBaseController *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_JUEBaseController_h__Script_JUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJUEBaseController, AJUEBaseController::StaticClass, TEXT("AJUEBaseController"), &Z_Registration_Info_UClass_AJUEBaseController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJUEBaseController), 2807602508U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_JUEBaseController_h__Script_JUE_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_JUEBaseController_h__Script_JUE_3827856848{
	TEXT("/Script/JUE"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_JUEBaseController_h__Script_JUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_JUEBaseController_h__Script_JUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
