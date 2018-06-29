/*Ejercicio 2.1.9.1 convetir los numeros decimales 13,34,-13,-34 a sistema binario, 
usando complemento a uno para expresar los números negativos. Calcular (en binario)
el resultado de las operaciones 13+34,(-13)+(34),13+(-34) y comprobar que los resultados
 que se obtienen son los correctos*/
 

 
 13: 00001101
 34: 00100010
 -13:11110010
 -34:11011101
 
 13+34
00001101 00100010 = 0010 1111 (47) 
 -13+34
11110010 00100010 =+21
 13+-34
 00001101+ 11011101 =-21
 
 1111 0010 (00001101)
 0010 0010
 ________
/1 0001 0100
		+1 del carril izquierd
_____________
0001	0101 == +21		
 ////////////////////////////////
0000 1101
1101 1101
__________
1110 1010
0001 0101== -21
