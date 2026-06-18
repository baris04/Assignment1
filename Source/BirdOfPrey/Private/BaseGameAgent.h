// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseGameInstance.h"
#include "BaseGameAgent.generated.h"

class UParticleSystem;
class USoundCue;

UCLASS()
class ABaseGameAgent : public APawn
{
    GENERATED_BODY()

public:
    ABaseGameAgent();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float Health;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float MoveSpeed;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FLinearColor Colour;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FName WeaponSocketName;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FVector WeaponSpawnOffset;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float OutOfBoundsCheckTolerance;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* DeathParticleEffect;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USoundCue* DeathSoundCue;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* HitParticleEffect;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USoundCue* HitSoundCue;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool IsAlive();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayDeathEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayHitEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CleanUp();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CheckForOutOfBounds();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ChangeWeaponType(TSubclassOf<AActor> NewWeaponType);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ApplyAgentInfo(FSAgentInfo NewAgentInfo);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();

protected:
    virtual void BeginPlay() override;

    virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
        class AController* EventInstigator, AActor* DamageCauser) override;

public:
    virtual void Tick(float DeltaTime) override;

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
