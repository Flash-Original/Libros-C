/*ejercicio 5.6.3 Un programa que sea capaz de almacenar los datos de hasta 50 personas: nombre,direccion,
telefono,edad(usando una tabla de structs).Deberá ir pidiendo los datos uno por uno, hasta que un nombre se 
introduzca vacío( se pulse Intro sin teclear nada).Entonces Debera aparecer un menu que permita:
	Mostrar la lista de todos los nombres.
	Mostrar las personas de una cierta edad
	Mostrar las personas cuya inicial sea la que el usuairo indique
	Salir del programa
	(lógicamente, este menú debe repetirse hasta que se escoja la opcion de "salir"*/
	
#include <stdio.h>
#include <string.h>
	struct persona{
		char nombre[40];
		char direccion[50];
		int telefono;
		int edad;
	};
	
	
	
int main(){
	int x =1; //contador exterior para salir del bucle
	int y=0;
	char extra[50];
	int opcion=9; //para menu
	int otros;///para cosas a parte
	char inicial;
	
	
struct persona personas[50];
	while(x!=0){
		while(y<50){
		printf("Introduzca un nombre");
		gets(personas[y].nombre);
		if(strcmp(personas[y].nombre,"\0")==0){
			y=51;
			x=0;
		}
		printf("Introduzca la direccion");
		gets(personas[y].direccion);
		printf("Introduzca el telefono");
		gets(extra);
		sscanf(extra,"%d",&personas[y].telefono);
		printf("Introduzca la edad");
			gets(extra);
		sscanf(extra,"%d",&personas[y].edad);
			printf("%s\n",personas[y].nombre);
			printf("%s\n",personas[y].direccion);
			printf("%d\n",personas[y].telefono);
			printf("%d\n",personas[y].edad);
			y++;
	}
}
while(opcion!=4){
	printf("/////////////////MENU////////////////////");
	printf("1ºMostrar la lista de todos los nombres\n");
	printf("2ºMostrar las personas de una cierta edad\n");
	printf("3ºMostrar las personas cuya inicial sea la que el usuario indique\n");
	printf("4ºSalir del programa\n");
	gets(extra);
	sscanf(extra,"%d",&opcion);
	y=0;
	if(opcion==1){
		printf("llega\n");
		while(y<=50){
			printf("%s\n",personas[y].nombre);
			printf("%s\n",personas[y].direccion);
			printf("%d\n",personas[y].telefono);
			printf("%d\n",personas[y].edad);
			y++;
		}
		y==0;
	}
	if(opcion==2){
		printf("Introduzca las personas de quiera saber de cierta edad");
		gets(extra);
		sscanf(extra,"%d",&otros);
		while(y<50){
			if(personas[y].edad==otros){
					printf("%s\n",personas[y].nombre);
			printf("%s\n",personas[y].direccion);
			printf("%d\n",personas[y].telefono);
			printf("%d\n",personas[y].edad);
			y++;
			}
			else
			y++;
		}
		y=0;
	}
	if(opcion==3){
				printf("Escriba la inicial del usuario");
		inicial=getchar();
		getchar();
		while(y<50){
			if(personas[y].nombre[0]==inicial){
					printf("%s\n",personas[y].nombre);
			printf("%s\n",personas[y].direccion);
			printf("%d\n",personas[y].telefono);
			printf("%d\n",personas[y].edad);
				y++;
			}
			else{
				y++;
			}
		}
		
}
}
}

