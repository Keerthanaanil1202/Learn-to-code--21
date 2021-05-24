Write a C program to check whether a number present in 1-D array or not. 
#include <stdio.h>
 
 int main()
{ 
  int A[100],n,i,x,num=0;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++) 
   {
     scanf("%d",&A[i]);
   }
  scanf("%d",&x);

  for(i=0;i<n;i++)
   { 
      if(x==A[i]) 
         num++;
   }
      if(num>0) 
       {
         printf("%d is present in this array",x);
        }
      else 
        {
          printf("%d is not present in this array",x);
        }
return 0;
}