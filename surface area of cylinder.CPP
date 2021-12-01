#include <stdio.h>
#include <conio.h>
void main()
{
int r,h;
clrscr();
float pi=3.142,res;
printf("enter r & h");
scanf("%d%d",&r,&h);
res=2*pi*r*(r+h);
printf("surface area of cylinder=%d",res);
getch();
}