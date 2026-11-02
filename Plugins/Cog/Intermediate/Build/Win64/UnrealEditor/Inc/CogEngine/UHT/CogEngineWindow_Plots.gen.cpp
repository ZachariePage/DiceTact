// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_Plots.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_Plots() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_Plots();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_Plots_NoRegister();
COGENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo();
COGENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCogEngineConfig_Plots_GraphEntryInfo *****************************
struct Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogEngineConfig_Plots_GraphEntryInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogEngineConfig_Plots_GraphEntryInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogEngineConfig_Plots_GraphEntryInfo constinit property declarations 
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_YAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCogEngineConfig_Plots_GraphEntryInfo constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogEngineConfig_Plots_GraphEntryInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo;
class UScriptStruct* FCogEngineConfig_Plots_GraphEntryInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo, (UObject*)Z_Construct_UPackage__Script_CogEngine(), TEXT("CogEngineConfig_Plots_GraphEntryInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FCogEngineConfig_Plots_GraphEntryInfo Property Definitions ********
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogEngineConfig_Plots_GraphEntryInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogEngineConfig_Plots_GraphEntryInfo, YAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YAxis_MetaData), NewProp_YAxis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo_Statics::NewProp_YAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCogEngineConfig_Plots_GraphEntryInfo Property Definitions **********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
	nullptr,
	&NewStructOps,
	"CogEngineConfig_Plots_GraphEntryInfo",
	Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo_Statics::PropPointers),
	sizeof(FCogEngineConfig_Plots_GraphEntryInfo),
	alignof(FCogEngineConfig_Plots_GraphEntryInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo.InnerSingleton, Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo.InnerSingleton);
}
// ********** End ScriptStruct FCogEngineConfig_Plots_GraphEntryInfo *******************************

// ********** Begin ScriptStruct FCogEngineConfig_Plots_GraphInfo **********************************
struct Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogEngineConfig_Plots_GraphInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogEngineConfig_Plots_GraphInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogEngineConfig_Plots_GraphInfo constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCogEngineConfig_Plots_GraphInfo constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogEngineConfig_Plots_GraphInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogEngineConfig_Plots_GraphInfo;
class UScriptStruct* FCogEngineConfig_Plots_GraphInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogEngineConfig_Plots_GraphInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogEngineConfig_Plots_GraphInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo, (UObject*)Z_Construct_UPackage__Script_CogEngine(), TEXT("CogEngineConfig_Plots_GraphInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FCogEngineConfig_Plots_GraphInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FCogEngineConfig_Plots_GraphInfo Property Definitions *************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo, METADATA_PARAMS(0, nullptr) }; // 1136059410
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogEngineConfig_Plots_GraphInfo, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 1136059410
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo_Statics::NewProp_Entries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCogEngineConfig_Plots_GraphInfo Property Definitions ***************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
	nullptr,
	&NewStructOps,
	"CogEngineConfig_Plots_GraphInfo",
	Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo_Statics::PropPointers),
	sizeof(FCogEngineConfig_Plots_GraphInfo),
	alignof(FCogEngineConfig_Plots_GraphInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FCogEngineConfig_Plots_GraphInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogEngineConfig_Plots_GraphInfo.InnerSingleton, Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogEngineConfig_Plots_GraphInfo.InnerSingleton);
}
// ********** End ScriptStruct FCogEngineConfig_Plots_GraphInfo ************************************

