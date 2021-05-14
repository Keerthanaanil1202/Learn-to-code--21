Write a C program to verify if a given year is a leap year or not. 
#include <stdio.h>

  int main()
{ 
  int year;
   
   scanf("%d",&year);
  
   if((year%400==0)||((year%4==0)&&(year%100!=0)))
    { 
      printf("Yes");
    }
   else
    { 
      printf("No");
    }
    
 return 0;

}
    