Write a C program to print the following number pattern
55555
 4444
  333
   22
    1
#include<stdio.h>

 int main() 
 { 
   int i,j,r;

 scanf("%d",&r);
 for(i=r;i>=1;i--) 
  { 
    for(j=i;j<r;j++) 
      {
        printf(" ");
       
      }
    for(j=1;j<=i;j++) 
     { 
       printf("%d",i);
     }
    printf("\n");
  }


return 0;
} 
     