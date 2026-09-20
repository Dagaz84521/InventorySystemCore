// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryCore/Public/Core/InventoryQuantityOperationResult.h"
#include "InventoryCore/Public/Core/InventoryEntryArray.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryQuantityOperationResult() {}

// Begin Cross Module References
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryEntryHandle();
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryOperationResult();
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryQuantityOperationResult();
UPackage* Z_Construct_UPackage__Script_InventoryCore();
// End Cross Module References

// Begin ScriptStruct FInventoryQuantityOperationResult
static_assert(std::is_polymorphic<FInventoryQuantityOperationResult>() == std::is_polymorphic<FInventoryOperationResult>(), "USTRUCT FInventoryQuantityOperationResult cannot be polymorphic unless super FInventoryOperationResult is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryQuantityOperationResult;
class UScriptStruct* FInventoryQuantityOperationResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryQuantityOperationResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryQuantityOperationResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryQuantityOperationResult, (UObject*)Z_Construct_UPackage__Script_InventoryCore(), TEXT("InventoryQuantityOperationResult"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryQuantityOperationResult.OuterSingleton;
}
template<> INVENTORYCORE_API UScriptStruct* StaticStruct<FInventoryQuantityOperationResult>()
{
	return FInventoryQuantityOperationResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryQuantityOperationResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shared component operation result. The derived storage policy defines OutputPayload semantics. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryQuantityOperationResult.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shared component operation result. The derived storage policy defines OutputPayload semantics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectedEntry_MetaData[] = {
		{ "Category", "Inventory|Operation" },
		{ "ModuleRelativePath", "Public/Core/InventoryQuantityOperationResult.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AffectedEntry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryQuantityOperationResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryQuantityOperationResult_Statics::NewProp_AffectedEntry = { "AffectedEntry", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryQuantityOperationResult, AffectedEntry), Z_Construct_UScriptStruct_FInventoryEntryHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectedEntry_MetaData), NewProp_AffectedEntry_MetaData) }; // 1568265631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryQuantityOperationResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryQuantityOperationResult_Statics::NewProp_AffectedEntry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryQuantityOperationResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryQuantityOperationResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryCore,
	Z_Construct_UScriptStruct_FInventoryOperationResult,
	&NewStructOps,
	"InventoryQuantityOperationResult",
	Z_Construct_UScriptStruct_FInventoryQuantityOperationResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryQuantityOperationResult_Statics::PropPointers),
	sizeof(FInventoryQuantityOperationResult),
	alignof(FInventoryQuantityOperationResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryQuantityOperationResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryQuantityOperationResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryQuantityOperationResult()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryQuantityOperationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryQuantityOperationResult.InnerSingleton, Z_Construct_UScriptStruct_FInventoryQuantityOperationResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryQuantityOperationResult.InnerSingleton;
}
// End ScriptStruct FInventoryQuantityOperationResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryQuantityOperationResult_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryQuantityOperationResult::StaticStruct, Z_Construct_UScriptStruct_FInventoryQuantityOperationResult_Statics::NewStructOps, TEXT("InventoryQuantityOperationResult"), &Z_Registration_Info_UScriptStruct_InventoryQuantityOperationResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryQuantityOperationResult), 3517111853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryQuantityOperationResult_h_1500932894(TEXT("/Script/InventoryCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryQuantityOperationResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryQuantityOperationResult_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
