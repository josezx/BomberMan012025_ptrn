// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FabricaEnemigo.h"
#include "BomberMan012025_ptrnGameMode.generated.h"

UCLASS(minimalapi)
class ABomberMan012025_ptrnGameMode : public AGameModeBase
{
	GENERATED_BODY()

private:
	float tiempo;
	class ABloque* bloque_primario;

	UPROPERTY()
	AFabricaEnemigo* fabrica_enemigo;

	void generadorBordes();
public:
	ABomberMan012025_ptrnGameMode();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};



