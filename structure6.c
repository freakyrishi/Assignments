//create a structure employee having members 
//accepting values from the user for 3 different employees.


#include <stdio.h>
struct emp
{
	int number;
	int salary;
	char name[10];
	char desig_nation[20];
}emp1,emp2,emp3;
int main()
{
	printf("enter number ");
	scanf("%d",&emp1.number);
	printf("enter name ");
	scanf("%s",&emp1.name);
	printf("enter salary ");
	scanf("%d",&emp1.salary);
	printf("enter designation ");
	scanf("%s",&emp1.desig_nation);
	
	printf("employee number = %d\n",emp1.number);
	printf("employee name = %s\n",emp1.name);
	printf("employee salary = %d\n",emp1.salary);
	printf("employee designation = %s",emp1.desig_nation);
	
	printf("\n");
	
	printf("\nenter number ");
	scanf("%d",&emp2.number);
	printf("\nenter name ");
	scanf("%s",&emp2.name);
	printf("\nenter salary ");
	scanf("%d",&emp2.salary);
	printf("\nenter designation ");
	scanf("%s",&emp2.desig_nation);
	
	printf("employee number = %d\n",emp2.number);
	printf("employee name = %s\n",emp2.name);
	printf("employee salary = %d\n",emp2.salary);
	printf("employee designation = %s",emp2.desig_nation);
	
	printf("\n");
	
	printf("\nenter number ");
	scanf("%d",&emp3.number);
	printf("\nenter name ");
	scanf("%s",&emp3.name);
	printf("\nenter salary ");
	scanf("%d",&emp3.salary);
	printf("\nenter designation ");
	scanf("%s",&emp3.desig_nation);
	
	printf("employee number = %d\n",emp3.number);
	printf("employee name = %s\n",emp3.name);
	printf("employee salary = %d\n",emp3.salary);
	printf("employee designation = %s",emp3.desig_nation);
	
}

