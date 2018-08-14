/*Ejercicio 3.7.1 Crear un programa que dé al usuario la oportunidad
de adivinar un número del 1 al 100 (prefijado por el programa)
 de 6 intentos.En cada pasada deberá
avisar si se ha pasado o se ha quedado corto*/

#include <stdio.h>
int main(){
int cur=20,dec;
printf("Introduzca el numero");
scanf ("%d",&dec);	
for(int a=0;a<=6;a++){
	if(dec<cur){
		printf("Te has quedado corto");
	} 
	if (dec>cur){
		printf("Te has pasado");
	}
 if(dec==cur){
		printf("Has acertado");
		break;
	}
	scanf ("%d",&dec);
	
}
return 0;
}
