Write a program to read n values from the user and store it in the array. 
Reprint the values stored in the array and also print the value of second 
element in the array. 
#include <stdio.h>
 
 int main()
{ 
  int A[100],n,a,i;
  scanf("%d", &n);

 for(i=1;i<=n;i++) 
  {
    scanf("%d",&A[i]);
  }
 printf("Entered array:");
 for(i=1;i<=n;i++) 
  {
    printf("%d ", A[i]);
  }
 printf("\n%d",A[2]);
return 0;
}