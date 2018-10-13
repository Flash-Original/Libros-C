/* ejercicio 5.6.2 Un programa que pida datos de 8 personas: nombre,dia de naciemiento
mes de nacimiento, y año de nacimiento(que se deben almacenar en una tabla de structs)
Después deberá repetir lo siguiente: preguntar un número de mes y mostrar en pantalla
los datos de las personas que cumplan los años durante ese mes.Terminará de repetirse
cuando se teclee 0 como número de mes*/

#include <stdio.h>
#include <string.h>

struct Persona{
	char nombre[40];
	int nacimiento;
	int mesNacimiento;
	int ANOnacimiento;
};

int main(){
	struct Persona Personas[8];
	
	
char extra[40]; ///Donde va la informacion
int contador=1;


	for(int i;i<8;i++){
		printf("Introduzca el nombre");
		gets(Personas[i].nombre);
		printf("Introduzca dia de nacimiento");
		gets(extra);
		sscanf(extra,"%d",&Personas[i].nacimiento);
		printf("Introduzca mes de nacimiento");
			gets(extra);
		sscanf(extra,"%d",&Personas[i].mesNacimiento);
		printf("Introduzca ano de nacimiento");
			gets(extra);
		sscanf(extra,"%d",&Personas[i].ANOnacimiento);
	}
	while(contador!=0){
	printf("Ingrese el mes y te dire las personas que celebren cumpleaños ese mes");
		scanf("%d",&contador);
		if(contador!=0){ /////////////////////////// Para que no cuente al poner 0
		for(int i=0;i<8;i++){
			if(Personas[i].mesNacimiento==contador){
				printf("Nombre:%s",Personas[i].nombre);
				printf("dia de nacimiento:%d",Personas[i].nacimiento);
						printf("Mes de nacimiento:%d",Personas[i].mesNacimiento);
								printf("Ano de nacimiento:%d",Personas[i].ANOnacimiento);
			}
		}
}
}
}

