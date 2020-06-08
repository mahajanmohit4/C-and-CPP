#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Number 1 to 10 :\n");
    for(i=1;i<11;i++)
    {
        printf("\t%d",i);
    }
    printf("\nSquare of 1 to 10 :\n");
    for(i=1;i<11;i++)
    {
        printf("\t%d",i*i);
    }
    printf("\nCube of 1 to 10 :\n");
    for(i=1;i<11;i++)
    {
        printf("\t%d",i*i*i);
    }
    return 0;
}
