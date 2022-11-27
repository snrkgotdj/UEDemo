// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"

#include "Blueprint/UserWidget.h"
#include "Components/VerticalBox.h"
#include "Components/TextBlock.h"
#include "UObject/Class.h"

#include "CustomStruct.h"
#include "Level1Button.h"

void UMyUserWidget::InitWidget()
{
	ButtonContainer->ClearChildren();

	for (int i = 0; i < 3; ++i)
	{
		ULevel1Button* Button = CreateWidget<ULevel1Button>(this, ButtonWidget);
		Button->ButtonInfo.Text = FString(TEXT("Test") + FString::FromInt(i));

		ButtonContainer->AddChild(Button);
	}


	//FStrProperty* TextProb = nullptr;

	//FProperty* Struct = ButtonWidget->FindPropertyByName(FName("info"));
	//const FStructProperty* StructProperty = CastField<FStructProperty>(Struct);

	//if (StructProperty)
	//{
	//	for (TFieldIterator<FProperty> It(StructProperty->Struct); It; ++It)
	//	{
	//		FProperty* Property = *It;
	//		if (Property->GetAuthoredName() == "text")
	//		{
	//			TextProb = CastField<FStrProperty>(Property);
	//			break;
	//		}
	//	}
	//}

	// ButtonWidget->FindPropertyByName(FName("info2"));

	//for (int i = 0; i < 4; ++i)
	//{
	//	UUserWidget* Button = CreateWidget(this, ButtonWidget);

	//	void* StructPtr = StructProperty->ContainerPtrToValuePtr<void>(Button);
	//	TextProb->SetValue_InContainer(StructPtr, FString(TEXT("TESTTEST")) + FString::FromInt(i));
	//	ButtonContainer->AddChild(Button);
	//}

}
