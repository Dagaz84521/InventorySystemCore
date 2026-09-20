// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryCore/Public/Core/InventoryOperationResult.h"
#include "InventoryCore/Public/Core/InventoryItemPayload.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryOperationResult() {}

// Begin Cross Module References
INVENTORYCORE_API UEnum* Z_Construct_UEnum_InventoryCore_EInventoryFailureReason();
INVENTORYCORE_API UEnum* Z_Construct_UEnum_InventoryCore_EInventoryQuantityOperationStatus();
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemPayload();
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryOperationResult();
UPackage* Z_Construct_UPackage__Script_InventoryCore();
// End Cross Module References

// Begin Enum EInventoryQuantityOperationStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInventoryQuantityOperationStatus;
static UEnum* EInventoryQuantityOperationStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInventoryQuantityOperationStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInventoryQuantityOperationStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventoryCore_EInventoryQuantityOperationStatus, (UObject*)Z_Construct_UPackage__Script_InventoryCore(), TEXT("EInventoryQuantityOperationStatus"));
	}
	return Z_Registration_Info_UEnum_EInventoryQuantityOperationStatus.OuterSingleton;
}
template<> INVENTORYCORE_API UEnum* StaticEnum<EInventoryQuantityOperationStatus>()
{
	return EInventoryQuantityOperationStatus_StaticEnum();
}
struct Z_Construct_UEnum_InventoryCore_EInventoryQuantityOperationStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failed.DisplayName", "\xe5\xa4\xb1\xe8\xb4\xa5" },
		{ "Failed.Name", "EInventoryQuantityOperationStatus::Failed" },
		{ "ModuleRelativePath", "Public/Core/InventoryOperationResult.h" },
		{ "PartialSucceeded.DisplayName", "\xe9\x83\xa8\xe5\x88\x86\xe6\x88\x90\xe5\x8a\x9f" },
		{ "PartialSucceeded.Name", "EInventoryQuantityOperationStatus::PartialSucceeded" },
		{ "Succeeded.DisplayName", "\xe6\x88\x90\xe5\x8a\x9f" },
		{ "Succeeded.Name", "EInventoryQuantityOperationStatus::Succeeded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInventoryQuantityOperationStatus::Failed", (int64)EInventoryQuantityOperationStatus::Failed },
		{ "EInventoryQuantityOperationStatus::PartialSucceeded", (int64)EInventoryQuantityOperationStatus::PartialSucceeded },
		{ "EInventoryQuantityOperationStatus::Succeeded", (int64)EInventoryQuantityOperationStatus::Succeeded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventoryCore_EInventoryQuantityOperationStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InventoryCore,
	nullptr,
	"EInventoryQuantityOperationStatus",
	"EInventoryQuantityOperationStatus",
	Z_Construct_UEnum_InventoryCore_EInventoryQuantityOperationStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InventoryCore_EInventoryQuantityOperationStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InventoryCore_EInventoryQuantityOperationStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InventoryCore_EInventoryQuantityOperationStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InventoryCore_EInventoryQuantityOperationStatus()
{
	if (!Z_Registration_Info_UEnum_EInventoryQuantityOperationStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInventoryQuantityOperationStatus.InnerSingleton, Z_Construct_UEnum_InventoryCore_EInventoryQuantityOperationStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInventoryQuantityOperationStatus.InnerSingleton;
}
// End Enum EInventoryQuantityOperationStatus

// Begin Enum EInventoryFailureReason
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInventoryFailureReason;
static UEnum* EInventoryFailureReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInventoryFailureReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInventoryFailureReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventoryCore_EInventoryFailureReason, (UObject*)Z_Construct_UPackage__Script_InventoryCore(), TEXT("EInventoryFailureReason"));
	}
	return Z_Registration_Info_UEnum_EInventoryFailureReason.OuterSingleton;
}
template<> INVENTORYCORE_API UEnum* StaticEnum<EInventoryFailureReason>()
{
	return EInventoryFailureReason_StaticEnum();
}
struct Z_Construct_UEnum_InventoryCore_EInventoryFailureReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CapacityExceeded.Name", "EInventoryFailureReason::CapacityExceeded" },
		{ "InsufficientQuantity.Name", "EInventoryFailureReason::InsufficientQuantity" },
		{ "InvalidPayload.Name", "EInventoryFailureReason::InvalidPayload" },
		{ "InvalidQuantity.Name", "EInventoryFailureReason::InvalidQuantity" },
		{ "ModuleRelativePath", "Public/Core/InventoryOperationResult.h" },
		{ "None.Name", "EInventoryFailureReason::None" },
		{ "NotFound.Name", "EInventoryFailureReason::NotFound" },
		{ "QuantityOverflow.Name", "EInventoryFailureReason::QuantityOverflow" },
		{ "Rejected.Name", "EInventoryFailureReason::Rejected" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInventoryFailureReason::None", (int64)EInventoryFailureReason::None },
		{ "EInventoryFailureReason::InvalidPayload", (int64)EInventoryFailureReason::InvalidPayload },
		{ "EInventoryFailureReason::InvalidQuantity", (int64)EInventoryFailureReason::InvalidQuantity },
		{ "EInventoryFailureReason::NotFound", (int64)EInventoryFailureReason::NotFound },
		{ "EInventoryFailureReason::InsufficientQuantity", (int64)EInventoryFailureReason::InsufficientQuantity },
		{ "EInventoryFailureReason::CapacityExceeded", (int64)EInventoryFailureReason::CapacityExceeded },
		{ "EInventoryFailureReason::QuantityOverflow", (int64)EInventoryFailureReason::QuantityOverflow },
		{ "EInventoryFailureReason::Rejected", (int64)EInventoryFailureReason::Rejected },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventoryCore_EInventoryFailureReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InventoryCore,
	nullptr,
	"EInventoryFailureReason",
	"EInventoryFailureReason",
	Z_Construct_UEnum_InventoryCore_EInventoryFailureReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InventoryCore_EInventoryFailureReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InventoryCore_EInventoryFailureReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InventoryCore_EInventoryFailureReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InventoryCore_EInventoryFailureReason()
{
	if (!Z_Registration_Info_UEnum_EInventoryFailureReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInventoryFailureReason.InnerSingleton, Z_Construct_UEnum_InventoryCore_EInventoryFailureReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInventoryFailureReason.InnerSingleton;
}
// End Enum EInventoryFailureReason

// Begin ScriptStruct FInventoryOperationResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryOperationResult;
class UScriptStruct* FInventoryOperationResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryOperationResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryOperationResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryOperationResult, (UObject*)Z_Construct_UPackage__Script_InventoryCore(), TEXT("InventoryOperationResult"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryOperationResult.OuterSingleton;
}
template<> INVENTORYCORE_API UScriptStruct* StaticStruct<FInventoryOperationResult>()
{
	return FInventoryOperationResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryOperationResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Domain result, independent of component handles and placement. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryOperationResult.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Domain result, independent of component handles and placement." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "Inventory|Operation" },
		{ "ModuleRelativePath", "Public/Core/InventoryOperationResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedQuantity_MetaData[] = {
		{ "Category", "Inventory|Operation" },
		{ "ModuleRelativePath", "Public/Core/InventoryOperationResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangedQuantity_MetaData[] = {
		{ "Category", "Inventory|Operation" },
		{ "ModuleRelativePath", "Public/Core/InventoryOperationResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingQuantity_MetaData[] = {
		{ "Category", "Inventory|Operation" },
		{ "ModuleRelativePath", "Public/Core/InventoryOperationResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputPayload_MetaData[] = {
		{ "Category", "Inventory|Operation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add returns unaccepted input; Remove returns extracted items. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryOperationResult.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add returns unaccepted input; Remove returns extracted items." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureReason_MetaData[] = {
		{ "Category", "Inventory|Operation" },
		{ "ModuleRelativePath", "Public/Core/InventoryOperationResult.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RequestedQuantity;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ChangedQuantity;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RemainingQuantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPayload;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailureReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FailureReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryOperationResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryOperationResult, Status), Z_Construct_UEnum_InventoryCore_EInventoryQuantityOperationStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 4249930662
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewProp_RequestedQuantity = { "RequestedQuantity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryOperationResult, RequestedQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedQuantity_MetaData), NewProp_RequestedQuantity_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewProp_ChangedQuantity = { "ChangedQuantity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryOperationResult, ChangedQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangedQuantity_MetaData), NewProp_ChangedQuantity_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewProp_RemainingQuantity = { "RemainingQuantity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryOperationResult, RemainingQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingQuantity_MetaData), NewProp_RemainingQuantity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewProp_OutputPayload = { "OutputPayload", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryOperationResult, OutputPayload), Z_Construct_UScriptStruct_FInventoryItemPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputPayload_MetaData), NewProp_OutputPayload_MetaData) }; // 3232423075
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewProp_FailureReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryOperationResult, FailureReason), Z_Construct_UEnum_InventoryCore_EInventoryFailureReason, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureReason_MetaData), NewProp_FailureReason_MetaData) }; // 3375048959
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewProp_RequestedQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewProp_ChangedQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewProp_RemainingQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewProp_OutputPayload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewProp_FailureReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewProp_FailureReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryCore,
	nullptr,
	&NewStructOps,
	"InventoryOperationResult",
	Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::PropPointers),
	sizeof(FInventoryOperationResult),
	alignof(FInventoryOperationResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryOperationResult()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryOperationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryOperationResult.InnerSingleton, Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryOperationResult.InnerSingleton;
}
// End ScriptStruct FInventoryOperationResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryOperationResult_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInventoryQuantityOperationStatus_StaticEnum, TEXT("EInventoryQuantityOperationStatus"), &Z_Registration_Info_UEnum_EInventoryQuantityOperationStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4249930662U) },
		{ EInventoryFailureReason_StaticEnum, TEXT("EInventoryFailureReason"), &Z_Registration_Info_UEnum_EInventoryFailureReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3375048959U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryOperationResult::StaticStruct, Z_Construct_UScriptStruct_FInventoryOperationResult_Statics::NewStructOps, TEXT("InventoryOperationResult"), &Z_Registration_Info_UScriptStruct_InventoryOperationResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryOperationResult), 748070074U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryOperationResult_h_2485681000(TEXT("/Script/InventoryCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryOperationResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryOperationResult_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryOperationResult_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryOperationResult_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
