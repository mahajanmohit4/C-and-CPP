#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,r,t;
    float intrest,total;
    printf("Enter the Principal :");
    scanf("%d",&p);
    printf("\nEnter the Rate :");
    scanf("%d",&r);
    printf("\nEnter the Time in Year :");
    scanf("%d",&t);
    intrest=(p*r*t)/100;

    printf("\nThe Interst is :%f",intrest);
    total=p+intrest;
    printf("\nThe Total Amount is: %f",total);
    return 0;
}
