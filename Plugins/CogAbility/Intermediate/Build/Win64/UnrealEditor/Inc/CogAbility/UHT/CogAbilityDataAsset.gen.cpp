// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogAbilityDataAsset.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogAbilityDataAsset() {}

// ********** Begin Cross Module References ********************************************************
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityDataAsset();
COGABILITY_API UClass* Z_Construct_UClass_UCogAbilityDataAsset_NoRegister();
COGABILITY_API UScriptStruct* Z_Construct_UScriptStruct_FCogAbilityCheat();
COGABILITY_API UScriptStruct* Z_Construct_UScriptStruct_FCogAbilityPool();
COGABILITY_API UScriptStruct* Z_Construct_UScriptStruct_FCogAbilityTweak();
COGABILITY_API UScriptStruct* Z_Construct_UScriptStruct_FCogAbilityTweakCategory();
COGABILITY_API UScriptStruct* Z_Construct_UScriptStruct_FCogAbilityTweakProfile();
COGABILITY_API UScriptStruct* Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_CogAbility();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCogAbilityCheat **************************************************
struct Z_Construct_UScriptStruct_FCogAbilityCheat_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogAbilityCheat); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogAbilityCheat); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogAbilityCheat constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCogAbilityCheat constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogAbilityCheat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogAbilityCheat_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogAbilityCheat;
class UScriptStruct* FCogAbilityCheat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogAbilityCheat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogAbilityCheat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogAbilityCheat, (UObject*)Z_Construct_UPackage__Script_CogAbility(), TEXT("CogAbilityCheat"));
	}
	return Z_Registration_Info_UScriptStruct_FCogAbilityCheat.OuterSingleton;
	}

// ********** Begin ScriptStruct FCogAbilityCheat Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCogAbilityCheat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityCheat, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCogAbilityCheat_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityCheat, Effect), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effect_MetaData), NewProp_Effect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCogAbilityCheat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityCheat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityCheat_Statics::NewProp_Effect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityCheat_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCogAbilityCheat Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogAbilityCheat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
	nullptr,
	&NewStructOps,
	"CogAbilityCheat",
	Z_Construct_UScriptStruct_FCogAbilityCheat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityCheat_Statics::PropPointers),
	sizeof(FCogAbilityCheat),
	alignof(FCogAbilityCheat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityCheat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogAbilityCheat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogAbilityCheat()
{
	if (!Z_Registration_Info_UScriptStruct_FCogAbilityCheat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogAbilityCheat.InnerSingleton, Z_Construct_UScriptStruct_FCogAbilityCheat_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogAbilityCheat.InnerSingleton);
}
// ********** End ScriptStruct FCogAbilityCheat ****************************************************

// ********** Begin ScriptStruct FCogAbilityPool ***************************************************
struct Z_Construct_UScriptStruct_FCogAbilityPool_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogAbilityPool); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogAbilityPool); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Regen_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackColor_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogAbilityPool constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Regen;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCogAbilityPool constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogAbilityPool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogAbilityPool_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogAbilityPool;
class UScriptStruct* FCogAbilityPool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogAbilityPool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogAbilityPool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogAbilityPool, (UObject*)Z_Construct_UPackage__Script_CogAbility(), TEXT("CogAbilityPool"));
	}
	return Z_Registration_Info_UScriptStruct_FCogAbilityPool.OuterSingleton;
	}

