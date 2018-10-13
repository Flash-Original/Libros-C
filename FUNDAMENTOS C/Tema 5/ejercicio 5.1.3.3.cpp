/*Ejercicio 5.1.3.3 Crear un programa que pida al usuario 10 numeros
calcule su media y luego muestre los que estan por encima de la media
*/

#include <stdio.h>

int main(){
	int num[10];
	int x;
	int total;
	while(x<10){
		printf("Introduzca un numero");
		scanf("%d",&num[x]);
	total=total+num[x];
	x++;
}
total=total/10;
x=0;
while(x<10){
	if(total<num[x]){
		printf("El numero %d es menor a %d\n",total,num[x]);
	}
	x++;
}
return 0;
}
