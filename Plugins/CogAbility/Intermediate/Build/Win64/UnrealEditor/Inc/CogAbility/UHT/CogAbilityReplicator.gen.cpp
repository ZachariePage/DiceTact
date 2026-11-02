// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogAbilityReplicator.h"
#include "CogAbilityDataAsset.h"
#include "GameplayAbilitySpecHandle.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogAbilityReplicator() {}

// ********** Begin Cross Module References ********************************************************
COGABILITY_API UClass* Z_Construct_UClass_ACogAbilityReplicator();
COGABILITY_API UClass* Z_Construct_UClass_ACogAbilityReplicator_NoRegister();
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityDataAsset_NoRegister();
COGABILITY_API UScriptStruct* Z_Construct_UScriptStruct_FCogAbilityCheat();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
UPackage* Z_Construct_UPackage__Script_CogAbility();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACogAbilityReplicator Function Server_ApplyCheat *************************
struct CogAbilityReplicator_eventServer_ApplyCheat_Parms
{
	const AActor* CheatInstigator;
	TArray<AActor*> TargetActors;
	FCogAbilityCheat Cheat;
};
static FName NAME_ACogAbilityReplicator_Server_ApplyCheat = FName(TEXT("Server_ApplyCheat"));
void ACogAbilityReplicator::Server_ApplyCheat(const AActor* CheatInstigator, TArray<AActor*> const& TargetActors, FCogAbilityCheat const& Cheat) const
{
	CogAbilityReplicator_eventServer_ApplyCheat_Parms Parms;
	Parms.CheatInstigator=CheatInstigator;
	Parms.TargetActors=TargetActors;
	Parms.Cheat=Cheat;
	UFunction* Func = FindFunctionChecked(NAME_ACogAbilityReplicator_Server_ApplyCheat);
		const_cast<ACogAbilityReplicator*>(this)->ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogAbilityReplicator.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics::NewProp_CheatInstigator = { "CheatInstigator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogAbilityReplicator_eventServer_ApplyCheat_Parms, CheatInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheatInstigator_MetaData), NewProp_CheatInstigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics::NewProp_TargetActors_Inner = { "TargetActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics::NewProp_TargetActors = { "TargetActors", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogAbilityReplicator_eventServer_ApplyCheat_Parms, TargetActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActors_MetaData), NewProp_TargetActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics::NewProp_Cheat = { "Cheat", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogAbilityReplicator_eventServer_ApplyCheat_Parms, Cheat), Z_Construct_UScriptStruct_FCogAbilityCheat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cheat_MetaData), NewProp_Cheat_MetaData) }; // 420221813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics::NewProp_CheatInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics::NewProp_TargetActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics::NewProp_TargetActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics::NewProp_Cheat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics::PropPointers) < 2048);
// ********** End Function Server_ApplyCheat Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogAbilityReplicator, nullptr, "Server_ApplyCheat", 	Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics::PropPointers), 
sizeof(CogAbilityReplicator_eventServer_ApplyCheat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogAbilityReplicator_eventServer_ApplyCheat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogAbilityReplicator::execServer_ApplyCheat)
{
	P_GET_OBJECT(AActor,Z_Param_CheatInstigator);
	P_GET_TARRAY(AActor*,Z_Param_TargetActors);
	P_GET_STRUCT(FCogAbilityCheat,Z_Param_Cheat);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ApplyCheat_Implementation(Z_Param_CheatInstigator,Z_Param_TargetActors,Z_Param_Cheat);
	P_NATIVE_END;
}
// ********** End Class ACogAbilityReplicator Function Server_ApplyCheat ***************************

