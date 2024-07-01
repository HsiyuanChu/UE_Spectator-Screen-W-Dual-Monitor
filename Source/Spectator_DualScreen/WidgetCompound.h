// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Widgets/SWindow.h"


class WidgetCompound : public SCompoundWidget {
	SLATE_BEGIN_ARGS(WidgetCompound)
		{}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	static void CreateSecondWindow(UUserWidget* userWidget);

	static void DestroySecondWidow();
};

