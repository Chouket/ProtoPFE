// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <string>

#include "fmod.hpp"
#include "CoreMinimal.h"


// TODO : Upgrade this method 
//#define NO_ANALYSIS
#define REALTIME_ANALYSIS


/**
 * 
 */
class BEATDETECTOR_API SoundManager_FMOD
{
public:
	SoundManager_FMOD();
	~SoundManager_FMOD();

	int initialize();
	int loadSoundFromPath(FString pathToFile);
	void playSound();
	void pauseSound(bool unPause = false);

private:
	bool m_realtimeAnalysis = true;

	const int m_channelCount = 1;
	// TODO : Check how Window size impact DSP and Analysis !
	const int m_windowSize = 1920 * 1080;

	FMOD::DSP* m_dsp;

	FMOD::System* m_system;
	FMOD::Channel* m_channel;
	FMOD::Sound* m_sound;
};
