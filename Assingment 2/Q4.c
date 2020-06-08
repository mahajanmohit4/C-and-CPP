#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the Month :");
    scanf("%d",&a);

        if(a>12)
            {
                printf("invalid mounth");
            }
    switch(a)
    {

        case 1:
        {
            printf("jan");
        }
        case 2:
        {
            printf("feb");
        }
        case 3:
        {
            printf("march");
        }
        case 4:
        {
            printf("april");
        }
        case 5:
        {
            printf("may");
        }
        case 6:
        {
            printf("june");
        }
        case 7:
        {
            printf("july");
        }
        case 8:
        {
            printf("aug");
        }
        case 9:
        {
            printf("sep");
        }
        case 10:
        {
            printf("oct");
        }case 11:
        {
            printf("nov");
        }
        case 12:
        {
            printf("des");
        }

    }

    return 0;
}
