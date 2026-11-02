// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineDataAsset() {}

// ********** Begin Cross Module References ********************************************************
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineCheat_Execution();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineCheat_Execution_NoRegister();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineDataAsset();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineDataAsset_NoRegister();
COGENGINE_API UEnum* Z_Construct_UEnum_CogEngine_ECogEngineCheat_ActiveState();
COGENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCogEngineCheat();
COGENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCogEngineCheatCategory();
COGENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCogEngineSpawnEntry();
COGENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCogEngineSpawnGroup();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECogEngineCheat_ActiveState ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECogEngineCheat_ActiveState;
static UEnum* ECogEngineCheat_ActiveState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECogEngineCheat_ActiveState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECogEngineCheat_ActiveState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CogEngine_ECogEngineCheat_ActiveState, (UObject*)Z_Construct_UPackage__Script_CogEngine(), TEXT("ECogEngineCheat_ActiveState"));
	}
	return Z_Registration_Info_UEnum_ECogEngineCheat_ActiveState.OuterSingleton;
}
template<> COGENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogEngineCheat_ActiveState>()
{
	return ECogEngineCheat_ActiveState_StaticEnum();
}
struct Z_Construct_UEnum_CogEngine_ECogEngineCheat_ActiveState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Active.Name", "ECogEngineCheat_ActiveState::Active" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "Inactive.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Inactive.Name", "ECogEngineCheat_ActiveState::Inactive" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
		{ "Partial.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Partial.Name", "ECogEngineCheat_ActiveState::Partial" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECogEngineCheat_ActiveState::Inactive", (int64)ECogEngineCheat_ActiveState::Inactive },
		{ "ECogEngineCheat_ActiveState::Partial", (int64)ECogEngineCheat_ActiveState::Partial },
		{ "ECogEngineCheat_ActiveState::Active", (int64)ECogEngineCheat_ActiveState::Active },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CogEngine_ECogEngineCheat_ActiveState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CogEngine_ECogEngineCheat_ActiveState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CogEngine,
	nullptr,
	"ECogEngineCheat_ActiveState",
	"ECogEngineCheat_ActiveState",
	Z_Construct_UEnum_CogEngine_ECogEngineCheat_ActiveState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CogEngine_ECogEngineCheat_ActiveState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CogEngine_ECogEngineCheat_ActiveState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CogEngine_ECogEngineCheat_ActiveState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CogEngine_ECogEngineCheat_ActiveState()
{
	if (!Z_Registration_Info_UEnum_ECogEngineCheat_ActiveState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECogEngineCheat_ActiveState.InnerSingleton, Z_Construct_UEnum_CogEngine_ECogEngineCheat_ActiveState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECogEngineCheat_ActiveState.InnerSingleton;
}
// ********** End Enum ECogEngineCheat_ActiveState *************************************************

// ********** Begin Class UCogEngineCheat_Execution Function Execute *******************************
struct CogEngineCheat_Execution_eventExecute_Parms
{
	const UObject* WorldContextObject;
	const AActor* Instigator;
	TArray<AActor*> Targets;
};
static FName NAME_UCogEngineCheat_Execution_Execute = FName(TEXT("Execute"));
void UCogEngineCheat_Execution::Execute(const UObject* WorldContextObject, const AActor* Instigator, TArray<AActor*> const& Targets) const
{
	UFunction* Func = FindFunctionChecked(NAME_UCogEngineCheat_Execution_Execute);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CogEngineCheat_Execution_eventExecute_Parms Parms;
		Parms.WorldContextObject=WorldContextObject;
		Parms.Instigator=Instigator;
		Parms.Targets=Targets;
		const_cast<UCogEngineCheat_Execution*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UCogEngineCheat_Execution*>(this)->Execute_Implementation(WorldContextObject, Instigator, Targets);
	}
}
struct Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Execute constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Targets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Execute constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Execute Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogEngineCheat_Execution_eventExecute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogEngineCheat_Execution_eventExecute_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogEngineCheat_Execution_eventExecute_Parms, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Targets_MetaData), NewProp_Targets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics::NewProp_Targets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics::NewProp_Targets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics::PropPointers) < 2048);
// ********** End Function Execute Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogEngineCheat_Execution, nullptr, "Execute", 	Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics::PropPointers), 
sizeof(CogEngineCheat_Execution_eventExecute_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogEngineCheat_Execution_eventExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogEngineCheat_Execution_Execute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogEngineCheat_Execution_Execute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogEngineCheat_Execution::execExecute)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_Targets);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Execute_Implementation(Z_Param_WorldContextObject,Z_Param_Instigator,Z_Param_Out_Targets);
	P_NATIVE_END;
}
// ********** End Class UCogEngineCheat_Execution Function Execute *********************************

