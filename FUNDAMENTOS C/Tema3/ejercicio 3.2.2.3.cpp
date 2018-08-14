/*ejercicio 3.2.2.3 Crea un programa que escriba  en
pantalla los numeros pares del 26 al 10 (descendiendo)
usando "do while"*/

#include <stdio.h>

int main (){
	int num1=26;
	printf("%d\n",num1);
	do{
		num1=num1-2;
		printf("%d\n",num1);
	}while(num1>10);
	return 0;
}
