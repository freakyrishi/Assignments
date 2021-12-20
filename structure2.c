//1- create a structure product having members prodid,prodname, price.

#include <stdio.h>
struct product
{
	int product_id;
	char name[10];
	int price;
}product1;
int main()
{
	product1.product_id=123;
	strcpy(product1.name,"lifebuoy");
	product1.price=120;
	
	printf("product id = %d\n",product1.product_id);
	printf("product name = %s\n",product1.name);
	printf("product price = %d",product1.price);
}
