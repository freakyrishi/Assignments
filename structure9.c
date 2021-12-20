//8- create a structure array of 10 elements of student strucure

#include <stdio.h>
struct student
{
	int stand;
	char name[10];
	int rollno;
}stu1[10];
int main()
{
	int i;
	for(i=1;i<10;i++)
	{
		printf("enter name ");
		scanf("%s",&stu1[i].name);
		printf("enter rollno ");
		scanf("%d",&stu1[i].rollno);
		printf("enter standard ");
		scanf("%d",&stu1[i].stand);
	}
	printf ("10 students data given below\n");
	for(i=0;i<10;i++)
	{
		printf("details of 10 student_________\n",i+1);
		printf("name = %s\n",stu1[i].name);
		printf("roll number = %d\n",stu1[i].rollno);
		printf("standard = %d\n",stu1[i].stand);
	}
}
