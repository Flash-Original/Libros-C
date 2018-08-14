/*ejercicio 3.1.2.3 Crea un programa que escriba en pantallas los
numeros pares del 26 al 10(descendiendo) con "while"*/

#include <stdio.h>

int main(){
	int num=26;
	while(num>=10){
		printf("%d\n",num);
		num=num-2;
	}
	return 0;
}
