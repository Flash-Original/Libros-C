/*ejercicio 5.2.2.1 Un programa que pida al usuario que introduzca
una palabra,cambie su primera letra por una "A" y muestre la 
palabra resultante*/


#include <stdio.h>

int main(){
	char palabra[40];
	char letra='A';
//las "" son para los printf cuando son en variables sse ponen ' ' luego sustituimos por el
//que esta en el 0 ya que tambien cuenta	
	printf("Introduzca una letra y veras como la primera palabra se convierte en una A");
	scanf("%s",&palabra);
	palabra[0]=letra;
	printf("La palabra resultante %s ",palabra);
	return 0;
	
}
