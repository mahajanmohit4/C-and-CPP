#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float hra,da;
    printf("Enter the number :");
    scanf("%d",&a);
    if(a<=4000)
    {
        hra=(a*10)/100;
        da=(a*50)/100;
        printf("\n HRA :%f ",hra);
        printf("\nDA :%f",da);
    }else if(a<=8000)
    {

        hra=(a*20)/100;
        da=(a*60)/100;
        printf("\n HRA :%f ",hra);
        printf("\nDA %f:",da);
    }else if(a<=12000)
    {

        hra=(a*25)/100;
        da=(a*70)/100;
        printf("\n HRA :%f ",hra);
        printf("\nDA :%f",da);
    }else if(a>12000)
    {
        hra=(a*300)/100;
        da=(a*80)/100;
        printf("\n HRA :%f ",hra);
        printf("\nDA :%f",da);
    }
    return 0;
}
