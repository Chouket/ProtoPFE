// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FMODSTUDIO_FMODSettings_generated_h
#error "FMODSettings.generated.h already included, missing '#pragma once' in FMODSettings.h"
#endif
#define FMODSTUDIO_FMODSettings_generated_h

#define BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomPoolSizes_Statics; \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct();


#define BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_RPC_WRAPPERS
#define BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_RPC_WRAPPERS_NO_PURE_DECLS
#define BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFMODSettings(); \
	friend struct Z_Construct_UClass_UFMODSettings_Statics; \
public: \
	DECLARE_CLASS(UFMODSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMODStudio"), NO_API) \
	DECLARE_SERIALIZER(UFMODSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUFMODSettings(); \
	friend struct Z_Construct_UClass_UFMODSettings_Statics; \
public: \
	DECLARE_CLASS(UFMODSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMODStudio"), NO_API) \
	DECLARE_SERIALIZER(UFMODSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFMODSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFMODSettings(UFMODSettings&&); \
	NO_API UFMODSettings(const UFMODSettings&); \
public:


#define BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFMODSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFMODSettings(UFMODSettings&&); \
	NO_API UFMODSettings(const UFMODSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODSettings)


#define BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_PRIVATE_PROPERTY_OFFSET
#define BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_56_PROLOG
#define BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_PRIVATE_PROPERTY_OFFSET \
	BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_RPC_WRAPPERS \
	BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_INCLASS \
	BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_PRIVATE_PROPERTY_OFFSET \
	BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_INCLASS_NO_PURE_DECLS \
	BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_59_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FMODSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BeatDetector_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h


#define FOREACH_ENUM_EFMODSPEAKERMODE(op) \
	op(EFMODSpeakerMode::Stereo) \
	op(EFMODSpeakerMode::Surround_5_1) \
	op(EFMODSpeakerMode::Surround_7_1) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
