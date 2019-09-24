// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Armstrong/Armstrong_PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmstrong_PlayerController() {}
// Cross Module References
	ARMSTRONG_API UClass* Z_Construct_UClass_AArmstrong_PlayerController_NoRegister();
	ARMSTRONG_API UClass* Z_Construct_UClass_AArmstrong_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Armstrong();
// End Cross Module References
	void AArmstrong_PlayerController::StaticRegisterNativesAArmstrong_PlayerController()
	{
	}
	UClass* Z_Construct_UClass_AArmstrong_PlayerController_NoRegister()
	{
		return AArmstrong_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AArmstrong_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmstrong_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Armstrong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmstrong_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Armstrong_PlayerController.h" },
		{ "ModuleRelativePath", "Armstrong_PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmstrong_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmstrong_PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmstrong_PlayerController_Statics::ClassParams = {
		&AArmstrong_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArmstrong_PlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AArmstrong_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmstrong_PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmstrong_PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmstrong_PlayerController, 151898081);
	template<> ARMSTRONG_API UClass* StaticClass<AArmstrong_PlayerController>()
	{
		return AArmstrong_PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmstrong_PlayerController(Z_Construct_UClass_AArmstrong_PlayerController, &AArmstrong_PlayerController::StaticClass, TEXT("/Script/Armstrong"), TEXT("AArmstrong_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmstrong_PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
