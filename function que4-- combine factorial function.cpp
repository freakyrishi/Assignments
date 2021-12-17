//create a function with one integer parameter to accept number and to calculate
//display factorial number.

//with parameter with return 


#include<stdio.h>

int factorial(int num)
{
	int fact=1;
	while (num>0)
	{
		fact=fact*num;
		num--;
	}
	return fact;
}
int main()
{
	int num,res;
	printf("enter a number");
	scanf("%d",&num);
	res=factorial(num);
	printf("factorial is %d",res);
	
}

--------------------------------------------------------------------------------------

//without parameter with return


#include <stdio.h>
int factorial()
{
	int fact=1;
	int num;
	printf("enter a number");
	scanf("%d",&num);
	while (num>0)
	{
		fact=fact*num;
		num--;
	}
	return fact;
}
int main()
{
	int res;
	res=factorial();
	printf("factorial is %d",res);
}
---------------------------------------------------------------------------


//with parameter without return


#include <stdio.h>
void factorial(int num)
{
	int fact=1;
	
	while(num>0)
	{
		fact=fact*num;
		num--;
	}
	printf("factorial is %d",fact);
}
int main()
{
	int num;

	printf("enter a number");
	scanf("%d",&num);
	factorial(num);
}
-----------------------------------------


//without parameter without return

#include <stdio.h>
void factorial()
{
	int num;
	int fact=1;
	printf("enter a number");
	scanf("%d",&num);
	while (num>0)
	{
		fact=fact*num;
		num--;
	}
	printf("factorial is %d",fact);
}
int main()
{
	
	factorial();
	
}



	
