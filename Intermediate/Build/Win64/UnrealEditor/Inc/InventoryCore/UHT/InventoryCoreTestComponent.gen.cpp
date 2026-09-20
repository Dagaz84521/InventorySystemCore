// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryCore/Private/Tests/InventoryCoreTestComponent.h"
#include "InventoryCore/Public/Core/InventoryEntryArray.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryCoreTestComponent() {}

// Begin Cross Module References
INVENTORYCORE_API UClass* Z_Construct_UClass_UInventoryComponent();
INVENTORYCORE_API UClass* Z_Construct_UClass_UInventoryCoreTestComponent();
INVENTORYCORE_API UClass* Z_Construct_UClass_UInventoryCoreTestComponent_NoRegister();
INVENTORYCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryEntryHandle();
UPackage* Z_Construct_UPackage__Script_InventoryCore();
// End Cross Module References

// Begin Class UInventoryCoreTestComponent Function RecordAdded
struct Z_Construct_UFunction_UInventoryCoreTestComponent_RecordAdded_Statics
{
	struct InventoryCoreTestComponent_eventRecordAdded_Parms
	{
		FInventoryEntryHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/InventoryCoreTestComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryCoreTestComponent_RecordAdded_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryCoreTestComponent_eventRecordAdded_Parms, Handle), Z_Construct_UScriptStruct_FInventoryEntryHandle, METADATA_PARAMS(0, nullptr) }; // 1568265631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryCoreTestComponent_RecordAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryCoreTestComponent_RecordAdded_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryCoreTestComponent_RecordAdded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryCoreTestComponent_RecordAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryCoreTestComponent, nullptr, "RecordAdded", nullptr, nullptr, Z_Construct_UFunction_UInventoryCoreTestComponent_RecordAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryCoreTestComponent_RecordAdded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryCoreTestComponent_RecordAdded_Statics::InventoryCoreTestComponent_eventRecordAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryCoreTestComponent_RecordAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryCoreTestComponent_RecordAdded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryCoreTestComponent_RecordAdded_Statics::InventoryCoreTestComponent_eventRecordAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryCoreTestComponent_RecordAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryCoreTestComponent_RecordAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryCoreTestComponent::execRecordAdded)
{
	P_GET_STRUCT(FInventoryEntryHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecordAdded(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class UInventoryCoreTestComponent Function RecordAdded

// Begin Class UInventoryCoreTestComponent Function RecordChanged
struct Z_Construct_UFunction_UInventoryCoreTestComponent_RecordChanged_Statics
{
	struct InventoryCoreTestComponent_eventRecordChanged_Parms
	{
		FInventoryEntryHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/InventoryCoreTestComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryCoreTestComponent_RecordChanged_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryCoreTestComponent_eventRecordChanged_Parms, Handle), Z_Construct_UScriptStruct_FInventoryEntryHandle, METADATA_PARAMS(0, nullptr) }; // 1568265631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryCoreTestComponent_RecordChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryCoreTestComponent_RecordChanged_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryCoreTestComponent_RecordChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryCoreTestComponent_RecordChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryCoreTestComponent, nullptr, "RecordChanged", nullptr, nullptr, Z_Construct_UFunction_UInventoryCoreTestComponent_RecordChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryCoreTestComponent_RecordChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryCoreTestComponent_RecordChanged_Statics::InventoryCoreTestComponent_eventRecordChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryCoreTestComponent_RecordChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryCoreTestComponent_RecordChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryCoreTestComponent_RecordChanged_Statics::InventoryCoreTestComponent_eventRecordChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryCoreTestComponent_RecordChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryCoreTestComponent_RecordChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryCoreTestComponent::execRecordChanged)
{
	P_GET_STRUCT(FInventoryEntryHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecordChanged(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class UInventoryCoreTestComponent Function RecordChanged

// Begin Class UInventoryCoreTestComponent Function RecordRemoved
struct Z_Construct_UFunction_UInventoryCoreTestComponent_RecordRemoved_Statics
{
	struct InventoryCoreTestComponent_eventRecordRemoved_Parms
	{
		FInventoryEntryHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/InventoryCoreTestComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryCoreTestComponent_RecordRemoved_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryCoreTestComponent_eventRecordRemoved_Parms, Handle), Z_Construct_UScriptStruct_FInventoryEntryHandle, METADATA_PARAMS(0, nullptr) }; // 1568265631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryCoreTestComponent_RecordRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryCoreTestComponent_RecordRemoved_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryCoreTestComponent_RecordRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryCoreTestComponent_RecordRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryCoreTestComponent, nullptr, "RecordRemoved", nullptr, nullptr, Z_Construct_UFunction_UInventoryCoreTestComponent_RecordRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryCoreTestComponent_RecordRemoved_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryCoreTestComponent_RecordRemoved_Statics::InventoryCoreTestComponent_eventRecordRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryCoreTestComponent_RecordRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryCoreTestComponent_RecordRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryCoreTestComponent_RecordRemoved_Statics::InventoryCoreTestComponent_eventRecordRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryCoreTestComponent_RecordRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryCoreTestComponent_RecordRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryCoreTestComponent::execRecordRemoved)
{
	P_GET_STRUCT(FInventoryEntryHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecordRemoved(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class UInventoryCoreTestComponent Function RecordRemoved

// Begin Class UInventoryCoreTestComponent
void UInventoryCoreTestComponent::StaticRegisterNativesUInventoryCoreTestComponent()
{
	UClass* Class = UInventoryCoreTestComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RecordAdded", &UInventoryCoreTestComponent::execRecordAdded },
		{ "RecordChanged", &UInventoryCoreTestComponent::execRecordChanged },
		{ "RecordRemoved", &UInventoryCoreTestComponent::execRecordRemoved },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryCoreTestComponent);
UClass* Z_Construct_UClass_UInventoryCoreTestComponent_NoRegister()
{
	return UInventoryCoreTestComponent::StaticClass();
}
struct Z_Construct_UClass_UInventoryCoreTestComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Test-only derived storage: no Aggregate, Slotted, UI, or PackSystemPlugin dependency. */" },
#endif
		{ "IncludePath", "Tests/InventoryCoreTestComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/InventoryCoreTestComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Test-only derived storage: no Aggregate, Slotted, UI, or PackSystemPlugin dependency." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryCoreTestComponent_RecordAdded, "RecordAdded" }, // 4018543596
		{ &Z_Construct_UFunction_UInventoryCoreTestComponent_RecordChanged, "RecordChanged" }, // 3788560516
		{ &Z_Construct_UFunction_UInventoryCoreTestComponent_RecordRemoved, "RecordRemoved" }, // 2968851964
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryCoreTestComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryCoreTestComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInventoryComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryCoreTestComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryCoreTestComponent_Statics::ClassParams = {
	&UInventoryCoreTestComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryCoreTestComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryCoreTestComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryCoreTestComponent()
{
	if (!Z_Registration_Info_UClass_UInventoryCoreTestComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryCoreTestComponent.OuterSingleton, Z_Construct_UClass_UInventoryCoreTestComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryCoreTestComponent.OuterSingleton;
}
template<> INVENTORYCORE_API UClass* StaticClass<UInventoryCoreTestComponent>()
{
	return UInventoryCoreTestComponent::StaticClass();
}
UInventoryCoreTestComponent::UInventoryCoreTestComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryCoreTestComponent);
UInventoryCoreTestComponent::~UInventoryCoreTestComponent() {}
// End Class UInventoryCoreTestComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Private_Tests_InventoryCoreTestComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryCoreTestComponent, UInventoryCoreTestComponent::StaticClass, TEXT("UInventoryCoreTestComponent"), &Z_Registration_Info_UClass_UInventoryCoreTestComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryCoreTestComponent), 2286760008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Private_Tests_InventoryCoreTestComponent_h_95881804(TEXT("/Script/InventoryCore"),
	Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Private_Tests_InventoryCoreTestComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_PackSystem_PackSystem_Plugins_InventoryCore_Source_InventoryCore_Private_Tests_InventoryCoreTestComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
