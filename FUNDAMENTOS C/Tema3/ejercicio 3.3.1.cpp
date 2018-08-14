/*ejercicio 3.3.1 Crear un programa que pida un numero
al usuario (entre 1 y 100) y muestre tantas letras A
como indique ese número, usando "break" para terminar*/

#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for (int b=0;b<=a;b++){
		printf("%d",b);
		if(b==a){
		printf("roto");
		break;
	}
		}
	}
