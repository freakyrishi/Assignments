//write a program read 2d array matrix and calculate sum it.

#include <stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	printf("enter a matrix numbers");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
		scanf("%d",&a[i][j]);
    	}
	}
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",a[i][j]);
		sum=sum+a[i][j];
    	}
    	printf("\n");
    	
	}

	printf("\nsum of all values %d ",sum);
}

