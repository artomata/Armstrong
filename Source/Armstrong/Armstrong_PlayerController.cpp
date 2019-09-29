// Fill out your copyright notice in the Description page of Project Settings.

#include "Armstrong.h"
#include "Armstrong_PlayerController.h"

void AArmstrong_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	//SetInputMode(FInputModeGameAndUI());
	this->SetInputMode(FInputModeGameOnly());	
}