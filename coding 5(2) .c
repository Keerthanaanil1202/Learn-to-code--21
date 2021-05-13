Write a C program to determine the areas of square, circle and triangle 
taking length, radius,base and height repectively from the user input. 
#include <stdio.h>
#define PI 3.14

  int main()
{ 
   float a,r,b,h,area2,area3;
   int area1;

   scanf("%f", &a);
   scanf("%f", &r);
   scanf("%f%f", &b, &h) ;

   area1=a*a;
   area2=PI*r*r;
   area3=0.5*b*h;
 
   printf("%d\n",area1); 
   printf("%0.1f\n",area2);
   printf("%0.2f",area3);
 
  return 0; 
}
    