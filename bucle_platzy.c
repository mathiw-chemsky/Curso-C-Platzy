//Bucle while (Platzy Control de flujo C)  ejecucci�n condicional
//(cuando sepamos cuantos elementos)
#include <stdio.h>

//Declaracion de variables globales
int n = 20;

int main(){
	
	//Declaraci�n y asignaci�n de variables
	

	//Instrucciones while
	while(n > 10){
		printf("n es igual a: %d \n", n);
		n = n -1;
	}
	printf("El bucle se ha terminado. \n");
	return 0;
}
