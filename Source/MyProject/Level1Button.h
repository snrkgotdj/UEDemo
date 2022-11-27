// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "CustomStruct.h"

#include "Level1Button.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API ULevel1Button : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLevel1ButtonStruct ButtonInfo;

};
