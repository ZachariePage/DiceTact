// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogCommonAllegianceActorInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogCommonAllegianceActorInterface() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonAllegianceActorInterface();
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonAllegianceActorInterface_NoRegister();
COGCOMMON_API UEnum* Z_Construct_UEnum_CogCommon_ECogCommonAllegiance();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_CogCommon();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECogCommonAllegiance ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECogCommonAllegiance;
static UEnum* ECogCommonAllegiance_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECogCommonAllegiance.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECogCommonAllegiance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CogCommon_ECogCommonAllegiance, (UObject*)Z_Construct_UPackage__Script_CogCommon(), TEXT("ECogCommonAllegiance"));
	}
	return Z_Registration_Info_UEnum_ECogCommonAllegiance.OuterSingleton;
}
template<> COGCOMMON_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogCommonAllegiance>()
{
	return ECogCommonAllegiance_StaticEnum();
}
struct Z_Construct_UEnum_CogCommon_ECogCommonAllegiance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n// Match ETeamAttitude in AIModule\n//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "Enemy.Name", "ECogCommonAllegiance::Enemy" },
		{ "Friendly.Name", "ECogCommonAllegiance::Friendly" },
		{ "ModuleRelativePath", "Public/CogCommonAllegianceActorInterface.h" },
		{ "Neutral.Name", "ECogCommonAllegiance::Neutral" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Match ETeamAttitude in AIModule" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECogCommonAllegiance::Friendly", (int64)ECogCommonAllegiance::Friendly },
		{ "ECogCommonAllegiance::Neutral", (int64)ECogCommonAllegiance::Neutral },
		{ "ECogCommonAllegiance::Enemy", (int64)ECogCommonAllegiance::Enemy },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CogCommon_ECogCommonAllegiance_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CogCommon_ECogCommonAllegiance_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CogCommon,
	nullptr,
	"ECogCommonAllegiance",
	"ECogCommonAllegiance",
	Z_Construct_UEnum_CogCommon_ECogCommonAllegiance_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CogCommon_ECogCommonAllegiance_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CogCommon_ECogCommonAllegiance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CogCommon_ECogCommonAllegiance_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CogCommon_ECogCommonAllegiance()
{
	if (!Z_Registration_Info_UEnum_ECogCommonAllegiance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECogCommonAllegiance.InnerSingleton, Z_Construct_UEnum_CogCommon_ECogCommonAllegiance_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECogCommonAllegiance.InnerSingleton;
}
// ********** End Enum ECogCommonAllegiance ********************************************************

// ********** Begin Interface UCogCommonAllegianceActorInterface ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogCommonAllegianceActorInterface;
UClass* UCogCommonAllegianceActorInterface::GetPrivateStaticClass()
{
	using TClass = UCogCommonAllegianceActorInterface;
	if (!Z_Registration_Info_UClass_UCogCommonAllegianceActorInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogCommonAllegianceActorInterface"),
			Z_Registration_Info_UClass_UCogCommonAllegianceActorInterface.InnerSingleton,
			StaticRegisterNativesUCogCommonAllegianceActorInterface,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCogCommonAllegianceActorInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogCommonAllegianceActorInterface_NoRegister()
{
	return UCogCommonAllegianceActorInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogCommonAllegianceActorInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CogCommonAllegianceActorInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UCogCommonAllegianceActorInterface constinit property declarations ***
// ********** End Interface UCogCommonAllegianceActorInterface constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICogCommonAllegianceActorInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogCommonAllegianceActorInterface_Statics
UObject* (*const Z_Construct_UClass_UCogCommonAllegianceActorInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CogCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogCommonAllegianceActorInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogCommonAllegianceActorInterface_Statics::ClassParams = {
	&UCogCommonAllegianceActorInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogCommonAllegianceActorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogCommonAllegianceActorInterface_Statics::Class_MetaDataParams)
};
void UCogCommonAllegianceActorInterface::StaticRegisterNativesUCogCommonAllegianceActorInterface()
{
}
UClass* Z_Construct_UClass_UCogCommonAllegianceActorInterface()
{
	if (!Z_Registration_Info_UClass_UCogCommonAllegianceActorInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogCommonAllegianceActorInterface.OuterSingleton, Z_Construct_UClass_UCogCommonAllegianceActorInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogCommonAllegianceActorInterface.OuterSingleton;
}
UCogCommonAllegianceActorInterface::UCogCommonAllegianceActorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogCommonAllegianceActorInterface);
// ********** End Interface UCogCommonAllegianceActorInterface *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h__Script_CogCommon_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECogCommonAllegiance_StaticEnum, TEXT("ECogCommonAllegiance"), &Z_Registration_Info_UEnum_ECogCommonAllegiance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 435750823U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogCommonAllegianceActorInterface, UCogCommonAllegianceActorInterface::StaticClass, TEXT("UCogCommonAllegianceActorInterface"), &Z_Registration_Info_UClass_UCogCommonAllegianceActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogCommonAllegianceActorInterface), 384777873U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h__Script_CogCommon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h__Script_CogCommon_1670188575{
	TEXT("/Script/CogCommon"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h__Script_CogCommon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h__Script_CogCommon_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h__Script_CogCommon_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonAllegianceActorInterface_h__Script_CogCommon_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
