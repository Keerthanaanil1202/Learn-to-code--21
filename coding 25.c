Write a program in C to find the frequency of characters. 
#include <stdio.h>
#include<string.h>
 
 int main()
{ 
 char A[100],ch;
 int num=0,i;
  
fgets(A,100,stdin);
scanf("%c",&ch);

for(i=0;A[i] !='\0';i++)
{
  if(A[i]==ch) 
   {
     num++;
   }
}
printf("%d",num);

return 0;
}