/*ejercicio 5.1.2.1 Un programa que almacene en una tabla el
numero de dias que tiene cada mes(supondemos que es un año 
no bisiesto) pida al usuaio que le indique un mes
(1-enero,12-diciembre)y muestre en pantalla el numero de dias
que tiene ese mes)*/
#include <stdio.h>

int main(){
	int meses[13]{
	0,31,29,31,30,31,30,31,31,30,31,30,31};
	int con;
	scanf("%d",&con);
		printf("%d\n",meses[con]);
	return 0;
}
