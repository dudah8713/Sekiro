// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/SekiroSamurai.h"
#include "Player/SekiroPlayerState.h"
#include "AbilitySystemComponent.h"
#include "EnhancedInputSubsystems.h"
#include "AbilitySystem/SekiroAbilitySystemComponent.h"
#include "Player/SekiroPlayerController.h"
#include "DataAssets/Input/DataAsset_InputConfig.h"
#include "Components/Input/SekiroEnhancedInputComponent.h"
#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "Components/Combat/PlayerCombatComponent.h"
#include "UI/SekiroHUD.h"


ASekiroSamurai::ASekiroSamurai()
{
	PlayerCombatComponent = CreateDefaultSubobject<UPlayerCombatComponent>("PlayerCombatComponent");
}

void ASekiroSamurai::InitAbilityActorInfo()
{
	ASekiroPlayerState* SekiroPlayerState = GetPlayerState<ASekiroPlayerState>();
	check(SekiroPlayerState);

	SekiroPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(SekiroPlayerState, this);
	SekiroASC = SekiroPlayerState->GetSekiroAbilitySystemComponent();
	AttributeSet = SekiroPlayerState->GetAttributeSet();

	if (ASekiroPlayerController* SekiroPlayerController = Cast<ASekiroPlayerController>(GetController()))
	{
		if (ASekiroHUD* SekiroHUD = Cast<ASekiroHUD>(SekiroPlayerController->GetHUD()))
		{
			SekiroHUD->InitOverlay(SekiroPlayerController, SekiroPlayerState, SekiroASC, AttributeSet);
		}
	}
}

void ASekiroSamurai::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// for Server
	InitAbilityActorInfo();

	if (!CharacterStartUpData.IsNull())
	{
		// 동기 로딩
		if (UDataAsset_StartUpDataBase* LoadedData = CharacterStartUpData.LoadSynchronous())
		{
			int32 AbilityApplyLevel = 1;
			LoadedData->GiveToAbilitySystemComponent(SekiroASC, AbilityApplyLevel);
		}
	}
}

void ASekiroSamurai::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	//for Client
	InitAbilityActorInfo();
}

void ASekiroSamurai::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	checkf(InputConfigDataAsset, TEXT("Forgot to assign a valid data asset as input config"))
	ULocalPlayer* LocalPlayer = GetController<APlayerController>()->GetLocalPlayer();
	UEnhancedInputLocalPlayerSubsystem* SubSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);

	check(SubSystem);
	SubSystem->AddMappingContext(InputConfigDataAsset->DefaultMappingContext, 0);

	USekiroEnhancedInputComponent* SekiroInputComponent = CastChecked<USekiroEnhancedInputComponent>(PlayerInputComponent);

	SekiroInputComponent->BindAbilityInputAction(InputConfigDataAsset, this,
		&ThisClass::Input_AbilityInputPressed, &ThisClass::Input_AbilityInputReleased);
}

void ASekiroSamurai::Input_AbilityInputPressed(const FGameplayTag InInputTag)
{
	SekiroASC->OnAbilityInputPressed(InInputTag);
}

void ASekiroSamurai::Input_AbilityInputReleased(const FGameplayTag InInputTag)
{
	SekiroASC->OnAbilityInputReleased(InInputTag);
}

