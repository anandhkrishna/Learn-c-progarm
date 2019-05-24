#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int i,n,j;
    n=1;
    for(i=0;i<5;i++)
    {
        printf("\n");
        
        for(j=0;j<i;j++)
        {
            printf("\t%d",n);
            n=n+1;
        }
    }
    return 0;
}

