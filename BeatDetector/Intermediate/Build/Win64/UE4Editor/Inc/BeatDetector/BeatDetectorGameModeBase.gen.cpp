// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeatDetector/BeatDetectorGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeatDetectorGameModeBase() {}
// Cross Module References
	BEATDETECTOR_API UClass* Z_Construct_UClass_ABeatDetectorGameModeBase_NoRegister();
	BEATDETECTOR_API UClass* Z_Construct_UClass_ABeatDetectorGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BeatDetector();
// End Cross Module References
	void ABeatDetectorGameModeBase::StaticRegisterNativesABeatDetectorGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABeatDetectorGameModeBase_NoRegister()
	{
		return ABeatDetectorGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABeatDetectorGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABeatDetectorGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BeatDetector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeatDetectorGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BeatDetectorGameModeBase.h" },
		{ "ModuleRelativePath", "BeatDetectorGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABeatDetectorGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABeatDetectorGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABeatDetectorGameModeBase_Statics::ClassParams = {
		&ABeatDetectorGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABeatDetectorGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABeatDetectorGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABeatDetectorGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABeatDetectorGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABeatDetectorGameModeBase, 1270633550);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABeatDetectorGameModeBase(Z_Construct_UClass_ABeatDetectorGameModeBase, &ABeatDetectorGameModeBase::StaticClass, TEXT("/Script/BeatDetector"), TEXT("ABeatDetectorGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABeatDetectorGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif