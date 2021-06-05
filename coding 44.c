Write a C program that reads and displays the details of 4 students. 
The structure should contain the RollNo(int),FirstName(string) and 
marks(float). 
#include <stdio.h>

struct stud
{
 char N[100];
 int r;
 float m;
};
int main()
{
  int i;
  struct stud s[4];
  for(i=0;i<4;i++) 
   {
     scanf("%d",&s[i].r);
     scanf("%s",s[i].N);
     scanf("%f",&s[i].m);
   }
   for(i=0;i<4;i++) 
   {
    printf("DETAILS OF ROLLNO %d\n",s[i].r);
    printf("NAME: %s\n",s[i].N);
    printf("MARKS: %0.2f\n",s[i].m);
   }

return 0;
}