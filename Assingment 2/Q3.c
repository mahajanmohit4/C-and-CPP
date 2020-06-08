#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    if (a%100==0)
    {
        printf("it is");
    }
    else
    {
        printf("its not");
    }
    return 0;
}
