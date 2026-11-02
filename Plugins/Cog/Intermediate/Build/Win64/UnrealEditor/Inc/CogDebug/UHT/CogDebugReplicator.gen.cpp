// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogDebugReplicator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogDebugReplicator() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UEnum* Z_Construct_UEnum_CogCommon_ECogLogVerbosity();
COGDEBUG_API UClass* Z_Construct_UClass_ACogDebugReplicator();
COGDEBUG_API UClass* Z_Construct_UClass_ACogDebugReplicator_NoRegister();
COGDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FCogReplicatorNetPack();
COGDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FCogServerCategoryData();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_CogDebug();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCogServerCategoryData ********************************************
struct Z_Construct_UScriptStruct_FCogServerCategoryData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogServerCategoryData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogServerCategoryData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogDebugReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogCategoryName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Verbosity_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogServerCategoryData constinit property declarations ************
	static const UECodeGen_Private::FNamePropertyParams NewProp_LogCategoryName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCogServerCategoryData constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogServerCategoryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogServerCategoryData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogServerCategoryData;
class UScriptStruct* FCogServerCategoryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogServerCategoryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogServerCategoryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogServerCategoryData, (UObject*)Z_Construct_UPackage__Script_CogDebug(), TEXT("CogServerCategoryData"));
	}
	return Z_Registration_Info_UScriptStruct_FCogServerCategoryData.OuterSingleton;
	}

