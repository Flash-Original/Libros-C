/*ejercicio 4.4.1 Un programa que pida al usuario 4 letras
usando getchar y las muestre en orden inverso
por ejemplo,si las letras son "h o l a",escribiría "aloh"*/

#include <stdio.h>
int main(){
	char let1,let2,let3,let4;
	printf("Introduzca cuatro letras");
	let1=getchar();
	let2=getchar();
	let3=getchar();
	let4=getchar();
	printf("A la orden inverso es %c%c%c%c",let4,let3,let2,let1);
	return 0;
}
