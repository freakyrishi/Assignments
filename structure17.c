//create a structure employee having members empno,empname,salary, designation
//create a function getemployee which return structure.

#include <stdio.h>
struct employee
{
	int empno;
	char name[20];
	int salary;
	char desig[20];
};
struct employee getbook()  // void ke jagh pe struct employee liye hai
{
	struct employee emp1;
	printf("enter employee number ");
	scanf("%d",&emp1.empno);
	printf("enter name ");
	scanf("%s",&emp1.name);
	printf("enter salary ");
	scanf("%d",&emp1.salary);
	printf("enter designation ");
	scanf("%s",&emp1.desig);
	return emp1;
}
int main()
{
	struct employee emp2; // emp2 liye hai return karne ke liye uper getbook() ko
	emp2=getbook();
	printf("\nemployee number = %d",emp2.empno);
	printf("\nemployee name = %s",emp2.name);
	printf("\nemployee salary = %d",emp2.salary);
	printf("\nemployee designation = %s",emp2.desig);
}

