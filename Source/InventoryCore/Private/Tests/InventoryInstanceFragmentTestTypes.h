#pragma once

#include "Item/InventoryItemDefinition.h"
#include "Item/InventoryItemFragment.h"
#include "Item/InventoryItemInstance.h"
#include "Item/InventoryItemInstanceFragment.h"
#include "InventoryInstanceFragmentTestTypes.generated.h"

UCLASS()
class UInventoryTestMutableFragment : public UInventoryItemInstanceFragment
{
	GENERATED_BODY()
public:
	UPROPERTY()
	int32 Value = 0;
};

UCLASS()
class UInventoryTestStateDefinitionFragment : public UInventoryItemFragment
{
	GENERATED_BODY()
public:
	UPROPERTY()
	int32 InitialValue = 100;

	virtual bool RequiresItemInstance_Implementation() const override { return true; }
	virtual void OnInstanceCreated_Implementation(UInventoryItemInstance* Instance) const override
	{
		UInventoryTestMutableFragment* State = Cast<UInventoryTestMutableFragment>(
			Instance->AddFragmentByClass(UInventoryTestMutableFragment::StaticClass()));
		if (State) State->Value = InitialValue;
	}
};

UCLASS()
class UInventoryTestStateDefinition : public UInventoryItemDefinition
{
	GENERATED_BODY()
public:
	void AddConfig(UInventoryItemFragment* Fragment) { Fragments.Add(Fragment); }
};
