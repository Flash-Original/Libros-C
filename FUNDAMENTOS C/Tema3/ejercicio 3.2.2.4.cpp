/*ejercicio 3.2.2.4 Crea un programa que pida al usuario su
código de usuario (numero entero) y su contraseña numerica
(otro numero entero) y no se permita seguir hasta que 
intoduzca como codigo 1024 y como contraseña 4567*/

#include <stdio.h>

int main(){
	int usuario;
	int contrasena;
	do{
		printf("Introduzca usuario");
		scanf ("%d",&usuario);
		printf("Introduzca contrasena");
		scanf("%d",&contrasena);
	}while(usuario!=1024&&contrasena!=4567);
	return 0;
}
