Write a C program to swap the value of 2 variables. 
#include <stdio.h>

int main()
{
    int a,b,k=0;

  scanf("%d%d",&a,&b);
  printf("a=%d b=%d",a,b);
   if(a>=0) 
    {
      k=a;
      a=b;
      b=k;
    }
    printf("\na=%d b=%d",a,b);
    return 0;
}