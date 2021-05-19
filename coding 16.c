Write a C program to compute the multiplication table of 1-5 using do while. 
#include<stdio.h>

 int main() 
 { 
   int i,n, multi;
do
{
printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
scanf("%d",&n);

if(n<6) 
{ 
  for(i=1;i<=10;i++)
   {
     multi=n*i;
     printf("%d ",multi) ;
   }
}
else if(n>6)
{
 printf("Enter a valid option\n");
}
}
while(n!=6);
return 0;

}
 
     