/*Ejercicio 4.2.1 Un programa que pida al usuario un número hexadecimal y
muestre su equivalente en base 10*/

#include <stdio.h>

int main(){
	int a;
	printf("Inserte hexadecimal a convertir en base 10");
	scanf("%x",&a);
	printf("La conversion a base 10 es %d",a);
	return 0;
}
