// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CogDebugPluginSubsystem.h"

#ifdef COGDEBUG_CogDebugPluginSubsystem_generated_h
#error "CogDebugPluginSubsystem.generated.h already included, missing '#pragma once' in CogDebugPluginSubsystem.h"
#endif
#define COGDEBUG_CogDebugPluginSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCogDebugPluginSubsystem *************************************************
struct Z_Construct_UClass_UCogDebugPluginSubsystem_Statics;
COGDEBUG_API UClass* Z_Construct_UClass_UCogDebugPluginSubsystem_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPluginSubsystem_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCogDebugPluginSubsystem(); \
	friend struct ::Z_Construct_UClass_UCogDebugPluginSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COGDEBUG_API UClass* ::Z_Construct_UClass_UCogDebugPluginSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCogDebugPluginSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CogDebug"), Z_Construct_UClass_UCogDebugPluginSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UCogDebugPluginSubsystem)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPluginSubsystem_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCogDebugPluginSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCogDebugPluginSubsystem(UCogDebugPluginSubsystem&&) = delete; \
	UCogDebugPluginSubsystem(const UCogDebugPluginSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCogDebugPluginSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCogDebugPluginSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCogDebugPluginSubsystem) \
	NO_API virtual ~UCogDebugPluginSubsystem();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPluginSubsystem_h_7_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPluginSubsystem_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPluginSubsystem_h_10_INCLASS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPluginSubsystem_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCogDebugPluginSubsystem;

// ********** End Class UCogDebugPluginSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugPluginSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
