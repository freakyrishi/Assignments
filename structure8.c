//create a structure array  of 5 elements of product structure

#include <stdio.h>
struct product
{
	int price;
	char name[20];
	
} pro1[5];
int main()
{
	int i;
	for (i=0;i<5;i++)
	{
		printf("enter name");
		scanf("%s",&pro1[i].name);
		printf("\nenter price\n");
		scanf("%d",&pro1[i].price);
	}
	printf("enter details of 5 products\n");
	
	for (i=0;i<5;i++)
	{
		printf("pro1[%d]\n",i+1);
		printf("product name= %s\n",pro1[i].name);
		printf("product price= %d\n",pro1[i].price);
	}
	
	
}
