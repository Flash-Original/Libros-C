/*Ejercicio 3.1.5.1 Crear un programa que pida una letra al usuario y diga si se
trata de una vocal*/
#include <stdio.h>
int main(){
	char x;
	
	printf("Introduce una vocal");
	scanf("%c",&x);
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
	{
	printf("Introducido %c",x);
	return 0;
}
printf("nada");
	return 0;
}
