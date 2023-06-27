/*Crearás un un script para el que el usuario indicará un número entre 1 y 6. Como respuesta se le brindará un mensaje según el número leido:
1 - “Hoy aprenderemos sobre prorgamación”
2 - “¿Qué tal tomar un curso de marketing digital?
3 - “Hoy es un gran día para comenzar a aprender de diseño”
4 - ¿Y si aprendemos algo de negocios online?
5 - “Veamos un par de clases sobre producción audiovisual”
6 - “Tal vez sea bueno desarrollar una habilidad blanda en Platzi”
En caso indicar un número distinto, pedir al usuario que ingrese uno en el rango válido.
*/
#include <stdio.h>
#include <stdlib.h>


int main(){
	//Declaracion de variables
	int seleccion;
	
	//input de informacion
	printf("ingresa un numero del 1 al 6 para decirte que aprenderas el dia de hoy. \n");
	scanf("%d", &seleccion);
	
	//estructura de seleccion switch-case
	switch(seleccion){
	case 1:
		puts("Hoy aprenderemos sobre prorgamacion.");
		break;
	case 2:
		puts("¿Qué tal tomar un curso de marketing digital?");
		break;
	case 3:
		puts("Hoy es un gran día para comenzar a aprender de diseño.");
		break;
	case 4:
		puts("¿Y si aprendemos algo de negocios online?");
		break;
	case 5:
		puts("Veamos un par de clases sobre producción audiovisual.");
		break;
	case 6:
		puts("Tal vez sea bueno desarrollar una habilidad blanda en Platzi.");
		break;
	default:
		puts("por favor elige un numero del 1 al 6 marichocoooo.");
	}
	return 0;
}
