#include <stdio.h>

//1.7.1 Multiplicar dos números tecleados por usuario

int main(){
	int unnumero,dosnumero,mult;
	printf("Introduzca el 1º num a multiplicar\n");
	scanf("%d",&unnumero);
	printf("Introduzca el 2º num a multiplicar\n");
	scanf("%d",&dosnumero);
	mult=unnumero *dosnumero;
	printf("Resultado=%d\n",mult);
	return 0;
}
