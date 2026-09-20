#if WITH_DEV_AUTOMATION_TESTS
#include "Misc/AutomationTest.h"
#include "Core/InventoryOperations.h"
#include "Core/InventoryEntryStorage.h"
#include "Item/InventoryItemDefinition.h"
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FInventoryCoreDomainTest,
 "PackSystem.Inventory.Core.DomainWithoutComponent", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FInventoryCoreDomainTest::RunTest(const FString& Parameters)
{
 UInventoryItemDefinition* Definition = NewObject<UInventoryItemDefinition>();
 FInventoryItemPayload Target(Definition, 8);
 FInventoryOperationResult R = InventoryCore::Add(Target, FInventoryItemPayload(Definition, 5), 10);
 TestEqual(TEXT("Partial add"), R.Status, EInventoryQuantityOperationStatus::PartialSucceeded);
 TestEqual(TEXT("Capacity reason"), R.FailureReason, EInventoryFailureReason::CapacityExceeded);
 TestEqual(TEXT("Quantity conserved"), Target.Quantity + R.OutputPayload.Quantity, int64(13));
 R = InventoryCore::Remove(Target, 11, false);
 TestEqual(TEXT("Exact removal fails without mutation"), Target.Quantity, int64(10));
 TestEqual(TEXT("Insufficient reason"), R.FailureReason, EInventoryFailureReason::InsufficientQuantity);
 R = InventoryCore::Remove(Target, 11, true);
 TestTrue(TEXT("Partial removal empties source"), Target.IsEmpty());
 TestEqual(TEXT("Unfulfilled request"), R.RemainingQuantity, int64(1));
 TestEqual(TEXT("Removed amount"), R.OutputPayload.Quantity, int64(10));
 Target = FInventoryItemPayload(Definition, MAX_int64 - 1);
 R = InventoryCore::Add(Target, FInventoryItemPayload(Definition, 2));
 TestEqual(TEXT("No overflow"), Target.Quantity, int64(MAX_int64));
 TestEqual(TEXT("Overflow boundary remainder"), R.OutputPayload.Quantity, int64(1));
 int64 Sum;
 TestFalse(TEXT("Atomic aggregate sum rejects overflow"), InventoryCore::TryAddQuantity(MAX_int64, 1, Sum));
 TArray<FInventoryEntry> Entries;
 int64 NextID = 0;
 const int32 ID = InventoryCore::AddEntry(Entries, NextID, Target);
 TestNotNull(TEXT("Query without component"), InventoryCore::Find(Entries, ID));
 TestTrue(TEXT("Remove record"), InventoryCore::RemoveEntry(Entries, ID));
 TestTrue(TEXT("ID not reused"), InventoryCore::AddEntry(Entries, NextID, {}) > ID);
 Entries.Emplace(FInventoryItemPayload(), Entries[0].EntryID);
 InventoryCore::RebuildEntries(Entries, NextID);
 TestTrue(TEXT("Repair duplicate IDs"), Entries[0].EntryID != Entries[1].EntryID);
 return true;
}
#endif
