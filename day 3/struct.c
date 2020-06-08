#include <stdio.h>
#include <stdlib.h>

    struct student
    {
       int rollNo;
        char name[20];
        int age;
        int marks;
    };

    void displayRecord(struct student s1);
int main()
{
    struct student s2;

        printf(" Enter The Roll No : ");
        scanf("%d",&s2.rollNo);

        printf(" Enter The Name : ");
        scanf("%s",s2.name);

        printf(" Enter The Age : ");
        scanf("%d",&s2.age);

        printf(" Enter The Marks : ");
        scanf("%d",&s2.marks);

     displayRecord(s2);

    return 0;
}
void displayRecord(struct student s1)
{
    printf("Displaying Student's Record : ");
    printf("Roll No : %d ",s1.rollNo);
    printf("Name : %s ",s1.name);
    printf("Age : %d ",s1.age);
    printf("Marks : %d ",s1.marks);
}
