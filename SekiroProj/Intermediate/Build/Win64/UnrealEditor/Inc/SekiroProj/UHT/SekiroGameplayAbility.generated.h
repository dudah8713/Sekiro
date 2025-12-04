// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/AbilitySystem/Abilities/SekiroGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPawnCombatComponent;
class USekiroAbilitySystemComponent;
enum class ESekiroSuccessType : uint8;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectSpecHandle;
#ifdef SEKIROPROJ_SekiroGameplayAbility_generated_h
#error "SekiroGameplayAbility.generated.h already included, missing '#pragma once' in SekiroGameplayAbility.h"
#endif
#define SEKIROPROJ_SekiroGameplayAbility_generated_h

#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroGameplayAbility_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_ApplyEffectSpecHandleToTarget); \
	DECLARE_FUNCTION(execGetSekiroASCFromActorInfo); \
	DECLARE_FUNCTION(execGetPawnCombatComponentFromActorInfo);


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroGameplayAbility_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSekiroGameplayAbility(); \
	friend struct Z_Construct_UClass_USekiroGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(USekiroGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SekiroProj"), NO_API) \
	DECLARE_SERIALIZER(USekiroGameplayAbility)


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroGameplayAbility_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USekiroGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USekiroGameplayAbility(USekiroGameplayAbility&&); \
	USekiroGameplayAbility(const USekiroGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USekiroGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USekiroGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USekiroGameplayAbility) \
	NO_API virtual ~USekiroGameplayAbility();


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroGameplayAbility_h_24_PROLOG
#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroGameplayAbility_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroGameplayAbility_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroGameplayAbility_h_27_INCLASS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroGameplayAbility_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIROPROJ_API UClass* StaticClass<class USekiroGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroGameplayAbility_h


#define FOREACH_ENUM_ESEKIROABILITYACTIVATIONPOLICY(op) \
	op(ESekiroAbilityActivationPolicy::OnTriggered) \
	op(ESekiroAbilityActivationPolicy::OnGiven) 

enum class ESekiroAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<ESekiroAbilityActivationPolicy> { enum { Value = true }; };
template<> SEKIROPROJ_API UEnum* StaticEnum<ESekiroAbilityActivationPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
