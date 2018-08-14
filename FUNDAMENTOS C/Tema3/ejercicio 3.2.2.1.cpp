/*3.2.2.1 Crear un programa que pida numeros positivos al usuario
y vaya calculando la suma de todos ellos(terminará cuando se teclea
un número negativo o cero)*/

#include <stdio.h>

int main(){
	int num1,num2,num3;
	do{
		printf("Introduce un numero que sea postivo");
		scanf("%d",&num1);
		printf("Introduce un numero que sea postivo");
		scanf("%d",&num2);
		printf("Introduce un numero que sea postivo");
		scanf("%d",&num3);
		printf("El total es:%d",num1+num2+num3);
	}while(num1<=0&&num2<=0&&num3<=0);
	return 0;
}
