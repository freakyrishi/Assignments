//example using structure to interchange data from one to another

#include<stdio.h>

	struct product
	{
		int code;
		char name[20];
		float price;
	}p1,p2,temp;
int main()
{
	printf("\nEnter 1st product code,name and price");
	scanf("%d%s%f",&p1.code,&p1.name,&p1.price);

	printf("\nEnter 2nd product code,name and price");
	scanf("%d%s%f",&p2.code,p2.name,&p2.price);
	
		printf("\n before interchange");
		
    printf("\nProduct 1 Code=%d \nName=%s \nPrice=Rs.%.2f",p1.code,p1.name,p1.price);
	printf("\n");
	printf("\nProduct 2 Code=%d \nName=%s \nPrice=Rs.%.2f",p2.code,p2.name,p2.price);
	
	temp=p1;
	p1=p2;
	p2=temp;
	printf("\n After interchange");

	printf("\nProduct 1 Code=%d \nName=%s \nPrice=Rs.%.2f",p1.code,p1.name,p1.price);
	printf("\n");
	printf("\nProduct 2 Code=%d \nName=%s \nPrice=Rs.%.2f",p2.code,p2.name,p2.price);
	
}

