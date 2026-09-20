#include "Core/InventoryEntryArray.h"
#include "Core/InventoryComponent.h"

bool FInventoryEntryHandle::IsValid() const
{
	return ::IsValid(ParentInventory.Get()) && ParentInventory->IsValidEntryHandle(*this);
}

FInventoryHandle FInventoryEntryHandle::ToCoreHandle() const
{
	return IsSet() && ::IsValid(ParentInventory.Get())
		? FInventoryHandle(ParentInventory->GetInventoryIdentity(), EntryID) : FInventoryHandle();
}
