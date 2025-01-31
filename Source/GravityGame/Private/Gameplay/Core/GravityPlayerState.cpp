// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/Core/GravityPlayerState.h"

AGravityPlayerState::AGravityPlayerState()
{
	GravityManager = CreateDefaultSubobject<UGravityManager>(TEXT("GravityManager"));
	CharacterSwapper = CreateDefaultSubobject<UCharacterSwapper>(TEXT("CharacterSwapper"));
}