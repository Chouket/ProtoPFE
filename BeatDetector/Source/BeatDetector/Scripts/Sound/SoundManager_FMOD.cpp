// Fill out your copyright notice in the Description page of Project Settings.

#include "SoundManager_FMOD.h"

//included to log
#include "Runtime/Engine/Classes/Engine/Engine.h"

SoundManager_FMOD::SoundManager_FMOD()
	:m_system(nullptr), m_channel(nullptr), m_sound(nullptr)
{
}

SoundManager_FMOD::~SoundManager_FMOD()
{
	if (m_sound)
		m_sound->release();

	if (m_system)
	{
		m_system->close();
		m_system->release();
	}
}

int SoundManager_FMOD::initialize()
{
	FMOD_RESULT result = FMOD::System_Create(&m_system);
	if (result != FMOD_OK)
	{
		UE_LOG(LogTemp, Error, TEXT("FMOD System Creation has encountered FMOD Error n°%i"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("FMOD System Creation has encountered FMOD Error n°%i"), result));
		return result;
	}

	m_system->init(m_channelCount, FMOD_INIT_NORMAL, nullptr);

	if (m_realtimeAnalysis)
	{
		m_system->createDSPByType(FMOD_DSP_TYPE_FFT, &m_dsp);
		m_dsp->setParameterInt(FMOD_DSP_FFT_WINDOWTYPE, FMOD_DSP_FFT_WINDOW_TRIANGLE);
		m_dsp->setParameterInt(FMOD_DSP_FFT_WINDOWSIZE, m_windowSize);
	}

	return result;
}

/*
 * Loading a Sound from a Path (string)
 * parameter: {string} Path of the Sound
 * return: {int}
*/
int SoundManager_FMOD::loadSoundFromPath(FString pathToFile)
{
	std::string newPath(TCHAR_TO_UTF8(*pathToFile));

	FMOD_RESULT result = FMOD_OK;

	if (m_realtimeAnalysis == false)
		result = m_system->createSound(newPath.c_str(), FMOD_LOOP_NORMAL, 0, &m_sound);

	else
		result = m_system->createSound(newPath.c_str(), FMOD_LOOP_NORMAL | FMOD_CREATESAMPLE, 0, &m_sound);

	return result;
}

void SoundManager_FMOD::playSound()
{
	m_system->playSound(m_sound, 0, false, &m_channel);

	if (m_realtimeAnalysis)
	{
		m_channel->addDSP(0, m_dsp);
		m_dsp->setActive(true);
	}
}


/*
 * Pause or unpause a Sound
 * parameter: {bool} pause -> true by default
*/
void SoundManager_FMOD::pauseSound(bool pause)
{
	bool alreadyPaused;
	m_channel->getPaused(&alreadyPaused);

	if (alreadyPaused != pause)
		m_channel->setPaused(pause);
}
