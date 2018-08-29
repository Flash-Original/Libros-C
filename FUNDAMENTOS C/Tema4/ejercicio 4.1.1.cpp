/*Ejericio 4.1.1 Un programa que pida al usuario un numero entero y muestre
sus equivalentes en formato hexadecimal y en octal.
Debe seguir pidiendo (y conviertiendo) numeros hasta que se introduzca 0.*/

#include <stdio.h>

int main(){
	int a=1;
	while(a!=0){
	printf("Introduzca numero a saber en hexadecimal y octal\n");
	scanf("%d",&a);
	printf ("Es en octal %o y en hexadecimal %x\n",a,a);
}
	return 0;
}

