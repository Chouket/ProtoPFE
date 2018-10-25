// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "fmod.hpp"

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BP_SoundManager_FMOD.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class BEATDETECTOR_API UBP_SoundManager_FMOD : public UObject
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Init")
		void Initialize();

		
	
private:

	
};
