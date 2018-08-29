/*Ejercicio 4.2.3 Un programa que pida al usuario una letra,despues
le pida una segunda letra y las muestre en el orden contrario al
que se introdujeron*/
#include <stdio.h>

int main(){
	char c;
	char extra;
	printf("Introduzca la primera letra");
	scanf ("%c",&c);
	fflush(stdin); //elimina la intro que usas en lo anterior 
		printf("Introduzca la segunda letra");
	scanf ("%c",&extra);
	
	printf("El orden inverso es %c%c",extra,c);
	return 0;
}


/*			Otra Manera

#include <stdio.h>

int main(){
	char c[2];
	char extra;
	printf("Introduzca dos letras");
	scanf ("%3s",&c);
	extra=c[0];
	c[0]=c[1];
	c[1]=extra;
	
	printf("El orden inverso es %s",c);
	return 0;
}
*/
