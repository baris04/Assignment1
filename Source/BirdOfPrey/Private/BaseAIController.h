// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseAIController.generated.h"

class ABaseGameAgent;

UCLASS()
class ABaseAIController : public AAIController
{
    GENERATED_BODY()

public:
    ABaseAIController();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    ABaseGameAgent* ControlledAgent;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float RefireDelay;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float LastFireTime;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool bShouldUpdateAim;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SelectTarget();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CheckFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldStartFiring();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldStopFiring();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldUpdateAim();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void UpdateAim();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AimAt(AActor* Target);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool HasFinishedFiring();

protected:
    virtual void OnPossess(APawn* InPawn) override;

public:
    virtual void Tick(float DeltaTime) override;
};
