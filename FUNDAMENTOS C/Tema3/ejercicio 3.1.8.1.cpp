/* ejercicio 3.1.8.1 Crear el diagrama de flujo y la version en c de un programa 
que dé al usuario tres oportunidades para adivinar un numero del 1 al 10*/

#include <stdio.h>

int main(){
	int o=3,y,x=5;
	printf("¿Sera el mismo numero?");
	printf("Escriba numero");
	scanf("%d",&y);
	if(x==y){
		printf("Vaya es igual");
		return 0;
	}
	else
	printf("Prueba otra vez");

	printf("Escriba numero");
	scanf("%d",&y);
	if(x==y){
		printf("Vaya es igual");
		return 0;
	}
	else
	printf("Prueba otra vez");

printf("Escriba numero");
	scanf("%d",&y);
	if(x==y){
		printf("Vaya es igual");
		return 0;
	}
	else
	printf("Se acabo");
}

