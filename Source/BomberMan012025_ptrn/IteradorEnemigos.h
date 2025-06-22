#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Iterador.h"
#include "Enemigo.h" // CAMBIO: Incluir la definición completa en lugar de una declaración anticipada.
#include "IteradorEnemigos.generated.h"

class AContenedorEnemigo;

UCLASS()
class BOMBERMAN012025_PTRN_API AIteradorEnemigos : public AActor, public IIterador
{
	GENERATED_BODY()

public:
	AIteradorEnemigos();

protected:
	virtual void BeginPlay() override;

private:
	int32 indice;
	UPROPERTY()
	AContenedorEnemigo* contenedor;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void primero() override;
	virtual void siguiente() override;
	virtual bool fin() override;
	virtual AEnemigo* actual() override;

	void establecerContenedor(AContenedorEnemigo* nuevoContenedor);
};