/*Ejercicio 3.2.1.1 Crear un programa que pida al usuario la
contraseña (númerica).Deberá terminar cuando introduzca como contraseña 
el numero 4567, pero volvérsela a pedir tantas veces como sea necesario
*/

#include <stdio.h>
int main(){
	int num;
	while(num!=4567){
		printf("Inserte contraseña");
		scanf("%d",&num);
			if(num!=4567){
			printf("Contraseña Incorrecta");
		}

	}
	printf ("pase señor");
	return 0;
}
