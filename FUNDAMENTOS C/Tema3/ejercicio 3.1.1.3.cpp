/*ejercicio 3.1.1.3 Crear un programa que pida al usuario dos numeros enteros
y diga si el primero es multiplo del seguno(pista:igual que antes habra que ver
si el resto de la division es cero: (a%b==0)*/

#include <stdio.h>

int main(){
	int x,y;
	printf("Introduzca los dos numeros del quieras saber si son multiplos"),	
	scanf("%d",&x);
	scanf("%d",&y);
	if(x%y==0){
		printf("son multiplos el uno del otro");
	}
	return 0;
}
