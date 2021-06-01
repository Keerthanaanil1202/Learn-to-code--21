Write a C program to input two numbers.If sum of the numbers is even,find
the reverse of the sum.If the sum is odd,check whether the sum is prime or not. 
#include <stdio.h>

 int reverse(int sum)
  {
    int rev=0,rem;
    while(sum !=0) 
     {
      rem= sum%10;
      rev=rev*10+rem;
      sum/=10;
     }
    return rev;
  }
  int prime(int p) 
   {
      int i;
      for(i=2;i<=p-1;i++) 
       {
         if(p%i==0) 
          { 
            return 0;
          }
       }
       return 1;
    }
 int main() 
 {
   int a,b,sum,r,result;
   scanf("%d%d",&a,&b);
   sum=a+b;
  if(sum%2==0) 
  {
   r=reverse(sum);
   printf("%d\n%d",sum,r);
  }
  else
  {
    printf("%d",sum);
    result=prime(sum);
   if(result==1) 
    {
      printf("\nPrime");
    }
   else
    {
      printf("\nNot prime");
    }
  }
 
    return 0;
}