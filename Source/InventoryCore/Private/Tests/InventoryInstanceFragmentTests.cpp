#if WITH_DEV_AUTOMATION_TESTS
#include "Misc/AutomationTest.h"
#include "Tests/InventoryInstanceFragmentTestTypes.h"
#include "UObject/StrongObjectPtr.h"
#include "UObject/UObjectGlobals.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FInventoryInstanceFragmentTest,
	"PackSystem.Inventory.Core.InstanceFragments", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FInventoryInstanceFragmentTest::RunTest(const FString& Parameters)
{
	TStrongObjectPtr<UInventoryTestStateDefinition> Definition(NewObject<UInventoryTestStateDefinition>());
	UInventoryTestStateDefinitionFragment* Config = NewObject<UInventoryTestStateDefinitionFragment>(Definition.Get());
	Definition->AddConfig(Config);
	TestTrue(TEXT("Config requests per-item state"), Definition->RequiresItemInstance());
	const FInventoryItemPayload PayloadA = Definition->CreateItemPayload(1, GetTransientPackage());
	const FInventoryItemPayload PayloadB = Definition->CreateItemPayload(1, GetTransientPackage());
	TStrongObjectPtr<UInventoryItemInstance> A(PayloadA.ItemInstance.Get());
	TStrongObjectPtr<UInventoryItemInstance> B(PayloadB.ItemInstance.Get());
	if (!TestNotNull(TEXT("First instance"), A.Get()) || !TestNotNull(TEXT("Second instance"), B.Get())) return false;
	UInventoryTestMutableFragment* StateA = A->FindFragment<UInventoryTestMutableFragment>();
	UInventoryTestMutableFragment* StateB = B->FindFragment<UInventoryTestMutableFragment>();
	if (!TestNotNull(TEXT("Initializer creates state"), StateA) || !TestNotNull(TEXT("Second state"), StateB)) return false;
	TestTrue(TEXT("State is owned by its instance"), StateA->GetItemInstance() == A.Get());
	TestTrue(TEXT("Each item has a different state object"), StateA != StateB);
	TestEqual(TEXT("Config supplies initial value"), StateA->Value, 100);
	StateA->Value = 37;
	TestEqual(TEXT("Changing A leaves B unchanged"), StateB->Value, 100);
	TestEqual(TEXT("Changing A leaves static config unchanged"), Config->InitialValue, 100);
	TestTrue(TEXT("Exact-class add returns existing state"), A->AddFragmentByClass(UInventoryTestMutableFragment::StaticClass()) == StateA);
	TestEqual(TEXT("Repeated add preserves value"), StateA->Value, 37);
	TestTrue(TEXT("Base-class query finds derived state"), A->FindFragmentByClass(UInventoryItemInstanceFragment::StaticClass()) == StateA);
	TestNull(TEXT("Null class rejected"), A->AddFragmentByClass(nullptr));
	TestNull(TEXT("Abstract class rejected"), A->AddFragmentByClass(UInventoryItemInstanceFragment::StaticClass()));
	TestFalse(TEXT("Foreign state cannot be removed"), A->RemoveFragment(StateB));
	TestFalse(TEXT("Null removal rejected"), A->RemoveFragment(nullptr));
	TestFalse(TEXT("Dynamic state prevents tag-only matching"), UInventoryItemInstance::IsMatching(A.Get(), B.Get()));
	TestTrue(TEXT("Instance matches itself"), UInventoryItemInstance::IsMatching(A.Get(), A.Get()));
	TestFalse(TEXT("Instance-bearing payloads still cannot stack"), FInventoryItemPayload::CanStack(PayloadA, PayloadB));
	TestTrue(TEXT("Multiple dynamic items cannot share one payload"), Definition->CreateItemPayload(2, GetTransientPackage()).IsEmpty());

	TStrongObjectPtr<UInventoryItemInstance> Copy(A->DuplicateInstance());
	if (!TestNotNull(TEXT("Duplicate created"), Copy.Get())) return false;
	UInventoryTestMutableFragment* CopyState = Copy->FindFragment<UInventoryTestMutableFragment>();
	if (!TestNotNull(TEXT("Duplicate includes state"), CopyState)) return false;
	TestTrue(TEXT("Duplicate deep-copies state object"), CopyState != StateA);
	TestTrue(TEXT("Copied state has new owner"), CopyState->GetItemInstance() == Copy.Get());
	TestEqual(TEXT("Duplicate preserves current value, not config default"), CopyState->Value, 37);
	CopyState->Value = 9;
	TestEqual(TEXT("Changing duplicate does not affect source"), StateA->Value, 37);
	TWeakObjectPtr<UInventoryTestMutableFragment> WeakState(StateA);
	CollectGarbage(RF_NoFlags);
	TestTrue(TEXT("Instance UPROPERTY retains attached state during GC"), WeakState.IsValid());
	if (!WeakState.IsValid()) return false;
	TestTrue(TEXT("Owned state can be detached"), A->RemoveFragment(WeakState.Get()));
	TestFalse(TEXT("Repeated removal fails"), A->RemoveFragment(WeakState.Get()));
	TestNull(TEXT("Detached state no longer found"), A->FindFragment<UInventoryTestMutableFragment>());
	CollectGarbage(RF_NoFlags);
	TestFalse(TEXT("Detached unreferenced state can be collected"), WeakState.IsValid());
	TestNotNull(TEXT("Other item retains its state"), B->FindFragment<UInventoryTestMutableFragment>());
	TestEqual(TEXT("Duplicate retains independent state"), Copy->FindFragment<UInventoryTestMutableFragment>()->Value, 9);
	return true;
}
#endif
