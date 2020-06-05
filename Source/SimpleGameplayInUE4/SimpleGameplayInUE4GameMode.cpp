// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleGameplayInUE4GameMode.h"
#include "SimpleGameplayInUE4Character.h"
#include "UObject/ConstructorHelpers.h"

ASimpleGameplayInUE4GameMode::ASimpleGameplayInUE4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
