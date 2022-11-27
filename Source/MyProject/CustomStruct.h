// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/Image.h"

#include "CustomStruct.generated.h"

/**
 * 
 */
class MYPROJECT_API CustomStruct
{


public:
	CustomStruct();
	~CustomStruct();
};

USTRUCT(Atomic, BlueprintType)
struct FLevel1ButtonStruct
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture* Image;

};
