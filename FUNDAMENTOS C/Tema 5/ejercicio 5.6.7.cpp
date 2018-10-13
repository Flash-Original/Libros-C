/*EJERCICIO 5.6.7 Mejorar la base de datos de fichero (ejemplo 53) 
para que se pueda modificar un cierto dato a partir de su numero
(por ejemplom el dato numero 3).En esa modificacion, se debera permitir 
al usuario pulsar Intro sin teclear nada, para indicar que no desea 
modificar un cierto dato, en vez de reemplazarlo por una cadena vacia*/

#include <stdio.h>
#include <string.h>

struct{
	char nombrefich[41];
	unsigned long tamanyo;
}fichas[1000];
int numeroFichas=0;
int i;
int opcion;

char textoTemporal[40];
unsigned long numeroTemporal;
char inicial;

int main(){

do{
	printf("Escoja una opción\n");
	printf("1.-añadir datos de un nuevo fichero\n");
	printf("2.-Mostrar los nombres de todos los ficheros\n");
	printf("3.-Mostrar ficheros que sean de mas de un cierto tamaño\n");
	printf("4.-ver datos de un fichero\n");
	printf("5.-Buscar por inciales del nombre\n");
	printf("6.-Borrar una pagina\n");
	printf("7-Modificar datos a partir de numero\n");
	printf("9.-Salir\n");
	/*Para evitar problemas con datos mal introducidos, leemos con "gets" y luego la filtramos con "sscanf"*/
	
	gets(textoTemporal);
	sscanf(textoTemporal,"%d",&opcion);
	/* Hacemos una cosa u otra segun la opcion escogida*/
	switch(opcion){
		
		
		case 1:
			if(numeroFichas<1000) /*si queda hueco*/
			{
				printf("Introduce el nombre del fichero:");
				gets(fichas[numeroFichas].nombrefich);
				while(strcmp(fichas[numeroFichas].nombrefich,"\0")==0){
					printf("No se permite nombre vacio");
				gets(fichas[numeroFichas].nombrefich);
			}
				printf("Introduce el tamaño en KB:");
				gets(textoTemporal);
				sscanf(textoTemporal,"%1d",&fichas[numeroFichas].tamanyo);
				/*Y ya tenemos una fichas mas */
				numeroFichas++;
			}
			else /*si no hay hueco para mas fichas,avisamos*/
			printf("Maximo de fichas alcanzado (1000)!\n");
			break;
			
///////////////////////////////////////////////////////UwU///////////////////////////////////////			
	case 2: /*Mostrar todos */
	for (i=0;i<numeroFichas; i++){
		printf("Nombre: %s; Tamaño: %ld Kb\n",fichas[i].nombrefich,fichas[i].tamanyo);
	}
	break;
	
///////////////////////////////////////////////////////UwU/////////////////////////////////////////	
	case 3: /*Mostrar según el tamaño*/
	printf("¿A partir de que tamaño quieres que te muestre?");
	gets(textoTemporal);
	sscanf(textoTemporal,"%ld",&numeroTemporal);
	for (i=0; i<numeroFichas;i++)
	if (fichas[i].tamanyo >= numeroTemporal)
	printf("Nombre: %s; Tamaño : %1d Kb\n",fichas[i].nombrefich, fichas[i].tamanyo);
	break;
///////////////////////////////////////////////////////UwU/////////////////////////////////////
	case 4: /* Ver todos los datos (pocos) de un fichero */
	printf("¿De que fichero quieres ver todos los datos?");
	gets(textoTemporal);
	for(i=0; i<numeroFichas; i++)
	if(strcmp(fichas[i].nombrefich,textoTemporal)==0)
		printf("Nombre: %s; Tamaño: %1d Kb\n",fichas[i].nombrefich,fichas[i].tamanyo);
		break;

		
	default: /* Otra opcoin: no valida*/
	printf("Opcion desconocida!\n");
	break;
	/////////////////////////////////////////////////UwU/////////////////////////////
	case 5:
		printf("Introduzca el nomre a buscar");
		gets(textoTemporal);
		for(i=0; i<numeroFichas; i++)
		if(strstr(fichas[i].nombrefich,textoTemporal)){
			printf("Nombre: %s; Tamaño: %1d Kb\n",fichas[i].nombrefich,fichas[i].tamanyo);
		}
break;
	case 6:
		printf("Introduzca el nombre que quiera borrar");
		gets(textoTemporal);
		for(i=0; i<numeroFichas; i++){
		if(strcmp(fichas[i].nombrefich,textoTemporal)==0){
			 printf("Nombre: %s; Tamaño: %1d Kb\n",fichas[i].nombrefich,fichas[i].tamanyo);
			 fichas[i].tamanyo=0;
			 fichas[i].nombrefich[0]='\0';
			 /// Sustituye lo que hay escrito por 0 y nulo/////////
		}
	}
	break;
	case 7:
		/* recordemos que 0 tambien cuenta como numero*/
		printf("Introduzca el numero");
		gets(textoTemporal);
		sscanf(textoTemporal,"%d",&i);
		printf("Se va a modificar\n");
		printf("Nombre: %s; Tamaño: %1d Kb\n",fichas[i].nombrefich,fichas[i].tamanyo);
		printf("Introduzca nombre a cambiar o no ponga nada para dejarlo como esta");
		gets (textoTemporal);
		if(textoTemporal !=" "){
		sscanf(textoTemporal, "%s",&fichas[i].nombrefich);
	}
		printf("Introduzca el tamañoa a sustituir");
		gets(textoTemporal);
		if(textoTemporal!=0){
		sscanf(textoTemporal,"%d",&fichas[i].tamanyo);
	}

	break;
		
		case 9: /*salir avisemos de que salimos*/
		printf("Fin del programa");
		break;
}
}while(opcion !=9); /*si la opcion es 5, terminamos*/
return 0;

}
