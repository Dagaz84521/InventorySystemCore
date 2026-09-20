// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryCore/Public/Core/InventoryComponent.h"
#include "InventoryCore/Public/Core/InventoryEntry.h"
#include "InventoryCore/Public/Core/InventoryEntryArray.h"
#include "InventoryCore/Public/Core/InventoryHandle.h"
#include "InventoryCore/Public/Core/InventoryItemPayload.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORYCORE_API UClass* Z_Construct_UClass_UInventoryComponent();
INVENTORYCORE_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
INVENTORYCORE_API UFunction* Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature();
INVENTORYCORE_API UFunction* Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature();
INVENTORYCORE_API UFunction* Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature();
INVENTORYCORE_API UFunction* Z_Construct_UDelegateFunction_InventoryCore_InventoryResetDelegate__DelegateSignature();
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryEntry();
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryEntryArray();
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryEntryHandle();
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryHandle();
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemPayload();
UPackage* Z_Construct_UPackage__Script_InventoryCore();
// End Cross Module References

// Begin Delegate FInventoryEntryAddedDelegate
struct Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature_Statics
{
	struct _Script_InventoryCore_eventInventoryEntryAddedDelegate_Parms
	{
		FInventoryEntryHandle EntryHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * InventoryCore \xe6\x8f\x90\xe4\xbe\x9b\xe7\x9a\x84\xe5\xae\x8c\xe6\x95\xb4\xe5\xba\x93\xe5\xad\x98\xe5\xad\x98\xe5\x82\xa8\xe5\x9f\xba\xe7\xb1\xbb\xef\xbc\x8c\xe5\x8f\xaf\xe7\x94\xb1\xe4\xbb\xbb\xe6\x84\x8f\xe4\xb8\x8a\xe5\xb1\x82\xe6\xa8\xa1\xe5\x9d\x97\xe6\xb4\xbe\xe7\x94\x9f\xe3\x80\x82\n *\n * \xe8\xaf\xa5\xe7\xb1\xbb\xe8\xb4\x9f\xe8\xb4\xa3\xe7\xae\xa1\xe7\x90\x86 Entry \xe5\x8f\x8a\xe5\x85\xb6\xe7\xa8\xb3\xe5\xae\x9a Handle\xef\xbc\x8c\xe4\xbd\x86\xe4\xb8\x8d\xe5\xae\x9a\xe4\xb9\x89\xe5\xa0\x86\xe5\x8f\xa0\xe3\x80\x81\xe6\xa7\xbd\xe4\xbd\x8d\xe6\x94\xbe\xe7\xbd\xae\xe3\x80\x81\xe5\xae\xb9\xe9\x87\x8f\xe3\x80\x81\n * \xe7\x89\xa9\xe5\x93\x81\xe6\x8e\xa5\xe6\x94\xb6\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xad\x89\xe5\x85\xb7\xe4\xbd\x93\xe5\xad\x98\xe5\x82\xa8\xe8\xa7\x84\xe5\x88\x99\xe3\x80\x82\xe6\xb4\xbe\xe7\x94\x9f\xe7\xbb\x84\xe4\xbb\xb6\xe9\x80\x9a\xe8\xbf\x87\xe5\x8f\x97\xe4\xbf\x9d\xe6\x8a\xa4\xe7\x9a\x84 Entry \xe4\xbf\xae\xe6\x94\xb9\xe6\x8e\xa5\xe5\x8f\xa3\xe5\xae\x9e\xe7\x8e\xb0\xe8\xbf\x99\xe4\xba\x9b\xe8\xa7\x84\xe5\x88\x99\xe3\x80\x82\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InventoryCore \xe6\x8f\x90\xe4\xbe\x9b\xe7\x9a\x84\xe5\xae\x8c\xe6\x95\xb4\xe5\xba\x93\xe5\xad\x98\xe5\xad\x98\xe5\x82\xa8\xe5\x9f\xba\xe7\xb1\xbb\xef\xbc\x8c\xe5\x8f\xaf\xe7\x94\xb1\xe4\xbb\xbb\xe6\x84\x8f\xe4\xb8\x8a\xe5\xb1\x82\xe6\xa8\xa1\xe5\x9d\x97\xe6\xb4\xbe\xe7\x94\x9f\xe3\x80\x82\n\n\xe8\xaf\xa5\xe7\xb1\xbb\xe8\xb4\x9f\xe8\xb4\xa3\xe7\xae\xa1\xe7\x90\x86 Entry \xe5\x8f\x8a\xe5\x85\xb6\xe7\xa8\xb3\xe5\xae\x9a Handle\xef\xbc\x8c\xe4\xbd\x86\xe4\xb8\x8d\xe5\xae\x9a\xe4\xb9\x89\xe5\xa0\x86\xe5\x8f\xa0\xe3\x80\x81\xe6\xa7\xbd\xe4\xbd\x8d\xe6\x94\xbe\xe7\xbd\xae\xe3\x80\x81\xe5\xae\xb9\xe9\x87\x8f\xe3\x80\x81\n\xe7\x89\xa9\xe5\x93\x81\xe6\x8e\xa5\xe6\x94\xb6\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xad\x89\xe5\x85\xb7\xe4\xbd\x93\xe5\xad\x98\xe5\x82\xa8\xe8\xa7\x84\xe5\x88\x99\xe3\x80\x82\xe6\xb4\xbe\xe7\x94\x9f\xe7\xbb\x84\xe4\xbb\xb6\xe9\x80\x9a\xe8\xbf\x87\xe5\x8f\x97\xe4\xbf\x9d\xe6\x8a\xa4\xe7\x9a\x84 Entry \xe4\xbf\xae\xe6\x94\xb9\xe6\x8e\xa5\xe5\x8f\xa3\xe5\xae\x9e\xe7\x8e\xb0\xe8\xbf\x99\xe4\xba\x9b\xe8\xa7\x84\xe5\x88\x99\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature_Statics::NewProp_EntryHandle = { "EntryHandle", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryCore_eventInventoryEntryAddedDelegate_Parms, EntryHandle), Z_Construct_UScriptStruct_FInventoryEntryHandle, METADATA_PARAMS(0, nullptr) }; // 1568265631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature_Statics::NewProp_EntryHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryCore, nullptr, "InventoryEntryAddedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature_Statics::_Script_InventoryCore_eventInventoryEntryAddedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature_Statics::_Script_InventoryCore_eventInventoryEntryAddedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInventoryEntryAddedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InventoryEntryAddedDelegate, FInventoryEntryHandle EntryHandle)
{
	struct _Script_InventoryCore_eventInventoryEntryAddedDelegate_Parms
	{
		FInventoryEntryHandle EntryHandle;
	};
	_Script_InventoryCore_eventInventoryEntryAddedDelegate_Parms Parms;
	Parms.EntryHandle=EntryHandle;
	InventoryEntryAddedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInventoryEntryAddedDelegate

// Begin Delegate FInventoryEntryChangedDelegate
struct Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature_Statics
{
	struct _Script_InventoryCore_eventInventoryEntryChangedDelegate_Parms
	{
		FInventoryEntryHandle EntryHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Entry \xe5\x86\x85\xe5\xae\xb9\xe5\x8f\x98\xe5\x8c\x96\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entry \xe5\x86\x85\xe5\xae\xb9\xe5\x8f\x98\xe5\x8c\x96\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature_Statics::NewProp_EntryHandle = { "EntryHandle", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryCore_eventInventoryEntryChangedDelegate_Parms, EntryHandle), Z_Construct_UScriptStruct_FInventoryEntryHandle, METADATA_PARAMS(0, nullptr) }; // 1568265631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature_Statics::NewProp_EntryHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryCore, nullptr, "InventoryEntryChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature_Statics::_Script_InventoryCore_eventInventoryEntryChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature_Statics::_Script_InventoryCore_eventInventoryEntryChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInventoryEntryChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InventoryEntryChangedDelegate, FInventoryEntryHandle EntryHandle)
{
	struct _Script_InventoryCore_eventInventoryEntryChangedDelegate_Parms
	{
		FInventoryEntryHandle EntryHandle;
	};
	_Script_InventoryCore_eventInventoryEntryChangedDelegate_Parms Parms;
	Parms.EntryHandle=EntryHandle;
	InventoryEntryChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInventoryEntryChangedDelegate

// Begin Delegate FInventoryEntryRemovedDelegate
struct Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature_Statics
{
	struct _Script_InventoryCore_eventInventoryEntryRemovedDelegate_Parms
	{
		FInventoryEntryHandle EntryHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Entry \xe5\x88\xa0\xe9\x99\xa4\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entry \xe5\x88\xa0\xe9\x99\xa4\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature_Statics::NewProp_EntryHandle = { "EntryHandle", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryCore_eventInventoryEntryRemovedDelegate_Parms, EntryHandle), Z_Construct_UScriptStruct_FInventoryEntryHandle, METADATA_PARAMS(0, nullptr) }; // 1568265631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature_Statics::NewProp_EntryHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryCore, nullptr, "InventoryEntryRemovedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature_Statics::_Script_InventoryCore_eventInventoryEntryRemovedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature_Statics::_Script_InventoryCore_eventInventoryEntryRemovedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInventoryEntryRemovedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InventoryEntryRemovedDelegate, FInventoryEntryHandle EntryHandle)
{
	struct _Script_InventoryCore_eventInventoryEntryRemovedDelegate_Parms
	{
		FInventoryEntryHandle EntryHandle;
	};
	_Script_InventoryCore_eventInventoryEntryRemovedDelegate_Parms Parms;
	Parms.EntryHandle=EntryHandle;
	InventoryEntryRemovedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInventoryEntryRemovedDelegate

// Begin Delegate FInventoryResetDelegate
struct Z_Construct_UDelegateFunction_InventoryCore_InventoryResetDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\x83\x8c\xe5\x8c\x85\xe6\x95\xb4\xe4\xbd\x93\xe9\x87\x8d\xe5\xbb\xba\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe5\x8c\x85\xe6\x95\xb4\xe4\xbd\x93\xe9\x87\x8d\xe5\xbb\xba\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryCore_InventoryResetDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryCore, nullptr, "InventoryResetDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryCore_InventoryResetDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryCore_InventoryResetDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_InventoryCore_InventoryResetDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryCore_InventoryResetDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInventoryResetDelegate_DelegateWrapper(const FMulticastScriptDelegate& InventoryResetDelegate)
{
	InventoryResetDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FInventoryResetDelegate

// Begin Class UInventoryComponent Function ClearEntry
struct Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics
{
	struct InventoryComponent_eventClearEntry_Parms
	{
		FInventoryEntryHandle EntryHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Inventory|Internal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\xb8\x85\xe7\xa9\xba Entry \xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe5\x86\x85\xe5\xae\xb9\xef\xbc\x8c\xe5\x90\x8c\xe6\x97\xb6\xe4\xbf\x9d\xe6\x8c\x81\xe5\x85\xb6 Handle \xe6\x9c\x89\xe6\x95\x88\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\x85\xe7\xa9\xba Entry \xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe5\x86\x85\xe5\xae\xb9\xef\xbc\x8c\xe5\x90\x8c\xe6\x97\xb6\xe4\xbf\x9d\xe6\x8c\x81\xe5\x85\xb6 Handle \xe6\x9c\x89\xe6\x95\x88\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics::NewProp_EntryHandle = { "EntryHandle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventClearEntry_Parms, EntryHandle), Z_Construct_UScriptStruct_FInventoryEntryHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryHandle_MetaData), NewProp_EntryHandle_MetaData) }; // 1568265631
void Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventClearEntry_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventClearEntry_Parms), &Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics::NewProp_EntryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ClearEntry", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics::InventoryComponent_eventClearEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics::InventoryComponent_eventClearEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_ClearEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ClearEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execClearEntry)
{
	P_GET_STRUCT_REF(FInventoryEntryHandle,Z_Param_Out_EntryHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ClearEntry(Z_Param_Out_EntryHandle);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function ClearEntry

// Begin Class UInventoryComponent Function CreateEntry
struct Z_Construct_UFunction_UInventoryComponent_CreateEntry_Statics
{
	struct InventoryComponent_eventCreateEntry_Parms
	{
		FInventoryItemPayload Payload;
		FInventoryEntryHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Inventory|Internal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x88\x9b\xe5\xbb\xba Entry\xef\xbc\x8c\xe5\xb9\xb6\xe5\x88\x86\xe9\x85\x8d\xe4\xb8\x80\xe4\xb8\xaa\xe5\x9c\xa8\xe5\xbd\x93\xe5\x89\x8d\xe7\xbb\x84\xe4\xbb\xb6\xe5\x86\x85\xe5\x94\xaf\xe4\xb8\x80\xe4\xb8\x94\xe7\xa8\xb3\xe5\xae\x9a\xe7\x9a\x84 ID\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9b\xe5\xbb\xba Entry\xef\xbc\x8c\xe5\xb9\xb6\xe5\x88\x86\xe9\x85\x8d\xe4\xb8\x80\xe4\xb8\xaa\xe5\x9c\xa8\xe5\xbd\x93\xe5\x89\x8d\xe7\xbb\x84\xe4\xbb\xb6\xe5\x86\x85\xe5\x94\xaf\xe4\xb8\x80\xe4\xb8\x94\xe7\xa8\xb3\xe5\xae\x9a\xe7\x9a\x84 ID\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_CreateEntry_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventCreateEntry_Parms, Payload), Z_Construct_UScriptStruct_FInventoryItemPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 3232423075
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_CreateEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventCreateEntry_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryEntryHandle, METADATA_PARAMS(0, nullptr) }; // 1568265631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_CreateEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CreateEntry_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CreateEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CreateEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_CreateEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "CreateEntry", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_CreateEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CreateEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_CreateEntry_Statics::InventoryComponent_eventCreateEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CreateEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_CreateEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_CreateEntry_Statics::InventoryComponent_eventCreateEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_CreateEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_CreateEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execCreateEntry)
{
	P_GET_STRUCT_REF(FInventoryItemPayload,Z_Param_Out_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryEntryHandle*)Z_Param__Result=P_THIS->CreateEntry(Z_Param_Out_Payload);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function CreateEntry

// Begin Class UInventoryComponent Function GetAllEntryHandles
struct Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles_Statics
{
	struct InventoryComponent_eventGetAllEntryHandles_Parms
	{
		TArray<FInventoryEntryHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xbf\x94\xe5\x9b\x9e\xe5\xbd\x93\xe5\x89\x8d\xe8\x83\x8c\xe5\x8c\x85\xe6\x8b\xa5\xe6\x9c\x89\xe7\x9a\x84\xe5\x85\xa8\xe9\x83\xa8 Entry Handle\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x94\xe5\x9b\x9e\xe5\xbd\x93\xe5\x89\x8d\xe8\x83\x8c\xe5\x8c\x85\xe6\x8b\xa5\xe6\x9c\x89\xe7\x9a\x84\xe5\x85\xa8\xe9\x83\xa8 Entry Handle\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryEntryHandle, METADATA_PARAMS(0, nullptr) }; // 1568265631
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetAllEntryHandles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1568265631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetAllEntryHandles", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles_Statics::InventoryComponent_eventGetAllEntryHandles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles_Statics::InventoryComponent_eventGetAllEntryHandles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetAllEntryHandles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInventoryEntryHandle>*)Z_Param__Result=P_THIS->GetAllEntryHandles();
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetAllEntryHandles

// Begin Class UInventoryComponent Function GetCoreHandle
struct Z_Construct_UFunction_UInventoryComponent_GetCoreHandle_Statics
{
	struct InventoryComponent_eventGetCoreHandle_Parms
	{
		FInventoryEntryHandle Handle;
		FInventoryHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns unset for a foreign or removed component handle. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns unset for a foreign or removed component handle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetCoreHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetCoreHandle_Parms, Handle), Z_Construct_UScriptStruct_FInventoryEntryHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 1568265631
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetCoreHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetCoreHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryHandle, METADATA_PARAMS(0, nullptr) }; // 227002016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetCoreHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetCoreHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetCoreHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCoreHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetCoreHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetCoreHandle", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetCoreHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCoreHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetCoreHandle_Statics::InventoryComponent_eventGetCoreHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCoreHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetCoreHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetCoreHandle_Statics::InventoryComponent_eventGetCoreHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetCoreHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetCoreHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetCoreHandle)
{
	P_GET_STRUCT_REF(FInventoryEntryHandle,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryHandle*)Z_Param__Result=P_THIS->GetCoreHandle(Z_Param_Out_Handle);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetCoreHandle

// Begin Class UInventoryComponent Function GetEntry
struct Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics
{
	struct InventoryComponent_eventGetEntry_Parms
	{
		FInventoryEntryHandle EntryHandle;
		FInventoryEntry OutEntry;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xbe\x9b\xe8\x93\x9d\xe5\x9b\xbe\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84 Entry \xe6\x9f\xa5\xe8\xaf\xa2\xe6\x8e\xa5\xe5\x8f\xa3\xef\xbc\x9bHandle \xe6\x97\xa0\xe6\x95\x88\xe6\x97\xb6\xe4\xbc\x9a\xe9\x87\x8d\xe7\xbd\xae OutEntry\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbe\x9b\xe8\x93\x9d\xe5\x9b\xbe\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84 Entry \xe6\x9f\xa5\xe8\xaf\xa2\xe6\x8e\xa5\xe5\x8f\xa3\xef\xbc\x9bHandle \xe6\x97\xa0\xe6\x95\x88\xe6\x97\xb6\xe4\xbc\x9a\xe9\x87\x8d\xe7\xbd\xae OutEntry\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutEntry;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::NewProp_EntryHandle = { "EntryHandle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetEntry_Parms, EntryHandle), Z_Construct_UScriptStruct_FInventoryEntryHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryHandle_MetaData), NewProp_EntryHandle_MetaData) }; // 1568265631
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::NewProp_OutEntry = { "OutEntry", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetEntry_Parms, OutEntry), Z_Construct_UScriptStruct_FInventoryEntry, METADATA_PARAMS(0, nullptr) }; // 3510699039
void Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventGetEntry_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventGetEntry_Parms), &Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::NewProp_EntryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::NewProp_OutEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetEntry", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::InventoryComponent_eventGetEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::InventoryComponent_eventGetEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetEntry)
{
	P_GET_STRUCT_REF(FInventoryEntryHandle,Z_Param_Out_EntryHandle);
	P_GET_STRUCT_REF(FInventoryEntry,Z_Param_Out_OutEntry);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEntry(Z_Param_Out_EntryHandle,Z_Param_Out_OutEntry);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetEntry

// Begin Class UInventoryComponent Function GetEntryByCoreHandle
struct Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics
{
	struct InventoryComponent_eventGetEntryByCoreHandle_Parms
	{
		FInventoryHandle Handle;
		FInventoryEntry OutEntry;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutEntry;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetEntryByCoreHandle_Parms, Handle), Z_Construct_UScriptStruct_FInventoryHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 227002016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::NewProp_OutEntry = { "OutEntry", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetEntryByCoreHandle_Parms, OutEntry), Z_Construct_UScriptStruct_FInventoryEntry, METADATA_PARAMS(0, nullptr) }; // 3510699039
void Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventGetEntryByCoreHandle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventGetEntryByCoreHandle_Parms), &Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::NewProp_OutEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetEntryByCoreHandle", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::InventoryComponent_eventGetEntryByCoreHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::InventoryComponent_eventGetEntryByCoreHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetEntryByCoreHandle)
{
	P_GET_STRUCT_REF(FInventoryHandle,Z_Param_Out_Handle);
	P_GET_STRUCT_REF(FInventoryEntry,Z_Param_Out_OutEntry);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEntryByCoreHandle(Z_Param_Out_Handle,Z_Param_Out_OutEntry);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetEntryByCoreHandle

// Begin Class UInventoryComponent Function IsValidEntryHandle
struct Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics
{
	struct InventoryComponent_eventIsValidEntryHandle_Parms
	{
		FInventoryEntryHandle EntryHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xbb\x85\xe5\xbd\x93 Handle \xe5\xb1\x9e\xe4\xba\x8e\xe5\xbd\x93\xe5\x89\x8d\xe8\x83\x8c\xe5\x8c\x85\xe4\xb8\x94\xe4\xbb\x8d\xe8\x83\xbd\xe8\xa7\xa3\xe6\x9e\x90\xe5\x88\xb0 Entry \xe6\x97\xb6\xe8\xbf\x94\xe5\x9b\x9e true\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x85\xe5\xbd\x93 Handle \xe5\xb1\x9e\xe4\xba\x8e\xe5\xbd\x93\xe5\x89\x8d\xe8\x83\x8c\xe5\x8c\x85\xe4\xb8\x94\xe4\xbb\x8d\xe8\x83\xbd\xe8\xa7\xa3\xe6\x9e\x90\xe5\x88\xb0 Entry \xe6\x97\xb6\xe8\xbf\x94\xe5\x9b\x9e true\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics::NewProp_EntryHandle = { "EntryHandle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventIsValidEntryHandle_Parms, EntryHandle), Z_Construct_UScriptStruct_FInventoryEntryHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryHandle_MetaData), NewProp_EntryHandle_MetaData) }; // 1568265631
void Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventIsValidEntryHandle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventIsValidEntryHandle_Parms), &Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics::NewProp_EntryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "IsValidEntryHandle", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics::InventoryComponent_eventIsValidEntryHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics::InventoryComponent_eventIsValidEntryHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execIsValidEntryHandle)
{
	P_GET_STRUCT_REF(FInventoryEntryHandle,Z_Param_Out_EntryHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidEntryHandle(Z_Param_Out_EntryHandle);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function IsValidEntryHandle

// Begin Class UInventoryComponent Function MakeEntryHandle
struct Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle_Statics
{
	struct InventoryComponent_eventMakeEntryHandle_Parms
	{
		int32 EntryID;
		FInventoryEntryHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Inventory|Internal" },
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntryID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle_Statics::NewProp_EntryID = { "EntryID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventMakeEntryHandle_Parms, EntryID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventMakeEntryHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryEntryHandle, METADATA_PARAMS(0, nullptr) }; // 1568265631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle_Statics::NewProp_EntryID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "MakeEntryHandle", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle_Statics::InventoryComponent_eventMakeEntryHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle_Statics::InventoryComponent_eventMakeEntryHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execMakeEntryHandle)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EntryID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryEntryHandle*)Z_Param__Result=P_THIS->MakeEntryHandle(Z_Param_EntryID);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function MakeEntryHandle

// Begin Class UInventoryComponent Function RemoveEntry
struct Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics
{
	struct InventoryComponent_eventRemoveEntry_Parms
	{
		FInventoryEntryHandle EntryHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Inventory|Internal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x88\xa0\xe9\x99\xa4 Handle \xe6\xa0\x87\xe8\xaf\x86\xe7\x9a\x84 Entry\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\xa0\xe9\x99\xa4 Handle \xe6\xa0\x87\xe8\xaf\x86\xe7\x9a\x84 Entry\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics::NewProp_EntryHandle = { "EntryHandle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveEntry_Parms, EntryHandle), Z_Construct_UScriptStruct_FInventoryEntryHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryHandle_MetaData), NewProp_EntryHandle_MetaData) }; // 1568265631
void Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventRemoveEntry_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventRemoveEntry_Parms), &Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics::NewProp_EntryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveEntry", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics::InventoryComponent_eventRemoveEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics::InventoryComponent_eventRemoveEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRemoveEntry)
{
	P_GET_STRUCT_REF(FInventoryEntryHandle,Z_Param_Out_EntryHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveEntry(Z_Param_Out_EntryHandle);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function RemoveEntry

// Begin Class UInventoryComponent Function SetEntryPayload
struct Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics
{
	struct InventoryComponent_eventSetEntryPayload_Parms
	{
		FInventoryEntryHandle EntryHandle;
		FInventoryItemPayload Payload;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Inventory|Internal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x9b\xbf\xe6\x8d\xa2 Entry \xe7\x9a\x84\xe5\xae\x8c\xe6\x95\xb4\xe7\x89\xa9\xe5\x93\x81\xe5\x86\x85\xe5\xae\xb9\xef\xbc\x8c\xe5\x90\x8c\xe6\x97\xb6\xe4\xbf\x9d\xe7\x95\x99 Entry \xe6\x9c\xac\xe8\xba\xab\xe7\x9a\x84\xe6\xa0\x87\xe8\xaf\x86\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xbf\xe6\x8d\xa2 Entry \xe7\x9a\x84\xe5\xae\x8c\xe6\x95\xb4\xe7\x89\xa9\xe5\x93\x81\xe5\x86\x85\xe5\xae\xb9\xef\xbc\x8c\xe5\x90\x8c\xe6\x97\xb6\xe4\xbf\x9d\xe7\x95\x99 Entry \xe6\x9c\xac\xe8\xba\xab\xe7\x9a\x84\xe6\xa0\x87\xe8\xaf\x86\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::NewProp_EntryHandle = { "EntryHandle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSetEntryPayload_Parms, EntryHandle), Z_Construct_UScriptStruct_FInventoryEntryHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryHandle_MetaData), NewProp_EntryHandle_MetaData) }; // 1568265631
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSetEntryPayload_Parms, Payload), Z_Construct_UScriptStruct_FInventoryItemPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 3232423075
void Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventSetEntryPayload_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventSetEntryPayload_Parms), &Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::NewProp_EntryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SetEntryPayload", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::InventoryComponent_eventSetEntryPayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::InventoryComponent_eventSetEntryPayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SetEntryPayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SetEntryPayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSetEntryPayload)
{
	P_GET_STRUCT_REF(FInventoryEntryHandle,Z_Param_Out_EntryHandle);
	P_GET_STRUCT_REF(FInventoryItemPayload,Z_Param_Out_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetEntryPayload(Z_Param_Out_EntryHandle,Z_Param_Out_Payload);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function SetEntryPayload

// Begin Class UInventoryComponent
void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
{
	UClass* Class = UInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearEntry", &UInventoryComponent::execClearEntry },
		{ "CreateEntry", &UInventoryComponent::execCreateEntry },
		{ "GetAllEntryHandles", &UInventoryComponent::execGetAllEntryHandles },
		{ "GetCoreHandle", &UInventoryComponent::execGetCoreHandle },
		{ "GetEntry", &UInventoryComponent::execGetEntry },
		{ "GetEntryByCoreHandle", &UInventoryComponent::execGetEntryByCoreHandle },
		{ "IsValidEntryHandle", &UInventoryComponent::execIsValidEntryHandle },
		{ "MakeEntryHandle", &UInventoryComponent::execMakeEntryHandle },
		{ "RemoveEntry", &UInventoryComponent::execRemoveEntry },
		{ "SetEntryPayload", &UInventoryComponent::execSetEntryPayload },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryComponent);
UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
{
	return UInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Inventory" },
		{ "IncludePath", "Core/InventoryComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEntryAdded_MetaData[] = {
		{ "Category", "Inventory|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x88\x9b\xe5\xbb\xba\xe4\xba\x86\xe6\x96\xb0\xe7\x9a\x84 Entry\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9b\xe5\xbb\xba\xe4\xba\x86\xe6\x96\xb0\xe7\x9a\x84 Entry\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEntryChanged_MetaData[] = {
		{ "Category", "Inventory|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xb7\xb2\xe6\x9c\x89 Entry \xe7\x9a\x84 Payload \xe5\x8f\x91\xe7\x94\x9f\xe5\x8f\x98\xe5\x8c\x96\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb7\xb2\xe6\x9c\x89 Entry \xe7\x9a\x84 Payload \xe5\x8f\x91\xe7\x94\x9f\xe5\x8f\x98\xe5\x8c\x96\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEntryRemoved_MetaData[] = {
		{ "Category", "Inventory|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Entry \xe5\xb7\xb2\xe8\xa2\xab\xe5\x88\xa0\xe9\x99\xa4\xef\xbc\x8c\xe6\xad\xa4\xe6\x97\xb6 Handle \xe5\xb7\xb2\xe7\xbb\x8f\xe4\xb8\x8d\xe8\x83\xbd\xe5\x86\x8d\xe8\xa7\xa3\xe6\x9e\x90\xe5\x88\xb0 Entry\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entry \xe5\xb7\xb2\xe8\xa2\xab\xe5\x88\xa0\xe9\x99\xa4\xef\xbc\x8c\xe6\xad\xa4\xe6\x97\xb6 Handle \xe5\xb7\xb2\xe7\xbb\x8f\xe4\xb8\x8d\xe8\x83\xbd\xe5\x86\x8d\xe8\xa7\xa3\xe6\x9e\x90\xe5\x88\xb0 Entry\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryReset_MetaData[] = {
		{ "Category", "Inventory|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\x83\x8c\xe5\x8c\x85\xe6\x95\xb0\xe6\x8d\xae\xe8\xa2\xab\xe6\x95\xb4\xe4\xbd\x93\xe9\x87\x8d\xe5\xbb\xba\xef\xbc\x8c\xe8\xae\xa2\xe9\x98\x85\xe8\x80\x85\xe5\xba\x94\xe9\x87\x8d\xe6\x96\xb0\xe6\x9f\xa5\xe8\xaf\xa2\xe8\xae\xb0\xe5\xbd\x95\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe5\x8c\x85\xe6\x95\xb0\xe6\x8d\xae\xe8\xa2\xab\xe6\x95\xb4\xe4\xbd\x93\xe9\x87\x8d\xe5\xbb\xba\xef\xbc\x8c\xe8\xae\xa2\xe9\x98\x85\xe8\x80\x85\xe5\xba\x94\xe9\x87\x8d\xe6\x96\xb0\xe6\x9f\xa5\xe8\xaf\xa2\xe8\xae\xb0\xe5\xbd\x95\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryArray_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEntryAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEntryChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEntryRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryReset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_ClearEntry, "ClearEntry" }, // 472218093
		{ &Z_Construct_UFunction_UInventoryComponent_CreateEntry, "CreateEntry" }, // 162254970
		{ &Z_Construct_UFunction_UInventoryComponent_GetAllEntryHandles, "GetAllEntryHandles" }, // 689512951
		{ &Z_Construct_UFunction_UInventoryComponent_GetCoreHandle, "GetCoreHandle" }, // 1279498318
		{ &Z_Construct_UFunction_UInventoryComponent_GetEntry, "GetEntry" }, // 2237770197
		{ &Z_Construct_UFunction_UInventoryComponent_GetEntryByCoreHandle, "GetEntryByCoreHandle" }, // 903355492
		{ &Z_Construct_UFunction_UInventoryComponent_IsValidEntryHandle, "IsValidEntryHandle" }, // 2743208248
		{ &Z_Construct_UFunction_UInventoryComponent_MakeEntryHandle, "MakeEntryHandle" }, // 1827884696
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveEntry, "RemoveEntry" }, // 3859816779
		{ &Z_Construct_UFunction_UInventoryComponent_SetEntryPayload, "SetEntryPayload" }, // 3770321032
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnEntryAdded = { "OnEntryAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnEntryAdded), Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEntryAdded_MetaData), NewProp_OnEntryAdded_MetaData) }; // 1237110826
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnEntryChanged = { "OnEntryChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnEntryChanged), Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEntryChanged_MetaData), NewProp_OnEntryChanged_MetaData) }; // 4262491524
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnEntryRemoved = { "OnEntryRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnEntryRemoved), Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEntryRemoved_MetaData), NewProp_OnEntryRemoved_MetaData) }; // 1230696715
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryReset = { "OnInventoryReset", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnInventoryReset), Z_Construct_UDelegateFunction_InventoryCore_InventoryResetDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryReset_MetaData), NewProp_OnInventoryReset_MetaData) }; // 3289559050
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EntryArray = { "EntryArray", nullptr, (EPropertyFlags)0x0020088000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, EntryArray), Z_Construct_UScriptStruct_FInventoryEntryArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryArray_MetaData), NewProp_EntryArray_MetaData) }; // 3630767471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnEntryAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnEntryChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnEntryRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryReset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EntryArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
	&UInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
}
template<> INVENTORYCORE_API UClass* StaticClass<UInventoryComponent>()
{
	return UInventoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
UInventoryComponent::~UInventoryComponent() {}
// End Class UInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 367838880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h_3843075334(TEXT("/Script/InventoryCore"),
	Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
