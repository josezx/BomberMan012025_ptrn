#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS()
class BOMBERMAN012025_PTRN_API AEnemigo : public AActor
{
	GENERATED_BODY()
	
public:	
	AEnemigo();

	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;

	UPROPERTY()
	UStaticMeshComponent* meshComponent;

	UPROPERTY()
	UMaterialInterface* material;

	//virtual void moverEnemigo();
};
