/*Ejercicio 5.1.3.4 Un programa que pida al usuario 10 numeros y
calcule (y muestre) cuál es el mayor de ellos*/

#include <stdio.h>

int main(){
	int num[10];
	int x;
	int z=0;
	printf("Ahora introducira 10 numeros");
	while(x<10){
		printf("Introduzca aqui un numero");
		scanf("%d",&num[x]);
		if(z<num[x]){
			z=num[x];
		}
		x++;
	}
	printf("El numero mayor de todos los que has puesto es %d",z);
	return 0;
}
