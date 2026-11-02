// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CogDebugGizmo.h"

#ifdef COGDEBUG_CogDebugGizmo_generated_h
#error "CogDebugGizmo.generated.h already included, missing '#pragma once' in CogDebugGizmo.h"
#endif
#define COGDEBUG_CogDebugGizmo_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugGizmo_h

// ********** Begin Enum ECogDebug_GizmoFlags ******************************************************
#define FOREACH_ENUM_ECOGDEBUG_GIZMOFLAGS(op) \
	op(ECogDebug_GizmoFlags::None) \
	op(ECogDebug_GizmoFlags::NoTranslationAxis) \
	op(ECogDebug_GizmoFlags::NoTranslationPlane) \
	op(ECogDebug_GizmoFlags::NoRotation) \
	op(ECogDebug_GizmoFlags::NoScaleAxis) \
	op(ECogDebug_GizmoFlags::NoScaleUniform) \
	op(ECogDebug_GizmoFlags::NoTranslation) \
	op(ECogDebug_GizmoFlags::NoScale) 

enum class ECogDebug_GizmoFlags : uint8;
template<> struct TIsUEnumClass<ECogDebug_GizmoFlags> { enum { Value = true }; };
template<> COGDEBUG_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogDebug_GizmoFlags>();
// ********** End Enum ECogDebug_GizmoFlags ********************************************************

// ********** Begin Enum ECogDebug_GizmoType *******************************************************
#define FOREACH_ENUM_ECOGDEBUG_GIZMOTYPE(op) \
	op(ECogDebug_GizmoType::MoveAxis) \
	op(ECogDebug_GizmoType::MovePlane) \
	op(ECogDebug_GizmoType::Rotate) \
	op(ECogDebug_GizmoType::ScaleAxis) \
	op(ECogDebug_GizmoType::ScaleUniform) 

enum class ECogDebug_GizmoType : uint8;
template<> struct TIsUEnumClass<ECogDebug_GizmoType> { enum { Value = true }; };
template<> COGDEBUG_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogDebug_GizmoType>();
// ********** End Enum ECogDebug_GizmoType *********************************************************

// ********** Begin Enum ECogDebug_GizmoAxis *******************************************************
#define FOREACH_ENUM_ECOGDEBUG_GIZMOAXIS(op) \
	op(ECogDebug_GizmoAxis::X) \
	op(ECogDebug_GizmoAxis::Y) \
	op(ECogDebug_GizmoAxis::Z) 

enum class ECogDebug_GizmoAxis : uint8;
template<> struct TIsUEnumClass<ECogDebug_GizmoAxis> { enum { Value = true }; };
template<> COGDEBUG_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogDebug_GizmoAxis>();
// ********** End Enum ECogDebug_GizmoAxis *********************************************************

// ********** Begin Enum ECogDebug_GizmoElementType ************************************************
#define FOREACH_ENUM_ECOGDEBUG_GIZMOELEMENTTYPE(op) \
	op(ECogDebug_GizmoElementType::MoveX) \
	op(ECogDebug_GizmoElementType::MoveY) \
	op(ECogDebug_GizmoElementType::MoveZ) \
	op(ECogDebug_GizmoElementType::MoveXY) \
	op(ECogDebug_GizmoElementType::MoveXZ) \
	op(ECogDebug_GizmoElementType::MoveYZ) \
	op(ECogDebug_GizmoElementType::RotateX) \
	op(ECogDebug_GizmoElementType::RotateY) \
	op(ECogDebug_GizmoElementType::RotateZ) \
	op(ECogDebug_GizmoElementType::ScaleXYZ) \
	op(ECogDebug_GizmoElementType::ScaleX) \
	op(ECogDebug_GizmoElementType::ScaleY) \
	op(ECogDebug_GizmoElementType::ScaleZ) 

enum class ECogDebug_GizmoElementType : uint8;
template<> struct TIsUEnumClass<ECogDebug_GizmoElementType> { enum { Value = true }; };
template<> COGDEBUG_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogDebug_GizmoElementType>();
// ********** End Enum ECogDebug_GizmoElementType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
