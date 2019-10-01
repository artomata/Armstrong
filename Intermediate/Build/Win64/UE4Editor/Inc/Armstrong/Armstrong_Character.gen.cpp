// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Armstrong/Armstrong_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmstrong_Character() {}
// Cross Module References
	ARMSTRONG_API UClass* Z_Construct_UClass_AArmstrong_Character_NoRegister();
	ARMSTRONG_API UClass* Z_Construct_UClass_AArmstrong_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Armstrong();
	ARMSTRONG_API UFunction* Z_Construct_UFunction_AArmstrong_Character_GetHealthText();
	ARMSTRONG_API UFunction* Z_Construct_UFunction_AArmstrong_Character_GetMagicText();
	ARMSTRONG_API UFunction* Z_Construct_UFunction_AArmstrong_Character_InitCharacter();
	ARMSTRONG_API UFunction* Z_Construct_UFunction_AArmstrong_Character_ReceiveHealthDamage();
	ARMSTRONG_API UFunction* Z_Construct_UFunction_AArmstrong_Character_ReceiveMagicDamage();
	ARMSTRONG_API UFunction* Z_Construct_UFunction_AArmstrong_Character_UpdateHealth();
	ARMSTRONG_API UFunction* Z_Construct_UFunction_AArmstrong_Character_UpdateMagic();
	ARMSTRONG_API UFunction* Z_Construct_UFunction_AArmstrong_Character_UpdateMaxHealth();
	ARMSTRONG_API UFunction* Z_Construct_UFunction_AArmstrong_Character_UpdateMaxMagic();
