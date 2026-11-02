// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CogEngineDataAsset.h"

#ifdef COGENGINE_CogEngineDataAsset_generated_h
#error "CogEngineDataAsset.generated.h already included, missing '#pragma once' in CogEngineDataAsset.h"
#endif
#define COGENGINE_CogEngineDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
enum class ECogEngineCheat_ActiveState : uint8;

// ********** Begin Class UCogEngineCheat_Execution ************************************************
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual ECogEngineCheat_ActiveState IsActiveOnTargets_Implementation(const UObject* WorldContextObject, TArray<AActor*> const& Targets) const; \
	virtual void Execute_Implementation(const UObject* WorldContextObject, const AActor* Instigator, TArray<AActor*> const& Targets) const; \
	DECLARE_FUNCTION(execIsActiveOnTargets); \
	DECLARE_FUNCTION(execExecute);


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_26_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UCogEngineCheat_Execution_Statics;
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineCheat_Execution_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCogEngineCheat_Execution(); \
	friend struct ::Z_Construct_UClass_UCogEngineCheat_Execution_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COGENGINE_API UClass* ::Z_Construct_UClass_UCogEngineCheat_Execution_NoRegister(); \
public: \
	DECLARE_CLASS2(UCogEngineCheat_Execution, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CogEngine"), Z_Construct_UClass_UCogEngineCheat_Execution_NoRegister) \
	DECLARE_SERIALIZER(UCogEngineCheat_Execution)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCogEngineCheat_Execution(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCogEngineCheat_Execution(UCogEngineCheat_Execution&&) = delete; \
	UCogEngineCheat_Execution(const UCogEngineCheat_Execution&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCogEngineCheat_Execution); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCogEngineCheat_Execution); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCogEngineCheat_Execution) \
	NO_API virtual ~UCogEngineCheat_Execution();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_22_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_26_CALLBACK_WRAPPERS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_26_INCLASS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCogEngineCheat_Execution;

// ********** End Class UCogEngineCheat_Execution **************************************************

// ********** Begin ScriptStruct FCogEngineCheat ***************************************************
struct Z_Construct_UScriptStruct_FCogEngineCheat_Statics;
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCogEngineCheat_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCogEngineCheat;
// ********** End ScriptStruct FCogEngineCheat *****************************************************

// ********** Begin ScriptStruct FCogEngineCheatCategory *******************************************
struct Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics;
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCogEngineCheatCategory_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCogEngineCheatCategory;
// ********** End ScriptStruct FCogEngineCheatCategory *********************************************

// ********** Begin ScriptStruct FCogEngineSpawnEntry **********************************************
struct Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics;
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCogEngineSpawnEntry_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCogEngineSpawnEntry;
// ********** End ScriptStruct FCogEngineSpawnEntry ************************************************

// ********** Begin ScriptStruct FCogEngineSpawnGroup **********************************************
struct Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics;
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_90_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCogEngineSpawnGroup_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCogEngineSpawnGroup;
// ********** End ScriptStruct FCogEngineSpawnGroup ************************************************

// ********** Begin Class UCogEngineDataAsset ******************************************************
struct Z_Construct_UClass_UCogEngineDataAsset_Statics;
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineDataAsset_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCogEngineDataAsset(); \
	friend struct ::Z_Construct_UClass_UCogEngineDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COGENGINE_API UClass* ::Z_Construct_UClass_UCogEngineDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UCogEngineDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CogEngine"), Z_Construct_UClass_UCogEngineDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UCogEngineDataAsset)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_106_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCogEngineDataAsset(UCogEngineDataAsset&&) = delete; \
	UCogEngineDataAsset(const UCogEngineDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCogEngineDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCogEngineDataAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCogEngineDataAsset) \
	NO_API virtual ~UCogEngineDataAsset();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_103_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_106_INCLASS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCogEngineDataAsset;

// ********** End Class UCogEngineDataAsset ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineDataAsset_h

// ********** Begin Enum ECogEngineCheat_ActiveState ***********************************************
#define FOREACH_ENUM_ECOGENGINECHEAT_ACTIVESTATE(op) \
	op(ECogEngineCheat_ActiveState::Inactive) \
	op(ECogEngineCheat_ActiveState::Partial) \
	op(ECogEngineCheat_ActiveState::Active) 

enum class ECogEngineCheat_ActiveState : uint8;
template<> struct TIsUEnumClass<ECogEngineCheat_ActiveState> { enum { Value = true }; };
template<> COGENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogEngineCheat_ActiveState>();
// ********** End Enum ECogEngineCheat_ActiveState *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
