Write a c program to find the minimum and maximum elements of an array. 
#include <stdio.h>

int main() 
{
  int A[30],n,i,min,max;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++) 
   {
     scanf("%d",&A[i]);
   }
 min=max=A[0];
 for(i=0;i<n;i++) 
  {
    if(min>A[i]) 
     {
      min=A[i];
     }
    else if (max<A[i]) 
     {
       max=A[i];
     }
   }

printf("%d\n%d",min,max);
    return 0;
}