Write the C program to check whether a number is Armstrong or not. 
#include<stdio.h>

int Ams(int num) 
{
  int x=0,p=0,s=0,n=num;
  
  while(n !=0)
  {
    x=n%10;
    p=x*x*x;
    s+=p;
    n/=10;
  }
  if(s==num)
   { 
     return 0;
   }
  else
   {
     return 1;
   }
}
int main() 
{
  int num;
  scanf("%d",&num);
  if(Ams(num)==0) 
   {
     printf("Amstrong");
   }
  else 
   {
     printf("Not amstrong");
   }
return 0;
}

  

  
 
