#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "RedisActor.generated.h"

UCLASS()
class BUNDLEPROJECT_API ARedis : public AActor {
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ARedis();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
};
