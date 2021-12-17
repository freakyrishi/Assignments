//function with parameter not returning anything
//creating a function addition with two parameters
#include <stdio.h>
void addition(int n1,int n2)
{
	int res;
	res=n1+n2;
	printf("addition of two number is %d",res);
}
int main()
{
	printf("\ncalling a function from main function");
	int n1,n2;
	printf("\n enter two numbers");
	scanf("%d%d",&n1,&n2);
	addition(n1,n2);
}
