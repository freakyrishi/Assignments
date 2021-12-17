//write program read an integer and reverse it
#include <stdio.h>
void main()
{
	int a[5],i;
	printf("enter an array element");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
    {
	printf("\narray element index %d is %d",i,a[i]);
    }
    printf("\n");
    for(i=5;i>0;i--)
    {
    	printf("\narray element index %d is %d",i,a[i]);
	}
}