// ********** Begin Class UCogEngineCheat_Execution Function IsActiveOnTargets *********************
struct CogEngineCheat_Execution_eventIsActiveOnTargets_Parms
{
	const UObject* WorldContextObject;
	TArray<AActor*> Targets;
	ECogEngineCheat_ActiveState ReturnValue;

	/** Constructor, initializes return property only **/
	CogEngineCheat_Execution_eventIsActiveOnTargets_Parms()
		: ReturnValue((ECogEngineCheat_ActiveState)0)
	{
	}
};
static FName NAME_UCogEngineCheat_Execution_IsActiveOnTargets = FName(TEXT("IsActiveOnTargets"));
ECogEngineCheat_ActiveState UCogEngineCheat_Execution::IsActiveOnTargets(const UObject* WorldContextObject, TArray<AActor*> const& Targets) const
{
	UFunction* Func = FindFunctionChecked(NAME_UCogEngineCheat_Execution_IsActiveOnTargets);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CogEngineCheat_Execution_eventIsActiveOnTargets_Parms Parms;
		Parms.WorldContextObject=WorldContextObject;
		Parms.Targets=Targets;
		const_cast<UCogEngineCheat_Execution*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UCogEngineCheat_Execution*>(this)->IsActiveOnTargets_Implementation(WorldContextObject, Targets);
	}
}
struct Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsActiveOnTargets constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Targets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsActiveOnTargets constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsActiveOnTargets Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogEngineCheat_Execution_eventIsActiveOnTargets_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogEngineCheat_Execution_eventIsActiveOnTargets_Parms, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Targets_MetaData), NewProp_Targets_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogEngineCheat_Execution_eventIsActiveOnTargets_Parms, ReturnValue), Z_Construct_UEnum_CogEngine_ECogEngineCheat_ActiveState, METADATA_PARAMS(0, nullptr) }; // 103814298
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::NewProp_Targets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::NewProp_Targets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::PropPointers) < 2048);
// ********** End Function IsActiveOnTargets Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCogEngineCheat_Execution, nullptr, "IsActiveOnTargets", 	Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::PropPointers), 
sizeof(CogEngineCheat_Execution_eventIsActiveOnTargets_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogEngineCheat_Execution_eventIsActiveOnTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCogEngineCheat_Execution::execIsActiveOnTargets)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_Targets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECogEngineCheat_ActiveState*)Z_Param__Result=P_THIS->IsActiveOnTargets_Implementation(Z_Param_WorldContextObject,Z_Param_Out_Targets);
	P_NATIVE_END;
}
// ********** End Class UCogEngineCheat_Execution Function IsActiveOnTargets ***********************

// ********** Begin Class UCogEngineCheat_Execution ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineCheat_Execution;
UClass* UCogEngineCheat_Execution::GetPrivateStaticClass()
{
	using TClass = UCogEngineCheat_Execution;
	if (!Z_Registration_Info_UClass_UCogEngineCheat_Execution.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineCheat_Execution"),
			Z_Registration_Info_UClass_UCogEngineCheat_Execution.InnerSingleton,
			StaticRegisterNativesUCogEngineCheat_Execution,
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
	return Z_Registration_Info_UClass_UCogEngineCheat_Execution.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineCheat_Execution_NoRegister()
{
	return UCogEngineCheat_Execution::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineCheat_Execution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineCheat_Execution constinit property declarations ****************
// ********** End Class UCogEngineCheat_Execution constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Execute"), .Pointer = &UCogEngineCheat_Execution::execExecute },
		{ .NameUTF8 = UTF8TEXT("IsActiveOnTargets"), .Pointer = &UCogEngineCheat_Execution::execIsActiveOnTargets },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCogEngineCheat_Execution_Execute, "Execute" }, // 301035064
		{ &Z_Construct_UFunction_UCogEngineCheat_Execution_IsActiveOnTargets, "IsActiveOnTargets" }, // 4089536869
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineCheat_Execution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineCheat_Execution_Statics
UObject* (*const Z_Construct_UClass_UCogEngineCheat_Execution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineCheat_Execution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineCheat_Execution_Statics::ClassParams = {
	&UCogEngineCheat_Execution::StaticClass,
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
	0x003130A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineCheat_Execution_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineCheat_Execution_Statics::Class_MetaDataParams)
};
void UCogEngineCheat_Execution::StaticRegisterNativesUCogEngineCheat_Execution()
{
	UClass* Class = UCogEngineCheat_Execution::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UCogEngineCheat_Execution_Statics::Funcs));
}
UClass* Z_Construct_UClass_UCogEngineCheat_Execution()
{
	if (!Z_Registration_Info_UClass_UCogEngineCheat_Execution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineCheat_Execution.OuterSingleton, Z_Construct_UClass_UCogEngineCheat_Execution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineCheat_Execution.OuterSingleton;
}
UCogEngineCheat_Execution::UCogEngineCheat_Execution(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineCheat_Execution);
UCogEngineCheat_Execution::~UCogEngineCheat_Execution() {}
// ********** End Class UCogEngineCheat_Execution **************************************************

// ********** Begin ScriptStruct FCogEngineCheat ***************************************************
struct Z_Construct_UScriptStruct_FCogEngineCheat_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogEngineCheat); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogEngineCheat); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Execution_MetaData[] = {
		{ "Category", "Cog" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogEngineCheat constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Execution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCogEngineCheat constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogEngineCheat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogEngineCheat_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogEngineCheat;
class UScriptStruct* FCogEngineCheat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogEngineCheat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogEngineCheat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogEngineCheat, (UObject*)Z_Construct_UPackage__Script_CogEngine(), TEXT("CogEngineCheat"));
	}
	return Z_Registration_Info_UScriptStruct_FCogEngineCheat.OuterSingleton;
	}

