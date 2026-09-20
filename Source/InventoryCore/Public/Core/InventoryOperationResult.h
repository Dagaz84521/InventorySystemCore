#pragma once
#include "CoreMinimal.h"
#include "Core/InventoryItemPayload.h"
#include "InventoryOperationResult.generated.h"
UENUM(BlueprintType)
enum class EInventoryQuantityOperationStatus : uint8
{
	Failed UMETA(DisplayName = "失败"),
	PartialSucceeded UMETA(DisplayName = "部分成功"),
	Succeeded UMETA(DisplayName = "成功")
};

UENUM(BlueprintType)
enum class EInventoryFailureReason : uint8
{
 None, InvalidPayload, InvalidQuantity, NotFound, InsufficientQuantity,
 CapacityExceeded, QuantityOverflow, Rejected
};
/** Domain result, independent of component handles and placement. */
USTRUCT(BlueprintType)
struct INVENTORYCORE_API FInventoryOperationResult
{
 GENERATED_BODY()
 UPROPERTY(BlueprintReadOnly, Category="Inventory|Operation")
 EInventoryQuantityOperationStatus Status = EInventoryQuantityOperationStatus::Failed;
 UPROPERTY(BlueprintReadOnly, Category="Inventory|Operation")
 int64 RequestedQuantity = 0;
 UPROPERTY(BlueprintReadOnly, Category="Inventory|Operation")
 int64 ChangedQuantity = 0;
 UPROPERTY(BlueprintReadOnly, Category="Inventory|Operation")
 int64 RemainingQuantity = 0;
 /** Add returns unaccepted input; Remove returns extracted items. */
 UPROPERTY(BlueprintReadOnly, Category="Inventory|Operation")
 FInventoryItemPayload OutputPayload;
 UPROPERTY(BlueprintReadOnly, Category="Inventory|Operation")
 EInventoryFailureReason FailureReason = EInventoryFailureReason::Rejected;
 bool HasOutputPayload() const { return OutputPayload.IsValid(); }
};
