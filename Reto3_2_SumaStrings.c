/* Reto #2 ‘Suma’ de strings.  Crea un programa en el que le pidas en 3 variables
distintas: nombre, apellido y comida favorita. Como salida mostrarás el mensaje
Hola, mi nombres es {nombre} {apellido} y mi comida favorita es {comida} en un
solo string. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//Declaración de variables
	char nombre [15];
	char apellido [15];
	char comidaFavorita [30];
	char space[2] = " ";

	//Solicitud de información
	printf("Ingresa tu nombre. \n");
	gets(nombre);
	printf("Ingresa tu apellido. \n");
	gets(apellido);
	strcat(nombre, space);
	strcat(nombre, apellido);
	printf("Ingresa tu comida favorita. \n");
	gets(comidaFavorita);

	//strcat(nombre, apellido);
	printf("Hola, mi nombre es %s y mi comida favorita es %s", nombre, comidaFavorita);

	return 0;
}
