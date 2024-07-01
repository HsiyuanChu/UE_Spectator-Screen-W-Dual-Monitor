// Fill out your copyright notice in the Description page of Project Settings.


#include "WidgetCompound.h"

static TSharedPtr<SWindow> newWindowPtr = nullptr;

void WidgetCompound::CreateSecondWindow(UUserWidget* userWidget) {

	TSharedRef<SWindow> newWindow = SNew(SWindow)
		.Title(FText::FromString("Control Panel"))
		.ScreenPosition(FVector2D(0, 0))
		.ClientSize(FVector2D(1280, 720))
		.SizingRule(ESizingRule::UserSized)
		[
			userWidget->TakeWidget()
		];

	newWindowPtr = newWindow.ToSharedPtr();

	FSlateApplication::Get().AddWindow(newWindow);
}

void WidgetCompound::DestroySecondWidow() {

	if (newWindowPtr.IsValid()) {
		FSlateApplication::Get().RequestDestroyWindow(newWindowPtr.ToSharedRef());
	}
}

void WidgetCompound::Construct(const FArguments& InArgs) {

}
