#pragma once
#include "CoreMinimal.h"
#include "Core/InventoryEntryArray.h"
#include "Core/InventoryOperationResult.h"
#include "InventoryQuantityOperationResult.generated.h"
/** Shared component operation result. The derived storage policy defines OutputPayload semantics. */
USTRUCT(BlueprintType)
struct INVENTORYCORE_API FInventoryQuantityOperationResult : public FInventoryOperationResult
{
 GENERATED_BODY()
 UPROPERTY(BlueprintReadOnly, Category="Inventory|Operation")
 FInventoryEntryHandle AffectedEntry;
 void Set(EInventoryQuantityOperationStatus status, int64 requestedQuantity, int64 changedQuantity,
  const FInventoryItemPayload& outputPayload, const FInventoryEntryHandle& affectedEntry)
 {
  Status = status;
  RequestedQuantity = requestedQuantity;
  ChangedQuantity = changedQuantity;
  OutputPayload = outputPayload;
  AffectedEntry = affectedEntry;
  RemainingQuantity = RequestedQuantity - ChangedQuantity;
  FailureReason = status == EInventoryQuantityOperationStatus::Succeeded
   ? EInventoryFailureReason::None : EInventoryFailureReason::Rejected;
 }
};
