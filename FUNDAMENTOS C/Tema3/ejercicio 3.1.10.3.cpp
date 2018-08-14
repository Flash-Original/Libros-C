/*ejercicio 3.1.10.3 Repetir los dos programas anteriores
,empleando "if" en lugar de "switch"*/
#include <stdio.h>
int main(){
	char letra;
	scanf("%c",&letra);
	if(letra=='b'||letra=='c'||letra=='d'||letra=='f'||letra=='g'||letra=='h'||
	letra=='j'||letra=='k'||letra=='l'||letra=='m'||letra=='n'||
	letra=='p'||letra=='q'||letra=='r'||letra=='s'||letra=='t'||letra=='v'||letra=='w'
	||letra=='x'||letra=='y'||letra=='z'){
		printf("es una consonante");
	}
	if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'){
		printf("Es una vocal");
	}
	if(letra<='0'||letra=='1'||letra=='2'||letra=='3'||letra=='4'||letra=='5'||letra=='6'||letra=='7'||letra=='8'||letra=='9'){
		printf("Es un numero");
	}
	if(letra=='.'){
		printf("Es un signo de puntuacion");
	}
	if(letra=='='){
		printf("Es un igual");
	}
	if(letra=='['){
		printf("Es otro caracter");
	}
}
