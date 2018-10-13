/*Ejercicio 5.2.1.1 Un programa que te pida tu nombre y una cifra numerica
y escriba tu nombre tantas veces como indice esa cifra numerica */

#include <stdio.h>

int main()
{
	char nombre[40];
	int x;
	int y;
	printf("Introduzca tu nombre");
	scanf("%s",&nombre);
	printf("Ahora el numero de veces que quieres que se repita\n");
	scanf("%d",&x);
	//basicamente que guarde el nombre despues ponemos un contador normal y ya esta
	while(y<x){
	printf("%s\n",nombre);
	y++;
}
return 0;
}
