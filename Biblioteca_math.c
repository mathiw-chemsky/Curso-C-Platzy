//Biblioteca math.h (platzy)
#include <stdio.h>
#include <math.h>

int main(){
	//Declaración de variables
	int x, y;
	float result1, result2, result3, result4, result5, result6, result7, result8;
	
	printf("Ingrese el valor de x  y Y: \n");
	scanf("%d %d", &x, &y);  //funcion de stdio.h
	
	//funciones de math.h
	result1 = sin(x);
	result2 = cos(x);
	result3 = tan(x);
	result4 = exp(x);
	result5 = log(x);
	result6 = log10(x);
	result7 = pow(x, y);
	result8 = fabs(x);

	printf("El valor ingresado es: %d\n", x);
	printf("El valor del seno de x es: %.3f \n", result1);
	printf("El valor del coseno de x es: %.3f \n", result2);
	printf("El valor del tangente de x es: %.3f \n", result3);
	printf("El valor del exponente de x es: %.3f \n", result4);
	printf("El valor del logaritmo natural de x es: %.3f \n", result5);
	printf("El valor del logaritmo base 10 de x es: %.3f \n", result6);
	printf("El valor de la potencia de x es: %.3f \n", result7);
	printf("El valor absoluto de x es: %.3f \n", result8);


	return 0;
}
