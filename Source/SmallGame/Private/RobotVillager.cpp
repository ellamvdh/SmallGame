// Fill out your copyright notice in the Description page of Project Settings.


#include "RobotVillager.h"

// Sets default values
ARobotVillager::ARobotVillager()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARobotVillager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARobotVillager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARobotVillager::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

