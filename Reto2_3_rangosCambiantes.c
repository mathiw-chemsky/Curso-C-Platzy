/* Rasgos cambiantes (Platzy) pide a tu usuario que indique 3 números:
un límite superior, un límite inferior y uno de comparación. Si el número
de comparación se encuentra entre los 2 primeros, comunicarlo en pantalla.
En caso estar por debajo del límite inferior o por arriba del límite superior,
también mostrarlo en pantalla. */
#include <stdio.h>
#include <stdlib.h>

int main(){
	//Declaración de variables
	float limitesupra, limiteinfra, comparacion;
	int precio;
	
	precio = (int))19.9 + (int)11.9;  // operador de conversión explicita (int)
	printf("%d \n", precio);
	
	//Solicitar información
	printf("Ingresa el numero que sera limite superior: ");
	scanf("%f", &limitesupra);
	printf("Ahora ingresa el numero que sera limite inferior: ");
	scanf("%f", &limiteinfra);
	printf("Ingresa el numero que se va a comparar: ");
	scanf("%f", &comparacion);
	
	//Estructura condicional
	if(comparacion < limitesupra && comparacion > limiteinfra)
	{
		printf("El numero esta dentro del rango, gracias. \n");
	}else if(comparacion < limiteinfra)
	{
		printf("El numero esta por debajo del limite inferior. \n");
	}else
	{
		printf("El numero esta por encima del limita superior \n");
	}
	sizeof (limitesupra);
	printf("%d \n", sizeof (limitesupra));
	sizeof (limiteinfra);
	printf("%d \n", sizeof (limiteinfra));
	sizeof (comparacion);
	printf("%d \n", sizeof (comparacion));
	sizeof (double);
	printf("%d", sizeof (double));

	
	
	return 0;
}
