// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEKIROPROJ_SekiroModeBase_generated_h
#error "SekiroModeBase.generated.h already included, missing '#pragma once' in SekiroModeBase.h"
#endif
#define SEKIROPROJ_SekiroModeBase_generated_h

#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASekiroModeBase(); \
	friend struct Z_Construct_UClass_ASekiroModeBase_Statics; \
public: \
	DECLARE_CLASS(ASekiroModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SekiroProj"), NO_API) \
	DECLARE_SERIALIZER(ASekiroModeBase)


#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASekiroModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASekiroModeBase(ASekiroModeBase&&); \
	ASekiroModeBase(const ASekiroModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASekiroModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASekiroModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASekiroModeBase) \
	NO_API virtual ~ASekiroModeBase();


#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroModeBase_h_12_PROLOG
#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIROPROJ_API UClass* StaticClass<class ASekiroModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
