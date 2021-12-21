//create a structure student having members rno,name,course,fees pass this 
//structure to print the structure using function.

#include <stdio.h>
struct student
{
	int rollno;
	int fees;
	char course[10];
	char name[10];
	
};
void s(struct student stu);
int main()
{
	struct student stu,stu1;
	
	stu.fees=20000;
	stu.rollno=1;
	strcpy(stu.name,"Rishi");
	strcpy(stu.course,"dotnet");
	s(stu);
	
	stu1.fees=60000;
	stu1.rollno=2;
	strcpy(stu1.name,"Ritika");
	strcpy(stu1.course,"language");
	s(stu1);
	
}
void s(struct student stu)
{
	printf("\n");
	printf("\nDetails of Student\n");
	
	printf("\nName = %s",stu.name);
	printf("\nRoll No = %d",stu.rollno);
	printf("\nCourse = %s",stu.course);
	printf("\nFees = %d",stu.fees);
	
	
}
