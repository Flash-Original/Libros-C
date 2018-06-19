#include <stdio.h>
/*2.1.3.5 ¿A cuantos CD de 700Mb equivale la capacidad de almacenamiento de un DVD de 4.7Gb?
¿Y la de uno de 8.5 Gb?*/
int main(){
	float CD=700,DVD=4700,DVDDL=8500,res1,res2;
	res1=DVD/CD;
	res2=DVDDL/CD+0.5/* para que redondee siempre*/;
	printf("La cantidad de cds para un DVD es de %0.f\n",res1);
	printf("La cantidad de cds para un DVD de doble capa es de %.f",res2);
	return 0;
	
}
