// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_Stats.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_Stats() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineWindowConfig_Stats();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineWindowConfig_Stats_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogEngineWindowConfig_Stats *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineWindowConfig_Stats;
UClass* UCogEngineWindowConfig_Stats::GetPrivateStaticClass()
{
	using TClass = UCogEngineWindowConfig_Stats;
	if (!Z_Registration_Info_UClass_UCogEngineWindowConfig_Stats.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineWindowConfig_Stats"),
			Z_Registration_Info_UClass_UCogEngineWindowConfig_Stats.InnerSingleton,
			StaticRegisterNativesUCogEngineWindowConfig_Stats,
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
	return Z_Registration_Info_UClass_UCogEngineWindowConfig_Stats.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineWindowConfig_Stats_NoRegister()
{
	return UCogEngineWindowConfig_Stats::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_Stats.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_Stats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRates_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Stats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoodFrameRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Stats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediumFrameRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Stats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pings_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Stats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoodPing_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Stats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediumPing_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Stats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PacketLosses_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Stats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoodPacketLoss_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Stats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediumPacketLoss_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Stats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoodColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Stats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediumColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Stats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BadColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Stats.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineWindowConfig_Stats constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameRates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameRates;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GoodFrameRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MediumFrameRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Pings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GoodPing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MediumPing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PacketLosses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PacketLosses;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GoodPacketLoss;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MediumPacketLoss;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GoodColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MediumColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BadColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineWindowConfig_Stats constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineWindowConfig_Stats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics

// ********** Begin Class UCogEngineWindowConfig_Stats Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_FrameRates_Inner = { "FrameRates", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_FrameRates = { "FrameRates", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_Stats, FrameRates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRates_MetaData), NewProp_FrameRates_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_GoodFrameRate = { "GoodFrameRate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_Stats, GoodFrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoodFrameRate_MetaData), NewProp_GoodFrameRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_MediumFrameRate = { "MediumFrameRate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_Stats, MediumFrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediumFrameRate_MetaData), NewProp_MediumFrameRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_Pings_Inner = { "Pings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_Pings = { "Pings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_Stats, Pings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pings_MetaData), NewProp_Pings_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_GoodPing = { "GoodPing", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_Stats, GoodPing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoodPing_MetaData), NewProp_GoodPing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_MediumPing = { "MediumPing", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_Stats, MediumPing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediumPing_MetaData), NewProp_MediumPing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_PacketLosses_Inner = { "PacketLosses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_PacketLosses = { "PacketLosses", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_Stats, PacketLosses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PacketLosses_MetaData), NewProp_PacketLosses_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_GoodPacketLoss = { "GoodPacketLoss", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_Stats, GoodPacketLoss), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoodPacketLoss_MetaData), NewProp_GoodPacketLoss_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_MediumPacketLoss = { "MediumPacketLoss", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_Stats, MediumPacketLoss), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediumPacketLoss_MetaData), NewProp_MediumPacketLoss_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_GoodColor = { "GoodColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_Stats, GoodColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoodColor_MetaData), NewProp_GoodColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_MediumColor = { "MediumColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_Stats, MediumColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediumColor_MetaData), NewProp_MediumColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_BadColor = { "BadColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_Stats, BadColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BadColor_MetaData), NewProp_BadColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_FrameRates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_FrameRates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_GoodFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_MediumFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_Pings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_Pings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_GoodPing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_MediumPing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_PacketLosses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_PacketLosses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_GoodPacketLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_MediumPacketLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_GoodColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_MediumColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::NewProp_BadColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineWindowConfig_Stats Property Definitions **************************
UObject* (*const Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::ClassParams = {
	&UCogEngineWindowConfig_Stats::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::Class_MetaDataParams)
};
void UCogEngineWindowConfig_Stats::StaticRegisterNativesUCogEngineWindowConfig_Stats()
{
}
UClass* Z_Construct_UClass_UCogEngineWindowConfig_Stats()
{
	if (!Z_Registration_Info_UClass_UCogEngineWindowConfig_Stats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineWindowConfig_Stats.OuterSingleton, Z_Construct_UClass_UCogEngineWindowConfig_Stats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineWindowConfig_Stats.OuterSingleton;
}
UCogEngineWindowConfig_Stats::UCogEngineWindowConfig_Stats() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineWindowConfig_Stats);
UCogEngineWindowConfig_Stats::~UCogEngineWindowConfig_Stats() {}
// ********** End Class UCogEngineWindowConfig_Stats ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Stats_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineWindowConfig_Stats, UCogEngineWindowConfig_Stats::StaticClass, TEXT("UCogEngineWindowConfig_Stats"), &Z_Registration_Info_UClass_UCogEngineWindowConfig_Stats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineWindowConfig_Stats), 3345520428U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Stats_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Stats_h__Script_CogEngine_1973068318{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Stats_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Stats_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
