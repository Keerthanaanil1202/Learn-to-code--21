Write a C program to identify if a number is palindrome or not.
#include<stdio.h>

 int main() 
 { 
   int a,r=0,rem,p;
 scanf("%d",&a);
  p=a;
 while(a!=0)
  { 
    rem=a%10;
    r=r*10+rem;
    a/=10;
  }
 if(p==r) 
  {
    printf("Yes");
  }
 else
  {
    printf("No");
  }
 
return 0;

} 
     