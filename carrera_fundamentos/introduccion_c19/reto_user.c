//reto cumplido sobre  defined data types

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct player
{
	char Name[12];
	int Puntos;
	char Artefactos[110];
	int Vidas;

};

main(int argc, char const *argv[])
{
	struct  player player1 = {0};
	strcpy(player1.Name, "Fusion_ninja");
	player1.Puntos = 30.000;
	strcpy(player1.Artefactos, "\n-Calculadora\n" "--Tridente de Poseidon\n" "---Alas de Icaro\n" "----Arco\n");
	player1.Vidas = 4;
	
	printf( "\n%s Detalles:\n",player1.Name);
	printf( "%d Puntos\n",player1.Puntos);
	printf( "Posee los siguientes artefactos: %s\n", player1.Artefactos);
	printf( "\n Te quedan %d vidas\n",player1.Vidas);

	return 0;







}
