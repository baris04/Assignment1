// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"

UCLASS()
class ABasePlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool bDiedWhileFiring;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool bPaused;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SetScreenDimensions(int Width, int Height);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    AActor* GetWorldCameraActor();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool IsFiring();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnPlayerDeath();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();

protected:
    virtual void BeginPlay() override;
};
