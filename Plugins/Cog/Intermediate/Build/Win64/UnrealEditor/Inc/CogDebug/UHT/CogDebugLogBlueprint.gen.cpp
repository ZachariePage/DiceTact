// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogDebugLogBlueprint.h"
#include "CogCommonLog.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogDebugLogBlueprint() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UEnum* Z_Construct_UEnum_CogCommon_ECogLogVerbosity();
COGCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FCogLogCategory();
COGDEBUG_API UClass* Z_Construct_UClass_UCogDebugLogBlueprint();
COGDEBUG_API UClass* Z_Construct_UClass_UCogDebugLogBlueprint_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_CogDebug();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogDebugLogBlueprint Function IsLogActive *******************************
struct Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics
{
	struct CogDebugLogBlueprint_eventIsLogActive_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugLogBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsLogActive constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsLogActive constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsLogActive Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugLogBlueprint_eventIsLogActive_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugLogBlueprint_eventIsLogActive_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogCategory_MetaData), NewProp_LogCategory_MetaData) }; // 3441748025
void Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CogDebugLogBlueprint_eventIsLogActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugLogBlueprint_eventIsLogActive_Parms), &Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::PropPointers) < 2048);
// ********** End Function IsLogActive Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugLogBlueprint, nullptr, "IsLogActive", 	Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::CogDebugLogBlueprint_eventIsLogActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::CogDebugLogBlueprint_eventIsLogActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugLogBlueprint::execIsLogActive)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCogDebugLogBlueprint::IsLogActive(Z_Param_WorldContextObject,Z_Param_LogCategory);
	P_NATIVE_END;
}
// ********** End Class UCogDebugLogBlueprint Function IsLogActive *********************************

// ********** Begin Class UCogDebugLogBlueprint Function Log ***************************************
struct Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics
{
	struct CogDebugLogBlueprint_eventLog_Parms
	{
		const UObject* WorldContextObject;
		FCogLogCategory LogCategory;
		ECogLogVerbosity Verbosity;
		FString Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "CPP_Default_Text", "" },
		{ "CPP_Default_Verbosity", "Verbose" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugLogBlueprint.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Log constinit property declarations ***********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Log constinit property declarations *************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Log Property Definitions **********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugLogBlueprint_eventLog_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugLogBlueprint_eventLog_Parms, LogCategory), Z_Construct_UScriptStruct_FCogLogCategory, METADATA_PARAMS(0, nullptr) }; // 3441748025
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugLogBlueprint_eventLog_Parms, Verbosity), Z_Construct_UEnum_CogCommon_ECogLogVerbosity, METADATA_PARAMS(0, nullptr) }; // 3128917293
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugLogBlueprint_eventLog_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::NewProp_Verbosity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::NewProp_Verbosity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::PropPointers) < 2048);
// ********** End Function Log Property Definitions ************************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugLogBlueprint, nullptr, "Log", 	Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::CogDebugLogBlueprint_eventLog_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::CogDebugLogBlueprint_eventLog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugLogBlueprint_Log()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugLogBlueprint_Log_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugLogBlueprint::execLog)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FCogLogCategory,Z_Param_LogCategory);
	P_GET_ENUM(ECogLogVerbosity,Z_Param_Verbosity);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugLogBlueprint::Log(Z_Param_WorldContextObject,Z_Param_LogCategory,ECogLogVerbosity(Z_Param_Verbosity),Z_Param_Text);
	P_NATIVE_END;
}
// ********** End Class UCogDebugLogBlueprint Function Log *****************************************

// ********** Begin Class UCogDebugLogBlueprint ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogDebugLogBlueprint;
UClass* UCogDebugLogBlueprint::GetPrivateStaticClass()
{
	using TClass = UCogDebugLogBlueprint;
	if (!Z_Registration_Info_UClass_UCogDebugLogBlueprint.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogDebugLogBlueprint"),
			Z_Registration_Info_UClass_UCogDebugLogBlueprint.InnerSingleton,
			StaticRegisterNativesUCogDebugLogBlueprint,
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
	return Z_Registration_Info_UClass_UCogDebugLogBlueprint.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogDebugLogBlueprint_NoRegister()
{
	return UCogDebugLogBlueprint::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogDebugLogBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogDebugLogBlueprint.h" },
		{ "ModuleRelativePath", "Public/CogDebugLogBlueprint.h" },
		{ "ScriptName", "CogLogBlueprint" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogDebugLogBlueprint constinit property declarations ********************
// ********** End Class UCogDebugLogBlueprint constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("IsLogActive"), .Pointer = &UCogDebugLogBlueprint::execIsLogActive },
		{ .NameUTF8 = UTF8TEXT("Log"), .Pointer = &UCogDebugLogBlueprint::execLog },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCogDebugLogBlueprint_IsLogActive, "IsLogActive" }, // 3869130726
		{ &Z_Construct_UFunction_UCogDebugLogBlueprint_Log, "Log" }, // 3605729250
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogDebugLogBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogDebugLogBlueprint_Statics
UObject* (*const Z_Construct_UClass_UCogDebugLogBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CogDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogDebugLogBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogDebugLogBlueprint_Statics::ClassParams = {
	&UCogDebugLogBlueprint::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogDebugLogBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogDebugLogBlueprint_Statics::Class_MetaDataParams)
};
void UCogDebugLogBlueprint::StaticRegisterNativesUCogDebugLogBlueprint()
{
	UClass* Class = UCogDebugLogBlueprint::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UCogDebugLogBlueprint_Statics::Funcs));
}
UClass* Z_Construct_UClass_UCogDebugLogBlueprint()
{
	if (!Z_Registration_Info_UClass_UCogDebugLogBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogDebugLogBlueprint.OuterSingleton, Z_Construct_UClass_UCogDebugLogBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogDebugLogBlueprint.OuterSingleton;
}
UCogDebugLogBlueprint::UCogDebugLogBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogDebugLogBlueprint);
UCogDebugLogBlueprint::~UCogDebugLogBlueprint() {}
// ********** End Class UCogDebugLogBlueprint ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugLogBlueprint_h__Script_CogDebug_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogDebugLogBlueprint, UCogDebugLogBlueprint::StaticClass, TEXT("UCogDebugLogBlueprint"), &Z_Registration_Info_UClass_UCogDebugLogBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogDebugLogBlueprint), 2021244851U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugLogBlueprint_h__Script_CogDebug_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugLogBlueprint_h__Script_CogDebug_686211277{
	TEXT("/Script/CogDebug"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugLogBlueprint_h__Script_CogDebug_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugLogBlueprint_h__Script_CogDebug_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
