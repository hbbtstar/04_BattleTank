// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BattleTank/Public/Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	
public:
	ATank* GetControlledTank() const;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void AimTowardsCrosshair();

private:
	bool GetSightRayHitLocation(FVector& HitLocation);
};
