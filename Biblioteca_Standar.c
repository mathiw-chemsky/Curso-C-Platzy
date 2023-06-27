/* Video 11, curso C funciones, placczyyy: Biblioteca Stdlib
Vamos a pasar de decimales a binarios:
1.- Dividir el valor entre 2 y almacenar el resto (mod) en un array
2.- Dividir otra vez entre 2 y almacenar el restante (mod)
3.- Repetir hasta el número ya no se pueda dividir (mod = 0)

Las funciones usadas son
1.- system("cls"): para limpiar la terminal
2.- system(color parametro1): para cambiar de color la terminal
*/
#include <stdio.h>
#include <stdlib.h>

//Declaracion de variables globales
   int arrayBinario[12];
   int auxn;
   int i;
   
int main()
{
	//Funciones especiales de stdlib.h, "system" para el sistema
	system("cls");
	system("color 9F");
	printf("Ingrese un valor decimal. \n");
	scanf("%d", &auxn);
	printf("Usted va a convertir el numero %d a binario. \n", auxn);
	
	for (i = 0; auxn > 0; i++)
	{
		arrayBinario[i] = auxn % 2;
		auxn = auxn / 2;
	}
	
	printf("El resultado de la conversion es: ");
	for (i = i-1; i >= 0 ; i--)
	{
		printf("%d", arrayBinario[i]);
	}
	
	return 0;
}

