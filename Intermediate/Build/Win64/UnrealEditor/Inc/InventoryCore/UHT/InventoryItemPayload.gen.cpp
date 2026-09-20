// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryCore/Public/Core/InventoryItemPayload.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItemPayload() {}

// Begin Cross Module References
INVENTORYCORE_API UClass* Z_Construct_UClass_UInventoryItemDefinition_NoRegister();
INVENTORYCORE_API UClass* Z_Construct_UClass_UInventoryItemInstance_NoRegister();
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemPayload();
UPackage* Z_Construct_UPackage__Script_InventoryCore();
// End Cross Module References

// Begin ScriptStruct FInventoryItemPayload
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemPayload;
class UScriptStruct* FInventoryItemPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemPayload, (UObject*)Z_Construct_UPackage__Script_InventoryCore(), TEXT("InventoryItemPayload"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemPayload.OuterSingleton;
}
template<> INVENTORYCORE_API UScriptStruct* StaticStruct<FInventoryItemPayload>()
{
	return FInventoryItemPayload::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\x8f\xaf\xe4\xbb\xa5\xe8\x84\xb1\xe7\xa6\xbb Inventory Entry \xe7\x8b\xac\xe7\xab\x8b\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe5\xa0\x86\xe6\x95\xb0\xe6\x8d\xae\xe3\x80\x82\n *\n * Definition \xe5\x92\x8c Quantity \xe6\x9e\x84\xe6\x88\x90\xe6\x89\x80\xe6\x9c\x89\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe8\xa1\xa8\xe7\xa4\xba\xef\xbc\x9b\xe5\x8f\xaa\xe6\x9c\x89\xe9\x9c\x80\xe8\xa6\x81\xe5\x8a\xa8\xe6\x80\x81\xe7\x8a\xb6\xe6\x80\x81\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe6\x89\x8d\xe6\x90\xba\xe5\xb8\xa6\n * ItemInstance\xe3\x80\x82Payload \xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe6\xb7\xbb\xe5\x8a\xa0\xe3\x80\x81\xe6\x8f\x90\xe5\x8f\x96\xe3\x80\x81\xe5\xae\xb9\xe5\x99\xa8\xe8\xbd\xac\xe7\xa7\xbb\xe3\x80\x81\xe9\xbc\xa0\xe6\xa0\x87\xe6\x9a\x82\xe5\xad\x98\xe7\xad\x89\xe6\xb5\x81\xe7\xa8\x8b\xe3\x80\x82\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryItemPayload.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe4\xbb\xa5\xe8\x84\xb1\xe7\xa6\xbb Inventory Entry \xe7\x8b\xac\xe7\xab\x8b\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe5\xa0\x86\xe6\x95\xb0\xe6\x8d\xae\xe3\x80\x82\n\nDefinition \xe5\x92\x8c Quantity \xe6\x9e\x84\xe6\x88\x90\xe6\x89\x80\xe6\x9c\x89\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe8\xa1\xa8\xe7\xa4\xba\xef\xbc\x9b\xe5\x8f\xaa\xe6\x9c\x89\xe9\x9c\x80\xe8\xa6\x81\xe5\x8a\xa8\xe6\x80\x81\xe7\x8a\xb6\xe6\x80\x81\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe6\x89\x8d\xe6\x90\xba\xe5\xb8\xa6\nItemInstance\xe3\x80\x82Payload \xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe6\xb7\xbb\xe5\x8a\xa0\xe3\x80\x81\xe6\x8f\x90\xe5\x8f\x96\xe3\x80\x81\xe5\xae\xb9\xe5\x99\xa8\xe8\xbd\xac\xe7\xa7\xbb\xe3\x80\x81\xe9\xbc\xa0\xe6\xa0\x87\xe6\x9a\x82\xe5\xad\x98\xe7\xad\x89\xe6\xb5\x81\xe7\xa8\x8b\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefinition_MetaData[] = {
		{ "Category", "Inventory|Payload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xa9\xe5\x93\x81\xe5\xa0\x86\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe9\x9d\x99\xe6\x80\x81\xe7\x89\xa9\xe5\x93\x81\xe5\xae\x9a\xe4\xb9\x89\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryItemPayload.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xa9\xe5\x93\x81\xe5\xa0\x86\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe9\x9d\x99\xe6\x80\x81\xe7\x89\xa9\xe5\x93\x81\xe5\xae\x9a\xe4\xb9\x89\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemInstance_MetaData[] = {
		{ "Category", "Inventory|Payload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x8f\xaf\xe9\x80\x89\xe7\x9a\x84\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\x8a\xa8\xe6\x80\x81\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x9b\xe6\x99\xae\xe9\x80\x9a\xe6\x9d\x90\xe6\x96\x99\xe7\xad\x89\xe6\x97\xa0\xe7\x8a\xb6\xe6\x80\x81\xe7\x89\xa9\xe5\x93\x81\xe4\xbf\x9d\xe6\x8c\x81\xe4\xb8\xba\xe7\xa9\xba\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryItemPayload.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe9\x80\x89\xe7\x9a\x84\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\x8a\xa8\xe6\x80\x81\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x9b\xe6\x99\xae\xe9\x80\x9a\xe6\x9d\x90\xe6\x96\x99\xe7\xad\x89\xe6\x97\xa0\xe7\x8a\xb6\xe6\x80\x81\xe7\x89\xa9\xe5\x93\x81\xe4\xbf\x9d\xe6\x8c\x81\xe4\xb8\xba\xe7\xa9\xba\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Inventory|Payload" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xa9\xe5\x93\x81\xe5\xa0\x86\xe5\x8c\x85\xe5\x90\xab\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe9\x87\x8f\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryItemPayload.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xa9\xe5\x93\x81\xe5\xa0\x86\xe5\x8c\x85\xe5\x90\xab\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe9\x87\x8f\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDefinition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemPayload_Statics::NewProp_ItemDefinition = { "ItemDefinition", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemPayload, ItemDefinition), Z_Construct_UClass_UInventoryItemDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefinition_MetaData), NewProp_ItemDefinition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemPayload_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemPayload, ItemInstance), Z_Construct_UClass_UInventoryItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemInstance_MetaData), NewProp_ItemInstance_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FInventoryItemPayload_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemPayload, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemPayload_Statics::NewProp_ItemDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemPayload_Statics::NewProp_ItemInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemPayload_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryCore,
	nullptr,
	&NewStructOps,
	"InventoryItemPayload",
	Z_Construct_UScriptStruct_FInventoryItemPayload_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemPayload_Statics::PropPointers),
	sizeof(FInventoryItemPayload),
	alignof(FInventoryItemPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemPayload()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemPayload.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemPayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemPayload.InnerSingleton;
}
// End ScriptStruct FInventoryItemPayload

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryItemPayload_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryItemPayload::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemPayload_Statics::NewStructOps, TEXT("InventoryItemPayload"), &Z_Registration_Info_UScriptStruct_InventoryItemPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemPayload), 3232423075U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryItemPayload_h_984649615(TEXT("/Script/InventoryCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryItemPayload_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryItemPayload_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
