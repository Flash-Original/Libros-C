/*Ejercicio 4.2.2 Un programa que pida al usuario un número octal
y muestre su equivalente en base 10*/

#include <stdio.h>

int main(){
	int a;
	printf("Ingrese un numero octal");
	scanf("%o",&a);
	printf("De octal a base 10(decimal) %d",a);
}
