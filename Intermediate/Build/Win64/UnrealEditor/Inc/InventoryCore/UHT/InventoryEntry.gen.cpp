// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryCore/Public/Core/InventoryEntry.h"
#include "InventoryCore/Public/Core/InventoryItemPayload.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryEntry() {}

// Begin Cross Module References
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryEntry();
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemPayload();
UPackage* Z_Construct_UPackage__Script_InventoryCore();
// End Cross Module References

// Begin ScriptStruct FInventoryEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryEntry;
class UScriptStruct* FInventoryEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryEntry, (UObject*)Z_Construct_UPackage__Script_InventoryCore(), TEXT("InventoryEntry"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryEntry.OuterSingleton;
}
template<> INVENTORYCORE_API UScriptStruct* StaticStruct<FInventoryEntry>()
{
	return FInventoryEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xb8\x80\xe6\x9d\xa1\xe5\xba\x93\xe5\xad\x98\xe8\xae\xb0\xe5\xbd\x95\xef\xbc\x8c\xe5\x8c\x85\xe5\x90\xab\xe7\xa8\xb3\xe5\xae\x9a\xe6\xa0\x87\xe8\xaf\x86\xe4\xbb\xa5\xe5\x8f\x8a\xe5\x8f\xaf\xe4\xb8\xba\xe7\xa9\xba\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe5\x86\x85\xe5\xae\xb9\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryEntry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x80\xe6\x9d\xa1\xe5\xba\x93\xe5\xad\x98\xe8\xae\xb0\xe5\xbd\x95\xef\xbc\x8c\xe5\x8c\x85\xe5\x90\xab\xe7\xa8\xb3\xe5\xae\x9a\xe6\xa0\x87\xe8\xaf\x86\xe4\xbb\xa5\xe5\x8f\x8a\xe5\x8f\xaf\xe4\xb8\xba\xe7\xa9\xba\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe5\x86\x85\xe5\xae\xb9\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93\xe5\x89\x8d Entry \xe4\xbf\x9d\xe5\xad\x98\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe5\xa0\x86\xef\xbc\x9b\xe7\xa9\xba Payload \xe8\xa1\xa8\xe7\xa4\xba\xe8\xaf\xa5 Entry \xe6\x9c\xaa\xe5\xad\x98\xe6\x94\xbe\xe7\x89\xa9\xe5\x93\x81\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryEntry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d Entry \xe4\xbf\x9d\xe5\xad\x98\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe5\xa0\x86\xef\xbc\x9b\xe7\xa9\xba Payload \xe8\xa1\xa8\xe7\xa4\xba\xe8\xaf\xa5 Entry \xe6\x9c\xaa\xe5\xad\x98\xe6\x94\xbe\xe7\x89\xa9\xe5\x93\x81\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryID_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Entry \xe5\x9c\xa8\xe6\x89\x80\xe5\xb1\x9e\xe8\x83\x8c\xe5\x8c\x85\xe5\x86\x85\xe7\x9a\x84\xe7\xa8\xb3\xe5\xae\x9a\xe6\xa0\x87\xe8\xaf\x86\xef\xbc\x9bINDEX_NONE \xe8\xa1\xa8\xe7\xa4\xba\xe6\x97\xa0\xe6\x95\x88\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryEntry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entry \xe5\x9c\xa8\xe6\x89\x80\xe5\xb1\x9e\xe8\x83\x8c\xe5\x8c\x85\xe5\x86\x85\xe7\x9a\x84\xe7\xa8\xb3\xe5\xae\x9a\xe6\xa0\x87\xe8\xaf\x86\xef\xbc\x9bINDEX_NONE \xe8\xa1\xa8\xe7\xa4\xba\xe6\x97\xa0\xe6\x95\x88\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntryID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryEntry_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryEntry, Payload), Z_Construct_UScriptStruct_FInventoryItemPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 3232423075
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryEntry_Statics::NewProp_EntryID = { "EntryID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryEntry, EntryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryID_MetaData), NewProp_EntryID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryEntry_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryEntry_Statics::NewProp_EntryID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryCore,
	nullptr,
	&NewStructOps,
	"InventoryEntry",
	Z_Construct_UScriptStruct_FInventoryEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryEntry_Statics::PropPointers),
	sizeof(FInventoryEntry),
	alignof(FInventoryEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryEntry()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryEntry.InnerSingleton, Z_Construct_UScriptStruct_FInventoryEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryEntry.InnerSingleton;
}
// End ScriptStruct FInventoryEntry

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryEntry_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryEntry::StaticStruct, Z_Construct_UScriptStruct_FInventoryEntry_Statics::NewStructOps, TEXT("InventoryEntry"), &Z_Registration_Info_UScriptStruct_InventoryEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryEntry), 3510699039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryEntry_h_3038459982(TEXT("/Script/InventoryCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryEntry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryEntry_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