// ********** Begin ScriptStruct FCogServerCategoryData Property Definitions ***********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCogServerCategoryData_Statics::NewProp_LogCategoryName = { "LogCategoryName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogServerCategoryData, LogCategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogCategoryName_MetaData), NewProp_LogCategoryName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCogServerCategoryData_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCogServerCategoryData_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCogServerCategoryData, Verbosity), Z_Construct_UEnum_CogCommon_ECogLogVerbosity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Verbosity_MetaData), NewProp_Verbosity_MetaData) }; // 3128917293
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCogServerCategoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogServerCategoryData_Statics::NewProp_LogCategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogServerCategoryData_Statics::NewProp_Verbosity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCogServerCategoryData_Statics::NewProp_Verbosity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogServerCategoryData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCogServerCategoryData Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogServerCategoryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogDebug,
	nullptr,
	&NewStructOps,
	"CogServerCategoryData",
	Z_Construct_UScriptStruct_FCogServerCategoryData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogServerCategoryData_Statics::PropPointers),
	sizeof(FCogServerCategoryData),
	alignof(FCogServerCategoryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogServerCategoryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogServerCategoryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogServerCategoryData()
{
	if (!Z_Registration_Info_UScriptStruct_FCogServerCategoryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogServerCategoryData.InnerSingleton, Z_Construct_UScriptStruct_FCogServerCategoryData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogServerCategoryData.InnerSingleton);
}
// ********** End ScriptStruct FCogServerCategoryData **********************************************

// ********** Begin ScriptStruct FCogReplicatorNetPack *********************************************
struct Z_Construct_UScriptStruct_FCogReplicatorNetPack_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCogReplicatorNetPack); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCogReplicatorNetPack); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/CogDebugReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCogReplicatorNetPack constinit property declarations *************
// ********** End ScriptStruct FCogReplicatorNetPack constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCogReplicatorNetPack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCogReplicatorNetPack_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCogReplicatorNetPack;
class UScriptStruct* FCogReplicatorNetPack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCogReplicatorNetPack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCogReplicatorNetPack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCogReplicatorNetPack, (UObject*)Z_Construct_UPackage__Script_CogDebug(), TEXT("CogReplicatorNetPack"));
	}
	return Z_Registration_Info_UScriptStruct_FCogReplicatorNetPack.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCogReplicatorNetPack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CogDebug,
	nullptr,
	&NewStructOps,
	"CogReplicatorNetPack",
	nullptr,
	0,
	sizeof(FCogReplicatorNetPack),
	alignof(FCogReplicatorNetPack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCogReplicatorNetPack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCogReplicatorNetPack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCogReplicatorNetPack()
{
	if (!Z_Registration_Info_UScriptStruct_FCogReplicatorNetPack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCogReplicatorNetPack.InnerSingleton, Z_Construct_UScriptStruct_FCogReplicatorNetPack_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCogReplicatorNetPack.InnerSingleton);
}
// ********** End ScriptStruct FCogReplicatorNetPack ***********************************************

// ********** Begin Class ACogDebugReplicator Function Client_SendCategoriesVerbosity **************
struct CogDebugReplicator_eventClient_SendCategoriesVerbosity_Parms
{
	TArray<FCogServerCategoryData> Categories;
};
static FName NAME_ACogDebugReplicator_Client_SendCategoriesVerbosity = FName(TEXT("Client_SendCategoriesVerbosity"));
void ACogDebugReplicator::Client_SendCategoriesVerbosity(TArray<FCogServerCategoryData> const& Categories)
{
	CogDebugReplicator_eventClient_SendCategoriesVerbosity_Parms Parms;
	Parms.Categories=Categories;
	UFunction* Func = FindFunctionChecked(NAME_ACogDebugReplicator_Client_SendCategoriesVerbosity);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACogDebugReplicator_Client_SendCategoriesVerbosity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogDebugReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Client_SendCategoriesVerbosity constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Client_SendCategoriesVerbosity constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Client_SendCategoriesVerbosity Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACogDebugReplicator_Client_SendCategoriesVerbosity_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCogServerCategoryData, METADATA_PARAMS(0, nullptr) }; // 2026449496
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACogDebugReplicator_Client_SendCategoriesVerbosity_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugReplicator_eventClient_SendCategoriesVerbosity_Parms, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Categories_MetaData), NewProp_Categories_MetaData) }; // 2026449496
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACogDebugReplicator_Client_SendCategoriesVerbosity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogDebugReplicator_Client_SendCategoriesVerbosity_Statics::NewProp_Categories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogDebugReplicator_Client_SendCategoriesVerbosity_Statics::NewProp_Categories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogDebugReplicator_Client_SendCategoriesVerbosity_Statics::PropPointers) < 2048);
// ********** End Function Client_SendCategoriesVerbosity Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogDebugReplicator_Client_SendCategoriesVerbosity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogDebugReplicator, nullptr, "Client_SendCategoriesVerbosity", 	Z_Construct_UFunction_ACogDebugReplicator_Client_SendCategoriesVerbosity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACogDebugReplicator_Client_SendCategoriesVerbosity_Statics::PropPointers), 
sizeof(CogDebugReplicator_eventClient_SendCategoriesVerbosity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogDebugReplicator_Client_SendCategoriesVerbosity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogDebugReplicator_Client_SendCategoriesVerbosity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogDebugReplicator_eventClient_SendCategoriesVerbosity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACogDebugReplicator_Client_SendCategoriesVerbosity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogDebugReplicator_Client_SendCategoriesVerbosity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogDebugReplicator::execClient_SendCategoriesVerbosity)
{
	P_GET_TARRAY(FCogServerCategoryData,Z_Param_Categories);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_SendCategoriesVerbosity_Implementation(Z_Param_Categories);
	P_NATIVE_END;
}
// ********** End Class ACogDebugReplicator Function Client_SendCategoriesVerbosity ****************

