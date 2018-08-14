/*ejercicio 3.1.1.2 Crear un programa que pida al usuario dos números enteros y 
diga cual es el mayor de ellos*/

#include <stdio.h>

int main(){
	int x,y;
	printf("Indica dos numeros y te dire cual es mayor");
	scanf("%d",&x);
	scanf("%d",&y);
	if(x>y){
	printf("El primer numero es mayor que el segundo");
}
	if(y>x){
	printf("El segundo numero es mayor es el primero");
	
}
return 0;
}
