// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/Components/Combat/PlayerCombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASekiroWeaponKatana;
struct FGameplayTag;
#ifdef SEKIROPROJ_PlayerCombatComponent_generated_h
#error "PlayerCombatComponent.generated.h already included, missing '#pragma once' in PlayerCombatComponent.h"
#endif
#define SEKIROPROJ_PlayerCombatComponent_generated_h

#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Combat_PlayerCombatComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlayerCurrentEquippedWeapon); \
	DECLARE_FUNCTION(execGetPlayerCarriedWeaponByTag);


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Combat_PlayerCombatComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerCombatComponent(); \
	friend struct Z_Construct_UClass_UPlayerCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerCombatComponent, UPawnCombatComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SekiroProj"), NO_API) \
	DECLARE_SERIALIZER(UPlayerCombatComponent)


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Combat_PlayerCombatComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerCombatComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerCombatComponent(UPlayerCombatComponent&&); \
	UPlayerCombatComponent(const UPlayerCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerCombatComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerCombatComponent) \
	NO_API virtual ~UPlayerCombatComponent();


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Combat_PlayerCombatComponent_h_13_PROLOG
#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Combat_PlayerCombatComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Combat_PlayerCombatComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Combat_PlayerCombatComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Combat_PlayerCombatComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIROPROJ_API UClass* StaticClass<class UPlayerCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Combat_PlayerCombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
