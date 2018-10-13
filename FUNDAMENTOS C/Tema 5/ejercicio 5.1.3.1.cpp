/*Ejercicio 5.1.3.1 A partir del programa propuesto en 5.1.2, que almacenaba 
en una tabla el numero de dias que tiene cada mes, crear otro que le pida al
usuario que le indique la fecha, detallando el dia (1 al 31) y el mes
(1=enero, 12=diciembre),como respuesta muestre en pantalla el numero de dias
que quedan hasta final de año.*/

//Supongo que sera que si pongo 12 de julio que me diga cuanto queda para final de año
#include <stdio.h>

  int main(){
 	int meses[13]{0,31,29,31,30,31,30,31,31,30,31,30,31};
 	int con;
 	int dias;
 	int con1=1;
 	int total;
	 printf("Indica mes para contar los dias");
 	scanf("%d",&con);
 	printf("Indica dia del mes para saberlo");
 	scanf("%d",&dias);
 	while(con1<=con){
 		total=total+meses[con1];
 		con1++;
	 }
	 total=total+dias-1; 
	 total=365-total;
	 printf("El total es %d",total);
 }
