/*Ejercicio 5.3.1 Un programa guarde los nombres de los meses.
El usuario deberá indicar un número de mes (por ejemplo,3) y
se le mostrar el nombre de dicho mes(por ejemplo Marzo)*/

#include <stdio.h>

int main(){
	int mes;
	char meses[12][30]={
"Enero",
"Febrero",
"Marzo",
"Abril",
"Mayo",
"Junio",
"Julio",
"Agosto",
"Septiembre",
"Octubre",
"Noviembre",
"Diciembre"
	};
	printf("¿Que mes te interesa saber?");
	scanf("%d",&mes);
	printf("El mes que señalas es %s",meses[mes-1]);
	return 0;
}
