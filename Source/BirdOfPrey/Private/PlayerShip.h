// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BaseGameInstance.h"
#include "PlayerShip.generated.h"

class USoundCue;
class UAudioComponent;

UCLASS()
class APlayerShip : public ABaseShip
{
    GENERATED_BODY()

public:
    APlayerShip();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FVector2D MaxRelativePlayerOffset;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float HoverPitch;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    int32 PlayerControllerID;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float TimeOfLastDeath;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UAudioComponent* HoverAudio;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void MoveRight(float AxisValue);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void MoveUp(float AxisValue);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float GetShipAxisAdjustment();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float GetShipConstantVelocity();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FSAgentInfo GetPlayerAgentInfo();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    int32 GetPlayerControllerID();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool HasDiedRecently();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnPlayerDied(AActor* Killer);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void UpdateHoverPitch();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float GetMaxSpeed();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ClampToCameraBounds();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void FireWeapon();

    virtual void StartFire() override;
    virtual void StopFire() override;

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};
