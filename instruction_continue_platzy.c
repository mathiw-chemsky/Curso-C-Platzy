//Instrucción break (platzy Control de flujo en C) salir antes del final del ciclo
//Instrucción continue (parecido a break pero al contrario, forzamos una iteracion mas)
//Este solo se usa en for, while y do while.
#include <stdio.h>


int main(){
	//Declaración de variable local
	int n = 30;
	int i;

	//ciclo for
	for(i = 0; i < n; i++){
		break; // break elimina el ciclo se sale rapidin
//		continue; //se salta la sentencia de abajo y continua hasta que se acaba el bucle
		printf("El valor actual de i es: %d \n", i);
	}
	printf("El valor actual de i es: %d \n", i);
	return 0;
}
