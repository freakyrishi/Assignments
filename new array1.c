//write a program read array and display it.
/*Ans:-  enter array elements1
2
3
4
5

array element is=01
array element is=12
array element is=23
array element is=34
array element is=45*/


#include <stdio.h>
int main()
{
	int a[5],i;
	
	printf("enter array elements");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<5;i++)
	{
		printf("\narray element %d is %d",i,a[i]);
	}
	
}
