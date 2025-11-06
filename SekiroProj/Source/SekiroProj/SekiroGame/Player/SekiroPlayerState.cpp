// Fill out your copyright notice in the Description page of Project Settings.


#include "SekiroGame/Player/SekiroPlayerState.h"

ASekiroPlayerState::ASekiroPlayerState()
{
	// 얼마나 자주 서버가 클라이언트를 업데이트할지에 대한 값
	SetNetUpdateFrequency(100.0f);
}
