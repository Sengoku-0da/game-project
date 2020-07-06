// Copyright Epic Games, Inc. All Rights Reserved.

#include "AprojectGameMode.h"
#include "AprojectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAprojectGameMode::AAprojectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
