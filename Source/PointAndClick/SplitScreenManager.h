#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplitScreenManager.generated.h"

UCLASS()
class POINTANDCLICK_API ASplitScreenManager : public AActor
{
	GENERATED_BODY()
	
public:
	ASplitScreenManager();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

};
