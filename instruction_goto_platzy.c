//Instruction goto (platzy Control de flujo C) raro, inutil y con peligro a malas prácticas
#include <stdio.h>

int main(){
	//Declaración de variables
	
	
	//Instruction goto
	for(size_t i = 0, i < count; i ++){
		for(size_t i = 0, i < count; i ++){
			for(size_t i = 0, i < count; i ++){
				if(panic){
					goto errorHandler; //mandas a otra instrucción fuera del codigo
		 		}
			}
		}
		
	}
	errorHandler: //todo el código para componer el desastre
	return 0;
}
