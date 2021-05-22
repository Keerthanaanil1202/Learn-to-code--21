A[10]={10,25,8,14,3,23,1,0,12,9}
1)Print the value of 4th element. 
2)Print the value of last element. 
3)Change the value of 3rd element to 30 and 
print the new value. 
4)Print all the elements stored in the new array. 
#include <stdio.h>
 
 int main()
{ 
  int A[10]={10,25,8,14,3,23,1,0,12,9},n,i;
  
  printf("%d",A[3]);
  printf("\n%d",A[9]);

  A[2]=30;
  printf("\n%d\n",A[2]);
 
  for(i=0;i<10;i++)  
   {
     printf("%d ",A[i]);
   }

return 0;
}