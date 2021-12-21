//create a structure account having members accountno,name, balance 
//create a function getaccount which return structure.

#include <stdio.h>
struct account
{
	int accno;
	char name[20];
	int balance;
	
};
struct account getemp()
{
	struct account acc1;
	printf("enter account number ");
	scanf("%d",&acc1.accno);
	printf("enter name ");
	scanf("%s",&acc1.name);
	printf("enter balance");
	scanf("%d",&acc1.balance);
	return acc1;
	
}
int main()
{
	struct account acc2;
	acc2=getemp();
	printf("\naccount number is = %d",acc2.accno);
	printf("\naccount name is = %s",acc2.name);
	printf("\naccount balance = %d",acc2.balance);
}

