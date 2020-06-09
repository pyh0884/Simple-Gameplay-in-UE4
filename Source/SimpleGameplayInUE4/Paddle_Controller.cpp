// Fill out your copyright notice in the Description page of Project Settings.


#include "Paddle_Controller.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "Paddle.h"

APaddle_Controller::APaddle_Controller()
{
}

void APaddle_Controller::SetupInputComponent()
{

	Super::SetupInputComponent();
	EnableInput(this);

	InputComponent->BindAxis("MoveRight", this, &APaddle_Controller::MoveHorizontal);
}

void APaddle_Controller::BeginPlay()
{
	TArray<AActor*> CameraActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);
	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);
}

void APaddle_Controller::MoveHorizontal(float AxisValue)
{
	auto MyPawn = Cast<APaddle>(GetPawn());
	if (MyPawn)
	{
		MyPawn->MoveHorizontal(AxisValue);
	}
}
