// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/InventoryCoreTestComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventoryEntryHandle;
#ifdef INVENTORYCORE_InventoryCoreTestComponent_generated_h
#error "InventoryCoreTestComponent.generated.h already included, missing '#pragma once' in InventoryCoreTestComponent.h"
#endif
#define INVENTORYCORE_InventoryCoreTestComponent_generated_h

#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Private_Tests_InventoryCoreTestComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRecordRemoved); \
	DECLARE_FUNCTION(execRecordChanged); \
	DECLARE_FUNCTION(execRecordAdded);


#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Private_Tests_InventoryCoreTestComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryCoreTestComponent(); \
	friend struct Z_Construct_UClass_UInventoryCoreTestComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryCoreTestComponent, UInventoryComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryCore"), NO_API) \
	DECLARE_SERIALIZER(UInventoryCoreTestComponent)


#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Private_Tests_InventoryCoreTestComponent_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryCoreTestComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryCoreTestComponent(UInventoryCoreTestComponent&&); \
	UInventoryCoreTestComponent(const UInventoryCoreTestComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryCoreTestComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryCoreTestComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryCoreTestComponent) \
	NO_API virtual ~UInventoryCoreTestComponent();


#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Private_Tests_InventoryCoreTestComponent_h_7_PROLOG
#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Private_Tests_InventoryCoreTestComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Private_Tests_InventoryCoreTestComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Private_Tests_InventoryCoreTestComponent_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Private_Tests_InventoryCoreTestComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYCORE_API UClass* StaticClass<class UInventoryCoreTestComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Private_Tests_InventoryCoreTestComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