// ********** Begin Class ACogAbilityReplicator Function Server_GiveAbility ************************
struct CogAbilityReplicator_eventServer_GiveAbility_Parms
{
	AActor* TargetActor;
	TSubclassOf<UGameplayAbility> AbilityClass;
};
static FName NAME_ACogAbilityReplicator_Server_GiveAbility = FName(TEXT("Server_GiveAbility"));
void ACogAbilityReplicator::Server_GiveAbility(AActor* TargetActor, TSubclassOf<UGameplayAbility> AbilityClass) const
{
	CogAbilityReplicator_eventServer_GiveAbility_Parms Parms;
	Parms.TargetActor=TargetActor;
	Parms.AbilityClass=AbilityClass;
	UFunction* Func = FindFunctionChecked(NAME_ACogAbilityReplicator_Server_GiveAbility);
		const_cast<ACogAbilityReplicator*>(this)->ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACogAbilityReplicator_Server_GiveAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogAbilityReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_GiveAbility constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_GiveAbility constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_GiveAbility Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACogAbilityReplicator_Server_GiveAbility_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogAbilityReplicator_eventServer_GiveAbility_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACogAbilityReplicator_Server_GiveAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogAbilityReplicator_eventServer_GiveAbility_Parms, AbilityClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACogAbilityReplicator_Server_GiveAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogAbilityReplicator_Server_GiveAbility_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogAbilityReplicator_Server_GiveAbility_Statics::NewProp_AbilityClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogAbilityReplicator_Server_GiveAbility_Statics::PropPointers) < 2048);
// ********** End Function Server_GiveAbility Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogAbilityReplicator_Server_GiveAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogAbilityReplicator, nullptr, "Server_GiveAbility", 	Z_Construct_UFunction_ACogAbilityReplicator_Server_GiveAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACogAbilityReplicator_Server_GiveAbility_Statics::PropPointers), 
sizeof(CogAbilityReplicator_eventServer_GiveAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogAbilityReplicator_Server_GiveAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogAbilityReplicator_Server_GiveAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogAbilityReplicator_eventServer_GiveAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACogAbilityReplicator_Server_GiveAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogAbilityReplicator_Server_GiveAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogAbilityReplicator::execServer_GiveAbility)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_OBJECT(UClass,Z_Param_AbilityClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_GiveAbility_Implementation(Z_Param_TargetActor,Z_Param_AbilityClass);
	P_NATIVE_END;
}
// ********** End Class ACogAbilityReplicator Function Server_GiveAbility **************************

