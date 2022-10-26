// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestingModulesGameMode.h"
#include "TestingModulesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestingModulesGameMode::ATestingModulesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
