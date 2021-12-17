//function without parameter and return a value.

#include <stdio.h>
float addition()
{
	float n1,n2,res;
	printf("enter a 2 number");
	scanf("%f%f",&n1,&n2);
	res=n1+n2;
	return res;
}
int main()
{
	float res;
	printf("\n calling function from main function");
	res=addition();
	printf("addition of two number %f",res);
}
