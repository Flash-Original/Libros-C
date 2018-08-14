/*ejercicio 3.2.1.4 Crear un programa que calcule cuantas cifras tiene 
un número entero positivo*/

#include <stdio.h>

int main(){
	int num;
	int x;
	printf("Introduce un numero para saber cuantas cifras tiene");
	scanf("%d",&num);
	while(num>0){
		num =num/10;
		x++;
	}
	printf("Tiene %d cifras",x);
	return 0;
}
