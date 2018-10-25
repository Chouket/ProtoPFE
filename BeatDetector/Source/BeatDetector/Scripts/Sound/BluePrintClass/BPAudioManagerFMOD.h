// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "Scripts/Sound/SoundManager_FMOD.h"
#include <memory>

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BPAudioManagerFMOD.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class BEATDETECTOR_API UBPAudioManagerFMOD : public UObject
{
	GENERATED_BODY()
	
public:
	UBPAudioManagerFMOD();
	~UBPAudioManagerFMOD();

	UFUNCTION(BlueprintCallable, Category = "Init")
		int32 InitializeManager();

	UFUNCTION(BlueprintCallable, Category = "Actions")
		int32 PlaySong();

	UFUNCTION(BlueprintCallable, Category = "Actions")
		void PauseSong(bool pause);

	UFUNCTION(BlueprintCallable, Category = "Access")
		const FString GetSongName();

	int modifInt = 0;

private:
	
	std::unique_ptr<SoundManager_FMOD> m_soundMgr;
	FString m_songName;
};
