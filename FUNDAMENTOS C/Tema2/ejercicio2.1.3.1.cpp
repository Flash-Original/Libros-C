#include <stdio.h>

//2.1.3.1 Crea un programa que te diga cuantos buytes son 3 megabytes

int main(){
	int x,res;
	printf("Introduce los megabytes que quieras pasar a bytes");
	scanf("%d",&x);
	res=x*1024*1024;
	printf("El resultado es: %d",res);
	return 0;
}
