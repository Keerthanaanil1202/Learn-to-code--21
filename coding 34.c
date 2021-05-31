Write a C program to print inverted pyramid of *.
#include <stdio.h>

int main()
{
    int n,i,j,k;

    scanf("%d",&n);

    if(n>1)
    {
        for(i=n;i>=1;--i)
        {
            for(k=1;k<=n-i;k++)
             {
                printf("  ");
             }
            for(j=i;j<=2*i-1;j++)
             {
                printf("* ");
             }
            for(j=1;j<=i-1;j++) 
             { 
               printf("* ");
             }
            
            printf("\n");
        }

    }
    else
    {
        printf("ERROR");
    }

    return 0;
}