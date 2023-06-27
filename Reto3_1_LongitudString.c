/* Reto #1 Longitud del string.  Pide a tu usuario que ingrese el nombre de su
curso favorito, obtén la longitud de ese string y muéstralo en pantalla. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//Declaración de variables
	char cursoFavorito [100];
	int longitudCadena;
	
	//Solicitud de información
	printf("Ingresa el nombre de tu curso favorito. \n");
	fgets(cursoFavorito, 100, stdin);
	longitudCadena = strlen(cursoFavorito);
	printf("La longitud de la cadena de tu curso favorito es de: %d \n", longitudCadena);

	return 0;
}
