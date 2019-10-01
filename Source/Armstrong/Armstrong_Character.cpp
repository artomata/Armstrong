// Fill out your copyright notice in the Description page of Project Settings.

#include "Armstrong.h"
#include "Armstrong_Character.h"

#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h"

#include "Kismet/KismetMathLibrary.h"

// Sets default values
AArmstrong_Character::AArmstrong_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArmstrong_Character::BeginPlay()
{
	Super::BeginPlay();

	MaxHealth = 100;
	CurrentHealth = MaxHealth;
	HealthPercentage = 1.0f;
	PreviousHealthPercentage = HealthPercentage;
	bHealthCanBeDamaged = true;

	MaxMagic = 100;
	CurrentMagic = MaxMagic;
	MagicPercentage = 1.0f;
	PreviousMagicPercentage = MagicPercentage;
	bMagicCanBeDamaged = true;

	bInvalidationFlag = true;
}

// Called every frame
void AArmstrong_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bInvalidationFlag)
	{
		//Call UI for updates

		bInvalidationFlag = false; //Turn off again
	}
}

// Called to bind functionality to input
void AArmstrong_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AArmstrong_Character::InitCharacter(int iMaxHealth, int iHealth, int iMaxMagic, int iMagic)
{
	MaxHealth = iMaxHealth;
	CurrentHealth = iHealth;
	PreviousHealthPercentage = HealthPercentage = CurrentHealth / MaxHealth;
	bHealthCanBeDamaged = true;

	MaxMagic = iMaxMagic;
	CurrentMagic = iMagic;
	PreviousMagicPercentage = MagicPercentage = CurrentMagic / MaxMagic;
	bMagicCanBeDamaged = true;

	bInvalidationFlag = true;
}

FText AArmstrong_Character::GetHealthText()
{
	FString strHealth = FString::FromInt(CurrentHealth) + FString(TEXT(" / ")) + FString::FromInt(MaxHealth);
	FText HPText = FText::FromString(strHealth);

	return HPText;
}
	
void AArmstrong_Character::UpdateMaxHealth(int iMaxHealthChange) //Positive equals increase
{
	MaxHealth += iMaxHealthChange;
	CurrentHealth = MaxHealth;

	bInvalidationFlag = true;
}

void AArmstrong_Character::UpdateHealth(int iHealthChange) //Positive equals increase
{
	CurrentHealth += iHealthChange;
	CurrentHealth = FMath::Clamp(CurrentHealth, 0, MaxHealth);
	PreviousHealthPercentage = HealthPercentage;
	HealthPercentage = CurrentHealth / MaxHealth;
}

void AArmstrong_Character::ReceiveHealthDamage(int iHealthChange) //Positive equals increase
{
	UpdateHealth(iHealthChange);

	bInvalidationFlag = true;
}

FText AArmstrong_Character::GetMagicText()
{
	FString strMagic = FString::FromInt(CurrentMagic) + FString(TEXT(" / ")) + FString::FromInt(MaxMagic);
	FText MPText = FText::FromString(strMagic);

	return MPText;
}

void AArmstrong_Character::UpdateMaxMagic(int iMaxMagicChange) //Positive equals increase
{
	MaxMagic += iMaxMagicChange;
	CurrentMagic = MaxMagic;

	bInvalidationFlag = true;
}

void AArmstrong_Character::UpdateMagic(int iMagicChange) //Positive equals increase
{
	CurrentMagic += iMagicChange;
	CurrentMagic = FMath::Clamp(CurrentMagic, 0, MaxMagic);
	PreviousMagicPercentage = MagicPercentage;
	MagicPercentage = CurrentMagic / MaxMagic;
}

void AArmstrong_Character::ReceiveMagicDamage(int iMagicChange) //Positive equals increase
{
	UpdateMagic(iMagicChange);

	bInvalidationFlag = true;
}