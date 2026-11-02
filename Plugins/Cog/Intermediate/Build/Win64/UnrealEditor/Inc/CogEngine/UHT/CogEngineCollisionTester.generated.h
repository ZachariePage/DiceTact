// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CogEngineCollisionTester.h"

#ifdef COGENGINE_CogEngineCollisionTester_generated_h
#error "CogEngineCollisionTester.generated.h already included, missing '#pragma once' in CogEngineCollisionTester.h"
#endif
#define COGENGINE_CogEngineCollisionTester_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACogEngineCollisionTester ************************************************
struct Z_Construct_UClass_ACogEngineCollisionTester_Statics;
COGENGINE_API UClass* Z_Construct_UClass_ACogEngineCollisionTester_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineCollisionTester_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACogEngineCollisionTester(); \
	friend struct ::Z_Construct_UClass_ACogEngineCollisionTester_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COGENGINE_API UClass* ::Z_Construct_UClass_ACogEngineCollisionTester_NoRegister(); \
public: \
	DECLARE_CLASS2(ACogEngineCollisionTester, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CogEngine"), Z_Construct_UClass_ACogEngineCollisionTester_NoRegister) \
	DECLARE_SERIALIZER(ACogEngineCollisionTester)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineCollisionTester_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACogEngineCollisionTester(ACogEngineCollisionTester&&) = delete; \
	ACogEngineCollisionTester(const ACogEngineCollisionTester&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACogEngineCollisionTester); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACogEngineCollisionTester); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACogEngineCollisionTester) \
	NO_API virtual ~ACogEngineCollisionTester();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineCollisionTester_h_55_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineCollisionTester_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineCollisionTester_h_58_INCLASS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineCollisionTester_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACogEngineCollisionTester;

// ********** End Class ACogEngineCollisionTester **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineCollisionTester_h

// ********** Begin Enum ECogEngine_CollisionQueryType *********************************************
#define FOREACH_ENUM_ECOGENGINE_COLLISIONQUERYTYPE(op) \
	op(ECogEngine_CollisionQueryType::Overlap) \
	op(ECogEngine_CollisionQueryType::LineTrace) \
	op(ECogEngine_CollisionQueryType::Sweep) 

enum class ECogEngine_CollisionQueryType : uint8;
template<> struct TIsUEnumClass<ECogEngine_CollisionQueryType> { enum { Value = true }; };
template<> COGENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogEngine_CollisionQueryType>();
// ********** End Enum ECogEngine_CollisionQueryType ***********************************************

// ********** Begin Enum ECogEngine_CollisionQueryTraceMode ****************************************
#define FOREACH_ENUM_ECOGENGINE_COLLISIONQUERYTRACEMODE(op) \
	op(ECogEngine_CollisionQueryTraceMode::Single) \
	op(ECogEngine_CollisionQueryTraceMode::Multi) \
	op(ECogEngine_CollisionQueryTraceMode::Test) 

enum class ECogEngine_CollisionQueryTraceMode : uint8;
template<> struct TIsUEnumClass<ECogEngine_CollisionQueryTraceMode> { enum { Value = true }; };
template<> COGENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogEngine_CollisionQueryTraceMode>();
// ********** End Enum ECogEngine_CollisionQueryTraceMode ******************************************

// ********** Begin Enum ECogEngine_CollisionQueryOverlapMode **************************************
#define FOREACH_ENUM_ECOGENGINE_COLLISIONQUERYOVERLAPMODE(op) \
	op(ECogEngine_CollisionQueryOverlapMode::AnyTest) \
	op(ECogEngine_CollisionQueryOverlapMode::BlockingTest) \
	op(ECogEngine_CollisionQueryOverlapMode::Multi) 

enum class ECogEngine_CollisionQueryOverlapMode : uint8;
template<> struct TIsUEnumClass<ECogEngine_CollisionQueryOverlapMode> { enum { Value = true }; };
template<> COGENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogEngine_CollisionQueryOverlapMode>();
// ********** End Enum ECogEngine_CollisionQueryOverlapMode ****************************************

// ********** Begin Enum ECogEngine_CollisionQueryBy ***********************************************
#define FOREACH_ENUM_ECOGENGINE_COLLISIONQUERYBY(op) \
	op(ECogEngine_CollisionQueryBy::Channel) \
	op(ECogEngine_CollisionQueryBy::ObjectType) \
	op(ECogEngine_CollisionQueryBy::Profile) 

enum class ECogEngine_CollisionQueryBy : uint8;
template<> struct TIsUEnumClass<ECogEngine_CollisionQueryBy> { enum { Value = true }; };
template<> COGENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogEngine_CollisionQueryBy>();
// ********** End Enum ECogEngine_CollisionQueryBy *************************************************

// ********** Begin Enum ECogEngine_CollisionQueryShape ********************************************
#define FOREACH_ENUM_ECOGENGINE_COLLISIONQUERYSHAPE(op) \
	op(ECogEngine_CollisionQueryShape::Sphere) \
	op(ECogEngine_CollisionQueryShape::Box) \
	op(ECogEngine_CollisionQueryShape::Capsule) 

enum class ECogEngine_CollisionQueryShape : uint8;
template<> struct TIsUEnumClass<ECogEngine_CollisionQueryShape> { enum { Value = true }; };
template<> COGENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogEngine_CollisionQueryShape>();
// ********** End Enum ECogEngine_CollisionQueryShape **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
