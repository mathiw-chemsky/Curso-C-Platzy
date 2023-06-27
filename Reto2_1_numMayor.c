/*Numero mayor y menor (Platzy reto 2.1) pedir al usuario 2 numero, mostrando como salida
cual es el mayor y la diferencia de uno respecto al otro. Si los numeros son iguales
mostrarlo también en pantalla. */
#include <stdio.h>
#include <stdlib.h>

int main(){
	//Declaración de variables
	float num1, num2, diferencia;
	
	//Solicitud de información
	printf("Ingrese el primer numero: ");
	scanf("%f", &num1);
	printf("Ingrese el segundo numero: ");
	scanf("%f", &num2);
	
 	//Estructura if condicional
	if(num1 > num2)
	{
		printf("El numero mayor es: %.2f \n", num1);
		diferencia = num1 - num2;
		printf("La diferencia entre el numero mayor y el menor es de: %.2f\n", diferencia);
	}else if(num1 < num2)
	{
 	    printf("El numero mayor es: %.2f \n", num2);
		diferencia = num2 - num1;
		printf("La diferencia entre el numero mayor y el menor es de: %.2f\n", diferencia);
	}else
	{
		printf("Los numeros son iguales, por lo tanto la diferencia es de 0.");
	}
	
	
	return 0;
}

