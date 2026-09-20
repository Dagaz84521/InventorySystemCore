// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventoryEntry;
struct FInventoryEntryHandle;
struct FInventoryHandle;
struct FInventoryItemPayload;
#ifdef INVENTORYCORE_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define INVENTORYCORE_InventoryComponent_generated_h

#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h_17_DELEGATE \
INVENTORYCORE_API void FInventoryEntryAddedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InventoryEntryAddedDelegate, FInventoryEntryHandle EntryHandle);


#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h_20_DELEGATE \
INVENTORYCORE_API void FInventoryEntryChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InventoryEntryChangedDelegate, FInventoryEntryHandle EntryHandle);


#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h_23_DELEGATE \
INVENTORYCORE_API void FInventoryEntryRemovedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InventoryEntryRemovedDelegate, FInventoryEntryHandle EntryHandle);


#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h_26_DELEGATE \
INVENTORYCORE_API void FInventoryResetDelegate_DelegateWrapper(const FMulticastScriptDelegate& InventoryResetDelegate);


#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeEntryHandle); \
	DECLARE_FUNCTION(execClearEntry); \
	DECLARE_FUNCTION(execSetEntryPayload); \
	DECLARE_FUNCTION(execRemoveEntry); \
	DECLARE_FUNCTION(execCreateEntry); \
	DECLARE_FUNCTION(execGetEntry); \
	DECLARE_FUNCTION(execIsValidEntryHandle); \
	DECLARE_FUNCTION(execGetAllEntryHandles); \
	DECLARE_FUNCTION(execGetCoreHandle); \
	DECLARE_FUNCTION(execGetEntryByCoreHandle);


#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryCore"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryComponent(UInventoryComponent&&); \
	UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h_28_PROLOG
#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYCORE_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
