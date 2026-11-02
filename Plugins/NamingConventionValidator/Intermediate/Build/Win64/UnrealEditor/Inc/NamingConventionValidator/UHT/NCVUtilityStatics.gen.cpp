// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NamingConventionValidator/NCVUtilityStatics.h"
#include "NamingConventionValidator/Widgets/EditorNCVTool.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNCVUtilityStatics() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UNCVUtilityStatics();
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UNCVUtilityStatics_NoRegister();
NAMINGCONVENTIONVALIDATOR_API UScriptStruct* Z_Construct_UScriptStruct_FNCValidationResult();
UPackage* Z_Construct_UPackage__Script_NamingConventionValidator();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNCVUtilityStatics Function GetCleanNameForClasses ***********************
struct Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics
{
	struct NCVUtilityStatics_eventGetCleanNameForClasses_Parms
	{
		TSubclassOf<UObject> Class;
		bool bPluralName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NCV Utility Statics" },
		{ "CPP_Default_bPluralName", "false" },
		{ "ModuleRelativePath", "NCVUtilityStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns an empty string if not found in the library." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCleanNameForClasses constinit property declarations ****************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static void NewProp_bPluralName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPluralName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCleanNameForClasses constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCleanNameForClasses Property Definitions ***************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NCVUtilityStatics_eventGetCleanNameForClasses_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::NewProp_bPluralName_SetBit(void* Obj)
{
	((NCVUtilityStatics_eventGetCleanNameForClasses_Parms*)Obj)->bPluralName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::NewProp_bPluralName = { "bPluralName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NCVUtilityStatics_eventGetCleanNameForClasses_Parms), &Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::NewProp_bPluralName_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NCVUtilityStatics_eventGetCleanNameForClasses_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::NewProp_bPluralName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::PropPointers) < 2048);
// ********** End Function GetCleanNameForClasses Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNCVUtilityStatics, nullptr, "GetCleanNameForClasses", 	Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::NCVUtilityStatics_eventGetCleanNameForClasses_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::NCVUtilityStatics_eventGetCleanNameForClasses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNCVUtilityStatics::execGetCleanNameForClasses)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_UBOOL(Z_Param_bPluralName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UNCVUtilityStatics::GetCleanNameForClasses(Z_Param_Class,Z_Param_bPluralName);
	P_NATIVE_END;
}
// ********** End Class UNCVUtilityStatics Function GetCleanNameForClasses *************************

// ********** Begin Class UNCVUtilityStatics Function IsValidationResultValid **********************
struct Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics
{
	struct NCVUtilityStatics_eventIsValidationResultValid_Parms
	{
		FNCValidationResult Result;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NCV Utility Statics" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "NCVUtilityStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidationResultValid constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidationResultValid constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidationResultValid Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NCVUtilityStatics_eventIsValidationResultValid_Parms, Result), Z_Construct_UScriptStruct_FNCValidationResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2653459255
void Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NCVUtilityStatics_eventIsValidationResultValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NCVUtilityStatics_eventIsValidationResultValid_Parms), &Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics::PropPointers) < 2048);
// ********** End Function IsValidationResultValid Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNCVUtilityStatics, nullptr, "IsValidationResultValid", 	Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics::NCVUtilityStatics_eventIsValidationResultValid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics::NCVUtilityStatics_eventIsValidationResultValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNCVUtilityStatics::execIsValidationResultValid)
{
	P_GET_STRUCT_REF(FNCValidationResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNCVUtilityStatics::IsValidationResultValid(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UNCVUtilityStatics Function IsValidationResultValid ************************

// ********** Begin Class UNCVUtilityStatics *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UNCVUtilityStatics;
UClass* UNCVUtilityStatics::GetPrivateStaticClass()
{
	using TClass = UNCVUtilityStatics;
	if (!Z_Registration_Info_UClass_UNCVUtilityStatics.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NCVUtilityStatics"),
			Z_Registration_Info_UClass_UNCVUtilityStatics.InnerSingleton,
			StaticRegisterNativesUNCVUtilityStatics,
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
	return Z_Registration_Info_UClass_UNCVUtilityStatics.InnerSingleton;
}
UClass* Z_Construct_UClass_UNCVUtilityStatics_NoRegister()
{
	return UNCVUtilityStatics::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNCVUtilityStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NCVUtilityStatics.h" },
		{ "ModuleRelativePath", "NCVUtilityStatics.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UNCVUtilityStatics constinit property declarations ***********************
// ********** End Class UNCVUtilityStatics constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCleanNameForClasses"), .Pointer = &UNCVUtilityStatics::execGetCleanNameForClasses },
		{ .NameUTF8 = UTF8TEXT("IsValidationResultValid"), .Pointer = &UNCVUtilityStatics::execIsValidationResultValid },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNCVUtilityStatics_GetCleanNameForClasses, "GetCleanNameForClasses" }, // 2111158865
		{ &Z_Construct_UFunction_UNCVUtilityStatics_IsValidationResultValid, "IsValidationResultValid" }, // 2785298251
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNCVUtilityStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UNCVUtilityStatics_Statics
UObject* (*const Z_Construct_UClass_UNCVUtilityStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NamingConventionValidator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNCVUtilityStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNCVUtilityStatics_Statics::ClassParams = {
	&UNCVUtilityStatics::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNCVUtilityStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UNCVUtilityStatics_Statics::Class_MetaDataParams)
};
void UNCVUtilityStatics::StaticRegisterNativesUNCVUtilityStatics()
{
	UClass* Class = UNCVUtilityStatics::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UNCVUtilityStatics_Statics::Funcs));
}
UClass* Z_Construct_UClass_UNCVUtilityStatics()
{
	if (!Z_Registration_Info_UClass_UNCVUtilityStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNCVUtilityStatics.OuterSingleton, Z_Construct_UClass_UNCVUtilityStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNCVUtilityStatics.OuterSingleton;
}
UNCVUtilityStatics::UNCVUtilityStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNCVUtilityStatics);
UNCVUtilityStatics::~UNCVUtilityStatics() {}
// ********** End Class UNCVUtilityStatics *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVUtilityStatics_h__Script_NamingConventionValidator_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNCVUtilityStatics, UNCVUtilityStatics::StaticClass, TEXT("UNCVUtilityStatics"), &Z_Registration_Info_UClass_UNCVUtilityStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNCVUtilityStatics), 3614314823U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVUtilityStatics_h__Script_NamingConventionValidator_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVUtilityStatics_h__Script_NamingConventionValidator_1355985599{
	TEXT("/Script/NamingConventionValidator"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVUtilityStatics_h__Script_NamingConventionValidator_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVUtilityStatics_h__Script_NamingConventionValidator_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
