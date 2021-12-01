#include <stdio.h>
#include <conio.h>
void main()
{
int radious;
clrscr();
float pi=3.142,res;
printf("enter radious");
scanf("%d",&radious);
res=2*pi*radious;
printf("circumference of circle=%f",res);
getch();
}