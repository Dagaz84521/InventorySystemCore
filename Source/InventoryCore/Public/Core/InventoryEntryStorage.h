#pragma once
#include "Core/InventoryEntry.h"
/** Storage algorithms over caller-owned reflected entries. IDs are local to that storage.
 * The adapter validates ownership and emits events after mutations.
 */
namespace InventoryCore
{
	/** Local-ID operations: the caller has already selected and validated the owning inventory. */
	 INVENTORYCORE_API const FInventoryEntry* Find(const TArray<FInventoryEntry>& Entries, int32 ID);
	 INVENTORYCORE_API FInventoryEntry* Find(TArray<FInventoryEntry>& Entries, int32 ID);
	 INVENTORYCORE_API int32 AddEntry(TArray<FInventoryEntry>& Entries, int64& NextID, const FInventoryItemPayload& Payload);
	 INVENTORYCORE_API bool RemoveEntry(TArray<FInventoryEntry>& Entries, int32 ID);
	 INVENTORYCORE_API int32 AllocateEntryID(int64& NextID);
	 /** Preserves the allocation high-water mark. Never reset NextID within one inventory lifetime. */
	 INVENTORYCORE_API void RebuildEntries(TArray<FInventoryEntry>& Entries, int64& NextID);
}
