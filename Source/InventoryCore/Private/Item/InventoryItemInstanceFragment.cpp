#include "Item/InventoryItemInstanceFragment.h"
#include "Item/InventoryItemInstance.h"

UInventoryItemInstance* UInventoryItemInstanceFragment::GetItemInstance() const
{
	return Cast<UInventoryItemInstance>(GetOuter());
}
