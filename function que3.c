//function returning the max between two numbers

#include <stdio.h>
int max(int num1,int num2){
int res;
if (num1>num2)
res=num1;
else
res=num2;
return res;}
int main()
{
	int res=max(3,2);
	printf("maximum number is %d",res);
}


