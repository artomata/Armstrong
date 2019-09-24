// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Armstrong/Armstrong_GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmstrong_GameMode() {}
// Cross Module References
	ARMSTRONG_API UClass* Z_Construct_UClass_AArmstrong_GameMode_NoRegister();
	ARMSTRONG_API UClass* Z_Construct_UClass_AArmstrong_GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Armstrong();
	ARMSTRONG_API UFunction* Z_Construct_UFunction_AArmstrong_GameMode_ChangeMenuWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AArmstrong_GameMode::StaticRegisterNativesAArmstrong_GameMode()
	{
		UClass* Class = AArmstrong_GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMenuWidget", &AArmstrong_GameMode::execChangeMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArmstrong_GameMode_ChangeMenuWidget_Statics
	{
		struct Armstrong_GameMode_eventChangeMenuWidget_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AArmstrong_GameMode_ChangeMenuWidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Armstrong_GameMode_eventChangeMenuWidget_Parms, NewWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArmstrong_GameMode_ChangeMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmstrong_GameMode_ChangeMenuWidget_Statics::NewProp_NewWidgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmstrong_GameMode_ChangeMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMG Game" },
		{ "ModuleRelativePath", "Armstrong_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArmstrong_GameMode_ChangeMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArmstrong_GameMode, nullptr, "ChangeMenuWidget", sizeof(Armstrong_GameMode_eventChangeMenuWidget_Parms), Z_Construct_UFunction_AArmstrong_GameMode_ChangeMenuWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_GameMode_ChangeMenuWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArmstrong_GameMode_ChangeMenuWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AArmstrong_GameMode_ChangeMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArmstrong_GameMode_ChangeMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArmstrong_GameMode_ChangeMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AArmstrong_GameMode_NoRegister()
	{
		return AArmstrong_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AArmstrong_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartingWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmstrong_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Armstrong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AArmstrong_GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArmstrong_GameMode_ChangeMenuWidget, "ChangeMenuWidget" }, // 3371715532
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmstrong_GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Armstrong_GameMode.h" },
		{ "ModuleRelativePath", "Armstrong_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmstrong_GameMode_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Armstrong_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArmstrong_GameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmstrong_GameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArmstrong_GameMode_Statics::NewProp_CurrentWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmstrong_GameMode_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmstrong_GameMode_Statics::NewProp_StartingWidgetClass_MetaData[] = {
		{ "Category", "UMG Game" },
		{ "ModuleRelativePath", "Armstrong_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AArmstrong_GameMode_Statics::NewProp_StartingWidgetClass = { "StartingWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmstrong_GameMode, StartingWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AArmstrong_GameMode_Statics::NewProp_StartingWidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmstrong_GameMode_Statics::NewProp_StartingWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmstrong_GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmstrong_GameMode_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmstrong_GameMode_Statics::NewProp_StartingWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmstrong_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmstrong_GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmstrong_GameMode_Statics::ClassParams = {
		&AArmstrong_GameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AArmstrong_GameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AArmstrong_GameMode_Statics::PropPointers),
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AArmstrong_GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AArmstrong_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmstrong_GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmstrong_GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmstrong_GameMode, 904478735);
	template<> ARMSTRONG_API UClass* StaticClass<AArmstrong_GameMode>()
	{
		return AArmstrong_GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmstrong_GameMode(Z_Construct_UClass_AArmstrong_GameMode, &AArmstrong_GameMode::StaticClass, TEXT("/Script/Armstrong"), TEXT("AArmstrong_GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmstrong_GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
