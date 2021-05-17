Write a C program to determine a triangle is valid from the given sides. 
#include<stdio.h>

 int main() 
 { 
   int a,b,c;
   
   scanf("%d%d%d",&a, &b, &c);
    
    if((a+b)>c)
      { 
        if((b+c)>a)
          { 
            if((a+c)>b)
              {
                printf("Yes");
              }
             else
              {
                printf("No");
              }
           }
         else
           { 
             printf("No");
           }
       }
    else
     {
       printf("No");
     }
    
 return 0;

}
    