// ********** Begin Class ACogDebugReplicator Function NetMulticast_SendCategoriesVerbosity ********
struct CogDebugReplicator_eventNetMulticast_SendCategoriesVerbosity_Parms
{
	TArray<FCogServerCategoryData> Categories;
};
static FName NAME_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity = FName(TEXT("NetMulticast_SendCategoriesVerbosity"));
void ACogDebugReplicator::NetMulticast_SendCategoriesVerbosity(TArray<FCogServerCategoryData> const& Categories)
{
	CogDebugReplicator_eventNetMulticast_SendCategoriesVerbosity_Parms Parms;
	Parms.Categories=Categories;
	UFunction* Func = FindFunctionChecked(NAME_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogDebugReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function NetMulticast_SendCategoriesVerbosity constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NetMulticast_SendCategoriesVerbosity constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NetMulticast_SendCategoriesVerbosity Property Definitions *************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCogServerCategoryData, METADATA_PARAMS(0, nullptr) }; // 2026449496
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugReplicator_eventNetMulticast_SendCategoriesVerbosity_Parms, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Categories_MetaData), NewProp_Categories_MetaData) }; // 2026449496
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity_Statics::NewProp_Categories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity_Statics::NewProp_Categories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity_Statics::PropPointers) < 2048);
// ********** End Function NetMulticast_SendCategoriesVerbosity Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogDebugReplicator, nullptr, "NetMulticast_SendCategoriesVerbosity", 	Z_Construct_UFunction_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity_Statics::PropPointers), 
sizeof(CogDebugReplicator_eventNetMulticast_SendCategoriesVerbosity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogDebugReplicator_eventNetMulticast_SendCategoriesVerbosity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogDebugReplicator::execNetMulticast_SendCategoriesVerbosity)
{
	P_GET_TARRAY(FCogServerCategoryData,Z_Param_Categories);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NetMulticast_SendCategoriesVerbosity_Implementation(Z_Param_Categories);
	P_NATIVE_END;
}
// ********** End Class ACogDebugReplicator Function NetMulticast_SendCategoriesVerbosity **********

// ********** Begin Class ACogDebugReplicator Function Server_RequestAllCategoriesVerbosity ********
static FName NAME_ACogDebugReplicator_Server_RequestAllCategoriesVerbosity = FName(TEXT("Server_RequestAllCategoriesVerbosity"));
void ACogDebugReplicator::Server_RequestAllCategoriesVerbosity()
{
	UFunction* Func = FindFunctionChecked(NAME_ACogDebugReplicator_Server_RequestAllCategoriesVerbosity);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACogDebugReplicator_Server_RequestAllCategoriesVerbosity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogDebugReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_RequestAllCategoriesVerbosity constinit property declarations **
// ********** End Function Server_RequestAllCategoriesVerbosity constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogDebugReplicator_Server_RequestAllCategoriesVerbosity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogDebugReplicator, nullptr, "Server_RequestAllCategoriesVerbosity", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogDebugReplicator_Server_RequestAllCategoriesVerbosity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogDebugReplicator_Server_RequestAllCategoriesVerbosity_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACogDebugReplicator_Server_RequestAllCategoriesVerbosity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogDebugReplicator_Server_RequestAllCategoriesVerbosity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogDebugReplicator::execServer_RequestAllCategoriesVerbosity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_RequestAllCategoriesVerbosity_Implementation();
	P_NATIVE_END;
}
// ********** End Class ACogDebugReplicator Function Server_RequestAllCategoriesVerbosity **********

