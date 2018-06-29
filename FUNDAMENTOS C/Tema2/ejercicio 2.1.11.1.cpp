/*ejercicio 2.1.11.1 Crear un programa que use tres variables x,y,z. Sus valores
iniciales sera 15,-10,214. Se deberá incrementar el valor de estas variables en
12, usando el formato abreviado,¿ Que valores esperas que se obtengan?
Contrástalo con el resultado obtenido por el programa*/

#include <stdio.h>

int main(){
	int x=15,y=-10,z=214;
	x+=12;
	y+=12;
	z+=12;
	
	printf("En abreviado sale %d",x);
		printf("En abreviado sale %d",y);
			printf("En abreviado sale %d",z);			
}