// ********** Begin ScriptStruct FCogEngineCheat Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCogEngineCheat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogEngineCheat, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCogEngineCheat_Statics::NewProp_Execution = { "Execution", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogEngineCheat, Execution), Z_Construct_UClass_UCogEngineCheat_Execution_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Execution_MetaData), NewProp_Execution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogEngineCheat_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogEngineCheat, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCogEngineCheat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineCheat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineCheat_Statics::NewProp_Execution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineCheat_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineCheat_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCogEngineCheat Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogEngineCheat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
	nullptr,
	&NewStructOps,
	"CogEngineCheat",
	Z_Construct_UScriptStruct_FCogEngineCheat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineCheat_Statics::PropPointers),
	sizeof(FCogEngineCheat),
	alignof(FCogEngineCheat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineCheat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogEngineCheat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogEngineCheat()
{
	if (!Z_Registration_Info_UScriptStruct_FCogEngineCheat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogEngineCheat.InnerSingleton, Z_Construct_UScriptStruct_FCogEngineCheat_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogEngineCheat.InnerSingleton);
}
// ********** End ScriptStruct FCogEngineCheat *****************************************************

// ********** Begin ScriptStruct FCogEngineCheatCategory *******************************************
struct Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogEngineCheatCategory); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogEngineCheatCategory); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Cheats" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentCheats_MetaData[] = {
		{ "Category", "Cheats" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
		{ "TitleProperty", "Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstantCheats_MetaData[] = {
		{ "Category", "Cheats" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
		{ "TitleProperty", "Name" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogEngineCheatCategory constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistentCheats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PersistentCheats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstantCheats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstantCheats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCogEngineCheatCategory constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogEngineCheatCategory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogEngineCheatCategory;
class UScriptStruct* FCogEngineCheatCategory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogEngineCheatCategory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogEngineCheatCategory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogEngineCheatCategory, (UObject*)Z_Construct_UPackage__Script_CogEngine(), TEXT("CogEngineCheatCategory"));
	}
	return Z_Registration_Info_UScriptStruct_FCogEngineCheatCategory.OuterSingleton;
	}

// ********** Begin ScriptStruct FCogEngineCheatCategory Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogEngineCheatCategory, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::NewProp_PersistentCheats_Inner = { "PersistentCheats", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCogEngineCheat, METADATA_PARAMS(0, nullptr) }; // 4065924137
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::NewProp_PersistentCheats = { "PersistentCheats", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogEngineCheatCategory, PersistentCheats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentCheats_MetaData), NewProp_PersistentCheats_MetaData) }; // 4065924137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::NewProp_InstantCheats_Inner = { "InstantCheats", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCogEngineCheat, METADATA_PARAMS(0, nullptr) }; // 4065924137
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::NewProp_InstantCheats = { "InstantCheats", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogEngineCheatCategory, InstantCheats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstantCheats_MetaData), NewProp_InstantCheats_MetaData) }; // 4065924137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::NewProp_PersistentCheats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::NewProp_PersistentCheats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::NewProp_InstantCheats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::NewProp_InstantCheats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCogEngineCheatCategory Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
	nullptr,
	&NewStructOps,
	"CogEngineCheatCategory",
	Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::PropPointers),
	sizeof(FCogEngineCheatCategory),
	alignof(FCogEngineCheatCategory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogEngineCheatCategory()
{
	if (!Z_Registration_Info_UScriptStruct_FCogEngineCheatCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogEngineCheatCategory.InnerSingleton, Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogEngineCheatCategory.InnerSingleton);
}
// ********** End ScriptStruct FCogEngineCheatCategory *********************************************

// ********** Begin ScriptStruct FCogEngineSpawnEntry **********************************************
struct Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogEngineSpawnEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogEngineSpawnEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogEngineSpawnEntry constinit property declarations **************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCogEngineSpawnEntry constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogEngineSpawnEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogEngineSpawnEntry;
class UScriptStruct* FCogEngineSpawnEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogEngineSpawnEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogEngineSpawnEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogEngineSpawnEntry, (UObject*)Z_Construct_UPackage__Script_CogEngine(), TEXT("CogEngineSpawnEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FCogEngineSpawnEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FCogEngineSpawnEntry Property Definitions *************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogEngineSpawnEntry, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogEngineSpawnEntry, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics::NewProp_Asset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCogEngineSpawnEntry Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
	nullptr,
	&NewStructOps,
	"CogEngineSpawnEntry",
	Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics::PropPointers),
	sizeof(FCogEngineSpawnEntry),
	alignof(FCogEngineSpawnEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogEngineSpawnEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FCogEngineSpawnEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogEngineSpawnEntry.InnerSingleton, Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogEngineSpawnEntry.InnerSingleton);
}
// ********** End ScriptStruct FCogEngineSpawnEntry ************************************************

