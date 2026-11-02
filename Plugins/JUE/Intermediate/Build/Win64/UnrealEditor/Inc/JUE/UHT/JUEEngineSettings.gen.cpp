// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JUE/System/JUEEngineSettings.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeJUEEngineSettings() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
JUE_API UClass* Z_Construct_UClass_UJUEEngineSettings();
JUE_API UClass* Z_Construct_UClass_UJUEEngineSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_JUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UJUEEngineSettings Function GetRootLayoutWidgetClass *********************
struct Z_Construct_UFunction_UJUEEngineSettings_GetRootLayoutWidgetClass_Statics
{
	struct JUEEngineSettings_eventGetRootLayoutWidgetClass_Parms
	{
		TSubclassOf<UCommonUserWidget> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widgets references" },
		{ "ModuleRelativePath", "System/JUEEngineSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRootLayoutWidgetClass constinit property declarations **************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRootLayoutWidgetClass constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRootLayoutWidgetClass Property Definitions *************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UJUEEngineSettings_GetRootLayoutWidgetClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEEngineSettings_eventGetRootLayoutWidgetClass_Parms, ReturnValue), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEEngineSettings_GetRootLayoutWidgetClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEEngineSettings_GetRootLayoutWidgetClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEEngineSettings_GetRootLayoutWidgetClass_Statics::PropPointers) < 2048);
// ********** End Function GetRootLayoutWidgetClass Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEEngineSettings_GetRootLayoutWidgetClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEEngineSettings, nullptr, "GetRootLayoutWidgetClass", 	Z_Construct_UFunction_UJUEEngineSettings_GetRootLayoutWidgetClass_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEEngineSettings_GetRootLayoutWidgetClass_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEEngineSettings_GetRootLayoutWidgetClass_Statics::JUEEngineSettings_eventGetRootLayoutWidgetClass_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEEngineSettings_GetRootLayoutWidgetClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEEngineSettings_GetRootLayoutWidgetClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEEngineSettings_GetRootLayoutWidgetClass_Statics::JUEEngineSettings_eventGetRootLayoutWidgetClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEEngineSettings_GetRootLayoutWidgetClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEEngineSettings_GetRootLayoutWidgetClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEEngineSettings::execGetRootLayoutWidgetClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UCommonUserWidget>*)Z_Param__Result=P_THIS->GetRootLayoutWidgetClass();
	P_NATIVE_END;
}
// ********** End Class UJUEEngineSettings Function GetRootLayoutWidgetClass ***********************

// ********** Begin Class UJUEEngineSettings *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UJUEEngineSettings;
UClass* UJUEEngineSettings::GetPrivateStaticClass()
{
	using TClass = UJUEEngineSettings;
	if (!Z_Registration_Info_UClass_UJUEEngineSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("JUEEngineSettings"),
			Z_Registration_Info_UClass_UJUEEngineSettings.InnerSingleton,
			StaticRegisterNativesUJUEEngineSettings,
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
	return Z_Registration_Info_UClass_UJUEEngineSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UJUEEngineSettings_NoRegister()
{
	return UJUEEngineSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UJUEEngineSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "System/JUEEngineSettings.h" },
		{ "ModuleRelativePath", "System/JUEEngineSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootLayoutWidget_MetaData[] = {
		{ "Category", "Widgets references" },
		{ "ModuleRelativePath", "System/JUEEngineSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UJUEEngineSettings constinit property declarations ***********************
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_RootLayoutWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UJUEEngineSettings constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetRootLayoutWidgetClass"), .Pointer = &UJUEEngineSettings::execGetRootLayoutWidgetClass },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJUEEngineSettings_GetRootLayoutWidgetClass, "GetRootLayoutWidgetClass" }, // 650159479
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJUEEngineSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UJUEEngineSettings_Statics

// ********** Begin Class UJUEEngineSettings Property Definitions **********************************
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UJUEEngineSettings_Statics::NewProp_RootLayoutWidget = { "RootLayoutWidget", nullptr, (EPropertyFlags)0x0024080000004015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJUEEngineSettings, RootLayoutWidget), Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootLayoutWidget_MetaData), NewProp_RootLayoutWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJUEEngineSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJUEEngineSettings_Statics::NewProp_RootLayoutWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJUEEngineSettings_Statics::PropPointers) < 2048);
// ********** End Class UJUEEngineSettings Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UJUEEngineSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_JUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJUEEngineSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJUEEngineSettings_Statics::ClassParams = {
	&UJUEEngineSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UJUEEngineSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UJUEEngineSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJUEEngineSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UJUEEngineSettings_Statics::Class_MetaDataParams)
};
void UJUEEngineSettings::StaticRegisterNativesUJUEEngineSettings()
{
	UClass* Class = UJUEEngineSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UJUEEngineSettings_Statics::Funcs));
}
UClass* Z_Construct_UClass_UJUEEngineSettings()
{
	if (!Z_Registration_Info_UClass_UJUEEngineSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJUEEngineSettings.OuterSingleton, Z_Construct_UClass_UJUEEngineSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJUEEngineSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UJUEEngineSettings);
UJUEEngineSettings::~UJUEEngineSettings() {}
// ********** End Class UJUEEngineSettings *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_JUEEngineSettings_h__Script_JUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJUEEngineSettings, UJUEEngineSettings::StaticClass, TEXT("UJUEEngineSettings"), &Z_Registration_Info_UClass_UJUEEngineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJUEEngineSettings), 2893964391U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_JUEEngineSettings_h__Script_JUE_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_JUEEngineSettings_h__Script_JUE_4011380164{
	TEXT("/Script/JUE"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_JUEEngineSettings_h__Script_JUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_JUEEngineSettings_h__Script_JUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
