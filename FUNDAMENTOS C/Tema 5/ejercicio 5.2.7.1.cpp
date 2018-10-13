/*ejercicio 5.2.7.1 Un programa que pida tu nombre,tu dia de naciemiento
y tu mes de naciemiento y lo junte todo en una cadena, separando el nombre
de la fecha por una coma y el dia del mes por una barra inclinada,asi
"Juan,nacido el 31/12"*/

#include <stdio.h>

int main(){
	int dia,mes;
	char nombre[40];
	char texto[40];
	printf("Introduce tu nombre");
	gets(nombre);
	printf("Introduce dia de nacimiento");
	scanf("%d",&dia);
	printf("Inserte mes de nacimiento");
	scanf("%d",&mes);
	sprintf(texto,"%s,nacido el %d/%d",nombre,dia,mes);
	printf("%s",texto);
	return 0;
}
