// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"



#include "Paddle_Controller.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEGAMEPLAYINUE4_API APaddle_Controller : public APlayerController
{
	GENERATED_BODY()

		APaddle_Controller();

	UFUNCTION()
		virtual void SetupInputComponent() override;
protected:
	virtual void BeginPlay() override;
	void MoveHorizontal(float AxisValue);

};
