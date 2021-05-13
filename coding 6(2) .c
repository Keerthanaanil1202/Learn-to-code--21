Write a C program to convert fahrenheit to celsius. 
#include <stdio.h>

  int main()
{ 
   float C, F;

   scanf("%f", &F);

   C=((F-32)*5)/9;

   printf("%0.2f",C); 
 
  return 0; 
}
    