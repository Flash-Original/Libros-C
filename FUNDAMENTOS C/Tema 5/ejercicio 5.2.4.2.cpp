/*ejercicio 5.2.4.2 Un programa que te pida tu nombre (usando "gets") y 
una cifra numerica, y escriba tu nombre tantas veces como indique esa 
cifra numerica*/
#include <stdio.h>
int main(){
	char nombre[40];
	int numero;
	int x;
		printf("Introduzca nombre");
	gets(nombre);
		printf("Introduzca numero de veces a repetir");
	scanf("%d",&numero);
	//se pone ya que al usar intro en el scanf lo coge automaticamente el gets de abajo

	while (x<numero){
	puts(nombre);
	x++;
}
return 0;
}
