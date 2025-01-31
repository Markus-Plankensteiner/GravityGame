// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterSwapper.generated.h"

UENUM(BlueprintType)
enum class ECharacter : uint8
{
	Kazooie,
	IceChicken,
	EvilKazooie
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable, BlueprintType)
class GRAVITYGAME_API UCharacterSwapper : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCharacterSwapper();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

private:
	/** The current character */
	UPROPERTY(EditDefaultsOnly, Category="Default")
	ECharacter Character;

public:
	UFUNCTION(BlueprintCallable, Blueprintable, Category="Character")
	ECharacter GetCharacter() const
	{
		return Character;
	}

	UFUNCTION(BlueprintCallable, Category="Character")
	void SetCharacter(ECharacter NewCharacter)
	{
		Character = NewCharacter;
	}
};
