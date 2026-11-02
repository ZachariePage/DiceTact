// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SplineWidgetFunctionLibrary.h"

#ifdef WIDGETSPLINESYSTEM_SplineWidgetFunctionLibrary_generated_h
#error "SplineWidgetFunctionLibrary.generated.h already included, missing '#pragma once' in SplineWidgetFunctionLibrary.h"
#endif
#define WIDGETSPLINESYSTEM_SplineWidgetFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineWidget;
enum class ESlateSplineCoordinateSpace : uint8;

// ********** Begin Class USplineWidgetFunctionLibrary *********************************************
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidgetFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRotationAngleAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetTangentAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetDirectionAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetLocationAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetInputKeyAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetTangentAtSplinePoint); \
	DECLARE_FUNCTION(execGetDirectionAtSplinePoint); \
	DECLARE_FUNCTION(execGetLocationAtSplinePoint); \
	DECLARE_FUNCTION(execGetRotationAngleAtSplineInputKey); \
	DECLARE_FUNCTION(execGetDirectionAtSplineInputKey); \
	DECLARE_FUNCTION(execGetTangentAtSplineInputKey); \
	DECLARE_FUNCTION(execGetLocationAtSplineInputKey); \
	DECLARE_FUNCTION(execGetDistanceAlongSplineAtSplineInputKey); \
	DECLARE_FUNCTION(execGetSplineLength);


struct Z_Construct_UClass_USplineWidgetFunctionLibrary_Statics;
WIDGETSPLINESYSTEM_API UClass* Z_Construct_UClass_USplineWidgetFunctionLibrary_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidgetFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplineWidgetFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_USplineWidgetFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WIDGETSPLINESYSTEM_API UClass* ::Z_Construct_UClass_USplineWidgetFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USplineWidgetFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WidgetSplineSystem"), Z_Construct_UClass_USplineWidgetFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(USplineWidgetFunctionLibrary)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidgetFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineWidgetFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USplineWidgetFunctionLibrary(USplineWidgetFunctionLibrary&&) = delete; \
	USplineWidgetFunctionLibrary(const USplineWidgetFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineWidgetFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineWidgetFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineWidgetFunctionLibrary) \
	NO_API virtual ~USplineWidgetFunctionLibrary();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidgetFunctionLibrary_h_20_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidgetFunctionLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidgetFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidgetFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidgetFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USplineWidgetFunctionLibrary;

// ********** End Class USplineWidgetFunctionLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_UMGSplines_Source_WidgetSplineSystem_Public_SplineWidgetFunctionLibrary_h

// ********** Begin Enum ESlateSplineCoordinateSpace ***********************************************
#define FOREACH_ENUM_ESLATESPLINECOORDINATESPACE(op) \
	op(ESlateSplineCoordinateSpace::Local) \
	op(ESlateSplineCoordinateSpace::Viewport) \
	op(ESlateSplineCoordinateSpace::Screen) 

enum class ESlateSplineCoordinateSpace : uint8;
template<> struct TIsUEnumClass<ESlateSplineCoordinateSpace> { enum { Value = true }; };
template<> WIDGETSPLINESYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<ESlateSplineCoordinateSpace>();
// ********** End Enum ESlateSplineCoordinateSpace *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
