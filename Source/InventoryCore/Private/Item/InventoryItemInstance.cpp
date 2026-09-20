// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/InventoryItemInstance.h"
#include "Item/InventoryItemInstanceFragment.h"

#include "UObject/UObjectGlobals.h"

void UInventoryItemInstance::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
	TagContainer.AppendTags(InstanceTags);
}

void UInventoryItemInstance::AddInstanceTag(FGameplayTag Tag)
{
	if (Tag.IsValid())
	{
		InstanceTags.AddTag(Tag);
	}
}

void UInventoryItemInstance::RemoveInstanceTag(FGameplayTag Tag)
{
	if (Tag.IsValid())
	{
		InstanceTags.RemoveTag(Tag);
	}
}
bool UInventoryItemInstance::IsMatching(const UInventoryItemInstance* InstanceA,
	const UInventoryItemInstance* InstanceB)
{
	if (!IsValid(InstanceA) || !IsValid(InstanceB))
	{
		return false;
	}

	if (InstanceA == InstanceB)
	{
		return true;
	}
	// Generic runtime fragments have no domain-independent equality rule.
	// Never report different mutable states as equal just because tags happen to match.
	if (!InstanceA->Fragments.IsEmpty() || !InstanceB->Fragments.IsEmpty())
	{
		return false;
	}
	return InstanceA->InstanceTags == InstanceB->InstanceTags;
}

UInventoryItemInstance* UInventoryItemInstance::DuplicateInstance(UObject* Outer) const
{
	UObject* InstanceOuter = IsValid(Outer) ? Outer : GetTransientPackage();
	return DuplicateObject<UInventoryItemInstance>(this, InstanceOuter);
}

UInventoryItemInstanceFragment* UInventoryItemInstance::AddFragmentByClass(
	TSubclassOf<UInventoryItemInstanceFragment> FragmentClass)
{
	UClass* Class = FragmentClass.Get();
	if (!IsValid(Class) || Class->HasAnyClassFlags(CLASS_Abstract | CLASS_Deprecated | CLASS_NewerVersionExists))
	{
		return nullptr;
	}
	for (UInventoryItemInstanceFragment* Fragment : Fragments)
	{
		if (IsValid(Fragment) && Fragment->GetClass() == Class)
		{
			return Fragment;
		}
	}
	UInventoryItemInstanceFragment* Fragment = NewObject<UInventoryItemInstanceFragment>(this, Class);
	if (IsValid(Fragment))
	{
		Fragments.Add(Fragment);
	}
	return Fragment;
}

UInventoryItemInstanceFragment* UInventoryItemInstance::FindFragmentByClass(
	TSubclassOf<UInventoryItemInstanceFragment> FragmentClass) const
{
	if (!FragmentClass)
	{
		return nullptr;
	}
	for (UInventoryItemInstanceFragment* Fragment : Fragments)
	{
		if (IsValid(Fragment) && Fragment->IsA(FragmentClass))
		{
			return Fragment;
		}
	}
	return nullptr;
}

bool UInventoryItemInstance::RemoveFragment(UInventoryItemInstanceFragment* Fragment)
{
	if (!IsValid(Fragment) || Fragment->GetOuter() != this)
	{
		return false;
	}
	return Fragments.RemoveSingle(Fragment) > 0;
}
