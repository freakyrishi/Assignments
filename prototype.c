#include<stdio.h>
//declaring function prototype
void factorial(int);
int main() {
		
		int num;
	printf("enter number "); //suppose num =5  so factorial = 5*4*3*2*1 =120
	scanf("%d",&num);

	factorial(num);

	
}

void factorial(int num)
{
int fact=1;
	while(num > 0)
	{
		fact =fact * num; // fact = fact =fact * num   120*1 =120
		num--  ;  // num= 0
	}
		printf("factorial =%d",fact);
	
}

