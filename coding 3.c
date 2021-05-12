#include <stdio.h>

  int main()
{ 
   int a, b;
   int sum, sub, multi;
   float div;

   scanf("%d%d",&a,&b);

   sum= a+b;
   sub= a-b;
   multi= a*b;
   div= (float) a/b;
 
   printf("%d \n",sum); 
   printf("%d \n",sub);
   printf("%d \n",multi); 
   printf("%0.2f\n" ,div); 
 
 
  return 0; 
}
    