// End Cross Module References
	void AArmstrong_Character::StaticRegisterNativesAArmstrong_Character()
	{
		UClass* Class = AArmstrong_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHealthText", &AArmstrong_Character::execGetHealthText },
			{ "GetMagicText", &AArmstrong_Character::execGetMagicText },
			{ "InitCharacter", &AArmstrong_Character::execInitCharacter },
			{ "ReceiveHealthDamage", &AArmstrong_Character::execReceiveHealthDamage },
			{ "ReceiveMagicDamage", &AArmstrong_Character::execReceiveMagicDamage },
			{ "UpdateHealth", &AArmstrong_Character::execUpdateHealth },
			{ "UpdateMagic", &AArmstrong_Character::execUpdateMagic },
			{ "UpdateMaxHealth", &AArmstrong_Character::execUpdateMaxHealth },
			{ "UpdateMaxMagic", &AArmstrong_Character::execUpdateMaxMagic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArmstrong_Character_GetHealthText_Statics
	{
		struct Armstrong_Character_eventGetHealthText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AArmstrong_Character_GetHealthText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Armstrong_Character_eventGetHealthText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArmstrong_Character_GetHealthText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmstrong_Character_GetHealthText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmstrong_Character_GetHealthText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArmstrong_Character_GetHealthText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArmstrong_Character, nullptr, "GetHealthText", sizeof(Armstrong_Character_eventGetHealthText_Parms), Z_Construct_UFunction_AArmstrong_Character_GetHealthText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_GetHealthText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArmstrong_Character_GetHealthText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_GetHealthText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArmstrong_Character_GetHealthText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArmstrong_Character_GetHealthText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArmstrong_Character_GetMagicText_Statics
	{
		struct Armstrong_Character_eventGetMagicText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AArmstrong_Character_GetMagicText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Armstrong_Character_eventGetMagicText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArmstrong_Character_GetMagicText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmstrong_Character_GetMagicText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmstrong_Character_GetMagicText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArmstrong_Character_GetMagicText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArmstrong_Character, nullptr, "GetMagicText", sizeof(Armstrong_Character_eventGetMagicText_Parms), Z_Construct_UFunction_AArmstrong_Character_GetMagicText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_GetMagicText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArmstrong_Character_GetMagicText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_GetMagicText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArmstrong_Character_GetMagicText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArmstrong_Character_GetMagicText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics
	{
		struct Armstrong_Character_eventInitCharacter_Parms
		{
			int32 iMaxHealth;
			int32 iHealth;
			int32 iMaxMagic;
			int32 iMagic;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iMagic;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iMaxMagic;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iHealth;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iMaxHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics::NewProp_iMagic = { "iMagic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Armstrong_Character_eventInitCharacter_Parms, iMagic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics::NewProp_iMaxMagic = { "iMaxMagic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Armstrong_Character_eventInitCharacter_Parms, iMaxMagic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics::NewProp_iHealth = { "iHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Armstrong_Character_eventInitCharacter_Parms, iHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics::NewProp_iMaxHealth = { "iMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Armstrong_Character_eventInitCharacter_Parms, iMaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics::NewProp_iMagic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics::NewProp_iMaxMagic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics::NewProp_iHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics::NewProp_iMaxHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArmstrong_Character, nullptr, "InitCharacter", sizeof(Armstrong_Character_eventInitCharacter_Parms), Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArmstrong_Character_InitCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArmstrong_Character_InitCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArmstrong_Character_ReceiveHealthDamage_Statics
	{
		struct Armstrong_Character_eventReceiveHealthDamage_Parms
		{
			int32 iHealthDamage;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iHealthDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AArmstrong_Character_ReceiveHealthDamage_Statics::NewProp_iHealthDamage = { "iHealthDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Armstrong_Character_eventReceiveHealthDamage_Parms, iHealthDamage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArmstrong_Character_ReceiveHealthDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmstrong_Character_ReceiveHealthDamage_Statics::NewProp_iHealthDamage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmstrong_Character_ReceiveHealthDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArmstrong_Character_ReceiveHealthDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArmstrong_Character, nullptr, "ReceiveHealthDamage", sizeof(Armstrong_Character_eventReceiveHealthDamage_Parms), Z_Construct_UFunction_AArmstrong_Character_ReceiveHealthDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_ReceiveHealthDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArmstrong_Character_ReceiveHealthDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_ReceiveHealthDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArmstrong_Character_ReceiveHealthDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArmstrong_Character_ReceiveHealthDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArmstrong_Character_ReceiveMagicDamage_Statics
	{
		struct Armstrong_Character_eventReceiveMagicDamage_Parms
		{
			int32 iMagicDamage;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iMagicDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AArmstrong_Character_ReceiveMagicDamage_Statics::NewProp_iMagicDamage = { "iMagicDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Armstrong_Character_eventReceiveMagicDamage_Parms, iMagicDamage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArmstrong_Character_ReceiveMagicDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmstrong_Character_ReceiveMagicDamage_Statics::NewProp_iMagicDamage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmstrong_Character_ReceiveMagicDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArmstrong_Character_ReceiveMagicDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArmstrong_Character, nullptr, "ReceiveMagicDamage", sizeof(Armstrong_Character_eventReceiveMagicDamage_Parms), Z_Construct_UFunction_AArmstrong_Character_ReceiveMagicDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_ReceiveMagicDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArmstrong_Character_ReceiveMagicDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_ReceiveMagicDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArmstrong_Character_ReceiveMagicDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArmstrong_Character_ReceiveMagicDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArmstrong_Character_UpdateHealth_Statics
	{
		struct Armstrong_Character_eventUpdateHealth_Parms
		{
			int32 iHealthChange;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iHealthChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AArmstrong_Character_UpdateHealth_Statics::NewProp_iHealthChange = { "iHealthChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Armstrong_Character_eventUpdateHealth_Parms, iHealthChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArmstrong_Character_UpdateHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmstrong_Character_UpdateHealth_Statics::NewProp_iHealthChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmstrong_Character_UpdateHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArmstrong_Character_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArmstrong_Character, nullptr, "UpdateHealth", sizeof(Armstrong_Character_eventUpdateHealth_Parms), Z_Construct_UFunction_AArmstrong_Character_UpdateHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_UpdateHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArmstrong_Character_UpdateHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_UpdateHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArmstrong_Character_UpdateHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArmstrong_Character_UpdateHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArmstrong_Character_UpdateMagic_Statics
	{
		struct Armstrong_Character_eventUpdateMagic_Parms
		{
			int32 iMagicChange;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iMagicChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AArmstrong_Character_UpdateMagic_Statics::NewProp_iMagicChange = { "iMagicChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Armstrong_Character_eventUpdateMagic_Parms, iMagicChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArmstrong_Character_UpdateMagic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmstrong_Character_UpdateMagic_Statics::NewProp_iMagicChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmstrong_Character_UpdateMagic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArmstrong_Character_UpdateMagic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArmstrong_Character, nullptr, "UpdateMagic", sizeof(Armstrong_Character_eventUpdateMagic_Parms), Z_Construct_UFunction_AArmstrong_Character_UpdateMagic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_UpdateMagic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArmstrong_Character_UpdateMagic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_UpdateMagic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArmstrong_Character_UpdateMagic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArmstrong_Character_UpdateMagic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArmstrong_Character_UpdateMaxHealth_Statics
	{
		struct Armstrong_Character_eventUpdateMaxHealth_Parms
		{
			int32 iMaxHealthChange;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iMaxHealthChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AArmstrong_Character_UpdateMaxHealth_Statics::NewProp_iMaxHealthChange = { "iMaxHealthChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Armstrong_Character_eventUpdateMaxHealth_Parms, iMaxHealthChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArmstrong_Character_UpdateMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmstrong_Character_UpdateMaxHealth_Statics::NewProp_iMaxHealthChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmstrong_Character_UpdateMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArmstrong_Character_UpdateMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArmstrong_Character, nullptr, "UpdateMaxHealth", sizeof(Armstrong_Character_eventUpdateMaxHealth_Parms), Z_Construct_UFunction_AArmstrong_Character_UpdateMaxHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_UpdateMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArmstrong_Character_UpdateMaxHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_UpdateMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArmstrong_Character_UpdateMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArmstrong_Character_UpdateMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArmstrong_Character_UpdateMaxMagic_Statics
	{
		struct Armstrong_Character_eventUpdateMaxMagic_Parms
		{
			int32 iMaxMagicChange;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iMaxMagicChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AArmstrong_Character_UpdateMaxMagic_Statics::NewProp_iMaxMagicChange = { "iMaxMagicChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Armstrong_Character_eventUpdateMaxMagic_Parms, iMaxMagicChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArmstrong_Character_UpdateMaxMagic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmstrong_Character_UpdateMaxMagic_Statics::NewProp_iMaxMagicChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmstrong_Character_UpdateMaxMagic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArmstrong_Character_UpdateMaxMagic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArmstrong_Character, nullptr, "UpdateMaxMagic", sizeof(Armstrong_Character_eventUpdateMaxMagic_Parms), Z_Construct_UFunction_AArmstrong_Character_UpdateMaxMagic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_UpdateMaxMagic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArmstrong_Character_UpdateMaxMagic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_Character_UpdateMaxMagic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArmstrong_Character_UpdateMaxMagic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArmstrong_Character_UpdateMaxMagic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AArmstrong_Character_NoRegister()
	{
		return AArmstrong_Character::StaticClass();
	}
	struct Z_Construct_UClass_AArmstrong_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvalidationFlag_MetaData[];
#endif
		static void NewProp_bInvalidationFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvalidationFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMagicCanBeDamaged_MetaData[];
#endif
		static void NewProp_bMagicCanBeDamaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMagicCanBeDamaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousMagicPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PreviousMagicPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagicPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMagic_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentMagic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMagic_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxMagic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHealthCanBeDamaged_MetaData[];
#endif
		static void NewProp_bHealthCanBeDamaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHealthCanBeDamaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousHealthPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PreviousHealthPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmstrong_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Armstrong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AArmstrong_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArmstrong_Character_GetHealthText, "GetHealthText" }, // 3650631779
		{ &Z_Construct_UFunction_AArmstrong_Character_GetMagicText, "GetMagicText" }, // 4286941935
		{ &Z_Construct_UFunction_AArmstrong_Character_InitCharacter, "InitCharacter" }, // 124176531
		{ &Z_Construct_UFunction_AArmstrong_Character_ReceiveHealthDamage, "ReceiveHealthDamage" }, // 2626163252
		{ &Z_Construct_UFunction_AArmstrong_Character_ReceiveMagicDamage, "ReceiveMagicDamage" }, // 3943610693
		{ &Z_Construct_UFunction_AArmstrong_Character_UpdateHealth, "UpdateHealth" }, // 2681425696
		{ &Z_Construct_UFunction_AArmstrong_Character_UpdateMagic, "UpdateMagic" }, // 2287527838
		{ &Z_Construct_UFunction_AArmstrong_Character_UpdateMaxHealth, "UpdateMaxHealth" }, // 3618566623
		{ &Z_Construct_UFunction_AArmstrong_Character_UpdateMaxMagic, "UpdateMaxMagic" }, // 1548360437
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmstrong_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Armstrong_Character.h" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bInvalidationFlag_MetaData[] = {
		{ "Category", "Invalidation" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	void Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bInvalidationFlag_SetBit(void* Obj)
	{
		((AArmstrong_Character*)Obj)->bInvalidationFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bInvalidationFlag = { "bInvalidationFlag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AArmstrong_Character), &Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bInvalidationFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bInvalidationFlag_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bInvalidationFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bMagicCanBeDamaged_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	void Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bMagicCanBeDamaged_SetBit(void* Obj)
	{
		((AArmstrong_Character*)Obj)->bMagicCanBeDamaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bMagicCanBeDamaged = { "bMagicCanBeDamaged", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AArmstrong_Character), &Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bMagicCanBeDamaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bMagicCanBeDamaged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bMagicCanBeDamaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_PreviousMagicPercentage_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_PreviousMagicPercentage = { "PreviousMagicPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmstrong_Character, PreviousMagicPercentage), METADATA_PARAMS(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_PreviousMagicPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_PreviousMagicPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_MagicPercentage_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_MagicPercentage = { "MagicPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmstrong_Character, MagicPercentage), METADATA_PARAMS(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_MagicPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_MagicPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_CurrentMagic_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_CurrentMagic = { "CurrentMagic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmstrong_Character, CurrentMagic), METADATA_PARAMS(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_CurrentMagic_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_CurrentMagic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_MaxMagic_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_MaxMagic = { "MaxMagic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmstrong_Character, MaxMagic), METADATA_PARAMS(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_MaxMagic_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_MaxMagic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bHealthCanBeDamaged_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	void Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bHealthCanBeDamaged_SetBit(void* Obj)
	{
		((AArmstrong_Character*)Obj)->bHealthCanBeDamaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bHealthCanBeDamaged = { "bHealthCanBeDamaged", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AArmstrong_Character), &Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bHealthCanBeDamaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bHealthCanBeDamaged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bHealthCanBeDamaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_PreviousHealthPercentage_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_PreviousHealthPercentage = { "PreviousHealthPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmstrong_Character, PreviousHealthPercentage), METADATA_PARAMS(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_PreviousHealthPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_PreviousHealthPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_HealthPercentage_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_HealthPercentage = { "HealthPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmstrong_Character, HealthPercentage), METADATA_PARAMS(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_HealthPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_HealthPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmstrong_Character, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_CurrentHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Armstrong_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmstrong_Character, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_MaxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_MaxHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmstrong_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bInvalidationFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bMagicCanBeDamaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_PreviousMagicPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_MagicPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_CurrentMagic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_MaxMagic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_bHealthCanBeDamaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_PreviousHealthPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_HealthPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmstrong_Character_Statics::NewProp_MaxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmstrong_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmstrong_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmstrong_Character_Statics::ClassParams = {
		&AArmstrong_Character::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AArmstrong_Character_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AArmstrong_Character_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AArmstrong_Character_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AArmstrong_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmstrong_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmstrong_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmstrong_Character, 3837664739);
	template<> ARMSTRONG_API UClass* StaticClass<AArmstrong_Character>()
	{
		return AArmstrong_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmstrong_Character(Z_Construct_UClass_AArmstrong_Character, &AArmstrong_Character::StaticClass, TEXT("/Script/Armstrong"), TEXT("AArmstrong_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmstrong_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
