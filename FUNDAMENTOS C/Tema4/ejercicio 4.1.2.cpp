/*Ejercicio 4.1.2 Un programa que pida al usuario 2 números reales y muestre
su divison con 2 decimales(excepto si el segundo es 0; en ese caso,debera
decir "no se puede dividir entre 0")*/

#include <stdio.h>

int main(){
	float a;
	float b;
	printf("Introduzca un numero a dividir");
	scanf("%f",&a);
	printf("Introduzca el numero por el que quiere dividirlo");
	scanf("%f",&b);
	if(b==0){
		printf("No se puede dividir entre 0");
		return 0;
	}
	printf("El resultado es %.2f",a/b);
	return 0;
}
