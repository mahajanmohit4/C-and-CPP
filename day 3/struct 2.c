#include <stdio.h>
#include <stdlib.h>

    struct student
    {
       int rollNo;
        char name[20];
        int math,phy,chem;
        int num;
        float per;
    }s[10];

    void displayRecord(struct student s1);
int main()
{
    int i;
   // struct student s[i];
    for(i=0;i<5;i++)
    {
         printf(" \nEnter The Roll No : ");
        scanf("%d",&s[i].rollNo);

         printf("\n Enter The Name : ");
        scanf("%s",s[i].name);

         printf("\n Enter The Math Mark : ");
        scanf("%d",&s[i].math);

    printf(" Enter The phy mark: ");
        scanf("%d",&s[i].phy);

         printf(" \nEnter The chem : ");
        scanf("%d",&s[i].chem);

        s[i].num=s[i].math+s[i].chem+s[i].phy;
        s[i].per=s[i].num/3;
    }

    for(i=0;i<5;i++)
    {


    printf("\n Displaying Student's Record : ");
    printf("\n Roll No : %d ",s[i].rollNo);
     printf("\n Name : %s ",s[i].name);
     printf("\n math mark : %d ",s[i].math);
      printf("\n phy mark : %d ",s[i].phy);
       printf("\n chem mark : %d ",s[i].chem);
        printf("\n percentage : %f ",s[i].per);



    }
     //displayRecord(s[i]);

    return 0;
}
/*void displayRecord(struct student s1)
{
int i;
    for(i=0;i<5;i++)
    {


    printf("Displaying Student's Record : ");
    printf("Roll No : %d ",s1.rollNo);
    printf("Name : %s ",s1.name);
    printf("Age : %d ",s1.age);
    printf("Marks : %d ",s1.marks);
    }
}
*/
