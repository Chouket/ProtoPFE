// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEATDETECTOR_BPAudioManagerFMOD_generated_h
#error "BPAudioManagerFMOD.generated.h already included, missing '#pragma once' in BPAudioManagerFMOD.h"
#endif
#define BEATDETECTOR_BPAudioManagerFMOD_generated_h

#define BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSongName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetSongName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseSong) \
	{ \
		P_GET_UBOOL(Z_Param_pause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PauseSong(Z_Param_pause); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySong) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PlaySong(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->InitializeManager(); \
		P_NATIVE_END; \
	}


#define BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSongName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetSongName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseSong) \
	{ \
		P_GET_UBOOL(Z_Param_pause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PauseSong(Z_Param_pause); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySong) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PlaySong(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->InitializeManager(); \
		P_NATIVE_END; \
	}


#define BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBPAudioManagerFMOD(); \
	friend struct Z_Construct_UClass_UBPAudioManagerFMOD_Statics; \
public: \
	DECLARE_CLASS(UBPAudioManagerFMOD, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BeatDetector"), NO_API) \
	DECLARE_SERIALIZER(UBPAudioManagerFMOD)


#define BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUBPAudioManagerFMOD(); \
	friend struct Z_Construct_UClass_UBPAudioManagerFMOD_Statics; \
public: \
	DECLARE_CLASS(UBPAudioManagerFMOD, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BeatDetector"), NO_API) \
	DECLARE_SERIALIZER(UBPAudioManagerFMOD)


#define BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPAudioManagerFMOD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPAudioManagerFMOD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPAudioManagerFMOD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPAudioManagerFMOD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPAudioManagerFMOD(UBPAudioManagerFMOD&&); \
	NO_API UBPAudioManagerFMOD(const UBPAudioManagerFMOD&); \
public:


#define BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPAudioManagerFMOD(UBPAudioManagerFMOD&&); \
	NO_API UBPAudioManagerFMOD(const UBPAudioManagerFMOD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPAudioManagerFMOD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPAudioManagerFMOD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBPAudioManagerFMOD)


#define BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_PRIVATE_PROPERTY_OFFSET
#define BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_16_PROLOG
#define BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_PRIVATE_PROPERTY_OFFSET \
	BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_RPC_WRAPPERS \
	BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_INCLASS \
	BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_PRIVATE_PROPERTY_OFFSET \
	BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_INCLASS_NO_PURE_DECLS \
	BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BeatDetector_Source_BeatDetector_Scripts_Sound_BluePrintClass_BPAudioManagerFMOD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
