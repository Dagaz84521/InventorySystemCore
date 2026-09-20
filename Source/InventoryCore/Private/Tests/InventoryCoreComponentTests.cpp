#if WITH_DEV_AUTOMATION_TESTS
#include "Misc/AutomationTest.h"
#include "Tests/InventoryCoreTestComponent.h"
#include "Core/InventoryQuantityOperationResult.h"
#include "Item/InventoryItemDefinition.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FInventoryCoreComponentTest,
	"PackSystem.Inventory.Core.DerivedComponent", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FInventoryCoreComponentTest::RunTest(const FString& Parameters)
{
	UInventoryCoreTestComponent* Inventory = NewObject<UInventoryCoreTestComponent>();
	UInventoryCoreTestComponent* Other = NewObject<UInventoryCoreTestComponent>();
	UInventoryItemDefinition* Definition = NewObject<UInventoryItemDefinition>();
	Inventory->ObserveChanges();
	const FInventoryItemPayload Payload(Definition, 4);
	const int32 ID = Inventory->CreateEntryID(Payload);
	TestTrue(TEXT("Derived Core component creates records"), ID >= 0);
	TestEqual(TEXT("Added event"), Inventory->AddedCount, 1);
	const FInventoryEntry* Found = Inventory->FindEntryByID(ID);
	if (!TestNotNull(TEXT("Query by local ID"), Found)) return false;
	TestEqual(TEXT("Stored quantity"), Found->Payload.Quantity, int64(4));
	const FInventoryEntryHandle Handle = Inventory->MakeEntryHandle(ID);
	const FInventoryHandle CoreHandle = Inventory->GetCoreHandle(Handle);
	TestTrue(TEXT("Component Handle resolves without upper plugin"), Handle.IsValid());
	TestNotNull(TEXT("Core Handle resolves"), Inventory->ResolveEntry(CoreHandle));
	Other->CreateEntryID(Payload);
	TestFalse(TEXT("Foreign handle cannot mutate matching ID"), Other->SetEntryPayload(Handle, {}));
	TestFalse(TEXT("Foreign handle cannot remove matching ID"), Other->RemoveEntry(Handle));
	TestTrue(TEXT("Unchanged write succeeds"), Inventory->SetEntryPayloadByID(ID, Payload));
	TestEqual(TEXT("Unchanged write emits no event"), Inventory->ChangedCount, 0);
	TestFalse(TEXT("Invalid payload rejected"), Inventory->SetEntryPayloadByID(ID, FInventoryItemPayload(Definition, -1)));
	TestEqual(TEXT("Invalid creation rejected"), Inventory->CreateEntryID(FInventoryItemPayload(Definition, -1)), INDEX_NONE);
	TestTrue(TEXT("Update by ID"), Inventory->SetEntryPayloadByID(ID, FInventoryItemPayload(Definition, 2)));
	TestEqual(TEXT("Update event sees new value"), Inventory->LastChangedPayload.Quantity, int64(2));
	TestTrue(TEXT("Clear retains record"), Inventory->ClearEntry(Handle));
	TestTrue(TEXT("Empty record remains addressable"), Handle.IsValid());
	TestTrue(TEXT("Cleared payload is empty"), Inventory->LastChangedPayload.IsEmpty());
	TestTrue(TEXT("Remove by ID"), Inventory->RemoveEntryByID(ID));
	TestFalse(TEXT("Removed Handle cannot resolve"), Handle.IsValid());
	TestNull(TEXT("Removed Core Handle cannot resolve"), Inventory->ResolveEntry(CoreHandle));
	TestFalse(TEXT("Repeated remove fails"), Inventory->RemoveEntryByID(ID));
	TestFalse(TEXT("Removed record cannot be updated"), Inventory->SetEntryPayloadByID(ID, Payload));
	TestEqual(TEXT("One remove event"), Inventory->RemovedCount, 1);
	TestEqual(TEXT("Two change events"), Inventory->ChangedCount, 2);
	TestEqual(TEXT("Invalid create emits no added event"), Inventory->AddedCount, 1);
	TestTrue(TEXT("Notifications observe committed storage"), Inventory->bEventsObserveCommittedState);
	TestTrue(TEXT("Deleted ID is not reused"), Inventory->CreateEntryID({}) > ID);
	FInventoryQuantityOperationResult Result;
	Result.Set(EInventoryQuantityOperationStatus::Succeeded, 1, 1, Payload, Handle);
	TestTrue(TEXT("Shared component result is available from Core"), Result.AffectedEntry == Handle);
	TestEqual(TEXT("Base class belongs to Core"), UInventoryComponent::StaticClass()->GetOutermost()->GetName(), FString(TEXT("/Script/InventoryCore")));
	return true;
}
#endif
