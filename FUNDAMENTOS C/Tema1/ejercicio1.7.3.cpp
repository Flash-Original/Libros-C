#include <stdio.h>

/*1.7.3 El usuario tecleará dos números(a y b) y el programa mostrar el resultado
de la operación (a+b)*(a-b)y el resultado de la operacion a^2-b^2*/
int a,b,res1,res2;
int main(){
	printf("Introduzca el primer numero");
	scanf("%d",&a);
	printf("Introduzca el segundo numero");
	scanf("%d",&b);
	res1=(a+b)*(a-b);
	printf("%d\n",res1);
	res2=(a*a)-(b*b);
	printf("%d",res2);
	
	return 0;
}


//////////////////////////////////////////////////////////////////////////////
//alternativo y usado pero no da la leccion

/*
#include <stdio.h>
#include <math.h>
1.7.3 El usuario tecleará dos números(a y b) y el programa mostrar el resultado
de la operación (a+b)*(a-b)y el resultado de la operacion a^2-b^2
int a,b,res1,res2;
int main(){
	printf("Introduzca el primer numero");
	scanf("%d",&a);
	printf("Introduzca el segundo numero");
	scanf("%d",&b);
	res1=(a+b)*(a-b);
	printf("%d\n",res1);
	res2=pow(a,2)-pow(b,2);
	printf("%d",res2);
	
	return 0;
}

*/
