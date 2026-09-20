# InventoryCore

InventoryCore 提供完整、自洽、可派生的 `UInventoryComponent`，以及该组件所需的物品模型、Entry 存储、Handle、操作结果与事件。使用者只依赖这个插件，即可实现自己的库存组件。

```text
InventoryCore
├── InventoryCore.uplugin
└── Source/InventoryCore
    ├── InventoryCore.Build.cs
    ├── Public
    │   ├── Item
    │   │   ├── InventoryItemDefinition.h
    │   │   ├── InventoryItemInstance.h
    │   │   └── InventoryItemFragment.h
    │   └── Core
    │       ├── InventoryComponent.h
    │       ├── InventoryEntryArray.h        # EntryArray + component EntryHandle
    │       ├── InventoryHandle.h            # non-owning runtime identity
    │       ├── InventoryEntry.h
    │       ├── InventoryEntryStorage.h
    │       ├── InventoryItemPayload.h
    │       ├── InventoryOperations.h
    │       ├── InventoryOperationResult.h
    │       └── InventoryQuantityOperationResult.h
    └── Private
        ├── InventoryCoreModule.cpp
        ├── Core
        ├── Item
        └── Tests
```

## 基类职责

`UInventoryComponent` 是抽象、可由 C++ 或蓝图派生的 ActorComponent，不要求任何特定库存策略。它独立负责：

- 通过 UPROPERTY 持有 EntryArray，确保物品对象引用参与 GC。
- 创建、查询、替换 Payload、清空内容、删除 Entry。
- 分配稳定的容器内 EntryID，并在注册时修复运行期状态。
- 验证外部 Handle 归属、解析记录，查询失败时清空输出。
- 写入 Payload 前校验数据合法性。
- 在修改提交后广播新增、变化、删除、重建事件；写入相同内容不广播变化。
- 维护组件运行期身份和 ID 高水位，避免删除后重复注册导致旧 ID 被复用。

依赖为 Core、CoreUObject、Engine、GameplayTags。Engine 现在明确用于 ActorComponent 生命周期及物品定义资产；GameplayTags 保留现有物品标签语义。Core 不依赖 PackSystemPlugin、UMG、Slate、EnhancedInput 或 GameplayAbilities。

Definition、Fragment、Instance 保留现有资产编辑、反射和 GC 所需的 UObject 形态；Entry、Payload、Handle、Result 是 USTRUCT。底层数量和数组算法仍是普通 C++ 函数。

## 派生接口：内部用 ID

派生类操作当前组件的存储时使用受保护接口：

```cpp
const FInventoryEntry* FindEntryByID(int32 EntryID) const;
FInventoryEntry* FindMutableEntryByID(int32 EntryID);
int32 CreateEntryID(const FInventoryItemPayload& Payload);
bool RemoveEntryByID(int32 EntryID);
bool SetEntryPayloadByID(int32 EntryID, const FInventoryItemPayload& Payload);
```

ID 是记录标识，不是数组下标。查询、修改和删除仍检查记录是否存在；创建失败返回 INDEX_NONE。清空内容使用 `SetEntryPayloadByID(ID, {})`，保留 Entry 身份。创建空 Entry 是允许的，具体库存策略可禁止。

直接修改 mutable Entry 或 EntryArray 会绕过验证和事件；常规写入应使用 SetEntryPayloadByID/CreateEntryID/RemoveEntryByID。保留可变查询和受保护数组是为了兼容已有派生实现。

外部使用 Handle：组件 Handle 入口先检查 ParentInventory，再进入 ID 操作；Core Handle 查询通过 InventoryID 验证归属。外部操作结果和事件可继续使用 Handle。

使用新插件的上层模块在 Build.cs 中公开依赖 `InventoryCore`，其所属插件也需声明 InventoryCore 插件依赖。随后直接：

```cpp
#include "Core/InventoryComponent.h"
#include "MyInventoryComponent.generated.h"

UCLASS()
class UMyInventoryComponent : public UInventoryComponent
{
    GENERATED_BODY()
public:
    int32 AddRecord(const FInventoryItemPayload& Payload)
    {
        // Apply this inventory's acceptance/capacity policy before creating a record.
        return CreateEntryID(Payload);
    }
};
```

