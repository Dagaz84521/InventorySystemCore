#pragma once

#include "Core/InventoryComponent.h"
#include "InventoryCoreTestComponent.generated.h"

/** Test-only derived storage: no Aggregate, Slotted, UI, or PackSystemPlugin dependency. */
UCLASS(Transient, NotBlueprintable)
class UInventoryCoreTestComponent : public UInventoryComponent
{
	GENERATED_BODY()

public:
	using UInventoryComponent::CreateEntryID;
	using UInventoryComponent::FindEntryByID;
	using UInventoryComponent::SetEntryPayloadByID;
	using UInventoryComponent::RemoveEntryByID;
	using UInventoryComponent::MakeEntryHandle;
	using UInventoryComponent::SetEntryPayload;
	using UInventoryComponent::RemoveEntry;
	using UInventoryComponent::ClearEntry;

	void ObserveChanges()
	{
		OnEntryAdded.AddDynamic(this, &ThisClass::RecordAdded);
		OnEntryChanged.AddDynamic(this, &ThisClass::RecordChanged);
		OnEntryRemoved.AddDynamic(this, &ThisClass::RecordRemoved);
	}

	int32 AddedCount = 0;
	int32 ChangedCount = 0;
	int32 RemovedCount = 0;
	bool bEventsObserveCommittedState = true;
	FInventoryItemPayload LastChangedPayload;

private:
	UFUNCTION()
	void RecordAdded(FInventoryEntryHandle Handle)
	{
		++AddedCount;
		bEventsObserveCommittedState &= Handle.ParentInventory == this && FindEntry(Handle) != nullptr;
	}

	UFUNCTION()
	void RecordChanged(FInventoryEntryHandle Handle)
	{
		++ChangedCount;
		FInventoryEntry Entry;
		bEventsObserveCommittedState &= Handle.ParentInventory == this && GetEntry(Handle, Entry);
		LastChangedPayload = Entry.Payload;
	}

	UFUNCTION()
	void RecordRemoved(FInventoryEntryHandle Handle)
	{
		++RemovedCount;
		bEventsObserveCommittedState &= Handle.ParentInventory == this && FindEntry(Handle) == nullptr;
	}
};
