// Copyright Epic Games, Inc. All Rights Reserved.

#include "WeAllDiceGameMode.h"
#include "WeAllDiceCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWeAllDiceGameMode::AWeAllDiceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
