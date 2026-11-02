// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CogSubsystem.h"

#ifdef COG_CogSubsystem_generated_h
#error "CogSubsystem.generated.h already included, missing '#pragma once' in CogSubsystem.h"
#endif
#define COG_CogSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCogSubsystem ************************************************************
struct Z_Construct_UClass_UCogSubsystem_Statics;
COG_API UClass* Z_Construct_UClass_UCogSubsystem_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogSubsystem_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCogSubsystem(); \
	friend struct ::Z_Construct_UClass_UCogSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COG_API UClass* ::Z_Construct_UClass_UCogSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCogSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Cog"), Z_Construct_UClass_UCogSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UCogSubsystem)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogSubsystem_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCogSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCogSubsystem(UCogSubsystem&&) = delete; \
	UCogSubsystem(const UCogSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCogSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCogSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCogSubsystem) \
	NO_API virtual ~UCogSubsystem();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogSubsystem_h_27_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogSubsystem_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogSubsystem_h_30_INCLASS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogSubsystem_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCogSubsystem;

// ********** End Class UCogSubsystem **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
