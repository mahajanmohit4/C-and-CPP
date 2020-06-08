#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n[10],selery[12];
    char name[10][10],depatment[10][10];
    printf("Enter the employee data :");
    for(i=1;i<=10;i++)
    {
        printf("\nEnter the employee number :");
        scanf("%d",&n[i]);

        printf("\nEnter the employee name :");
        scanf("%s",&name[i]);

       printf("\nEnter the employee department :");
        scanf("%s",&depatment[i]);

         printf("\nEnter the employee selery :");
        scanf("%d",&selery[i]);




    }
for (i=1;i<=10;i++)
{
    printf("\nnumber :%d",n[i]);
    printf("\nname :%s",name[i]);
    printf("\ndepartment :%s",depatment[i]);
    printf("\nselery :%d",selery);
}



    return 0;




}
