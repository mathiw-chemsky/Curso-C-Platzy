/* En el rango por favor (platzy) PEdir al usuario que indique 2 numeros
uno que servir� como l�mite y otro para comparar. Si el segundo n�mero es menor
al primero, mostrar�s un mensaje diciendo �El n�mero �x� se encuentra en el rango,
gracias� y en caso contrario dir� �El n�mero �x� excede el l�mite permitido�. */
#include <stdio.h>
#include <stdlib.h>

int main(){
	//Declaraci�n de variables
	float limite, comparar;
	
	//Solicitar informaci�n
	printf("Ingresa el numero que sera el limite: ");
	scanf("%f", &limite);
	printf("Ahora ingrese el numero a comparar: ");
	scanf("%f", &comparar);
	
	//Estructura condicional
	if(comparar < limite)
	{
		printf("El numero %.2f se encuentra en el rango, gracias. \n", comparar);
	}else
	{
		printf("El numero %.2f excede el limite permitido. \n", comparar);
	}
	
	return 0;
}
