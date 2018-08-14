/*Ejercicio 3.1.1.1 Crear un programa que pida al usuario un número entero y 
diga si es par(pista:habrá que comprobar que el resto que se obtiene al dividir
entre 2 es 0: if(x%2==0)*/

#include <stdio.h>

int main(){
	int x;
	printf("Introduzca numero y te diremos si es par o no");
	scanf("%d",&x);
	if(x%2==0){
		printf("Es par");
		
	}
	return 0;
}
