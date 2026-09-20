#include "Core/InventoryItemPayload.h"

#include "Item/InventoryItemDefinition.h"
#include "Item/InventoryItemInstance.h"

FInventoryItemPayload::FInventoryItemPayload(
	UInventoryItemDefinition* InItemDefinition,
	const int64 InQuantity,
	UInventoryItemInstance* InItemInstance)
	: ItemDefinition(InItemDefinition)
	, ItemInstance(InItemInstance)
	, Quantity(InQuantity)
{
}

bool FInventoryItemPayload::IsEmpty() const
{
	return ItemDefinition == nullptr
		&& ItemInstance == nullptr
		&& Quantity == 0;
}

bool FInventoryItemPayload::IsValid() const
{
	if (!::IsValid(ItemDefinition) || Quantity <= 0)
	{
		return false;
	}

	if (ItemDefinition->RequiresItemInstance())
	{
		return ::IsValid(ItemInstance) && (ItemInstance->GetItemDefinition() == ItemDefinition) && (Quantity == 1);
	}

	return ItemInstance == nullptr;
}

bool FInventoryItemPayload::IsWellFormed() const
{
	return IsEmpty() || IsValid();
}

void FInventoryItemPayload::Reset()
{
	ItemDefinition = nullptr;
	ItemInstance = nullptr;
	Quantity = 0;
}

bool FInventoryItemPayload::CanStack(const FInventoryItemPayload& A, const FInventoryItemPayload& B)
{
 return A.IsValid() && B.IsValid() && A.ItemDefinition == B.ItemDefinition
  && A.ItemInstance == nullptr && B.ItemInstance == nullptr;
}
