// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/GameModeBase.h"
#include "FPShooterUEGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FPSHOOTERUE_API AFPShooterUEGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	virtual void StartPlay() override;
	
};
