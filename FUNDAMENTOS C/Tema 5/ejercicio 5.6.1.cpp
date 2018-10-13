/*ejercicio 5.6.1 Un programa que pida el nombre, el apellido y la edad de una persona,
los almacene en un "struct" y luego muestre los tres datos en una misma linea,separados
por comas.*/

#include <stdio.h>

struct Persona{
	char nombre[40];
	char apellido[40];
	int edad;
};

int main(){
	struct Persona Personas;
	char Todo[200];
	printf("Pon tu nombre de usuario");
	gets(Personas.nombre);
	printf("Pon tu apellido de usuario");
	gets(Personas.apellido);
	printf("Pon tu edad");
	
	gets(Todo);
	sscanf(Todo,"%d",&Personas.edad);
	sprintf(Todo,"%s,%s,%d",Personas.nombre,Personas.apellido,Personas.edad);
	printf("%s",Todo);
	return 0;
}
