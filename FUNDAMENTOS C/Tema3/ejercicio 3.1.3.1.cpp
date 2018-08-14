/* ejercicio 3.1.3.1 Crear un programa que multiplique dos numeros enteros de 
la siguiente forma:
	pedira al usuario un primer número entero.Si el numero que se teclee es 0,
	escribira en pantalla "El producto de 0 por cualquier numero es 0".Si se ha
	retecleado un numero distinto de cero, se pedira al usuario un segundo numero
	y se mostrara el producto de ambos
	
	*/
	
#include <stdio.h>	
int main(){
	int x,y;
	printf("Introduce el primer numero");
	scanf("%d",&x);
if(x==0){
	printf("Todo multiplicado por 0 es 0");
	return 0;
}
printf("Introduce el segundo numero!");
scanf("%d",&y);
printf("El resultado es %d",x*y);
return 0;
}
