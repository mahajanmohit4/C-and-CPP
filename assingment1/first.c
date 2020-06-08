#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,diameter;
	float area,circumference,p;
	p=3.14;
	printf("Enter the radius : ");
	scanf("%d",&r);

	diameter=2*r;
	printf("\n\nDiameter is :%d",diameter);

	circumference=2*p*r;
	printf("\n\nCircumference is :%f",circumference);

	area=p*r*r;
	printf("\n\nArea is :%f",area);
    return 0;
}
