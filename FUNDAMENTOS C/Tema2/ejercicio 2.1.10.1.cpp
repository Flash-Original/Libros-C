/*ejercicio 2.1,10.1 Crear un programa que use tres variables x,y,z.Sus valores
Sus valores iniciales seran 15,-10,2.147.483.647.Se debera incrementar el valor
de estas variables.¿Que valores esperas que se obtengan? Contrástalo con el 
resultado obtenido por el programa.*/

#include <stdio.h>

int main(){
	int x=15;
	int y=-10;
	int z=2147483647;
	printf("Mostrando antes z;%d\n",z);
	x++;
	y++;
	z++;
	printf("Mostrando con ++;%d\n",x);
		printf("Mostrando con ++;%d\n",y);
			printf("Mostrando con ++;%d\n",z);
			
			return 0;
}
