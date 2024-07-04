#include "RedisActor.h"

#include "Engine/Engine.h"

#include "URedis.h"

// Sets default values
ARedis::ARedis() { PrimaryActorTick.bCanEverTick = false; }

// Called when the game starts or when spawned
void ARedis::BeginPlay() {
    Super::BeginPlay();

    FURedis *plugin = FModuleManager::GetModulePtr<FURedis>("URedis");
    plugin->Connect(TEXT("localhost"));

    uint64 Key{1};
    float TimeToDisplay{10};
    FColor DisplayColor{FColor::White};

    if (plugin->Set(TEXT("a"), TEXT("a"))) {
        const auto a{plugin->Get(TEXT("a"))};
        GEngine->AddOnScreenDebugMessage(Key, TimeToDisplay, DisplayColor, *a);
    } else {
        GEngine->AddOnScreenDebugMessage(Key, TimeToDisplay, DisplayColor,
                                         "broblem");
    }
}
