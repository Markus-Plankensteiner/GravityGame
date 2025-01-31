// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Components/CoinManager.h"
#include "Components/MissionManager.h"
#include "GravityGameState.generated.h"

/**
 * Gravity Games base Game State
 */
UCLASS(Blueprintable, BlueprintType)
class GRAVITYGAME_API AGravityGameState : public AGameStateBase
{
	GENERATED_BODY()
	AGravityGameState();
	
public:
	/** Please add a variable description */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Default")
	TObjectPtr<UMissionManager> MissionManager;
	
	/** Please add a variable description */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Default")
	TObjectPtr<UCoinManager> CoinManager;
};