项目内的 Aggregate 与 Slotted 已继承这个 Core 基类，不再在 PackSystemPlugin 中定义另一套 InventoryComponent。

## Handle

- `FInventoryEntryHandle`：组件引用 + EntryID。保留现有反射字段及接口；IsSet 检查字段，IsValid 实际解析记录。它保留原来的强对象引用语义。
- `FInventoryHandle`：InventoryID + EntryID，不持有对象引用。IsSet 只表示标识完整，实际存在性由 Resolve 判定；支持哈希、比较和 Reset。
- 二者标识 Entry，不追踪该 Entry 当前存放的物品。换物品或清空记录不改变身份；删除记录后解析失败。
- 组件复制或重新加载会获得新的运行期 InventoryID；重新注册同一个组件保留身份。
- ID 分配高水位不能在同一库存生命周期内回退。直接使用底层数组算法时，调用方必须同时管理 InventoryID 和 NextID；整体替换存储应换一个 InventoryID。
- 当前 Handle 不承诺跨存档或网络同步稳定性。查询返回的 Entry 指针不能跨数组结构变化保存。

## 数量操作与结果

`InventoryCore::Add`、`Remove`、`TryAddQuantity` 提供物品堆层面的通用运算，不负责遍历库存、选择槽位或执行跨库存事务。

`FInventoryOperationResult` 表达状态、请求量、实际量、剩余量、输出 Payload 和失败原因。`FInventoryQuantityOperationResult` 增加组件 EntryHandle，供派生库存操作返回；两者均位于 Core，派生组件不需要依赖 PackSystemPlugin 的结果类型。

## 上层策略

Core 不决定堆叠扫描顺序、库存容量、PreferredSlot、槽位数、格子交换、装备限制、物品效果和 UI。

现有 PackSystemPlugin 保留：

- Aggregate：聚合规则、无槽位上限、完整移除后删除记录。
- Slotted：固定空槽、单堆容量、PreferredSlot、放置/合并/交换。
- Controller、ViewData、Widget、IconFragment、光标交互会话和兼容 BlueprintLibrary。

这些上层类型均依赖 Core；Core 不引用这些类型。没有把 Aggregate 的部分提取或 Slotted 的足量提取规则塞进基类。

## 迁移兼容

迁移 Item 模型后，又将 InventoryComponent、InventoryEntryArray、InventoryEntryHandle、InventoryQuantityOperationResult 及实现迁入 Core。原插件中的定义已删除，导出宏为 INVENTORYCORE_API。原 include 路径保持可用，通过模块依赖解析到新文件。

DefaultEngine.ini 提供迁移类、结构、枚举和事件委托签名的精确重定向。旧蓝图函数签名及属性名保留；已有资产无需立刻重保存。旧项目的重定向属于项目迁移配置，新项目直接使用 Core 不需要这些重定向。

旧组件 Handle 的 IsValid 已修正为真正检查记录存在性；失败的数量操作现在提供请求量、剩余量和原因。其余库存策略保持已有行为。

## 验证

UE 5.4 / Win64 Development：

- 主项目 PackSystemEditor：UHT、C++、插件链接通过。
- PackSystem.Inventory 自动化测试覆盖原库存行为、Handle、17 个已有资产加载，以及新增 Core 派生组件的 CRUD、校验、事件顺序与失效语义。
- Saved/InventoryCoreStandalone 是隔离验证项目：只复制 InventoryCore 插件源码，没有 PackSystemPlugin。
- 独立项目模块 InventoryCoreSmoke 直接派生 UInventoryComponent，构建通过，验证跨模块导出和继承。
- 该项目的 ExternalSubclass 测试同时检查 PackSystemPlugin 未加载，并通过派生组件执行记录增删。

主项目测试报告：Saved/Automation/InventoryCoreComponent/index.json。
独立项目测试报告：Saved/Automation/InventoryCoreStandalone/index.json。

未执行 Cook、网络复制或人工 PIE 视觉验收。本次没有继续改造 Aggregate/Slotted 的策略和 UI 配置。
