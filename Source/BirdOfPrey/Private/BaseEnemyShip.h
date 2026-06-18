// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BaseEnemyShip.generated.h"

UCLASS()
class ABaseEnemyShip : public ABaseShip
{
    GENERATED_BODY()

public:
    ABaseEnemyShip();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FVector MoveTarget;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnEnemyDied(AActor* Killer);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FVector GetMoveTarget();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};
