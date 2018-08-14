/* ejercicio 3.2.3.3 Crear un programa que muestre las letras de la 
Z(mayuscula)a la A(mayuscula) descendiendo*/

#include <stdio.h>

int main(){
	char letra;
	for (letra='Z';letra>='A';letra--)
		printf("%c",letra);
	
	return 0;
}
