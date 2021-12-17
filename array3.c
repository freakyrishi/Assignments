#include <stdio.h>
int main()
{
	int a[8],i,num;
	printf("enter 8 elements");
	scanf("%d",&num);
	printf("enter elements%d\num",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("%d",a[i]);
	}
	
}
