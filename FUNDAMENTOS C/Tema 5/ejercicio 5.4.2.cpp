/*Ejercicio 5.4.2 Un programa que prepare espacio para un máximo de 100 nombres
(de un maximo de 80 letras cada uno).El usuario deberá ir introduciendo un
nombre cada vez, hasta que se pulse Intro sin teclear nada, momento en el que
se dejaran de pedirse más nombres y se mostrara en pantalla la lista de los
nombres que se han introducido hasta entonces*/

#include<stdio.h>
#include<string.h>

int main(){
char nombres[100][80]={};
int valor=0;
int x=0;
while((x<100)&&(valor!=1))
{
	printf("Introduzca nombre num");
	printf("%d\n",x);
gets(nombres[x]);
printf("%s\n",nombres);
if(strcmp(nombres[x],"")==0){
	valor++;
}
x++;
}
x=0;
getchar();
printf("pulsa intro para ver la lista de los nombres introducidos");
getchar();
	while(x<100){
		printf("%s\n",&nombres[x]);
		x++;
	}
	return 0;
}
