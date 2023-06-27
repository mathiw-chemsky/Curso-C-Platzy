//Bucle while (Platzy Control de flujo C)  ejecucción condicional
//(cuando sepamos cuantos elementos)
#include <stdio.h>

//Declaracion de variables globales
int n = 20;

int main(){
	
	//Declaración y asignación de variables
	

	//Instrucciones while
	while(n > 10){
		printf("n es igual a: %d \n", n);
		n = n -1;
	}
	printf("El bucle se ha terminado. \n");
	return 0;
}
