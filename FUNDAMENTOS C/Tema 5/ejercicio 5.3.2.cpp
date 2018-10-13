/*ejercicio 5.3.2:Usar un array de 3 dimensiones para guardar los nombres de los emses en español 
e ingles.El usuario deberá indicar un número de mes(por ejemplo,3) y se le 
mostrar el nombre de dicho mes en español(marzo) y en ingles(march)*/

#include <stdio.h>

int main(){
		int mes;
	char mesesEspanol[12][30]={
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
char mesesIngles[12][30]={
"January",
"February",
"March",
"April",
"May",
"june",
"july",
"August",
"September",
"October",
"November",
"December"};
	printf("¿Que mes te interesa saber?");
	scanf("%d",&mes);
	printf("El mes que señalas es %s en espanol y en ingles %s",mesesEspanol[mes-1],mesesIngles[mes-1]);
	return 0;
}

