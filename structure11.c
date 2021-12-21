//create a structure using prototype function.

#include <stdio.h>
struct employee
{
	int salary;
	int id;
	char name[10];
};
void empl1(struct employee emp);

int main()
{
	struct employee emp,emp1,emp2;
	
	emp.salary=50000;
	emp.id=111;
	strcpy(emp.name,"rishi");
	empl1(emp);
	
	emp1.salary=60000;
	emp1.id=222;
	strcpy(emp1.name,"ritika");
	empl1(emp1);
	
	emp2.salary=70000;
	emp2.id=222;
	strcpy(emp2.name,"rajesh");
	empl1(emp2);
}
void empl1(struct employee emp)
{
	printf("\n");
	printf("Employee details\n");
	printf("\n");
	printf("Employe name = %s\n",emp.name);
	printf("Employe id = %d\n",emp.id);
	printf("Employe salary = %d\n",emp.salary);
}
