// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

public: 

	void Elevate(float degrees);


private: 

	UPROPERTY(EditAnywhere)
	float MaxDegreesPerSecond = 5.0f;

	UPROPERTY(EditAnywhere)
	float MaxElevationDegrees = 20.0f;

	UPROPERTY(EditAnywhere)
	float MinElevationDegrees = 0.0f;


};
