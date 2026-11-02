// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JUE/System/JUESystemStatics.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeJUESystemStatics() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
JUE_API UClass* Z_Construct_UClass_UJUESystemStatics();
JUE_API UClass* Z_Construct_UClass_UJUESystemStatics_NoRegister();
UPackage* Z_Construct_UPackage__Script_JUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UJUESystemStatics Function IsInBuild *************************************
struct Z_Construct_UFunction_UJUESystemStatics_IsInBuild_Statics
{
	struct JUESystemStatics_eventIsInBuild_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SystemStatics" },
		{ "ModuleRelativePath", "System/JUESystemStatics.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInBuild constinit property declarations *****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInBuild constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInBuild Property Definitions ****************************************
void Z_Construct_UFunction_UJUESystemStatics_IsInBuild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((JUESystemStatics_eventIsInBuild_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJUESystemStatics_IsInBuild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JUESystemStatics_eventIsInBuild_Parms), &Z_Construct_UFunction_UJUESystemStatics_IsInBuild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUESystemStatics_IsInBuild_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUESystemStatics_IsInBuild_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUESystemStatics_IsInBuild_Statics::PropPointers) < 2048);
// ********** End Function IsInBuild Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUESystemStatics_IsInBuild_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUESystemStatics, nullptr, "IsInBuild", 	Z_Construct_UFunction_UJUESystemStatics_IsInBuild_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUESystemStatics_IsInBuild_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUESystemStatics_IsInBuild_Statics::JUESystemStatics_eventIsInBuild_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUESystemStatics_IsInBuild_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUESystemStatics_IsInBuild_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUESystemStatics_IsInBuild_Statics::JUESystemStatics_eventIsInBuild_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUESystemStatics_IsInBuild()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUESystemStatics_IsInBuild_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUESystemStatics::execIsInBuild)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UJUESystemStatics::IsInBuild();
	P_NATIVE_END;
}
// ********** End Class UJUESystemStatics Function IsInBuild ***************************************

// ********** Begin Class UJUESystemStatics Function IsInBuildDevelopment **************************
struct Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment_Statics
{
	struct JUESystemStatics_eventIsInBuildDevelopment_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SystemStatics" },
		{ "ModuleRelativePath", "System/JUESystemStatics.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInBuildDevelopment constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInBuildDevelopment constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInBuildDevelopment Property Definitions *****************************
void Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((JUESystemStatics_eventIsInBuildDevelopment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JUESystemStatics_eventIsInBuildDevelopment_Parms), &Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment_Statics::PropPointers) < 2048);
// ********** End Function IsInBuildDevelopment Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUESystemStatics, nullptr, "IsInBuildDevelopment", 	Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment_Statics::JUESystemStatics_eventIsInBuildDevelopment_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment_Statics::JUESystemStatics_eventIsInBuildDevelopment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUESystemStatics::execIsInBuildDevelopment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UJUESystemStatics::IsInBuildDevelopment();
	P_NATIVE_END;
}
// ********** End Class UJUESystemStatics Function IsInBuildDevelopment ****************************

// ********** Begin Class UJUESystemStatics Function IsInBuildShipping *****************************
struct Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping_Statics
{
	struct JUESystemStatics_eventIsInBuildShipping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SystemStatics" },
		{ "ModuleRelativePath", "System/JUESystemStatics.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInBuildShipping constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInBuildShipping constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInBuildShipping Property Definitions ********************************
void Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((JUESystemStatics_eventIsInBuildShipping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JUESystemStatics_eventIsInBuildShipping_Parms), &Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping_Statics::PropPointers) < 2048);
// ********** End Function IsInBuildShipping Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUESystemStatics, nullptr, "IsInBuildShipping", 	Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping_Statics::JUESystemStatics_eventIsInBuildShipping_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping_Statics::JUESystemStatics_eventIsInBuildShipping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUESystemStatics::execIsInBuildShipping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UJUESystemStatics::IsInBuildShipping();
	P_NATIVE_END;
}
// ********** End Class UJUESystemStatics Function IsInBuildShipping *******************************

