#include <stdio.h>

/*Ejercicio 2.1.3.3 Si suponemos que una canci�n tipica en formato MP3 ocupa cerca de 3.500kb
�cu�ntas se podr�an guardar en un reproductor MP3 que tenga 256 Mb de capacidad?*/

int main(){
	float x=3500,MP3=256,res;
	res=256/(3500/1024);
printf("El resultado es: %.0f",res);

return 0;	
	
}
