/*ejercicio 3.2.2.4 Crea un programa que pida al usuario su
c�digo de usuario (numero entero) y su contrase�a numerica
(otro numero entero) y no se permita seguir hasta que 
intoduzca como codigo 1024 y como contrase�a 4567*/

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
