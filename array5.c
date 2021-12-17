#include <stdio.h>
int main()
{
	int a[10],evencount,oddcount,i;
	printf("enter 10 element");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	if(a[i]%2==0)
	{
		printf("Even element=%d\n",a[i]);
	}
	else if(a[i]%2!=0)
	{
		printf("Odd number=%d\n",a[i]);
	}
	printf("\n");
	if(a[i]%2==0)
	{
		evencount++;
		printf("total even%d",evencount);
	}
	if(a[i]%2!=0)
	{
		oddcount++;
		printf("total odd%d",oddcount);
	}
}
