#include "SplitScreenManager.h"


ASplitScreenManager::ASplitScreenManager()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ASplitScreenManager::BeginPlay()
{
	Super::BeginPlay();

	const UWorld* GameWorld = AActor::GetWorld();

	if (GameWorld == nullptr)
	{
		return;
	}

	UGameViewportClient* Viewport = GameWorld->GetGameViewport();

	FSplitscreenData ScreenLayout;
	const auto Screen1 = FPerPlayerSplitscreenData(1.0f, 0.725f, 0.0f, 0.0f);
	ScreenLayout.PlayerData.Add(Screen1);

	if (Viewport == nullptr)
	{
		return;
	}

	Viewport->SetForceDisableSplitscreen(true);
	Viewport->SplitscreenInfo[ESplitScreenType::None] = ScreenLayout;	
}

void ASplitScreenManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

