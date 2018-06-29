/*Ejercicio 2.5.1.1 Crear un programa que pida al usuario que teclee cuatro letras
y las muestre en pantalla juntas, pero en orden inverso, y entre comillas dobles.
Por ejemplo si las letras que teclean son a,l,o,h escribiria "hola".
*/

#include <stdio.h>

int main(){
	char let,cha,sta,ra;
	printf("Introduzca la primera letra\n");
	scanf("%c",&let);
		printf("Introduzca la segunda letra\n");
	scanf("%c",&cha);
		printf("Introduzca la tercera letra");
	scanf("%c",&sta);
		printf("Introduzca la cuatro letra");
	scanf("%c",&ra);
	printf("\"%c%c%c%c\"",ra,sta,cha,let);
	return 0;
}
