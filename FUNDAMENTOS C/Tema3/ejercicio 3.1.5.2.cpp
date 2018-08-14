/*ejercicio 3.1.5.2 Crear un programa que pida al usuario dos numeros enteros y 
diga "Uno de los numeros es positivo", "Los dos números son positivos" o bien
"Ninguno de los numeros es positivo", según correspondia*/

#include <stdio.h>
int main(){
	int x,y;
	printf("Escribe el primer numero");
	scanf("%d",&x);
	printf("Escribe el segundo numero");
	scanf("%d",&y);
	if(x>0&&y>0){
		printf("Los dos son positivos");
	}
	if(x>0||y>0){
		printf("Al menos uno es positivo");
	}
	else
	printf("Ninguno es positivo");
	return 0;
	
}
