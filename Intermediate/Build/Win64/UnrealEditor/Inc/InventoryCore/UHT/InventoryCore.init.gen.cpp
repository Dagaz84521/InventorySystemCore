// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryCore_init() {}
	INVENTORYCORE_API UFunction* Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature();
	INVENTORYCORE_API UFunction* Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature();
	INVENTORYCORE_API UFunction* Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature();
	INVENTORYCORE_API UFunction* Z_Construct_UDelegateFunction_InventoryCore_InventoryResetDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InventoryCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InventoryCore()
	{
		if (!Z_Registration_Info_UPackage__Script_InventoryCore.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryAddedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventoryCore_InventoryEntryRemovedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventoryCore_InventoryResetDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InventoryCore",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x814D74B6,
				0x53DFF8B8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InventoryCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InventoryCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InventoryCore(Z_Construct_UPackage__Script_InventoryCore, TEXT("/Script/InventoryCore"), Z_Registration_Info_UPackage__Script_InventoryCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x814D74B6, 0x53DFF8B8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
