/*ejercicio 5.2.5.1 Un programa que te pida una palabra, y la almacene
en la variable llamada "texto". Luego deberá pedir una segunda palabra 
y añadirla al final de "texto".Finalmente, debera pedir una tercera
palabra, y guardarla en la variable "texto" y en otra variable llamada
"texto2"*/

#include <stdio.h>
#include <string.h>
int main(){
	char texto[10];
	char texto2[10];
	printf("Inserte la primera palabra");
	gets(texto);
	printf("Inserte la segunda palabra");
	gets(texto2);
	strcat(texto,texto2);
	//los printf son para asegurarse que cumplen se pueden borrar
	printf("%s\n",texto);
		printf("%s\n",texto2);
	printf("Inserte la tercera palabra");
	gets(texto);
	strcpy(texto2,texto);
		printf("%s\n",texto);
			printf("%s\n",texto2);
	
}
