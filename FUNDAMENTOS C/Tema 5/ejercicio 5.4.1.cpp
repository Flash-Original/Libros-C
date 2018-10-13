/*EJERCICIO 5.4.1 Un programa que pida 10 nombres y los memorice.
Después debera pedir que se teclee un nombre y dirá si se encuentra
o no entre los 10 que se han tecleado antes.
Volvera a pedir otro nombre y a decir si se encuentra entre ellos,
y asi sucesivamente hasta que se teclee "fin"*/

#include<stdio.h>
#include<string.h>

int main(){
	char nombres[10][40]={};
	int x;
	char extra[40];
	while(x<10){
		printf("Introduzca el nombre");
		scanf("%s",nombres[x]);
		x++;
		
	}
	x=0;
	while(strcmp(extra,"fin")!=0){
		printf("Introduzca fin para finalizar el programa\n");
		printf("Que nombre quieres buscar: ");
		scanf("%s",&extra);
		x=0;
		while(x<10){
			if(strcmp(nombres[x],extra)==0){
				printf("se encuentra entre los 10 que hay\n");
				x=10;
			}
			x++;
		}
	}
	return 0;
}





