Write a C program to read an array,then display the array
twice.Once using the index and the other time using
the array pointer. 
#include <stdio.h>

int main() 
{
  int A[100],i,n;
  scanf("%d",&n);
  
  for(i=0;i<n;i++) 
   {
     scanf("%d",&A[i]);
   }
 printf("DISPLAYING USING INDEX:");
  for(i=0;i<n;i++) 
   {
     printf(" %d",A[i]);
   }
  for(i=0;i<n;i++)
   {
     scanf("%d",A+i);
   }
 printf("\nDISPLAYING USING POINTERS:");
  for(i=0;i<n;i++) 
   {
     printf(" %d",*(A+i));
   }

return 0;
}