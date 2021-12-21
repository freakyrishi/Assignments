/* example using structure to interchange data from one to another*/

#include<stdio.h>
struct veg
{
	char name[20];
	char type[20];	
}n1,n2,s;
int main()
{
	printf("enter name ");
	scanf("%s",&n1.name);
	printf("enter type ");
	scanf("%s",&n1.type);
	
	printf("enter name ");
	scanf("%s",&n2.name);
	printf("enter type ");
	scanf("%s",&n2.type);
	
	printf("name1 = %s\n",n1.name);
	printf("type1 = %s\n",n1.type);
	printf("name1 = %s\n",n2.name);
	printf("type1 = %s\n",n2.type);
	
	s=n1;
	n1=n2;
	n2=s;
	
	printf("name2 = %s\n",n1.name);
	printf("type2 = %s\n",n1.type);
	printf("name2 = %s\n",n2.name);
	printf("type2 = %s\n",n2.type);
	
}
