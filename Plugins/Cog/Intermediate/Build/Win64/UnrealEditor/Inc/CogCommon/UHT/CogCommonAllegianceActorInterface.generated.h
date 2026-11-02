// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CogCommonAllegianceActorInterface.h"

#ifdef COGCOMMON_CogCommonAllegianceActorInterface_generated_h
#error "CogCommonAllegianceActorInterface.generated.h already included, missing '#pragma once' in CogCommonAllegianceActorInterface.h"
#endif
#define COGCOMMON_CogCommonAllegianceActorInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UCogCommonAllegianceActorInterface ***********************************
struct Z_Construct_UClass_UCogCommonAllegianceActorInterface_Statics;
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonAllegianceActorInterface_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COGCOMMON_API UCogCommonAllegianceActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCogCommonAllegianceActorInterface(UCogCommonAllegianceActorInterface&&) = delete; \
	UCogCommonAllegianceActorInterface(const UCogCommonAllegianceActorInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COGCOMMON_API, UCogCommonAllegianceActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCogCommonAllegianceActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCogCommonAllegianceActorInterface) \
	virtual ~UCogCommonAllegianceActorInterface() = default;


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCogCommonAllegianceActorInterface(); \
	friend struct ::Z_Construct_UClass_UCogCommonAllegianceActorInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COGCOMMON_API UClass* ::Z_Construct_UClass_UCogCommonAllegianceActorInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UCogCommonAllegianceActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CogCommon"), Z_Construct_UClass_UCogCommonAllegianceActorInterface_NoRegister) \
	DECLARE_SERIALIZER(UCogCommonAllegianceActorInterface)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICogCommonAllegianceActorInterface() {} \
public: \
	typedef UCogCommonAllegianceActorInterface UClassType; \
	typedef ICogCommonAllegianceActorInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h_19_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCogCommonAllegianceActorInterface;

// ********** End Interface UCogCommonAllegianceActorInterface *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h

// ********** Begin Enum ECogCommonAllegiance ******************************************************
#define FOREACH_ENUM_ECOGCOMMONALLEGIANCE(op) \
	op(ECogCommonAllegiance::Friendly) \
	op(ECogCommonAllegiance::Neutral) \
	op(ECogCommonAllegiance::Enemy) 

enum class ECogCommonAllegiance : uint8;
template<> struct TIsUEnumClass<ECogCommonAllegiance> { enum { Value = true }; };
template<> COGCOMMON_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogCommonAllegiance>();
// ********** End Enum ECogCommonAllegiance ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
