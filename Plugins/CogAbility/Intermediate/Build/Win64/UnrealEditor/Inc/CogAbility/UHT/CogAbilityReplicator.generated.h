// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CogAbilityReplicator.h"

#ifdef COGABILITY_CogAbilityReplicator_generated_h
#error "CogAbilityReplicator.generated.h already included, missing '#pragma once' in CogAbilityReplicator.h"
#endif
#define COGABILITY_CogAbilityReplicator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UGameplayAbility;
struct FCogAbilityCheat;
struct FGameplayAbilitySpecHandle;

// ********** Begin Class ACogAbilityReplicator ****************************************************
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityReplicator_h_18_RPC_WRAPPERS \
	virtual void Server_SetTweakProfile_Implementation(int32 ProfileIndex); \
	virtual void Server_SetTweakValue_Implementation(int32 TweakIndex, int32 TweakCategoryIndex, float Value); \
	virtual void Server_ResetAllTweaks_Implementation(); \
	virtual void Server_RemoveAbility_Implementation(AActor* TargetActor, FGameplayAbilitySpecHandle const& Handle) const; \
	virtual void Server_GiveAbility_Implementation(AActor* TargetActor, TSubclassOf<UGameplayAbility> AbilityClass) const; \
	virtual void Server_ApplyCheat_Implementation(const AActor* CheatInstigator, TArray<AActor*> const& TargetActors, FCogAbilityCheat const& Cheat) const; \
	DECLARE_FUNCTION(execServer_SetTweakProfile); \
	DECLARE_FUNCTION(execServer_SetTweakValue); \
	DECLARE_FUNCTION(execServer_ResetAllTweaks); \
	DECLARE_FUNCTION(execServer_RemoveAbility); \
	DECLARE_FUNCTION(execServer_GiveAbility); \
	DECLARE_FUNCTION(execServer_ApplyCheat);


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityReplicator_h_18_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ACogAbilityReplicator_Statics;
COGABILITY_API UClass* Z_Construct_UClass_ACogAbilityReplicator_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityReplicator_h_18_INCLASS \
private: \
	static void StaticRegisterNativesACogAbilityReplicator(); \
	friend struct ::Z_Construct_UClass_ACogAbilityReplicator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COGABILITY_API UClass* ::Z_Construct_UClass_ACogAbilityReplicator_NoRegister(); \
public: \
	DECLARE_CLASS2(ACogAbilityReplicator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CogAbility"), Z_Construct_UClass_ACogAbilityReplicator_NoRegister) \
	DECLARE_SERIALIZER(ACogAbilityReplicator) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Cog");} \
 \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TweakProfileIndex=NETFIELD_REP_START, \
		TweakCurrentValues, \
		NETFIELD_REP_END=TweakCurrentValues	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityReplicator_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACogAbilityReplicator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACogAbilityReplicator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACogAbilityReplicator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACogAbilityReplicator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACogAbilityReplicator(ACogAbilityReplicator&&) = delete; \
	ACogAbilityReplicator(const ACogAbilityReplicator&) = delete; \
	NO_API virtual ~ACogAbilityReplicator();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityReplicator_h_15_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityReplicator_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityReplicator_h_18_RPC_WRAPPERS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityReplicator_h_18_CALLBACK_WRAPPERS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityReplicator_h_18_INCLASS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityReplicator_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACogAbilityReplicator;

// ********** End Class ACogAbilityReplicator ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityReplicator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
