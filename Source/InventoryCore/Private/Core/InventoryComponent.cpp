#include "Core/InventoryComponent.h"
#include "Core/InventoryEntryStorage.h"

UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UInventoryComponent::OnRegister()
{
	Super::OnRegister();
	RebuildRuntimeState();
}

TArray<FInventoryEntryHandle> UInventoryComponent::GetAllEntryHandles() const
{
	TArray<FInventoryEntryHandle> Handles;
	Handles.Reserve(EntryArray.ItemEntries.Num());

	for (const FInventoryEntry& Entry : EntryArray.ItemEntries)
	{
		Handles.Emplace(Entry.EntryID, const_cast<UInventoryComponent*>(this));
	}

	return Handles;
}

bool UInventoryComponent::IsValidEntryHandle(const FInventoryEntryHandle& EntryHandle) const
{
	return FindEntry(EntryHandle) != nullptr;
}

bool UInventoryComponent::GetEntry(
	const FInventoryEntryHandle& EntryHandle,
	FInventoryEntry& OutEntry) const
{
	if (const FInventoryEntry* Entry = FindEntry(EntryHandle))
	{
		OutEntry = *Entry;
		return true;
	}

	OutEntry = FInventoryEntry();
	return false;
}

const FInventoryEntry* UInventoryComponent::FindEntry(
	const FInventoryEntryHandle& EntryHandle) const
{
	return EntryHandle.ParentInventory == this
		? FindEntryByID(EntryHandle.EntryID) : nullptr;
}

FInventoryEntry* UInventoryComponent::FindMutableEntry(
	const FInventoryEntryHandle& EntryHandle)
{
	return EntryHandle.ParentInventory == this
		? FindMutableEntryByID(EntryHandle.EntryID) : nullptr;
}

const FInventoryEntry* UInventoryComponent::FindEntryByID(int32 EntryID) const
{
	return InventoryCore::Find(EntryArray.ItemEntries, EntryID);
}

FInventoryEntry* UInventoryComponent::FindMutableEntryByID(int32 EntryID)
{
	return InventoryCore::Find(EntryArray.ItemEntries, EntryID);
}

FInventoryEntryHandle UInventoryComponent::CreateEntry(const FInventoryItemPayload& Payload)
{
	return MakeEntryHandle(CreateEntryID(Payload));
}

int32 UInventoryComponent::CreateEntryID(const FInventoryItemPayload& Payload)
{
	const int32 EntryID = InventoryCore::AddEntry(EntryArray.ItemEntries, NextEntryID, Payload);
	if (EntryID != INDEX_NONE)
	{
		OnEntryAdded.Broadcast(MakeEntryHandle(EntryID));
	}
	return EntryID;
}

bool UInventoryComponent::RemoveEntry(const FInventoryEntryHandle& EntryHandle)
{
	return EntryHandle.ParentInventory == this && RemoveEntryByID(EntryHandle.EntryID);
}

bool UInventoryComponent::RemoveEntryByID(int32 EntryID)
{
	if (!InventoryCore::RemoveEntry(EntryArray.ItemEntries, EntryID))
	{
		return false;
	}
	OnEntryRemoved.Broadcast(MakeEntryHandle(EntryID));
	return true;
}

bool UInventoryComponent::SetEntryPayload(const FInventoryEntryHandle& EntryHandle, const FInventoryItemPayload& Payload)
{
	return EntryHandle.ParentInventory == this && SetEntryPayloadByID(EntryHandle.EntryID, Payload);
}

bool UInventoryComponent::SetEntryPayloadByID(int32 EntryID, const FInventoryItemPayload& Payload)
{
	if (!Payload.IsWellFormed())
	{
		return false;
	}
	FInventoryEntry* Entry = FindMutableEntryByID(EntryID);
	if (Entry == nullptr)
	{
		return false;
	}
	if (Entry->Payload == Payload)
	{
		return true;
	}
	Entry->Payload = Payload;
	OnEntryChanged.Broadcast(MakeEntryHandle(EntryID));
	return true;
}

bool UInventoryComponent::ClearEntry(const FInventoryEntryHandle& EntryHandle)
{
	return SetEntryPayload(EntryHandle, FInventoryItemPayload());
}

FInventoryEntryHandle UInventoryComponent::MakeEntryHandle(int32 EntryID) const
{
	if (EntryID < 0)
	{
		return {};
	}

	return FInventoryEntryHandle(EntryID,const_cast<UInventoryComponent*>(this));
}

void UInventoryComponent::RebuildRuntimeState()
{
 InventoryCore::RebuildEntries(EntryArray.ItemEntries, NextEntryID);
 OnInventoryReset.Broadcast();
}
