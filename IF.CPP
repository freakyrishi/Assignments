#include <stdio.h>
#include <conio.h>
void main()
{
int num,r;
clrscr();
printf("enter a number divided by 4");
scanf("%d",&num);
r=num%4;
if (r==0)
{
printf("the number is divisible by 4");
}
if(r!=0)
{
printf("the number is not divisible by 4");
}
getch();
}