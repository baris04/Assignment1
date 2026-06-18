// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePowerup.generated.h"

class UParticleSystem;
class USoundCue;

UCLASS()
class ABasePowerup : public AActor
{
    GENERATED_BODY()

public:
    ABasePowerup();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* PickUpParticleSystem;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USoundCue* PickUpSoundCue;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();

    virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

protected:
    virtual void BeginPlay() override;
};
