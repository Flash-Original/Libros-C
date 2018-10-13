/* ejercicio 5.2.4.3 Un programa similar al anterior, pero
que pida en primer lugar la cifra numerica y despues tu 
nombre(con "gets"), y luego escriba el nombre tantas veces
como indique esa cifra numérica*/

#include <stdio.h>
int main(){
	char nombre[40];
	int numero;
	int x;

		printf("Introduzca numero de veces a repetir");
	scanf("%d",&numero);
	//se pone ya que al usar intro en el scanf lo coge automaticamente el gets de abajo
	getchar();
		printf("Introduzca nombre");
	gets(nombre);
	while (x<numero){
	puts(nombre);
	x++;
}
return 0;
}
