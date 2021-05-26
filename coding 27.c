Write a C program to read a 2-D array and display it. 
#include <stdio.h> 
 
int main()
{
  int A[30][30],i,j,n,m;

scanf("%d",&n);
scanf("%d",&m);
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
         printf("%d ",A[i][j]);
       }
      printf("\n") ;
    }
    
return 0;
}