/*ejercicio 5.2.1.2 Un programa similar al anterior, pero que pida
en primer lugar la cifra numérica y después tu nombre, y luego escriba 
el nombre tantas veces como indique esa cifra numérica*/
//No debo copiar no debo copiar y peggaaaa aaaj
#include <stdio.h>

int main()
{
	char nombre[40];
	int x;
	int y;

	printf("Ahora el numero de veces que quieres que se repita\n");
	scanf("%d",&x);
	//basicamente que guarde el nombre despues ponemos un contador normal y ya esta
		printf("Introduzca tu nombre");
	scanf("%s",&nombre);
	while(y<x){
	printf("%s\n",nombre);
	y++;
}
return 0;
}
