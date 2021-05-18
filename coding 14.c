Write a C program to display a calculator with a menu consisting of each operation to
perform on the numbers using switch case statement. 
#include<stdio.h>

 int main() 
 { 
   float a,b;
  int option;
 printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n"); 
  
  scanf("%d\n", &option);
  scanf("%f%f", &a, &b);
  
  switch(option) 
  {
    case 1:
       printf("%0.0f\n",a+b);
       break;
    case 2:
       printf("%0.0f\n",a-b);
       break;
    case 3:
       printf("%0.0f\n",a*b);
       break;
    case 4:
      if(b==0) 
       {
         printf("Cannot be determined");
       }
      else 
      {
       printf("%0.1f",a/b);
      }
       break;
    default:
       printf("Error") ;
   }
 
 return 0;

}
 
     