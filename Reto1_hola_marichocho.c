/*Reto #1, #2 y #3 (Platzy C)
 Imprimir Hola mundo pero en lugar de decir mundo agregar el nombre del usuario
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nombreUsuario [30];
	
	printf("Ingrese su nombre completo. \n");
	gets(nombreUsuario);
	printf("Hola marichocho %s. \n", nombreUsuario);
	
	printf("Platzi cuenta con cursos de:\n Desarrollo e ingenieria.\n Marketing.\n Ingles.\n Habilidades blandas.\n Negocios y emprendimiento.\n Startups.\n Diseño y UX.\n Contenido figital.\n");
	return 0;
}
