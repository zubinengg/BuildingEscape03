// No CopyRight

#include "OpenDoor.h"
#include "GameFramework/Actor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
	
	

	FString ObjectName = GetOwner()->GetName();
	FString ObjectPosition = GetOwner()->GetTransform().GetLocation().ToString();

	UE_LOG(LogTemp, Warning, TEXT("Position Report Reporting for duty on %s is at %s!!!!!!!"), *ObjectName, *ObjectPosition);

	
}

void UOpenDoor::OpenDoor_1()
{
	// ...
	// Finding the Actor
	AActor* Owner = GetOwner();

	// Creating a rotator
	FRotator NewRotation = FRotator(0.0f, -60.0f, 0.0f);

	//Set Door Rotation	
	Owner->SetActorRotation(NewRotation);
}




// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Poll the trigerr Volume
	// iF THE ACTTOR THAT OPENAS THE DOOR
	if (PressurePlate->IsOverlappingActor(ActorThatOpens))
	{
		OpenDoor_1();
	}
	
}

