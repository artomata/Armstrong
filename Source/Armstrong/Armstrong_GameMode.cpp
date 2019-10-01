// Fill out your copyright notice in the Description page of Project Settings.

#include "Armstrong.h"
#include "Armstrong_GameMode.h"

void AArmstrong_GameMode::BeginPlay()
{
	Super::BeginPlay();
	ChangeLevel(FName(*StartingLevel->GetName())); //Force load level
	ChangeMenuWidget(StartingWidgetClass); //Force load Main Menu
}

void AArmstrong_GameMode::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
	if (CurrentWidget != nullptr)
	{
		CurrentWidget->RemoveFromViewport();
		CurrentWidget = nullptr;
	}

	if (NewWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), NewWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

void AArmstrong_GameMode::ChangeLevel(FName strLevel)
{
	if (CurrentLevel == nullptr)
	{
		//AUTOLOAD Init Level
		UGameplayStatics::OpenLevel(GetWorld(), "MainMenu");
	}
	else
	{
		FString strCurrentLevel = CurrentLevel->GetMapName();
		if (strLevel != FName(*strCurrentLevel))
		{
			UGameplayStatics::OpenLevel(GetWorld(), strLevel);
		}
	}
}