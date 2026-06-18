// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "ProjectileWeapon.generated.h"

class ABaseProjectile;

UCLASS()
class AProjectileWeapon : public ABaseWeapon
{
    GENERATED_BODY()

public:
    AProjectileWeapon();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    TSubclassOf<ABaseProjectile> ProjectileType;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float ProjectileSpeed;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    int32 NumShots;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float GroundUnitCheckAngle;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float GroundUnitCheckDistance;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float LastFireTime;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void FireProjectile();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FTransform GetProjectileSpawnTransform();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ReadyToFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    ABaseProjectile* SpawnProjectile();

    virtual void StartFire() override;
    virtual void StopFire() override;
    virtual void PlayFireEffects() override;
};
