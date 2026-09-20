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
 void Set(const FInventoryOperationResult& Result, const FInventoryEntryHandle& InAffectedEntry)
 {
  Status = Result.Status;
  RequestedQuantity = Result.RequestedQuantity;
  ChangedQuantity = Result.ChangedQuantity;
  RemainingQuantity = Result.RemainingQuantity;
  OutputPayload = Result.OutputPayload;
  FailureReason = Result.FailureReason;
  AffectedEntry = InAffectedEntry;
 }
};
