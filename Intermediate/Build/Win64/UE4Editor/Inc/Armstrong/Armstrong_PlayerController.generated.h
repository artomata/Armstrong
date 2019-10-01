// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARMSTRONG_Armstrong_PlayerController_generated_h
#error "Armstrong_PlayerController.generated.h already included, missing '#pragma once' in Armstrong_PlayerController.h"
#endif
#define ARMSTRONG_Armstrong_PlayerController_generated_h

#define Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_RPC_WRAPPERS
#define Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArmstrong_PlayerController(); \
	friend struct Z_Construct_UClass_AArmstrong_PlayerController_Statics; \
public: \
	DECLARE_CLASS(AArmstrong_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Armstrong"), NO_API) \
	DECLARE_SERIALIZER(AArmstrong_PlayerController)


#define Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAArmstrong_PlayerController(); \
	friend struct Z_Construct_UClass_AArmstrong_PlayerController_Statics; \
public: \
	DECLARE_CLASS(AArmstrong_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Armstrong"), NO_API) \
	DECLARE_SERIALIZER(AArmstrong_PlayerController)


#define Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArmstrong_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArmstrong_PlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmstrong_PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmstrong_PlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmstrong_PlayerController(AArmstrong_PlayerController&&); \
	NO_API AArmstrong_PlayerController(const AArmstrong_PlayerController&); \
public:


#define Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArmstrong_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmstrong_PlayerController(AArmstrong_PlayerController&&); \
	NO_API AArmstrong_PlayerController(const AArmstrong_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmstrong_PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmstrong_PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArmstrong_PlayerController)


#define Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_PRIVATE_PROPERTY_OFFSET
#define Armstrong_Source_Armstrong_Armstrong_PlayerController_h_13_PROLOG
#define Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_RPC_WRAPPERS \
	Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_INCLASS \
	Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_INCLASS_NO_PURE_DECLS \
	Armstrong_Source_Armstrong_Armstrong_PlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARMSTRONG_API UClass* StaticClass<class AArmstrong_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Armstrong_Source_Armstrong_Armstrong_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
