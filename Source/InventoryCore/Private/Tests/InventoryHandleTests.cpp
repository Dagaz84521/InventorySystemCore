#if WITH_DEV_AUTOMATION_TESTS
#include "Misc/AutomationTest.h"
#include "Core/InventoryEntryStorage.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FInventoryCoreHandleTest,
	"PackSystem.Inventory.Core.HandleIdentity", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FInventoryCoreHandleTest::RunTest(const FString& Parameters)
{
	const FGuid Owner = FGuid::NewGuid();
	const FGuid OtherOwner = FGuid::NewGuid();
	TArray<FInventoryEntry> Entries;
	int64 NextID = 0;
	const int32 ID = InventoryCore::AddEntry(Entries, NextID, {});
	const FInventoryHandle Handle(Owner, ID);
	TestTrue(TEXT("Identifier is set"), Handle.IsSet());
	TestNotNull(TEXT("Entry resolves"), InventoryCore::Resolve(Entries, Owner, Handle));
	TestNull(TEXT("Foreign inventory rejected even with same local ID"), InventoryCore::Resolve(Entries, OtherOwner, Handle));
	TestFalse(TEXT("Unset identity"), FInventoryHandle().IsSet());
	TestFalse(TEXT("Negative entry ID"), FInventoryHandle(Owner, -2).IsSet());
	TestNull(TEXT("Negative ID cannot resolve"), InventoryCore::Resolve(Entries, Owner, FInventoryHandle(Owner, -2)));
	for (int32 Index = 0; Index < 128; ++Index)
	{
		InventoryCore::AddEntry(Entries, NextID, {});
	}
	TestNotNull(TEXT("Survives array reallocation"), InventoryCore::Resolve(Entries, Owner, Handle));
	TSet<FInventoryHandle> Handles;
	Handles.Add(Handle);
	Handles.Add(FInventoryHandle(Owner, ID));
	Handles.Add(FInventoryHandle(OtherOwner, ID));
	TestEqual(TEXT("Equality/hash include inventory identity"), Handles.Num(), 2);
	const FInventoryHandle Last(Owner, Entries.Last().EntryID);
	InventoryCore::RemoveEntry(Entries, Last.GetEntryID());
	InventoryCore::RebuildEntries(Entries, NextID);
	const int32 NewID = InventoryCore::AddEntry(Entries, NextID, {});
	TestTrue(TEXT("Rebuild does not reuse highest removed ID"), NewID > Last.GetEntryID());
	TestNull(TEXT("Removed handle stays unresolved"), InventoryCore::Resolve(Entries, Owner, Last));
	TestTrue(TEXT("Removed identity remains set"), Last.IsSet());
	const FInventoryHandle Survivor(Owner, Entries[1].EntryID);
	InventoryCore::RemoveEntry(Entries, ID);
	TestNotNull(TEXT("Removing preceding entry does not change identity"), InventoryCore::Resolve(Entries, Owner, Survivor));
	Entries.Reset();
	InventoryCore::RebuildEntries(Entries, NextID);
	TestTrue(TEXT("Empty rebuild preserves allocation watermark"), InventoryCore::AddEntry(Entries, NextID, {}) > NewID);
	FInventoryHandle ResetHandle = Handle;
	ResetHandle.Reset();
	TestFalse(TEXT("Explicit reset"), ResetHandle.IsSet());
	return true;
}
#endif
