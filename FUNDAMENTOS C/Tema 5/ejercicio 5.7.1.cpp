/*ejercicio 5.7.1 Un programa que cree un array de 7 numeros enteros y 
lo ordene con cada uno de estos tres métodos, mostrando el resultado de
los pasos intermedio*/

#include <stdio.h>
#include <conio.h>

int numero[7]{4,6,7,1,2,3,5};
int j; //limite
int i; //primero contador
int aux; //numero a parte
int l; //segundo contador
int min;
char opcion[2];
int eleccion;
int main(){
	printf("Eliga metodo de ordenacion\n");
	printf("1-Metodo Burbuja\n");
	printf("2-Seleccion directa\n");
	printf("3-Insercion directa\n");
	gets(opcion);
	sscanf(opcion,"%d",&eleccion);
	//////////////////////////
	
	switch(eleccion)
	{
	case 1:
		//burbuja

		for(i=0;i<7;i++){
			for(j=0;j<7;j++){
			if(numero[j]>numero[j+1]){
			aux=numero[j];
			numero[j]=numero[j+1];
			numero[j+1]= aux;
		}
		}
	}
		for(i=0;i<7;i++){
			printf("%i,",numero[i]);	
		}
		/*Coge el numero lo compara con el 
		siguiente si es mayor se cambia de lado sino se deja*/
	break;
	case 2:
		//seleccion directa
		for(i=0;i<7;i++){
			min=i;
		for(j=i+1;j<=7;j++){
			if(numero[j]<numero[min]){
				min=j;
		}
		}
			aux=numero[i];
			numero[i]=numero[min];
			numero[min]= aux;
	}
		for(i=0;i<7;i++){
			printf("%i,",numero[i]);
}	
/*Se coge mediante el min el i(1º numero) luego el bucle j la compara  
con el anterior si es menor al minimo (el que tienes) 
Lo que tienes se convertira en ese numero
Cuando termina se hace el cambio el auxiliar*/
	
break;
	case 3:
		//inserccion directa
		for(i=0;i<7;i++){
			j=i;
			aux=numero[i];
			while((j>0)&&(aux<numero[j-1])){
					printf("Numero antes%d",numero[j]);
				numero[j]=numero[j-1];
				printf("Numero ahora%d",numero[j]);
					printf("Numero auxiliar%d\n",aux);
				j--;
			}
			numero[j]= aux;
		}
		for(i=0;i<7;i++){
			printf("%i,",numero[i]);
		}
		break;
	default: 
	return 0;
	
}
}
