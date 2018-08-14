/*ejercicio 3.2.3.5 Crear un programa que escriba en pantalla
los numeros del 1 al 50 que sea multiplos de 3(pista: habrá que
recorrer todos esos números y ver si el resto de la division
entre 3 resulta 0)*/

#include <stdio.h>

int main(){
	for(int a=1;a<=50;a++){
	if(a%3==0)
	printf("%d\n",a);
}
return 0;
}
