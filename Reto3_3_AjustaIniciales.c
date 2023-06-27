/*Reto #3: Ajusta las iniciales. Ahora, pedirás a tu usuario que ingrese su nombre,
apellido y país de origen en minúsculas. Después mostrarás los datos de salida con
mayúscula inicial al tratarse de nombres propios.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char nombre [15];
	char apellido [15];
	char nacionalidad [15];
	char inicialNombre;
	char inicialApellido;
	char inicialNacionalidad;
	
	printf("Ingresa los siguientes datos en minusculas. \nNombre: \n");
	gets(nombre);
	printf("Apellido: \n");
	gets(apellido);
	printf("Nacionalidad: \n");
	gets(nacionalidad);
	
	//Convertir primer caracter en máyusculas con funcion "toupper"
	inicialNombre = toupper(nombre[0]);
	inicialApellido = toupper(apellido[0]);
	inicialNacionalidad = toupper(nacionalidad[0]);
	
	//Imprimir información, para ello se imprime el caracter seguido del string, pero el string inicia en pocisión 1 con "nombre+1" como ejemplo
	printf("Tus datos son. Nombre: %c%s. Apellido: %c%s. Nacionalidad: %c%s \n", inicialNombre, nombre+1, inicialApellido, apellido+1, inicialNacionalidad, nacionalidad+1);
	
	
	
	return 0;
}
