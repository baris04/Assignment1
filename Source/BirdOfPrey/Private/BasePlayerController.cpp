// Fill out your copyright notice in the Description page of Project Settings.

#include "BasePlayerController.h"

void ABasePlayerController::BeginPlay()
{
    Super::BeginPlay();
}

void ABasePlayerController::SetScreenDimensions(int Width, int Height)
{
}

AActor* ABasePlayerController::GetWorldCameraActor()
{
    return nullptr;
}

bool ABasePlayerController::IsFiring()
{
    return false;
}

void ABasePlayerController::OnPlayerDeath()
{
}

void ABasePlayerController::Reset()
{
}
