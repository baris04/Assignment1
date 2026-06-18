// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGameAgent.h"

ABaseGameAgent::ABaseGameAgent()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ABaseGameAgent::BeginPlay()
{
    Super::BeginPlay();
}

void ABaseGameAgent::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABaseGameAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}

float ABaseGameAgent::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
    class AController* EventInstigator, AActor* DamageCauser)
{
    return 0;
}

bool ABaseGameAgent::IsAlive()
{
    return false;
}

void ABaseGameAgent::PlayDeathEffects()
{
}

void ABaseGameAgent::PlayHitEffects()
{
}

void ABaseGameAgent::CleanUp()
{
}

void ABaseGameAgent::CheckForOutOfBounds()
{
}

void ABaseGameAgent::StartFire()
{
}

void ABaseGameAgent::StopFire()
{
}

void ABaseGameAgent::ChangeWeaponType(TSubclassOf<AActor> NewWeaponType)
{
}

void ABaseGameAgent::ApplyAgentInfo(FSAgentInfo NewAgentInfo)
{
}

void ABaseGameAgent::Reset()
{
}
