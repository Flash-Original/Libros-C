/*ejercicio 5.5.1.1 Un "struct" que almacene datos de una cancion en formato MP3:
Artista,Titulo,Duracion(segundos).Tamaño del fichero (en KB).Un programa debe
pedir los datos de una cancion al usuario, almacenarlos en dicho "struct"y 
despues mostrarlos en pantalla*/
#include <stdio.h>
	struct Cancion{
		char Artista[40];
		char Titulo[40];
		int Duracion;
		int Tamano;
	};
int main(){
	struct Cancion Canciones;
printf("Inserte el nombre del artista");
scanf("%s",&Canciones.Artista);
printf("Inserte el nombre del Titulo");
scanf("%s",&Canciones.Titulo);
printf("Inserte la duracion de la cancion");
scanf("%d",&Canciones.Duracion);
printf("Inserte el Tamaño del archivo");
scanf("%d",&Canciones.Tamano);
printf("Los datos introducidos Canciones:%s\n Titulo:%s\n Duracion:%d\n Tamano:%d\n",Canciones.Artista,Canciones.Titulo,
Canciones.Duracion,Canciones.Tamano);
return 0;
}
