Write a C program to print the roots of a quadratic equation of the
form ax²+bx+c.
#include <stdio.h>
#include<math.h>
 
 int main()
{ 
  int a,b,c,D;
  float r1,r2;
 
scanf("%f%f%f",&a, &b, &c);

D=(b*b)-(4*a*c);

if(D>0) 
{
  r1= ((-1*b)+sqrt(D))/(2*a);
  r2=((-1*b)-sqrt(D))/(2*a);
 printf("Distinct Real: %0.2f , %0.2f",r1,r2);
}
else if(D<0) 
{
 r1= (-b) /(2*a);
 r2= sqrt(-D)/(2*a);
 printf("Complex:%0.2f + i%0.2f , %0.2f - i%0.2f",r1,r2,r1,r2);
}
else
{
  r1=((-1*b)/(2*a));
  r2=((-1*b)/(2*a));
  printf("Equal Real: %0.2f , %0.2f",r1,r2);
}

return 0;
}