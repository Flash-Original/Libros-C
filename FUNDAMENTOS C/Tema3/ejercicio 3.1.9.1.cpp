/*ejercicio 3.1.9.1 Crear un programa que use el operador condicional para mostrar
un el valor absoluto de un n�mero de la siguiente forma: si el n�mero es positivo
, se mostrar� tal cual; si es negativo, se mostrar� cambiado el signo*/

#include <stdio.h>
int main(){
	int x;
	printf("Introduzca un numero es positivo o negativo te lo dira");
	scanf("%d",&x);
(x>0)?printf("El numero es positivo"):printf("El numero es negativo %d",x);
}
