// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GravityGameFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GRAVITYGAME_API UGravityGameFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void RerunConstructionScripts(AActor* Target);
};
