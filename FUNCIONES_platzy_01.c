//Funciones 01 (Platzy Funciones en C)
/* Estructura de una función
  return type funtion-name (parameter declarations, if any)
  {
		 declarations
		 statements
  }
*/
#include <stdio.h>

//Funtion declaration
int power(int base, int n);

//Principal funtion
int main(){

	int i;
	for(i = 0; i < 10; i++){
		printf("n = %d. El resultado de la potencia = %d \n", i, power(2, i));
	}
	
	return 0;
}
//Funtion definition
int power(int base, int n){
	int i, p;
	p = 1;
	for(i = 1; i <= n; i++){
		p = p * base;
	}
	return p;
}
