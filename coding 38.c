Write a C program to count the number of words in string.Also reverse the string. 
#include<stdio.h>
#include<string.h>

int count(char *A) 
{
  int i,n=0;
   
  for(i=0;A[i];i++) 
   {
     if(A[i]==32) 
      {
        n++;
      }
   }
   if(i>0) 
    {
       n++;
    }
   return n;
}
char reverse(char A[],int i,int l) 
{
  int k;
  char t;
  t=A[i];
  A[i]=A[l-i];
  A[l-i]=t;
  if(i==l/2) 
   {
     return;
   }
 reverse(A,i+1,l);
}
int main() 
{
 char A[2000];
 int nos,l=0;

  gets(A) ;
  nos=count(A);
  printf("no of words = %d\n",nos);
  l=strlen(A);
  reverse(A,0,l-1);
  printf("%s",A);
  
return 0;
}


  
 
    
