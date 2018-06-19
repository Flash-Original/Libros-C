#include <stdio.h>

/*¿Cuantos diskettes de 1,44Mb harían falta para hacer una copia de seguridad
de un ordenador que tiene un disco duro de 6,4 Gb?,¿Y si usamos compact disc de
700Mb,cuántos usariamos?

1º Hacemos que todos esten en la misma unidad de medida y luego simplemente calculamos*/

int main(){
	float disk=1.44,dd=6400,cd=700,res1,res2;
	res1=dd/disk;
	res2=dd/cd;
	printf("Si lo metieramos en diskettes saldrian %.f\n",res1);
	printf("Si lo metieramos en cds saldrian %.f\n",res2);
	
	return 0;
	
	
}