// ********** Begin Class ACogDebugReplicator Function Server_SetCategoryVerbosity *****************
struct CogDebugReplicator_eventServer_SetCategoryVerbosity_Parms
{
	FName LogCategoryName;
	ECogLogVerbosity Verbosity;
};
static FName NAME_ACogDebugReplicator_Server_SetCategoryVerbosity = FName(TEXT("Server_SetCategoryVerbosity"));
void ACogDebugReplicator::Server_SetCategoryVerbosity(FName LogCategoryName, ECogLogVerbosity Verbosity)
{
	CogDebugReplicator_eventServer_SetCategoryVerbosity_Parms Parms;
	Parms.LogCategoryName=LogCategoryName;
	Parms.Verbosity=Verbosity;
	UFunction* Func = FindFunctionChecked(NAME_ACogDebugReplicator_Server_SetCategoryVerbosity);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogDebugReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_SetCategoryVerbosity constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_LogCategoryName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_SetCategoryVerbosity constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_SetCategoryVerbosity Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity_Statics::NewProp_LogCategoryName = { "LogCategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugReplicator_eventServer_SetCategoryVerbosity_Parms, LogCategoryName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugReplicator_eventServer_SetCategoryVerbosity_Parms, Verbosity), Z_Construct_UEnum_CogCommon_ECogLogVerbosity, METADATA_PARAMS(0, nullptr) }; // 3128917293
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity_Statics::NewProp_LogCategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity_Statics::NewProp_Verbosity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity_Statics::NewProp_Verbosity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity_Statics::PropPointers) < 2048);
// ********** End Function Server_SetCategoryVerbosity Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogDebugReplicator, nullptr, "Server_SetCategoryVerbosity", 	Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity_Statics::PropPointers), 
sizeof(CogDebugReplicator_eventServer_SetCategoryVerbosity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogDebugReplicator_eventServer_SetCategoryVerbosity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogDebugReplicator::execServer_SetCategoryVerbosity)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LogCategoryName);
	P_GET_ENUM(ECogLogVerbosity,Z_Param_Verbosity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetCategoryVerbosity_Implementation(Z_Param_LogCategoryName,ECogLogVerbosity(Z_Param_Verbosity));
	P_NATIVE_END;
}
// ********** End Class ACogDebugReplicator Function Server_SetCategoryVerbosity *******************

// ********** Begin Class ACogDebugReplicator Function Server_SetIsFilteringBySelection ************
struct CogDebugReplicator_eventServer_SetIsFilteringBySelection_Parms
{
	bool Value;
};
static FName NAME_ACogDebugReplicator_Server_SetIsFilteringBySelection = FName(TEXT("Server_SetIsFilteringBySelection"));
void ACogDebugReplicator::Server_SetIsFilteringBySelection(bool Value)
{
	CogDebugReplicator_eventServer_SetIsFilteringBySelection_Parms Parms;
	Parms.Value=Value ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ACogDebugReplicator_Server_SetIsFilteringBySelection);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACogDebugReplicator_Server_SetIsFilteringBySelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogDebugReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_SetIsFilteringBySelection constinit property declarations ******
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_SetIsFilteringBySelection constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_SetIsFilteringBySelection Property Definitions *****************
void Z_Construct_UFunction_ACogDebugReplicator_Server_SetIsFilteringBySelection_Statics::NewProp_Value_SetBit(void* Obj)
{
	((CogDebugReplicator_eventServer_SetIsFilteringBySelection_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACogDebugReplicator_Server_SetIsFilteringBySelection_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugReplicator_eventServer_SetIsFilteringBySelection_Parms), &Z_Construct_UFunction_ACogDebugReplicator_Server_SetIsFilteringBySelection_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACogDebugReplicator_Server_SetIsFilteringBySelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogDebugReplicator_Server_SetIsFilteringBySelection_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogDebugReplicator_Server_SetIsFilteringBySelection_Statics::PropPointers) < 2048);
