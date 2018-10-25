// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeatDetector/Scripts/Sound/BluePrintClass/BPAudioManagerFMOD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPAudioManagerFMOD() {}
// Cross Module References
	BEATDETECTOR_API UClass* Z_Construct_UClass_UBPAudioManagerFMOD_NoRegister();
	BEATDETECTOR_API UClass* Z_Construct_UClass_UBPAudioManagerFMOD();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BeatDetector();
	BEATDETECTOR_API UFunction* Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName();
	BEATDETECTOR_API UFunction* Z_Construct_UFunction_UBPAudioManagerFMOD_InitializeManager();
	BEATDETECTOR_API UFunction* Z_Construct_UFunction_UBPAudioManagerFMOD_PauseSong();
	BEATDETECTOR_API UFunction* Z_Construct_UFunction_UBPAudioManagerFMOD_PlaySong();
// End Cross Module References
	void UBPAudioManagerFMOD::StaticRegisterNativesUBPAudioManagerFMOD()
	{
		UClass* Class = UBPAudioManagerFMOD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSongName", &UBPAudioManagerFMOD::execGetSongName },
			{ "InitializeManager", &UBPAudioManagerFMOD::execInitializeManager },
			{ "PauseSong", &UBPAudioManagerFMOD::execPauseSong },
			{ "PlaySong", &UBPAudioManagerFMOD::execPlaySong },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName_Statics
	{
		struct BPAudioManagerFMOD_eventGetSongName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000582, 1, nullptr, STRUCT_OFFSET(BPAudioManagerFMOD_eventGetSongName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Access" },
		{ "ModuleRelativePath", "Scripts/Sound/BluePrintClass/BPAudioManagerFMOD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPAudioManagerFMOD, "GetSongName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BPAudioManagerFMOD_eventGetSongName_Parms), Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPAudioManagerFMOD_InitializeManager_Statics
	{
		struct BPAudioManagerFMOD_eventInitializeManager_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBPAudioManagerFMOD_InitializeManager_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BPAudioManagerFMOD_eventInitializeManager_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPAudioManagerFMOD_InitializeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPAudioManagerFMOD_InitializeManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPAudioManagerFMOD_InitializeManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Scripts/Sound/BluePrintClass/BPAudioManagerFMOD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPAudioManagerFMOD_InitializeManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPAudioManagerFMOD, "InitializeManager", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BPAudioManagerFMOD_eventInitializeManager_Parms), Z_Construct_UFunction_UBPAudioManagerFMOD_InitializeManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBPAudioManagerFMOD_InitializeManager_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPAudioManagerFMOD_InitializeManager_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBPAudioManagerFMOD_InitializeManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPAudioManagerFMOD_InitializeManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPAudioManagerFMOD_InitializeManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPAudioManagerFMOD_PauseSong_Statics
	{
		struct BPAudioManagerFMOD_eventPauseSong_Parms
		{
			bool pause;
		};
		static void NewProp_pause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBPAudioManagerFMOD_PauseSong_Statics::NewProp_pause_SetBit(void* Obj)
	{
		((BPAudioManagerFMOD_eventPauseSong_Parms*)Obj)->pause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPAudioManagerFMOD_PauseSong_Statics::NewProp_pause = { UE4CodeGen_Private::EPropertyClass::Bool, "pause", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BPAudioManagerFMOD_eventPauseSong_Parms), &Z_Construct_UFunction_UBPAudioManagerFMOD_PauseSong_Statics::NewProp_pause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPAudioManagerFMOD_PauseSong_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPAudioManagerFMOD_PauseSong_Statics::NewProp_pause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPAudioManagerFMOD_PauseSong_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "Scripts/Sound/BluePrintClass/BPAudioManagerFMOD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPAudioManagerFMOD_PauseSong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPAudioManagerFMOD, "PauseSong", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BPAudioManagerFMOD_eventPauseSong_Parms), Z_Construct_UFunction_UBPAudioManagerFMOD_PauseSong_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBPAudioManagerFMOD_PauseSong_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPAudioManagerFMOD_PauseSong_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBPAudioManagerFMOD_PauseSong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPAudioManagerFMOD_PauseSong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPAudioManagerFMOD_PauseSong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPAudioManagerFMOD_PlaySong_Statics
	{
		struct BPAudioManagerFMOD_eventPlaySong_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBPAudioManagerFMOD_PlaySong_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BPAudioManagerFMOD_eventPlaySong_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPAudioManagerFMOD_PlaySong_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPAudioManagerFMOD_PlaySong_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPAudioManagerFMOD_PlaySong_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "Scripts/Sound/BluePrintClass/BPAudioManagerFMOD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPAudioManagerFMOD_PlaySong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPAudioManagerFMOD, "PlaySong", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BPAudioManagerFMOD_eventPlaySong_Parms), Z_Construct_UFunction_UBPAudioManagerFMOD_PlaySong_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBPAudioManagerFMOD_PlaySong_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPAudioManagerFMOD_PlaySong_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBPAudioManagerFMOD_PlaySong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPAudioManagerFMOD_PlaySong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPAudioManagerFMOD_PlaySong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPAudioManagerFMOD_NoRegister()
	{
		return UBPAudioManagerFMOD::StaticClass();
	}
	struct Z_Construct_UClass_UBPAudioManagerFMOD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPAudioManagerFMOD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BeatDetector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPAudioManagerFMOD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPAudioManagerFMOD_GetSongName, "GetSongName" }, // 320213362
		{ &Z_Construct_UFunction_UBPAudioManagerFMOD_InitializeManager, "InitializeManager" }, // 3739653640
		{ &Z_Construct_UFunction_UBPAudioManagerFMOD_PauseSong, "PauseSong" }, // 3783096474
		{ &Z_Construct_UFunction_UBPAudioManagerFMOD_PlaySong, "PlaySong" }, // 330775131
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPAudioManagerFMOD_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scripts/Sound/BluePrintClass/BPAudioManagerFMOD.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Scripts/Sound/BluePrintClass/BPAudioManagerFMOD.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPAudioManagerFMOD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPAudioManagerFMOD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPAudioManagerFMOD_Statics::ClassParams = {
		&UBPAudioManagerFMOD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBPAudioManagerFMOD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBPAudioManagerFMOD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPAudioManagerFMOD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPAudioManagerFMOD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBPAudioManagerFMOD, 2883280984);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPAudioManagerFMOD(Z_Construct_UClass_UBPAudioManagerFMOD, &UBPAudioManagerFMOD::StaticClass, TEXT("/Script/BeatDetector"), TEXT("UBPAudioManagerFMOD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPAudioManagerFMOD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
