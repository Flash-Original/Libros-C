#include <stdio.h>

/*2.1.3.2 �Cu�ntas letras se podr�an almacenar en una agenda electr�nica que tenga 32kb
de capacidad?(primero calc�lalo en papel y luego crea un programa en C que te d� la respuesta)

1� Calcular cuanto ocupa cada letra ( en este caso cada byte es una letra 8 bits)
2� Poner el calculo en el PC*/

int main(){
	int x,res;
	printf("introduzca en cuantos kb quieres saber la cantidad de letras");
	scanf("%d",&x);
	//cada byte cabe una letra del abecedario+cursiva+negrita y tipografia
	res=x*1024;
	printf("Cabe %d palabras",res);
	
	return 0;
}
