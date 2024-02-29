// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	ABasePawn();

protected:
	void RotateTurret(FVector LookAtTarget);

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
	class UCapsuleComponent* CapsuleComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* BaseMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* TurretMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
	USceneComponent* ProjectileSpawnPoint;

};

/**
 * * UPROPERTY Values:
 * * Edit
 * 		* AnyWhere
 * 		* DefaultsOnly
 * 		* InstanceOnly
 * * Visible
 * 		* AnyWhere
 * 		* DefaultsOnly
 * 		* InstanceOnly 
 * 
 * * Blueprint
 * 		* ReadWrite
 * 		* ReadOnly
 * 
 * * meta
 * 		* = (AllowPrivateAccess = TRUE | FASLSE)
 * 
 * * Category = STRING 
*/
