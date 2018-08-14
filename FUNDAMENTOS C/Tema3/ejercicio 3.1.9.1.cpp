/*ejercicio 3.1.9.1 Crear un programa que use el operador condicional para mostrar
un el valor absoluto de un número de la siguiente forma: si el número es positivo
, se mostrará tal cual; si es negativo, se mostrará cambiado el signo*/

#include <stdio.h>
int main(){
	int x;
	printf("Introduzca un numero es positivo o negativo te lo dira");
	scanf("%d",&x);
(x>0)?printf("El numero es positivo"):printf("El numero es negativo %d",x);
}
