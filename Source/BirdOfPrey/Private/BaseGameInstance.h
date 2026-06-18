// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BaseGameInstance.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAgentInfoChange);

USTRUCT(BlueprintType)
struct FSAgentInfo
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FText Name;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    TSubclassOf<AActor> WeaponType;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USkeletalMesh* SkeletalMesh;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    TSubclassOf<UAnimInstance> AnimInstance;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UTexture2D* Image;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float Health;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FLinearColor Colour;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float MeshScale;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float Speed;
};

UCLASS()
class UBaseGameInstance : public UGameInstance
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    TArray<FSAgentInfo> PlayerAgentInfo;

    UPROPERTY(BlueprintAssignable, Category = "BirdOfPrey")
    FOnAgentInfoChange OnAgentInfoChange;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SetPlayerAgentInfoFor(int PlayerControllerID, FSAgentInfo& Info);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FSAgentInfo& GetPlayerAgentInfoFor(int PlayerControllerID, bool& Result);
};
