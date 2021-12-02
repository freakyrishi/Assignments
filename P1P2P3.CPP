#include <stdio.h>
#include <conio.h>
void main()
{
int p1,p2,p3;
clrscr();
printf("enter age of 3 person");
scanf("%d%d%d",&p1,&p2,&p3);
if(p1>p2&&p1>p3)
{
printf("p1 is greater");
}
else
if(p2>p1&&p2>p3)
{
printf("p2 is greater");
}
else
if(p3>p1&&p3>p2)
{
printf("p3 is greater");
}
getch();
}