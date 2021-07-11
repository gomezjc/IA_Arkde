// Fill out your copyright notice in the Description page of Project Settings.


#include "STS_Weapon.h"

// Sets default values
ASTS_Weapon::ASTS_Weapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	RootComponent = WeaponMesh;
}

// Called when the game starts or when spawned
void ASTS_Weapon::BeginPlay()
{
	Super::BeginPlay();
	
}


