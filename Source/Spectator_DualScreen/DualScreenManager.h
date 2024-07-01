// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WidgetCompound.h"
#include "DualScreenManager.generated.h"

UCLASS()
class SPECTATOR_DUALSCREEN_API ADualScreenManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADualScreenManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void BeginDestroy() override;

	UFUNCTION(BlueprintCallable, Category = "DualScreen")
	void CreateSecondWindow();

public:	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> secondWindowWidgetSubclass;
};
