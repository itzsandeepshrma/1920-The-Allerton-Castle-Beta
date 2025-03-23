#include "TheAllertonCastle.h"
#include "Modules/ModuleManager.h"
#include "Logging/LogMacros.h"

DEFINE_LOG_CATEGORY_STATIC(LogAllertonCastle, Log, All);

class FTheAllertonCastleGameModule : public FDefaultGameModuleImpl
{
public:
    virtual void StartupModule() override
    {
        UE_LOG(LogAllertonCastle, Warning, TEXT("The Allerton Castle Module Initialized!"));
    }

    virtual void ShutdownModule() override
    {
        UE_LOG(LogAllertonCastle, Warning, TEXT("The Allerton Castle Module Shut Down!"));
    }
};

IMPLEMENT_PRIMARY_GAME_MODULE(FTheAllertonCastleGameModule, TheAllertonCastle, "TheAllertonCastle");
