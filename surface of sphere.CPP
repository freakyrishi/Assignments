#include <stdio.h>
#include <conio.h>
void main()
{
int r;
clrscr();
float pi=3.142,res;
printf("enter r");
scanf("%d",&r);
res=4*pi*r*r;
printf("surface of sphere=%f",res);
getch();
}