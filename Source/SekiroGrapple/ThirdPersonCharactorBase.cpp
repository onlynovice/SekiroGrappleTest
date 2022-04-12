// Fill out your copyright notice in the Description page of Project Settings.


#include "ThirdPersonCharactorBase.h"

// Sets default values
AThirdPersonCharactorBase::AThirdPersonCharactorBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AThirdPersonCharactorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AThirdPersonCharactorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AThirdPersonCharactorBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

