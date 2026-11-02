// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CogDebugReplicator.h"

#ifdef COGDEBUG_CogDebugReplicator_generated_h
#error "CogDebugReplicator.generated.h already included, missing '#pragma once' in CogDebugReplicator.h"
#endif
#define COGDEBUG_CogDebugReplicator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class ECogLogVerbosity : uint8;
struct FCogServerCategoryData;

// ********** Begin ScriptStruct FCogServerCategoryData ********************************************
struct Z_Construct_UScriptStruct_FCogServerCategoryData_Statics;
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCogServerCategoryData_Statics; \
	COGDEBUG_API static class UScriptStruct* StaticStruct();


struct FCogServerCategoryData;
// ********** End ScriptStruct FCogServerCategoryData **********************************************

// ********** Begin ScriptStruct FCogReplicatorNetPack *********************************************
struct Z_Construct_UScriptStruct_FCogReplicatorNetPack_Statics;
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCogReplicatorNetPack_Statics; \
	COGDEBUG_API static class UScriptStruct* StaticStruct();


struct FCogReplicatorNetPack;
// ********** End ScriptStruct FCogReplicatorNetPack ***********************************************

// ********** Begin Class ACogDebugReplicator ******************************************************
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h_58_RPC_WRAPPERS \
	virtual void Server_SetIsFilteringBySelection_Implementation(bool Value); \
	virtual void Server_SetSelection_Implementation(AActor* Value, bool ForceSelection); \
	virtual void Client_SendCategoriesVerbosity_Implementation(TArray<FCogServerCategoryData> const& Categories); \
	virtual void NetMulticast_SendCategoriesVerbosity_Implementation(TArray<FCogServerCategoryData> const& Categories); \
	virtual void Server_SetCategoryVerbosity_Implementation(FName LogCategoryName, ECogLogVerbosity Verbosity); \
	virtual void Server_RequestAllCategoriesVerbosity_Implementation(); \
	DECLARE_FUNCTION(execServer_SetIsFilteringBySelection); \
	DECLARE_FUNCTION(execServer_SetSelection); \
	DECLARE_FUNCTION(execClient_SendCategoriesVerbosity); \
	DECLARE_FUNCTION(execNetMulticast_SendCategoriesVerbosity); \
	DECLARE_FUNCTION(execServer_SetCategoryVerbosity); \
	DECLARE_FUNCTION(execServer_RequestAllCategoriesVerbosity);


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h_58_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ACogDebugReplicator_Statics;
COGDEBUG_API UClass* Z_Construct_UClass_ACogDebugReplicator_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h_58_INCLASS \
private: \
	static void StaticRegisterNativesACogDebugReplicator(); \
	friend struct ::Z_Construct_UClass_ACogDebugReplicator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COGDEBUG_API UClass* ::Z_Construct_UClass_ACogDebugReplicator_NoRegister(); \
public: \
	DECLARE_CLASS2(ACogDebugReplicator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CogDebug"), Z_Construct_UClass_ACogDebugReplicator_NoRegister) \
	DECLARE_SERIALIZER(ACogDebugReplicator) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedData=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedData	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACogDebugReplicator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACogDebugReplicator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACogDebugReplicator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACogDebugReplicator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACogDebugReplicator(ACogDebugReplicator&&) = delete; \
	ACogDebugReplicator(const ACogDebugReplicator&) = delete; \
	NO_API virtual ~ACogDebugReplicator();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h_55_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h_58_RPC_WRAPPERS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h_58_CALLBACK_WRAPPERS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h_58_INCLASS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACogDebugReplicator;

// ********** End Class ACogDebugReplicator ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
