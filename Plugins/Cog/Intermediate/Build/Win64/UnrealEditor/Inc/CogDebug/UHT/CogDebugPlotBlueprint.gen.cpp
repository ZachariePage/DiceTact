// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogDebugPlotBlueprint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogDebugPlotBlueprint() {}

// ********** Begin Cross Module References ********************************************************
COGDEBUG_API UClass* Z_Construct_UClass_UCogDebugPlotBlueprint();
COGDEBUG_API UClass* Z_Construct_UClass_UCogDebugPlotBlueprint_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_CogDebug();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogDebugPlotBlueprint Function Plot *************************************
struct Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics
{
	struct CogDebugPlotBlueprint_eventPlot_Parms
	{
		const UObject* Owner;
		FName Name;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cog" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogDebugPlotBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Plot constinit property declarations **********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Plot constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Plot Property Definitions *********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugPlotBlueprint_eventPlot_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugPlotBlueprint_eventPlot_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugPlotBlueprint_eventPlot_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics::PropPointers) < 2048);
// ********** End Function Plot Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogDebugPlotBlueprint, nullptr, "Plot", 	Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics::CogDebugPlotBlueprint_eventPlot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics::CogDebugPlotBlueprint_eventPlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogDebugPlotBlueprint::execPlot)
{
	P_GET_OBJECT(UObject,Z_Param_Owner);
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCogDebugPlotBlueprint::Plot(Z_Param_Owner,Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UCogDebugPlotBlueprint Function Plot ***************************************

// ********** Begin Class UCogDebugPlotBlueprint ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogDebugPlotBlueprint;
UClass* UCogDebugPlotBlueprint::GetPrivateStaticClass()
{
	using TClass = UCogDebugPlotBlueprint;
	if (!Z_Registration_Info_UClass_UCogDebugPlotBlueprint.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogDebugPlotBlueprint"),
			Z_Registration_Info_UClass_UCogDebugPlotBlueprint.InnerSingleton,
			StaticRegisterNativesUCogDebugPlotBlueprint,
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
	return Z_Registration_Info_UClass_UCogDebugPlotBlueprint.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogDebugPlotBlueprint_NoRegister()
{
	return UCogDebugPlotBlueprint::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogDebugPlotBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CogDebugPlotBlueprint.h" },
		{ "ModuleRelativePath", "Public/CogDebugPlotBlueprint.h" },
		{ "ScriptName", "CogDebugPlot" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogDebugPlotBlueprint constinit property declarations *******************
// ********** End Class UCogDebugPlotBlueprint constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Plot"), .Pointer = &UCogDebugPlotBlueprint::execPlot },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCogDebugPlotBlueprint_Plot, "Plot" }, // 197478467
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogDebugPlotBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogDebugPlotBlueprint_Statics
UObject* (*const Z_Construct_UClass_UCogDebugPlotBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CogDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogDebugPlotBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogDebugPlotBlueprint_Statics::ClassParams = {
	&UCogDebugPlotBlueprint::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogDebugPlotBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogDebugPlotBlueprint_Statics::Class_MetaDataParams)
};
void UCogDebugPlotBlueprint::StaticRegisterNativesUCogDebugPlotBlueprint()
{
	UClass* Class = UCogDebugPlotBlueprint::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UCogDebugPlotBlueprint_Statics::Funcs));
}
UClass* Z_Construct_UClass_UCogDebugPlotBlueprint()
{
	if (!Z_Registration_Info_UClass_UCogDebugPlotBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogDebugPlotBlueprint.OuterSingleton, Z_Construct_UClass_UCogDebugPlotBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogDebugPlotBlueprint.OuterSingleton;
}
UCogDebugPlotBlueprint::UCogDebugPlotBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogDebugPlotBlueprint);
UCogDebugPlotBlueprint::~UCogDebugPlotBlueprint() {}
// ********** End Class UCogDebugPlotBlueprint *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPlotBlueprint_h__Script_CogDebug_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogDebugPlotBlueprint, UCogDebugPlotBlueprint::StaticClass, TEXT("UCogDebugPlotBlueprint"), &Z_Registration_Info_UClass_UCogDebugPlotBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogDebugPlotBlueprint), 3030103308U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPlotBlueprint_h__Script_CogDebug_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPlotBlueprint_h__Script_CogDebug_2035398951{
	TEXT("/Script/CogDebug"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPlotBlueprint_h__Script_CogDebug_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPlotBlueprint_h__Script_CogDebug_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
