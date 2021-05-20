C program to find the HCF of two numbers. 
#include<stdio.h>

 int main() 
 { 
   int a,b, x, y,t, HCF;
scanf("%d%d",&x,&y) ;

 a=x;
 b=y;
 
while(b!=0)
 {
   t=b;
   b=a%b;
   a=t;
 }
HCF=a;
printf("%d",HCF);

return 0;

} 
     