/*Ejercicio 3.4.1 Crear un programa que pida un numero al usuario
(entre 1 y 20) y muestre los números el 1 al 20, excepto el indicado
por el usuario,usando "continue" para evitar ese valor*/

#include <stdio.h>

int main(){
	int mask;
	printf("Introduzca un numero del 1 al 20");
	scanf("%d",&mask);
	for(int a;a<=20;a++){
		if(a==mask)
		continue;
		printf("%\n",a);
	}
}
