#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,sum;
    sum=0;
    for(i=1;i<6;++i)
    {
        for(j=1;j<=i;j++)
        {
            sum=i*j;
            printf("%d \t",sum);
        }
        printf("\n");
    }



    return 0;
}