// ********** Begin Class UCogEngineConfig_Plots ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineConfig_Plots;
UClass* UCogEngineConfig_Plots::GetPrivateStaticClass()
{
	using TClass = UCogEngineConfig_Plots;
	if (!Z_Registration_Info_UClass_UCogEngineConfig_Plots.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineConfig_Plots"),
			Z_Registration_Info_UClass_UCogEngineConfig_Plots.InnerSingleton,
			StaticRegisterNativesUCogEngineConfig_Plots,
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
	return Z_Registration_Info_UClass_UCogEngineConfig_Plots.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineConfig_Plots_NoRegister()
{
	return UCogEngineConfig_Plots::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineConfig_Plots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_Plots.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumGraphs_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumYAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordValuesWhenPaused_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumRecordedValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowTimeBarAtGameTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowTimeBarAtCursor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowValueAtCursor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragPauseSensitivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseBackgroundColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DockEntries_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoFitPadding_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graphs_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Plots.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineConfig_Plots constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumGraphs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumYAxis;
	static void NewProp_RecordValuesWhenPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RecordValuesWhenPaused;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumRecordedValues;
	static void NewProp_ShowTimeBarAtGameTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowTimeBarAtGameTime;
	static void NewProp_ShowTimeBarAtCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowTimeBarAtCursor;
	static void NewProp_ShowValueAtCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowValueAtCursor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DragPauseSensitivity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PauseBackgroundColor;
	static void NewProp_DockEntries_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DockEntries;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoFitPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Graphs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineConfig_Plots constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineConfig_Plots>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineConfig_Plots_Statics

// ********** Begin Class UCogEngineConfig_Plots Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_NumGraphs = { "NumGraphs", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Plots, NumGraphs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumGraphs_MetaData), NewProp_NumGraphs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_NumYAxis = { "NumYAxis", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Plots, NumYAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumYAxis_MetaData), NewProp_NumYAxis_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_RecordValuesWhenPaused_SetBit(void* Obj)
{
	((UCogEngineConfig_Plots*)Obj)->RecordValuesWhenPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_RecordValuesWhenPaused = { "RecordValuesWhenPaused", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Plots), &Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_RecordValuesWhenPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordValuesWhenPaused_MetaData), NewProp_RecordValuesWhenPaused_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_TimeRange = { "TimeRange", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Plots, TimeRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeRange_MetaData), NewProp_TimeRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_NumRecordedValues = { "NumRecordedValues", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Plots, NumRecordedValues), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumRecordedValues_MetaData), NewProp_NumRecordedValues_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_ShowTimeBarAtGameTime_SetBit(void* Obj)
{
	((UCogEngineConfig_Plots*)Obj)->ShowTimeBarAtGameTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_ShowTimeBarAtGameTime = { "ShowTimeBarAtGameTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Plots), &Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_ShowTimeBarAtGameTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowTimeBarAtGameTime_MetaData), NewProp_ShowTimeBarAtGameTime_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_ShowTimeBarAtCursor_SetBit(void* Obj)
{
	((UCogEngineConfig_Plots*)Obj)->ShowTimeBarAtCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_ShowTimeBarAtCursor = { "ShowTimeBarAtCursor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Plots), &Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_ShowTimeBarAtCursor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowTimeBarAtCursor_MetaData), NewProp_ShowTimeBarAtCursor_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_ShowValueAtCursor_SetBit(void* Obj)
{
	((UCogEngineConfig_Plots*)Obj)->ShowValueAtCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_ShowValueAtCursor = { "ShowValueAtCursor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Plots), &Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_ShowValueAtCursor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowValueAtCursor_MetaData), NewProp_ShowValueAtCursor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_DragPauseSensitivity = { "DragPauseSensitivity", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Plots, DragPauseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragPauseSensitivity_MetaData), NewProp_DragPauseSensitivity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_PauseBackgroundColor = { "PauseBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Plots, PauseBackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseBackgroundColor_MetaData), NewProp_PauseBackgroundColor_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_DockEntries_SetBit(void* Obj)
{
	((UCogEngineConfig_Plots*)Obj)->DockEntries = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_DockEntries = { "DockEntries", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Plots), &Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_DockEntries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DockEntries_MetaData), NewProp_DockEntries_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_AutoFitPadding = { "AutoFitPadding", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Plots, AutoFitPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoFitPadding_MetaData), NewProp_AutoFitPadding_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_Graphs = { "Graphs", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Graphs, UCogEngineConfig_Plots), STRUCT_OFFSET(UCogEngineConfig_Plots, Graphs), Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graphs_MetaData), NewProp_Graphs_MetaData) }; // 1262801783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineConfig_Plots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_NumGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_NumYAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_RecordValuesWhenPaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_TimeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_NumRecordedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_ShowTimeBarAtGameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_ShowTimeBarAtCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_ShowValueAtCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_DragPauseSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_PauseBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_DockEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_AutoFitPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Plots_Statics::NewProp_Graphs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Plots_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineConfig_Plots Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UCogEngineConfig_Plots_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Plots_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineConfig_Plots_Statics::ClassParams = {
	&UCogEngineConfig_Plots::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineConfig_Plots_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Plots_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Plots_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineConfig_Plots_Statics::Class_MetaDataParams)
};
void UCogEngineConfig_Plots::StaticRegisterNativesUCogEngineConfig_Plots()
{
}
UClass* Z_Construct_UClass_UCogEngineConfig_Plots()
{
	if (!Z_Registration_Info_UClass_UCogEngineConfig_Plots.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineConfig_Plots.OuterSingleton, Z_Construct_UClass_UCogEngineConfig_Plots_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineConfig_Plots.OuterSingleton;
}
UCogEngineConfig_Plots::UCogEngineConfig_Plots() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineConfig_Plots);
UCogEngineConfig_Plots::~UCogEngineConfig_Plots() {}
// ********** End Class UCogEngineConfig_Plots *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Plots_h__Script_CogEngine_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCogEngineConfig_Plots_GraphEntryInfo::StaticStruct, Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo_Statics::NewStructOps, TEXT("CogEngineConfig_Plots_GraphEntryInfo"),&Z_Registration_Info_UScriptStruct_FCogEngineConfig_Plots_GraphEntryInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogEngineConfig_Plots_GraphEntryInfo), 1136059410U) },
		{ FCogEngineConfig_Plots_GraphInfo::StaticStruct, Z_Construct_UScriptStruct_FCogEngineConfig_Plots_GraphInfo_Statics::NewStructOps, TEXT("CogEngineConfig_Plots_GraphInfo"),&Z_Registration_Info_UScriptStruct_FCogEngineConfig_Plots_GraphInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogEngineConfig_Plots_GraphInfo), 1262801783U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineConfig_Plots, UCogEngineConfig_Plots::StaticClass, TEXT("UCogEngineConfig_Plots"), &Z_Registration_Info_UClass_UCogEngineConfig_Plots, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineConfig_Plots), 406456786U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Plots_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Plots_h__Script_CogEngine_2984248217{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Plots_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Plots_h__Script_CogEngine_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Plots_h__Script_CogEngine_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Plots_h__Script_CogEngine_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
