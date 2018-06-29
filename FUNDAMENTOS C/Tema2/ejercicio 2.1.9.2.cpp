/*ejercicio 2.1.9.2Convertir los numeros decimales 13,34,-13,-34 a sistema binario, 
usando complemento a dos para expresar los numeros negativos. Calcular (en binario) 
el resultado de las operaciones 13+34 (-13)+(-34),13+(-34) y comprobar que los
resultados que se obtienen son correctos*/

 
 13: 00001101
 34: 00100010
 -13:11110011 a 2
 -34:11011110 a 2
 
 13+34 == +47
 (-13)+(-34)== -47 
 13+(-34)== -21
 
 00001101-> 11110011
 00100010-> 11011110
 			_________
 		    11010001
 00001101
 11011110
 ___________
 11101011    
 			
 Para comprobar que es correcto se quita el complemento 			
