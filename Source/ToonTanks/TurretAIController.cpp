// Fill out your copyright notice in the Description page of Project Settings.

#include "TurretAIController.h"
#include "Kismet/GameplayStatics.h"

void ATurretAIController::BeginPlay()
{
    Super::BeginPlay();

    PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}

void ATurretAIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!PlayerPawn)
        return;

    if (LineOfSightTo(PlayerPawn))
    {
        MoveToActor(PlayerPawn, 200.f);
    }
}
