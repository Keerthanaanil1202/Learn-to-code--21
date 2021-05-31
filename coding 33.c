Write a C program to print half pyramid of numbers. 
#include <stdio.h>

int main() 
{
  int n,i,j;
  
scanf("%d",&n);
 
 if(n>1) 
{
  for(i=1;i<=n;i++) 
   {
     for(j=1;j<=i;j++) 
      {
        printf("%d ",j);
      }
     printf("\n");
   }
}
else 
{
 printf("ERROR");
}
 
    return 0;
}