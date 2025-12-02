// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/SekiroPlayerController.h"

ASekiroPlayerController::ASekiroPlayerController()
{
	bReplicates = true;
	PlayerTeamId = FGenericTeamId(0);
}

FGenericTeamId ASekiroPlayerController::GetGenericTeamId() const
{
	return PlayerTeamId;
}
