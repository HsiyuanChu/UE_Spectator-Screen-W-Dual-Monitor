// Fill out your copyright notice in the Description page of Project Settings.


#include "DualScreenManager.h"

// Sets default values
ADualScreenManager::ADualScreenManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ADualScreenManager::BeginPlay()
{
	Super::BeginPlay();
	CreateSecondWindow();
}

void ADualScreenManager::BeginDestroy() {
	Super::BeginDestroy();

	//Close created window
	WidgetCompound::DestroySecondWidow();
}

void ADualScreenManager::CreateSecondWindow() {
	UUserWidget* secondWindowWidget = CreateWidget<UUserWidget>(GetWorld(), secondWindowWidgetSubclass);
	WidgetCompound::CreateSecondWindow(secondWindowWidget);
}


