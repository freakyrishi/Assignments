//basic problem of goto.

#include <stdio.h>
int main()
{
	int num;
	printf("enter number");
	scanf("%d",&num);
	if(num==1)
	{
	goto level1;}
	else if (num==2)
	{
	goto level2;}
	else 
	goto level3;
	
	level1:
		printf("\nNo 1.");
		goto level3;
	level2:
		printf("\nNo 2.");
		goto level3;
	level3:	
		printf("\nany number");
		
}
