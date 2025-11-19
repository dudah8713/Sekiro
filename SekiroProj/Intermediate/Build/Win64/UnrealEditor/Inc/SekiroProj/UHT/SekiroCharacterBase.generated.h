// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/Character/SekiroCharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEKIROPROJ_SekiroCharacterBase_generated_h
#error "SekiroCharacterBase.generated.h already included, missing '#pragma once' in SekiroCharacterBase.h"
#endif
#define SEKIROPROJ_SekiroCharacterBase_generated_h

#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroCharacterBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASekiroCharacterBase(); \
	friend struct Z_Construct_UClass_ASekiroCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ASekiroCharacterBase, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SekiroProj"), NO_API) \
	DECLARE_SERIALIZER(ASekiroCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ASekiroCharacterBase*>(this); }


#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroCharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASekiroCharacterBase(ASekiroCharacterBase&&); \
	ASekiroCharacterBase(const ASekiroCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASekiroCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASekiroCharacterBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASekiroCharacterBase) \
	NO_API virtual ~ASekiroCharacterBase();


#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroCharacterBase_h_15_PROLOG
#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroCharacterBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroCharacterBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroCharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIROPROJ_API UClass* StaticClass<class ASekiroCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
