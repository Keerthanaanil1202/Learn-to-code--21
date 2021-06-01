Write a C program to input 2 numbers.If the sum of the numbers is even, find
the reverse of the sum.If the sum is odd,check whether the sum is prime 
or not. 
#include <stdio.h>

int main()
{
  int a,b,sum,rem,rev=0,p=0,i;
  
  scanf("%d%d",&a,&b);
  sum=a+b;
  
  if(sum%2==0) 
   {
    printf("%d",sum);
    while(sum !=0) 
     {
      rem= sum%10;
      rev=rev*10+rem;
      sum/=10;
     }
      printf("\n%d",rev);
   }
   else
    {
      printf("%d\n",sum);
      for(i=2;i<=sum/2;i++) 
       {
         if(sum%i==0) 
          { 
            p=1;
            break;
          }
       }
    if(sum==1) 
     {
       printf("1 is neither prime nor composite");
     }
    else 
     {
       if(p==0) 
        {
          printf("Prime");
        }
        else
         {
           printf("Not prime");
         }
     }
     }
    return 0;
}