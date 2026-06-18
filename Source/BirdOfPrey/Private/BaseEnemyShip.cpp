// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseEnemyShip.h"

ABaseEnemyShip::ABaseEnemyShip()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ABaseEnemyShip::BeginPlay()
{
    Super::BeginPlay();
}

void ABaseEnemyShip::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABaseEnemyShip::OnEnemyDied(AActor* Killer)
{
}

FVector ABaseEnemyShip::GetMoveTarget()
{
    return FVector::ZeroVector;
}
