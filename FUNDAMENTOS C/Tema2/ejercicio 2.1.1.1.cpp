#include <stdio.h>

// 2.1.1.1 Multiplicar dos numeros de 4 cifras que teclee el usuario, usando el modificador "long"
int main(){
	 long int a,b,mult;
	printf("Primer numero a multiplicar");
	scanf("%d",&a);
	printf("Segundo numero a multiplicar");
	scanf("%d",&b);
	mult=a*b;
	printf("multiplicacion con long: %d\n",mult);
	return 0;
}
