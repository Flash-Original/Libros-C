#include <stdio.h>

//1.7.1 Multiplicar dos n�meros tecleados por usuario

int main(){
	int unnumero,dosnumero,mult;
	printf("Introduzca el 1� num a multiplicar\n");
	scanf("%d",&unnumero);
	printf("Introduzca el 2� num a multiplicar\n");
	scanf("%d",&dosnumero);
	mult=unnumero *dosnumero;
	printf("Resultado=%d\n",mult);
	return 0;
}
