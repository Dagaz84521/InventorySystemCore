// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryCore/Public/Core/InventoryEntryArray.h"
#include "InventoryCore/Public/Core/InventoryEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryEntryArray() {}

// Begin Cross Module References
INVENTORYCORE_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryEntry();
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryEntryArray();
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryEntryHandle();
UPackage* Z_Construct_UPackage__Script_InventoryCore();
// End Cross Module References

// Begin ScriptStruct FInventoryEntryArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryEntryArray;
class UScriptStruct* FInventoryEntryArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryEntryArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryEntryArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryEntryArray, (UObject*)Z_Construct_UPackage__Script_InventoryCore(), TEXT("InventoryEntryArray"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryEntryArray.OuterSingleton;
}
template<> INVENTORYCORE_API UScriptStruct* StaticStruct<FInventoryEntryArray>()
{
	return FInventoryEntryArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryEntryArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/InventoryEntryArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemEntries_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/InventoryEntryArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\x8f\x8d\xe5\x90\x91\xe5\xbc\x95\xe7\x94\xa8\xef\xbc\x9b\xe7\xbb\x84\xe4\xbb\xb6\xe6\xb3\xa8\xe5\x86\x8c\xe6\x97\xb6\xe4\xbc\x9a\xe9\x87\x8d\xe6\x96\xb0\xe8\xae\xbe\xe7\xbd\xae\xe8\xaf\xa5\xe5\xad\x97\xe6\xae\xb5\xe3\x80\x82 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/InventoryEntryArray.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\x8f\x8d\xe5\x90\x91\xe5\xbc\x95\xe7\x94\xa8\xef\xbc\x9b\xe7\xbb\x84\xe4\xbb\xb6\xe6\xb3\xa8\xe5\x86\x8c\xe6\x97\xb6\xe4\xbc\x9a\xe9\x87\x8d\xe6\x96\xb0\xe8\xae\xbe\xe7\xbd\xae\xe8\xaf\xa5\xe5\xad\x97\xe6\xae\xb5\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemEntries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemEntries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryEntryArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryEntryArray_Statics::NewProp_ItemEntries_Inner = { "ItemEntries", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryEntry, METADATA_PARAMS(0, nullptr) }; // 3510699039
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryEntryArray_Statics::NewProp_ItemEntries = { "ItemEntries", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryEntryArray, ItemEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemEntries_MetaData), NewProp_ItemEntries_MetaData) }; // 3510699039
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryEntryArray_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0114000080082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryEntryArray, InventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponent_MetaData), NewProp_InventoryComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryEntryArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryEntryArray_Statics::NewProp_ItemEntries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryEntryArray_Statics::NewProp_ItemEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryEntryArray_Statics::NewProp_InventoryComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryEntryArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryEntryArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryCore,
	nullptr,
	&NewStructOps,
	"InventoryEntryArray",
	Z_Construct_UScriptStruct_FInventoryEntryArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryEntryArray_Statics::PropPointers),
	sizeof(FInventoryEntryArray),
	alignof(FInventoryEntryArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryEntryArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryEntryArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryEntryArray()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryEntryArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryEntryArray.InnerSingleton, Z_Construct_UScriptStruct_FInventoryEntryArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryEntryArray.InnerSingleton;
}
// End ScriptStruct FInventoryEntryArray

// Begin ScriptStruct FInventoryEntryHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryEntryHandle;
class UScriptStruct* FInventoryEntryHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryEntryHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryEntryHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryEntryHandle, (UObject*)Z_Construct_UPackage__Script_InventoryCore(), TEXT("InventoryEntryHandle"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryEntryHandle.OuterSingleton;
}
template<> INVENTORYCORE_API UScriptStruct* StaticStruct<FInventoryEntryHandle>()
{
	return FInventoryEntryHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryEntryHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xaf\xb9\xe6\x8c\x87\xe5\xae\x9a\xe8\x83\x8c\xe5\x8c\x85\xe7\xbb\x84\xe4\xbb\xb6\xe6\x89\x80\xe6\x8b\xa5\xe6\x9c\x89 Entry \xe7\x9a\x84\xe7\xa8\xb3\xe5\xae\x9a\xe5\xbc\x95\xe7\x94\xa8\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryEntryArray.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe6\x8c\x87\xe5\xae\x9a\xe8\x83\x8c\xe5\x8c\x85\xe7\xbb\x84\xe4\xbb\xb6\xe6\x89\x80\xe6\x8b\xa5\xe6\x9c\x89 Entry \xe7\x9a\x84\xe7\xa8\xb3\xe5\xae\x9a\xe5\xbc\x95\xe7\x94\xa8\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryID_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/InventoryEntryArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentInventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/InventoryEntryArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntryID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentInventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryEntryHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryEntryHandle_Statics::NewProp_EntryID = { "EntryID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryEntryHandle, EntryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryID_MetaData), NewProp_EntryID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryEntryHandle_Statics::NewProp_ParentInventory = { "ParentInventory", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryEntryHandle, ParentInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentInventory_MetaData), NewProp_ParentInventory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryEntryHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryEntryHandle_Statics::NewProp_EntryID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryEntryHandle_Statics::NewProp_ParentInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryEntryHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryEntryHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryCore,
	nullptr,
	&NewStructOps,
	"InventoryEntryHandle",
	Z_Construct_UScriptStruct_FInventoryEntryHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryEntryHandle_Statics::PropPointers),
	sizeof(FInventoryEntryHandle),
	alignof(FInventoryEntryHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryEntryHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryEntryHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryEntryHandle()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryEntryHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryEntryHandle.InnerSingleton, Z_Construct_UScriptStruct_FInventoryEntryHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryEntryHandle.InnerSingleton;
}
// End ScriptStruct FInventoryEntryHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryEntryArray_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryEntryArray::StaticStruct, Z_Construct_UScriptStruct_FInventoryEntryArray_Statics::NewStructOps, TEXT("InventoryEntryArray"), &Z_Registration_Info_UScriptStruct_InventoryEntryArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryEntryArray), 3630767471U) },
		{ FInventoryEntryHandle::StaticStruct, Z_Construct_UScriptStruct_FInventoryEntryHandle_Statics::NewStructOps, TEXT("InventoryEntryHandle"), &Z_Registration_Info_UScriptStruct_InventoryEntryHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryEntryHandle), 1568265631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryEntryArray_h_1048215442(TEXT("/Script/InventoryCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryEntryArray_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryEntryArray_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
