// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/SekiroCharacterBase.h"
#include "SekiroEnemy.generated.h"

/**
 * 
 */
UCLASS()
class SEKIROPROJ_API ASekiroEnemy : public ASekiroCharacterBase
{
	GENERATED_BODY()

public:
	ASekiroEnemy();

protected:
	virtual void BeginPlay() override;
};
