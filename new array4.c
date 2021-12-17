//write program read mark of 5 student calculate sum & avg using array.
/*Answer:= enter 5 integers
35
39
94
85
81
avg value66*/


#include <stdio.h>
int main()
{
	int a[5],i;
	int sum=0,avg;
	printf("enter 5 integers");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
		avg=sum/5;
	}
	printf("avg value%d",avg);
}
