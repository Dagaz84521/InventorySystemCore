#include "Core/InventoryOperations.h"
bool InventoryCore::TryAddQuantity(int64 Current, int64 Added, int64& OutQuantity)
{
 OutQuantity = 0;
 if (Current < 0 || Added <= 0 || Current > MAX_int64 - Added) return false;
 OutQuantity = Current + Added;
 return true;
}
FInventoryOperationResult InventoryCore::Add(FInventoryItemPayload& Target,
 const FInventoryItemPayload& Input, int64 Capacity)
{
 FInventoryOperationResult R;
 R.RequestedQuantity = FMath::Max<int64>(0, Input.Quantity);
 R.RemainingQuantity = R.RequestedQuantity;
 R.OutputPayload = Input;
 if (!Input.IsValid() || !Target.IsWellFormed())
 { R.FailureReason = EInventoryFailureReason::InvalidPayload; return R; }
 if (!Target.IsEmpty() && !FInventoryItemPayload::CanStack(Target, Input))
 { R.FailureReason = EInventoryFailureReason::Rejected; return R; }
 if (Capacity <= Target.Quantity)
 { R.FailureReason = EInventoryFailureReason::CapacityExceeded; return R; }
 const int64 Added = FMath::Min(Input.Quantity, Capacity - Target.Quantity);
 const int64 Total = Target.Quantity + Added;
 Target = Input;
 Target.Quantity = Total;
 R.ChangedQuantity = Added;
 R.RemainingQuantity -= Added;
 R.OutputPayload.Quantity = R.RemainingQuantity;
 if (!R.RemainingQuantity) R.OutputPayload.Reset();
 R.Status = R.RemainingQuantity ? EInventoryQuantityOperationStatus::PartialSucceeded : EInventoryQuantityOperationStatus::Succeeded;
 R.FailureReason = R.RemainingQuantity ? EInventoryFailureReason::CapacityExceeded : EInventoryFailureReason::None;
 return R;
}
FInventoryOperationResult InventoryCore::Remove(FInventoryItemPayload& Source,
 int64 Quantity, bool bAllowPartial)
{
 FInventoryOperationResult R;
 R.RequestedQuantity = FMath::Max<int64>(0, Quantity);
 R.RemainingQuantity = R.RequestedQuantity;
 if (Quantity <= 0) { R.FailureReason = EInventoryFailureReason::InvalidQuantity; return R; }
 if (!Source.IsValid()) { R.FailureReason = EInventoryFailureReason::InvalidPayload; return R; }
 if (!bAllowPartial && Source.Quantity < Quantity)
 { R.FailureReason = EInventoryFailureReason::InsufficientQuantity; return R; }
 R.ChangedQuantity = FMath::Min(Quantity, Source.Quantity);
 R.OutputPayload = Source;
 R.OutputPayload.Quantity = R.ChangedQuantity;
 Source.Quantity -= R.ChangedQuantity;
 if (!Source.Quantity) Source.Reset();
 R.RemainingQuantity -= R.ChangedQuantity;
 R.Status = R.RemainingQuantity ? EInventoryQuantityOperationStatus::PartialSucceeded : EInventoryQuantityOperationStatus::Succeeded;
 R.FailureReason = R.RemainingQuantity ? EInventoryFailureReason::InsufficientQuantity : EInventoryFailureReason::None;
 return R;
}
