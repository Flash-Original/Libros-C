/*ejercicio 5.5.3.1 Ampliar el programa del primer apartado de 5.5.2 para que el campo
"duracion" se almacene como minutos y segundos, usando un "struct" anidado que contenga
a su vez estos dos campos*/


#include <stdio.h>
#include <string.h>
struct Tiempo{
	int minutos;
	int segundos;
};
	struct Cancion{
		char Artista[40]={};
		char Titulo[40]={};
		struct Tiempo Duracion;
		int Tamano=0;
	};
			int error; // para avisar que no se ha encontrado
int main(){
	struct Cancion Canciones[100];
	int eleccion; //seleccion de opcion
	int x; //contador
	char Title[40]; // Para que ingrese un titulo
while(eleccion!=0){
printf("¿Que deseas?\n");
	printf("***********************************************\n");
	printf("***********************************************\n");
	printf("****1ºAnadir Nueva Cancion*********************\n");
	printf("****2ºMostrar titulo de todas las canciones****\n");
	printf("****3ºBuscar Cancion***************************\n");
	printf("****0ºsalirº***********************************\n");
	printf("***********************************************\n");
	printf("***********************************************\n");
	scanf("%d",&eleccion);
	if(eleccion==1){
		getchar();
printf("Inserte el nombre del artista");
gets(Canciones[x].Artista);
printf("Inserte el nombre del Titulo");
gets(Canciones[x].Titulo);
printf("Inserte la duracion de la cancion");
scanf("%d",&Canciones[x].Duracion);
printf("Inserte el Tamaño del archivo");
scanf("%d",&Canciones[x].Tamano);
x++;
}
if(eleccion==2){
	x=0;
	while(x<100){
		if(strcmp(Canciones[x].Titulo,"\0")!=0){
				printf("\nCanciones:%s\n",Canciones[x].Artista);
printf("Titulo:%s\n",Canciones[x].Titulo);
printf("Duracion:%d\n",Canciones[x].Duracion);
printf(" Tamano:%d\n",Canciones[x].Tamano);
x++;
		}
		x++; 

	}
	x=0;
}
if(eleccion==3){
	
	printf("Que Titulo buscas");
	scanf("%s",&Title);
	x=0;
	while(x<100){
		if(strcmp(Canciones[x].Titulo,Title)==0){
				printf("\nCanciones:%s\n",Canciones[x].Artista);
printf("Titulo:%s\n",Canciones[x].Titulo);
printf("Duracion:%d\n",Canciones[x].Duracion);
printf(" Tamano:%d\n",Canciones[x].Tamano);
x++;
error++;
}
x++;
}

if(error==0){
	printf("No se ha encontrado");
}

}
}
return 0;
}
