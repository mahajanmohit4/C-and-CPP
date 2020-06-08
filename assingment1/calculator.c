#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a,b,add,sub,mul;
    float div;
    printf("Enter the two number : \n");
    printf("\nEnter the First Number :");
    scanf(" %d",&a);
    printf("\nEnter the Second Number :");
    scanf(" %d",&b);

    add=a+b;
    printf("\nAddion Of Two Number %d",add);

    sub=a-b;
    printf("\n\n Subtraction of Two Number %d:",sub);

    mul=a*b;
    printf("\n\n Multiplication of Two Number %d:",mul);

    div=a/b;
    printf("\n\n Division of Two Number %f;",div);


    return 0;
}
