/*ejercicio 3.1.5.3 Crear un programa que pida al usuario tres numeros reales y
 muestre cuál es el mayor de los tres*/
 #include <stdio.h>
 
 int main(){
 	int x,y,z;
 	
 	printf("Introduzca el primer numero");
 	scanf("%d",&x);
 		printf("Introduzca el segundo numero");
 	scanf("%d",&y);
 		printf("Introduzca el tercer numero");
 	scanf("%d",&z);
 	if(x>y&&x>z){
 		printf("El primer numero es el mayor de todos");
 	}
 	if(y>z&&y>x){
 			printf("El segundo numero es el mayor de todos");
 	}
 	else
 		printf("El tercer numero es el mayor de todos");
 }
