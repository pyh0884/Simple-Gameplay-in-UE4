// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyCharacter_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEGAMEPLAYINUE4_API AMyCharacter_GameMode : public AGameMode
{
	GENERATED_BODY()

		AMyCharacter_GameMode();

	virtual void BeginPlay() override;
	virtual void Tick(float Deltatime) override;
	UPROPERTY(EditAnywhere)
		TSubclassOf<APawn> PlayerHeal;
	float Spawn_Z = 500.0f;

	UPROPERTY(EditAnywhere)
		float Spawn_X_Min;

	UPROPERTY(EditAnywhere)
		float Spawn_X_Max;
	UPROPERTY(EditAnywhere)
		float Spawn_Y_Min;

	UPROPERTY(EditAnywhere)
		float Spawn_Y_Max;
	void SpawnPlayerHeal();
};
