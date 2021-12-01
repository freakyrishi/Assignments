#include <stdio.h>
#include <conio.h>
void main()
{
int radious;
clrscr();
float pi=3.142,res;
printf("enter radious");
scanf("%d",&radious);
res=pi*radious*radious;
printf("area of circle=%f",res);
getch();
}