/*ejercicio 5.2.3.1 Un programa que te pida tu nombre y lo muestre en
pantalla separando cada letra de la siguiente con un espacio.
Por ejemplo, si tu nombre es "Juan",deberia aparecer en pantalla
"j u a n".*/
// usaremos strlen para saber la cantidad de texto y a partir
// de ese numero le pondremos un limite
#include <stdio.h>
#include <string.h>

int main(){
	char frase[5];
	int x=0;
	int cantidad;
	printf("Pon tu nombre");
	scanf("%s",&frase);
	cantidad=strlen(frase);
	while(x<=cantidad){
		printf("%c",frase[x]);
		printf(" ");
		x++;
	}
	return 0;
}
