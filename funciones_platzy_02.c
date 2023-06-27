/*funtions 02 (platzy funciones en C) tipos de funciones
1)funciones sin argumento y sin valor de retorno

 void functionName(); //declaración de funcion

 functionName();   //llamado de funcion
 
 void functionName()  //definición de funcion
 {
	  //logica
 }
 
2)funciones con argumentos pero sin valores de retorno estructura:
 
 void funcionName(argumento);   //declaracion
 
 funcionName(argumento);  //llamado de la funcion
 
 void funcionName(argumento)   //definición
 {
	//logica
 }
 
3)funciones sin argumentos y con valores de retorno estructura:
 
 int funcionName();

 funcionName(argumento);

 int funcionName(argumento)
 {
	 //logica
 }
 
4)funciones con argumentos y con valores de retorno estructura:
 
 int funcionName(argumento);
 
 funcionName(argumento);
 
 int funcionName(argumento)
 {
	 //logica
 }
 
*/
#include <stdio.h>
//Declaración de funciones
int a, b;

int add(int a, int b); //Buena práctica ponerle void sin argumento

int main(){
	
	 //Llamado de la función
	 printf("La suma es: %d \n", add(100, 100));
	
	return 0;
}
//Definición de funciones
int add(int a, int b)
{
	 int add;

	 add =  a + b;
	 //printf("La suma es: %d \n", add);
	 return add;
}
