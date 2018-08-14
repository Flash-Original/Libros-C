/* ejercicio 3.1.3.2 Crear un programa que pida al usuario dos numeros reales.
Si el segundo no es cero, mostrará el resultado de dividir entre el primero y el
 segundo.Por el contrario, si el segundo número es cero, escribira "Error:no se 
 puede dividir entre cero"*/
 
 #include <stdio.h>
 int main(){
 	float x,y;
 	printf("Escriba el numero a ser dividido");
 	scanf("%f",&x);
 	printf("Entre");
 	scanf("%f",&y);
 	if(y==0){
 		printf("Error: no se puede dividir entre cero");
 		return 0;
 	}
 	printf("El resultado de la division es %f",x/y);
 	return 0;
 }
