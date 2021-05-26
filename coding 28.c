Write a C program to read the values for a square 2-D array and 
print its main/principle and secondary diagonals. 
#include <stdio.h> 
 
int main()
{
  int A[30][30],i,j,n,m;

scanf("%d",&n);
scanf("%d",&m);
 if(n==m) 
 {
  for(i=1;i<=n;i++) 
   {
     for(j=1;j<=m;j++) 
      {
        scanf("%d",&A[i][j]);
      }
   }
   for(i=1;i<=n;i++) 
    {
      for(j=1;j<=m;j++) 
       {  
         if(i==j) 
         printf("%d ",A[i][j]);
       }
    }
  printf("\n") ;
   for(i=1;i<=n;i++) 
    {
      for(j=1;j<=m;j++)
       {
         if((i+j)==(n+1)) 
           printf("%d ",A[i][j]);
       }
    }
}
else 
 {
   printf("Error");
 }

return 0;
}