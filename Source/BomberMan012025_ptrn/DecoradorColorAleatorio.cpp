// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorColorAleatorio.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
DecoradorColorAleatorio::DecoradorColorAleatorio(AActor* _actor)
{
	objetoDecorado = _actor;

	rutasMateriales = {
		TEXT("/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold"),
		TEXT("/Game/StarterContent/Materials/M_Wood_Oak.M_Wood_Oak"),
		TEXT("/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake"),
		TEXT("/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse"),
		TEXT("/Game/StarterContent/Materials/M_Metal_Copper.M_Metal_Copper"),
		TEXT("/Game/StarterContent/Materials/M_Ground_Moss.M_Ground_Moss"),
		TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/Fuego.Fuego'")
		TEXT("/Game/StarterContent/Materials/M_CobbleStone_Smooth.M_CobbleStone_Smooth")
	};
}
void DecoradorColorAleatorio::colorear()
{
	if (!objetoDecorado || rutasMateriales.Num() == 0) return;

	UStaticMeshComponent* mesh = objetoDecorado->FindComponentByClass<UStaticMeshComponent>();
	if (!mesh) return;

	int index = FMath::RandRange(0, rutasMateriales.Num() - 1);
	UMaterialInterface* nuevoMaterial = LoadObject<UMaterialInterface>(nullptr, *rutasMateriales[index]);

	if (nuevoMaterial)
	{
		mesh->SetMaterial(0, nuevoMaterial);
	}
}