// ********** Begin Class ACogAbilityReplicator Function Server_RemoveAbility **********************
struct CogAbilityReplicator_eventServer_RemoveAbility_Parms
{
	AActor* TargetActor;
	FGameplayAbilitySpecHandle Handle;
};
static FName NAME_ACogAbilityReplicator_Server_RemoveAbility = FName(TEXT("Server_RemoveAbility"));
void ACogAbilityReplicator::Server_RemoveAbility(AActor* TargetActor, FGameplayAbilitySpecHandle const& Handle) const
{
	CogAbilityReplicator_eventServer_RemoveAbility_Parms Parms;
	Parms.TargetActor=TargetActor;
	Parms.Handle=Handle;
	UFunction* Func = FindFunctionChecked(NAME_ACogAbilityReplicator_Server_RemoveAbility);
		const_cast<ACogAbilityReplicator*>(this)->ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACogAbilityReplicator_Server_RemoveAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogAbilityReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_RemoveAbility constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_RemoveAbility constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_RemoveAbility Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACogAbilityReplicator_Server_RemoveAbility_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogAbilityReplicator_eventServer_RemoveAbility_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACogAbilityReplicator_Server_RemoveAbility_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogAbilityReplicator_eventServer_RemoveAbility_Parms, Handle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 224356909
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACogAbilityReplicator_Server_RemoveAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogAbilityReplicator_Server_RemoveAbility_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogAbilityReplicator_Server_RemoveAbility_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogAbilityReplicator_Server_RemoveAbility_Statics::PropPointers) < 2048);
// ********** End Function Server_RemoveAbility Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogAbilityReplicator_Server_RemoveAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogAbilityReplicator, nullptr, "Server_RemoveAbility", 	Z_Construct_UFunction_ACogAbilityReplicator_Server_RemoveAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACogAbilityReplicator_Server_RemoveAbility_Statics::PropPointers), 
sizeof(CogAbilityReplicator_eventServer_RemoveAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogAbilityReplicator_Server_RemoveAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogAbilityReplicator_Server_RemoveAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogAbilityReplicator_eventServer_RemoveAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACogAbilityReplicator_Server_RemoveAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogAbilityReplicator_Server_RemoveAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogAbilityReplicator::execServer_RemoveAbility)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT(FGameplayAbilitySpecHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_RemoveAbility_Implementation(Z_Param_TargetActor,Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class ACogAbilityReplicator Function Server_RemoveAbility ************************

// ********** Begin Class ACogAbilityReplicator Function Server_ResetAllTweaks *********************
static FName NAME_ACogAbilityReplicator_Server_ResetAllTweaks = FName(TEXT("Server_ResetAllTweaks"));
void ACogAbilityReplicator::Server_ResetAllTweaks()
{
	UFunction* Func = FindFunctionChecked(NAME_ACogAbilityReplicator_Server_ResetAllTweaks);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACogAbilityReplicator_Server_ResetAllTweaks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogAbilityReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_ResetAllTweaks constinit property declarations *****************
// ********** End Function Server_ResetAllTweaks constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogAbilityReplicator_Server_ResetAllTweaks_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogAbilityReplicator, nullptr, "Server_ResetAllTweaks", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogAbilityReplicator_Server_ResetAllTweaks_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogAbilityReplicator_Server_ResetAllTweaks_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACogAbilityReplicator_Server_ResetAllTweaks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogAbilityReplicator_Server_ResetAllTweaks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogAbilityReplicator::execServer_ResetAllTweaks)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ResetAllTweaks_Implementation();
	P_NATIVE_END;
}
// ********** End Class ACogAbilityReplicator Function Server_ResetAllTweaks ***********************

// ********** Begin Class ACogAbilityReplicator Function Server_SetTweakProfile ********************
struct CogAbilityReplicator_eventServer_SetTweakProfile_Parms
{
	int32 ProfileIndex;
};
static FName NAME_ACogAbilityReplicator_Server_SetTweakProfile = FName(TEXT("Server_SetTweakProfile"));
void ACogAbilityReplicator::Server_SetTweakProfile(int32 ProfileIndex)
{
	CogAbilityReplicator_eventServer_SetTweakProfile_Parms Parms;
	Parms.ProfileIndex=ProfileIndex;
	UFunction* Func = FindFunctionChecked(NAME_ACogAbilityReplicator_Server_SetTweakProfile);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogAbilityReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_SetTweakProfile constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_SetTweakProfile constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_SetTweakProfile Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakProfile_Statics::NewProp_ProfileIndex = { "ProfileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogAbilityReplicator_eventServer_SetTweakProfile_Parms, ProfileIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakProfile_Statics::NewProp_ProfileIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakProfile_Statics::PropPointers) < 2048);
// ********** End Function Server_SetTweakProfile Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakProfile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogAbilityReplicator, nullptr, "Server_SetTweakProfile", 	Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakProfile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakProfile_Statics::PropPointers), 
sizeof(CogAbilityReplicator_eventServer_SetTweakProfile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakProfile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogAbilityReplicator_eventServer_SetTweakProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogAbilityReplicator::execServer_SetTweakProfile)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ProfileIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetTweakProfile_Implementation(Z_Param_ProfileIndex);
	P_NATIVE_END;
}
// ********** End Class ACogAbilityReplicator Function Server_SetTweakProfile **********************

// ********** Begin Class ACogAbilityReplicator Function Server_SetTweakValue **********************
struct CogAbilityReplicator_eventServer_SetTweakValue_Parms
{
	int32 TweakIndex;
	int32 TweakCategoryIndex;
	float Value;
};
static FName NAME_ACogAbilityReplicator_Server_SetTweakValue = FName(TEXT("Server_SetTweakValue"));
void ACogAbilityReplicator::Server_SetTweakValue(int32 TweakIndex, int32 TweakCategoryIndex, float Value)
{
	CogAbilityReplicator_eventServer_SetTweakValue_Parms Parms;
	Parms.TweakIndex=TweakIndex;
	Parms.TweakCategoryIndex=TweakCategoryIndex;
	Parms.Value=Value;
	UFunction* Func = FindFunctionChecked(NAME_ACogAbilityReplicator_Server_SetTweakValue);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogAbilityReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_SetTweakValue constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_TweakIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TweakCategoryIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_SetTweakValue constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_SetTweakValue Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue_Statics::NewProp_TweakIndex = { "TweakIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogAbilityReplicator_eventServer_SetTweakValue_Parms, TweakIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue_Statics::NewProp_TweakCategoryIndex = { "TweakCategoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogAbilityReplicator_eventServer_SetTweakValue_Parms, TweakCategoryIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogAbilityReplicator_eventServer_SetTweakValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue_Statics::NewProp_TweakIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue_Statics::NewProp_TweakCategoryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue_Statics::PropPointers) < 2048);
// ********** End Function Server_SetTweakValue Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogAbilityReplicator, nullptr, "Server_SetTweakValue", 	Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue_Statics::PropPointers), 
sizeof(CogAbilityReplicator_eventServer_SetTweakValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogAbilityReplicator_eventServer_SetTweakValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogAbilityReplicator::execServer_SetTweakValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TweakIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_TweakCategoryIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetTweakValue_Implementation(Z_Param_TweakIndex,Z_Param_TweakCategoryIndex,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ACogAbilityReplicator Function Server_SetTweakValue ************************

// ********** Begin Class ACogAbilityReplicator ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACogAbilityReplicator;
UClass* ACogAbilityReplicator::GetPrivateStaticClass()
{
	using TClass = ACogAbilityReplicator;
	if (!Z_Registration_Info_UClass_ACogAbilityReplicator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAbilityReplicator"),
			Z_Registration_Info_UClass_ACogAbilityReplicator.InnerSingleton,
			StaticRegisterNativesACogAbilityReplicator,
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
	return Z_Registration_Info_UClass_ACogAbilityReplicator.InnerSingleton;
}
UClass* Z_Construct_UClass_ACogAbilityReplicator_NoRegister()
{
	return ACogAbilityReplicator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACogAbilityReplicator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CogAbilityReplicator.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/CogAbilityReplicator.h" },
		{ "NotBlueprintType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TweakProfileIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TweakCurrentValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppliedCheatsOnLocalPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogAbilityReplicator.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class ACogAbilityReplicator constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_TweakProfileIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TweakCurrentValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TweakCurrentValues;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppliedCheatsOnLocalPawn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AppliedCheatsOnLocalPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACogAbilityReplicator constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Server_ApplyCheat"), .Pointer = &ACogAbilityReplicator::execServer_ApplyCheat },
		{ .NameUTF8 = UTF8TEXT("Server_GiveAbility"), .Pointer = &ACogAbilityReplicator::execServer_GiveAbility },
		{ .NameUTF8 = UTF8TEXT("Server_RemoveAbility"), .Pointer = &ACogAbilityReplicator::execServer_RemoveAbility },
		{ .NameUTF8 = UTF8TEXT("Server_ResetAllTweaks"), .Pointer = &ACogAbilityReplicator::execServer_ResetAllTweaks },
		{ .NameUTF8 = UTF8TEXT("Server_SetTweakProfile"), .Pointer = &ACogAbilityReplicator::execServer_SetTweakProfile },
		{ .NameUTF8 = UTF8TEXT("Server_SetTweakValue"), .Pointer = &ACogAbilityReplicator::execServer_SetTweakValue },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACogAbilityReplicator_Server_ApplyCheat, "Server_ApplyCheat" }, // 3419087058
		{ &Z_Construct_UFunction_ACogAbilityReplicator_Server_GiveAbility, "Server_GiveAbility" }, // 199719780
		{ &Z_Construct_UFunction_ACogAbilityReplicator_Server_RemoveAbility, "Server_RemoveAbility" }, // 3959356355
		{ &Z_Construct_UFunction_ACogAbilityReplicator_Server_ResetAllTweaks, "Server_ResetAllTweaks" }, // 1949726256
		{ &Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakProfile, "Server_SetTweakProfile" }, // 3363445239
		{ &Z_Construct_UFunction_ACogAbilityReplicator_Server_SetTweakValue, "Server_SetTweakValue" }, // 1952066836
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACogAbilityReplicator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACogAbilityReplicator_Statics

// ********** Begin Class ACogAbilityReplicator Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACogAbilityReplicator_Statics::NewProp_TweakProfileIndex = { "TweakProfileIndex", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogAbilityReplicator, TweakProfileIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TweakProfileIndex_MetaData), NewProp_TweakProfileIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACogAbilityReplicator_Statics::NewProp_TweakCurrentValues_Inner = { "TweakCurrentValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACogAbilityReplicator_Statics::NewProp_TweakCurrentValues = { "TweakCurrentValues", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogAbilityReplicator, TweakCurrentValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TweakCurrentValues_MetaData), NewProp_TweakCurrentValues_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACogAbilityReplicator_Statics::NewProp_AppliedCheatsOnLocalPawn_Inner = { "AppliedCheatsOnLocalPawn", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACogAbilityReplicator_Statics::NewProp_AppliedCheatsOnLocalPawn = { "AppliedCheatsOnLocalPawn", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogAbilityReplicator, AppliedCheatsOnLocalPawn), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppliedCheatsOnLocalPawn_MetaData), NewProp_AppliedCheatsOnLocalPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACogAbilityReplicator_Statics::NewProp_OwnerPlayerController = { "OwnerPlayerController", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogAbilityReplicator, OwnerPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPlayerController_MetaData), NewProp_OwnerPlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACogAbilityReplicator_Statics::NewProp_AbilityAsset = { "AbilityAsset", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogAbilityReplicator, AbilityAsset), Z_Construct_UClass_UCogAbilityDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityAsset_MetaData), NewProp_AbilityAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACogAbilityReplicator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogAbilityReplicator_Statics::NewProp_TweakProfileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogAbilityReplicator_Statics::NewProp_TweakCurrentValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogAbilityReplicator_Statics::NewProp_TweakCurrentValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogAbilityReplicator_Statics::NewProp_AppliedCheatsOnLocalPawn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogAbilityReplicator_Statics::NewProp_AppliedCheatsOnLocalPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogAbilityReplicator_Statics::NewProp_OwnerPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogAbilityReplicator_Statics::NewProp_AbilityAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACogAbilityReplicator_Statics::PropPointers) < 2048);
// ********** End Class ACogAbilityReplicator Property Definitions *********************************
UObject* (*const Z_Construct_UClass_ACogAbilityReplicator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACogAbilityReplicator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACogAbilityReplicator_Statics::ClassParams = {
	&ACogAbilityReplicator::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACogAbilityReplicator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACogAbilityReplicator_Statics::PropPointers),
	0,
	0x049002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACogAbilityReplicator_Statics::Class_MetaDataParams), Z_Construct_UClass_ACogAbilityReplicator_Statics::Class_MetaDataParams)
};
void ACogAbilityReplicator::StaticRegisterNativesACogAbilityReplicator()
{
	UClass* Class = ACogAbilityReplicator::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ACogAbilityReplicator_Statics::Funcs));
}
UClass* Z_Construct_UClass_ACogAbilityReplicator()
{
	if (!Z_Registration_Info_UClass_ACogAbilityReplicator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACogAbilityReplicator.OuterSingleton, Z_Construct_UClass_ACogAbilityReplicator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACogAbilityReplicator.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ACogAbilityReplicator::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_TweakProfileIndex(TEXT("TweakProfileIndex"));
	static FName Name_TweakCurrentValues(TEXT("TweakCurrentValues"));
	const bool bIsValid = true
		&& Name_TweakProfileIndex == ClassReps[(int32)ENetFields_Private::TweakProfileIndex].Property->GetFName()
		&& Name_TweakCurrentValues == ClassReps[(int32)ENetFields_Private::TweakCurrentValues].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACogAbilityReplicator"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACogAbilityReplicator);
ACogAbilityReplicator::~ACogAbilityReplicator() {}
// ********** End Class ACogAbilityReplicator ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityReplicator_h__Script_CogAbility_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACogAbilityReplicator, ACogAbilityReplicator::StaticClass, TEXT("ACogAbilityReplicator"), &Z_Registration_Info_UClass_ACogAbilityReplicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACogAbilityReplicator), 1943426454U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityReplicator_h__Script_CogAbility_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityReplicator_h__Script_CogAbility_1124334414{
	TEXT("/Script/CogAbility"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityReplicator_h__Script_CogAbility_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityReplicator_h__Script_CogAbility_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
