// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSHOOTERUE_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define FPSHOOTERUE_FPSCharacter_generated_h

#define FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend FPSHOOTERUE_API class UClass* Z_Construct_UClass_AFPSCharacter(); \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPShooterUE"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend FPSHOOTERUE_API class UClass* Z_Construct_UClass_AFPSCharacter(); \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPShooterUE"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define FPShooterUE_Source_FPShooterUE_FPSCharacter_h_9_PROLOG
#define FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_RPC_WRAPPERS \
	FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_INCLASS \
	FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FPShooterUE_Source_FPShooterUE_FPSCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPShooterUE_Source_FPShooterUE_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
