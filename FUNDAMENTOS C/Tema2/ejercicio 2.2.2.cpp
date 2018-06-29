/*ejercicio 2.2.2 Crear un programa que use tres variables x,y,z. Las tres serán 
numeros reales y nos bastara con dos cifras decimales. Debera pedir al usuario 
los valores para las tres variables y mostrar en pantalla cual es el mayor
de los tres numeros tecleados
*/

#include <stdio.h>

int main(){
	float x,y,z;
	
	printf("Introduzca el primer valor");
	scanf("%f",&x);
	printf("Introduzca el segundo valor");
	scanf("%f",&y);
	printf("Introduzca el tercer valor");
	scanf("%f",&z);
	if((x>y)&&(x>z)){
		printf("El primer numero es mayor que ninguno");
	}
	if((y>x)&&(y>z)){
				printf("El segundo numero es mayor que ninguno");
	}
	if((z>x)&&(z>y)){
				printf("El tercer numero es mayor que ninguno");
	}
	return 0;
	}
