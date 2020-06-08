#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int c;
    printf("Enter the Lenght and Width of Rectangle\n");
    printf("\nEnter the lenght of Rectangle :");
    scanf("%d",&a);
    printf("\nEnter the Width of Rectangle :");
    scanf("%d",&b);

    c=2*(a+b);
   printf("\n\nPerameter of Rectangle : %d",c);

    return 0;
}
