#include <stdio.h>
#include <conio.h>
void main()
{
int volume,b,h;
clrscr();
printf("enter b & H");
scanf("%d%d",&b,&h);
volume=0.33*b*h;
printf("volume=%d",volume);
getch();
}