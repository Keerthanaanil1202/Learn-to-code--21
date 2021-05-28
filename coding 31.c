Write a C program to arrange the elements in ascending order. 
#include <stdio.h>

int main() 
{
  int A[30],n,i,k,a;
 
  scanf("%d",&n);
  for(i=0;i<n;i++) 
   { 
     scanf("%d",&A[i]);
   }
  for(i=0;i<n;i++) 
   {
     for(k=i+1;k<n;k++) 
      {
       if(A[i]>A[k]) 
       {
         a=A[i];
         A[i]=A[k];
         A[k]=a;
       }
      }
   }
for(i=0;i<n;i++) 
 {
   printf("%d ",A[i]);
 }
    return 0;
}