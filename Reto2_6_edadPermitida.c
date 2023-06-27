/*Pide al usuario que ingrese su edad y mostrarás un mensaje correspondiente si esta coincide con las siguientes condiciones:
Más de 30 años: Nunca es tarde para aprender ¿Qué curso tomaremos?
Entre 29 y 18 años: Es un momento excelente para impulsar tu carrera.
Menos de 18 años: ¿Sabes hacia dónde dirigir tu futuro? Seguro puedo ayudarte.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//Declaracion de variables
	int edad;
	
	//input de información
	printf("Hola ingresa tu edad. \n");
	scanf("%d", &edad);
	
	//Estructura de seleccion
	if(edad >= 30){
		printf("Nunca es tarde para aprender, dime que curso tomaremos?. \n");
	}
	if(edad >= 18 && edad <= 29){
		printf("Es un momento excelente para impulsar tu carrera. \n");
	}
	if(edad < 18){
		printf("¿Sabes hacia donde dirigir tu futuro? Seguro puedo ayudarte. \n");
	}
	
	return 0;
}
