// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Tank.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

ATank* ATankAIController::GetPlayerTank() const
{
	ATank* PlayerTank = nullptr; 
	PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Error, TEXT("Warning! No player tank found."));
		return PlayerTank;
	}
	return PlayerTank;
}



