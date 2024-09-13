// Fill out your copyright notice in the Description page of Project Settings.


#include "GravityGame/Public/GravityGameFunctionLibrary.h"

void UGravityGameFunctionLibrary::RerunConstructionScripts(AActor* Target)
{
	if (Target) {
		Target->RerunConstructionScripts();
	}
}