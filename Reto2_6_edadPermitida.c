/*Pide al usuario que ingrese su edad y mostrar�s un mensaje correspondiente si esta coincide con las siguientes condiciones:
M�s de 30 a�os: Nunca es tarde para aprender �Qu� curso tomaremos?
Entre 29 y 18 a�os: Es un momento excelente para impulsar tu carrera.
Menos de 18 a�os: �Sabes hacia d�nde dirigir tu futuro? Seguro puedo ayudarte.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//Declaracion de variables
	int edad;
	
	//input de informaci�n
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
		printf("�Sabes hacia donde dirigir tu futuro? Seguro puedo ayudarte. \n");
	}
	
	return 0;
}
