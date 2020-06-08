#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;

   printf("Enter the first number : ");
   scanf("%d",&a);
   printf("\nEnter the second number : ");
   scanf("%d",&b);
   printf("\nEnter the third number : ");
   scanf("%d",&c);

    if (a>b)
    {
        if(a>c)
        {
            printf("Greatest Number is %d",a);
        }
        else
        {
            printf("Greatest Number is %d",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("Greatest Number is %d",b);

        }
        else
        {
            printf("Greatest Number is %d",c);
        }
    }



    return 0;
}
