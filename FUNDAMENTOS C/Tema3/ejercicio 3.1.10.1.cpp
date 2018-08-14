/*ejercicio 3.1.10.1 Crear un programa que lea una letra tecleada por el usuario
y diga si se trata de una vocal, una cifra numérica o una consonante*/
//Nota no useis switch a la ligera ya que hay opciones mejores para segun que cosas

#include <stdio.h>

int main(){
    char letra;
    
scanf("%c",&letra);
switch(letra){
              
case 'a':
      printf("Es una vocal");
     break;
case 'e':
      printf("Es una vocal");
     break;
case 'i':
       printf("Es una vocal");
     break;
case 'o':
     printf("Es una vocal");
     break;
case 'u':   
       printf("Es una vocal");
     break; 
case '0':
       printf("Es una cifra numerica");
       break;   
case '1':
       printf("Es una cifra numericaEs una cifra numerica");
       break;       
case '2':
       printf("Es una cifra numerica");
       break;       
case '3':
       printf("Es una cifra numerica");
       break;       
case '4':
       printf("Es una cifra numerica");
       break;       
case '5':
       printf("Es una cifra numerica");
       break;       
         case '6':
       printf("Es una cifra numerica");
       break;       
         case '7':
       printf("Es una cifra numerica");
       break;       
         case '8':
       printf("Es una cifra numerica");
       break;       
         case '9':
       printf("Es una cifra numerica");
       break; 
case 'b':
      printf("Es una consonante");
     break;
case 'c':
       printf("Es una consonante");
     break;
case 'd':
     printf("Es una consonante");
     break;
case 'f':   
       printf("Es una consonante");
     break; 
case 'g':      
     printf("Es una consonante");
     break;
case 'h':      
     printf("Es una consonante");
     break;    
case 'j':
      printf("Es una consonante");
     break;
case 'k':
       printf("Es una consonante");
     break;
case 'l':
     printf("Es una consonante");
     break;
case 'm':   
       printf("Es una consonante");
     break; 
case 'n':      
     printf("Es una consonante");
     break;
case 'ñ':      
     printf("Es una consonante");
     break;    
case 'p':
      printf("Es una consonante");
     break;
case 'q':
      printf("Es una consonante");
     break;
case 'r':
       printf("Es una consonante");
     break;
case 's':
     printf("Es una consonante");
     break;
case 't':   
       printf("Es una consonante");
     break; 
case 'v':      
     printf("Es una consonante");
     break;
case 'w':      
     printf("Es una consonante");
     break; 
case 'x':
      printf("Es una consonante");
     break;
case 'y':
       printf("Es una consonante");
     break;
case 'z':
     printf("Es una consonante");
   break;
               
default:
        printf("Nada"); 
        }       
return 0;
}
