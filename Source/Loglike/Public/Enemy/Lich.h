// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy/RangedMonsterBase.h"
#include "Lich.generated.h"

/**
 * 
 */


UCLASS()
class LOGLIKE_API ALich : public ARangedMonsterBase
{
	GENERATED_BODY()

public:
	ALich();

	// Attack Func(virtual)
	// virtual void BeginPlay() override;
	virtual void AttackStart() override;
	// virtual void AttackEnd() override;

	// Ranged Actor Projectile manage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "projectile")
	TSubclassOf<class AProjectile> Projectile;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "projectile")
	// class AProjectile* Projectile;

};
