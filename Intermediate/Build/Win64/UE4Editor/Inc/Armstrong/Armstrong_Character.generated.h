// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARMSTRONG_Armstrong_Character_generated_h
#error "Armstrong_Character.generated.h already included, missing '#pragma once' in Armstrong_Character.h"
#endif
#define ARMSTRONG_Armstrong_Character_generated_h

#define Armstrong_Source_Armstrong_Armstrong_Character_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReceiveMagicDamage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMagicDamage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReceiveMagicDamage(Z_Param_iMagicDamage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMagic) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMagicChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMagic(Z_Param_iMagicChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMaxMagic) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMaxMagicChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMaxMagic(Z_Param_iMaxMagicChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagicText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetMagicText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReceiveHealthDamage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iHealthDamage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReceiveHealthDamage(Z_Param_iHealthDamage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateHealth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iHealthChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateHealth(Z_Param_iHealthChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMaxHealth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMaxHealthChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMaxHealth(Z_Param_iMaxHealthChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetHealthText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitCharacter) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMaxHealth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iHealth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMaxMagic); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMagic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitCharacter(Z_Param_iMaxHealth,Z_Param_iHealth,Z_Param_iMaxMagic,Z_Param_iMagic); \
		P_NATIVE_END; \
	}


#define Armstrong_Source_Armstrong_Armstrong_Character_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReceiveMagicDamage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMagicDamage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReceiveMagicDamage(Z_Param_iMagicDamage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMagic) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMagicChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMagic(Z_Param_iMagicChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMaxMagic) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMaxMagicChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMaxMagic(Z_Param_iMaxMagicChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagicText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetMagicText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReceiveHealthDamage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iHealthDamage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReceiveHealthDamage(Z_Param_iHealthDamage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateHealth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iHealthChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateHealth(Z_Param_iHealthChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMaxHealth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMaxHealthChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMaxHealth(Z_Param_iMaxHealthChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetHealthText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitCharacter) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMaxHealth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iHealth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMaxMagic); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMagic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitCharacter(Z_Param_iMaxHealth,Z_Param_iHealth,Z_Param_iMaxMagic,Z_Param_iMagic); \
		P_NATIVE_END; \
	}


#define Armstrong_Source_Armstrong_Armstrong_Character_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArmstrong_Character(); \
	friend struct Z_Construct_UClass_AArmstrong_Character_Statics; \
public: \
	DECLARE_CLASS(AArmstrong_Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Armstrong"), NO_API) \
	DECLARE_SERIALIZER(AArmstrong_Character)


#define Armstrong_Source_Armstrong_Armstrong_Character_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAArmstrong_Character(); \
	friend struct Z_Construct_UClass_AArmstrong_Character_Statics; \
public: \
	DECLARE_CLASS(AArmstrong_Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Armstrong"), NO_API) \
	DECLARE_SERIALIZER(AArmstrong_Character)


#define Armstrong_Source_Armstrong_Armstrong_Character_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArmstrong_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArmstrong_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmstrong_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmstrong_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmstrong_Character(AArmstrong_Character&&); \
	NO_API AArmstrong_Character(const AArmstrong_Character&); \
public:


#define Armstrong_Source_Armstrong_Armstrong_Character_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmstrong_Character(AArmstrong_Character&&); \
	NO_API AArmstrong_Character(const AArmstrong_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmstrong_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmstrong_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArmstrong_Character)


#define Armstrong_Source_Armstrong_Armstrong_Character_h_16_PRIVATE_PROPERTY_OFFSET
#define Armstrong_Source_Armstrong_Armstrong_Character_h_13_PROLOG
#define Armstrong_Source_Armstrong_Armstrong_Character_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Armstrong_Source_Armstrong_Armstrong_Character_h_16_PRIVATE_PROPERTY_OFFSET \
	Armstrong_Source_Armstrong_Armstrong_Character_h_16_RPC_WRAPPERS \
	Armstrong_Source_Armstrong_Armstrong_Character_h_16_INCLASS \
	Armstrong_Source_Armstrong_Armstrong_Character_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Armstrong_Source_Armstrong_Armstrong_Character_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Armstrong_Source_Armstrong_Armstrong_Character_h_16_PRIVATE_PROPERTY_OFFSET \
	Armstrong_Source_Armstrong_Armstrong_Character_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Armstrong_Source_Armstrong_Armstrong_Character_h_16_INCLASS_NO_PURE_DECLS \
	Armstrong_Source_Armstrong_Armstrong_Character_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARMSTRONG_API UClass* StaticClass<class AArmstrong_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Armstrong_Source_Armstrong_Armstrong_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
