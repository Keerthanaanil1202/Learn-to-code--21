Write a C program to display the product of two 2-D arrays.Given values for both the 2-D arrays. 
#include <stdio.h>

int main()
{
    int A[30][30],i,j,k,r1,r2,c1,c2,B[30][30],C[30][30];
          
    scanf("%d",&r1);
    scanf("%d",&c1);
    
    for(i=0;i<r1;i++) 
     {  
       for(j=0;j<c1;j++) 
        {
          scanf("%d",&A[i][j]);
        }
     }
    scanf("%d",&r2);
    scanf("%d",&c2);
    
    for(i=0;i<r2;i++) 
     {
       for(j=0;j<c2;j++)
        { 
          scanf("%d",&B[i][j]);
        }
     }
if(r2==c1) 
{
  for(i=0;i<r1;i++) 
   {
    for(j=0;j<c2;j++) 
     {
       C[i][j]=0;
       for(k=0;k<c1;k++)
        {
          C[i][j]+=A[i][k]*B[k][j];
        }
     }
   }
   for(i=0;i<r1;i++) 
    {
      for(j=0;j<c2;j++) 
       {
         printf("%d ",C[i][j]);
        if(j==c2-1) 
         printf("\n");
        }
    }
  }
else
 printf("ERROR");
          
return 0;
}