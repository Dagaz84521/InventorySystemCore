// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryCore/Public/Core/InventoryHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryHandle() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryHandle();
UPackage* Z_Construct_UPackage__Script_InventoryCore();
// End Cross Module References

// Begin ScriptStruct FInventoryHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryHandle;
class UScriptStruct* FInventoryHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryHandle, (UObject*)Z_Construct_UPackage__Script_InventoryCore(), TEXT("InventoryHandle"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryHandle.OuterSingleton;
}
template<> INVENTORYCORE_API UScriptStruct* StaticStruct<FInventoryHandle>()
{
	return FInventoryHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A non-owning record identity, scoped to one inventory lifetime.\n * Identifies an Entry, not its current item or array index. It does not keep storage alive.\n * IsSet checks the identifier only; resolve against storage to check existence.\n * Runtime handles must not be used as persistent save-game or replicated identities.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryHandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A non-owning record identity, scoped to one inventory lifetime.\nIdentifies an Entry, not its current item or array index. It does not keep storage alive.\nIsSet checks the identifier only; resolve against storage to check existence.\nRuntime handles must not be used as persistent save-game or replicated identities." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/InventoryHandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/InventoryHandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntryID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryHandle_Statics::NewProp_InventoryID = { "InventoryID", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryHandle, InventoryID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryID_MetaData), NewProp_InventoryID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryHandle_Statics::NewProp_EntryID = { "EntryID", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryHandle, EntryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryID_MetaData), NewProp_EntryID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryHandle_Statics::NewProp_InventoryID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryHandle_Statics::NewProp_EntryID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryCore,
	nullptr,
	&NewStructOps,
	"InventoryHandle",
	Z_Construct_UScriptStruct_FInventoryHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryHandle_Statics::PropPointers),
	sizeof(FInventoryHandle),
	alignof(FInventoryHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryHandle()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryHandle.InnerSingleton, Z_Construct_UScriptStruct_FInventoryHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryHandle.InnerSingleton;
}
// End ScriptStruct FInventoryHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryHandle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryHandle::StaticStruct, Z_Construct_UScriptStruct_FInventoryHandle_Statics::NewStructOps, TEXT("InventoryHandle"), &Z_Registration_Info_UScriptStruct_InventoryHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryHandle), 227002016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryHandle_h_3440885987(TEXT("/Script/InventoryCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryHandle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
