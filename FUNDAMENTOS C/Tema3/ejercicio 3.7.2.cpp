/*ejercicio 3.7.2 Crear un programa que descomponga un numero(que teclee el usuario)
como producto de sus factores primos.Por ejemplo. 60=2.2.2.3.5*/

#include <stdio.h>

int main(){
	int a;
	int sec;
	scanf("%d",&a);
	for(int b=2;a>0;b++){
	sec=a%b;
	if(sec==0){
		a=a/b;
		printf("%d\n",b);
		b=1;	
	}
	if(a==1){
		break;
	}
}
	return 0;
	}
