// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/SekiroTypes/SekiroEnumTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEKIROPROJ_SekiroEnumTypes_generated_h
#error "SekiroEnumTypes.generated.h already included, missing '#pragma once' in SekiroEnumTypes.h"
#endif
#define SEKIROPROJ_SekiroEnumTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_SekiroTypes_SekiroEnumTypes_h


#define FOREACH_ENUM_ESEKIROCONFIRMTYPE(op) \
	op(ESekiroConfirmType::Yes) \
	op(ESekiroConfirmType::No) 

enum class ESekiroConfirmType : uint8;
template<> struct TIsUEnumClass<ESekiroConfirmType> { enum { Value = true }; };
template<> SEKIROPROJ_API UEnum* StaticEnum<ESekiroConfirmType>();

#define FOREACH_ENUM_ESEKIROVALIDTYPE(op) \
	op(ESekiroValidType::Valid) \
	op(ESekiroValidType::Invalid) 

enum class ESekiroValidType : uint8;
template<> struct TIsUEnumClass<ESekiroValidType> { enum { Value = true }; };
template<> SEKIROPROJ_API UEnum* StaticEnum<ESekiroValidType>();

#define FOREACH_ENUM_ESEKIROSUCCESSTYPE(op) \
	op(ESekiroSuccessType::Successful) \
	op(ESekiroSuccessType::Failed) 

enum class ESekiroSuccessType : uint8;
template<> struct TIsUEnumClass<ESekiroSuccessType> { enum { Value = true }; };
template<> SEKIROPROJ_API UEnum* StaticEnum<ESekiroSuccessType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
