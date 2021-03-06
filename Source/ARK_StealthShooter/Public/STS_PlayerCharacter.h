// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "STS_BaseCharacter.h"

#include "STS_PlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class ARK_STEALTHSHOOTER_API ASTS_PlayerCharacter : public ASTS_BaseCharacter
{
	GENERATED_BODY()

	ASTS_PlayerCharacter();

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Camera")
	UCameraComponent* CameraComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Camera")
	USpringArmComponent* SpringArmComponent;
	
	void MoveForward(float AxisValue);

	void MoveRight(float AxisValue);

	void StartCrouch();

	void StopCrouch();
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual FVector GetPawnViewLocation() const override;
};
