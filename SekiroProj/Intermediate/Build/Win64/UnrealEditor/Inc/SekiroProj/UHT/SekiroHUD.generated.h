// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/UI/SekiroHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEKIROPROJ_SekiroHUD_generated_h
#error "SekiroHUD.generated.h already included, missing '#pragma once' in SekiroHUD.h"
#endif
#define SEKIROPROJ_SekiroHUD_generated_h

#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroHUD_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASekiroHUD(); \
	friend struct Z_Construct_UClass_ASekiroHUD_Statics; \
public: \
	DECLARE_CLASS(ASekiroHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SekiroProj"), NO_API) \
	DECLARE_SERIALIZER(ASekiroHUD)


#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroHUD_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASekiroHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASekiroHUD(ASekiroHUD&&); \
	ASekiroHUD(const ASekiroHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASekiroHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASekiroHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASekiroHUD) \
	NO_API virtual ~ASekiroHUD();


#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroHUD_h_15_PROLOG
#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroHUD_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroHUD_h_18_INCLASS_NO_PURE_DECLS \
	FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIROPROJ_API UClass* StaticClass<class ASekiroHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
