// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineReplicator.h"
#include "CogEngineDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineReplicator() {}

// ********** Begin Cross Module References ********************************************************
COGENGINE_API UClass* Z_Construct_UClass_ACogEngineReplicator();
COGENGINE_API UClass* Z_Construct_UClass_ACogEngineReplicator_NoRegister();
COGENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCogEngineCheat();
COGENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCogEngineSpawnEntry();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACogEngineReplicator Function OnRep_TimeDilation *************************
struct Z_Construct_UFunction_ACogEngineReplicator_OnRep_TimeDilation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogEngineReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_TimeDilation constinit property declarations ********************
// ********** End Function OnRep_TimeDilation constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogEngineReplicator_OnRep_TimeDilation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogEngineReplicator, nullptr, "OnRep_TimeDilation", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_OnRep_TimeDilation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogEngineReplicator_OnRep_TimeDilation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACogEngineReplicator_OnRep_TimeDilation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogEngineReplicator_OnRep_TimeDilation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogEngineReplicator::execOnRep_TimeDilation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TimeDilation();
	P_NATIVE_END;
}
// ********** End Class ACogEngineReplicator Function OnRep_TimeDilation ***************************

// ********** Begin Class ACogEngineReplicator Function Server_ApplyCheat **************************
struct CogEngineReplicator_eventServer_ApplyCheat_Parms
{
	const AActor* CheatInstigator;
	TArray<AActor*> TargetActors;
	FCogEngineCheat Cheat;
};
static FName NAME_ACogEngineReplicator_Server_ApplyCheat = FName(TEXT("Server_ApplyCheat"));
void ACogEngineReplicator::Server_ApplyCheat(const AActor* CheatInstigator, TArray<AActor*> const& TargetActors, FCogEngineCheat const& Cheat) const
{
	CogEngineReplicator_eventServer_ApplyCheat_Parms Parms;
	Parms.CheatInstigator=CheatInstigator;
	Parms.TargetActors=TargetActors;
	Parms.Cheat=Cheat;
	UFunction* Func = FindFunctionChecked(NAME_ACogEngineReplicator_Server_ApplyCheat);
		const_cast<ACogEngineReplicator*>(this)->ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogEngineReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheatInstigator_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActors_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cheat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_ApplyCheat constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheatInstigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cheat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_ApplyCheat constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_ApplyCheat Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics::NewProp_CheatInstigator = { "CheatInstigator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogEngineReplicator_eventServer_ApplyCheat_Parms, CheatInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheatInstigator_MetaData), NewProp_CheatInstigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics::NewProp_TargetActors_Inner = { "TargetActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics::NewProp_TargetActors = { "TargetActors", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogEngineReplicator_eventServer_ApplyCheat_Parms, TargetActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActors_MetaData), NewProp_TargetActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics::NewProp_Cheat = { "Cheat", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogEngineReplicator_eventServer_ApplyCheat_Parms, Cheat), Z_Construct_UScriptStruct_FCogEngineCheat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cheat_MetaData), NewProp_Cheat_MetaData) }; // 4065924137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics::NewProp_CheatInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics::NewProp_TargetActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics::NewProp_TargetActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics::NewProp_Cheat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics::PropPointers) < 2048);
// ********** End Function Server_ApplyCheat Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogEngineReplicator, nullptr, "Server_ApplyCheat", 	Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics::PropPointers), 
sizeof(CogEngineReplicator_eventServer_ApplyCheat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogEngineReplicator_eventServer_ApplyCheat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogEngineReplicator::execServer_ApplyCheat)
{
	P_GET_OBJECT(AActor,Z_Param_CheatInstigator);
	P_GET_TARRAY(AActor*,Z_Param_TargetActors);
	P_GET_STRUCT(FCogEngineCheat,Z_Param_Cheat);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ApplyCheat_Implementation(Z_Param_CheatInstigator,Z_Param_TargetActors,Z_Param_Cheat);
	P_NATIVE_END;
}
// ********** End Class ACogEngineReplicator Function Server_ApplyCheat ****************************

