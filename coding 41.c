Write a C program to find the number of prime numbers in array 
of integers. 
#include <stdio.h>

int main() 
{
  int A[100],i,n,p,j,c=0;
  scanf("%d",&n);
  
  for(i=0;i<n;i++) 
   {
     scanf("%d",&A[i]);
   }
 for(i=0;i<n;i++) 
 { 
  p=0;
  for(j=2;j<A[i];j++) 
   { 
     if((A[i]%j)==0) 
     {
      p=1;
      break;
     }
    }
   if(p==0) 
   {
     c++;
   }
 }
printf("%d",c);
    return 0;
}