/*ejercicio 5.1.3.2 Crear un programa que pida al usuario 10 numero y 
luego los muestre en orden inverso(del ultimo al primero)*/

/*Se crea un bucle para poner el numero, luego se creara otro bucle
que se intercambiara entre el principio y el final sumando hasta la mitad
ya que si sigue hasta al final volvera a su posicion de inicio
Recordamos que se almacena tambien en 0*/
#include <stdio.h>

int main(){
	int num[11];
	int x;
	int y=9;
	int z;
		printf("Ingrese 10 numeros ");
	while(x<10){
		scanf("%d",&num[x]);
		x++;
	}
	x=0;
	while(x<5){
			printf("1ºEste numero era %d ahora es %d\n;",num[x],num[y]);
		z=num[x];
		num[x]=num[y];
		num[y]=z;
				printf("1ºEste numero era %d ahora es %d\n;",num[x],num[y]);
	y--;
	x++;
	}
	x=0;
	while(x<10){
		printf("%d",num[x]);
		x++;
	}
	
}

