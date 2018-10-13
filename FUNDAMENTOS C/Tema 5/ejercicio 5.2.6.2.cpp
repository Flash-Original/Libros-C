/*ejercicio 5.2.6.2 Crear un programa que pida al usuario su nombre y su contraseña, 
y no le permita seguir hasta que introduzca como nombre "Pedro" y como contraseña "Peter"*/
#include <stdio.h>
#include <string.h>
int main(){
	char nombre[40];
	char contrasena[40];
	while(strcmp(contrasena,"Peter")!=0&&(strcmp(nombre,"Pedro")!=0)){
	printf("Introduzca un nombre");
	scanf("%s",nombre);
	printf("Introduzca contrasena");
	scanf("%s",contrasena);	
}
return 0;
}
