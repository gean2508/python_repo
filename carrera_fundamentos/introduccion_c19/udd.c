//Creando nuestro user defined data type

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
struct client
{
	char Name[50];
	char Id[10];
	float Credit;
	char Address[100];
	
};//al finalizar un struct ponemos punto y coma

main(int argc, char const *argv[])
{
	struct client client1 = {0};
	strcpy(client1.Name, "Gean Solano");
	strcpy(client1.Id, "0000000001");
	client1.Credit =  1000000;
	strcpy(client1.Address, "Las golondrinas sin retorno");

	printf( "The client name is: %s\n", client1.Name );
	printf( "The client Id is: %s\n", client1.Id );
	printf( "The client Credit is: %f\n", client1.Credit );
	printf( "The client address is: %s\n", client1.Address );



	return 0;
}
