//Instruction goto (platzy Control de flujo C) raro, inutil y con peligro a malas pr�cticas
#include <stdio.h>

int main(){
	//Declaraci�n de variables
	
	
	//Instruction goto
	for(size_t i = 0, i < count; i ++){
		for(size_t i = 0, i < count; i ++){
			for(size_t i = 0, i < count; i ++){
				if(panic){
					goto errorHandler; //mandas a otra instrucci�n fuera del codigo
		 		}
			}
		}
		
	}
	errorHandler: //todo el c�digo para componer el desastre
	return 0;
}
