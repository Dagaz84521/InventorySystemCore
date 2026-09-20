#pragma once

#include "CoreMinimal.h"
#include "Core/InventoryEntry.h"
#include "InventoryEntryArray.generated.h"

class UInventoryComponent;

USTRUCT(BlueprintType)
struct INVENTORYCORE_API FInventoryEntryArray
{
	GENERATED_BODY()

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Inventory")
	TArray<FInventoryEntry> ItemEntries;
};

/** 对指定背包组件所拥有 Entry 的稳定引用。 */
USTRUCT(BlueprintType)
struct INVENTORYCORE_API FInventoryEntryHandle
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Inventory")
	int32 EntryID = INDEX_NONE;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Inventory")
	TObjectPtr<UInventoryComponent> ParentInventory = nullptr;

	FInventoryEntryHandle() = default;

	FInventoryEntryHandle(const FInventoryEntry& Other, UInventoryComponent* Inventory)
		: EntryID(Other.EntryID)
		, ParentInventory(Inventory)
	{
	}

	FInventoryEntryHandle(const int32 InEntryID, UInventoryComponent* Inventory)
		: EntryID(InEntryID)
		, ParentInventory(Inventory)
	{
	}

	bool operator==(const FInventoryEntryHandle& Other) const
	{
		return EntryID == Other.EntryID && ParentInventory == Other.ParentInventory;
	}

	bool operator!=(const FInventoryEntryHandle& Other) const
	{
		return !(*this == Other);
	}

	bool IsSet() const
	{
		return EntryID >= 0 && ParentInventory != nullptr;
	}
	
	/** Resolves the record; unlike IsSet, rejects removed records and destroyed owners. */
	bool IsValid() const;

	void Reset() { *this = FInventoryEntryHandle(); }

	friend uint32 GetTypeHash(const FInventoryEntryHandle& Handle)
	{
		return HashCombine(GetTypeHash(Handle.EntryID), GetTypeHash(Handle.ParentInventory.Get()));
	}
};
