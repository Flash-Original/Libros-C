/*ejercicio 3.2.3.1 Crear un programa que muestre los números del 15
al 5 descendiendo (pista: en cada pasada habra que descontar 1,
por ejemplo haciendolo i--)*/

#include <stdio.h>

int main(){
	int num1;
	for (num1=15;num1>=5;num1--){
		printf("%d\n",num1);
	}
	return 0;
}