// ********** Begin ScriptStruct FCogAbilityPool Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCogAbilityPool_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityPool, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogAbilityPool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityPool, Value), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 4237305057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogAbilityPool_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityPool, Min), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) }; // 4237305057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogAbilityPool_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityPool, Max), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) }; // 4237305057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogAbilityPool_Statics::NewProp_Regen = { "Regen", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityPool, Regen), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Regen_MetaData), NewProp_Regen_MetaData) }; // 4237305057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogAbilityPool_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityPool, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogAbilityPool_Statics::NewProp_BackColor = { "BackColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityPool, BackColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackColor_MetaData), NewProp_BackColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCogAbilityPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityPool_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityPool_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityPool_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityPool_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityPool_Statics::NewProp_Regen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityPool_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityPool_Statics::NewProp_BackColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityPool_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCogAbilityPool Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogAbilityPool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
	nullptr,
	&NewStructOps,
	"CogAbilityPool",
	Z_Construct_UScriptStruct_FCogAbilityPool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityPool_Statics::PropPointers),
	sizeof(FCogAbilityPool),
	alignof(FCogAbilityPool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityPool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogAbilityPool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogAbilityPool()
{
	if (!Z_Registration_Info_UScriptStruct_FCogAbilityPool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogAbilityPool.InnerSingleton, Z_Construct_UScriptStruct_FCogAbilityPool_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogAbilityPool.InnerSingleton);
}
// ********** End ScriptStruct FCogAbilityPool *****************************************************

// ********** Begin ScriptStruct FCogAbilityTweak **************************************************
struct Z_Construct_UScriptStruct_FCogAbilityTweak_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogAbilityTweak); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogAbilityTweak); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddPostMultiplier_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogAbilityTweak constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AddPostMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCogAbilityTweak constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogAbilityTweak>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogAbilityTweak_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogAbilityTweak;
class UScriptStruct* FCogAbilityTweak::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogAbilityTweak.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogAbilityTweak.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogAbilityTweak, (UObject*)Z_Construct_UPackage__Script_CogAbility(), TEXT("CogAbilityTweak"));
	}
	return Z_Registration_Info_UScriptStruct_FCogAbilityTweak.OuterSingleton;
	}

// ********** Begin ScriptStruct FCogAbilityTweak Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityTweak, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityTweak, Effect), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effect_MetaData), NewProp_Effect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityTweak, Multiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Multiplier_MetaData), NewProp_Multiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::NewProp_AddPostMultiplier = { "AddPostMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityTweak, AddPostMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddPostMultiplier_MetaData), NewProp_AddPostMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::NewProp_Effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::NewProp_AddPostMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCogAbilityTweak Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
	nullptr,
	&NewStructOps,
	"CogAbilityTweak",
	Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::PropPointers),
	sizeof(FCogAbilityTweak),
	alignof(FCogAbilityTweak),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogAbilityTweak()
{
	if (!Z_Registration_Info_UScriptStruct_FCogAbilityTweak.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogAbilityTweak.InnerSingleton, Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogAbilityTweak.InnerSingleton);
}
// ********** End ScriptStruct FCogAbilityTweak ****************************************************

// ********** Begin ScriptStruct FCogAbilityTweakCategory ******************************************
struct Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogAbilityTweakCategory); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogAbilityTweakCategory); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredTags_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogAbilityTweakCategory constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCogAbilityTweakCategory constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogAbilityTweakCategory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogAbilityTweakCategory;
class UScriptStruct* FCogAbilityTweakCategory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogAbilityTweakCategory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogAbilityTweakCategory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogAbilityTweakCategory, (UObject*)Z_Construct_UPackage__Script_CogAbility(), TEXT("CogAbilityTweakCategory"));
	}
	return Z_Registration_Info_UScriptStruct_FCogAbilityTweakCategory.OuterSingleton;
	}

// ********** Begin ScriptStruct FCogAbilityTweakCategory Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityTweakCategory, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityTweakCategory, Id), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) }; // 517357616
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityTweakCategory, ActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityTweakCategory, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredTags_MetaData), NewProp_RequiredTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::NewProp_IgnoredTags = { "IgnoredTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityTweakCategory, IgnoredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoredTags_MetaData), NewProp_IgnoredTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityTweakCategory, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::NewProp_RequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::NewProp_IgnoredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCogAbilityTweakCategory Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
	nullptr,
	&NewStructOps,
	"CogAbilityTweakCategory",
	Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::PropPointers),
	sizeof(FCogAbilityTweakCategory),
	alignof(FCogAbilityTweakCategory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogAbilityTweakCategory()
{
	if (!Z_Registration_Info_UScriptStruct_FCogAbilityTweakCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogAbilityTweakCategory.InnerSingleton, Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogAbilityTweakCategory.InnerSingleton);
}
// ********** End ScriptStruct FCogAbilityTweakCategory ********************************************

// ********** Begin ScriptStruct FCogAbilityTweakProfileValue **************************************
struct Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogAbilityTweakProfileValue); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogAbilityTweakProfileValue); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryId_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogAbilityTweakProfileValue constinit property declarations ******
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCogAbilityTweakProfileValue constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogAbilityTweakProfileValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogAbilityTweakProfileValue;
class UScriptStruct* FCogAbilityTweakProfileValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogAbilityTweakProfileValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogAbilityTweakProfileValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue, (UObject*)Z_Construct_UPackage__Script_CogAbility(), TEXT("CogAbilityTweakProfileValue"));
	}
	return Z_Registration_Info_UScriptStruct_FCogAbilityTweakProfileValue.OuterSingleton;
	}

