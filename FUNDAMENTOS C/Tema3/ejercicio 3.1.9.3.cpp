/* ejercicio 3.1.9.2 Crear un programa que use el operador condicional para dar a
una variable llamada "iguales"(entera) el valor 1 si los dos números que ha 
tecleado el usuario son iguales, o el valor 0 si son distintos*/

#include <stdio.h>
int main(){
	int x,y,iguales=0;
	printf("Este programa dara el valor 1 si los dos son iguales y 0 si son distintos\n");
	printf("Teclea un numero\n");
	scanf("%d",&x);
		printf("Teclea segundo numero\n");
	scanf("%d",&y);
	if(x==y){
		iguales++;
	}
	else
	iguales=0;
printf("El valor es %d",iguales);	
}
