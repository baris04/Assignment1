// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "BaseStationaryEnemy.generated.h"

UCLASS()
class ABaseStationaryEnemy : public ABaseGameAgent
{
    GENERATED_BODY()

public:
    ABaseStationaryEnemy();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool ProjectileGroundCheck;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnEnemyDied(AActor* Killer);

protected:
    virtual void BeginPlay() override;
};
