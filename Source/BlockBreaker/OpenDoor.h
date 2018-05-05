// No CopyRight

#pragma once

#include "Engine.h"
#include "Engine/TriggerVolume.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLOCKBREAKER_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void OpenDoor();
	virtual void CloseDoor();
	

private:
	UPROPERTY(VisibleAnywhere)
	float OpenAngle = -70.0f;	

	//ATriggerVolume 
	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate;

	UPROPERTY(EditAnywhere)
	float DoorCloseDelay=1.0f;

	float LastDoorOpenTime;

	// Actors that opens the door
	//UPROPERTY(EditAnywhere)
	AActor* ActorThatOpens;


	AActor* Owner;// The Owning Door
};

