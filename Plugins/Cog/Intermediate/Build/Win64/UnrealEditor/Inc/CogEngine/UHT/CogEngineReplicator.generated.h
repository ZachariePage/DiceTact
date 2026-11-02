// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CogEngineReplicator.h"

#ifdef COGENGINE_CogEngineReplicator_generated_h
#error "CogEngineReplicator.generated.h already included, missing '#pragma once' in CogEngineReplicator.h"
#endif
#define COGENGINE_CogEngineReplicator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
struct FCogEngineCheat;
struct FCogEngineSpawnEntry;

// ********** Begin Class ACogEngineReplicator *****************************************************
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineReplicator_h_20_RPC_WRAPPERS \
	virtual void Server_SetTimeDilation_Implementation(float Value); \
	virtual void Server_ApplyCheat_Implementation(const AActor* CheatInstigator, TArray<AActor*> const& TargetActors, FCogEngineCheat const& Cheat) const; \
	virtual void Server_DeleteActor_Implementation(AActor* Actor); \
	virtual void Server_ResetPossession_Implementation(); \
	virtual void Server_Possess_Implementation(APawn* Pawn); \
	virtual void Server_Spawn_Implementation(FCogEngineSpawnEntry const& SpawnEntry); \
	DECLARE_FUNCTION(execOnRep_TimeDilation); \
	DECLARE_FUNCTION(execServer_SetTimeDilation); \
	DECLARE_FUNCTION(execServer_ApplyCheat); \
	DECLARE_FUNCTION(execServer_DeleteActor); \
	DECLARE_FUNCTION(execServer_ResetPossession); \
	DECLARE_FUNCTION(execServer_Possess); \
	DECLARE_FUNCTION(execServer_Spawn);


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineReplicator_h_20_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ACogEngineReplicator_Statics;
COGENGINE_API UClass* Z_Construct_UClass_ACogEngineReplicator_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineReplicator_h_20_INCLASS \
private: \
	static void StaticRegisterNativesACogEngineReplicator(); \
	friend struct ::Z_Construct_UClass_ACogEngineReplicator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COGENGINE_API UClass* ::Z_Construct_UClass_ACogEngineReplicator_NoRegister(); \
public: \
	DECLARE_CLASS2(ACogEngineReplicator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CogEngine"), Z_Construct_UClass_ACogEngineReplicator_NoRegister) \
	DECLARE_SERIALIZER(ACogEngineReplicator) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TimeDilation=NETFIELD_REP_START, \
		NETFIELD_REP_END=TimeDilation	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineReplicator_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACogEngineReplicator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACogEngineReplicator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACogEngineReplicator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACogEngineReplicator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACogEngineReplicator(ACogEngineReplicator&&) = delete; \
	ACogEngineReplicator(const ACogEngineReplicator&) = delete; \
	NO_API virtual ~ACogEngineReplicator();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineReplicator_h_17_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineReplicator_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineReplicator_h_20_RPC_WRAPPERS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineReplicator_h_20_CALLBACK_WRAPPERS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineReplicator_h_20_INCLASS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineReplicator_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACogEngineReplicator;

// ********** End Class ACogEngineReplicator *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineReplicator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
