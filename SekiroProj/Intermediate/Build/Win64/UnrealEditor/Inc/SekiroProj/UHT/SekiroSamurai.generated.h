// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/Character/SekiroSamurai.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEKIROPROJ_SekiroSamurai_generated_h
#error "SekiroSamurai.generated.h already included, missing '#pragma once' in SekiroSamurai.h"
#endif
#define SEKIROPROJ_SekiroSamurai_generated_h

#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroSamurai_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASekiroSamurai(); \
	friend struct Z_Construct_UClass_ASekiroSamurai_Statics; \
public: \
	DECLARE_CLASS(ASekiroSamurai, ASekiroCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SekiroProj"), NO_API) \
	DECLARE_SERIALIZER(ASekiroSamurai)


#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroSamurai_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASekiroSamurai(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASekiroSamurai(ASekiroSamurai&&); \
	ASekiroSamurai(const ASekiroSamurai&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASekiroSamurai); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASekiroSamurai); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASekiroSamurai) \
	NO_API virtual ~ASekiroSamurai();


#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroSamurai_h_16_PROLOG
#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroSamurai_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroSamurai_h_19_INCLASS_NO_PURE_DECLS \
	FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroSamurai_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIROPROJ_API UClass* StaticClass<class ASekiroSamurai>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroSamurai_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
