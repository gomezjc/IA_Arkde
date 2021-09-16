// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "STS_BaseCharacter.generated.h"

class ASTS_Weapon;

UCLASS()
class ARK_STEALTHSHOOTER_API ASTS_BaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASTS_BaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASTS_Weapon> StartWeaponClass;

	UPROPERTY(BlueprintReadOnly)
	ASTS_Weapon* CurrentWeapon;

	UPROPERTY(EditDefaultsOnly)
	FName WeaponSocketName;

	UFUNCTION(BlueprintCallable)
	void StartFire();
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
