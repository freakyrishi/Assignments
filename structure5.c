//create a structure student having members rno,name,city,state.accepting by user.

#include <stdio.h>
struct student
{
	int rollno;
	char name[10];
	char city[10];
	char state[10];
}student1,student2;
int main()
{
	printf("enter rollno");
	scanf("%d",&student1.rollno);
	printf("enter name");
	scanf("%s",student1.name);
	printf("enter city");
	scanf("%s",student1.city);
	printf("enter state");
	scanf("%s",student1.state);
		
	printf("roll no is =%d\n",student1.rollno);
	printf("name = %s\n",student1.name);
	printf("city = %s\n",student1.city);
	printf("state = %s\n",student1.state);
	printf("\n");
	
	printf("enter rollno");
	scanf("%d",&student2.rollno);
	printf("enter name");
	scanf("%s",student2.name);
	printf("enter city");
	scanf("%s",student2.city);
	printf("enter state");
	scanf("%s",student2.state);
	
	printf("roll no is =%d\n",student2.rollno);
	printf("name = %s\n",student2.name);
	printf("city = %s\n",student2.city);
	printf("state = %s",student2.state);
		
}
