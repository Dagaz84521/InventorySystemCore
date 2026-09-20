#include "Core/InventoryEntryArray.h"
#include "Core/InventoryComponent.h"

bool FInventoryEntryHandle::IsValid() const
{
	return ::IsValid(ParentInventory.Get()) && ParentInventory->IsValidEntryHandle(*this);
}
