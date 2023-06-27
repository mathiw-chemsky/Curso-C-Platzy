/* Video 9, Curso Funciones en C, Platzy. Biblioteca string con 3 funciones
1.- Función strcmp(parametro1, parametro2): para comparar y arrojar 0 o 1
2.- Función strrev(parametro1): para voltiiiar un string
3.- Función strcat(parametro1, parametro2, parametro-n): para concatenar strings
4.- Función strlen(parametro1): devuelve la longitud del string
*/
#include <stdio.h>
#include <string.h>


 char cadena1[60];
 char cadena2[60];
 int longitudString1;
 int longitudString2;

int main()
{

  printf("Escribe una frase mamalona. \n");
  gets(cadena1);
  printf("Escribe otra frase mamalona para comparar. \n");
  gets(cadena2);
  
  //Utilizaremos la función strlen para indicar la longitud del string
  
  //Asignamos variables para trabajar con ellas
  longitudString1 = strlen(cadena1);
  longitudString2 = strlen(cadena2);

  //imprimimos las longitudes
  printf("La longitud de la primera oración es: %d . \n", longitudString1);
  printf("LA longitud de la segunda oración es: %d . \n", longitudString2);

  
  //funcion string "strrev" cambia el sentido al reversa o palindromo palitroche
//  strrev(cadena1);
//  printf("El string al reves es: %s \n", cadena1);

  //funcion string "strcmp" para comparar dos cadenas, si son = retorna 0, sino 1
  if (strcmp(cadena1, cadena2) == 0)
  	printf("Ingresaste dos strings identicos. \n");
  else
  {
  	strcat(cadena1, cadena2);
  	printf("Ingresaste dos cadenas distintas. Si las unimos el resultado es: %s \n", cadena1);
  }
  

  return 0;
}
