// Fill out your copyright notice in the Description page of Project Settings.

#include "SekiroGame/Character/SekiroSamurai.h"
#include "SekiroGame/Player/SekiroPlayerState.h"
#include "AbilitySystemComponent.h"

void ASekiroSamurai::InitAbilityActorInfo()
{
	ASekiroPlayerState* SekiroPlayerState = GetPlayerState<ASekiroPlayerState>();
	check(SekiroPlayerState);

	SekiroPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(SekiroPlayerState, this);
	AbilitySystemComponent = SekiroPlayerState->GetAbilitySystemComponent();
	AttributeSet = SekiroPlayerState->GetAttributeSet();
}

void ASekiroSamurai::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// for Server
	InitAbilityActorInfo();
}

void ASekiroSamurai::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	//for Client
	InitAbilityActorInfo();
}

