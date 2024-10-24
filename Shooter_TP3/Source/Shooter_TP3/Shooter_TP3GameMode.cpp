// Copyright Epic Games, Inc. All Rights Reserved.

#include "Shooter_TP3GameMode.h"
#include "Shooter_TP3Character.h"
#include "UObject/ConstructorHelpers.h"

AShooter_TP3GameMode::AShooter_TP3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
