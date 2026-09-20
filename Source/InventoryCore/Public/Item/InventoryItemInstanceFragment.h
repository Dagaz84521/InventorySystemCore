#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InventoryItemInstanceFragment.generated.h"

class UInventoryItemInstance;

/** Mutable per-item state (for example durability or rolled modifiers).
 * Create through ItemInstance::AddFragmentByClass, never attach shared definition objects.
 * Store state and owned subobjects in UPROPERTY fields so GC and duplication can track them.
 * Ordinary external object references remain shared when duplicating an instance.
 */
UCLASS(Abstract, BlueprintType, Blueprintable, DefaultToInstanced, EditInlineNew)
class INVENTORYCORE_API UInventoryItemInstanceFragment : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Inventory|Instance|Fragment")
	UInventoryItemInstance* GetItemInstance() const;
};
