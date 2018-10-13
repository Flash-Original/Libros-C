/*ejercicio 5.2.3.2 Un programa que te pida tu nombre y lo
muestre en pantalla separando al revés.Por ejemplo, si tu nombre
es "Juan", deberia aparecer en pantalla "nuaj"*/

#include <stdio.h>
#include <string.h>

int main(){
	char frase[1];
	int x=0;
	int cantidad;
	printf("Pon tu nombre");
	scanf("%s",frase);
	cantidad=strlen(frase);
	while(cantidad>=0){
		printf("%c",frase[cantidad]);
		cantidad--;
	}
	return 0;
}
