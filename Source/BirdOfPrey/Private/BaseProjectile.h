// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseProjectile.generated.h"

class UParticleSystem;

UCLASS()
class ABaseProjectile : public AActor
{
    GENERATED_BODY()

public:
    ABaseProjectile();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float Damage;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float Speed;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* DetonationEmitter;

protected:
    virtual void BeginPlay() override;
};
