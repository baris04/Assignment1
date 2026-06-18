// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseAIController.h"

ABaseAIController::ABaseAIController()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ABaseAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);
}

void ABaseAIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABaseAIController::SelectTarget()
{
}

void ABaseAIController::CheckFire()
{
}

bool ABaseAIController::ShouldStartFiring()
{
    return false;
}

bool ABaseAIController::ShouldStopFiring()
{
    return false;
}

bool ABaseAIController::ShouldUpdateAim()
{
    return false;
}

void ABaseAIController::UpdateAim()
{
}

void ABaseAIController::AimAt(AActor* Target)
{
}

void ABaseAIController::StartFire()
{
}

void ABaseAIController::StopFire()
{
}

bool ABaseAIController::HasFinishedFiring()
{
    return false;
}
