// take any x and y value and calculte formula 2*x+y.

// with parameter with return.

#include <stdio.h>
int special(int x,int y)
{

	int res;
	res=2*x+y;
	return res;
}
int main()
{
	int x,y,res;
	printf("enter x");
	scanf("%d",&x);
	printf("enter y");
	scanf("%d",&y);
	res=special(x,y);
	printf("res= %d",res);
	
}



