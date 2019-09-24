// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "Armstrong_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class ARMSTRONG_API AArmstrong_GameMode : public AGameModeBase
{
	GENERATED_BODY()
	
	public:
		UFUNCTION(BlueprintCallable, Category = "UMG Game")
		void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);

	protected:
		virtual void BeginPlay() override;

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG Game")
		TSubclassOf<UUserWidget> StartingWidgetClass;

		UPROPERTY()
		UUserWidget* CurrentWidget;
};