// ********** Begin ScriptStruct FCogEngineSpawnGroup **********************************************
struct Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogEngineSpawnGroup); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogEngineSpawnGroup); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawns_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogEngineSpawnGroup constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spawns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Spawns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCogEngineSpawnGroup constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogEngineSpawnGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogEngineSpawnGroup;
class UScriptStruct* FCogEngineSpawnGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogEngineSpawnGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogEngineSpawnGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogEngineSpawnGroup, (UObject*)Z_Construct_UPackage__Script_CogEngine(), TEXT("CogEngineSpawnGroup"));
	}
	return Z_Registration_Info_UScriptStruct_FCogEngineSpawnGroup.OuterSingleton;
	}

// ********** Begin ScriptStruct FCogEngineSpawnGroup Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogEngineSpawnGroup, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogEngineSpawnGroup, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::NewProp_Spawns_Inner = { "Spawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCogEngineSpawnEntry, METADATA_PARAMS(0, nullptr) }; // 1700998124
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::NewProp_Spawns = { "Spawns", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogEngineSpawnGroup, Spawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawns_MetaData), NewProp_Spawns_MetaData) }; // 1700998124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::NewProp_Spawns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::NewProp_Spawns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCogEngineSpawnGroup Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
	nullptr,
	&NewStructOps,
	"CogEngineSpawnGroup",
	Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::PropPointers),
	sizeof(FCogEngineSpawnGroup),
	alignof(FCogEngineSpawnGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogEngineSpawnGroup()
{
	if (!Z_Registration_Info_UScriptStruct_FCogEngineSpawnGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogEngineSpawnGroup.InnerSingleton, Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogEngineSpawnGroup.InnerSingleton);
}
// ********** End ScriptStruct FCogEngineSpawnGroup ************************************************

// ********** Begin Class UCogEngineDataAsset ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineDataAsset;
UClass* UCogEngineDataAsset::GetPrivateStaticClass()
{
	using TClass = UCogEngineDataAsset;
	if (!Z_Registration_Info_UClass_UCogEngineDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineDataAsset"),
			Z_Registration_Info_UClass_UCogEngineDataAsset.InnerSingleton,
			StaticRegisterNativesUCogEngineDataAsset,
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
	return Z_Registration_Info_UClass_UCogEngineDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineDataAsset_NoRegister()
{
	return UCogEngineDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheatCategories_MetaData[] = {
		{ "Category", "Cheats" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
		{ "TitleProperty", "Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnGroups_MetaData[] = {
		{ "Category", "Spawns" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
		{ "TitleProperty", "Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionFilters_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionTraceChannel_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/CogEngineDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineDataAsset constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheatCategories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CheatCategories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnGroups;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SelectionFilters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectionFilters;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionTraceChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineDataAsset constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineDataAsset_Statics

// ********** Begin Class UCogEngineDataAsset Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineDataAsset_Statics::NewProp_CheatCategories_Inner = { "CheatCategories", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCogEngineCheatCategory, METADATA_PARAMS(0, nullptr) }; // 2987263081
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogEngineDataAsset_Statics::NewProp_CheatCategories = { "CheatCategories", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineDataAsset, CheatCategories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheatCategories_MetaData), NewProp_CheatCategories_MetaData) }; // 2987263081
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineDataAsset_Statics::NewProp_SpawnGroups_Inner = { "SpawnGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCogEngineSpawnGroup, METADATA_PARAMS(0, nullptr) }; // 3546006207
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogEngineDataAsset_Statics::NewProp_SpawnGroups = { "SpawnGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineDataAsset, SpawnGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnGroups_MetaData), NewProp_SpawnGroups_MetaData) }; // 3546006207
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCogEngineDataAsset_Statics::NewProp_SelectionFilters_Inner = { "SelectionFilters", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogEngineDataAsset_Statics::NewProp_SelectionFilters = { "SelectionFilters", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineDataAsset, SelectionFilters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionFilters_MetaData), NewProp_SelectionFilters_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCogEngineDataAsset_Statics::NewProp_SelectionTraceChannel = { "SelectionTraceChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineDataAsset, SelectionTraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionTraceChannel_MetaData), NewProp_SelectionTraceChannel_MetaData) }; // 93441085
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineDataAsset_Statics::NewProp_CheatCategories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineDataAsset_Statics::NewProp_CheatCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineDataAsset_Statics::NewProp_SpawnGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineDataAsset_Statics::NewProp_SpawnGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineDataAsset_Statics::NewProp_SelectionFilters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineDataAsset_Statics::NewProp_SelectionFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineDataAsset_Statics::NewProp_SelectionTraceChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineDataAsset_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineDataAsset Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UCogEngineDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineDataAsset_Statics::ClassParams = {
	&UCogEngineDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineDataAsset_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineDataAsset_Statics::Class_MetaDataParams)
};
void UCogEngineDataAsset::StaticRegisterNativesUCogEngineDataAsset()
{
}
UClass* Z_Construct_UClass_UCogEngineDataAsset()
{
	if (!Z_Registration_Info_UClass_UCogEngineDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineDataAsset.OuterSingleton, Z_Construct_UClass_UCogEngineDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineDataAsset.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineDataAsset);
UCogEngineDataAsset::~UCogEngineDataAsset() {}
// ********** End Class UCogEngineDataAsset ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h__Script_CogEngine_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECogEngineCheat_ActiveState_StaticEnum, TEXT("ECogEngineCheat_ActiveState"), &Z_Registration_Info_UEnum_ECogEngineCheat_ActiveState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 103814298U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCogEngineCheat::StaticStruct, Z_Construct_UScriptStruct_FCogEngineCheat_Statics::NewStructOps, TEXT("CogEngineCheat"),&Z_Registration_Info_UScriptStruct_FCogEngineCheat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogEngineCheat), 4065924137U) },
		{ FCogEngineCheatCategory::StaticStruct, Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics::NewStructOps, TEXT("CogEngineCheatCategory"),&Z_Registration_Info_UScriptStruct_FCogEngineCheatCategory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogEngineCheatCategory), 2987263081U) },
		{ FCogEngineSpawnEntry::StaticStruct, Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics::NewStructOps, TEXT("CogEngineSpawnEntry"),&Z_Registration_Info_UScriptStruct_FCogEngineSpawnEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogEngineSpawnEntry), 1700998124U) },
		{ FCogEngineSpawnGroup::StaticStruct, Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics::NewStructOps, TEXT("CogEngineSpawnGroup"),&Z_Registration_Info_UScriptStruct_FCogEngineSpawnGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogEngineSpawnGroup), 3546006207U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineCheat_Execution, UCogEngineCheat_Execution::StaticClass, TEXT("UCogEngineCheat_Execution"), &Z_Registration_Info_UClass_UCogEngineCheat_Execution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineCheat_Execution), 2909722691U) },
		{ Z_Construct_UClass_UCogEngineDataAsset, UCogEngineDataAsset::StaticClass, TEXT("UCogEngineDataAsset"), &Z_Registration_Info_UClass_UCogEngineDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineDataAsset), 1736369331U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h__Script_CogEngine_4125442271{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h__Script_CogEngine_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h__Script_CogEngine_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h__Script_CogEngine_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h__Script_CogEngine_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h__Script_CogEngine_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
