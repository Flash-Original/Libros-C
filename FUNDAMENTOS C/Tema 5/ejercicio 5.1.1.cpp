/*Ejercicio 5.1.1 Un programa que pida al usuario 4 numeros,los
memorice (utilizando una tabla) calcula su media aritmetica y
despues muestre en pantalla la media y los datos tecleados*/

#include<stdio.h>
int main(){
	int za[4];
	int ra;
	int x=0;
	printf("Di 4 numeros y te diremos la media");
	while(x<4){
	scanf("%d",&za[x]);
		fflush(stdin);
		x++;
	}
	printf("\n");
	ra=((za[1]+za[2]+za[3]+za[0])/4);
	printf("Resultado %d",ra);
	return 0;
}
