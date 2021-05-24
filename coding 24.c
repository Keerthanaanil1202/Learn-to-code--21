Write a C program to find the frequency of odd and even numbers in the 1-D array. 
#include <stdio.h>
 
 int main()
{ 
  int A[100],n,i,num1=0,num2=0;
 
  scanf("%d",&n);
  
 for(i=0;i<n;i++) 
  {
    scanf("%d",&A[i]);
  }
 for(i=0;i<n;i++) 
  {
    if(A[i]%2==0) 
     { 
       num1++;
     }
    else if(A[i]%2!=0) 
      { 
        num2++;
      }
   }
  printf("%d",num1);
  printf("\n%d",num2);
return 0;
}