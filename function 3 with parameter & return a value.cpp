//function with parameter and return a value
//write a program enter number perform addition

#include <stdio.h>
int addition(int n1,int n2)
{
int res;
res=n1+n2;
return res;	
}
int main()
{
	int n1,n2,res;
	printf("enter two number");
	scanf("%d%d",&n1,&n2);
	res=addition(n1,n2);
	printf("addition of two number%d",res);
}
