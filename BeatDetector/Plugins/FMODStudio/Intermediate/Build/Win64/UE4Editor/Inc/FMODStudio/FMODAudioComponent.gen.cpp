// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Classes/FMODAudioComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAudioComponent() {}
// Cross Module References
	FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature();
	FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature();
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventProperty();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODOcclusionDetails();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODAttenuationDetails();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetLength();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetParameter();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetProperty();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_IsPlaying();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_Play();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_Release();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetEvent();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetParameter();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetPaused();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetPitch();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetProperty();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetVolume();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_Stop();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_TriggerCue();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics
	{
		struct _Script_FMODStudio_eventOnTimelineBeat_Parms
		{
			int32 Bar;
			int32 Beat;
			int32 Position;
			float Tempo;
			int32 TimeSignatureUpper;
			int32 TimeSignatureLower;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeSignatureLower;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeSignatureUpper;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tempo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Beat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::NewProp_TimeSignatureLower = { UE4CodeGen_Private::EPropertyClass::Int, "TimeSignatureLower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, TimeSignatureLower), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::NewProp_TimeSignatureUpper = { UE4CodeGen_Private::EPropertyClass::Int, "TimeSignatureUpper", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, TimeSignatureUpper), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::NewProp_Tempo = { UE4CodeGen_Private::EPropertyClass::Float, "Tempo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, Tempo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Int, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, Position), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::NewProp_Beat = { UE4CodeGen_Private::EPropertyClass::Int, "Beat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, Beat), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::NewProp_Bar = { UE4CodeGen_Private::EPropertyClass::Int, "Bar", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, Bar), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::NewProp_TimeSignatureLower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::NewProp_TimeSignatureUpper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::NewProp_Tempo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::NewProp_Beat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::NewProp_Bar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "called when we reach a beat on the timeline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FMODStudio, "OnTimelineBeat__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FMODStudio_eventOnTimelineBeat_Parms), Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature_Statics
	{
		struct _Script_FMODStudio_eventOnTimelineMarker_Parms
		{
			FString Name;
			int32 Position;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Int, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineMarker_Parms, Position), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineMarker_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "called when we reach a named marker on the timeline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FMODStudio, "OnTimelineMarker__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FMODStudio_eventOnTimelineMarker_Parms), Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "called when an event stops, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FMODStudio, "OnEventStopped__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EFMODEventProperty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODEventProperty, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODEventProperty"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMODEventProperty(EFMODEventProperty_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMODEventProperty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODEventProperty_CRC() { return 4122414833U; }
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventProperty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMODEventProperty"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMODEventProperty_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFMODEventProperty::ChannelPriority", (int64)EFMODEventProperty::ChannelPriority },
				{ "EFMODEventProperty::ScheduleDelay", (int64)EFMODEventProperty::ScheduleDelay },
				{ "EFMODEventProperty::ScheduleLookahead", (int64)EFMODEventProperty::ScheduleLookahead },
				{ "EFMODEventProperty::MinimumDistance", (int64)EFMODEventProperty::MinimumDistance },
				{ "EFMODEventProperty::MaximumDistance", (int64)EFMODEventProperty::MaximumDistance },
				{ "EFMODEventProperty::Count", (int64)EFMODEventProperty::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ChannelPriority.ToolTip", "Priority to set on low-level channels created by this event instance (-1 to 256)." },
				{ "Count.ToolTip", "Number of options" },
				{ "MaximumDistance.ToolTip", "Override the event's 3D maximum distance, or -1 for default." },
				{ "MinimumDistance.ToolTip", "Override the event's 3D minimum distance, or -1 for default." },
				{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
				{ "ScheduleDelay.ToolTip", "Schedule delay to synchronized playback for multiple tracks in DSP clocks, or -1 for default." },
				{ "ScheduleLookahead.ToolTip", "Schedule look-ahead on the timeline in DSP clocks, or -1 for default." },
				{ "ToolTip", "Event property" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FMODStudio,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFMODEventProperty",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EFMODEventProperty::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFMODOcclusionDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODOcclusionDetails_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODOcclusionDetails, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODOcclusionDetails"), sizeof(FFMODOcclusionDetails), Get_Z_Construct_UScriptStruct_FFMODOcclusionDetails_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODOcclusionDetails(FFMODOcclusionDetails::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODOcclusionDetails"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODOcclusionDetails
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODOcclusionDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FMODOcclusionDetails")),new UScriptStruct::TCppStructOps<FFMODOcclusionDetails>);
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODOcclusionDetails;
	struct Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseComplexCollisionForOcclusion_MetaData[];
#endif
		static void NewProp_bUseComplexCollisionForOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseComplexCollisionForOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionInterpolationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionInterpolationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionVolumeAttenuation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionVolumeAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionLowPassFilterFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionLowPassFilterFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionTraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OcclusionTraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOcclusion_MetaData[];
#endif
		static void NewProp_bEnableOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOcclusion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODOcclusionDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bUseComplexCollisionForOcclusion_MetaData[] = {
		{ "Category", "FMOD|Occlusion" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Whether or not to enable complex geometry occlusion checks." },
	};
#endif
	void Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bUseComplexCollisionForOcclusion_SetBit(void* Obj)
	{
		((FFMODOcclusionDetails*)Obj)->bUseComplexCollisionForOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bUseComplexCollisionForOcclusion = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseComplexCollisionForOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFMODOcclusionDetails), &Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bUseComplexCollisionForOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bUseComplexCollisionForOcclusion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bUseComplexCollisionForOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionInterpolationTime_MetaData[] = {
		{ "Category", "FMOD|Occlusion" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "The amount of time in seconds to interpolate to the target OcclusionLowPassFilterFrequency when a sound is occluded." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionInterpolationTime = { UE4CodeGen_Private::EPropertyClass::Float, "OcclusionInterpolationTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFMODOcclusionDetails, OcclusionInterpolationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionInterpolationTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionInterpolationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionVolumeAttenuation_MetaData[] = {
		{ "Category", "FMOD|Occlusion" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "The amount of volume attenuation to apply to sounds which are occluded." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionVolumeAttenuation = { UE4CodeGen_Private::EPropertyClass::Float, "OcclusionVolumeAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFMODOcclusionDetails, OcclusionVolumeAttenuation), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionVolumeAttenuation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionVolumeAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionLowPassFilterFrequency_MetaData[] = {
		{ "Category", "FMOD|Occlusion" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "The low pass filter frequency (in hertz) to apply if the sound playing in this audio component is occluded. This will override the frequency set in LowPassFilterFrequency. A frequency of 0.0 is the device sample rate and will bypass the filter." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionLowPassFilterFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "OcclusionLowPassFilterFrequency", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFMODOcclusionDetails, OcclusionLowPassFilterFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionLowPassFilterFrequency_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionLowPassFilterFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionTraceChannel_MetaData[] = {
		{ "Category", "FMOD|Occlusion" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Which trace channel to use for audio occlusion checks." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionTraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "OcclusionTraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFMODOcclusionDetails, OcclusionTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionTraceChannel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionTraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bEnableOcclusion_MetaData[] = {
		{ "Category", "FMOD|Occlusion" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Enable Occlusion Settings." },
	};
#endif
	void Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bEnableOcclusion_SetBit(void* Obj)
	{
		((FFMODOcclusionDetails*)Obj)->bEnableOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bEnableOcclusion = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFMODOcclusionDetails), &Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bEnableOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bEnableOcclusion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bEnableOcclusion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bUseComplexCollisionForOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionInterpolationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionVolumeAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionLowPassFilterFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionTraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bEnableOcclusion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		nullptr,
		&NewStructOps,
		"FMODOcclusionDetails",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FFMODOcclusionDetails),
		alignof(FFMODOcclusionDetails),
		Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODOcclusionDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODOcclusionDetails_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODOcclusionDetails"), sizeof(FFMODOcclusionDetails), Get_Z_Construct_UScriptStruct_FFMODOcclusionDetails_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODOcclusionDetails_CRC() { return 3440942005U; }
class UScriptStruct* FFMODAttenuationDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODAttenuationDetails_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODAttenuationDetails, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODAttenuationDetails"), sizeof(FFMODAttenuationDetails), Get_Z_Construct_UScriptStruct_FFMODAttenuationDetails_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODAttenuationDetails(FFMODAttenuationDetails::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODAttenuationDetails"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODAttenuationDetails
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODAttenuationDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FMODAttenuationDetails")),new UScriptStruct::TCppStructOps<FFMODAttenuationDetails>);
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODAttenuationDetails;
	struct Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODAttenuationDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MaximumDistance_MetaData[] = {
		{ "Category", "FMOD|Attenuation" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Override the event's 3D maximum distance." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MaximumDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaximumDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFMODAttenuationDetails, MaximumDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MaximumDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MaximumDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MinimumDistance_MetaData[] = {
		{ "Category", "FMOD|Attenuation" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Override the event's 3D minimum distance." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MinimumDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MinimumDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFMODAttenuationDetails, MinimumDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MinimumDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MinimumDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "FMOD|Attenuation" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Should we use Attenuation set in Studio or be able to modify in Editor." },
	};
#endif
	void Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((FFMODAttenuationDetails*)Obj)->bOverrideAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_bOverrideAttenuation = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FFMODAttenuationDetails), &Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_bOverrideAttenuation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_bOverrideAttenuation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MaximumDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MinimumDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_bOverrideAttenuation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		nullptr,
		&NewStructOps,
		"FMODAttenuationDetails",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FFMODAttenuationDetails),
		alignof(FFMODAttenuationDetails),
		Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODAttenuationDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODAttenuationDetails_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODAttenuationDetails"), sizeof(FFMODAttenuationDetails), Get_Z_Construct_UScriptStruct_FFMODAttenuationDetails_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODAttenuationDetails_CRC() { return 1029048624U; }
	void UFMODAudioComponent::StaticRegisterNativesUFMODAudioComponent()
	{
		UClass* Class = UFMODAudioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLength", &UFMODAudioComponent::execGetLength },
			{ "GetParameter", &UFMODAudioComponent::execGetParameter },
			{ "GetProperty", &UFMODAudioComponent::execGetProperty },
			{ "GetTimelinePosition", &UFMODAudioComponent::execGetTimelinePosition },
			{ "IsPlaying", &UFMODAudioComponent::execIsPlaying },
			{ "Play", &UFMODAudioComponent::execPlay },
			{ "Release", &UFMODAudioComponent::execRelease },
			{ "SetEvent", &UFMODAudioComponent::execSetEvent },
			{ "SetParameter", &UFMODAudioComponent::execSetParameter },
			{ "SetPaused", &UFMODAudioComponent::execSetPaused },
			{ "SetPitch", &UFMODAudioComponent::execSetPitch },
			{ "SetProgrammerSoundName", &UFMODAudioComponent::execSetProgrammerSoundName },
			{ "SetProperty", &UFMODAudioComponent::execSetProperty },
			{ "SetTimelinePosition", &UFMODAudioComponent::execSetTimelinePosition },
			{ "SetVolume", &UFMODAudioComponent::execSetVolume },
			{ "Stop", &UFMODAudioComponent::execStop },
			{ "TriggerCue", &UFMODAudioComponent::execTriggerCue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics
	{
		struct FMODAudioComponent_eventGetLength_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Get the event length in milliseconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "GetLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FMODAudioComponent_eventGetLength_Parms), Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics
	{
		struct FMODAudioComponent_eventGetParameter_Parms
		{
			FName Name;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventGetParameter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventGetParameter_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Get parameter value from the event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "GetParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventGetParameter_Parms), Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics
	{
		struct FMODAudioComponent_eventGetProperty_Parms
		{
			TEnumAsByte<EFMODEventProperty::Type> Property;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventGetProperty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::NewProp_Property = { UE4CodeGen_Private::EPropertyClass::Byte, "Property", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventGetProperty_Parms, Property), Z_Construct_UEnum_FMODStudio_EFMODEventProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::NewProp_Property,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Get a property from the event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "GetProperty", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventGetProperty_Parms), Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics
	{
		struct FMODAudioComponent_eventGetTimelinePosition_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventGetTimelinePosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Get the timeline position in milliseconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "GetTimelinePosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventGetTimelinePosition_Parms), Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics
	{
		struct FMODAudioComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FMODAudioComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMODAudioComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "@return true if this component is currently playing an event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "IsPlaying", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventIsPlaying_Parms), Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Start a sound playing on an audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "Play", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_Play_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_Release_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "Release", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_Release_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics
	{
		struct FMODAudioComponent_eventSetEvent_Parms
		{
			UFMODEvent* NewEvent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::NewProp_NewEvent = { UE4CodeGen_Private::EPropertyClass::Object, "NewEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetEvent_Parms, NewEvent), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::NewProp_NewEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "SetEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventSetEvent_Parms), Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics
	{
		struct FMODAudioComponent_eventSetParameter_Parms
		{
			FName Name;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetParameter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetParameter_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Set a parameter into the event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "SetParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventSetParameter_Parms), Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics
	{
		struct FMODAudioComponent_eventSetPaused_Parms
		{
			bool paused;
		};
		static void NewProp_paused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_paused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::NewProp_paused_SetBit(void* Obj)
	{
		((FMODAudioComponent_eventSetPaused_Parms*)Obj)->paused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::NewProp_paused = { UE4CodeGen_Private::EPropertyClass::Bool, "paused", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMODAudioComponent_eventSetPaused_Parms), &Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::NewProp_paused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::NewProp_paused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Pause/Unpause an audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "SetPaused", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventSetPaused_Parms), Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics
	{
		struct FMODAudioComponent_eventSetPitch_Parms
		{
			float pitch;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::NewProp_pitch = { UE4CodeGen_Private::EPropertyClass::Float, "pitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetPitch_Parms, pitch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::NewProp_pitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Set pitch on an audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "SetPitch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventSetPitch_Parms), Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics
	{
		struct FMODAudioComponent_eventSetProgrammerSoundName_Parms
		{
			FString Value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetProgrammerSoundName_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Set the sound name to use for programmer sound.  Will look up the name in any loaded audio table." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "SetProgrammerSoundName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventSetProgrammerSoundName_Parms), Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics
	{
		struct FMODAudioComponent_eventSetProperty_Parms
		{
			TEnumAsByte<EFMODEventProperty::Type> Property;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetProperty_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::NewProp_Property = { UE4CodeGen_Private::EPropertyClass::Byte, "Property", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetProperty_Parms, Property), Z_Construct_UEnum_FMODStudio_EFMODEventProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::NewProp_Property,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Set a parameter into the event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "SetProperty", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventSetProperty_Parms), Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics
	{
		struct FMODAudioComponent_eventSetTimelinePosition_Parms
		{
			int32 Time;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Int, "Time", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetTimelinePosition_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Set the timeline position in milliseconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "SetTimelinePosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventSetTimelinePosition_Parms), Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics
	{
		struct FMODAudioComponent_eventSetVolume_Parms
		{
			float volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::NewProp_volume = { UE4CodeGen_Private::EPropertyClass::Float, "volume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FMODAudioComponent_eventSetVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::NewProp_volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Set volume on an audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "SetVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FMODAudioComponent_eventSetVolume_Parms), Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Stop an audio component playing its sound cue, issue any delegates if needed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_Stop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_TriggerCue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_TriggerCue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Trigger a cue in an event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_TriggerCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, "TriggerCue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_TriggerCue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_TriggerCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_TriggerCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_TriggerCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister()
	{
		return UFMODAudioComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFMODAudioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OcclusionDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTimelineBeat_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimelineBeat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTimelineMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimelineMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEventStopped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEventStopped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[];
#endif
		static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[];
#endif
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTimelineCallbacks_MetaData[];
#endif
		static void NewProp_bEnableTimelineCallbacks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTimelineCallbacks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgrammerSoundName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProgrammerSoundName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ParameterCache;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterCache_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterCache_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODAudioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFMODAudioComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFMODAudioComponent_GetLength, "GetLength" }, // 2191348535
		{ &Z_Construct_UFunction_UFMODAudioComponent_GetParameter, "GetParameter" }, // 3666912194
		{ &Z_Construct_UFunction_UFMODAudioComponent_GetProperty, "GetProperty" }, // 2426759374
		{ &Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition, "GetTimelinePosition" }, // 698321896
		{ &Z_Construct_UFunction_UFMODAudioComponent_IsPlaying, "IsPlaying" }, // 901469124
		{ &Z_Construct_UFunction_UFMODAudioComponent_Play, "Play" }, // 3130892893
		{ &Z_Construct_UFunction_UFMODAudioComponent_Release, "Release" }, // 2935482536
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetEvent, "SetEvent" }, // 2122523411
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetParameter, "SetParameter" }, // 2183983947
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetPaused, "SetPaused" }, // 3711265358
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetPitch, "SetPitch" }, // 2438619395
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName, "SetProgrammerSoundName" }, // 2201179556
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetProperty, "SetProperty" }, // 3778816442
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition, "SetTimelinePosition" }, // 1130315669
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetVolume, "SetVolume" }, // 599345949
		{ &Z_Construct_UFunction_UFMODAudioComponent_Stop, "Stop" }, // 1439397815
		{ &Z_Construct_UFunction_UFMODAudioComponent_TriggerCue, "TriggerCue" }, // 1410520356
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audio Common" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "FMODAudioComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Plays FMOD Studio events." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OcclusionDetails_MetaData[] = {
		{ "Category", "FMODAudio" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "FMOD Custom Attenuation Details" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OcclusionDetails = { UE4CodeGen_Private::EPropertyClass::Struct, "OcclusionDetails", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFMODAudioComponent, OcclusionDetails), Z_Construct_UScriptStruct_FFMODOcclusionDetails, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OcclusionDetails_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OcclusionDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_AttenuationDetails_MetaData[] = {
		{ "Category", "FMODAudio" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "FMOD Custom Attenuation Details" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_AttenuationDetails = { UE4CodeGen_Private::EPropertyClass::Struct, "AttenuationDetails", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFMODAudioComponent, AttenuationDetails), Z_Construct_UScriptStruct_FFMODAttenuationDetails, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_AttenuationDetails_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_AttenuationDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineBeat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "called when we reach a beat of a tempo (if bEnableTimelineCallbacks is true)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineBeat = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTimelineBeat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFMODAudioComponent, OnTimelineBeat), Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineBeat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineBeat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineMarker_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "called when we reach a named marker (if bEnableTimelineCallbacks is true)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineMarker = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTimelineMarker", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFMODAudioComponent, OnTimelineMarker), Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineMarker_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnEventStopped_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "called when an event stops, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnEventStopped = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnEventStopped", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFMODAudioComponent, OnEventStopped), Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnEventStopped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnEventStopped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Stop sound when owner is destroyed" },
	};
#endif
	void Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UFMODAudioComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopWhenOwnerDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFMODAudioComponent), &Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Auto destroy this component on completion" },
	};
#endif
	void Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((UFMODAudioComponent*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bAutoDestroy = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoDestroy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFMODAudioComponent), &Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bAutoDestroy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bEnableTimelineCallbacks_MetaData[] = {
		{ "Category", "FMODAudio" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Enable timeline callbacks for this sound, so that OnTimelineMarker and OnTimelineBeat can be used" },
	};
#endif
	void Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bEnableTimelineCallbacks_SetBit(void* Obj)
	{
		((UFMODAudioComponent*)Obj)->bEnableTimelineCallbacks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bEnableTimelineCallbacks = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableTimelineCallbacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFMODAudioComponent), &Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bEnableTimelineCallbacks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bEnableTimelineCallbacks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bEnableTimelineCallbacks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ProgrammerSoundName_MetaData[] = {
		{ "Category", "FMODAudio" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Sound name used for programmer sound.  Will look up the name in any loaded audio table." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ProgrammerSoundName = { UE4CodeGen_Private::EPropertyClass::Str, "ProgrammerSoundName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFMODAudioComponent, ProgrammerSoundName), METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ProgrammerSoundName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ProgrammerSoundName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache_MetaData[] = {
		{ "Category", "FMODAudio" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "Event parameter cache" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache = { UE4CodeGen_Private::EPropertyClass::Map, "ParameterCache", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010020000000005, 1, nullptr, STRUCT_OFFSET(UFMODAudioComponent, ParameterCache), METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterCache_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache_ValueProp = { UE4CodeGen_Private::EPropertyClass::Float, "ParameterCache", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_Event_MetaData[] = {
		{ "Category", "FMODAudio" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ToolTip", "The event asset to use for this sound" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_Event = { UE4CodeGen_Private::EPropertyClass::SoftObject, "Event", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UFMODAudioComponent, Event), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_Event_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODAudioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OcclusionDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_AttenuationDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineBeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnEventStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bEnableTimelineCallbacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ProgrammerSoundName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_Event,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODAudioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODAudioComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFMODAudioComponent_Statics::ClassParams = {
		&UFMODAudioComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFMODAudioComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFMODAudioComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFMODAudioComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODAudioComponent, 2111606746);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODAudioComponent(Z_Construct_UClass_UFMODAudioComponent, &UFMODAudioComponent::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODAudioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODAudioComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
