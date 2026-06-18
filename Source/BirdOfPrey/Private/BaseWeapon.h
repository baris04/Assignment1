// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

class UParticleSystem;
class USoundCue;

UCLASS()
class ABaseWeapon : public AActor
{
    GENERATED_BODY()

public:
    ABaseWeapon();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* FireParticleEffect;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USoundCue* FireSoundCue;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool bRequiresAimForAI;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float RefireTime;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayFireEffects();

protected:
    virtual void BeginPlay() override;
};
