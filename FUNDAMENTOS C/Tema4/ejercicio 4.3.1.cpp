/*Ejercicio 4.3.1 Un programa que escriba las letras de la A
MAYUSCULA a la Z MAYUSCULA usando "for" y "putchar"(el abecedario tiene 27 letras)*/

#include <stdio.h>

int main(){
	char x;
	for(x='A';x<'Z';x++){
		putchar(x);
	}
	return 0;
}
