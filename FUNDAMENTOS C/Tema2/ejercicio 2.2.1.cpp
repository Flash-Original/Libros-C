/*ejercicio 2.2.1 El usuario de nuestro programa podr� teclear dos numeros de 
hasta 8 cifras significativas. El programa deber� mostrar el resultado de dividir
el primer numero entre el segundo, utilizando tres cifras decimales
*/
#include <stdio.h>
int main(){
	double x,y;
	printf("Pon el numero para el 1�\n");
	scanf("%lf",&x);
	printf("Pon el numero para el 2�");
		scanf("%lf",&y);

	printf("El numero es:%.3f",x/y);
	return 0;
}
