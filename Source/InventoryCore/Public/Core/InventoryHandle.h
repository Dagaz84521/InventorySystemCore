#pragma once

#include "CoreMinimal.h"
#include "InventoryHandle.generated.h"

/** A non-owning record identity, scoped to one inventory lifetime.
 * Identifies an Entry, not its current item or array index. It does not keep storage alive.
 * IsSet checks the identifier only; resolve against storage to check existence.
 * Runtime handles must not be used as persistent save-game or replicated identities.
 */
USTRUCT(BlueprintType)
struct INVENTORYCORE_API FInventoryHandle
{
	GENERATED_BODY()

	FInventoryHandle() = default;
	FInventoryHandle(const FGuid& InInventoryID, int32 InEntryID)
		: InventoryID(InInventoryID), EntryID(InEntryID)
	{
	}

	bool IsSet() const { return InventoryID.IsValid() && EntryID >= 0; }
	void Reset() { *this = FInventoryHandle(); }
	const FGuid& GetInventoryID() const { return InventoryID; }
	int32 GetEntryID() const { return EntryID; }

	bool operator==(const FInventoryHandle& Other) const
	{
		return InventoryID == Other.InventoryID && EntryID == Other.EntryID;
	}
	bool operator!=(const FInventoryHandle& Other) const { return !(*this == Other); }
	friend uint32 GetTypeHash(const FInventoryHandle& Handle)
	{
		return HashCombine(GetTypeHash(Handle.InventoryID), GetTypeHash(Handle.EntryID));
	}

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Inventory", meta=(AllowPrivateAccess="true"))
	FGuid InventoryID;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Inventory", meta=(AllowPrivateAccess="true"))
	int32 EntryID = INDEX_NONE;
};
