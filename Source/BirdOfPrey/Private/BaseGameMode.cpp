// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGameMode.h"

void ABaseGameMode::BeginPlay()
{
    Super::BeginPlay();
}

void ABaseGameMode::AddScore(int Amount)
{
}

void ABaseGameMode::EndGame(bool bSuccess)
{
}

void ABaseGameMode::ResetGame()
{
}

void ABaseGameMode::StartGame()
{
}

void ABaseGameMode::RespawnPlayer(APlayerController* PlayerController)
{
}

void ABaseGameMode::TrySpawnPowerUp()
{
}

FVector ABaseGameMode::GetPowerUpSpawnLocation()
{
    return FVector::ZeroVector;
}

AActor* ABaseGameMode::GetWorldCameraActor()
{
    return nullptr;
}

FVector ABaseGameMode::GetWorldScrollVelocity()
{
    return FVector::ZeroVector;
}

float ABaseGameMode::GetDistanceTravelled()
{
    return 0;
}

void ABaseGameMode::OnEnemyDied(AActor* Killer)
{
}

void ABaseGameMode::OnPlayerDied(AActor* Killer)
{
}

void ABaseGameMode::SetPlayerViewCamera(APlayerController* PlayerController)
{
}

void ABaseGameMode::ConsumeLife(APlayerController* PlayerController)
{
}

bool ABaseGameMode::HasRemainingLives(APlayerController* PlayerController)
{
    return false;
}

void ABaseGameMode::OnRestartPlayer(AController* NewPlayer)
{
}
