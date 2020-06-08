#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[10],even,odd,neg;
    even=0;
    odd=0;
    neg=0;

    printf("Enter the number :");

    for(i=0;i<=10;i++)
    {

       // printf("\na[i] :");
    scanf("%d",&a[i]);

    }
    for(i=0;i<=10;i++)
    {

    if(a[i]%2==0)
    {
        even++;
    }
    else
    {
        odd++;

    }
     if (a[i]<0)
    {
        neg++;
        
    }

    }

    printf("\n number of even :%d ",even);
    printf("\n number of odd :%d",odd);
    printf("\n number of negative number :");
    return 0;

}
