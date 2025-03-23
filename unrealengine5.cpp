#include "unrealengine.h"
#include "Modules/ModuleManager.h"
#include "Logging/LogMacros.h"

DEFINE_LOG_CATEGORY_STATIC(LogUnrealEngine, Log, All);

class FUnrealEngineGameModule : public FDefaultGameModuleImpl
{
public:
    virtual void StartupModule() override
    {
        UE_LOG(LogUnrealEngine, Warning, TEXT("Unreal Engine Module Initialized!"));
    }

    virtual void ShutdownModule() override
    {
        UE_LOG(LogUnrealEngine, Warning, TEXT("Unreal Engine Module Shut Down!"));
    }
};

IMPLEMENT_PRIMARY_GAME_MODULE(FUnrealEngineGameModule, unrealengine, "unrealengine");
