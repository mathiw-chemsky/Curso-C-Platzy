/* Video 10, curso Funciones en C, Placcczy. Biblioteca Time.h para medir el tiempo
en la programación y la manga del muerto, fecha pseleccionada antes, funciones:
1.- time(NULL): para dar el valor actual del tiempo
2.- difftime(variable1, variable2: para comparar dos variables
3.- time_t (no es una función sino un tipo de variable tiempo).
*/
#include <stdio.h>
#include <time.h>

//Variables globales
  time_t seconds; //Variable de tipo "time"
  time_t begin, end;
  
int main()
{
	long i;

	//Para ver cuanto tiempo ha pasado desde que inicio todoo usamos funcion time(NULL)
//	seconds = time(NULL);
//	printf("El numero de horas desde EPOCH 1ero de enero de 1970 a las 00:00 es: %ld \n", seconds/3600);

	//Para comparar el tiempo de inicio y final usamos funcion "difftime"
	begin = time(NULL);
	for(i = 0; i < 600000000; i++);
	end = time(NULL);
	printf("El tiempo que duró nuestro for es: %f \n", difftime(end, begin));

	return 0;
}
