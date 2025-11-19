// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/Player/SekiroPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEKIROPROJ_SekiroPlayerState_generated_h
#error "SekiroPlayerState.generated.h already included, missing '#pragma once' in SekiroPlayerState.h"
#endif
#define SEKIROPROJ_SekiroPlayerState_generated_h

#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_SekiroPlayerState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASekiroPlayerState(); \
	friend struct Z_Construct_UClass_ASekiroPlayerState_Statics; \
public: \
	DECLARE_CLASS(ASekiroPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SekiroProj"), NO_API) \
	DECLARE_SERIALIZER(ASekiroPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ASekiroPlayerState*>(this); }


#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_SekiroPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASekiroPlayerState(ASekiroPlayerState&&); \
	ASekiroPlayerState(const ASekiroPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASekiroPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASekiroPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASekiroPlayerState) \
	NO_API virtual ~ASekiroPlayerState();


#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_SekiroPlayerState_h_15_PROLOG
#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_SekiroPlayerState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_SekiroPlayerState_h_18_INCLASS_NO_PURE_DECLS \
	FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_SekiroPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIROPROJ_API UClass* StaticClass<class ASekiroPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_SekiroPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
