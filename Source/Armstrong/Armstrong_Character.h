// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Components/TimelineComponent.h"
#include "Components/BoxComponent.h"

#include "Armstrong_Character.generated.h"

UCLASS()
class ARMSTRONG_API AArmstrong_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AArmstrong_Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Init")
		void InitCharacter(int iMaxHealth, int iHealth, int iMaxMagic, int iMagic);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		int MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		int CurrentHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float HealthPercentage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		int PreviousHealthPercentage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		bool bHealthCanBeDamaged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magic")
		int MaxMagic;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magic")
		int CurrentMagic;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magic")
		float MagicPercentage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magic")
		int PreviousMagicPercentage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		bool bMagicCanBeDamaged;

	UFUNCTION(BlueprintPure, Category = "Health")
		FText GetHealthText();
	UFUNCTION(BlueprintCallable, Category = "Health")
		void UpdateMaxHealth(int iMaxHealthChange);
	UFUNCTION(BlueprintCallable, Category = "Health")
		void UpdateHealth(int iHealthChange);
	UFUNCTION(BlueprintCallable, Category = "Health")
		void ReceiveHealthDamage(int iHealthDamage);

	UFUNCTION(BlueprintPure, Category = "Magic")
		FText GetMagicText();
	UFUNCTION(BlueprintCallable, Category = "Magic")
		void UpdateMaxMagic(int iMaxMagicChange);
	UFUNCTION(BlueprintCallable, Category = "Magic")
		void UpdateMagic(int iMagicChange);
	UFUNCTION(BlueprintCallable, Category = "Magic")
		void ReceiveMagicDamage(int iMagicDamage);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Invalidation")
		bool bInvalidationFlag;
};