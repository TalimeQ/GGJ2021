// Copyright Epic Games, Inc. All Rights Reserved.

#include "AiTestGameMode.h"
#include "AiTestHUD.h"
#include "AiTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAiTestGameMode::AAiTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAiTestHUD::StaticClass();
}
