// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerShip.h"

APlayerShip::APlayerShip()
{
    PrimaryActorTick.bCanEverTick = true;
}

void APlayerShip::BeginPlay()
{
    Super::BeginPlay();
}

void APlayerShip::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void APlayerShip::StartFire()
{
}

void APlayerShip::StopFire()
{
}

void APlayerShip::MoveRight(float AxisValue)
{
}

void APlayerShip::MoveUp(float AxisValue)
{
}

float APlayerShip::GetShipAxisAdjustment()
{
    return 0;
}

float APlayerShip::GetShipConstantVelocity()
{
    return 0;
}

FSAgentInfo APlayerShip::GetPlayerAgentInfo()
{
    return FSAgentInfo();
}

int32 APlayerShip::GetPlayerControllerID()
{
    return 0;
}

bool APlayerShip::HasDiedRecently()
{
    return false;
}

void APlayerShip::OnPlayerDied(AActor* Killer)
{
}

void APlayerShip::UpdateHoverPitch()
{
}

float APlayerShip::GetMaxSpeed()
{
    return 0;
}

void APlayerShip::ClampToCameraBounds()
{
}

void APlayerShip::FireWeapon()
{
}
