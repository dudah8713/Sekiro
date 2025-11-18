// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/Items/Weapons/SekiroWeaponKatana.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAbilitySpecHandle;
#ifdef SEKIROPROJ_SekiroWeaponKatana_generated_h
#error "SekiroWeaponKatana.generated.h already included, missing '#pragma once' in SekiroWeaponKatana.h"
#endif
#define SEKIROPROJ_SekiroWeaponKatana_generated_h

#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponKatana_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGrantedAbilitySpecHandles); \
	DECLARE_FUNCTION(execAssignGrantedAbilitySpecHandles);


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponKatana_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASekiroWeaponKatana(); \
	friend struct Z_Construct_UClass_ASekiroWeaponKatana_Statics; \
public: \
	DECLARE_CLASS(ASekiroWeaponKatana, ASekiroWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SekiroProj"), NO_API) \
	DECLARE_SERIALIZER(ASekiroWeaponKatana)


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponKatana_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASekiroWeaponKatana(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASekiroWeaponKatana(ASekiroWeaponKatana&&); \
	ASekiroWeaponKatana(const ASekiroWeaponKatana&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASekiroWeaponKatana); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASekiroWeaponKatana); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASekiroWeaponKatana) \
	NO_API virtual ~ASekiroWeaponKatana();


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponKatana_h_14_PROLOG
#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponKatana_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponKatana_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponKatana_h_17_INCLASS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponKatana_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIROPROJ_API UClass* StaticClass<class ASekiroWeaponKatana>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponKatana_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
