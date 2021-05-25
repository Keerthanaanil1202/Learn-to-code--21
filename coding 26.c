Write a C program to change the case of alphabets. 
#include <stdio.h>
#include<string.h>
 
 int main()
{ 
  char A[100]; 
  int i;
 
 fgets(A,100,stdin);
 
  for(i=0;A[i] !='\0' ;i++)
   {
     if(A[i]>='a' && A[i]<='z') 
      {
        A[i]=A[i]-32;
      }
    else if(A[i]>='A' && A[i]<='Z') 
      {
        A[i]=A[i]+32;
      }
    }
 printf("%s",A);
return 0;
}