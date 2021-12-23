#include <stdio.h>
enum grade{a=99,b=65,h=67,j=98};
int main()
{
	enum grade x;
	x=h;
	printf("grade number is %d",x);
}
