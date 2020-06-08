// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter_GameMode.h"
#include "GameFramework/Actor.h"

AMyCharacter_GameMode::AMyCharacter_GameMode() 
{
	PrimaryActorTick.bCanEverTick = true;

}


void AMyCharacter_GameMode::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &AMyCharacter_GameMode::SpawnPlayerHeal, FMath::RandRange(2, 5), true);

}

void AMyCharacter_GameMode::Tick(float Deltatime)
{
	Super::Tick(Deltatime);
}

void AMyCharacter_GameMode::SpawnPlayerHeal()
{
	float RandomX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandomY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector SpawnPosition = FVector(RandomX, RandomY, Spawn_Z);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(PlayerHeal,&SpawnPosition,&SpawnRotation);


}
