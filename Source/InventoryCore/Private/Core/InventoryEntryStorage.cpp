#include "Core/InventoryEntryStorage.h"
const FInventoryEntry* InventoryCore::Find(const TArray<FInventoryEntry>& Entries, int32 ID)
{
 return ID < 0 ? nullptr : Entries.FindByPredicate([ID](const FInventoryEntry& E) { return E.EntryID == ID; });
}
FInventoryEntry* InventoryCore::Find(TArray<FInventoryEntry>& Entries, int32 ID)
{
 return ID < 0 ? nullptr : Entries.FindByPredicate([ID](const FInventoryEntry& E) { return E.EntryID == ID; });
}
int32 InventoryCore::AllocateEntryID(int64& NextID)
{
 if (NextID < 0 || NextID > MAX_int32)
 {
  ensureMsgf(false, TEXT("Inventory entry ID space exhausted"));
  return INDEX_NONE;
 }
 return static_cast<int32>(NextID++);
}
int32 InventoryCore::AddEntry(TArray<FInventoryEntry>& Entries, int64& NextID, const FInventoryItemPayload& Payload)
{
 if (!Payload.IsWellFormed()) return INDEX_NONE;
 const int32 ID = AllocateEntryID(NextID);
 if (ID != INDEX_NONE) Entries.Emplace(Payload, ID);
 return ID;
}
bool InventoryCore::RemoveEntry(TArray<FInventoryEntry>& Entries, int32 ID)
{
 if (ID < 0) return false;
 const int32 Index = Entries.IndexOfByPredicate([ID](const FInventoryEntry& E) { return E.EntryID == ID; });
 if (Index == INDEX_NONE) return false;
 Entries.RemoveAt(Index);
 return true;
}
void InventoryCore::RebuildEntries(TArray<FInventoryEntry>& Entries, int64& NextID)
{
	int64 HighestEntryID = INDEX_NONE;
	for (const FInventoryEntry& Entry : Entries)
	{
		if (Entry.EntryID >= 0)
		{
			HighestEntryID = FMath::Max<int64>(HighestEntryID, Entry.EntryID);
		}
	}
	NextID = FMath::Max(NextID, HighestEntryID + 1);

	TSet<int32> UsedEntryIDs;
	for (FInventoryEntry& Entry : Entries)
	{
		if (!Entry.Payload.IsWellFormed())
		{
			ensureMsgf(false, TEXT("Inventory entry %d contains a malformed payload"), Entry.EntryID);
			Entry.Payload.Reset();
		}

		if (Entry.EntryID < 0 || UsedEntryIDs.Contains(Entry.EntryID))
		{
			Entry.EntryID = AllocateEntryID(NextID);
		}

		if (Entry.EntryID >= 0)
		{
			UsedEntryIDs.Add(Entry.EntryID);
		}
	}
}

const FInventoryEntry* InventoryCore::Resolve(const TArray<FInventoryEntry>& Entries,
	const FGuid& InventoryID, const FInventoryHandle& Handle)
{
	return Handle.IsSet() && Handle.GetInventoryID() == InventoryID
		? Find(Entries, Handle.GetEntryID()) : nullptr;
}

FInventoryEntry* InventoryCore::Resolve(TArray<FInventoryEntry>& Entries,
	const FGuid& InventoryID, const FInventoryHandle& Handle)
{
	return Handle.IsSet() && Handle.GetInventoryID() == InventoryID
		? Find(Entries, Handle.GetEntryID()) : nullptr;
}
