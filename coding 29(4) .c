Write a C program to read a 2-D array.Then search for a particular given element. 
If found,display each occurrence of that element with its position. 
#include <stdio.h>

int main()
{
    int A[30][30],i,j,m,n,num,t=0;
    
    scanf("%d",&n);
    scanf("%d",&m);
    
    for(i=0;i<n;i++) 
     {
       for(j=0;j<m;j++) 
        {
          scanf("%d",&A[i][j]);
        }
     }
     
     scanf("%d",&num);
    
    for(i=0;i<n;i++) 
     {
       for(j=0;j<m;j++) 
        { 
        
          if(num==A[i][j])
           {  
            printf("Element found at (%d,%d)\n",i,j);
             t++;
           }
        }
      }
    if(t==0) 
       printf("Element not found ");
          
    return 0;
}