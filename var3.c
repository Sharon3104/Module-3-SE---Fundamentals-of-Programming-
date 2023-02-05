#include <stdio.h>
int main () 
{

   
   int a, b;
   int c;
   float f,x;
 
 	printf("Enter the value of a");
	scanf("%i",&a);
	
	printf("Enter the value of b");
	scanf("%i",&b);		

	c = a + b;
    printf("value of c : %d \n", c);

	printf("Enter the value of float");
	scanf("%f",&f);
  	x= f/3.0;
    printf("value of f : %f \n", x);
 
   return 0;
}