// ********** Begin ScriptStruct FCogAbilityTweakProfileValue Property Definitions *****************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityTweakProfileValue, Effect), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effect_MetaData), NewProp_Effect_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityTweakProfileValue, CategoryId), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryId_MetaData), NewProp_CategoryId_MetaData) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityTweakProfileValue, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics::NewProp_Effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics::NewProp_CategoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCogAbilityTweakProfileValue Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
	nullptr,
	&NewStructOps,
	"CogAbilityTweakProfileValue",
	Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics::PropPointers),
	sizeof(FCogAbilityTweakProfileValue),
	alignof(FCogAbilityTweakProfileValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue()
{
	if (!Z_Registration_Info_UScriptStruct_FCogAbilityTweakProfileValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogAbilityTweakProfileValue.InnerSingleton, Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogAbilityTweakProfileValue.InnerSingleton);
}
// ********** End ScriptStruct FCogAbilityTweakProfileValue ****************************************

// ********** Begin ScriptStruct FCogAbilityTweakProfile *******************************************
struct Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogAbilityTweakProfile); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogAbilityTweakProfile); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tweaks_MetaData[] = {
		{ "Category", "Cog" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogAbilityTweakProfile constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tweaks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tweaks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCogAbilityTweakProfile constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogAbilityTweakProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogAbilityTweakProfile;
class UScriptStruct* FCogAbilityTweakProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogAbilityTweakProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogAbilityTweakProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogAbilityTweakProfile, (UObject*)Z_Construct_UPackage__Script_CogAbility(), TEXT("CogAbilityTweakProfile"));
	}
	return Z_Registration_Info_UScriptStruct_FCogAbilityTweakProfile.OuterSingleton;
	}

