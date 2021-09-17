// Copyright Epic Games, Inc. All Rights Reserved.

#include "FGAstarGameMode.h"
#include "FGAstarCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFGAstarGameMode::AFGAstarGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
