// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseProjectile.h"

ABaseProjectile::ABaseProjectile()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ABaseProjectile::BeginPlay()
{
    Super::BeginPlay();
}
