/*ejercicoi 5.5.2.2 Un programa que permita guardar datos de "imagenes"
ficheros de ordenador que contengan fotografías o cualquier tipo de 
información gráfica).De cada imagen se debe guardar: nombre(texto),
ancho de pixeles(por ejemplo 2000),alto en pixeles(por ejemeplo 3000),
tamaño en Kb (por ejemplo 145,4) el programa debe ser capaz de almacenar
hasta 700 imagenes( deberá avisa cuando su capacidad esté llena).Debe
permitir las opciones: añadir una ficha nueva,ver todas las fichas
(numero y nombre de cada imagen), buscar la ficha que tenga un cierto nombre.
(Nota, para algun ejercicio de mayor complejidad, como este,puedes encontrar 
un ejemplo de solución)*/
#include <stdio.h>
#include <string.h>
struct Imagen{
	char nombre[40]={};
	int anchoPixeles=0;
	int altoPixeles=0;
	float TamanoKb=0;
};

int aviso; //////VARIABLE GLOBAL AVISO,DEBERIA ESTAR DENTRO PARA NO FUNCIONA CORRECTAMENTE////////
int main(){
	
	struct Imagen Imagenes[700];
///////////////////////////////////
int opcion;
	int x; ////CONTADOR
	char nombreImagen[40]; ////PARA BUSCADOR
	
/////////////////////////////////	
	while(opcion!=0){
	printf("1ºAñadir ficha nueva\n");
	printf("2ºVer todas las fichas\n");
	printf("3º Buscar nombre en la ficha\n\n");
	printf("Inserte la opcion");
	scanf("%d",&opcion);
	//////////// 1º AÑADIR FICHAS/////////////////////
	if(opcion==1){
	if(x!=700){
		getchar(); ///BORRA EL INTRO
printf("Inserte el nombre de imagenes\n");
gets(Imagenes[x].nombre);
printf("Cual es el ancho de pixeles?");
scanf("%d",&Imagenes[x].anchoPixeles);
printf("Inserte el alto de pixeles?");
scanf("%d",&Imagenes[x].altoPixeles);
printf("Inserte el tamano");
scanf("%f",&Imagenes[x].TamanoKb);
printf("%s,%d,%d,%.1f",Imagenes[x].nombre,Imagenes[x].anchoPixeles,Imagenes[x].altoPixeles,Imagenes[x].TamanoKb);
x++;
}
else {
	printf("Esta lleno");
}
}
/////////////////////OPCION 2 VER LAS FICHAS RELLENADAS /////////////////////////////////
if(opcion==2){
	x=0;
	while(x<700){
		printf("Nombre: %s\n",Imagenes[x].nombre);
printf("El ancho de pixeles es: %d\n",Imagenes[x].anchoPixeles);
printf("El alto de pixeles es: %d\n",Imagenes[x].altoPixeles);
printf("Su tamano es: %f\n",Imagenes[x].TamanoKb);
x++;
}
x=0;
}
////////////OPCION 3 PARA ENCONTRAR UNA DETERMINADA FICHA////////////////////////
if(opcion==3){
	printf("Introduce el Nombre que deseas encontrar");
	getchar(); ///BORRA EL INTRO
	gets(nombreImagen);
	x=0;
	while(x<700){
	if(strcmp(Imagenes[x].nombre,nombreImagen)==0){
		printf("Nombre: %s\n",Imagenes[x].nombre);
printf("El ancho de pixeles es: %d\n",Imagenes[x].anchoPixeles);
printf("El alto de pixeles es: %d\n",Imagenes[x].altoPixeles);
printf("Su tamano es: %f\n",Imagenes[x].TamanoKb);
x++;
//aviso++;
}
else{
	x++;
}
}
if(aviso==0){
	printf("No se ha encontrado|n");
}

}
}
return 0;
}
