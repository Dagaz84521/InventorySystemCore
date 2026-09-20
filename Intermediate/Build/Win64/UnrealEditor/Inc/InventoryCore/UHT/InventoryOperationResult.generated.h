// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/InventoryOperationResult.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYCORE_InventoryOperationResult_generated_h
#error "InventoryOperationResult.generated.h already included, missing '#pragma once' in InventoryOperationResult.h"
#endif
#define INVENTORYCORE_InventoryOperationResult_generated_h

#define FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryOperationResult_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryOperationResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> INVENTORYCORE_API UScriptStruct* StaticStruct<struct FInventoryOperationResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Public_Core_InventoryOperationResult_h


#define FOREACH_ENUM_EINVENTORYQUANTITYOPERATIONSTATUS(op) \
	op(EInventoryQuantityOperationStatus::Failed) \
	op(EInventoryQuantityOperationStatus::PartialSucceeded) \
	op(EInventoryQuantityOperationStatus::Succeeded) 

enum class EInventoryQuantityOperationStatus : uint8;
template<> struct TIsUEnumClass<EInventoryQuantityOperationStatus> { enum { Value = true }; };
template<> INVENTORYCORE_API UEnum* StaticEnum<EInventoryQuantityOperationStatus>();

#define FOREACH_ENUM_EINVENTORYFAILUREREASON(op) \
	op(EInventoryFailureReason::None) \
	op(EInventoryFailureReason::InvalidPayload) \
	op(EInventoryFailureReason::InvalidQuantity) \
	op(EInventoryFailureReason::NotFound) \
	op(EInventoryFailureReason::InsufficientQuantity) \
	op(EInventoryFailureReason::CapacityExceeded) \
	op(EInventoryFailureReason::QuantityOverflow) \
	op(EInventoryFailureReason::Rejected) 

enum class EInventoryFailureReason : uint8;
template<> struct TIsUEnumClass<EInventoryFailureReason> { enum { Value = true }; };
template<> INVENTORYCORE_API UEnum* StaticEnum<EInventoryFailureReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
