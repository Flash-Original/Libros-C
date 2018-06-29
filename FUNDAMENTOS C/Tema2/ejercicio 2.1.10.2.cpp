/*ejercicio 2.1.10.2¿Cual seria el resultado de las siguientes operaciones?
a=5; b=++a; c=a++; b=b*5; a=a*2;

a=5
b=6
c=6
b=30
a=14
*/
#include <stdio.h>
int main(){
	int a=5,b,c;
	
printf("%d\n",a);
b=++a;
c=a++;
printf("%d\n",b);
printf("%d\n",c);
b=b*5;
a=a*2;
printf("%d\n",b);
printf("%d\n",a);
return 0;
}
	
