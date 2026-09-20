// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/InventoryItemDefinition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventoryItemFragment;
class UInventoryItemInstance;
class UObject;
struct FInventoryItemPayload;
#ifdef INVENTORYCORE_InventoryItemDefinition_generated_h
#error "InventoryItemDefinition.generated.h already included, missing '#pragma once' in InventoryItemDefinition.h"
#endif
#define INVENTORYCORE_InventoryItemDefinition_generated_h

#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Item_InventoryItemDefinition_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetMaxStackSize); \
	DECLARE_FUNCTION(execCreateItemInstance); \
	DECLARE_FUNCTION(execRequiresItemInstance); \
	DECLARE_FUNCTION(execCreateItemPayload); \
	DECLARE_FUNCTION(execFindFragmentByClass);


#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Item_InventoryItemDefinition_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryItemDefinition(); \
	friend struct Z_Construct_UClass_UInventoryItemDefinition_Statics; \
public: \
	DECLARE_CLASS(UInventoryItemDefinition, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryCore"), NO_API) \
	DECLARE_SERIALIZER(UInventoryItemDefinition) \
	virtual UObject* _getUObject() const override { return const_cast<UInventoryItemDefinition*>(this); }


#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Item_InventoryItemDefinition_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryItemDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryItemDefinition(UInventoryItemDefinition&&); \
	UInventoryItemDefinition(const UInventoryItemDefinition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryItemDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryItemDefinition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryItemDefinition) \
	NO_API virtual ~UInventoryItemDefinition();


#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Item_InventoryItemDefinition_h_20_PROLOG
#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Item_InventoryItemDefinition_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Item_InventoryItemDefinition_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Item_InventoryItemDefinition_h_23_INCLASS_NO_PURE_DECLS \
	FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Item_InventoryItemDefinition_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYCORE_API UClass* StaticClass<class UInventoryItemDefinition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Item_InventoryItemDefinition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
