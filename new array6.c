/*write array program performing sum operation
10
20
30
40
50
sum of alll values150*/

#include <stdio.h>
int main()
{
	int a[5];
	int i,sum=0;
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of alll values%d ",sum);
}
