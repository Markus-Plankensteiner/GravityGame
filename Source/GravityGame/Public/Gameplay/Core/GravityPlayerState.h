// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/CharacterSwapper.h"
#include "Components/GravityManager.h"
#include "GameFramework/PlayerState.h"
#include "GravityPlayerState.generated.h"

/**
 * Gravity Games base Player State
 */
UCLASS(Blueprintable, BlueprintType)
class GRAVITYGAME_API AGravityPlayerState : public APlayerState
{
	GENERATED_BODY()
	AGravityPlayerState();
	
public:
	/** Please add a variable description */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Default")
	TObjectPtr<UGravityManager> GravityManager;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Default")
	TObjectPtr<UCharacterSwapper> CharacterSwapper;
};
