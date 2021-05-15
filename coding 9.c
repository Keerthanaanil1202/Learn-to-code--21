In a sequence of numbers from 1-100 replace the numbers divisible by 3 with 
" FIZZ" replace the numbers divisible by 5 with "BUZZ" and replace numbers 
divisible by 15 with "FIZZBUZZ" and print result.
#include <stdio.h>

  int main()
{ 
   int i;
 
for(i=1;i<=100;i++)
 { 
   if(i%15==0)
    { 
      printf("FIZZBUZZ ");
    }
   else if(i%3==0)
    { 
      printf("FIZZ ");
    }
   else if(i%5==0)
    {
      printf("BUZZ ");
    }
   else
    {
      printf("%d ",i);
    }
   }

 return 0;

}
    