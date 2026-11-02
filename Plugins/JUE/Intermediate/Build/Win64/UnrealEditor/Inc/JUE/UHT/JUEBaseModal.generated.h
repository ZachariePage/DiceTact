// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/JUEBaseModal.h"

#ifdef JUE_JUEBaseModal_generated_h
#error "JUEBaseModal.generated.h already included, missing '#pragma once' in JUEBaseModal.h"
#endif
#define JUE_JUEBaseModal_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EModalConfirmationResult : uint8;

// ********** Begin Delegate FModalConfirmation ****************************************************
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h_20_DELEGATE \
JUE_API void FModalConfirmation_DelegateWrapper(const FMulticastScriptDelegate& ModalConfirmation, EModalConfirmationResult Result);


// ********** End Delegate FModalConfirmation ******************************************************

// ********** Begin Class UJUEBaseModal ************************************************************
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConfirmModal);


struct Z_Construct_UClass_UJUEBaseModal_Statics;
JUE_API UClass* Z_Construct_UClass_UJUEBaseModal_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJUEBaseModal(); \
	friend struct ::Z_Construct_UClass_UJUEBaseModal_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend JUE_API UClass* ::Z_Construct_UClass_UJUEBaseModal_NoRegister(); \
public: \
	DECLARE_CLASS2(UJUEBaseModal, UCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JUE"), Z_Construct_UClass_UJUEBaseModal_NoRegister) \
	DECLARE_SERIALIZER(UJUEBaseModal)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJUEBaseModal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UJUEBaseModal(UJUEBaseModal&&) = delete; \
	UJUEBaseModal(const UJUEBaseModal&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJUEBaseModal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJUEBaseModal); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJUEBaseModal) \
	NO_API virtual ~UJUEBaseModal();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h_22_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h_25_INCLASS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UJUEBaseModal;

// ********** End Class UJUEBaseModal **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_UI_JUEBaseModal_h

// ********** Begin Enum EModalConfirmationResult **************************************************
#define FOREACH_ENUM_EMODALCONFIRMATIONRESULT(op) \
	op(EModalConfirmationResult::Affirmative) \
	op(EModalConfirmationResult::Negative) \
	op(EModalConfirmationResult::Cancelled) 

enum class EModalConfirmationResult : uint8;
template<> struct TIsUEnumClass<EModalConfirmationResult> { enum { Value = true }; };
template<> JUE_NON_ATTRIBUTED_API UEnum* StaticEnum<EModalConfirmationResult>();
// ********** End Enum EModalConfirmationResult ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
