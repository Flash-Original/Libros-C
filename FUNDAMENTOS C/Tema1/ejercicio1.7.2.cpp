#include <stdio.h>

//1.7.2 El usuario tecleará dos números(x e y) y el programa deberá calcular cual es el resultado de su division y el resto de esa división


int x,y,division,resto;
int main(){
	printf("El primer numero\n");
	scanf("%d",&x);
	printf("El segundo numero\n");
	scanf("%d",&y);
	printf("DIVISION:");
	division=x/y;
	printf("%d\n",division);
	resto=x%y;
	printf("RESTO:%d",resto);
	return 0;
}
