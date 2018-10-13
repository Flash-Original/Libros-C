/*ejercicoi 5.7.1 Un programa que cree un array de 7 numeros enteros y lo
ordene con cada uno de estos tres metodos, mostrando el resultado de los pasos
intermedios*/

#include<stdio.h>
#include<string.h>
#define TAM 7 // esto no cambiara en el programa
int main(){
	int num[TAM]={1,6,4,2,3,5,7};
	int eleccion;
	int extra;
	int x;
	printf("1ºMetodo Burbuja\n");
	// No existe ordenacion por petalo o cactus
	printf("2ºMetodo  Seleccion directa\n");
	printf("3ºMetodo Insercion directa\n");
	scanf("%d",&eleccion);
	
	switch(eleccion){
		
		case 1:
			printf("Has seleccionado metodo por burbuja\n");
			for(int i=0;i<TAM;i++){
				for(x=0;x<TAM;x++){
				if(num[x]>num[x+1]){
				extra=num[x];
				num[x]=num[x+1];
				num[x+1]=extra;	
				}
			}
			/*Se ordena autoamticamente tambien con el num 0
			esto es porque esta en el siguiente que es valor nulo 0
			por lo que partir de hay sera diferente*/
		}
		for(x=1;x<=TAM;x++){
			printf("%d,",num[x]);
		
		}
			break;
		case 2:
			printf("Has seleccoinado metodo por Seleccion directa");
			break;
		case 3:
			printf("Has seleccionado metodo por Insercion directa");
			break;	
	}
}

