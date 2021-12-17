//write a program enter 10 integer and count odd and even numbers
/* enter array of 10 integers
1
2
3
4
35
6
7
8
9
10
total even number are 5
total odd number are 5*/


#include <stdio.h>
int main()
{
	int a[10],i;
	int odd=0,even=0;
	printf("enter array of 10 integers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	    if(a[i]%2==0)
	    {
	
			even=even+1;}
	
		else
		{
		
		odd=odd+1;}
	}
	printf("total even number are %d",even);
	printf("\ntotal odd number are %d",odd);
}
