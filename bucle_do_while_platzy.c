//Bucle do while (Platzy control de flujo en C).
//Se usa cuando queremos que mínimo se ejecute una vez

#include <stdio.h>

//Declaración de variables globales
int n = 11;

int main(){
	//Declaración de variables locales
	
	
	//Estructura do while
	do{
	   printf("n es igual a: %d \n", n);
	   n = n - 1;
	}while(n > 10);
	printf("Hemos salido del ciclo while porque n ya no es mayor a 10.");
	return 0;
}
