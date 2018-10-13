/*ejercicio 5.6.8 Ampliar la base de datos de ficheros (ejemplo 53) para que se permita ordenar los
datos por nombre. Para ello, deberás buscar información sobre algún método de ordenacion sencillo, como el
"metodo burbuja"(en el siguiente apartado tienes algunos), y aplicalo a este caso concreto.*/


#include <stdio.h>
#include <string.h>

struct{
	char nombrefich[41];
	unsigned long tamanyo;
}fichas[1000];

struct{
	char nombrefich[41];
	unsigned long tamanyo;
}fich[1000];


int numeroFichas=0;
int i;
int opcion;

char textoTemporal[41];
int comparacion; ;// nos servira para hacer la ordenacion
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
	printf("8.-Ordenar por nombre los datos");
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
		case 8:
			printf("Se van a ordeandor de nombre de menor a mayor (A-Z)");
			for(i=0;i<1000;i++){
					printf("comenzando a ordenar");
				for(int x=0;x<1000;x++){
					comparacion=strcmp(fichas[x].nombrefich,fichas[x+1].nombrefich);
					if(strcmp(fichas[x+1].nombrefich,"")!=0){
						// recordar que cualquier comparacion una cadena este donde este o con cualquier cosa es strcmp
					if(comparacion>0){
						
						strcpy(fich[1].nombrefich,fichas[x].nombrefich);
						fich[1].tamanyo=fichas[x].tamanyo;
						///// se pasa de un array a otro mediante un strcpy y el int como lo hacemos normalmente
						
							fichas[x] = fichas[x+1];
						/// pasame el siguiente que se supone que es menos al primero
					
							strcpy(fichas[x+1].nombrefich,fich[1].nombrefich);
						fichas[x+1].tamanyo=fich[1].tamanyo;
						//finalmente lo sustituimos por el primero
			}
					
					}
				}
}
			break;
		case 9: /*salir avisemos de que salimos*/
		printf("Fin del programa");
		break;
}
}while(opcion !=9); /*si la opcion es 5, terminamos*/
return 0;

}
