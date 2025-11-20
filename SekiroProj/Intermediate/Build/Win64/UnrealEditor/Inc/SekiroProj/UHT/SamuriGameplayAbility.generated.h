// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/AbilitySystem/Abilities/SamuriGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASekiroPlayerController;
class ASekiroSamurai;
class UPlayerCombatComponent;
#ifdef SEKIROPROJ_SamuriGameplayAbility_generated_h
#error "SamuriGameplayAbility.generated.h already included, missing '#pragma once' in SamuriGameplayAbility.h"
#endif
#define SEKIROPROJ_SamuriGameplayAbility_generated_h

#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SamuriGameplayAbility_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlayerCombatComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetPlayerControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetSamuraiCharacterFromActorInfo);


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SamuriGameplayAbility_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSamuriGameplayAbility(); \
	friend struct Z_Construct_UClass_USamuriGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(USamuriGameplayAbility, USekiroGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SekiroProj"), NO_API) \
	DECLARE_SERIALIZER(USamuriGameplayAbility)


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SamuriGameplayAbility_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USamuriGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USamuriGameplayAbility(USamuriGameplayAbility&&); \
	USamuriGameplayAbility(const USamuriGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USamuriGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USamuriGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USamuriGameplayAbility) \
	NO_API virtual ~USamuriGameplayAbility();


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SamuriGameplayAbility_h_15_PROLOG
#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SamuriGameplayAbility_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SamuriGameplayAbility_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SamuriGameplayAbility_h_18_INCLASS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SamuriGameplayAbility_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIROPROJ_API UClass* StaticClass<class USamuriGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SamuriGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
