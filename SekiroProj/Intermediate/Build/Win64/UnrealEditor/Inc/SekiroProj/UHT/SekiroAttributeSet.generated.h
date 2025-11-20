// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/AbilitySystem/SekiroAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef SEKIROPROJ_SekiroAttributeSet_generated_h
#error "SekiroAttributeSet.generated.h already included, missing '#pragma once' in SekiroAttributeSet.h"
#endif
#define SEKIROPROJ_SekiroAttributeSet_generated_h

#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxPosture); \
	DECLARE_FUNCTION(execOnRep_Posture); \
	DECLARE_FUNCTION(execOnRep_MaxStamina); \
	DECLARE_FUNCTION(execOnRep_Stamina); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSekiroAttributeSet(); \
	friend struct Z_Construct_UClass_USekiroAttributeSet_Statics; \
public: \
	DECLARE_CLASS(USekiroAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SekiroProj"), NO_API) \
	DECLARE_SERIALIZER(USekiroAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Stamina, \
		MaxStamina, \
		Posture, \
		MaxPosture, \
		NETFIELD_REP_END=MaxPosture	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USekiroAttributeSet) \
public:


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USekiroAttributeSet(USekiroAttributeSet&&); \
	USekiroAttributeSet(const USekiroAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USekiroAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USekiroAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USekiroAttributeSet) \
	NO_API virtual ~USekiroAttributeSet();


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h_18_PROLOG
#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIROPROJ_API UClass* StaticClass<class USekiroAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
