Write a C program to accept marks of 3 subjects. Calculate the percentage and respective grade
according to following: percent>=90 Grade A, percent>=80 Grade B, percent>=70 Grade C, percent>=60 
Grade D, percent>=40 Grade E and percent<40 Grade F. 
#include <stdio.h>

  int main()
{
  int a, b, c;
  float percent;

  scanf("%d%d%d",&a,&b,&c);
  
  percent=(a+b+c)/3.0;

 printf("%0.2f\n",percent);

  if(percent>=90)
   {
     printf("A");
   }
 else if(percent>=80)
   { 
     printf("B");
   }
 else if(percent>=70) 
   {
     printf("C");
   }
 else if(percent>=60) 
   {
     printf("D");
   }
 else if(percent>=40)
   { 
     printf("E");
   }
 else 
   {
     printf("F");
   }
  
 return 0;

}
    