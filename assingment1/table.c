#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,a,sum;
   sum=0;
   printf("Enter the number : ");
   scanf("%d",&a);
   for(i=1;i<11;i++)
   {
     sum=a*i;
     printf("\n%d",sum);
   }
    return 0;
}
