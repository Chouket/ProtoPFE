// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeatDetector/Scripts/Sound/BluePrintClass/BP_SoundManager_FMOD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_SoundManager_FMOD() {}
// Cross Module References
	BEATDETECTOR_API UClass* Z_Construct_UClass_UBP_SoundManager_FMOD_NoRegister();
	BEATDETECTOR_API UClass* Z_Construct_UClass_UBP_SoundManager_FMOD();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BeatDetector();
	BEATDETECTOR_API UFunction* Z_Construct_UFunction_UBP_SoundManager_FMOD_Initialize();
// End Cross Module References
	void UBP_SoundManager_FMOD::StaticRegisterNativesUBP_SoundManager_FMOD()
	{
		UClass* Class = UBP_SoundManager_FMOD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialize", &UBP_SoundManager_FMOD::execInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBP_SoundManager_FMOD_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_SoundManager_FMOD_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Scripts/Sound/BluePrintClass/BP_SoundManager_FMOD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_SoundManager_FMOD_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_SoundManager_FMOD, "Initialize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_SoundManager_FMOD_Initialize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBP_SoundManager_FMOD_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_SoundManager_FMOD_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_SoundManager_FMOD_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBP_SoundManager_FMOD_NoRegister()
	{
		return UBP_SoundManager_FMOD::StaticClass();
	}
	struct Z_Construct_UClass_UBP_SoundManager_FMOD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBP_SoundManager_FMOD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BeatDetector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBP_SoundManager_FMOD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBP_SoundManager_FMOD_Initialize, "Initialize" }, // 851787160
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_SoundManager_FMOD_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/Sound/BluePrintClass/BP_SoundManager_FMOD.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/Sound/BluePrintClass/BP_SoundManager_FMOD.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBP_SoundManager_FMOD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBP_SoundManager_FMOD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBP_SoundManager_FMOD_Statics::ClassParams = {
		&UBP_SoundManager_FMOD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBP_SoundManager_FMOD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBP_SoundManager_FMOD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBP_SoundManager_FMOD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBP_SoundManager_FMOD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBP_SoundManager_FMOD, 4124326513);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBP_SoundManager_FMOD(Z_Construct_UClass_UBP_SoundManager_FMOD, &UBP_SoundManager_FMOD::StaticClass, TEXT("/Script/BeatDetector"), TEXT("UBP_SoundManager_FMOD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBP_SoundManager_FMOD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