// ********** Begin Class ACogEngineReplicator Function Server_DeleteActor *************************
struct CogEngineReplicator_eventServer_DeleteActor_Parms
{
	AActor* Actor;
};
static FName NAME_ACogEngineReplicator_Server_DeleteActor = FName(TEXT("Server_DeleteActor"));
void ACogEngineReplicator::Server_DeleteActor(AActor* Actor)
{
	CogEngineReplicator_eventServer_DeleteActor_Parms Parms;
	Parms.Actor=Actor;
	UFunction* Func = FindFunctionChecked(NAME_ACogEngineReplicator_Server_DeleteActor);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACogEngineReplicator_Server_DeleteActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogEngineReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_DeleteActor constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_DeleteActor constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_DeleteActor Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACogEngineReplicator_Server_DeleteActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogEngineReplicator_eventServer_DeleteActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACogEngineReplicator_Server_DeleteActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogEngineReplicator_Server_DeleteActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_Server_DeleteActor_Statics::PropPointers) < 2048);
// ********** End Function Server_DeleteActor Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogEngineReplicator_Server_DeleteActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogEngineReplicator, nullptr, "Server_DeleteActor", 	Z_Construct_UFunction_ACogEngineReplicator_Server_DeleteActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_Server_DeleteActor_Statics::PropPointers), 
sizeof(CogEngineReplicator_eventServer_DeleteActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_Server_DeleteActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogEngineReplicator_Server_DeleteActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogEngineReplicator_eventServer_DeleteActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACogEngineReplicator_Server_DeleteActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogEngineReplicator_Server_DeleteActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogEngineReplicator::execServer_DeleteActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_DeleteActor_Implementation(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class ACogEngineReplicator Function Server_DeleteActor ***************************

// ********** Begin Class ACogEngineReplicator Function Server_Possess *****************************
struct CogEngineReplicator_eventServer_Possess_Parms
{
	APawn* Pawn;
};
static FName NAME_ACogEngineReplicator_Server_Possess = FName(TEXT("Server_Possess"));
void ACogEngineReplicator::Server_Possess(APawn* Pawn)
{
	CogEngineReplicator_eventServer_Possess_Parms Parms;
	Parms.Pawn=Pawn;
	UFunction* Func = FindFunctionChecked(NAME_ACogEngineReplicator_Server_Possess);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACogEngineReplicator_Server_Possess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogEngineReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_Possess constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_Possess constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_Possess Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACogEngineReplicator_Server_Possess_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogEngineReplicator_eventServer_Possess_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACogEngineReplicator_Server_Possess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogEngineReplicator_Server_Possess_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_Server_Possess_Statics::PropPointers) < 2048);
// ********** End Function Server_Possess Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogEngineReplicator_Server_Possess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogEngineReplicator, nullptr, "Server_Possess", 	Z_Construct_UFunction_ACogEngineReplicator_Server_Possess_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_Server_Possess_Statics::PropPointers), 
sizeof(CogEngineReplicator_eventServer_Possess_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_Server_Possess_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogEngineReplicator_Server_Possess_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogEngineReplicator_eventServer_Possess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACogEngineReplicator_Server_Possess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogEngineReplicator_Server_Possess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogEngineReplicator::execServer_Possess)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_Possess_Implementation(Z_Param_Pawn);
	P_NATIVE_END;
}
// ********** End Class ACogEngineReplicator Function Server_Possess *******************************

// ********** Begin Class ACogEngineReplicator Function Server_ResetPossession *********************
static FName NAME_ACogEngineReplicator_Server_ResetPossession = FName(TEXT("Server_ResetPossession"));
void ACogEngineReplicator::Server_ResetPossession()
{
	UFunction* Func = FindFunctionChecked(NAME_ACogEngineReplicator_Server_ResetPossession);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACogEngineReplicator_Server_ResetPossession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogEngineReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_ResetPossession constinit property declarations ****************
// ********** End Function Server_ResetPossession constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogEngineReplicator_Server_ResetPossession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogEngineReplicator, nullptr, "Server_ResetPossession", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_Server_ResetPossession_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogEngineReplicator_Server_ResetPossession_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACogEngineReplicator_Server_ResetPossession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogEngineReplicator_Server_ResetPossession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogEngineReplicator::execServer_ResetPossession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ResetPossession_Implementation();
	P_NATIVE_END;
}
// ********** End Class ACogEngineReplicator Function Server_ResetPossession ***********************

// ********** Begin Class ACogEngineReplicator Function Server_SetTimeDilation *********************
struct CogEngineReplicator_eventServer_SetTimeDilation_Parms
{
	float Value;
};
static FName NAME_ACogEngineReplicator_Server_SetTimeDilation = FName(TEXT("Server_SetTimeDilation"));
void ACogEngineReplicator::Server_SetTimeDilation(float Value)
{
	CogEngineReplicator_eventServer_SetTimeDilation_Parms Parms;
	Parms.Value=Value;
	UFunction* Func = FindFunctionChecked(NAME_ACogEngineReplicator_Server_SetTimeDilation);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACogEngineReplicator_Server_SetTimeDilation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogEngineReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_SetTimeDilation constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_SetTimeDilation constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_SetTimeDilation Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACogEngineReplicator_Server_SetTimeDilation_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogEngineReplicator_eventServer_SetTimeDilation_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACogEngineReplicator_Server_SetTimeDilation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogEngineReplicator_Server_SetTimeDilation_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_Server_SetTimeDilation_Statics::PropPointers) < 2048);
// ********** End Function Server_SetTimeDilation Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogEngineReplicator_Server_SetTimeDilation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogEngineReplicator, nullptr, "Server_SetTimeDilation", 	Z_Construct_UFunction_ACogEngineReplicator_Server_SetTimeDilation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_Server_SetTimeDilation_Statics::PropPointers), 
sizeof(CogEngineReplicator_eventServer_SetTimeDilation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_Server_SetTimeDilation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogEngineReplicator_Server_SetTimeDilation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogEngineReplicator_eventServer_SetTimeDilation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACogEngineReplicator_Server_SetTimeDilation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogEngineReplicator_Server_SetTimeDilation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogEngineReplicator::execServer_SetTimeDilation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetTimeDilation_Implementation(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ACogEngineReplicator Function Server_SetTimeDilation ***********************

// ********** Begin Class ACogEngineReplicator Function Server_Spawn *******************************
struct CogEngineReplicator_eventServer_Spawn_Parms
{
	FCogEngineSpawnEntry SpawnEntry;
};
static FName NAME_ACogEngineReplicator_Server_Spawn = FName(TEXT("Server_Spawn"));
void ACogEngineReplicator::Server_Spawn(FCogEngineSpawnEntry const& SpawnEntry)
{
	CogEngineReplicator_eventServer_Spawn_Parms Parms;
	Parms.SpawnEntry=SpawnEntry;
	UFunction* Func = FindFunctionChecked(NAME_ACogEngineReplicator_Server_Spawn);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACogEngineReplicator_Server_Spawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogEngineReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnEntry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_Spawn constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnEntry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_Spawn constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_Spawn Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACogEngineReplicator_Server_Spawn_Statics::NewProp_SpawnEntry = { "SpawnEntry", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogEngineReplicator_eventServer_Spawn_Parms, SpawnEntry), Z_Construct_UScriptStruct_FCogEngineSpawnEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnEntry_MetaData), NewProp_SpawnEntry_MetaData) }; // 1700998124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACogEngineReplicator_Server_Spawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogEngineReplicator_Server_Spawn_Statics::NewProp_SpawnEntry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_Server_Spawn_Statics::PropPointers) < 2048);
// ********** End Function Server_Spawn Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogEngineReplicator_Server_Spawn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogEngineReplicator, nullptr, "Server_Spawn", 	Z_Construct_UFunction_ACogEngineReplicator_Server_Spawn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_Server_Spawn_Statics::PropPointers), 
sizeof(CogEngineReplicator_eventServer_Spawn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogEngineReplicator_Server_Spawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogEngineReplicator_Server_Spawn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogEngineReplicator_eventServer_Spawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACogEngineReplicator_Server_Spawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogEngineReplicator_Server_Spawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogEngineReplicator::execServer_Spawn)
{
	P_GET_STRUCT(FCogEngineSpawnEntry,Z_Param_SpawnEntry);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_Spawn_Implementation(Z_Param_SpawnEntry);
	P_NATIVE_END;
}
// ********** End Class ACogEngineReplicator Function Server_Spawn *********************************

