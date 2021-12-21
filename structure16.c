//structure to store student rollno,name,marks of 3 sub and calculate percentage .

#include <stdio.h>
struct student 
{
	int roll;
	char name[20];
	int m1;
	int m2;
	int m3;
	float per;	
}a;
int main()
{
	printf("enter name ");
	scanf("%s",&a.name);
	printf("enter roll ");
	scanf("%d",&a.roll);
	printf("enter mark1 ");
	scanf("%d",&a.m1);
	printf("enter mark2 ");
	scanf("%d",&a.m2);
	printf("enter mark3 ");
	scanf("%d",&a.m3);
	
	a.per=(a.m1+a.m2+a.m3)*100/300;
	
	printf("\nroll number is = %d\n",a.roll);
	printf("name is = %s\n",a.name);
	printf("percentage = %.2f\n",a.per);
	
	
}
