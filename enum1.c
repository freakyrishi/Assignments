//simple problem of enum

#include <stdio.h>
enum weekdays{
sun,mon,tue,wed,thu,fri,sat};
int main()
{
	enum weekdays w;
	w=wed;
	printf("the number of wed is %d",w);
}
