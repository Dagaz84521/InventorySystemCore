#include "Modules/ModuleManager.h"
class FInventoryCoreModule final : public IModuleInterface
{
public:
    virtual void StartupModule() override {}
    virtual void ShutdownModule() override {}
};
IMPLEMENT_MODULE(FInventoryCoreModule, InventoryCore)
