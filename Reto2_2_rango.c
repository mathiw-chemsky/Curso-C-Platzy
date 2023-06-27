/* En el rango por favor (platzy) PEdir al usuario que indique 2 numeros
uno que servirá como límite y otro para comparar. Si el segundo número es menor
al primero, mostrarás un mensaje diciendo “El número ‘x’ se encuentra en el rango,
gracias” y en caso contrario dirá “El número ‘x’ excede el límite permitido”. */
#include <stdio.h>
#include <stdlib.h>

int main(){
	//Declaración de variables
	float limite, comparar;
	
	//Solicitar información
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
