#pragma once
#include "Core/InventoryOperationResult.h"
/** Value operations. Owning storage must retain payload references for GC. */
namespace InventoryCore
{
 INVENTORYCORE_API bool TryAddQuantity(int64 Current, int64 Added, int64& OutQuantity);
 INVENTORYCORE_API FInventoryOperationResult Add(FInventoryItemPayload& Target,
  const FInventoryItemPayload& Input, int64 Capacity = MAX_int64);
 INVENTORYCORE_API FInventoryOperationResult Remove(FInventoryItemPayload& Source,
  int64 Quantity, bool bAllowPartial = true);
}
