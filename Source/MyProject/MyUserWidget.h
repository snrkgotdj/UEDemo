// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UVerticalBox* ButtonContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class ULevel1Button> ButtonWidget;

	UFUNCTION(BlueprintCallable)
	void InitWidget();

};