// ********** Begin Class ACogEngineReplicator *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACogEngineReplicator;
UClass* ACogEngineReplicator::GetPrivateStaticClass()
{
	using TClass = ACogEngineReplicator;
	if (!Z_Registration_Info_UClass_ACogEngineReplicator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineReplicator"),
			Z_Registration_Info_UClass_ACogEngineReplicator.InnerSingleton,
			StaticRegisterNativesACogEngineReplicator,
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
	return Z_Registration_Info_UClass_ACogEngineReplicator.InnerSingleton;
}
UClass* Z_Construct_UClass_ACogEngineReplicator_NoRegister()
{
	return ACogEngineReplicator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACogEngineReplicator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineReplicator.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/CogEngineReplicator.h" },
		{ "NotBlueprintType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeDilation_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ACogEngineReplicator constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeDilation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACogEngineReplicator constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnRep_TimeDilation"), .Pointer = &ACogEngineReplicator::execOnRep_TimeDilation },
		{ .NameUTF8 = UTF8TEXT("Server_ApplyCheat"), .Pointer = &ACogEngineReplicator::execServer_ApplyCheat },
		{ .NameUTF8 = UTF8TEXT("Server_DeleteActor"), .Pointer = &ACogEngineReplicator::execServer_DeleteActor },
		{ .NameUTF8 = UTF8TEXT("Server_Possess"), .Pointer = &ACogEngineReplicator::execServer_Possess },
		{ .NameUTF8 = UTF8TEXT("Server_ResetPossession"), .Pointer = &ACogEngineReplicator::execServer_ResetPossession },
		{ .NameUTF8 = UTF8TEXT("Server_SetTimeDilation"), .Pointer = &ACogEngineReplicator::execServer_SetTimeDilation },
		{ .NameUTF8 = UTF8TEXT("Server_Spawn"), .Pointer = &ACogEngineReplicator::execServer_Spawn },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACogEngineReplicator_OnRep_TimeDilation, "OnRep_TimeDilation" }, // 280212349
		{ &Z_Construct_UFunction_ACogEngineReplicator_Server_ApplyCheat, "Server_ApplyCheat" }, // 2098835207
		{ &Z_Construct_UFunction_ACogEngineReplicator_Server_DeleteActor, "Server_DeleteActor" }, // 2752183176
		{ &Z_Construct_UFunction_ACogEngineReplicator_Server_Possess, "Server_Possess" }, // 716884243
		{ &Z_Construct_UFunction_ACogEngineReplicator_Server_ResetPossession, "Server_ResetPossession" }, // 1357508815
		{ &Z_Construct_UFunction_ACogEngineReplicator_Server_SetTimeDilation, "Server_SetTimeDilation" }, // 1327602712
		{ &Z_Construct_UFunction_ACogEngineReplicator_Server_Spawn, "Server_Spawn" }, // 2348017776
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACogEngineReplicator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACogEngineReplicator_Statics

// ********** Begin Class ACogEngineReplicator Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACogEngineReplicator_Statics::NewProp_TimeDilation = { "TimeDilation", "OnRep_TimeDilation", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogEngineReplicator, TimeDilation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeDilation_MetaData), NewProp_TimeDilation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACogEngineReplicator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogEngineReplicator_Statics::NewProp_TimeDilation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACogEngineReplicator_Statics::PropPointers) < 2048);
// ********** End Class ACogEngineReplicator Property Definitions **********************************
UObject* (*const Z_Construct_UClass_ACogEngineReplicator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACogEngineReplicator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACogEngineReplicator_Statics::ClassParams = {
	&ACogEngineReplicator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACogEngineReplicator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACogEngineReplicator_Statics::PropPointers),
	0,
	0x049002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACogEngineReplicator_Statics::Class_MetaDataParams), Z_Construct_UClass_ACogEngineReplicator_Statics::Class_MetaDataParams)
};
void ACogEngineReplicator::StaticRegisterNativesACogEngineReplicator()
{
	UClass* Class = ACogEngineReplicator::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ACogEngineReplicator_Statics::Funcs));
}
UClass* Z_Construct_UClass_ACogEngineReplicator()
{
	if (!Z_Registration_Info_UClass_ACogEngineReplicator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACogEngineReplicator.OuterSingleton, Z_Construct_UClass_ACogEngineReplicator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACogEngineReplicator.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ACogEngineReplicator::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_TimeDilation(TEXT("TimeDilation"));
	const bool bIsValid = true
		&& Name_TimeDilation == ClassReps[(int32)ENetFields_Private::TimeDilation].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACogEngineReplicator"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACogEngineReplicator);
ACogEngineReplicator::~ACogEngineReplicator() {}
// ********** End Class ACogEngineReplicator *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineReplicator_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACogEngineReplicator, ACogEngineReplicator::StaticClass, TEXT("ACogEngineReplicator"), &Z_Registration_Info_UClass_ACogEngineReplicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACogEngineReplicator), 324648794U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineReplicator_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineReplicator_h__Script_CogEngine_3222254417{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineReplicator_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineReplicator_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
