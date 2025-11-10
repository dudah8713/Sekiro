// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/Actor/SekiroEffectActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SEKIROPROJ_SekiroEffectActor_generated_h
#error "SekiroEffectActor.generated.h already included, missing '#pragma once' in SekiroEffectActor.h"
#endif
#define SEKIROPROJ_SekiroEffectActor_generated_h

#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Actor_SekiroEffectActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Actor_SekiroEffectActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASekiroEffectActor(); \
	friend struct Z_Construct_UClass_ASekiroEffectActor_Statics; \
public: \
	DECLARE_CLASS(ASekiroEffectActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SekiroProj"), NO_API) \
	DECLARE_SERIALIZER(ASekiroEffectActor)


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Actor_SekiroEffectActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASekiroEffectActor(ASekiroEffectActor&&); \
	ASekiroEffectActor(const ASekiroEffectActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASekiroEffectActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASekiroEffectActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASekiroEffectActor) \
	NO_API virtual ~ASekiroEffectActor();


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Actor_SekiroEffectActor_h_11_PROLOG
#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Actor_SekiroEffectActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Actor_SekiroEffectActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Actor_SekiroEffectActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Actor_SekiroEffectActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIROPROJ_API UClass* StaticClass<class ASekiroEffectActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Actor_SekiroEffectActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
