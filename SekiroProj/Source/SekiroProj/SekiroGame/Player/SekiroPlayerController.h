// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/PlayerController.h"
#include "SekiroPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SEKIROPROJ_API ASekiroPlayerController : public APlayerController, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	ASekiroPlayerController();

	//~ Begin IGenericTeamAgentInterface
	virtual FGenericTeamId GetGenericTeamId() const override;
	//~ End IGenericTeamAgentInterface
	
private:
	FGenericTeamId PlayerTeamId;
};
