Write a C program to print the Fibonacci series starting from 0 and the upperlimit is
determined by the user. 
#include <stdio.h>
 
 int main()
{ 
  int a,b,n,i,ans;
 
  a=0; 
  b=1;
 
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
  {
    printf("%d ",a);
    ans=a+b;
    a=b;
    b=ans;
  }
return 0;
}
     