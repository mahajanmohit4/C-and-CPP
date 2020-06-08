#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j,k,sum;
    int num,den;

    for(i=0;i<5;i++)
    {
        sum=1;

        for(j=4;j>i;j--)
        {
        printf(" ");


        }
        num=i;
        den=1;
        for(k=0;k<=i;k++)
        {
            printf("%d ",sum);
            sum=sum*num;
            sum=sum/den;
            num--;
            den++;
        }

        printf("\n");

    }

    return 0;
}
