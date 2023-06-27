/* I like turtles (Platzy)  pida al usuario ingrese su animal favorito, si coloca
‘Tortuga’, ‘tortuga’, ‘TORTUGA’ o cualquier otra variante de la palabra entonces
mostrar en pantalla “También me gustan las tortugas”. En caso contrario mostrar
el mensaje “Ese animal es genial, pero prefiero las tortugas”. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//Declaración de variables
	char animal[20];

	//Solicitar información
	printf("Ingrese su animal favorito: ");
	gets(animal);
	strlwr(animal); //la funcion strlwr convierte los caracteres en mayusculas a minusculas
	printf("Tu animal favorito es: %s \n", animal);

	//Estructura condicional switch
	if(strcmp(animal, "tortuga") == 0) //la funcion strcmp indica si una comparacion de strings es verdadera 0 o falsa 1 para poder usar en condicionales
	{
		printf("Tambien me gustan las tortugas.");
	}else
	{
		printf("Ese animal es genial, pero prefiero las tortugas.");
	}

	return 0;
}
