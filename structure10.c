//create a structure using prototype function.

#include <stdio.h>
struct employee
{
	int id;
	int salary;
	char name[10];
	int pincode;
}emp;
void empl1(struct employee emp);

int main()
{
	emp.id=100;
	emp.salary=50000;
	emp.pincode=440034;
	strcpy(emp.name,"rishi");
	empl1(emp);
}
void empl1(struct employee emp)
{
	printf("enter details of employee");
	printf("\n employee Id = %d",emp.id);
	printf("\n employee name = %s",emp.name);
	printf("\n employee city pincode = %d",emp.pincode);
	printf("\n employee salary = %d",emp.salary);
}
