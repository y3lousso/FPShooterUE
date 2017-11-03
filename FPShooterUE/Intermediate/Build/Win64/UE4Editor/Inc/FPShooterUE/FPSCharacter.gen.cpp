// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FPSCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}
// Cross Module References
	FPSHOOTERUE_API UFunction* Z_Construct_UFunction_AFPSCharacter_Fire();
	FPSHOOTERUE_API UClass* Z_Construct_UClass_AFPSCharacter();
	FPSHOOTERUE_API UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForward();
	FPSHOOTERUE_API UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRight();
	FPSHOOTERUE_API UFunction* Z_Construct_UFunction_AFPSCharacter_StartJump();
	FPSHOOTERUE_API UFunction* Z_Construct_UFunction_AFPSCharacter_StopJump();
	FPSHOOTERUE_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPShooterUE();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	FPSHOOTERUE_API UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
	{
		UClass* Class = AFPSCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Fire", (Native)&AFPSCharacter::execFire },
			{ "MoveForward", (Native)&AFPSCharacter::execMoveForward },
			{ "MoveRight", (Native)&AFPSCharacter::execMoveRight },
			{ "StartJump", (Native)&AFPSCharacter::execStartJump },
			{ "StopJump", (Native)&AFPSCharacter::execStopJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_Fire()
	{
		UObject* Outer = Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Fire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Function that handles firing projectiles."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForward()
	{
		struct FPSCharacter_eventMoveForward_Parms
		{
			float Value;
		};
		UObject* Outer = Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveForward"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(FPSCharacter_eventMoveForward_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, FPSCharacter_eventMoveForward_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Handles input for moving forward and backward."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRight()
	{
		struct FPSCharacter_eventMoveRight_Parms
		{
			float Value;
		};
		UObject* Outer = Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveRight"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(FPSCharacter_eventMoveRight_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, FPSCharacter_eventMoveRight_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Handles input for moving right and left."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_StartJump()
	{
		UObject* Outer = Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartJump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets jump flag when key is pressed."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_StopJump()
	{
		UObject* Outer = Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopJump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Clears jump flag when key is released."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
	{
		return AFPSCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_FPShooterUE();
			OuterClass = AFPSCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_Fire());
				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_MoveForward());
				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_MoveRight());
				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_StartJump());
				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_StopJump());

				UProperty* NewProp_FPSMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FPSMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FPSMesh, AFPSCharacter), 0x00100000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_FPSCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FPSCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FPSCameraComponent, AFPSCharacter), 0x00100000000a0009, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_ProjectileClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ProjectileClass, AFPSCharacter), 0x0014000000010001, Z_Construct_UClass_AFPSProjectile_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_MuzzleOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MuzzleOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MuzzleOffset, AFPSCharacter), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSCharacter_Fire(), "Fire"); // 3713227011
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSCharacter_MoveForward(), "MoveForward"); // 2998213706
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSCharacter_MoveRight(), "MoveRight"); // 382616966
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSCharacter_StartJump(), "StartJump"); // 3975135218
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSCharacter_StopJump(), "StopJump"); // 2223382923
				static TCppClassTypeInfo<TCppClassTypeTraits<AFPSCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_FPSMesh, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_FPSMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FPSMesh, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_FPSMesh, TEXT("ToolTip"), TEXT("First-person mesh (arms), visible only to the owning player."));
				MetaData->SetValue(NewProp_FPSCameraComponent, TEXT("Category"), TEXT("FPSCharacter"));
				MetaData->SetValue(NewProp_FPSCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FPSCameraComponent, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_FPSCameraComponent, TEXT("ToolTip"), TEXT("FPS camera."));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ToolTip"), TEXT("Projectile class to spawn."));
				MetaData->SetValue(NewProp_MuzzleOffset, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_MuzzleOffset, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_MuzzleOffset, TEXT("ToolTip"), TEXT("Gun muzzle's offset from the camera location."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSCharacter, 2244077790);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSCharacter(Z_Construct_UClass_AFPSCharacter, &AFPSCharacter::StaticClass, TEXT("/Script/FPShooterUE"), TEXT("AFPSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
