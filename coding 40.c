Write a C program to count and display the number of vowels, 
consonants and space in a string. 
#include <stdio.h>

int main() 
{
  char Str[200];
   int v=0,c=0,s=0,i;
  
  fgets(Str,200,stdin);
  
  for(i=0;Str[i] !='\0';i++) 
   {
     if(Str[i]=='A'||Str[i]=='E'||Str[i]=='I'||
        Str[i]=='O'||Str[i]=='U'||Str[i]=='a'||
        Str[i]=='e'||Str[i]=='i'||Str[i]=='o'||
        Str[i]=='u') 
       {
         v++;
       }
     else if(Str[i]>='a' && Str[i]<='z') 
       {
         c++;
       }
     else if(Str[i]==' ') 
       { 
         s++;
       }
    }
  printf("%d\n%d\n%d",v,c,s);
    return 0;
}