// ********** End Function Server_SetIsFilteringBySelection Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogDebugReplicator_Server_SetIsFilteringBySelection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogDebugReplicator, nullptr, "Server_SetIsFilteringBySelection", 	Z_Construct_UFunction_ACogDebugReplicator_Server_SetIsFilteringBySelection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACogDebugReplicator_Server_SetIsFilteringBySelection_Statics::PropPointers), 
sizeof(CogDebugReplicator_eventServer_SetIsFilteringBySelection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogDebugReplicator_Server_SetIsFilteringBySelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogDebugReplicator_Server_SetIsFilteringBySelection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogDebugReplicator_eventServer_SetIsFilteringBySelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACogDebugReplicator_Server_SetIsFilteringBySelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogDebugReplicator_Server_SetIsFilteringBySelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogDebugReplicator::execServer_SetIsFilteringBySelection)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetIsFilteringBySelection_Implementation(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ACogDebugReplicator Function Server_SetIsFilteringBySelection **************

// ********** Begin Class ACogDebugReplicator Function Server_SetSelection *************************
struct CogDebugReplicator_eventServer_SetSelection_Parms
{
	AActor* Value;
	bool ForceSelection;
};
static FName NAME_ACogDebugReplicator_Server_SetSelection = FName(TEXT("Server_SetSelection"));
void ACogDebugReplicator::Server_SetSelection(AActor* Value, bool ForceSelection)
{
	CogDebugReplicator_eventServer_SetSelection_Parms Parms;
	Parms.Value=Value;
	Parms.ForceSelection=ForceSelection ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ACogDebugReplicator_Server_SetSelection);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CogDebugReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_SetSelection constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ForceSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_SetSelection constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_SetSelection Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CogDebugReplicator_eventServer_SetSelection_Parms, Value), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection_Statics::NewProp_ForceSelection_SetBit(void* Obj)
{
	((CogDebugReplicator_eventServer_SetSelection_Parms*)Obj)->ForceSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection_Statics::NewProp_ForceSelection = { "ForceSelection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CogDebugReplicator_eventServer_SetSelection_Parms), &Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection_Statics::NewProp_ForceSelection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection_Statics::NewProp_ForceSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection_Statics::PropPointers) < 2048);
// ********** End Function Server_SetSelection Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACogDebugReplicator, nullptr, "Server_SetSelection", 	Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection_Statics::PropPointers), 
sizeof(CogDebugReplicator_eventServer_SetSelection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CogDebugReplicator_eventServer_SetSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACogDebugReplicator::execServer_SetSelection)
{
	P_GET_OBJECT(AActor,Z_Param_Value);
	P_GET_UBOOL(Z_Param_ForceSelection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetSelection_Implementation(Z_Param_Value,Z_Param_ForceSelection);
	P_NATIVE_END;
}
// ********** End Class ACogDebugReplicator Function Server_SetSelection ***************************

// ********** Begin Class ACogDebugReplicator ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACogDebugReplicator;
UClass* ACogDebugReplicator::GetPrivateStaticClass()
{
	using TClass = ACogDebugReplicator;
	if (!Z_Registration_Info_UClass_ACogDebugReplicator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogDebugReplicator"),
			Z_Registration_Info_UClass_ACogDebugReplicator.InnerSingleton,
			StaticRegisterNativesACogDebugReplicator,
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
	return Z_Registration_Info_UClass_ACogDebugReplicator.InnerSingleton;
}
UClass* Z_Construct_UClass_ACogDebugReplicator_NoRegister()
{
	return ACogDebugReplicator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACogDebugReplicator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogDebugReplicator.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/CogDebugReplicator.h" },
		{ "NotBlueprintType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogDebugReplicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ACogDebugReplicator constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACogDebugReplicator constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Client_SendCategoriesVerbosity"), .Pointer = &ACogDebugReplicator::execClient_SendCategoriesVerbosity },
		{ .NameUTF8 = UTF8TEXT("NetMulticast_SendCategoriesVerbosity"), .Pointer = &ACogDebugReplicator::execNetMulticast_SendCategoriesVerbosity },
		{ .NameUTF8 = UTF8TEXT("Server_RequestAllCategoriesVerbosity"), .Pointer = &ACogDebugReplicator::execServer_RequestAllCategoriesVerbosity },
		{ .NameUTF8 = UTF8TEXT("Server_SetCategoryVerbosity"), .Pointer = &ACogDebugReplicator::execServer_SetCategoryVerbosity },
		{ .NameUTF8 = UTF8TEXT("Server_SetIsFilteringBySelection"), .Pointer = &ACogDebugReplicator::execServer_SetIsFilteringBySelection },
		{ .NameUTF8 = UTF8TEXT("Server_SetSelection"), .Pointer = &ACogDebugReplicator::execServer_SetSelection },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACogDebugReplicator_Client_SendCategoriesVerbosity, "Client_SendCategoriesVerbosity" }, // 3761896609
		{ &Z_Construct_UFunction_ACogDebugReplicator_NetMulticast_SendCategoriesVerbosity, "NetMulticast_SendCategoriesVerbosity" }, // 1577414221
		{ &Z_Construct_UFunction_ACogDebugReplicator_Server_RequestAllCategoriesVerbosity, "Server_RequestAllCategoriesVerbosity" }, // 1994419703
		{ &Z_Construct_UFunction_ACogDebugReplicator_Server_SetCategoryVerbosity, "Server_SetCategoryVerbosity" }, // 2701822807
		{ &Z_Construct_UFunction_ACogDebugReplicator_Server_SetIsFilteringBySelection, "Server_SetIsFilteringBySelection" }, // 1898259339
		{ &Z_Construct_UFunction_ACogDebugReplicator_Server_SetSelection, "Server_SetSelection" }, // 4021879228
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACogDebugReplicator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACogDebugReplicator_Statics

// ********** Begin Class ACogDebugReplicator Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACogDebugReplicator_Statics::NewProp_ReplicatedData = { "ReplicatedData", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACogDebugReplicator, ReplicatedData), Z_Construct_UScriptStruct_FCogReplicatorNetPack, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedData_MetaData), NewProp_ReplicatedData_MetaData) }; // 981890848
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACogDebugReplicator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACogDebugReplicator_Statics::NewProp_ReplicatedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACogDebugReplicator_Statics::PropPointers) < 2048);
// ********** End Class ACogDebugReplicator Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_ACogDebugReplicator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CogDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACogDebugReplicator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACogDebugReplicator_Statics::ClassParams = {
	&ACogDebugReplicator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACogDebugReplicator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACogDebugReplicator_Statics::PropPointers),
	0,
	0x049002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACogDebugReplicator_Statics::Class_MetaDataParams), Z_Construct_UClass_ACogDebugReplicator_Statics::Class_MetaDataParams)
};
void ACogDebugReplicator::StaticRegisterNativesACogDebugReplicator()
{
	UClass* Class = ACogDebugReplicator::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ACogDebugReplicator_Statics::Funcs));
}
UClass* Z_Construct_UClass_ACogDebugReplicator()
{
	if (!Z_Registration_Info_UClass_ACogDebugReplicator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACogDebugReplicator.OuterSingleton, Z_Construct_UClass_ACogDebugReplicator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACogDebugReplicator.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ACogDebugReplicator::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_ReplicatedData(TEXT("ReplicatedData"));
	const bool bIsValid = true
		&& Name_ReplicatedData == ClassReps[(int32)ENetFields_Private::ReplicatedData].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACogDebugReplicator"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACogDebugReplicator);
ACogDebugReplicator::~ACogDebugReplicator() {}
// ********** End Class ACogDebugReplicator ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h__Script_CogDebug_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCogServerCategoryData::StaticStruct, Z_Construct_UScriptStruct_FCogServerCategoryData_Statics::NewStructOps, TEXT("CogServerCategoryData"),&Z_Registration_Info_UScriptStruct_FCogServerCategoryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogServerCategoryData), 2026449496U) },
		{ FCogReplicatorNetPack::StaticStruct, Z_Construct_UScriptStruct_FCogReplicatorNetPack_Statics::NewStructOps, TEXT("CogReplicatorNetPack"),&Z_Registration_Info_UScriptStruct_FCogReplicatorNetPack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCogReplicatorNetPack), 981890848U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACogDebugReplicator, ACogDebugReplicator::StaticClass, TEXT("ACogDebugReplicator"), &Z_Registration_Info_UClass_ACogDebugReplicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACogDebugReplicator), 1308750784U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h__Script_CogDebug_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h__Script_CogDebug_563740548{
	TEXT("/Script/CogDebug"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h__Script_CogDebug_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h__Script_CogDebug_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h__Script_CogDebug_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugReplicator_h__Script_CogDebug_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
