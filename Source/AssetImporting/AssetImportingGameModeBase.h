// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/GameModeBase.h"
#include "AssetImportingGameModeBase.generated.h"


USTRUCT(BlueprintType)
struct FExampleData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	FExampleData() {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float Health = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float Mana = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float Attack = 2.f;
};

/**
 * 
 */
UCLASS()
class ASSETIMPORTING_API AAssetImportingGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	
	
	
};
