/*ejercicio 5.2.4.1 Un programa que te pida una frase y la muestre
en pantalla sin espacios.Por ejemplo,si la frase es "Hola, como estas",
deberia aparecer en pantalla "Hola,comoestas".*/

#include <stdio.h>
#include <string.h>
int main(){
	char texto[40];
	int cantidad;
	int x;
	printf("Introduzca una frase para quitar los espacios");
	gets(texto);
	cantidad=strlen(texto);
	while(x<cantidad){
		if(texto[x]==' '){
		texto[x]=texto[x+1];
		}
		x++;
	}
	puts(texto);
	return 0;
}
