#include <stdio.h>

/*Ejercicio 2.1.3.3 Si suponemos que una canción tipica en formato MP3 ocupa cerca de 3.500kb
¿cuántas se podrían guardar en un reproductor MP3 que tenga 256 Mb de capacidad?*/

int main(){
	float x=3500,MP3=256,res;
	res=256*1024/3500;
printf("El resultado es: %.0f",res);

return 0;	
	
}
