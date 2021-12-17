//write a program perform additon of two numbers
// (( Without parameter and not returning anything ))

#include <stdio.h>
void addition()
{
	int n1,n2,res;
	printf("\nEnter two numbers");
	scanf("%d%d",&n1,&n2);
	res=n1+n2;
	printf("addition of two number is %d",res);
}
int main()
{
	printf("\ncalling a function from main function");
	addition();
}
