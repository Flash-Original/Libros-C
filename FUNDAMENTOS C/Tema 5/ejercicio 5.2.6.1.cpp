/*ejercicio 5.2.6.1 Crear un programa que pida al usuario su contraseña.
Deberá terminar cuando introduzca como contraseña la palabra "clave",
pero volversela a pedir tantas veces como se necesario*/

#include<stdio.h>
#include <string.h>
int main(){
	char contrasena[40]=("clave");
	char entrada[40];
	while(strcmp(contrasena,entrada)!=0){
	printf("Introduzca contraseña");
	gets(entrada);
}
return 0;
}
