// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BaseGameMode.generated.h"

UCLASS()
class ABaseGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float RespawnDelay;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FTimerHandle ShipSpawnTimer;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FTimerHandle StationarySpawnTimer;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float PickUpSpawnPercentage;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    TArray<TSubclassOf<AActor>> PowerUpList;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UDataTable* PlayerAgentInfoTable;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FVector2D MaxRelativePlayerOffset;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float TimeOfLastDeath;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AddScore(int Amount);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void EndGame(bool bSuccess);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ResetGame();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartGame();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void RespawnPlayer(APlayerController* PlayerController);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void TrySpawnPowerUp();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FVector GetPowerUpSpawnLocation();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    AActor* GetWorldCameraActor();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FVector GetWorldScrollVelocity();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float GetDistanceTravelled();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnEnemyDied(AActor* Killer);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnPlayerDied(AActor* Killer);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SetPlayerViewCamera(APlayerController* PlayerController);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ConsumeLife(APlayerController* PlayerController);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool HasRemainingLives(APlayerController* PlayerController);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnRestartPlayer(AController* NewPlayer);

protected:
    virtual void BeginPlay() override;
};
