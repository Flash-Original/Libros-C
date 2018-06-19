//Ejercicio 2.1.8.1 Crea un programa en C que exprese en el sistema decimal los 
//numeros octales 16,76,241,102. DADO QUE NO SE HA LLEGADO A HACER TODAVIA OPERACIONES
//GRANDES LO HACEMOS DE PREVIEWMENTE EN FOLIO Y DSPUES LO PONEMOS AQUI

#include <stdio.h>

int main(){
int num1=0162,num2=076,num3=0241,num4=0102;
int res1,res2,res3,res4;

res1=1*64+6*8+2;
res2=7*8+6; 
res3=2*64+4*8+1;
res4=1*64+0*8+2;
/*De octal a decimal 16
162 1*64+6*8+2=114 
76 7*8+6=62
241 2*64+4*8+1=128+32+1=161
102 1*64+0+2=66
*/
printf("El primer numero %d",res1);
printf("El segundo numero %d",res2);
printf("El tercer numero %d",res3);
printf("El cuatro numero %d\n\n",res4);

printf("El primer numero %d",num1);
printf("El segundo numero %d",num2);
printf("El tercer numero %d",num3);
printf("El cuatro numero %d",num4);
return 0;
}

