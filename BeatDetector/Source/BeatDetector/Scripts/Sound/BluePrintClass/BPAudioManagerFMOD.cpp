// Fill out your copyright notice in the Description page of Project Settings.

#include "BPAudioManagerFMOD.h"

//#include "AudioManager.h"
#include "Paths.h"
#include "FileHelper.h"

//included to log
#include "Runtime/Engine/Classes/Engine/Engine.h"

UBPAudioManagerFMOD::UBPAudioManagerFMOD()
{

}

UBPAudioManagerFMOD::~UBPAudioManagerFMOD()
{

}

int32 UBPAudioManagerFMOD::InitializeManager()
{
	m_soundMgr = std::unique_ptr<SoundManager_FMOD>(new SoundManager_FMOD());
	int result = m_soundMgr->initialize();
	/*if (result != 0)
		Log*/

	return result;
}

int32 UBPAudioManagerFMOD::PlaySong()
{

	FString songsPath = FPaths::ProjectContentDir() + "Sounds/";
	m_songName = "Aaron_Smith-Dancin";
	FString songFile(songsPath + m_songName + ".mp3");

	int32 result = m_soundMgr->loadSoundFromPath(songFile);
	/*if (result != 0)
		log;*/

	m_soundMgr->playSound();

	return result;
}

void UBPAudioManagerFMOD::PauseSong(bool pause)
{
	m_soundMgr->pauseSound(pause);
}

const FString UBPAudioManagerFMOD::GetSongName()
{
	return m_songName;
}

