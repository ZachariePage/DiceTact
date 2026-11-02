// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogDebugGizmo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogDebugGizmo() {}

// ********** Begin Cross Module References ********************************************************
COGDEBUG_API UEnum* Z_Construct_UEnum_CogDebug_ECogDebug_GizmoAxis();
COGDEBUG_API UEnum* Z_Construct_UEnum_CogDebug_ECogDebug_GizmoElementType();
COGDEBUG_API UEnum* Z_Construct_UEnum_CogDebug_ECogDebug_GizmoFlags();
COGDEBUG_API UEnum* Z_Construct_UEnum_CogDebug_ECogDebug_GizmoType();
UPackage* Z_Construct_UPackage__Script_CogDebug();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECogDebug_GizmoFlags ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECogDebug_GizmoFlags;
static UEnum* ECogDebug_GizmoFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECogDebug_GizmoFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECogDebug_GizmoFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CogDebug_ECogDebug_GizmoFlags, (UObject*)Z_Construct_UPackage__Script_CogDebug(), TEXT("ECogDebug_GizmoFlags"));
	}
	return Z_Registration_Info_UEnum_ECogDebug_GizmoFlags.OuterSingleton;
}
template<> COGDEBUG_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogDebug_GizmoFlags>()
{
	return ECogDebug_GizmoFlags_StaticEnum();
}
struct Z_Construct_UEnum_CogDebug_ECogDebug_GizmoFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogDebugGizmo.h" },
		{ "None.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "None.Name", "ECogDebug_GizmoFlags::None" },
		{ "NoRotation.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "NoRotation.Name", "ECogDebug_GizmoFlags::NoRotation" },
		{ "NoScale.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "NoScale.Name", "ECogDebug_GizmoFlags::NoScale" },
		{ "NoScaleAxis.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "NoScaleAxis.Name", "ECogDebug_GizmoFlags::NoScaleAxis" },
		{ "NoScaleUniform.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "NoScaleUniform.Name", "ECogDebug_GizmoFlags::NoScaleUniform" },
		{ "NoTranslation.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "NoTranslation.Name", "ECogDebug_GizmoFlags::NoTranslation" },
		{ "NoTranslationAxis.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "NoTranslationAxis.Name", "ECogDebug_GizmoFlags::NoTranslationAxis" },
		{ "NoTranslationPlane.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "NoTranslationPlane.Name", "ECogDebug_GizmoFlags::NoTranslationPlane" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECogDebug_GizmoFlags::None", (int64)ECogDebug_GizmoFlags::None },
		{ "ECogDebug_GizmoFlags::NoTranslationAxis", (int64)ECogDebug_GizmoFlags::NoTranslationAxis },
		{ "ECogDebug_GizmoFlags::NoTranslationPlane", (int64)ECogDebug_GizmoFlags::NoTranslationPlane },
		{ "ECogDebug_GizmoFlags::NoRotation", (int64)ECogDebug_GizmoFlags::NoRotation },
		{ "ECogDebug_GizmoFlags::NoScaleAxis", (int64)ECogDebug_GizmoFlags::NoScaleAxis },
		{ "ECogDebug_GizmoFlags::NoScaleUniform", (int64)ECogDebug_GizmoFlags::NoScaleUniform },
		{ "ECogDebug_GizmoFlags::NoTranslation", (int64)ECogDebug_GizmoFlags::NoTranslation },
		{ "ECogDebug_GizmoFlags::NoScale", (int64)ECogDebug_GizmoFlags::NoScale },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CogDebug_ECogDebug_GizmoFlags_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CogDebug_ECogDebug_GizmoFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CogDebug,
	nullptr,
	"ECogDebug_GizmoFlags",
	"ECogDebug_GizmoFlags",
	Z_Construct_UEnum_CogDebug_ECogDebug_GizmoFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CogDebug_ECogDebug_GizmoFlags_Statics::Enumerators),
	EEnumFlags::Flags,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CogDebug_ECogDebug_GizmoFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CogDebug_ECogDebug_GizmoFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CogDebug_ECogDebug_GizmoFlags()
{
	if (!Z_Registration_Info_UEnum_ECogDebug_GizmoFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECogDebug_GizmoFlags.InnerSingleton, Z_Construct_UEnum_CogDebug_ECogDebug_GizmoFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECogDebug_GizmoFlags.InnerSingleton;
}
// ********** End Enum ECogDebug_GizmoFlags ********************************************************

// ********** Begin Enum ECogDebug_GizmoType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECogDebug_GizmoType;
static UEnum* ECogDebug_GizmoType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECogDebug_GizmoType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECogDebug_GizmoType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CogDebug_ECogDebug_GizmoType, (UObject*)Z_Construct_UPackage__Script_CogDebug(), TEXT("ECogDebug_GizmoType"));
	}
	return Z_Registration_Info_UEnum_ECogDebug_GizmoType.OuterSingleton;
}
template<> COGDEBUG_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogDebug_GizmoType>()
{
	return ECogDebug_GizmoType_StaticEnum();
}
struct Z_Construct_UEnum_CogDebug_ECogDebug_GizmoType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "MAX.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "MAX.Name", "ECogDebug_GizmoType::MAX" },
		{ "ModuleRelativePath", "Public/CogDebugGizmo.h" },
		{ "MoveAxis.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "MoveAxis.Name", "ECogDebug_GizmoType::MoveAxis" },
		{ "MovePlane.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "MovePlane.Name", "ECogDebug_GizmoType::MovePlane" },
		{ "Rotate.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Rotate.Name", "ECogDebug_GizmoType::Rotate" },
		{ "ScaleAxis.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "ScaleAxis.Name", "ECogDebug_GizmoType::ScaleAxis" },
		{ "ScaleUniform.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "ScaleUniform.Name", "ECogDebug_GizmoType::ScaleUniform" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECogDebug_GizmoType::MoveAxis", (int64)ECogDebug_GizmoType::MoveAxis },
		{ "ECogDebug_GizmoType::MovePlane", (int64)ECogDebug_GizmoType::MovePlane },
		{ "ECogDebug_GizmoType::Rotate", (int64)ECogDebug_GizmoType::Rotate },
		{ "ECogDebug_GizmoType::ScaleAxis", (int64)ECogDebug_GizmoType::ScaleAxis },
		{ "ECogDebug_GizmoType::ScaleUniform", (int64)ECogDebug_GizmoType::ScaleUniform },
		{ "ECogDebug_GizmoType::MAX", (int64)ECogDebug_GizmoType::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CogDebug_ECogDebug_GizmoType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CogDebug_ECogDebug_GizmoType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CogDebug,
	nullptr,
	"ECogDebug_GizmoType",
	"ECogDebug_GizmoType",
	Z_Construct_UEnum_CogDebug_ECogDebug_GizmoType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CogDebug_ECogDebug_GizmoType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CogDebug_ECogDebug_GizmoType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CogDebug_ECogDebug_GizmoType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CogDebug_ECogDebug_GizmoType()
{
	if (!Z_Registration_Info_UEnum_ECogDebug_GizmoType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECogDebug_GizmoType.InnerSingleton, Z_Construct_UEnum_CogDebug_ECogDebug_GizmoType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECogDebug_GizmoType.InnerSingleton;
}
// ********** End Enum ECogDebug_GizmoType *********************************************************

// ********** Begin Enum ECogDebug_GizmoAxis *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECogDebug_GizmoAxis;
static UEnum* ECogDebug_GizmoAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECogDebug_GizmoAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECogDebug_GizmoAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CogDebug_ECogDebug_GizmoAxis, (UObject*)Z_Construct_UPackage__Script_CogDebug(), TEXT("ECogDebug_GizmoAxis"));
	}
	return Z_Registration_Info_UEnum_ECogDebug_GizmoAxis.OuterSingleton;
}
template<> COGDEBUG_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogDebug_GizmoAxis>()
{
	return ECogDebug_GizmoAxis_StaticEnum();
}
struct Z_Construct_UEnum_CogDebug_ECogDebug_GizmoAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "MAX.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "MAX.Name", "ECogDebug_GizmoAxis::MAX" },
		{ "ModuleRelativePath", "Public/CogDebugGizmo.h" },
		{ "X.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "X.Name", "ECogDebug_GizmoAxis::X" },
		{ "Y.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Y.Name", "ECogDebug_GizmoAxis::Y" },
		{ "Z.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Z.Name", "ECogDebug_GizmoAxis::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECogDebug_GizmoAxis::X", (int64)ECogDebug_GizmoAxis::X },
		{ "ECogDebug_GizmoAxis::Y", (int64)ECogDebug_GizmoAxis::Y },
		{ "ECogDebug_GizmoAxis::Z", (int64)ECogDebug_GizmoAxis::Z },
		{ "ECogDebug_GizmoAxis::MAX", (int64)ECogDebug_GizmoAxis::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CogDebug_ECogDebug_GizmoAxis_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CogDebug_ECogDebug_GizmoAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CogDebug,
	nullptr,
	"ECogDebug_GizmoAxis",
	"ECogDebug_GizmoAxis",
	Z_Construct_UEnum_CogDebug_ECogDebug_GizmoAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CogDebug_ECogDebug_GizmoAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CogDebug_ECogDebug_GizmoAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CogDebug_ECogDebug_GizmoAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CogDebug_ECogDebug_GizmoAxis()
{
	if (!Z_Registration_Info_UEnum_ECogDebug_GizmoAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECogDebug_GizmoAxis.InnerSingleton, Z_Construct_UEnum_CogDebug_ECogDebug_GizmoAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECogDebug_GizmoAxis.InnerSingleton;
}
// ********** End Enum ECogDebug_GizmoAxis *********************************************************

// ********** Begin Enum ECogDebug_GizmoElementType ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECogDebug_GizmoElementType;
static UEnum* ECogDebug_GizmoElementType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECogDebug_GizmoElementType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECogDebug_GizmoElementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CogDebug_ECogDebug_GizmoElementType, (UObject*)Z_Construct_UPackage__Script_CogDebug(), TEXT("ECogDebug_GizmoElementType"));
	}
	return Z_Registration_Info_UEnum_ECogDebug_GizmoElementType.OuterSingleton;
}
template<> COGDEBUG_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogDebug_GizmoElementType>()
{
	return ECogDebug_GizmoElementType_StaticEnum();
}
struct Z_Construct_UEnum_CogDebug_ECogDebug_GizmoElementType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "MAX.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "MAX.Name", "ECogDebug_GizmoElementType::MAX" },
		{ "ModuleRelativePath", "Public/CogDebugGizmo.h" },
		{ "MoveX.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "MoveX.Name", "ECogDebug_GizmoElementType::MoveX" },
		{ "MoveXY.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "MoveXY.Name", "ECogDebug_GizmoElementType::MoveXY" },
		{ "MoveXZ.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "MoveXZ.Name", "ECogDebug_GizmoElementType::MoveXZ" },
		{ "MoveY.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "MoveY.Name", "ECogDebug_GizmoElementType::MoveY" },
		{ "MoveYZ.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "MoveYZ.Name", "ECogDebug_GizmoElementType::MoveYZ" },
		{ "MoveZ.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "MoveZ.Name", "ECogDebug_GizmoElementType::MoveZ" },
		{ "RotateX.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "RotateX.Name", "ECogDebug_GizmoElementType::RotateX" },
		{ "RotateY.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "RotateY.Name", "ECogDebug_GizmoElementType::RotateY" },
		{ "RotateZ.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "RotateZ.Name", "ECogDebug_GizmoElementType::RotateZ" },
		{ "ScaleX.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "ScaleX.Name", "ECogDebug_GizmoElementType::ScaleX" },
		{ "ScaleXYZ.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "ScaleXYZ.Name", "ECogDebug_GizmoElementType::ScaleXYZ" },
		{ "ScaleY.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "ScaleY.Name", "ECogDebug_GizmoElementType::ScaleY" },
		{ "ScaleZ.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "ScaleZ.Name", "ECogDebug_GizmoElementType::ScaleZ" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECogDebug_GizmoElementType::MoveX", (int64)ECogDebug_GizmoElementType::MoveX },
		{ "ECogDebug_GizmoElementType::MoveY", (int64)ECogDebug_GizmoElementType::MoveY },
		{ "ECogDebug_GizmoElementType::MoveZ", (int64)ECogDebug_GizmoElementType::MoveZ },
		{ "ECogDebug_GizmoElementType::MoveXY", (int64)ECogDebug_GizmoElementType::MoveXY },
		{ "ECogDebug_GizmoElementType::MoveXZ", (int64)ECogDebug_GizmoElementType::MoveXZ },
		{ "ECogDebug_GizmoElementType::MoveYZ", (int64)ECogDebug_GizmoElementType::MoveYZ },
		{ "ECogDebug_GizmoElementType::RotateX", (int64)ECogDebug_GizmoElementType::RotateX },
		{ "ECogDebug_GizmoElementType::RotateY", (int64)ECogDebug_GizmoElementType::RotateY },
		{ "ECogDebug_GizmoElementType::RotateZ", (int64)ECogDebug_GizmoElementType::RotateZ },
		{ "ECogDebug_GizmoElementType::ScaleXYZ", (int64)ECogDebug_GizmoElementType::ScaleXYZ },
		{ "ECogDebug_GizmoElementType::ScaleX", (int64)ECogDebug_GizmoElementType::ScaleX },
		{ "ECogDebug_GizmoElementType::ScaleY", (int64)ECogDebug_GizmoElementType::ScaleY },
		{ "ECogDebug_GizmoElementType::ScaleZ", (int64)ECogDebug_GizmoElementType::ScaleZ },
		{ "ECogDebug_GizmoElementType::MAX", (int64)ECogDebug_GizmoElementType::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CogDebug_ECogDebug_GizmoElementType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CogDebug_ECogDebug_GizmoElementType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CogDebug,
	nullptr,
	"ECogDebug_GizmoElementType",
	"ECogDebug_GizmoElementType",
	Z_Construct_UEnum_CogDebug_ECogDebug_GizmoElementType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CogDebug_ECogDebug_GizmoElementType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CogDebug_ECogDebug_GizmoElementType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CogDebug_ECogDebug_GizmoElementType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CogDebug_ECogDebug_GizmoElementType()
{
	if (!Z_Registration_Info_UEnum_ECogDebug_GizmoElementType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECogDebug_GizmoElementType.InnerSingleton, Z_Construct_UEnum_CogDebug_ECogDebug_GizmoElementType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECogDebug_GizmoElementType.InnerSingleton;
}
// ********** End Enum ECogDebug_GizmoElementType **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugGizmo_h__Script_CogDebug_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECogDebug_GizmoFlags_StaticEnum, TEXT("ECogDebug_GizmoFlags"), &Z_Registration_Info_UEnum_ECogDebug_GizmoFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2774543984U) },
		{ ECogDebug_GizmoType_StaticEnum, TEXT("ECogDebug_GizmoType"), &Z_Registration_Info_UEnum_ECogDebug_GizmoType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4113811113U) },
		{ ECogDebug_GizmoAxis_StaticEnum, TEXT("ECogDebug_GizmoAxis"), &Z_Registration_Info_UEnum_ECogDebug_GizmoAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 768379546U) },
		{ ECogDebug_GizmoElementType_StaticEnum, TEXT("ECogDebug_GizmoElementType"), &Z_Registration_Info_UEnum_ECogDebug_GizmoElementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 348932702U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugGizmo_h__Script_CogDebug_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugGizmo_h__Script_CogDebug_3640947711{
	TEXT("/Script/CogDebug"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugGizmo_h__Script_CogDebug_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugGizmo_h__Script_CogDebug_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
