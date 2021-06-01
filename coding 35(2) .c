Write a C program to swap the value of 2 variables. 
#include <stdio.h>

int main()
{
    int x,y;

  scanf("%d%d",&x,&y);
  printf("a=%d b=%d",x,y);
  swap(x,y);
  return 0;
}
void swap(int a,int b)
 {
   int k=0;
      k=a;
      a=b;
      b=k;
    printf("\na=%d b=%d",a,b);
 }
