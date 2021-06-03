Write a C program to find the factorial of a number in recursive function. 
#include <stdio.h>

long int factorial(int n) 
{
  if(n>=1) 
   {
     return n*factorial(n-1);
   }
  else 
   {
     return 1;
   }
}
int main() 
{
  int n;
  scanf("%d",&n);
  if(n>=0) 
  {
   printf("%ld",factorial(n));
  }
  else 
  {
   printf("ERROR");
  }
    return 0;
}