//create a structure student having members rno,name,city,state

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
	student1.rollno=1;
	strcpy(student1.name,"rohan");
	strcpy(student1.city,"kanpur");
	strcpy(student1.state,"up");
		
	printf("roll no is =%d\n",student1.rollno);
	printf("name = %s\n",student1.name);
	printf("city = %s\n",student1.city);
	printf("state = %s\n",student1.state);
	printf("\n");
	
	student2.rollno=2;
	strcpy(student2.name,"vicky");
	strcpy(student2.city,"kolhapur");
	strcpy(student2.state,"mh");
	
	printf("roll no is =%d\n",student2.rollno);
	printf("name = %s\n",student2.name);
	printf("city = %s\n",student2.city);
	printf("state = %s",student2.state);
		
}
