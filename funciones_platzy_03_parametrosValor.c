/*Funciones 03 parametros por valor (Platzy Funciones en C)

*/
#include <stdio.h>
#include <stdlib.h>
//Funtion declaration
int power(int base, int n);

//Principal funtion
int main(){

	int n;
	n = 12;

	printf("n = %d. El resultado de la potencia = %d \n", n, power(2, n));
	printf("El valor del exponente n original sigue siendo: %d \n", n);
	return 0;
}
//Funtion definition
int power(int base, int n)
{
	int p;
	for(p = 1; n > 0; n--)
	{
		p = p * base;
		printf("el valor temporal de n es: %d \n", n);
	}
	return p;
}
