/*ejercicio 5.1.2.2 Un programa que almacene en una tabla
el número de dias que tiene cada mes(año no bisiesto)pida
 al usuario que le indique un mes(ej 2 para febrero) 
 y un dia(ej el dia 15) y diga que numero de dia es dentro
 del año(por ejemplo, el 15 de febrero seria el dia numero
 46,el 31 de diciembre seria el dia 365)*/
 
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
	 printf("El total es %d",total);
 }
