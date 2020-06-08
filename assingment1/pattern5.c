#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j,k,sum;
    sum=5;

    for(i=0;i<5;i++)
    {
        sum=5;

        for(j=4;j>i;j--)
        {
        printf(" ");


        }
        for(k=0;k<=i;k++)
        {
            printf("%d",sum);
            sum--;
        }
        printf("\n");

    }

    return 0;
}
