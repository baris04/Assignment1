// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseStationaryEnemy.h"

ABaseStationaryEnemy::ABaseStationaryEnemy()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ABaseStationaryEnemy::BeginPlay()
{
    Super::BeginPlay();
}

void ABaseStationaryEnemy::OnEnemyDied(AActor* Killer)
{
}