// ********** Begin Class UJUESystemStatics Function IsInEditor ************************************
struct Z_Construct_UFunction_UJUESystemStatics_IsInEditor_Statics
{
	struct JUESystemStatics_eventIsInEditor_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SystemStatics" },
		{ "ModuleRelativePath", "System/JUESystemStatics.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInEditor constinit property declarations ****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInEditor constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInEditor Property Definitions ***************************************
void Z_Construct_UFunction_UJUESystemStatics_IsInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((JUESystemStatics_eventIsInEditor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJUESystemStatics_IsInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JUESystemStatics_eventIsInEditor_Parms), &Z_Construct_UFunction_UJUESystemStatics_IsInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUESystemStatics_IsInEditor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUESystemStatics_IsInEditor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUESystemStatics_IsInEditor_Statics::PropPointers) < 2048);
// ********** End Function IsInEditor Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUESystemStatics_IsInEditor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUESystemStatics, nullptr, "IsInEditor", 	Z_Construct_UFunction_UJUESystemStatics_IsInEditor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUESystemStatics_IsInEditor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUESystemStatics_IsInEditor_Statics::JUESystemStatics_eventIsInEditor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUESystemStatics_IsInEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUESystemStatics_IsInEditor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUESystemStatics_IsInEditor_Statics::JUESystemStatics_eventIsInEditor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUESystemStatics_IsInEditor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUESystemStatics_IsInEditor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUESystemStatics::execIsInEditor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UJUESystemStatics::IsInEditor();
	P_NATIVE_END;
}
// ********** End Class UJUESystemStatics Function IsInEditor **************************************

// ********** Begin Class UJUESystemStatics ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UJUESystemStatics;
UClass* UJUESystemStatics::GetPrivateStaticClass()
{
	using TClass = UJUESystemStatics;
	if (!Z_Registration_Info_UClass_UJUESystemStatics.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("JUESystemStatics"),
			Z_Registration_Info_UClass_UJUESystemStatics.InnerSingleton,
			StaticRegisterNativesUJUESystemStatics,
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
	return Z_Registration_Info_UClass_UJUESystemStatics.InnerSingleton;
}
UClass* Z_Construct_UClass_UJUESystemStatics_NoRegister()
{
	return UJUESystemStatics::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UJUESystemStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "System/JUESystemStatics.h" },
		{ "ModuleRelativePath", "System/JUESystemStatics.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UJUESystemStatics constinit property declarations ************************
// ********** End Class UJUESystemStatics constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("IsInBuild"), .Pointer = &UJUESystemStatics::execIsInBuild },
		{ .NameUTF8 = UTF8TEXT("IsInBuildDevelopment"), .Pointer = &UJUESystemStatics::execIsInBuildDevelopment },
		{ .NameUTF8 = UTF8TEXT("IsInBuildShipping"), .Pointer = &UJUESystemStatics::execIsInBuildShipping },
		{ .NameUTF8 = UTF8TEXT("IsInEditor"), .Pointer = &UJUESystemStatics::execIsInEditor },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJUESystemStatics_IsInBuild, "IsInBuild" }, // 3497676096
		{ &Z_Construct_UFunction_UJUESystemStatics_IsInBuildDevelopment, "IsInBuildDevelopment" }, // 1035007651
		{ &Z_Construct_UFunction_UJUESystemStatics_IsInBuildShipping, "IsInBuildShipping" }, // 1467589329
		{ &Z_Construct_UFunction_UJUESystemStatics_IsInEditor, "IsInEditor" }, // 1676854710
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJUESystemStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UJUESystemStatics_Statics
UObject* (*const Z_Construct_UClass_UJUESystemStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_JUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJUESystemStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJUESystemStatics_Statics::ClassParams = {
	&UJUESystemStatics::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJUESystemStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UJUESystemStatics_Statics::Class_MetaDataParams)
};
void UJUESystemStatics::StaticRegisterNativesUJUESystemStatics()
{
	UClass* Class = UJUESystemStatics::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UJUESystemStatics_Statics::Funcs));
}
UClass* Z_Construct_UClass_UJUESystemStatics()
{
	if (!Z_Registration_Info_UClass_UJUESystemStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJUESystemStatics.OuterSingleton, Z_Construct_UClass_UJUESystemStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJUESystemStatics.OuterSingleton;
}
UJUESystemStatics::UJUESystemStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UJUESystemStatics);
UJUESystemStatics::~UJUESystemStatics() {}
// ********** End Class UJUESystemStatics **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_JUESystemStatics_h__Script_JUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJUESystemStatics, UJUESystemStatics::StaticClass, TEXT("UJUESystemStatics"), &Z_Registration_Info_UClass_UJUESystemStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJUESystemStatics), 3226562589U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_JUESystemStatics_h__Script_JUE_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_JUESystemStatics_h__Script_JUE_146480965{
	TEXT("/Script/JUE"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_JUESystemStatics_h__Script_JUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_JUESystemStatics_h__Script_JUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