// ********** Begin ScriptStruct FCogAbilityTweakProfile Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityTweakProfile, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics::NewProp_Tweaks_Inner = { "Tweaks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue, METADATA_PARAMS(0, nullptr) }; // 3727903200
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics::NewProp_Tweaks = { "Tweaks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogAbilityTweakProfile, Tweaks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tweaks_MetaData), NewProp_Tweaks_MetaData) }; // 3727903200
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics::NewProp_Tweaks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics::NewProp_Tweaks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCogAbilityTweakProfile Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
	nullptr,
	&NewStructOps,
	"CogAbilityTweakProfile",
	Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics::PropPointers),
	sizeof(FCogAbilityTweakProfile),
	alignof(FCogAbilityTweakProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogAbilityTweakProfile()
{
	if (!Z_Registration_Info_UScriptStruct_FCogAbilityTweakProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogAbilityTweakProfile.InnerSingleton, Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogAbilityTweakProfile.InnerSingleton);
}
// ********** End ScriptStruct FCogAbilityTweakProfile *********************************************

// ********** Begin Class UCogAbilityDataAsset *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogAbilityDataAsset;
UClass* UCogAbilityDataAsset::GetPrivateStaticClass()
{
	using TClass = UCogAbilityDataAsset;
	if (!Z_Registration_Info_UClass_UCogAbilityDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogAbilityDataAsset"),
			Z_Registration_Info_UClass_UCogAbilityDataAsset.InnerSingleton,
			StaticRegisterNativesUCogAbilityDataAsset,
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
	return Z_Registration_Info_UClass_UCogAbilityDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogAbilityDataAsset_NoRegister()
{
	return UCogAbilityDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogAbilityDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogAbilityDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------------------------------------------------------------------------------------\n// Abilities\n//----------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abilities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegativeEffectTag_MetaData[] = {
		{ "Category", "Cheats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------------------------------------------------------------------------------------\n// Cheats\n//----------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cheats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositiveEffectTag_MetaData[] = {
		{ "Category", "Cheats" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegativeAbilityTag_MetaData[] = {
		{ "Category", "Cheats" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositiveAbilityTag_MetaData[] = {
		{ "Category", "Cheats" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentEffects_MetaData[] = {
		{ "Category", "Cheats" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
		{ "TitleProperty", "Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstantEffects_MetaData[] = {
		{ "Category", "Cheats" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
		{ "TitleProperty", "Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pools_MetaData[] = {
		{ "Category", "Pools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------------------------------------------------------------------------------------\n// Pools\n//----------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
		{ "TitleProperty", "Name" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pools" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TweakMinValue_MetaData[] = {
		{ "Category", "Tweaks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------------------------------------------------------------------------------------\n// Tweaks\n//----------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tweaks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TweakMaxValue_MetaData[] = {
		{ "Category", "Tweaks" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetByCallerMagnitudeTag_MetaData[] = {
		{ "Category", "Tweaks" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorRootClass_MetaData[] = {
		{ "Category", "Tweaks" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tweaks_MetaData[] = {
		{ "Category", "Tweaks" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
		{ "TitleProperty", "Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TweaksCategories_MetaData[] = {
		{ "Category", "Tweaks" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
		{ "TitleProperty", "Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TweakProfiles_MetaData[] = {
		{ "Category", "Tweaks" },
		{ "ModuleRelativePath", "Public/CogAbilityDataAsset.h" },
		{ "TitleProperty", "Name" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogAbilityDataAsset constinit property declarations *********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NegativeEffectTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositiveEffectTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NegativeAbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositiveAbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistentEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PersistentEffects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstantEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstantEffects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pools_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pools;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TweakMinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TweakMaxValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SetByCallerMagnitudeTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorRootClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tweaks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tweaks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TweaksCategories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TweaksCategories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TweakProfiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TweakProfiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogAbilityDataAsset constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogAbilityDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogAbilityDataAsset_Statics

// ********** Begin Class UCogAbilityDataAsset Property Definitions ********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityDataAsset, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Abilities_MetaData), NewProp_Abilities_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_NegativeEffectTag = { "NegativeEffectTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityDataAsset, NegativeEffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegativeEffectTag_MetaData), NewProp_NegativeEffectTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_PositiveEffectTag = { "PositiveEffectTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityDataAsset, PositiveEffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositiveEffectTag_MetaData), NewProp_PositiveEffectTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_NegativeAbilityTag = { "NegativeAbilityTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityDataAsset, NegativeAbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegativeAbilityTag_MetaData), NewProp_NegativeAbilityTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_PositiveAbilityTag = { "PositiveAbilityTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityDataAsset, PositiveAbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositiveAbilityTag_MetaData), NewProp_PositiveAbilityTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_PersistentEffects_Inner = { "PersistentEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCogAbilityCheat, METADATA_PARAMS(0, nullptr) }; // 420221813
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_PersistentEffects = { "PersistentEffects", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityDataAsset, PersistentEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentEffects_MetaData), NewProp_PersistentEffects_MetaData) }; // 420221813
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_InstantEffects_Inner = { "InstantEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCogAbilityCheat, METADATA_PARAMS(0, nullptr) }; // 420221813
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_InstantEffects = { "InstantEffects", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityDataAsset, InstantEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstantEffects_MetaData), NewProp_InstantEffects_MetaData) }; // 420221813
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_Pools_Inner = { "Pools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCogAbilityPool, METADATA_PARAMS(0, nullptr) }; // 803647076
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_Pools = { "Pools", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityDataAsset, Pools), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pools_MetaData), NewProp_Pools_MetaData) }; // 803647076
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_TweakMinValue = { "TweakMinValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityDataAsset, TweakMinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TweakMinValue_MetaData), NewProp_TweakMinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_TweakMaxValue = { "TweakMaxValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityDataAsset, TweakMaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TweakMaxValue_MetaData), NewProp_TweakMaxValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_SetByCallerMagnitudeTag = { "SetByCallerMagnitudeTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityDataAsset, SetByCallerMagnitudeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetByCallerMagnitudeTag_MetaData), NewProp_SetByCallerMagnitudeTag_MetaData) }; // 517357616
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_ActorRootClass = { "ActorRootClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityDataAsset, ActorRootClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorRootClass_MetaData), NewProp_ActorRootClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_Tweaks_Inner = { "Tweaks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCogAbilityTweak, METADATA_PARAMS(0, nullptr) }; // 3668280905
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_Tweaks = { "Tweaks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityDataAsset, Tweaks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tweaks_MetaData), NewProp_Tweaks_MetaData) }; // 3668280905
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_TweaksCategories_Inner = { "TweaksCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCogAbilityTweakCategory, METADATA_PARAMS(0, nullptr) }; // 1208403331
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_TweaksCategories = { "TweaksCategories", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityDataAsset, TweaksCategories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TweaksCategories_MetaData), NewProp_TweaksCategories_MetaData) }; // 1208403331
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_TweakProfiles_Inner = { "TweakProfiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCogAbilityTweakProfile, METADATA_PARAMS(0, nullptr) }; // 1756028156
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_TweakProfiles = { "TweakProfiles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogAbilityDataAsset, TweakProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TweakProfiles_MetaData), NewProp_TweakProfiles_MetaData) }; // 1756028156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogAbilityDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_Abilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_Abilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_NegativeEffectTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_PositiveEffectTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_NegativeAbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_PositiveAbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_PersistentEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_PersistentEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_InstantEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_InstantEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_Pools_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_Pools,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_TweakMinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_TweakMaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_SetByCallerMagnitudeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_ActorRootClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_Tweaks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_Tweaks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_TweaksCategories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_TweaksCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_TweakProfiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogAbilityDataAsset_Statics::NewProp_TweakProfiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityDataAsset_Statics::PropPointers) < 2048);
// ********** End Class UCogAbilityDataAsset Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UCogAbilityDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CogAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogAbilityDataAsset_Statics::ClassParams = {
	&UCogAbilityDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogAbilityDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogAbilityDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogAbilityDataAsset_Statics::Class_MetaDataParams)
};
void UCogAbilityDataAsset::StaticRegisterNativesUCogAbilityDataAsset()
{
}
UClass* Z_Construct_UClass_UCogAbilityDataAsset()
{
	if (!Z_Registration_Info_UClass_UCogAbilityDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogAbilityDataAsset.OuterSingleton, Z_Construct_UClass_UCogAbilityDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogAbilityDataAsset.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogAbilityDataAsset);
UCogAbilityDataAsset::~UCogAbilityDataAsset() {}
// ********** End Class UCogAbilityDataAsset *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityDataAsset_h__Script_CogAbility_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCogAbilityCheat::StaticStruct, Z_Construct_UScriptStruct_FCogAbilityCheat_Statics::NewStructOps, TEXT("CogAbilityCheat"),&Z_Registration_Info_UScriptStruct_FCogAbilityCheat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogAbilityCheat), 420221813U) },
		{ FCogAbilityPool::StaticStruct, Z_Construct_UScriptStruct_FCogAbilityPool_Statics::NewStructOps, TEXT("CogAbilityPool"),&Z_Registration_Info_UScriptStruct_FCogAbilityPool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogAbilityPool), 803647076U) },
		{ FCogAbilityTweak::StaticStruct, Z_Construct_UScriptStruct_FCogAbilityTweak_Statics::NewStructOps, TEXT("CogAbilityTweak"),&Z_Registration_Info_UScriptStruct_FCogAbilityTweak, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogAbilityTweak), 3668280905U) },
		{ FCogAbilityTweakCategory::StaticStruct, Z_Construct_UScriptStruct_FCogAbilityTweakCategory_Statics::NewStructOps, TEXT("CogAbilityTweakCategory"),&Z_Registration_Info_UScriptStruct_FCogAbilityTweakCategory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogAbilityTweakCategory), 1208403331U) },
		{ FCogAbilityTweakProfileValue::StaticStruct, Z_Construct_UScriptStruct_FCogAbilityTweakProfileValue_Statics::NewStructOps, TEXT("CogAbilityTweakProfileValue"),&Z_Registration_Info_UScriptStruct_FCogAbilityTweakProfileValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogAbilityTweakProfileValue), 3727903200U) },
		{ FCogAbilityTweakProfile::StaticStruct, Z_Construct_UScriptStruct_FCogAbilityTweakProfile_Statics::NewStructOps, TEXT("CogAbilityTweakProfile"),&Z_Registration_Info_UScriptStruct_FCogAbilityTweakProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogAbilityTweakProfile), 1756028156U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogAbilityDataAsset, UCogAbilityDataAsset::StaticClass, TEXT("UCogAbilityDataAsset"), &Z_Registration_Info_UClass_UCogAbilityDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogAbilityDataAsset), 1845135439U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityDataAsset_h__Script_CogAbility_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityDataAsset_h__Script_CogAbility_1433565853{
	TEXT("/Script/CogAbility"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityDataAsset_h__Script_CogAbility_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityDataAsset_h__Script_CogAbility_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityDataAsset_h__Script_CogAbility_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogAbility_Source_CogAbility_Public_CogAbilityDataAsset_h__Script_CogAbility_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
