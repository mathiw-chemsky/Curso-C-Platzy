/*Reto 2.4. Crea un programa que pregunte al usuario si est� lloviendo, en caso de responder �s� pregunta si est� haciendo mucho viento y si responde �s� nuevamente muestra un
mensaje indicando que hace mucho viento para salir con una sombrilla. En caso contrario, anima al usuario a que lleve una sombrilla. Para el caso de responder �no� en
la primer pregunta, entonces solo desea un bonito d�a. Considera que las respuestas pueden pasarse a min�sculas para evitar posibles errores.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//Declaraci�n de variables
	char eleccion1 [4];
	char eleccion2 [4];
	
	//Tomar informaci�n inicial
	printf("Hola, esta lloviendo? responde si o no \n");
	scanf("%s", &eleccion1);
	strlwr(eleccion1); //strlwr es una funci�n que sirve para transformar todas las letras de un string a min�sculas
	printf("Tu respuesta es: %s \n", eleccion1);

	//Primera elecci�n  sobre la lluvia
	if (strcmp(eleccion1, "si" ) == 0){  //La funci�n strcmp sirve para que una variable de tipo string pase su valor a 0 si es verdadero o 1 si es falso si coincide el carater
		printf("Esta haciendo mucho viento? responde si o no \n");
		scanf("%s", &eleccion2);
		strlwr(eleccion2); //strlwr es una funci�n que sirve para transformar todas las letras de un string a min�sculas
		printf("Tu respuesta es: %s \n", eleccion2);
		
		//Segunda eleccion sobre el viento
		if(strcmp(eleccion2, "si") == 0){
			printf("Hace mucho viento para salir con sombrilla \n");
		}else{
			printf("Lleva sombrilla \n");
		}
	}else{
			printf("Ten un bonito dia soliiiado \n");
		}
	
	
	
	return 0;
}


