// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectileWeapon.h"
#include "BaseProjectile.h"

AProjectileWeapon::AProjectileWeapon()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AProjectileWeapon::StartFire()
{
}

void AProjectileWeapon::StopFire()
{
}

void AProjectileWeapon::PlayFireEffects()
{
}

void AProjectileWeapon::FireProjectile()
{
}

FTransform AProjectileWeapon::GetProjectileSpawnTransform()
{
    return FTransform::Identity;
}

bool AProjectileWeapon::ReadyToFire()
{
    return false;
}

ABaseProjectile* AProjectileWeapon::SpawnProjectile()
{
    return nullptr;
}
