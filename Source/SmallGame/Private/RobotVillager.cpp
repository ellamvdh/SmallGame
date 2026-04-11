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

void ARobotVillager::ATest()
{
	UE_LOG(LogTemp, Warning, TEXT("printed the text!"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("printed the text!"));
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

