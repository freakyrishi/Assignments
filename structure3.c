//create a structure product having members prodid,prodname, price accepting value
//from user.

#include <stdio.h>
struct product
{
	int product_id;
	char name[10];
	int price;
};
int main()
{
	struct product product1;
	printf("Enter product id");
	scanf("%d",&product1.product_id);
	printf("Enter product name");
	scanf("%s",&product1.name);
	printf("Enter price");
	scanf("%d",&product1.price);
	
	printf("----------------------------------------------------------\n");

	printf("product id = %d\n",product1.product_id);
	printf("product name = %s\n",product1.name);
	printf("product price = %d",product1.price);
	
	
}
