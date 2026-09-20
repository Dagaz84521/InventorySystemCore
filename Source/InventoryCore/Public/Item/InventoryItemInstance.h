// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagAssetInterface.h"
#include "UObject/NoExportTypes.h"
#include "InventoryItemInstance.generated.h"

class UInventoryItemInstanceFragment;

/**
 * 物品可选的运行时动态状态。
 *
 * 物品类型由 FInventoryItemPayload 中的 UInventoryItemDefinition 表示；该对象只保存
 * 耐久度、随机词条、运行时标签等会在游戏过程中变化的数据。
 */
UCLASS(BlueprintType)
class INVENTORYCORE_API UInventoryItemInstance : public UObject, public IGameplayTagAssetInterface
{
	GENERATED_BODY()

public:
	/** 返回当前实例拥有的动态标签。 */
	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;

	/** 为当前实例添加一个运行时标签。 */
	UFUNCTION(BlueprintCallable, Category = "Inventory|Instance")
	void AddInstanceTag(FGameplayTag Tag);

	/** 从当前实例移除一个运行时标签。 */
	UFUNCTION(BlueprintCallable, Category = "Inventory|Instance")
	void RemoveInstanceTag(FGameplayTag Tag);
	
	/** Create owned mutable state. One object per exact class; repeated adds return that object.
	 * Null, abstract and deprecated classes return nullptr. Derived and base classes may coexist.
	 */
	UFUNCTION(BlueprintCallable, Category = "Inventory|Instance|Fragment", meta = (DeterminesOutputType = "FragmentClass"))
	UInventoryItemInstanceFragment* AddFragmentByClass(TSubclassOf<UInventoryItemInstanceFragment> FragmentClass);

	/** First matching state object, including subclasses. Does not create state. */
	UFUNCTION(BlueprintPure, Category = "Inventory|Instance|Fragment", meta = (DeterminesOutputType = "FragmentClass"))
	UInventoryItemInstanceFragment* FindFragmentByClass(TSubclassOf<UInventoryItemInstanceFragment> FragmentClass) const;

	/** Detach this exact state object. Foreign/not-attached objects return false.
	 * External references can keep a detached object alive until released.
	 */
	UFUNCTION(BlueprintCallable, Category = "Inventory|Instance|Fragment")
	bool RemoveFragment(UInventoryItemInstanceFragment* Fragment);

	template <typename FragmentType>
	FragmentType* FindFragment()
	{
		return Cast<FragmentType>(FindFragmentByClass(FragmentType::StaticClass()));
	}

	template <typename FragmentType>
	const FragmentType* FindFragment() const
	{
		return Cast<FragmentType>(FindFragmentByClass(FragmentType::StaticClass()));
	}

	/** Legacy state comparison: distinct instances with fragments are not assumed equivalent.
	 * Payload stacking remains disabled for all instance-bearing items.
	 */
	static bool IsMatching(const UInventoryItemInstance* InstanceA, const UInventoryItemInstance* InstanceB);

	/**
	 * 显式复制当前动态状态，包括 Instanced Fragment 子对象。
	 * 当前有实例物品的数量固定为 1，普通堆叠拆分不会调用该函数。
	 */
	UInventoryItemInstance* DuplicateInstance(UObject* Outer = nullptr) const;

private:
	/** 仅属于当前实例、可在运行时变化的标签。 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Inventory|Instance", meta = (AllowPrivateAccess = true))
	FGameplayTagContainer InstanceTags;
	
	/** Individually owned state, deep-copied by DuplicateInstance. No shared definition fragments. */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Instanced, Category = "Inventory|Instance", meta = (AllowPrivateAccess = true))
	TArray<TObjectPtr<UInventoryItemInstanceFragment>> Fragments;
};
