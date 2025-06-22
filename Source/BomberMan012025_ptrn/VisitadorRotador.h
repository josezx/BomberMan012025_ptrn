// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Visitante.h"
#include "VisitadorRotador.generated.h"

UCLASS()
class BOMBERMAN012025_PTRN_API AVisitadorRotador : public AActor, public IVisitante
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVisitadorRotador();
	virtual void visitar(class ABloque* bloque) override;
	virtual void visitar(class ABomba* bomba) override;
	virtual void visitar(class AEnemigo* enemigo) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
