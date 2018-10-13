/*Ejercicio 5.1.1.2 Un programa que pida al usuario 5 numeros
reales y luegos los muestre en el orden contrario al que
se introdujeron*/

#include <stdio.h>
float num[5];
int con=0;
float extra;
int main(){
	while(con<5){
	printf("Introduce numeros para hacerlo inverso");
	scanf("%f",&num[con]);
	printf("%f",num[con]);
	con++;
}
con=0;
extra=num[0];
	printf("%f",extra);
num[0]=num[4];
	printf("%f",num[0]);
num[4]=extra;
extra=num[1];
num[1]=num[3];
num[3]=extra;
extra=num[2];
while(con<5){
	printf("%f\n",num[con]);
	con++;
}
return 0;
}
