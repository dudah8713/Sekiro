// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/Items/Weapons/SekiroWeaponBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SEKIROPROJ_SekiroWeaponBase_generated_h
#error "SekiroWeaponBase.generated.h already included, missing '#pragma once' in SekiroWeaponBase.h"
#endif
#define SEKIROPROJ_SekiroWeaponBase_generated_h

#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCollisionBoxEndOverlap); \
	DECLARE_FUNCTION(execOnCollisionBoxBeginOverlap);


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASekiroWeaponBase(); \
	friend struct Z_Construct_UClass_ASekiroWeaponBase_Statics; \
public: \
	DECLARE_CLASS(ASekiroWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SekiroProj"), NO_API) \
	DECLARE_SERIALIZER(ASekiroWeaponBase)


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASekiroWeaponBase(ASekiroWeaponBase&&); \
	ASekiroWeaponBase(const ASekiroWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASekiroWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASekiroWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASekiroWeaponBase) \
	NO_API virtual ~ASekiroWeaponBase();


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponBase_h_13_PROLOG
#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIROPROJ_API UClass* StaticClass<class ASekiroWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
