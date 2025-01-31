// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/Core/GravityGameState.h"

AGravityGameState::AGravityGameState()
{
	// Create default instances of MissionManager and CoinManager
	MissionManager = CreateDefaultSubobject<UMissionManager>(TEXT("MissionManager"));
	CoinManager = CreateDefaultSubobject<UCoinManager>(TEXT("CoinManager"));
}