// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef ARMSTRONG_Armstrong_GameMode_generated_h
#error "Armstrong_GameMode.generated.h already included, missing '#pragma once' in Armstrong_GameMode.h"
#endif
#define ARMSTRONG_Armstrong_GameMode_generated_h

#define Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeLevel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_strLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeLevel(Z_Param_strLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeMenuWidget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeMenuWidget(Z_Param_NewWidgetClass); \
		P_NATIVE_END; \
	}


#define Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeLevel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_strLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeLevel(Z_Param_strLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeMenuWidget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeMenuWidget(Z_Param_NewWidgetClass); \
		P_NATIVE_END; \
	}


#define Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArmstrong_GameMode(); \
	friend struct Z_Construct_UClass_AArmstrong_GameMode_Statics; \
public: \
	DECLARE_CLASS(AArmstrong_GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Armstrong"), NO_API) \
	DECLARE_SERIALIZER(AArmstrong_GameMode)


#define Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAArmstrong_GameMode(); \
	friend struct Z_Construct_UClass_AArmstrong_GameMode_Statics; \
public: \
	DECLARE_CLASS(AArmstrong_GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Armstrong"), NO_API) \
	DECLARE_SERIALIZER(AArmstrong_GameMode)


#define Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArmstrong_GameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArmstrong_GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmstrong_GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmstrong_GameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmstrong_GameMode(AArmstrong_GameMode&&); \
	NO_API AArmstrong_GameMode(const AArmstrong_GameMode&); \
public:


#define Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArmstrong_GameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmstrong_GameMode(AArmstrong_GameMode&&); \
	NO_API AArmstrong_GameMode(const AArmstrong_GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmstrong_GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmstrong_GameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArmstrong_GameMode)


#define Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartingWidgetClass() { return STRUCT_OFFSET(AArmstrong_GameMode, StartingWidgetClass); } \
	FORCEINLINE static uint32 __PPO__StartingLevel() { return STRUCT_OFFSET(AArmstrong_GameMode, StartingLevel); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AArmstrong_GameMode, CurrentWidget); } \
	FORCEINLINE static uint32 __PPO__CurrentLevel() { return STRUCT_OFFSET(AArmstrong_GameMode, CurrentLevel); }


#define Armstrong_Source_Armstrong_Armstrong_GameMode_h_15_PROLOG
#define Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_RPC_WRAPPERS \
	Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_INCLASS \
	Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_INCLASS_NO_PURE_DECLS \
	Armstrong_Source_Armstrong_Armstrong_GameMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARMSTRONG_API UClass* StaticClass<class AArmstrong_GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Armstrong_Source_Armstrong_Armstrong_GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
