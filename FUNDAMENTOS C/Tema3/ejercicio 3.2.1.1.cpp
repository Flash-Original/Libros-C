/*Ejercicio 3.2.1.1 Crear un programa que pida al usuario la
contrase�a (n�merica).Deber� terminar cuando introduzca como contrase�a 
el numero 4567, pero volv�rsela a pedir tantas veces como sea necesario
*/

#include <stdio.h>
int main(){
	int num;
	while(num!=4567){
		printf("Inserte contrase�a");
		scanf("%d",&num);
			if(num!=4567){
			printf("Contrase�a Incorrecta");
		}

	}
	printf ("pase se�or");
	return 0;
}
