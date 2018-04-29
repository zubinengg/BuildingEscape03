// Fill out your copyright notice in the Description page of Project Settings.
// testing
#pragma once

//#include "Engine.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PositionReporter.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLOCKBREAKER_API UPositionReporter : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPositionReporter();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
