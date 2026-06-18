// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "BaseShip.generated.h"

UCLASS()
class ABaseShip : public ABaseGameAgent
{
    GENERATED_BODY()

public:
    ABaseShip();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float MaxSpeed;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    AActor* GetWorldCameraActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};
