#include <stdio.h>
#include <conio.h>
void main()
{
int num,r;
clrscr();
printf("enter a number divisible by 4");
scanf("%d",&num);
r=num%4;
if(r!=4)
{
printf("r is not divisible by 4");
}
else(r==4)
{
printf("r is divisible by 4");
}
getch();
}