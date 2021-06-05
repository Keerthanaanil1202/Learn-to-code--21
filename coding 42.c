Write a C program to find the second maximum element in 
an array of integer elements. 
#include <stdio.h>
#include <limits.h>

int main() 
{
  int A[100],i,n,l1,l2;
  scanf("%d",&n);
  
  for(i=0;i<n;i++) 
   {
     scanf("%d",&A[i]);
   }
  l1=l2=INT_MIN;
  for(i=0;i<n;i++)
   { 
     if(l1<A[i]) 
      {
        l2=l1;
        l1=A[i];
      }
     else if(l2<A[i] && l1>A[i]) 
       {
         l2=A[i];
       }
    }
 printf("%d",l2);
return 0;
}