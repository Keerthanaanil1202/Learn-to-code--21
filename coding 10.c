Write a C program to determine the factorial of a number. 
#include <stdio.h>

  int main()
{ 
   int n, i,ans=1;
  
   scanf("%d", &n);
 
  if(n<0)
   {
     printf("ERROR");
   }
  else
   {
    for(i=1;i<=n;i++)
    {
     ans=ans*i;
    }
 
   printf("%d",ans);
   }
  
 return 0;

}
    