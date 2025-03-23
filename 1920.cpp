#include "1920.h"
#include "Modules/ModuleManager.h"
#include "Logging/LogMacros.h"

// Define a custom log category for better debugging
DEFINE_LOG_CATEGORY_STATIC(Log1920, Log, All);

class F1920GameModule : public FDefaultGameModuleImpl
{
public:
    virtual void StartupModule() override
    {
        UE_LOG(Log1920, Warning, TEXT("1920 Game Module has started!"));
    }

    virtual void ShutdownModule() override
    {
        UE_LOG(Log1920, Warning, TEXT("1920 Game Module has shut down!"));
    }
};

IMPLEMENT_PRIMARY_GAME_MODULE(F1920GameModule, 1920, "1920");
